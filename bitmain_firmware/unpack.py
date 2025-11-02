#!/usr/bin/env python3

import glob
import multiprocessing
import os
import subprocess
from concurrent.futures import ProcessPoolExecutor
from pathlib import Path


def extractZipFiles(basePath: str):
    zipFiles = glob.glob(f"{basePath}/**/*.zip", recursive=True)
    for zipFile in zipFiles:
        zipDir = os.path.dirname(zipFile)

        extractDir = Path(zipFile).with_suffix("")

        subprocess.run(
            [
                "unzip",
                "-o",
                "-d",
                os.path.abspath(os.path.normpath(extractDir)),
                os.path.abspath(os.path.normpath(zipFile)),
            ],
            cwd=os.path.abspath(os.path.normpath(zipDir)),
        )


def extractTarGzFiles(basePath: str):
    tarGzFiles = glob.glob(f"{basePath}/**/*.tar.gz", recursive=True)
    for tarFile in tarGzFiles:
        tarDir = os.path.dirname(tarFile)

        try:
            subprocess.run(
                [
                    "tar",
                    "-zxf",
                    os.path.abspath(os.path.normpath(tarFile)),
                    "--one-top-level",
                ],
                cwd=os.path.abspath(os.path.normpath(tarDir)),
            )
        except Exception:
            continue


def extractTarXzFiles(basePath: str):
    tarXzFiles = glob.glob(f"{basePath}/**/*.tar.xz", recursive=True)
    for tarFile in tarXzFiles:
        tarDir = os.path.dirname(tarFile)

        try:
            subprocess.run(
                [
                    "tar",
                    "-Jxf",
                    os.path.abspath(os.path.normpath(tarFile)),
                    "--one-top-level",
                ],
                cwd=os.path.abspath(os.path.normpath(tarDir)),
            )
        except Exception:
            continue


def extract7zFiles(basePath: str):
    files = glob.glob(f"{basePath}/**/*.7z", recursive=True)
    for file in files:
        fileDir = os.path.dirname(file)

        try:
            subprocess.run(
                [
                    "7z",
                    "-y",
                    "x",
                    os.path.abspath(os.path.normpath(file)),
                    "-o*",
                ],
                cwd=os.path.abspath(os.path.normpath(fileDir)),
            )
        except Exception:
            continue


def extractRarFiles(basePath: str):
    files = glob.glob(f"{basePath}/**/*.rar", recursive=True)
    for file in files:
        fileDir = os.path.dirname(file)

        extractDir = file.replace(".rar", "")

        try:
            subprocess.run(
                [
                    "unrar",
                    "-y",
                    "x",
                    os.path.abspath(os.path.normpath(file)),
                    os.path.abspath(os.path.normpath(extractDir)),
                ],
                cwd=os.path.abspath(os.path.normpath(fileDir)),
            )
        except Exception:
            continue


def extractBmuFiles(basePath: str):
    # Handle both single files and directories
    if os.path.isfile(basePath) and basePath.endswith(".bmu"):
        bmuFiles = [basePath]
    else:
        bmuFiles = glob.glob(f"{basePath}/**/*.bmu", recursive=True)

    for bmuFile in bmuFiles:
        # bmuDir = os.path.dirname(bmuFile)
        extractDir = Path(bmuFile).with_suffix("")
        try:
            os.mkdir(extractDir)
            subprocess.run(
                [
                    "python3",
                    "/home/danielsokil/Lab/VladTheJunior/BitmainFirmwareUnpacker/bmu.py",
                    "unpack",
                    os.path.abspath(os.path.normpath(bmuFile)),
                ],
                cwd=os.path.abspath(os.path.normpath(extractDir)),
            )
        except Exception:
            continue


def extractBmuUpdateFiles(basePath: str):
    bmuFiles = glob.glob(f"{basePath}/**/update.bmu", recursive=True)
    for bmuFile in bmuFiles:
        bmuDir = os.path.dirname(bmuFile)

        try:
            subprocess.run(
                [
                    "python3",
                    "/home/danielsokil/Lab/VladTheJunior/BitmainFirmwareUnpacker/bmu.py",
                    "unpack",
                    os.path.abspath(os.path.normpath(bmuFile)),
                ],
                cwd=os.path.abspath(os.path.normpath(bmuDir)),
            )
        except Exception:
            continue


