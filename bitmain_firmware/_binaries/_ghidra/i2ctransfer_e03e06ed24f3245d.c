// Decompiled: i2ctransfer_e03e06ed24f3245d

void _DT_INIT(void)

{
    FUN_000114d4();
    return;
}

void FUN_00010b30(ushort *param_1, int param_2, uint param_3)

{
    char *pcVar1;
    undefined4 *puVar2;
    uint uVar3;
    FILE *__stream;
    int iVar4;
    uint uVar5;

    if ((param_3 & 1) == 0) {
        puVar2 = &stdout;
    } else {
        puVar2 = &stderr;
    }
    __stream = (FILE *)*puVar2;
    for (iVar4 = 0; iVar4 != param_2; iVar4 = iVar4 + 1) {
        uVar3 = param_3 << 0x1d;
        if ((param_1[1] & 1) != 0) {
            uVar3 = param_3 << 0x1e;
        }
        uVar3 = uVar3 >> 0x1f;
        uVar5 = param_3 & 8;
        if (uVar5 != 0) {
            pcVar1 = "read";
            if ((param_1[1] & 1) == 0) {
                pcVar1 = "write";
            }
            fprintf(__stream, "msg %u: addr 0x%02x, %s, len %u", iVar4,
                    (uint)*param_1, pcVar1, (uint)param_1[2]);
        }
        if (param_1[2] == 0) {
            uVar3 = 0;
        }
        if (uVar3 == 0) {
            if (uVar5 != 0) {
                fputc(10, __stream);
            }
        } else {
            if (uVar5 != 0) {
                fwrite(", buf ", 1, 6, __stream);
            }
            uVar3 = 0;
            while (true) {
                uVar5 = uVar3 & 0xffff;
                uVar3 = uVar3 + 1;
                if ((int)(param_1[2] - 1) <= (int)uVar5)
                    break;
                fprintf(__stream, "0x%02x ",
                        (uint) * (byte *)(*(int *)(param_1 + 4) + uVar5));
            }
            fprintf(__stream, "0x%02x\n",
                    (uint) * (byte *)(*(int *)(param_1 + 4) + uVar5));
        }
        param_1 = param_1 + 6;
    }
    return;
}

void FUN_00010c74(int param_1, int param_2)

