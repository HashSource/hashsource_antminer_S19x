// Decompiled: i2cget_68caba32196d4ebd

void _DT_INIT(void)

{
    FUN_000113b8();
    return;
}

void FUN_00010c08(int param_1, int param_2)

{
    char cVar1;
    bool bVar2;
    FILE *pFVar3;
    undefined4 *puVar4;
    int *piVar5;
    char *pcVar6;
    int iVar7;
    byte bVar8;
    undefined4 uVar9;
    int iVar10;
    int unaff_r9;
    int iVar11;
    int iVar12;
    uint uVar13;
    bool bVar14;
    undefined8 uVar15;
    int local_4c;
    char *local_44;
    uint local_40;
    undefined1 auStack_3c[24];

    uVar15 = CONCAT44(param_2, param_2);
    uVar13 = 0;
    iVar7 = 0;
    iVar11 = 1;
    iVar10 = 0;
    bVar14 = false;
    uVar9 = 0;
    iVar12 = iVar11;
    if (param_1 < 2)
        goto LAB_00010d00;
    do {
        param_2 = (int)((ulonglong)uVar15 >> 0x20);
        puVar4 = (undefined4 *)((int)uVar15 + 4);
        uVar15 = CONCAT44(param_2, puVar4);
        pcVar6 = (char *)*puVar4;
        iVar12 = iVar11;
        if (*pcVar6 != '-')
            goto LAB_00010d00;
        iVar7 = iVar11;
        switch (pcVar6[1]) {
        case 'V':
            iVar10 = 1;
            break;
        default:
            fprintf(stderr, "Error: Unsupported option \"%s\"!\n");
            FUN_00011468();
        LAB_00010de4:
            fprintf(stderr, "i2cget version %s\n", &DAT_0001215c);
            /* WARNING: Subroutine does not return */
            exit(0);
        case 'a':
            uVar13 = 1;
            break;
        case 'f':
            goto switchD_00010c54_caseD_66;
        case 'y':
            bVar14 = true;
        }
        while (true) {
            param_2 = (int)((ulonglong)uVar15 >> 0x20);
            iVar11 = iVar7 + 1;
            iVar12 = iVar11;
            if (iVar11 < param_1)
                break;
        LAB_00010d00:
            if (iVar10 != 0)
                goto LAB_00010de4;
            iVar11 = iVar12;
            if (param_1 <= iVar7 + 2)
                goto LAB_00010e2c;
            iVar11 = iVar12 * 4;
            unaff_r9 = FUN_00011d08(*(undefined4 *)(param_2 + iVar12 * 4));
            local_4c = param_2;
            if (unaff_r9 < 0)
                goto LAB_00010e2c;
            iVar11 = param_2 + iVar12 * 4;
            local_4c = FUN_00011570(*(undefined4 *)(iVar11 + 4), uVar13);
            if (local_4c < 0)
                goto LAB_00010e2c;
            if (iVar7 + 3 < param_1) {
                while ((uVar13 = strtol(*(char **)(iVar11 + 8), &local_44, 0),
                        *local_44 != '\0' || (0xff < uVar13))) {
                    fwrite("Error: Data address invalid!\n", 1, 0x1d, stderr);
                LAB_00010e2c:
                    FUN_00011468();
                }
                iVar10 = 2;
            } else {
                uVar13 = 0xffffffff;
                iVar10 = 1;
            }
            if (param_1 <= iVar7 + 4) {
                bVar2 = false;
            LAB_00010e68:
                iVar11 = FUN_00011628(unaff_r9, auStack_3c, 0x14, 0);
                if (iVar11 < 0)
                    goto LAB_00010f90;
                iVar7 = ioctl(iVar11, 0x705, &local_40);
                pFVar3 = stderr;
                if (iVar7 < 0) {
                    piVar5 = __errno_location();
                    pcVar6 = strerror(*piVar5);
                    fprintf(pFVar3,
                            "Error: Could not get the adapter functionality "
                            "matrix: %s\n",
                            pcVar6);
                    goto LAB_00010f90;
                }
                if (iVar10 == 2) {
                    if ((local_40 & 0x80000) == 0) {
                        fprintf(stderr,
                                "Error: Adapter does not have %s capability\n",
                                "SMBus read byte");
                        goto LAB_00010f90;
                    }
                } else if (iVar10 == 3) {
                    if ((local_40 & 0x200000) == 0) {
                        fprintf(stderr,
                                "Error: Adapter does not have %s capability\n",
                                "SMBus read word");
                        goto LAB_00010f90;
                    }
                } else {
                    if ((local_40 & 0x20000) == 0) {
                        fprintf(stderr,
                                "Error: Adapter does not have %s capability\n",
                                "SMBus receive byte");
                        goto LAB_00010f90;
                    }
                    if ((uVar13 != 0xffffffff) && ((local_40 & 0x40000) == 0)) {
                        fprintf(stderr,
                                "Error: Adapter does not have %s capability\n",
                                "SMBus send byte");
                        goto LAB_00010f90;
                    }
                }
                if ((bVar2) && ((local_40 & 9) == 0)) {
                    fwrite("Warning: Adapter does not seem to support PEC\n", 1,
                           0x2e, stderr);
                }
                iVar7 = FUN_00011e54(iVar11, local_4c, uVar9);
                if (iVar7 != 0)
                    goto LAB_00010f90;
                if (!bVar14) {
                    fwrite("WARNING! This program can confuse your I2C bus, "
                           "cause data loss and worse!\n",
                           1, 0x4b, stderr);
                    bVar14 = bVar2;
                    if (7 < local_4c - 0x50U) {
                        bVar14 = false;
                    }
                    if (bVar14) {
                        fwrite("STOP! EEPROMs are I2C devices, not SMBus "
                               "devices. Using PEC\non I2C devices may result "
                               "in unexpected results, such as\ntrashing the "
                               "contents of EEPROMs. We can\'t let you do "
                               "that, sorry.\n",
                               1, 0xb8, stderr);
                        goto LAB_000111bc;
                    }
                    bVar14 = uVar13 == 0;
                    if (-1 < (int)uVar13) {
                        bVar14 = iVar10 == 1;
                    }
                    if (bVar14) {
                        if (bVar2) {
                            fwrite(
                                "WARNING! All I2C chips and some SMBus chips "
                                "will interpret a write\nbyte command with PEC "
                                "as awrite byte data command, effectively "
                                "writing a\nvalue into a register!\n",
                                1, 0xa3, stderr);
                        }
                        fprintf(stderr,
                                "I will read from device file %s, chip address "
                                "0x%02x, ",
                                auStack_3c, local_4c);
                        fprintf(stderr, "data address\n0x%02x", uVar13);
                        fprintf(stderr, ", using %s.\n",
                                "write byte/read byte");
                        bVar14 = bVar2;
                        if (bVar2) {
                        LAB_00011268:
                            fwrite("PEC checking enabled.\n", 1, 0x16, stderr);
                        }
                        if (bVar14) {
                            bVar8 = 1;
                        } else {
                            bVar8 = 0;
                        }
                    } else {
                        fprintf(stderr,
                                "I will read from device file %s, chip address "
                                "0x%02x, ",
                                auStack_3c, local_4c);
                        if (uVar13 == 0xffffffff) {
                            fwrite("current data\naddress", 1, 0x14, stderr);
                            if (iVar10 != 1) {
                            LAB_00011208:
                                pcVar6 = "read word data";
                                if (iVar10 == 2) {
                                    pcVar6 = "read byte data";
                                }
                                goto LAB_00011224;
                            }
                            fprintf(stderr, ", using %s.\n", "read byte");
                        } else {
                            fprintf(stderr, "data address\n0x%02x", uVar13);
                            if (iVar10 != 1)
                                goto LAB_00011208;
                            pcVar6 = "write byte/read byte";
                        LAB_00011224:
                            fprintf(stderr, ", using %s.\n", pcVar6);
                        }
                        bVar14 = false;
                        if (bVar2)
                            goto LAB_00011268;
                        bVar8 = 0;
                    }
                    fprintf(stderr, "Continue? [%s] ");
                    fflush(stderr);
                    iVar7 = FUN_00011ec8(bVar8 ^ 1);
                    if (iVar7 == 0) {
                        fwrite("Aborting on user request.\n", 1, 0x1a, stderr);
                    LAB_000111bc:
                        /* WARNING: Subroutine does not return */
                        exit(0);
                    }
                }
                if ((bVar2) && (iVar7 = ioctl(iVar11, 0x708, 1),
                                pFVar3 = stderr, iVar7 < 0)) {
                    piVar5 = __errno_location();
                    pcVar6 = strerror(*piVar5);
                    fprintf(pFVar3, "Error: Could not set PEC: %s\n", pcVar6);
                    close(iVar11);
                LAB_00010f90:
                    /* WARNING: Subroutine does not return */
                    exit(1);
                }
                if (iVar10 == 1) {
                    if ((uVar13 != 0xffffffff) &&
                        (iVar7 = i2c_smbus_write_byte(iVar11, uVar13 & 0xff),
                         iVar7 < 0)) {
                        fwrite("Warning - write failed\n", 1, 0x17, stderr);
                    }
                    iVar7 = i2c_smbus_read_byte(iVar11);
                } else {
                    if (iVar10 == 3) {
                        iVar7 = i2c_smbus_read_word_data(iVar11, uVar13 & 0xff);
                        close(iVar11);
                        goto joined_r0x00010f38;
                    }
                    iVar7 = i2c_smbus_read_byte_data(iVar11, uVar13 & 0xff);
                }
                close(iVar11);
            joined_r0x00010f38:
                if (iVar7 < 0) {
                    fwrite("Error: Read failed\n", 1, 0x13, stderr);
                    /* WARNING: Subroutine does not return */
                    exit(2);
                }
                printf("0x%0*x\n");
                /* WARNING: Subroutine does not return */
                exit(0);
            }
            cVar1 = **(char **)(iVar11 + 0xc);
            if (cVar1 == 'c') {
                iVar10 = 1;
            LAB_00010f9c:
                bVar2 = (*(char **)(iVar11 + 0xc))[1] == 'p';
                goto LAB_00010e68;
            }
            if (cVar1 == 'w') {
                iVar10 = 3;
                goto LAB_00010f9c;
            }
            if (cVar1 == 'b') {
                iVar10 = 2;
                goto LAB_00010f9c;
            }
            fwrite("Error: Invalid mode!\n", 1, 0x15, stderr);
            uVar15 = FUN_00011468();
        switchD_00010c54_caseD_66:
            uVar9 = 1;
            iVar7 = iVar11;
        }
    } while (true);
}

