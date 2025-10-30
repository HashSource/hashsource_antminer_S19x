#!/usr/bin/env python3

from __future__ import annotations

import hashlib
import shutil
import subprocess
from pathlib import Path

ELF_MAGIC = b"\x7fELF"


def is_elf_file(path: Path) -> bool:
    """Check if a file is an ELF binary by reading its magic bytes."""
    try:
        return path.read_bytes()[:4] == ELF_MAGIC
    except (OSError, PermissionError):
        return False


def hash_file(path: Path) -> str | None:
    """Calculate SHA256 hash of a file."""
    try:
        return hashlib.sha256(path.read_bytes()).hexdigest()
    except (OSError, PermissionError):
        return None


def has_debug_symbols(path: Path) -> bool:
    """Check if an ELF binary has debug symbols (not stripped)."""
    try:
        result = subprocess.run(
            ["file", "--brief", str(path)],
            capture_output=True,
            text=True,
            timeout=5,
        )
        return "not stripped" in result.stdout.lower()
    except (subprocess.TimeoutExpired, subprocess.SubprocessError, FileNotFoundError):
        return False


def find_and_copy_elfs(root: Path, output_dir: Path) -> dict[str, Path]:
    """Find all unique ELF files and copy them to output directory with proper naming."""
    hash_to_info: dict[str, tuple[Path, bool]] = {}

    # Create output directory if it doesn't exist
    output_dir.mkdir(exist_ok=True, parents=True)

    # Find all ELF files
    for path in root.rglob("*"):
        if not path.is_file() or path.is_symlink():
            continue

        # Skip files in the output directory itself
        if output_dir in path.parents or path.parent == output_dir:
            continue

        if is_elf_file(path):
            print(f"Found ELF: {path}")

            file_hash = hash_file(path)
            if not file_hash:
                print("  -> Skipping (couldn't hash)")
                continue

            # Check if we've seen this hash before
            if file_hash in hash_to_info:
                print(f"  -> Duplicate of {hash_to_info[file_hash][0]}")
                continue

            # Check for debug symbols
            is_debug = has_debug_symbols(path)
            hash_to_info[file_hash] = (path, is_debug)

            # Create new filename
            base_name = path.name
            short_hash = file_hash[:16]

            if is_debug:
                new_name = f"{base_name}_{short_hash}_debug"
                print(f"  -> Unique with debug symbols (hash: {short_hash}...)")
            else:
                new_name = f"{base_name}_{short_hash}"
                print(f"  -> Unique (hash: {short_hash}...)")

            # Copy file to output directory
            dest_path = output_dir / new_name
            try:
                shutil.copy2(path, dest_path)
                print(f"  -> Copied to {dest_path}")
            except (OSError, PermissionError) as e:
                print(f"  -> Failed to copy: {e}")

    return {h: info[0] for h, info in hash_to_info.items()}


def main() -> None:
    """Main entry point."""
    project_dir = Path(__file__).parent.resolve()
    output_dir = project_dir / "_binaries"

    print(f"Scanning directory: {project_dir}")
    print(f"Output directory: {output_dir}")
    print("=" * 80)

    unique_elfs = find_and_copy_elfs(project_dir, output_dir)

    print("=" * 80)
    print(f"\nFound and copied {len(unique_elfs)} unique ELF files to {output_dir}")

    # Write log file
    log_file = output_dir / "copied_elfs.log"
    log_file.write_text("\n".join(str(p) for p in sorted(unique_elfs.values())) + "\n")

    print(f"Original paths written to: {log_file}")


if __name__ == "__main__":
    main()