{
    byte bVar1;
    ushort uVar2;
    bool bVar3;
    FILE *pFVar4;
    int iVar5;
    int iVar6;
    ulong uVar7;
    void *__s;
    int *piVar8;
    undefined4 *puVar9;
    char *pcVar10;
    undefined4 uVar11;
    byte *pbVar12;
    uint uVar13;
    int iVar14;
    uint uVar15;
    uint uVar16;
    byte *pbVar17;
    int iVar18;
    int iVar19;
    int iVar20;
    short sVar21;
    int iVar22;
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

    pbVar17 = local_220;
    pbVar12 = pbVar17;
    do {
        pbVar12[8] = 0;
        pbVar12[9] = 0;
        pbVar12[10] = 0;
        pbVar12[0xb] = 0;
        pbVar12 = pbVar12 + 0xc;
    } while (pbVar12 != abStack_28);
    if (param_1 < 2) {
        if (param_1 == 1) {
        LAB_00010f88:
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
            goto LAB_00010f94;
        }
    LAB_00010fa4:
        iVar14 = 0;
        local_254 = 1;
        iVar18 = iVar14;
        iVar20 = iVar14;
        iVar22 = iVar14;
    } else {
        pcVar10 = *(char **)(param_2 + 4);
        iVar14 = 0;
        if (*pcVar10 != '-')
            goto LAB_00010fa4;
        puVar9 = (undefined4 *)(param_2 + 4);
        iVar20 = 0;
        bVar3 = false;
        iVar22 = 0;
        iVar18 = 0;
        local_254 = 1;
        do {
            switch (pcVar10[1]) {
            case 'V':
                bVar3 = true;
                break;
            default:
                fprintf(stderr, "Error: Unsupported option \"%s\"!\n");
                goto LAB_00010f88;
            case 'a':
                iVar14 = 1;
                break;
            case 'f':
                iVar18 = 1;
                break;
            case 'v':
                iVar20 = 1;
                break;
            case 'y':
                iVar22 = 1;
            }
            if (local_254 + 1 == param_1) {
                if (!bVar3)
                    goto LAB_00010f88;
                goto LAB_00010fb8;
            }
            local_254 = local_254 + 1;
            puVar9 = puVar9 + 1;
            pcVar10 = (char *)*puVar9;
        } while (*pcVar10 == '-');
        if (bVar3) {
        LAB_00010fb8:
            fprintf(stderr, "i2ctransfer version %s\n", &DAT_0001240c);
            /* WARNING: Subroutine does not return */
            exit(0);
        }
    }
    iVar5 = FUN_00011df8(*(undefined4 *)(param_2 + local_254 * 4));
    if ((-1 < iVar5) &&
        (iVar5 = FUN_00011718(iVar5, auStack_234, 0x14, 0), -1 < iVar5)) {
        iVar6 = ioctl(iVar5, 0x705, &local_23c);
        pFVar4 = stderr;
        if (iVar6 < 0) {
            piVar8 = __errno_location();
            pcVar10 = strerror(*piVar8);
            fprintf(
                pFVar4,
                "Error: Could not get the adapter functionality matrix: %s\n",
                pcVar10);
        } else {
            if (((uint)local_23c & 1) != 0) {
                bVar3 = false;
                uVar15 = 0;
                iVar6 = 0;
                local_258 = -1;
                local_250 = (undefined4 *)(param_2 + local_254 * 4 + 4);
            LAB_00010e34:
                local_254 = local_254 + 1;
                if (param_1 <= local_254)
                    goto LAB_000112ac;
                puVar9 = local_250 + 1;
                pbVar12 = (byte *)*local_250;
                if (0x2a < iVar6) {
                    fprintf(stderr, "Error: Too many messages (max: %d)\n",
                            0x2a);
                    goto LAB_000110e0;
                }
                if (bVar3) {
                    uVar7 = strtoul((char *)pbVar12, (char **)&local_23c, 0);
                    if ((0xff < uVar7) || (pbVar12 == local_23c)) {
                        fwrite("Error: Invalid data byte\n", 1, 0x19, stderr);
                        goto LAB_000110c8;
                    }
                    uVar13 = uVar7 & 0xff;
                    uVar2 = *(ushort *)(local_220 + iVar6 * 0xc + 4);
                    uVar16 = uVar15;
                    while (uVar15 = uVar16, uVar16 < uVar2) {
                        uVar15 = uVar16 + 1;
                        *(char *)(local_218[iVar6 * 3] + uVar16) = (char)uVar13;
                        bVar1 = *local_23c;
                        if (bVar1 == 0)
                            break;
                        uVar16 = uVar15;
                        if (bVar1 == 0x2d) {
                            uVar13 = uVar13 - 1 & 0xff;
                        } else if (bVar1 < 0x2e) {
                            if (bVar1 != 0x2b)
                                goto LAB_000110a4;
                            uVar13 = uVar13 + 1 & 0xff;
                        } else if (bVar1 != 0x3d) {
                            if (bVar1 != 0x70) {
                            LAB_000110a4:
                                fwrite("Error: Invalid data byte suffix\n", 1,
                                       0x20, stderr);
                                goto LAB_000110c8;
                            }
                            uVar15 = (uVar13 ^ 0x1b) + 0xd;
                            uVar13 = (uVar15 & 0xff) >> 7 | (uVar15 & 0x7f)
                                                                << 1;
                        }
                    }
                    local_250 = puVar9;
                    if (uVar15 != uVar2)
                        goto LAB_00010e34;
                } else {
                    if (*pbVar12 == 0x72) {
                        sVar21 = 1;
                    } else {
                        if (*pbVar12 != 0x77) {
                            fwrite("Error: Invalid direction\n", 1, 0x19,
                                   stderr);
                            goto LAB_000110c8;
                        }
                        sVar21 = 0;
                    }
                    uVar7 =
                        strtoul((char *)(pbVar12 + 1), (char **)&local_23c, 0);
                    if ((0xffff < uVar7) || (pbVar12 + 1 == local_23c)) {
                        fwrite("Error: Length invalid\n", 1, 0x16, stderr);
                    LAB_000110c8:
                        fprintf(stderr, "Error: faulty argument is \'%s\'\n",
                                *local_250);
                        goto LAB_000110e0;
                    }
                    if (*local_23c != 0) {
                        if (*local_23c == 0x40) {
                            local_258 = FUN_00011660(local_23c + 1, iVar14);
                            if ((-1 < local_258) &&
                                ((iVar18 != 0 ||
                                  (iVar19 = FUN_00011f44(iVar5, local_258, 0),
                                   iVar19 == 0))))
                                goto LAB_00010ed8;
                        } else {
                            fwrite("Error: Unknown separator after length\n", 1,
                                   0x26, stderr);
                        }
                        goto LAB_000110c8;
                    }
                    if (local_258 == -1) {
                        fwrite("Error: No address given\n", 1, 0x18, stderr);
                        goto LAB_000110c8;
                    }
                LAB_00010ed8:
                    iVar19 = iVar6 * 0xc;
                    *(undefined2 *)(local_220 + iVar19) = (undefined2)local_258;
                    *(short *)(local_220 + iVar19 + 2) = sVar21;
                    *(short *)(local_220 + iVar19 + 4) = (short)uVar7;
                    if (uVar7 != 0) {
                        __s = malloc(uVar7);
                        if (__s == (void *)0x0) {
                            fwrite("Error: No memory for buffer\n", 1, 0x1c,
                                   stderr);
                            goto LAB_000110c8;
                        }
                        memset(__s, 0, uVar7);
                        local_218[iVar6 * 3] = (int)__s;
                        if (sVar21 != 0)
                            goto LAB_00010f04;
                        bVar3 = true;
                        uVar15 = 0;
                        local_250 = puVar9;
                        goto LAB_00010e34;
                    }
                }
            LAB_00010f04:
                iVar6 = iVar6 + 1;
                bVar3 = false;
                local_250 = puVar9;
                goto LAB_00010e34;
            }
            fprintf(stderr, "Error: Adapter does not have %s capability\n",
                    "I2C transfers");
        }
    }
LAB_00010f94:
    /* WARNING: Subroutine does not return */
    exit(1);
LAB_000112ac:
    if (iVar6 == 0) {
        bVar3 = true;
    }
    if (bVar3) {
        fwrite("Error: Incomplete message\n", 1, 0x1a, stderr);
    } else {
        if (iVar22 == 0) {
            fwrite("WARNING! This program can confuse your I2C bus, cause data "
                   "loss and worse!\n",
                   1, 0x4b, stderr);
            fprintf(stderr,
                    "I will send the following messages to device file %s:\n",
                    auStack_234);
            FUN_00010b30(local_220, iVar6, 0xd);
            fwrite("Continue? [y/N] ", 1, 0x10, stderr);
            fflush(stderr);
            iVar14 = FUN_00011fb8(0);
            if (iVar14 == 0) {
                fwrite("Aborting on user request.\n", 1, 0x1a, stderr);
                goto LAB_000113ac;
            }
        }
        local_23c = local_220;
        local_238 = iVar6;
        iVar14 = ioctl(iVar5, 0x707, &local_23c);
        pFVar4 = stderr;
        if (-1 < iVar14) {
            if (iVar14 < iVar6) {
                fprintf(stderr, "Warning: only %d/%d messages were sent\n",
                        iVar14, iVar6);
            }
            if (iVar20 == 0) {
                uVar11 = 2;
            } else {
                uVar11 = 0xe;
            }
            FUN_00010b30(local_220, iVar14, uVar11);
        LAB_000113ac:
            close(iVar5);
            iVar14 = 0;
            do {
                iVar18 = iVar14 + 1;
                free((void *)local_218[iVar14 * 3]);
                iVar14 = iVar18;
            } while (iVar18 < iVar6);
            /* WARNING: Subroutine does not return */
            exit(0);
        }
        piVar8 = __errno_location();
        pcVar10 = strerror(*piVar8);
        fprintf(pFVar4, "Error: Sending messages failed: %s\n", pcVar10);
    }
LAB_000110e0:
    iVar14 = 0;
    close(iVar5);
    do {
        iVar14 = iVar14 + 1;
        free(*(void **)(pbVar17 + 8));
        pbVar17 = pbVar17 + 0xc;
    } while (iVar14 <= iVar6);
    goto LAB_00010f94;
}