def removeUImageHeaderFromImage(image_path: str):
    header_free_image_path = image_path.replace(".image.gz", ".no_header.image.gz")
    print(f"Processing: {image_path}")

    try:
        with (
            open(image_path, "rb") as source_image,
            open(header_free_image_path, "wb") as processed_image,
        ):
            source_image.seek(64)  # Skip the 64-byte header
            while True:
                data_chunk = source_image.read(8192)  # Read in 8KB chunks
                if not data_chunk:
                    break
                processed_image.write(data_chunk)
    except Exception as e:
        print(f"Error processing {image_path}: {e}")


def removeXilinxUImageHeaders(basePath: str):
    uImageFiles = glob.glob(f"{basePath}/**/*.image.gz", recursive=True)

    cpu_count = multiprocessing.cpu_count()
    with ProcessPoolExecutor(max_workers=cpu_count) as executor:
        executor.map(removeUImageHeaderFromImage, uImageFiles)


def extractXilinxGzipFiles(basePath: str):
    gzipFiles = glob.glob(f"{basePath}/**/*.no_header.image.gz", recursive=True)
    for gzipFile in gzipFiles:
        gzipDir = os.path.dirname(gzipFile)
        print(f"Processing: {gzipFile}")

        try:
            subprocess.run(
                [
                    "gunzip",
                    "--force",
                    "--keep",
                    os.path.abspath(os.path.normpath(gzipFile)),
                ],
                cwd=os.path.abspath(os.path.normpath(gzipDir)),
            )
        except Exception:
            continue


