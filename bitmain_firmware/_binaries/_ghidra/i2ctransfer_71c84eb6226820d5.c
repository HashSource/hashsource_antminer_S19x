// Decompiled: i2ctransfer_71c84eb6226820d5

void _DT_INIT(void)

{
    FUN_00011470();
    return;
}

void FUN_00010b28(ushort *param_1, int param_2, uint param_3)

{
    char *pcVar1;
    undefined4 *puVar2;
    uint uVar3;
    FILE *__stream;
    uint uVar4;
    int iVar5;
    uint uVar6;

    if ((param_3 & 1) == 0) {
        puVar2 = &stdout;
    } else {
        puVar2 = &stderr;
    }
    __stream = (FILE *)*puVar2;
    for (iVar5 = 0; iVar5 != param_2; iVar5 = iVar5 + 1) {
        uVar4 = param_3 << 0x1d;
        if ((param_1[1] & 1) != 0) {
            uVar4 = param_3 << 0x1e;
        }
        uVar4 = uVar4 >> 0x1f;
        uVar6 = param_3 & 8;
        if (uVar6 != 0) {
            pcVar1 = "read";
            if ((param_1[1] & 1) == 0) {
                pcVar1 = "write";
            }
            fprintf(__stream, "msg %u: addr 0x%02x, %s, len %u", iVar5,
                    (uint)*param_1, pcVar1, (uint)param_1[2]);
        }
        if (param_1[2] == 0) {
            uVar4 = 0;
        }
        if (uVar4 == 0) {
            if (uVar6 != 0) {
                fputc(10, __stream);
            }
        } else {
            if (uVar6 != 0) {
                fwrite(", buf ", 1, 6, __stream);
            }
            uVar4 = 0;
            while (true) {
                uVar3 = uVar4 & 0xffff;
                uVar4 = uVar4 + 1;
                uVar6 = (uint) * (byte *)(*(int *)(param_1 + 4) + uVar3);
                if ((int)(param_1[2] - 1) <= (int)uVar3)
                    break;
                fprintf(__stream, "0x%02x ", uVar6);
            }
            fprintf(__stream, "0x%02x\n", uVar6);
        }
        param_1 = param_1 + 6;
    }
    return;
}

void FUN_00010c64(int param_1, int param_2)