void entry(undefined4 param_1)

{
    undefined4 in_stack_00000000;

    __libc_start_main(FUN_00010c74, in_stack_00000000, &stack0x00000004,
                      0x12061, &DAT_000120a1, param_1);
    /* WARNING: Subroutine does not return */
    abort();
}

/* WARNING: Removing unreachable block (ram,0x000114e8) */

void FUN_000114d4(void)

{
    __gmon_start__();
    return;
}

/* WARNING: Removing unreachable block (ram,0x00011508) */
/* WARNING: Removing unreachable block (ram,0x00011512) */

void FUN_000114f8(void)

{
    return;
}

void _FINI_0(void)

{
    if (DAT_00022ba0 == '\0') {
        FUN_000114f8();
        DAT_00022ba0 = '\x01';
    }
    return;
}

/* WARNING: Removing unreachable block (ram,0x00011538) */
/* WARNING: Removing unreachable block (ram,0x00011580) */
/* WARNING: Removing unreachable block (ram,0x00011542) */

void _INIT_0(void)

{
    return;
}

int FUN_00011584(char *param_1)

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

void FUN_000115e0(void *param_1)

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

void *FUN_00011618(void *param_1, int param_2)

{
    size_t __size;
    void *pvVar1;

    __size = (param_2 + 8) * 0x10;
    pvVar1 = realloc(param_1, __size);
    if (pvVar1 == (void *)0x0) {
        FUN_000115e0(param_1);
    } else {
        memset((void *)((int)pvVar1 + (__size - 0x80)), 0, 0x80);
    }
    return pvVar1;
}

