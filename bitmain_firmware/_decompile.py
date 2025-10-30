#!/usr/bin/env python3
"""Automated binary decompilation using Ghidra with library auto-import."""

from __future__ import annotations

import logging
import os
import re
import shutil
import subprocess
import sys
from dataclasses import dataclass
from datetime import datetime
from functools import lru_cache
from pathlib import Path
from typing import Final, Iterator

# Constants
BINARIES_DIR: Final = Path("_binaries")
PROJECT_DIR: Final = Path("_binaries/_ghidra_project")
PROJECT_NAME: Final = "bitmain_firmware"
OUTPUT_PATH: Final = Path("_binaries/_ghidra")
LOG_FILE: Final = Path("_decompile.log")
LIB_COPIES_DIR: Final = BINARIES_DIR / "_lib_copies"

TIMEOUT_SECONDS: Final = 300
MAX_CPU_CORES: Final = 16
FILE_CHECK_TIMEOUT: Final = 2
READELF_TIMEOUT: Final = 5

GHIDRA_PATH: Final = Path("/home/danielsokil/Downloads/ghidra_11.4.2_PUBLIC")
ANALYZE_HEADLESS: Final = GHIDRA_PATH / "support" / "analyzeHeadless"

RETDEC_PATH: Final = Path("/home/danielsokil/Lab/avast/retdec/retdec-install")
RETDEC_DECOMPILER: Final = RETDEC_PATH / "bin" / "retdec-decompiler"
RETDEC_OUTPUT_PATH: Final = Path("_binaries/_retdec")

# Regex patterns
SONAME_PATTERN: Final = re.compile(r"Library soname: \[([^\]]+)\]")
NEEDED_PATTERN: Final = re.compile(r"Shared library: \[([^\]]+)\]")
HASH_SUFFIX_PATTERN: Final = re.compile(r"^(.+?)_[a-f0-9]+")

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

    executables_done: int = 0
    executables_failed: int = 0
    retdec_done: int = 0
    retdec_failed: int = 0

    @property
    def total_processed(self) -> int:
        """Total successfully processed files."""
        return self.executables_done

    @property
    def total_failed(self) -> int:
        """Total failed files."""
        return self.executables_failed


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


@lru_cache(maxsize=1024)
def get_soname(path: Path) -> str | None:
    """Extract SONAME from ELF shared library using readelf.

    Ghidra links libraries by their SONAME, not filename.

    Args:
        path: Path to ELF file

    Returns:
        SONAME if found, None otherwise
    """
    try:
        result = subprocess.run(
            ["readelf", "-d", str(path)],
            capture_output=True,
            text=True,
            timeout=READELF_TIMEOUT,
            check=False,
        )
        if match := SONAME_PATTERN.search(result.stdout):
            return match.group(1)
        return None
    except (subprocess.TimeoutExpired, FileNotFoundError, OSError) as e:
        logging.debug(f"Could not extract SONAME from {path}: {e}")
        return None


@lru_cache(maxsize=1024)
def get_library_dependencies(path: Path) -> set[str]:
    """Extract direct library dependencies from ELF file using readelf.

    Args:
        path: Path to ELF file

    Returns:
        Set of library names (SONAMEs) that this binary depends on
    """
    try:
        result = subprocess.run(
            ["readelf", "-d", str(path)],
            capture_output=True,
            text=True,
            timeout=READELF_TIMEOUT,
            check=False,
        )
        # Extract all NEEDED entries (shared library dependencies)
        return {match.group(1) for match in NEEDED_PATTERN.finditer(result.stdout)}
    except (subprocess.TimeoutExpired, FileNotFoundError, OSError) as e:
        logging.debug(f"Could not extract dependencies from {path}: {e}")
        return set()


def resolve_all_dependencies(lib_name: str, resolved: set[str]) -> None:
    """Recursively resolve all transitive dependencies of a library.

    Args:
        lib_name: Library name (SONAME) to resolve
        resolved: Set to accumulate all resolved dependencies (modified in-place)
    """
    # Avoid infinite recursion
    if lib_name in resolved:
        return

    resolved.add(lib_name)

    # Find library file in LIB_COPIES_DIR
    lib_path = LIB_COPIES_DIR / lib_name
    if not lib_path.exists():
        logging.debug(f"Library not found for dependency resolution: {lib_name}")
        return

    # Get dependencies of this library
    deps = get_library_dependencies(lib_path)

    # Recursively resolve each dependency
    for dep in deps:
        resolve_all_dependencies(dep, resolved)


