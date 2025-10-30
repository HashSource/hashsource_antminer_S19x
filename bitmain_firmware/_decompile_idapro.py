#!/usr/bin/env python3
"""Automated binary decompilation using haruspex/IDA Pro."""

from __future__ import annotations

import logging
import re
import subprocess
import sys
from dataclasses import dataclass
from datetime import datetime
from functools import lru_cache
from pathlib import Path
from typing import Final

# Constants
BINARIES_DIR: Final = Path("_binaries")
LOG_FILE: Final = Path("_decompile_idapro.log")
TIMEOUT_SECONDS: Final = 600
FILE_CHECK_TIMEOUT: Final = 2

# Regex patterns
HASH_SUFFIX_PATTERN: Final = re.compile(r"^(.+?)_[a-f0-9]{16}$")

# Bitmain-specific binary name patterns (whitelist)
BITMAIN_BINARIES: Final = {
    "accelerometer",
    "antlogin",
    "bitmain_axi.ko",
    "bmminer",
    "cgminer-api",
    "cgminer",
    "devmem2",
    "eeprog",
    "eeprom",
    "eepromer",
    "FileParser",
    "fpga_mem_driver.ko",
    "fpgaminer-api",
    "godminer",
    "id2mac",
    "lcd_test",
    "lcd12864i_driver.ko",
    "lcd12864i",
    "led-blink",
    "miner-monitor",
    "monitor-ipsig",
    "monitor-recobtn",
    "single_board_test",
    "single-board-test",
    "update-daemon",
}


def setup_logging() -> None:
    """Configure logging with file and console handlers."""
    logging.basicConfig(
        level=logging.INFO,
        format="%(asctime)s [%(levelname)s] %(message)s",
        datefmt="%Y-%m-%d %H:%M:%S",
        handlers=[
            logging.FileHandler(LOG_FILE, mode="w", encoding="utf-8"),
            logging.StreamHandler(sys.stdout),
        ],
    )


@dataclass(frozen=True, slots=True)
class DecompileStats:
    """Statistics for decompilation run."""

    success: int = 0
    failed: int = 0
    skipped: int = 0

    @property
    def total_processed(self) -> int:
        """Total successfully processed files."""
        return self.success

    @property
    def total_attempted(self) -> int:
        """Total files attempted to decompile."""
        return self.success + self.failed


@lru_cache(maxsize=1024)
def is_elf(path: Path) -> bool:
    """Check if file is an ELF binary using file command.

    Args:
        path: Path to file to check

    Returns:
        True if file is an ELF binary, False otherwise
    """
    if not path.exists() or not path.is_file():
        return False

    try:
        result = subprocess.run(
            ["file", "--brief", str(path)],
            capture_output=True,
            text=True,
            timeout=FILE_CHECK_TIMEOUT,
            check=False,
        )
        return "ELF" in result.stdout
    except (subprocess.TimeoutExpired, FileNotFoundError, OSError):
        logging.warning(f"Could not check file type: {path}")
        return False


def extract_base_name(filename: str) -> str | None:
    """Extract base name from filename with hash suffix.

    Args:
        filename: Filename potentially with hash suffix (e.g., 'cgminer-api_abc123def456')

    Returns:
        Base name without hash (e.g., 'cgminer-api') or None if no hash found
    """
    if "_" not in filename:
        return None

    if match := HASH_SUFFIX_PATTERN.match(filename):
        return match.group(1)

    return filename.split("_")[0]


@lru_cache(maxsize=512)
def has_bitmain_identifier(path: Path) -> bool:
    """Check if binary contains unique Bitmain build identifiers.

    Scans for strings that uniquely identify Bitmain-built software.

    Args:
        path: Path to binary file

    Returns:
        True if Bitmain identifiers found, False otherwise
    """
    # Simple identifiers unique to Bitmain (verified not in standard tools)
    identifiers = (
        b"bitmain",  # Company name / function prefix
        b"cgminer",  # Mining software
        b"antminer",  # Product line
        b"stratum",  # Mining protocol
        b"eeprom",  # EEPROM programming tools
    )

    try:
        result = subprocess.run(
            ["strings", "-n", "6", str(path)],
            capture_output=True,
            timeout=5,
            check=False,
        )
        # Case-insensitive check
        stdout_lower = result.stdout.lower()
        return any(ident in stdout_lower for ident in identifiers)
    except (subprocess.TimeoutExpired, FileNotFoundError, OSError):
        return False


def is_bitmain_binary(path: Path) -> bool:
    """Check if binary is Bitmain-specific.

    Uses whitelist matching first, then identifier scanning for unknown binaries.

    Args:
        path: Path to binary file

    Returns:
        True if binary is Bitmain-specific, False otherwise
    """
    base_name = extract_base_name(path.name) or path.name
    base_name_lower = base_name.lower()

    # Remove common suffixes for matching
    base_clean = (
        base_name_lower.replace(".shadow", "")
        .replace(".sysvinit", "")
        .replace("_debug", "")
    )

    # First check: Known Bitmain binaries (fast, case-insensitive)
    if any(bm.lower() in base_clean for bm in BITMAIN_BINARIES):
        return True

    # Second check: Scan for Bitmain build identifiers (slower, but accurate)
    return has_bitmain_identifier(path)