def extractAmlDatafileImages(basePath: str):
    """
    Extract Amlogic Android boot images (datafile files).
    These are Android boot image format files containing:
    - Linux kernel (zImage)
    - Ramdisk (initrd.img - usually gzip compressed cpio archive)
    - Second stage image (stage2.img)

    Handles both encrypted (AMLSECU!) and unencrypted Android boot images.
    If AMLSECU! signature is detected at offset 0x400, the image is decrypted
    first using aml_decrypt before extraction.
    """
    datafileImages = glob.glob(f"{basePath}/**/datafile", recursive=True)
    aml_decrypt_tool = "/home/danielsokil/Lab/Alex20129/aml_decrypt/build/aml_decrypt"

    for image in datafileImages:
        print(f"Processing image: {image}")
        imageDir = os.path.dirname(image)

        # Check for AMLSECU! signature at offset 0x400 (1024 bytes)
        is_encrypted = False
        try:
            with open(image, "rb") as f:
                f.seek(0x400)
                magic = f.read(8)
                if magic == b"AMLSECU!":
                    is_encrypted = True
                    print("  -> Detected AMLSECU! encrypted image")
        except Exception as e:
            print(f"  -> Error checking encryption: {e}")
            continue

        # Decrypt if needed
        abs_image = os.path.abspath(os.path.normpath(image))
        if is_encrypted:
            print("  -> Decrypting image...")
            try:
                result = subprocess.run(
                    [
                        aml_decrypt_tool,
                        "datafile",
                    ],
                    cwd=imageDir,
                    check=False,
                    capture_output=True,
                    text=True,
                )
                if result.returncode != 0:
                    print(f"  -> Decryption failed: {result.stderr}")
                    continue

                # Check if decrypted section files were created
                section0 = os.path.join(imageDir, "datafile_section_0_decrypted.bin")
                section1 = os.path.join(imageDir, "datafile_section_1_decrypted.bin")
                section2 = os.path.join(imageDir, "datafile_section_2_decrypted.bin")

                if not (os.path.exists(section0) and os.path.exists(section1)):
                    print("  -> Decryption failed: section files not created")
                    continue

                print("  -> Decryption successful")
                print(
                    f"     - {os.path.basename(section0)} ({os.path.getsize(section0)} bytes)"
                )
                print(
                    f"     - {os.path.basename(section1)} ({os.path.getsize(section1)} bytes)"
                )
                if os.path.exists(section2):
                    print(
                        f"     - {os.path.basename(section2)} ({os.path.getsize(section2)} bytes)"
                    )

            except Exception as e:
                print(f"  -> Error during decryption: {e}")
                continue

        # Create extraction directory
        extractDir = os.path.join(imageDir, "datafile_extracted")
        try:
            os.makedirs(extractDir, exist_ok=True)
        except Exception as e:
            print(f"Failed to create directory {extractDir}: {e}")
            continue

        abs_extract_dir = os.path.abspath(os.path.normpath(extractDir))

        try:
            if is_encrypted:
                # For encrypted images, decrypted sections are already separate files
                print("  -> Organizing decrypted components...")

                # Copy/rename decrypted sections to extraction directory
                section0 = os.path.join(imageDir, "datafile_section_0_decrypted.bin")
                section1 = os.path.join(imageDir, "datafile_section_1_decrypted.bin")
                section2 = os.path.join(imageDir, "datafile_section_2_decrypted.bin")

                import shutil

                if os.path.exists(section0):
                    shutil.copy2(section0, os.path.join(abs_extract_dir, "zImage"))
                    print("     - zImage")

                if os.path.exists(section1):
                    ramdisk_path = os.path.join(abs_extract_dir, "initrd.img")
                    shutil.copy2(section1, ramdisk_path)
                    print("     - initrd.img")

                if os.path.exists(section2):
                    shutil.copy2(section2, os.path.join(abs_extract_dir, "stage2.img"))
                    print("     - stage2.img")

            else:
                # For unencrypted images, use abootimg to extract
                result = subprocess.run(
                    [
                        "abootimg",
                        "-x",
                        abs_image,
                        os.path.join(abs_extract_dir, "bootimg.cfg"),
                    ],
                    cwd=abs_extract_dir,
                    check=False,
                    capture_output=True,
                    text=True,
                )

                if result.returncode != 0:
                    print(f"  -> Extraction failed: {result.stderr[:200]}")
                    continue

                print("  -> Extracted boot image components:")
                extracted_files = os.listdir(abs_extract_dir)
                for f in extracted_files:
                    print(f"     - {f}")

            # Extract ramdisk filesystem if initrd.img exists
            ramdisk_path = os.path.join(abs_extract_dir, "initrd.img")
            if os.path.exists(ramdisk_path):
                ramdisk_fs_dir = os.path.join(abs_extract_dir, "ramdisk_fs")
                os.makedirs(ramdisk_fs_dir, exist_ok=True)

                print("  -> Extracting ramdisk filesystem...")
                # Try to decompress and extract cpio archive
                try:
                    gunzip_proc = subprocess.Popen(
                        ["gunzip", "-c", ramdisk_path],
                        stdout=subprocess.PIPE,
                        stderr=subprocess.DEVNULL,
                        cwd=ramdisk_fs_dir,
                    )
                    subprocess.run(
                        ["cpio", "-idmv"],
                        stdin=gunzip_proc.stdout,
                        stdout=subprocess.DEVNULL,
                        stderr=subprocess.DEVNULL,
                        cwd=ramdisk_fs_dir,
                    )
                    gunzip_proc.wait()

                    # Check if extraction was successful by checking directory contents
                    if os.listdir(ramdisk_fs_dir):
                        print("  -> Extracted ramdisk filesystem to ramdisk_fs/")
                        # Show some extracted contents
                        items = os.listdir(ramdisk_fs_dir)[:5]
                        for item in items:
                            print(f"     - {item}")
                        if len(os.listdir(ramdisk_fs_dir)) > 5:
                            print(
                                f"     ... and {len(os.listdir(ramdisk_fs_dir)) - 5} more items"
                            )
                    else:
                        print("  -> Could not extract ramdisk (may not be cpio format)")
                except Exception as e:
                    print(f"  -> Could not extract ramdisk filesystem: {e}")

        except Exception as e:
            print(f"  -> Error extracting {image}: {e}")
            continue


def extractXilinxLinuxImages(basePath: str):
    linuxImages = glob.glob(f"{basePath}/**/*.no_header.image", recursive=True)
    for image in linuxImages:
        print(f"Processing: {image}")
        imageDir = os.path.dirname(image)

        try:
            subprocess.run(
                [
                    "unblob",
                    os.path.abspath(os.path.normpath(image)),
                ],
                cwd=os.path.abspath(os.path.normpath(imageDir)),
            )
        except Exception:
            continue