void entry(undefined4 param_1)

{
    undefined4 in_stack_00000000;

    __libc_start_main(FUN_00010c08, in_stack_00000000, &stack0x00000004,
                      0x11f71, &DAT_00011fb1, param_1);
    /* WARNING: Subroutine does not return */
    abort();
}

/* WARNING: Removing unreachable block (ram,0x000113cc) */

void FUN_000113b8(void)

{
    __gmon_start__();
    return;
}

/* WARNING: Removing unreachable block (ram,0x000113ec) */
/* WARNING: Removing unreachable block (ram,0x000113f6) */

void FUN_000113dc(void)

{
    return;
}

void _FINI_0(void)

{
    if (DAT_00022a1c == '\0') {
        FUN_000113dc();
        DAT_00022a1c = '\x01';
    }
    return;
}

/* WARNING: Removing unreachable block (ram,0x0001141c) */
/* WARNING: Removing unreachable block (ram,0x00011464) */
/* WARNING: Removing unreachable block (ram,0x00011426) */

void _INIT_0(void)

{
    return;
}

void FUN_00011468(void)

{
    fwrite("Usage: i2cget [-f] [-y] [-a] I2CBUS CHIP-ADDRESS [DATA-ADDRESS "
           "[MODE]]\n  I2CBUS is an integer or an I2C bus name\n  ADDRESS is "
           "an integer (0x03 - 0x77, or 0x00 - 0x7f if -a is given)\n  MODE is "
           "one of:\n    b (read byte data, default)\n    w (read word data)\n "
           "   c (write byte/read byte)\n    Append p for SMBus PEC\n",
           1, 0x137, stderr);
    /* WARNING: Subroutine does not return */
    exit(1);
}