long FUN_00011660(char *param_1, int param_2)

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

uint FUN_00011718(undefined4 param_1, char *param_2, size_t param_3,
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

void *FUN_00011854(void)

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
            iVar3 = FUN_00011584(pcVar8 + 1);
            pcVar4 = strrchr(acStack_3a0, 9);
            *pcVar4 = '\0';
            iVar5 = FUN_00011584(pcVar4 + 1);
            pcVar6 = strrchr(acStack_3a0, 9);
            *pcVar6 = '\0';
            iVar7 = FUN_00011584(pcVar6 + 1);
            __isoc99_sscanf(acStack_3a0, "i2c-%d", local_128);
            if (((uVar13 & 7) == 0) &&
                (pvVar1 = (void *)FUN_00011618(pvVar1, uVar13),
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
    LAB_000119c4:
        FUN_000115e0(pvVar1);
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
LAB_00011aac:
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
                goto LAB_00011aac;
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
                        goto LAB_00011aac;
                    do {
                        while (true) {
                            do {
                                pdVar11 = readdir64(__dirp_00);
                                if (pdVar11 == (dirent64 *)0x0)
                                    goto LAB_00011aac;
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
                goto LAB_00011aac;
            }
            pcVar4 = strchr(acStack_3a0, 10);
            if (pcVar4 != (char *)0x0) {
                *pcVar4 = '\0';
            }
            iVar9 = __isoc99_sscanf(pcVar8, "i2c-%d", &local_3bc);
            if (iVar9 == 0)
                goto LAB_00011aac;
            iVar9 = strncmp(acStack_3a0, "ISA ", 4);
            if (iVar9 == 0) {
                iVar9 = 1;
            } else {
                iVar3 = FUN_00011718(local_3bc, auStack_3b4, 0x14, 1);
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
                (pvVar1 = (void *)FUN_00011618(pvVar1, uVar14),
                 pvVar1 == (void *)0x0)) {
                return (void *)0x0;
            }
            *(undefined4 *)((int)pvVar1 + uVar13 * 0x10) = local_3bc;
            iVar3 = __strdup(acStack_3a0);
            *(int *)((int)pvVar1 + uVar13 * 0x10 + 4) = iVar3;
            if (iVar3 == 0)
                goto LAB_000119c4;
            puVar12 = (&PTR_s_Dummy_bus_000126dc)[iVar9 * 2];
            *(undefined **)((int)pvVar1 + uVar13 * 0x10 + 8) =
                (&PTR_s_dummy_000126d8)[iVar9 * 2];
            *(undefined **)((int)pvVar1 + uVar13 * 0x10 + 0xc) = puVar12;
            pdVar11 = readdir64(__dirp);
            uVar13 = uVar14;
        }
        fprintf(stderr, "%s: path truncated\n", local_128);
    } while (true);
}

ulong FUN_00011df8(char *param_1)

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
    puVar3 = (ulong *)FUN_00011854();
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
                    goto LAB_00011e90;
                }
                uVar2 = *puVar1;
            }
            __s1 = (char *)puVar1[5];
            puVar1 = puVar1 + 4;
        } while (__s1 != (char *)0x0);
        if (uVar2 != 0xffffffff)
            goto LAB_00011e90;
    }
    uVar2 = 0xffffffff;
    fwrite("Error: I2C bus name doesn\'t match any bus present!\n", 1, 0x33,
           stderr);
LAB_00011e90:
    FUN_000115e0(puVar3);
    return uVar2;
}

int FUN_00011f44(int param_1, undefined4 param_2, int param_3)

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

undefined4 FUN_00011fb8(undefined4 param_1)

{
    char *pcVar1;
    uint uVar2;
    byte local_14[8];

    pcVar1 = fgets((char *)local_14, 2, stdin);
    if (pcVar1 == (char *)0x0) {
        return 0;
    }
    if (local_14[0] == 0x59) {
    LAB_0001204c:
        param_1 = 1;
        goto LAB_0001201c;
    }
    if (local_14[0] < 0x5a) {
        if (local_14[0] == 0x4e)
            goto LAB_00012044;
    } else {
        if (local_14[0] == 0x6e) {
        LAB_00012044:
            param_1 = 0;
            goto LAB_0001201c;
        }
        if (local_14[0] == 0x79)
            goto LAB_0001204c;
    }
    if (local_14[0] == 10) {
        return param_1;
    }
LAB_0001201c:
    do {
        uVar2 = fgetc(stdin);
        if (uVar2 == 0xffffffff) {
            return 0;
        }
        local_14[0] = (byte)uVar2;
    } while ((uVar2 & 0xff) != 10);
    return param_1;
}

void FUN_00012060(undefined4 param_1, undefined4 param_2, undefined4 param_3,
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