def extractBootBin(basePath: str):
    linuxImages = glob.glob(f"{basePath}/**/BOOT.bin", recursive=True)
    for image in linuxImages:
        print(f"Processing: {image}")
        imageDir = os.path.dirname(image)

        try:
            subprocess.run(
                [
                    "unblob",
                    os.path.abspath(os.path.normpath(image)),
                ],
                cwd=os.path.abspath(os.path.normpath(imageDir)),
            )
        except Exception:
            continue


def removeCVITEKHeader(image_path: str):
    """
    Remove CVITEK header from image file.
    Header format (64 bytes total):
    - 4 Bytes: Magic ("CIMG")
    - 4 Bytes: Version
    - 4 Bytes: Chunk header size
    - 4 Bytes: Total chunks
    - 4 Bytes: File size
    - 32 Bytes: Extra Flags
    - 12 Bytes: Reserved
    """
    header_free_image_path = image_path.replace(".gz", ".no_header.gz")
    print(f"Processing: {image_path}")

    try:
        with open(image_path, "rb") as source_image:
            # Check for CIMG magic bytes
            magic = source_image.read(4)
            if magic != b"CIMG":
                print(
                    f"Warning: {image_path} is not a CVITEK image (missing CIMG magic)"
                )
                return

            with open(header_free_image_path, "wb") as processed_image:
                source_image.seek(64)  # Skip the 64-byte header
                # Skip chunk headers while reading data
                while True:
                    chunk_header = source_image.read(64)
                    if not chunk_header:
                        break
                    data_chunk = source_image.read(100 * 1024 * 1024)  # 100MB chunks
                    if not data_chunk:
                        break
                    processed_image.write(data_chunk)
        print(f"Created: {header_free_image_path}")
    except Exception as e:
        print(f"Error processing {image_path}: {e}")


def removeCVITEKHeaders(basePath: str):
    """Process all minerfs.gz files and remove CVITEK headers"""
    minerfsFiles = glob.glob(f"{basePath}/**/minerfs.gz", recursive=True)

    cpu_count = multiprocessing.cpu_count()
    with ProcessPoolExecutor(max_workers=cpu_count) as executor:
        executor.map(removeCVITEKHeader, minerfsFiles)


def extractCVITEKGzipFiles(basePath: str):
    """Extract CVITEK gzip files (minerfs.no_header.gz)"""
    gzipFiles = glob.glob(f"{basePath}/**/minerfs.no_header.gz", recursive=True)
    for gzipFile in gzipFiles:
        gzipDir = os.path.dirname(gzipFile)
        print(f"Processing: {gzipFile}")

        try:
            subprocess.run(
                [
                    "gunzip",
                    "--force",
                    "--keep",
                    os.path.abspath(os.path.normpath(gzipFile)),
                ],
                cwd=os.path.abspath(os.path.normpath(gzipDir)),
            )
        except Exception:
            continue


def extractCVITEKImages(basePath: str):
    """Extract CVITEK images (minerfs.no_header)"""
    minerfsImages = glob.glob(f"{basePath}/**/minerfs.no_header", recursive=True)
    for image in minerfsImages:
        print(f"Processing: {image}")
        imageDir = os.path.dirname(image)

        try:
            subprocess.run(
                [
                    "unblob",
                    os.path.abspath(os.path.normpath(image)),
                ],
                cwd=os.path.abspath(os.path.normpath(imageDir)),
            )
        except Exception:
            continue


def extractBeagleBoneRamFsImages(basePath: str):
    linuxImages = glob.glob(f"{basePath}/**/initramfs.bin.SD", recursive=True)
    for image in linuxImages:
        print(f"Processing: {image}")
        imageDir = os.path.dirname(image)

        try:
            subprocess.run(
                [
                    "unblob",
                    os.path.abspath(os.path.normpath(image)),
                ],
                cwd=os.path.abspath(os.path.normpath(imageDir)),
            )
        except Exception:
            continue