def get_binary_dependencies(binary_path: Path) -> set[str]:
    """Get all transitive dependencies for a binary.

    Args:
        binary_path: Path to the binary executable

    Returns:
        Set of all library names (SONAMEs) needed by this binary
    """
    all_deps: set[str] = set()

    # Get direct dependencies
    direct_deps = get_library_dependencies(binary_path)

    # Recursively resolve each dependency
    for dep in direct_deps:
        resolve_all_dependencies(dep, all_deps)

    return all_deps


def get_dependency_order(libs: set[str]) -> list[str]:
    """Sort libraries in dependency order (deepest dependencies first).

    Uses topological sort to ensure dependencies are imported before dependents.

    Args:
        libs: Set of library names to sort

    Returns:
        List of library names in import order (dependencies before dependents)
    """
    # Build adjacency list: lib -> list of libs it depends on
    deps_graph: dict[str, list[str]] = {}
    in_degree: dict[str, int] = {}

    # Initialize
    for lib in libs:
        deps_graph[lib] = []
        in_degree[lib] = 0

    # Build graph
    for lib in libs:
        lib_path = LIB_COPIES_DIR / lib
        if not lib_path.exists():
            continue

        lib_deps = get_library_dependencies(lib_path)
        # Only include dependencies that are in our set
        lib_deps_in_set = lib_deps & libs

        for dep in lib_deps_in_set:
            deps_graph[lib].append(dep)
            in_degree[dep] += 1

    # Topological sort using Kahn's algorithm
    queue: list[str] = [lib for lib in libs if in_degree[lib] == 0]
    result: list[str] = []

    while queue:
        # Sort for deterministic output
        queue.sort()
        lib = queue.pop(0)
        result.append(lib)

        for dep in deps_graph[lib]:
            in_degree[dep] -= 1
            if in_degree[dep] == 0:
                queue.append(dep)

    # Reverse to get dependencies-first order
    return list(reversed(result))