def decompile_with_haruspex(binary_path: Path) -> bool:
    """Decompile a binary using haruspex/IDA Pro.

    Args:
        binary_path: Path to binary to decompile

    Returns:
        True if decompilation succeeded, False otherwise
    """
    with LOG_FILE.open("a", encoding="utf-8") as log:
        log.write(f"\n{'=' * 80}\n")
        log.write(f"Processing: {binary_path.name}\n")
        log.write(f"{'-' * 80}\n")
        log.flush()

        cmd = [
            "timeout",
            f"{TIMEOUT_SECONDS}s",
            "haruspex",
            binary_path.name,
        ]

        try:
            # Change to BINARIES_DIR to run haruspex
            with subprocess.Popen(
                cmd,
                stdout=subprocess.PIPE,
                stderr=subprocess.STDOUT,
                text=True,
                bufsize=1,
                cwd=BINARIES_DIR,
            ) as process:
                # Stream output line by line
                if process.stdout:
                    for line in process.stdout:
                        log.write(line)
                        log.flush()

                returncode = process.wait()

            log.write(f"\nReturn code: {returncode}\n")
            log.flush()

            if returncode != 0:
                logging.error(
                    f"Failed to decompile {binary_path.name} (code {returncode})"
                )
            else:
                logging.info(f"  Successfully decompiled: {binary_path.name}")

            return returncode == 0

        except (subprocess.TimeoutExpired, OSError) as e:
            log.write(f"\nError: {e}\n")
            log.flush()
            logging.error(f"Exception while decompiling {binary_path.name}: {e}")
            return False


def get_bitmain_binaries() -> list[Path]:
    """Get list of Bitmain-specific ELF binaries in BINARIES_DIR.

    Filters out standard Linux tools and libraries.

    Returns:
        List of Bitmain-specific binary file paths
    """
    binaries: list[Path] = []
    skipped_not_elf = 0
    skipped_not_bitmain = 0

    for f in BINARIES_DIR.iterdir():
        if not f.is_file():
            continue

        # Check if ELF
        if not is_elf(f):
            skipped_not_elf += 1
            continue

        # Check if Bitmain-specific
        if is_bitmain_binary(f):
            binaries.append(f)
        else:
            skipped_not_bitmain += 1
            logging.debug(f"Skipping (not Bitmain-specific): {f.name}")

    logging.info(f"Found {len(binaries)} Bitmain-specific binaries")
    if skipped_not_bitmain > 0:
        logging.info(f"Skipped {skipped_not_bitmain} standard tools")
    if skipped_not_elf > 0:
        logging.debug(f"Skipped {skipped_not_elf} non-ELF files")

    return sorted(binaries)


def print_summary(stats: DecompileStats, total: int) -> None:
    """Print decompilation summary.

    Args:
        stats: Decompilation statistics
        total: Total number of binaries found
    """
    logging.info("=" * 60)
    logging.info("SUMMARY")
    logging.info("=" * 60)
    logging.info(f"Total found:     {total}")
    logging.info(f"Successfully:    {stats.success}")
    logging.info(f"Failed:          {stats.failed}")
    logging.info(f"Skipped:         {stats.skipped}")
    logging.info(f"Output:          {BINARIES_DIR}")
    logging.info(f"Log:             {LOG_FILE}")
    logging.info(f"Completed:       {datetime.now().isoformat()}")
    logging.info("=" * 60)


def main() -> int:
    """Main decompilation workflow with haruspex/IDA Pro.

    Returns:
        Exit code (0 for success, 1 for failure)
    """
    setup_logging()

    logging.info("=" * 60)
    logging.info("Automated Decompilation (haruspex/IDA Pro)")
    logging.info("=" * 60)
    logging.info(f"Started: {datetime.now().isoformat()}")
    logging.info(f"Binaries directory: {BINARIES_DIR.absolute()}")

    try:
        # Validate binaries directory
        if not BINARIES_DIR.exists():
            logging.error(f"Binaries directory not found: {BINARIES_DIR}")
            return 1

        # Check if haruspex is available
        try:
            result = subprocess.run(
                ["which", "haruspex"],
                capture_output=True,
                text=True,
                check=False,
            )
            if result.returncode != 0:
                logging.error("haruspex command not found in PATH")
                logging.error(
                    "Please ensure haruspex/IDA Pro is installed and configured"
                )
                return 1
            logging.info(f"Using haruspex: {result.stdout.strip()}")
        except (FileNotFoundError, OSError) as e:
            logging.error(f"Failed to check for haruspex: {e}")
            return 1

        # Get Bitmain-specific binaries
        binaries = get_bitmain_binaries()

        if not binaries:
            logging.warning("No Bitmain-specific binaries found to decompile")
            return 0

        # Process each binary
        success = fail = 0
        total = len(binaries)

        for i, binary_path in enumerate(binaries, 1):
            logging.info(f"\n[{i}/{total}] Decompiling: {binary_path.name}")
            if decompile_with_haruspex(binary_path):
                success += 1
            else:
                fail += 1

        # Print summary
        stats = DecompileStats(success=success, failed=fail, skipped=0)
        print_summary(stats, total)

        return 0 if fail == 0 else 1

    except KeyboardInterrupt:
        logging.warning("\nInterrupted by user")
        return 130
    except Exception as e:
        logging.exception(f"Unexpected error: {e}")
        return 1


if __name__ == "__main__":
    sys.exit(main())