int FUN_00011494(char *param_1)

{
    size_t sVar1;
    int iVar2;
    char *pcVar3;
    char *pcVar4;

    sVar1 = strlen(param_1);
    iVar2 = sVar1 - 1;
    if ((-1 < iVar2) && (pcVar4 = param_1 + iVar2,
                         param_1[iVar2] == ' ' || param_1[iVar2] == '\n')) {
        pcVar3 = pcVar4 + 1;
        do {
            iVar2 = iVar2 + -1;
            pcVar3 = pcVar3 + -1;
            *pcVar3 = '\0';
            if (iVar2 == -1)
                break;
            pcVar4 = pcVar4 + -1;
        } while (*pcVar4 == ' ' || *pcVar4 == '\n');
    }
    return iVar2 + 2;
}

void FUN_000114f0(void *param_1)

{
    void *pvVar1;
    void *__ptr;

    __ptr = *(void **)((int)param_1 + 4);
    pvVar1 = param_1;
    while (__ptr != (void *)0x0) {
        free(__ptr);
        __ptr = *(void **)((int)pvVar1 + 0x14);
        pvVar1 = (void *)((int)pvVar1 + 0x10);
    }
    free(param_1);
    return;
}

void *FUN_00011528(void *param_1, int param_2)

{
    size_t __size;
    void *pvVar1;

    __size = (param_2 + 8) * 0x10;
    pvVar1 = realloc(param_1, __size);
    if (pvVar1 == (void *)0x0) {
        FUN_000114f0(param_1);
    } else {
        memset((void *)((int)pvVar1 + (__size - 0x80)), 0, 0x80);
    }
    return pvVar1;
}