def extract_base_name(filename: str) -> str | None:
    """Extract base name from filename with hash suffix.

    Args:
        filename: Filename potentially with hash suffix (e.g., 'libc.so.6_abc123')

    Returns:
        Base name without hash (e.g., 'libc.so.6') or None if no hash found
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


def iter_elf_libraries() -> Iterator[Path]:
    """Iterate over all ELF shared libraries in BINARIES_DIR.

    Yields:
        Path objects for ELF shared object files
    """
    for so_file in BINARIES_DIR.glob("*.so*"):
        if is_elf(so_file):
            yield so_file


def create_library_copies() -> None:
    """Create library copies using SONAME for Ghidra linking.

    Ghidra links libraries by SONAME, so we extract the SONAME from each
    library and use it as the filename. Physical copies are needed because
    Ghidra cannot resolve symlinks. Duplicates are skipped (first occurrence wins).
    """
    logging.info("Creating library copies using SONAME...")

    # Clean and recreate directory
    if LIB_COPIES_DIR.exists():
        shutil.rmtree(LIB_COPIES_DIR)
    LIB_COPIES_DIR.mkdir(parents=True, exist_ok=True)

    copied = skipped = 0
    for so_file in iter_elf_libraries():
        # Try to get SONAME first (for shared libraries)
        lib_name = get_soname(so_file)
        if not lib_name:
            # Fallback to filename-based extraction for non-library files
            lib_name = extract_base_name(so_file.name)

        if lib_name:
            dest_path = LIB_COPIES_DIR / lib_name
            if not dest_path.exists():
                try:
                    shutil.copy2(so_file, dest_path)
                    copied += 1
                except (OSError, shutil.Error) as e:
                    logging.warning(f"Failed to copy {so_file}: {e}")
                    skipped += 1
            else:
                skipped += 1

    logging.info(f"  Copied {copied} libraries, skipped {skipped} duplicates")


def import_to_ghidra(
    path: Path, *, decompile: bool = False, analyze: bool = True
) -> bool:
    """Import file into shared Ghidra project with optional decompilation.

    Args:
        path: Path to file to import
        decompile: Whether to run decompilation script
        analyze: Whether to run analysis (False for libraries)

    Returns:
        True if import succeeded, False otherwise
    """
    with LOG_FILE.open("a", encoding="utf-8") as log:
        log.write(f"\n{'=' * 80}\n")
        log.write(f"Processing: {path.name}\n")
        log.write(f"{'-' * 80}\n")
        log.flush()

        lib_search_paths = f"{LIB_COPIES_DIR.absolute()};{BINARIES_DIR.absolute()}"

        cmd = [
            "timeout",
            f"{TIMEOUT_SECONDS}s",
            str(ANALYZE_HEADLESS),
            str(PROJECT_DIR),
            PROJECT_NAME,
            "-import",
            str(path),
            "-max-cpu",
            str(MAX_CPU_CORES),
            "-librarySearchPaths",
            lib_search_paths,
            "-analysisTimeoutPerFile",
            "300",  # 5 minutes per file analysis timeout
        ]

        # For ELF files, enable linking to existing project libraries
        if is_elf(path):
            cmd.extend(
                [
                    "-loader",
                    "ElfLoader",
                    "-loader-linkExistingProjectLibraries",
                    "true",
                ]
            )

        # Skip analysis for libraries (faster)
        if not analyze:
            cmd.append("-noanalysis")

        if decompile:
            # Export decompiled functions
            export_decompile = Path(__file__).parent / "_export_decompile.py"
            if export_decompile.exists():
                cmd.extend(["-postScript", str(export_decompile)])
            else:
                logging.warning(f"Export script not found: {export_decompile}")

            # Export data types (structs, enums, typedefs)
            export_types = Path(__file__).parent / "_export_types.py"
            if export_types.exists():
                cmd.extend(["-postScript", str(export_types)])
            else:
                logging.warning(f"Types export script not found: {export_types}")

        # Set environment for Ghidra script
        env = os.environ.copy()
        env["GHIDRA_OUTPUT_PATH"] = str(OUTPUT_PATH.absolute())

        try:
            with subprocess.Popen(
                cmd,
                stdout=subprocess.PIPE,
                stderr=subprocess.STDOUT,
                text=True,
                bufsize=1,
                env=env,
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
                logging.error(f"Failed to import {path.name} (code {returncode})")

            return returncode == 0

        except (subprocess.TimeoutExpired, OSError) as e:
            log.write(f"\nError: {e}\n")
            log.flush()
            logging.error(f"Exception while importing {path.name}: {e}")
            return False


def format_c_file(c_file: Path) -> bool:
    """Format a C file using clang-format.

    Args:
        c_file: Path to C file to format

    Returns:
        True if formatting succeeded, False otherwise
    """
    if not c_file.exists():
        logging.warning(f"C file not found for formatting: {c_file}")
        return False

    try:
        result = subprocess.run(
            [
                "clang-format",
                "-style={BasedOnStyle: LLVM, IndentWidth: 4}",
                "-i",
                str(c_file),
            ],
            capture_output=True,
            text=True,
            timeout=30,
            check=False,
        )

        if result.returncode == 0:
            logging.debug(f"  Formatted: {c_file.name}")
            return True
        else:
            logging.warning(f"clang-format failed for {c_file.name}: {result.stderr}")
            return False

    except (subprocess.TimeoutExpired, FileNotFoundError, OSError) as e:
        logging.warning(f"Could not format {c_file.name}: {e}")
        return False


def decompile_with_retdec(binary_path: Path) -> bool:
    """Decompile a binary using RetDec.

    Args:
        binary_path: Path to binary to decompile

    Returns:
        True if decompilation succeeded, False otherwise
    """
    # Create output directory structure matching Ghidra
    output_dir = RETDEC_OUTPUT_PATH / binary_path.stem
    output_dir.mkdir(parents=True, exist_ok=True)

    output_file = output_dir / f"{binary_path.stem}.c"

    with LOG_FILE.open("a", encoding="utf-8") as log:
        log.write(f"\n{'=' * 80}\n")
        log.write(f"RetDec Decompiling: {binary_path.name}\n")
        log.write(f"{'-' * 80}\n")
        log.flush()

        cmd = [
            "timeout",
            f"{TIMEOUT_SECONDS}s",
            str(RETDEC_DECOMPILER),
            str(binary_path),
            "--cleanup",
            "--backend-var-renamer",
            "hungarian",
            "--backend-keep-library-funcs",
            "-k",
            "-o",
            str(output_file),
        ]

        try:
            with subprocess.Popen(
                cmd,
                stdout=subprocess.PIPE,
                stderr=subprocess.STDOUT,
                text=True,
                bufsize=1,
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
                    f"RetDec failed to decompile {binary_path.name} (code {returncode})"
                )
            else:
                logging.info(f"  RetDec output: {output_file}")
                # Format the generated C file
                format_c_file(output_file)

            return returncode == 0

        except (subprocess.TimeoutExpired, OSError) as e:
            log.write(f"\nError: {e}\n")
            log.flush()
            logging.error(
                f"Exception while decompiling {binary_path.name} with RetDec: {e}"
            )
            return False


def process_files(
    files: list[Path], label: str, *, decompile: bool = False, analyze: bool = True
) -> tuple[int, int]:
    """Process list of files with Ghidra.

    Args:
        files: List of file paths to process
        label: Label for logging (e.g., 'Importing', 'Decompiling')
        decompile: Whether to decompile files
        analyze: Whether to analyze files (False for libraries)

    Returns:
        Tuple of (success_count, failure_count)
    """
    success = fail = 0
    total = len(files)

    for i, path in enumerate(files, 1):
        logging.info(f"[{i}/{total}] {label}: {path.name}")
        if import_to_ghidra(path, decompile=decompile, analyze=analyze):
            success += 1
        else:
            fail += 1

    return success, fail


def get_libraries() -> list[Path]:
    """Get list of library files from LIB_COPIES_DIR.

    Returns:
        List of library file paths
    """
    if not LIB_COPIES_DIR.exists():
        return []

    return sorted(LIB_COPIES_DIR.iterdir())


def get_executables() -> list[Path]:
    """Get list of Bitmain-specific executable files in BINARIES_DIR.

    Filters out standard Linux tools and libraries.

    Returns:
        List of Bitmain-specific executable file paths
    """
    executables: list[Path] = []
    skipped: list[str] = []

    for f in BINARIES_DIR.iterdir():
        if not f.is_file():
            continue

        # Skip libraries
        if ".so" in f.name:
            continue

        # Check If ELF
        if not is_elf(f):
            continue

        # Check if Bitmain-specific
        if is_bitmain_binary(f):
            executables.append(f)
        else:
            skipped.append(f.name)

    if skipped:
        logging.info(f"Skipped {len(skipped)} standard tools")
        logging.debug(f"Skipped: {', '.join(sorted(skipped)[:10])}")

    logging.info(f"Found {len(executables)} Bitmain-specific binaries")
    return executables


def print_summary(
    stats: DecompileStats, lib_imported: int, lib_count: int, exe_count: int
) -> None:
    """Print decompilation summary.

    Args:
        stats: Decompilation statistics
        lib_imported: Number of libraries imported
        lib_count: Total library count
        exe_count: Total executable count
    """
    logging.info("=" * 60)
    logging.info("SUMMARY")
    logging.info("=" * 60)
    logging.info(f"Libraries:       {lib_imported}/{lib_count} imported")
    logging.info(f"Ghidra:          {stats.executables_done}/{exe_count} decompiled")
    logging.info(f"RetDec:          {stats.retdec_done}/{exe_count} decompiled")
    logging.info(f"Ghidra Failed:   {stats.executables_failed}")
    logging.info(f"RetDec Failed:   {stats.retdec_failed}")
    logging.info(f"Project:         {PROJECT_DIR / PROJECT_NAME}")
    logging.info(f"Ghidra Output:   {OUTPUT_PATH}")
    logging.info(f"RetDec Output:   {RETDEC_OUTPUT_PATH}")
    logging.info(f"Log:             {LOG_FILE}")
    logging.info(f"Completed:       {datetime.now().isoformat()}")
    logging.info("=" * 60)


def main() -> int:
    """Main decompilation workflow with on-demand library import.

    For each Bitmain binary:
    1. Resolve all library dependencies (direct + transitive)
    2. Import only the new dependencies not yet imported
    3. Decompile the binary with Ghidra
    4. Decompile the binary with RetDec

    Returns:
        Exit code (0 for success, 1 for failure)
    """
    setup_logging()

    logging.info("=" * 60)
    logging.info("Automated Decompilation (Ghidra + RetDec)")
    logging.info("=" * 60)
    logging.info(f"Started: {datetime.now().isoformat()}")
    logging.info(f"Using Ghidra: {GHIDRA_PATH}")
    logging.info(f"Using RetDec: {RETDEC_PATH}")
    logging.info(f"Project: {PROJECT_DIR / PROJECT_NAME}")

    try:
        # Create necessary directories
        OUTPUT_PATH.mkdir(parents=True, exist_ok=True)
        RETDEC_OUTPUT_PATH.mkdir(parents=True, exist_ok=True)
        PROJECT_DIR.mkdir(parents=True, exist_ok=True)

        # Validate Ghidra installation
        if not ANALYZE_HEADLESS.exists():
            logging.error(f"Ghidra analyzeHeadless not found: {ANALYZE_HEADLESS}")
            return 1

        # Validate RetDec installation
        if not RETDEC_DECOMPILER.exists():
            logging.error(f"RetDec decompiler not found: {RETDEC_DECOMPILER}")
            return 1

        # Create library copies with SONAME for linking
        create_library_copies()

        # Get Bitmain-specific executables
        executables = get_executables()

        # Track imported libraries (to avoid duplicates)
        imported_libraries: set[str] = set()
        lib_import_ok = 0
        lib_import_fail = 0

        # Process each executable: import dependencies, then decompile
        exe_ok = exe_fail = 0
        retdec_ok = retdec_fail = 0
        total = len(executables)

        for i, exe_path in enumerate(executables, 1):
            logging.info(f"\n[{i}/{total}] Processing: {exe_path.name}")

            # Get all dependencies for this binary
            deps = get_binary_dependencies(exe_path)
            new_deps = deps - imported_libraries

            if new_deps:
                # Sort dependencies in topological order (deepest dependencies first)
                deps_ordered = get_dependency_order(new_deps)
                logging.info(
                    f"  Importing {len(deps_ordered)} new dependencies in dependency order..."
                )

                for dep in deps_ordered:
                    dep_path = LIB_COPIES_DIR / dep
                    if dep_path.exists():
                        if import_to_ghidra(dep_path, analyze=False):
                            imported_libraries.add(dep)
                            lib_import_ok += 1
                            logging.debug(f"    ✓ {dep}")
                        else:
                            lib_import_fail += 1
                            logging.warning(f"  Failed to import dependency: {dep}")
                    else:
                        logging.debug(f"  Dependency not found: {dep}")
            else:
                logging.info("  All dependencies already imported")

            # Decompile the executable with Ghidra
            logging.info(f"  Decompiling with Ghidra: {exe_path.name}...")
            if import_to_ghidra(exe_path, decompile=True):
                exe_ok += 1
                # Format the generated C file
                ghidra_output = OUTPUT_PATH / f"{exe_path.stem}.c"
                format_c_file(ghidra_output)
            else:
                exe_fail += 1

            # Decompile the executable with RetDec
            logging.info(f"  Decompiling with RetDec: {exe_path.name}...")
            if decompile_with_retdec(exe_path):
                retdec_ok += 1
            else:
                retdec_fail += 1

        # Print summary
        stats = DecompileStats(exe_ok, exe_fail, retdec_ok, retdec_fail)
        print_summary(stats, lib_import_ok, lib_import_ok + lib_import_fail, total)

        return 0 if stats.total_failed == 0 else 1

    except KeyboardInterrupt:
        logging.warning("\nInterrupted by user")
        return 130
    except Exception as e:
        logging.exception(f"Unexpected error: {e}")
        return 1


if __name__ == "__main__":
    sys.exit(main())