{
    byte bVar1;
    ushort uVar2;
    FILE *pFVar3;
    int iVar4;
    int iVar5;
    ulong uVar6;
    void *pvVar7;
    int *piVar8;
    undefined4 *puVar9;
    char *pcVar10;
    undefined4 uVar11;
    byte *pbVar12;
    uint uVar13;
    int iVar14;
    int iVar15;
    int iVar16;
    uint uVar17;
    uint uVar18;
    int iVar19;
    int iVar20;
    bool bVar21;
    short sVar22;
    int local_258;
    int local_254;
    undefined4 *local_250;
    byte *local_23c;
    int local_238;
    undefined1 auStack_234[20];
    byte local_220[4];
    ushort local_21c[2];
    int local_218[124];
    byte abStack_28[4];

    pbVar12 = local_220;
    do {
        pbVar12[8] = 0;
        pbVar12[9] = 0;
        pbVar12[10] = 0;
        pbVar12[0xb] = 0;
        pbVar12 = pbVar12 + 0xc;
    } while (abStack_28 != pbVar12);
    if (param_1 < 2) {
        if (param_1 == 1) {
        LAB_00010f3c:
            fwrite("Usage: i2ctransfer [-f] [-y] [-v] [-V] [-a] I2CBUS DESC "
                   "[DATA] [DESC [DATA]]...\n  I2CBUS is an integer or an I2C "
                   "bus name\n  DESC describes the transfer in the form: "
                   "{r|w}LENGTH[@address]\n    1) read/write-flag 2) LENGTH "
                   "(range 0-65535) 3) I2C address (use last one if omitted)\n "
                   " DATA are LENGTH bytes for a write message. They can be "
                   "shortened by a suffix:\n    = (keep value constant until "
                   "LENGTH)\n    + (increase value by 1 until LENGTH)\n    - "
                   "(decrease value by 1 until LENGTH)\n    p (use pseudo "
                   "random generator until LENGTH with value as "
                   "seed)\n\nExample (bus 0, read 8 byte at offset 0x64 from "
                   "EEPROM at 0x50):\n  # i2ctransfer 0 w1@0x50 0x64 "
                   "r8\nExample (same EEPROM, at offset 0x42 write 0xff 0xfe "
                   "... 0xf0):\n  # i2ctransfer 0 w17@0x50 0x42 0xff-\n",
                   1, 0x2ee, stderr);
            goto LAB_00010f48;
        }
    LAB_00010fa0:
        iVar14 = 0;
        local_254 = 1;
        iVar15 = iVar14;
        iVar16 = iVar14;
        iVar19 = iVar14;
    } else {
        pcVar10 = *(char **)(param_2 + 4);
        iVar14 = 0;
        if (*pcVar10 != '-')
            goto LAB_00010fa0;
        puVar9 = (undefined4 *)(param_2 + 4);
        iVar19 = 0;
        bVar21 = false;
        iVar16 = 0;
        iVar15 = 0;
        local_254 = 1;
        do {
            switch (pcVar10[1]) {
            case 'V':
                bVar21 = true;
                break;
            default:
                fprintf(stderr, "Error: Unsupported option \"%s\"!\n");
                goto LAB_00010f3c;
            case 'a':
                iVar14 = 1;
                break;
            case 'f':
                iVar15 = 1;
                break;
            case 'v':
                iVar19 = 1;
                break;
            case 'y':
                iVar16 = 1;
            }
            local_254 = local_254 + 1;
            if (param_1 == local_254) {
                if (bVar21)
                    goto LAB_00010f70;
                goto LAB_00010f3c;
            }
            puVar9 = puVar9 + 1;
            pcVar10 = (char *)*puVar9;
        } while (*pcVar10 == '-');
        if (bVar21) {
        LAB_00010f70:
            fprintf(stderr, "i2ctransfer version %s\n", &DAT_000123d4);
            /* WARNING: Subroutine does not return */
            exit(0);
        }
    }
    iVar4 = FUN_00011dc4(*(undefined4 *)(param_2 + local_254 * 4));
    if ((-1 < iVar4) &&
        (iVar4 = FUN_000116a8(iVar4, auStack_234, 0x14, 0), -1 < iVar4)) {
        iVar5 = ioctl(iVar4, 0x705, &local_23c);
        pFVar3 = stderr;
        if (iVar5 < 0) {
            piVar8 = __errno_location();
            pcVar10 = strerror(*piVar8);
            fprintf(
                pFVar3,
                "Error: Could not get the adapter functionality matrix: %s\n",
                pcVar10);
        } else {
            if (((uint)local_23c & 1) != 0) {
                bVar21 = false;
                uVar17 = 0;
                iVar5 = 0;
                local_258 = -1;
                local_250 = (undefined4 *)(param_2 + local_254 * 4 + 4);
            LAB_00010e14:
                local_254 = local_254 + 1;
                if (param_1 <= local_254)
                    goto LAB_000111c4;
                puVar9 = local_250 + 1;
                pbVar12 = (byte *)*local_250;
                if (0x2a < iVar5) {
                    fprintf(stderr, "Error: Too many messages (max: %d)\n",
                            0x2a);
                    goto LAB_0001108c;
                }
                if (bVar21) {
                    uVar6 = strtoul((char *)pbVar12, (char **)&local_23c, 0);
                    if ((0xff < uVar6) || (local_23c == pbVar12)) {
                        fwrite("Error: Invalid data byte\n", 1, 0x19, stderr);
                        goto LAB_000110dc;
                    }
                    uVar13 = uVar6 & 0xff;
                    uVar2 = *(ushort *)(local_220 + iVar5 * 0xc + 4);
                    uVar18 = uVar17;
                    while (uVar17 = uVar18, uVar18 < uVar2) {
                        uVar17 = uVar18 + 1;
                        *(char *)(local_218[iVar5 * 3] + uVar18) = (char)uVar13;
                        bVar1 = *local_23c;
                        if (bVar1 == 0)
                            break;
                        uVar18 = uVar17;
                        if (bVar1 == 0x2d) {
                            uVar13 = uVar13 - 1 & 0xff;
                        } else if (bVar1 < 0x2e) {
                            if (bVar1 != 0x2b)
                                goto LAB_00011104;
                            uVar13 = uVar13 + 1 & 0xff;
                        } else if (bVar1 != 0x3d) {
                            if (bVar1 != 0x70) {
                            LAB_00011104:
                                fwrite("Error: Invalid data byte suffix\n", 1,
                                       0x20, stderr);
                                goto LAB_000110dc;
                            }
                            uVar17 = (uVar13 ^ 0x1b) + 0xd;
                            uVar13 = (uVar17 & 0xff) >> 7 | (uVar17 & 0x7f)
                                                                << 1;
                        }
                    }
                    local_250 = puVar9;
                    if (uVar17 != uVar2)
                        goto LAB_00010e14;
                } else {
                    if (*pbVar12 == 0x72) {
                        sVar22 = 1;
                    } else {
                        if (*pbVar12 != 0x77) {
                            fwrite("Error: Invalid direction\n", 1, 0x19,
                                   stderr);
                            goto LAB_000110dc;
                        }
                        sVar22 = 0;
                    }
                    uVar6 =
                        strtoul((char *)(pbVar12 + 1), (char **)&local_23c, 0);
                    if ((0xffff < uVar6) || (local_23c == pbVar12 + 1)) {
                        fwrite("Error: Length invalid\n", 1, 0x16, stderr);
                    LAB_000110dc:
                        fprintf(stderr, "Error: faulty argument is \'%s\'\n",
                                *local_250);
                        goto LAB_0001108c;
                    }
                    if (*local_23c != 0) {
                        if (*local_23c == 0x40) {
                            local_258 = FUN_000115f0(local_23c + 1, iVar14);
                            if ((-1 < local_258) &&
                                ((iVar15 != 0 ||
                                  (iVar20 = FUN_00011f18(iVar4, local_258, 0),
                                   iVar20 == 0))))
                                goto LAB_00010eb8;
                        } else {
                            fwrite("Error: Unknown separator after length\n", 1,
                                   0x26, stderr);
                        }
                        goto LAB_000110dc;
                    }
                    if (local_258 == -1) {
                        fwrite("Error: No address given\n", 1, 0x18, stderr);
                        goto LAB_000110dc;
                    }
                LAB_00010eb8:
                    iVar20 = iVar5 * 0xc;
                    *(undefined2 *)(local_220 + iVar20) = (undefined2)local_258;
                    *(short *)(local_220 + iVar20 + 2) = sVar22;
                    *(short *)(local_220 + iVar20 + 4) = (short)uVar6;
                    if (uVar6 != 0) {
                        pvVar7 = calloc(uVar6, 1);
                        if (pvVar7 == (void *)0x0) {
                            fwrite("Error: No memory for buffer\n", 1, 0x1c,
                                   stderr);
                            goto LAB_000110dc;
                        }
                        if (sVar22 == 0) {
                            uVar17 = 0;
                        }
                        local_218[iVar5 * 3] = (int)pvVar7;
                        if (sVar22 != 0)
                            goto LAB_00010ee0;
                        bVar21 = true;
                        local_250 = puVar9;
                        goto LAB_00010e14;
                    }
                }
            LAB_00010ee0:
                iVar5 = iVar5 + 1;
                bVar21 = false;
                local_250 = puVar9;
                goto LAB_00010e14;
            }
            fprintf(stderr, "Error: Adapter does not have %s capability\n",
                    "I2C transfers");
        }
    }
LAB_00010f48:
    /* WARNING: Subroutine does not return */
    exit(1);
LAB_000111c4:
    if (iVar5 == 0) {
        bVar21 = true;
    }
    if (bVar21) {
        fwrite("Error: Incomplete message\n", 1, 0x1a, stderr);
    } else {
        if (iVar16 == 0) {
            fwrite("WARNING! This program can confuse your I2C bus, cause data "
                   "loss and worse!\n",
                   1, 0x4b, stderr);
            fprintf(stderr,
                    "I will send the following messages to device file %s:\n",
                    auStack_234);
            FUN_00010b28(local_220, iVar5, 0xd);
            fwrite("Continue? [y/N] ", 1, 0x10, stderr);
            fflush(stderr);
            iVar14 = FUN_00011f8c(0);
            if (iVar14 == 0) {
                fwrite("Aborting on user request.\n", 1, 0x1a, stderr);
                goto LAB_000112bc;
            }
        }
        local_23c = local_220;
        local_238 = iVar5;
        iVar14 = ioctl(iVar4, 0x707, &local_23c);
        pFVar3 = stderr;
        if (-1 < iVar14) {
            if (iVar14 < iVar5) {
                fprintf(stderr, "Warning: only %d/%d messages were sent\n",
                        iVar14, iVar5);
            }
            if (iVar19 == 0) {
                uVar11 = 2;
            } else {
                uVar11 = 0xe;
            }
            FUN_00010b28(local_220, iVar14, uVar11);
        LAB_000112bc:
            close(iVar4);
            iVar14 = 0;
            do {
                iVar15 = iVar14 + 1;
                free((void *)local_218[iVar14 * 3]);
                iVar14 = iVar15;
            } while (iVar15 < iVar5);
            /* WARNING: Subroutine does not return */
            exit(0);
        }
        piVar8 = __errno_location();
        pcVar10 = strerror(*piVar8);
        fprintf(pFVar3, "Error: Sending messages failed: %s\n", pcVar10);
    }
LAB_0001108c:
    close(iVar4);
    iVar14 = 0;
    do {
        iVar15 = iVar14 + 1;
        free((void *)local_218[iVar14 * 3]);
        iVar14 = iVar15;
    } while (iVar15 <= iVar5);
    goto LAB_00010f48;
}