long FUN_00011570(char *param_1, int param_2)

{
    long lVar1;
    int iVar2;
    int iVar3;
    char *local_14[2];

    lVar1 = strtol(param_1, local_14, 0);
    if ((*local_14[0] == '\0') && (*param_1 != '\0')) {
        if (param_2 == 0) {
            iVar3 = 0x77;
            iVar2 = 3;
        } else {
            iVar3 = 0x7f;
            iVar2 = 0;
        }
        if (iVar3 < lVar1 || lVar1 < iVar2) {
            fprintf(stderr,
                    "Error: Chip address out of range (0x%02lx-0x%02lx)!\n");
            lVar1 = -2;
        }
    } else {
        fwrite("Error: Chip address is not a number!\n", 1, 0x25, stderr);
        lVar1 = -1;
    }
    return lVar1;
}

uint FUN_00011628(undefined4 param_1, char *param_2, size_t param_3,
                  int param_4)

{
    FILE *__stream;
    uint uVar1;
    int *piVar2;
    char *pcVar3;

    snprintf(param_2, param_3, "/dev/i2c/%d", param_1);
    param_2[param_3 - 1] = '\0';
    uVar1 = open64(param_2, 2);
    if ((int)uVar1 < 0) {
        piVar2 = __errno_location();
        if (*piVar2 == 2 || *piVar2 == 0x14) {
            sprintf(param_2, "/dev/i2c-%d", param_1);
            uVar1 = open64(param_2, 2);
        }
        __stream = stderr;
        if (((uint)(param_4 == 0) & uVar1 >> 0x1f) != 0) {
            if (*piVar2 == 2) {
                pcVar3 = strerror(2);
                fprintf(__stream,
                        "Error: Could not open file `/dev/i2c-%d\' or "
                        "`/dev/i2c/%d\': %s\n",
                        param_1, param_1, pcVar3);
                return uVar1;
            }
            pcVar3 = strerror(*piVar2);
            fprintf(__stream, "Error: Could not open file `%s\': %s\n", param_2,
                    pcVar3);
            if (*piVar2 == 0xd) {
                fwrite("Run as root?\n", 1, 0xd, stderr);
            }
        }
    }
    return uVar1;
}

void *FUN_00011764(void)