def extractAmlSdImages(basePath: str):
    """
    Extract Amlogic (AML) SD card images using aml_image_v2_packer.
    These are encrypted upgrade packages typically found in flashcard images.
    """
    amlImages = glob.glob(f"{basePath}/**/aml_upgrade_package_enc.img", recursive=True)
    amlPackerPath = os.path.expanduser(
        "~/Lab/khadas/utils/aml-flash-tool/tools/linux-x86/aml_image_v2_packer"
    )

    for image in amlImages:
        print(f"Processing AML image: {image}")
        imageDir = os.path.dirname(image)

        # Create extraction directory (remove .img extension)
        extractDir = Path(image).with_suffix("")
        try:
            os.makedirs(extractDir, exist_ok=True)
        except Exception as e:
            print(f"Failed to create directory {extractDir}: {e}")
            continue

        # Extract using aml_image_v2_packer
        abs_image = os.path.abspath(os.path.normpath(image))
        abs_extract_dir = os.path.abspath(os.path.normpath(extractDir))

        try:
            result = subprocess.run(
                [
                    amlPackerPath,
                    "-d",
                    abs_image,
                    abs_extract_dir,
                ],
                cwd=imageDir,
                check=False,
                capture_output=True,
                text=True,
            )
            if result.returncode == 0:
                print(f"  -> Extracted to {extractDir}")
            else:
                print(f"  -> Failed: {result.stderr}")
        except Exception as e:
            print(f"Error extracting {image}: {e}")
            continue


def extractAmlSdBootPartition(basePath: str):
    """
    Extract Amlogic Android boot partition files using abootimg.
    These .PARTITION files contain Android boot images with AMLSECU! signatures:
    - boot.PARTITION: Linux kernel + ramdisk + second stage
    - recovery.PARTITION: Recovery kernel image
    - bootloader.PARTITION: U-Boot bootloader (may not be Android format)
    """
    partitionFiles = glob.glob(f"{basePath}/**/boot.PARTITION", recursive=True)

    for partition in partitionFiles:
        print(f"Processing partition: {partition}")

        # Create extraction directory
        extractDir = Path(partition).with_suffix("")
        try:
            os.makedirs(extractDir, exist_ok=True)
        except Exception as e:
            print(f"  -> Failed to create directory {extractDir}: {e}")
            continue

        abs_partition = os.path.abspath(os.path.normpath(partition))
        abs_extract_dir = os.path.abspath(os.path.normpath(extractDir))

        try:
            # Extract Android boot image components
            result = subprocess.run(
                [
                    "abootimg",
                    "-x",
                    abs_partition,
                    os.path.join(abs_extract_dir, "bootimg.cfg"),
                ],
                cwd=abs_extract_dir,
                check=False,
                capture_output=True,
                text=True,
            )

            if result.returncode == 0:
                print(f"  -> Extracted to {extractDir}")
                # List extracted files
                extracted_files = os.listdir(abs_extract_dir)
                for f in extracted_files:
                    print(f"     - {f}")
            else:
                print(f"  -> Failed: {result.stderr[:200]}")

        except Exception as e:
            print(f"  -> Error extracting {partition}: {e}")
            continue


if __name__ == "__main__":
    print("__main__")

    # processPath = "./"
    # processPath = "./FR-1.80(250924-S21-XP).bmu"
    processPath = "./"

    # extractZipFiles(processPath)
    # extractTarGzFiles(processPath)
    # extractTarXzFiles(processPath)
    # extract7zFiles(processPath)
    # extractRarFiles(processPath)
    # extractBmuFiles(processPath)
    # extractBmuUpdateFiles(processPath)
    # removeXilinxUImageHeaders(processPath)
    # extractXilinxGzipFiles(processPath)
    # extractXilinxLinuxImages(processPath)
    extractAmlDatafileImages(processPath)
    # extractBootBin(processPath)
    # removeCVITEKHeaders(processPath)
    # extractCVITEKGzipFiles(processPath)
    # extractCVITEKImages(processPath)
    # extractBeagleBoneRamFsImages(processPath)
    # extractAmlSdImages(processPath)
    # extractAmlSdBootPartition(processPath)