void entry(undefined4 param_1)

{
    undefined4 in_stack_00000000;

    __libc_start_main(FUN_00010c64, in_stack_00000000, &stack0x00000004,
                      0x1202d, &DAT_00012069, param_1);
    /* WARNING: Subroutine does not return */
    abort();
}

/* WARNING: Removing unreachable block (ram,0x00011484) */

void FUN_00011470(void)

{
    __gmon_start__();
    return;
}

/* WARNING: Removing unreachable block (ram,0x000114a8) */
/* WARNING: Removing unreachable block (ram,0x000114b2) */

void FUN_00011494(void)

{
    return;
}

/* WARNING: Removing unreachable block (ram,0x000114d4) */
/* WARNING: Removing unreachable block (ram,0x000114de) */

void FUN_000114b8(void)

{
    return;
}

void _FINI_0(void)

{
    if (DAT_000230c0 == '\0') {
        FUN_00011494();
        DAT_000230c0 = '\x01';
    }
    return;
}

int FUN_00011500(char *param_1)

{
    size_t sVar1;
    int iVar2;
    int iVar3;
    char *pcVar4;

    sVar1 = strlen(param_1);
    iVar2 = sVar1 - 1;
    if (sVar1 != 0) {
        pcVar4 = param_1 + iVar2;
        if (param_1[iVar2] != '\n' && param_1[iVar2] != ' ') {
            return sVar1 + 1;
        }
        param_1 = param_1 + sVar1;
        while (true) {
            iVar3 = iVar2;
            iVar2 = iVar3 + -1;
            param_1 = param_1 + -1;
            *param_1 = '\0';
            if (iVar2 == -1)
                break;
            pcVar4 = pcVar4 + -1;
            if (*pcVar4 != '\n' && *pcVar4 != ' ') {
                return iVar3 + 1;
            }
        }
    }
    return 1;
}