{
    void *pvVar1;
    FILE *pFVar2;
    int iVar3;
    char *pcVar4;
    int iVar5;
    char *pcVar6;
    int iVar7;
    char *__dest;
    char *pcVar8;
    int iVar9;
    size_t sVar10;
    DIR *__dirp;
    dirent64 *pdVar11;
    DIR *__dirp_00;
    undefined *puVar12;
    uint uVar13;
    uint uVar14;
    undefined4 local_3bc;
    uint local_3b8;
    undefined1 auStack_3b4[20];
    char acStack_3a0[120];
    char acStack_328[256];
    char acStack_228[4];
    char acStack_224[4];
    char acStack_220[4];
    char acStack_21c[244];
    undefined4 local_128[65];

    pvVar1 = calloc(8, 0x10);
    if (pvVar1 == (void *)0x0) {
        return (void *)0x0;
    }
    pFVar2 = fopen64("/proc/bus/i2c", "r");
    if (pFVar2 != (FILE *)0x0) {
        uVar13 = 0;
        iVar9 = 0;
        while (true) {
            pcVar8 = fgets(acStack_3a0, 0x78, pFVar2);
            uVar13 = uVar13 + 1;
            if (pcVar8 == (char *)0x0) {
                fclose(pFVar2);
                return pvVar1;
            }
            pcVar8 = strrchr(acStack_3a0, 9);
            *pcVar8 = '\0';
            iVar3 = FUN_00011494(pcVar8 + 1);
            pcVar4 = strrchr(acStack_3a0, 9);
            *pcVar4 = '\0';
            iVar5 = FUN_00011494(pcVar4 + 1);
            pcVar6 = strrchr(acStack_3a0, 9);
            *pcVar6 = '\0';
            iVar7 = FUN_00011494(pcVar6 + 1);
            __isoc99_sscanf(acStack_3a0, "i2c-%d", local_128);
            if (((uVar13 & 7) == 0) &&
                (pvVar1 = (void *)FUN_00011528(pvVar1, uVar13),
                 pvVar1 == (void *)0x0)) {
                return (void *)0x0;
            }
            __dest = (char *)malloc(iVar5 + iVar7 + iVar3);
            if (__dest == (char *)0x0)
                break;
            *(undefined4 *)((int)pvVar1 + iVar9) = local_128[0];
            pcVar4 = strcpy(__dest, pcVar4 + 1);
            *(char **)((int)pvVar1 + iVar9 + 4) = pcVar4;
            pcVar4 = strcpy(__dest + iVar5, pcVar6 + 1);
            *(char **)((int)pvVar1 + iVar9 + 8) = pcVar4;
            pcVar8 = strcpy(__dest + iVar5 + iVar7, pcVar8 + 1);
            *(char **)((int)pvVar1 + iVar9 + 0xc) = pcVar8;
            iVar9 = iVar9 + 0x10;
        }
    LAB_000118d4:
        FUN_000114f0(pvVar1);
        return (void *)0x0;
    }
    pFVar2 = fopen64("/proc/mounts", "r");
    if (pFVar2 == (FILE *)0x0) {
        return pvVar1;
    }
    do {
        pcVar8 = fgets((char *)local_128, 0xff, pFVar2);
        if (pcVar8 == (char *)0x0) {
            fclose(pFVar2);
            return pvVar1;
        }
        __isoc99_sscanf(local_128, "%*[^ ] %[^ ] %[^ ] %*s\n", acStack_228,
                        acStack_328);
        iVar9 = strcasecmp(acStack_328, "sysfs");
    } while (iVar9 != 0);
    fclose(pFVar2);
    sVar10 = strlen(acStack_228);
    builtin_strncpy(acStack_228 + sVar10, "/cla", 4);
    builtin_strncpy(acStack_224 + sVar10, "ss/i", 4);
    builtin_strncpy(acStack_220 + sVar10, "2c-d", 4);
    (acStack_21c + sVar10)[0] = 'e';
    (acStack_21c + sVar10)[1] = 'v';
    acStack_21c[sVar10 + 2] = '\0';
    __dirp = opendir(acStack_228);
    uVar13 = 0;
    if (__dirp == (DIR *)0x0) {
        return pvVar1;
    }
LAB_000119bc:
    do {
        pdVar11 = readdir64(__dirp);
        while (true) {
            if (pdVar11 == (dirent64 *)0x0) {
                closedir(__dirp);
                return pvVar1;
            }
            if ((pdVar11->d_name[0] == '.') &&
                ((pdVar11->d_name[1] == '\0' ||
                  ((pdVar11->d_name[1] == '.' &&
                    (pdVar11->d_name[2] == '\0'))))))
                goto LAB_000119bc;
            pcVar8 = pdVar11->d_name;
            iVar9 = snprintf((char *)local_128, 0xff, "%s/%s/name", acStack_228,
                             pcVar8);
            if (0xfe < iVar9)
                break;
            pFVar2 = fopen64((char *)local_128, "r");
            if (pFVar2 == (FILE *)0x0) {
                iVar9 = snprintf((char *)local_128, 0xff, "%s/%s/device/name",
                                 acStack_228, pcVar8);
                if (0xfe < iVar9)
                    break;
                pFVar2 = fopen64((char *)local_128, "r");
                if (pFVar2 == (FILE *)0x0) {
                    iVar9 = snprintf((char *)local_128, 0xff, "%s/%s/device",
                                     acStack_228, pcVar8);
                    if (0xfe < iVar9)
                        break;
                    __dirp_00 = opendir((char *)local_128);
                    if (__dirp_00 == (DIR *)0x0)
                        goto LAB_000119bc;
                    do {
                        while (true) {
                            do {
                                pdVar11 = readdir64(__dirp_00);
                                if (pdVar11 == (dirent64 *)0x0)
                                    goto LAB_000119bc;
                            } while (
                                ((pdVar11->d_name[0] == '.') &&
                                 ((pdVar11->d_name[1] == '\0' ||
                                   ((pdVar11->d_name[1] == '.' &&
                                     (pdVar11->d_name[2] == '\0')))))) ||
                                (iVar9 = strncmp(pdVar11->d_name, "i2c-", 4),
                                 iVar9 != 0));
                            iVar9 = snprintf(
                                (char *)local_128, 0xff, "%s/%s/device/%s/name",
                                acStack_228, pcVar8, pdVar11->d_name);
                            if (iVar9 < 0xff)
                                break;
                            fprintf(stderr, "%s: path truncated\n");
                        }
                        pFVar2 = fopen64((char *)local_128, "r");
                    } while (pFVar2 == (FILE *)0x0);
                }
            }
            pcVar4 = fgets(acStack_3a0, 0x78, pFVar2);
            fclose(pFVar2);
            if (pcVar4 == (char *)0x0) {
                fprintf(stderr, "%s: read error\n", local_128);
                goto LAB_000119bc;
            }
            pcVar4 = strchr(acStack_3a0, 10);
            if (pcVar4 != (char *)0x0) {
                *pcVar4 = '\0';
            }
            iVar9 = __isoc99_sscanf(pcVar8, "i2c-%d", &local_3bc);
            if (iVar9 == 0)
                goto LAB_000119bc;
            iVar9 = strncmp(acStack_3a0, "ISA ", 4);
            if (iVar9 == 0) {
                iVar9 = 1;
            } else {
                iVar3 = FUN_00011628(local_3bc, auStack_3b4, 0x14, 1);
                if (iVar3 < 0) {
                    iVar9 = 4;
                } else {
                    iVar9 = ioctl(iVar3, 0x705, &local_3b8);
                    if (iVar9 < 0) {
                        iVar9 = 4;
                    } else if ((local_3b8 & 1) == 0) {
                        if ((local_3b8 & 0x7e0000) == 0) {
                            iVar9 = 0;
                        } else {
                            iVar9 = 3;
                        }
                    } else {
                        iVar9 = 2;
                    }
                    close(iVar3);
                }
            }
            uVar14 = uVar13 + 1;
            if (((uVar14 & 7) == 0) &&
                (pvVar1 = (void *)FUN_00011528(pvVar1, uVar14),
                 pvVar1 == (void *)0x0)) {
                return (void *)0x0;
            }
            *(undefined4 *)((int)pvVar1 + uVar13 * 0x10) = local_3bc;
            iVar3 = __strdup(acStack_3a0);
            *(int *)((int)pvVar1 + uVar13 * 0x10 + 4) = iVar3;
            if (iVar3 == 0)
                goto LAB_000118d4;
            puVar12 = (&PTR_s_Dummy_bus_00012550)[iVar9 * 2];
            *(undefined **)((int)pvVar1 + uVar13 * 0x10 + 8) =
                (&PTR_s_dummy_0001254c)[iVar9 * 2];
            *(undefined **)((int)pvVar1 + uVar13 * 0x10 + 0xc) = puVar12;
            pdVar11 = readdir64(__dirp);
            uVar13 = uVar14;
        }
        fprintf(stderr, "%s: path truncated\n", local_128);
    } while (true);
}

ulong FUN_00011d08(char *param_1)

{
    ulong *puVar1;
    ulong uVar2;
    ulong *puVar3;
    char *__s1;
    int iVar4;
    char *local_1c[2];

    uVar2 = strtoul(param_1, local_1c, 0);
    if ((*local_1c[0] == '\0') && (*param_1 != '\0')) {
        if (0xfffff < uVar2) {
            fwrite("Error: I2C bus out of range!\n", 1, 0x1d, stderr);
            uVar2 = 0xfffffffe;
        }
        return uVar2;
    }
    puVar3 = (ulong *)FUN_00011764();
    if (puVar3 == (ulong *)0x0) {
        fwrite("Error: Out of memory!\n", 1, 0x16, stderr);
        return 0xfffffffd;
    }
    __s1 = (char *)puVar3[1];
    if (__s1 != (char *)0x0) {
        uVar2 = 0xffffffff;
        puVar1 = puVar3;
        do {
            iVar4 = strcmp(__s1, param_1);
            if (iVar4 == 0) {
                if (-1 < (int)uVar2) {
                    uVar2 = 0xfffffffc;
                    fwrite("Error: I2C bus name is not unique!\n", 1, 0x23,
                           stderr);
                    goto LAB_00011da0;
                }
                uVar2 = *puVar1;
            }
            __s1 = (char *)puVar1[5];
            puVar1 = puVar1 + 4;
        } while (__s1 != (char *)0x0);
        if (uVar2 != 0xffffffff)
            goto LAB_00011da0;
    }
    uVar2 = 0xffffffff;
    fwrite("Error: I2C bus name doesn\'t match any bus present!\n", 1, 0x33,
           stderr);
LAB_00011da0:
    FUN_000114f0(puVar3);
    return uVar2;
}