void FUN_00011570(void *param_1)

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

void *FUN_000115a8(void *param_1, int param_2)

{
    size_t __size;
    void *pvVar1;

    __size = (param_2 + 8) * 0x10;
    pvVar1 = realloc(param_1, __size);
    if (pvVar1 == (void *)0x0) {
        FUN_00011570(param_1);
    } else {
        memset((void *)((int)pvVar1 + (__size - 0x80)), 0, 0x80);
    }
    return pvVar1;
}

long FUN_000115f0(char *param_1, int param_2)

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
        if (lVar1 < iVar2 || iVar3 < lVar1) {
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

uint FUN_000116a8(undefined4 param_1, char *param_2, size_t param_3,
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
        if (*piVar2 == 0x14 || *piVar2 == 2) {
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

void *FUN_000117d8(void)

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
    uint uVar12;
    undefined *puVar13;
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
    if (pvVar1 != (void *)0x0) {
        pFVar2 = fopen64("/proc/bus/i2c", "r");
        if (pFVar2 == (FILE *)0x0) {
            pFVar2 = fopen64("/proc/mounts", "r");
            if (pFVar2 != (FILE *)0x0) {
                do {
                    pcVar8 = fgets((char *)local_128, 0xff, pFVar2);
                    if (pcVar8 == (char *)0x0) {
                        fclose(pFVar2);
                        return pvVar1;
                    }
                    __isoc99_sscanf(local_128, "%*[^ ] %[^ ] %[^ ] %*s\n",
                                    acStack_228, acStack_328);
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
                if (__dirp != (DIR *)0x0) {
                    uVar14 = 0;
                LAB_00011a60:
                    pdVar11 = readdir64(__dirp);
                    if (pdVar11 != (dirent64 *)0x0) {
                        while (true) {
                            if ((pdVar11->d_name[0] == '.') &&
                                ((pdVar11->d_name[1] == '\0' ||
                                  ((pdVar11->d_name[1] == '.' &&
                                    (pdVar11->d_name[2] == '\0'))))))
                                goto LAB_00011a60;
                            pcVar8 = pdVar11->d_name;
                            iVar9 = snprintf((char *)local_128, 0xff,
                                             "%s/%s/name", acStack_228, pcVar8);
                            if (0xfe < iVar9)
                                break;
                            pFVar2 = fopen64((char *)local_128, "r");
                            if (pFVar2 == (FILE *)0x0) {
                                iVar9 = snprintf((char *)local_128, 0xff,
                                                 "%s/%s/device/name",
                                                 acStack_228, pcVar8);
                                if (0xfe < iVar9)
                                    break;
                                pFVar2 = fopen64((char *)local_128, "r");
                                if (pFVar2 == (FILE *)0x0) {
                                    iVar9 = snprintf((char *)local_128, 0xff,
                                                     "%s/%s/device",
                                                     acStack_228, pcVar8);
                                    if (0xfe < iVar9)
                                        break;
                                    __dirp_00 = opendir((char *)local_128);
                                    if (__dirp_00 == (DIR *)0x0)
                                        goto LAB_00011a60;
                                    do {
                                        while (true) {
                                            do {
                                                pdVar11 = readdir64(__dirp_00);
                                                if (pdVar11 == (dirent64 *)0x0)
                                                    goto LAB_00011a60;
                                            } while (
                                                ((pdVar11->d_name[0] == '.') &&
                                                 ((pdVar11->d_name[1] == '\0' ||
                                                   ((pdVar11->d_name[1] ==
                                                         '.' &&
                                                     (pdVar11->d_name[2] ==
                                                      '\0')))))) ||
                                                (iVar9 =
                                                     strncmp(pdVar11->d_name,
                                                             "i2c-", 4),
                                                 iVar9 != 0));
                                            iVar9 = snprintf(
                                                (char *)local_128, 0xff,
                                                "%s/%s/device/%s/name",
                                                acStack_228, pcVar8,
                                                pdVar11->d_name);
                                            if (iVar9 < 0xff)
                                                break;
                                            fprintf(stderr,
                                                    "%s: path truncated\n",
                                                    local_128);
                                        }
                                        pFVar2 =
                                            fopen64((char *)local_128, "r");
                                    } while (pFVar2 == (FILE *)0x0);
                                }
                            }
                            pcVar4 = fgets(acStack_3a0, 0x78, pFVar2);
                            fclose(pFVar2);
                            if (pcVar4 == (char *)0x0) {
                                fprintf(stderr, "%s: read error\n", local_128);
                                goto LAB_00011a60;
                            }
                            pcVar4 = strchr(acStack_3a0, 10);
                            if (pcVar4 != (char *)0x0) {
                                *pcVar4 = '\0';
                            }
                            iVar9 =
                                __isoc99_sscanf(pcVar8, "i2c-%d", &local_3bc);
                            if (iVar9 == 0)
                                goto LAB_00011a60;
                            iVar9 = strncmp(acStack_3a0, "ISA ", 4);
                            if (iVar9 == 0) {
                                iVar9 = 1;
                            } else {
                                iVar3 = FUN_000116a8(local_3bc, auStack_3b4,
                                                     0x14, 1);
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
                            uVar12 = uVar14 + 1;
                            if (((uVar12 & 7) == 0) &&
                                (pvVar1 = (void *)FUN_000115a8(pvVar1, uVar12),
                                 pvVar1 == (void *)0x0)) {
                                return (void *)0x0;
                            }
                            *(undefined4 *)((int)pvVar1 + uVar14 * 0x10) =
                                local_3bc;
                            iVar3 = __strdup(acStack_3a0);
                            *(int *)((int)pvVar1 + uVar14 * 0x10 + 4) = iVar3;
                            if (iVar3 == 0)
                                goto LAB_00011954;
                            puVar13 = (&PTR_s_Dummy_bus_000126a4)[iVar9 * 2];
                            *(undefined **)((int)pvVar1 + uVar14 * 0x10 + 8) =
                                (&PTR_s_dummy_000126a0)[iVar9 * 2];
                            *(undefined **)((int)pvVar1 + uVar14 * 0x10 + 0xc) =
                                puVar13;
                            pdVar11 = readdir64(__dirp);
                            uVar14 = uVar12;
                            if (pdVar11 == (dirent64 *)0x0)
                                goto LAB_00011bb0;
                        }
                        fprintf(stderr, "%s: path truncated\n", local_128);
                        goto LAB_00011a60;
                    }
                LAB_00011bb0:
                    closedir(__dirp);
                }
            }
        } else {
            uVar14 = 0;
            iVar9 = 0;
            while (true) {
                pcVar8 = fgets(acStack_3a0, 0x78, pFVar2);
                uVar14 = uVar14 + 1;
                if (pcVar8 == (char *)0x0)
                    break;
                pcVar8 = strrchr(acStack_3a0, 9);
                *pcVar8 = '\0';
                iVar3 = FUN_00011500(pcVar8 + 1);
                pcVar4 = strrchr(acStack_3a0, 9);
                *pcVar4 = '\0';
                iVar5 = FUN_00011500(pcVar4 + 1);
                pcVar6 = strrchr(acStack_3a0, 9);
                *pcVar6 = '\0';
                iVar7 = FUN_00011500(pcVar6 + 1);
                __isoc99_sscanf(acStack_3a0, "i2c-%d", local_128);
                if (((uVar14 & 7) == 0) &&
                    (pvVar1 = (void *)FUN_000115a8(pvVar1, uVar14),
                     pvVar1 == (void *)0x0)) {
                    return (void *)0x0;
                }
                __dest = (char *)malloc(iVar3 + iVar5 + iVar7);
                if (__dest == (char *)0x0) {
                LAB_00011954:
                    FUN_00011570(pvVar1);
                    return (void *)0x0;
                }
                *(undefined4 *)((int)pvVar1 + iVar9) = local_128[0];
                pcVar4 = strcpy(__dest, pcVar4 + 1);
                *(char **)((int)pvVar1 + iVar9 + 4) = pcVar4;
                pcVar4 = strcpy(__dest + iVar5, pcVar6 + 1);
                *(char **)((int)pvVar1 + iVar9 + 8) = pcVar4;
                pcVar8 = strcpy(__dest + iVar5 + iVar7, pcVar8 + 1);
                *(char **)((int)pvVar1 + iVar9 + 0xc) = pcVar8;
                iVar9 = iVar9 + 0x10;
            }
            fclose(pFVar2);
        }
    }
    return pvVar1;
}

ulong FUN_00011dc4(char *param_1)

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
            uVar2 = 0xfffffffe;
            fwrite("Error: I2C bus out of range!\n", 1, 0x1d, stderr);
        }
        return uVar2;
    }
    puVar3 = (ulong *)FUN_000117d8();
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
                    goto LAB_00011e64;
                }
                uVar2 = *puVar1;
            }
            __s1 = (char *)puVar1[5];
            puVar1 = puVar1 + 4;
        } while (__s1 != (char *)0x0);
        if (uVar2 != 0xffffffff)
            goto LAB_00011e64;
    }
    uVar2 = 0xffffffff;
    fwrite("Error: I2C bus name doesn\'t match any bus present!\n", 1, 0x33,
           stderr);