int FUN_00011e54(int param_1, undefined4 param_2, int param_3)

{
    FILE *__stream;
    int iVar1;
    int *piVar2;
    char *pcVar3;
    ulong __request;

    __request = 0x706;
    if (param_3 == 0) {
        __request = 0x703;
    }
    iVar1 = ioctl(param_1, __request, param_2);
    __stream = stderr;
    if (-1 < iVar1) {
        return 0;
    }
    piVar2 = __errno_location();
    pcVar3 = strerror(*piVar2);
    fprintf(__stream, "Error: Could not set address to 0x%02x: %s\n", param_2,
            pcVar3);
    return -*piVar2;
}

undefined4 FUN_00011ec8(undefined4 param_1)

{
    char *pcVar1;
    uint uVar2;
    byte local_14[8];

    pcVar1 = fgets((char *)local_14, 2, stdin);
    if (pcVar1 == (char *)0x0) {
        return 0;
    }
    if (local_14[0] == 0x59) {
    LAB_00011f5c:
        param_1 = 1;
        goto LAB_00011f2c;
    }
    if (local_14[0] < 0x5a) {
        if (local_14[0] == 0x4e)
            goto LAB_00011f54;
    } else {
        if (local_14[0] == 0x6e) {
        LAB_00011f54:
            param_1 = 0;
            goto LAB_00011f2c;
        }
        if (local_14[0] == 0x79)
            goto LAB_00011f5c;
    }
    if (local_14[0] == 10) {
        return param_1;
    }
LAB_00011f2c:
    do {
        uVar2 = fgetc(stdin);
        if (uVar2 == 0xffffffff) {
            return 0;
        }
        local_14[0] = (byte)uVar2;
    } while ((uVar2 & 0xff) != 10);
    return param_1;
}

void FUN_00011f70(undefined4 param_1, undefined4 param_2, undefined4 param_3,
                  undefined4 param_4)

{
    undefined **ppuVar1;
    int iVar2;

    _DT_INIT();
    iVar2 = 0;
    do {
        ppuVar1 = &__DT_INIT_ARRAY + iVar2;
        iVar2 = iVar2 + 1;
        (*(code *)*ppuVar1)(param_1, param_2, param_3, *ppuVar1, param_4);
    } while (iVar2 != 1);
    return;
}

void _DT_FINI(void)

{
    return;
}