LAB_00011e64:
    FUN_00011570(puVar3);
    return uVar2;
}

int FUN_00011f18(int param_1, undefined4 param_2, int param_3)

{
    FILE *__stream;
    int iVar1;
    int *piVar2;
    char *pcVar3;
    ulong __request;

    if (param_3 == 0) {
        __request = 0x703;
    } else {
        __request = 0x706;
    }
    iVar1 = ioctl(param_1, __request, param_2);
    __stream = stderr;
    if (iVar1 < 0) {
        piVar2 = __errno_location();
        pcVar3 = strerror(*piVar2);
        fprintf(__stream, "Error: Could not set address to 0x%02x: %s\n",
                param_2, pcVar3);
        return -*piVar2;
    }
    return 0;
}

undefined4 FUN_00011f8c(undefined4 param_1)

{
    char *pcVar1;
    uint uVar2;
    byte local_14[8];

    pcVar1 = fgets((char *)local_14, 2, stdin);
    if (pcVar1 == (char *)0x0) {
        return 0;
    }
    if (local_14[0] == 0x59) {
    LAB_00012024:
        param_1 = 1;
    } else {
        if (local_14[0] < 0x5a) {
            if (local_14[0] != 0x4e)
                goto LAB_00011fd8;
        } else if (local_14[0] != 0x6e) {
            if (local_14[0] != 0x79)
                goto LAB_00011fd8;
            goto LAB_00012024;
        }
        param_1 = 0;
    }
LAB_00011fd8:
    if (local_14[0] != 10) {
        do {
            uVar2 = fgetc(stdin);
            if (uVar2 == 0xffffffff) {
                return 0;
            }
            local_14[0] = (byte)uVar2;
        } while ((uVar2 & 0xff) != 10);
    }
    return param_1;
}

void FUN_0001202c(undefined4 param_1, undefined4 param_2, undefined4 param_3,
                  undefined4 param_4)

{
    int iVar1;
    undefined **ppuVar2;

    _DT_INIT();
    iVar1 = 0;
    ppuVar2 = &__DT_INIT_ARRAY;
    do {
        iVar1 = iVar1 + 1;
        (*(code *)*ppuVar2)(param_1, param_2, param_3, *ppuVar2, param_4);
        ppuVar2 = ppuVar2 + 1;
    } while (iVar1 != 1);
    return;
}

void _DT_FINI(void)

{
    return;
}
