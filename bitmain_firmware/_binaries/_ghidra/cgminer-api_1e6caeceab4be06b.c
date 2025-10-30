// Decompiled: cgminer-api_1e6caeceab4be06b

void _DT_INIT(void)

{
    FUN_000108b8();
    return;
}

void entry(undefined4 param_1)

{
    undefined4 in_stack_00000000;

    __libc_start_main(&DAT_000106f4, in_stack_00000000, &stack0x00000004,
                      0x10d9d, &DAT_00010dd9, param_1);
    /* WARNING: Subroutine does not return */
    abort();
}

/* WARNING: Removing unreachable block (ram,0x000108cc) */

void FUN_000108b8(void)

{
    __gmon_start__();
    return;
}

/* WARNING: Removing unreachable block (ram,0x000108f0) */
/* WARNING: Removing unreachable block (ram,0x000108fa) */

void FUN_000108dc(void)

{
    return;
}

/* WARNING: Removing unreachable block (ram,0x0001091c) */
/* WARNING: Removing unreachable block (ram,0x00010926) */

void FUN_00010900(void)

{
    return;
}

void _FINI_0(void)

{
    if (DAT_00022074 == '\0') {
        FUN_000108dc();
        DAT_00022074 = '\x01';
    }
    return;
}

void FUN_000109b8(char *param_1)

{
    char *pcVar1;
    ushort **ppuVar2;
    char *pcVar3;
    char *pcVar4;
    int iVar5;
    char *pcVar6;
    char *pcVar7;

    if (param_1 != (char *)0x0) {
        do {
            pcVar1 = strchr(param_1, 0x7c);
            if (pcVar1 == (char *)0x0) {
                if (*param_1 == '\0') {
                    return;
                }
                pcVar6 = (char *)0x0;
            LAB_00010a34:
                iVar5 = 0;
                do {
                    pcVar1 = strchr(param_1, 0x2c);
                    if (pcVar1 == (char *)0x0) {
                        if (*param_1 == '\0')
                            break;
                        pcVar4 = (char *)0x0;
                    LAB_00010a58:
                        pcVar1 = strchr(param_1, 0x3d);
                        if (pcVar1 == (char *)0x0) {
                            if (iVar5 == 0) {
                            LAB_00010b38:
                                printf("[%s%s] =>\n(\n", param_1, "");
                            }
                        LAB_00010b18:
                            printf("   [%d] => %s\n", iVar5, param_1);
                        } else {
                            *pcVar1 = '\0';
                            pcVar7 = pcVar1 + 1;
                            if (iVar5 == 0) {
                                if (pcVar7 == (char *)0x0)
                                    goto LAB_00010b38;
                                ppuVar2 = __ctype_b_loc();
                                pcVar3 = pcVar7;
                                if (((*ppuVar2)[(byte)pcVar1[1]] & 0x800) ==
                                    0) {
                                    pcVar3 = "";
                                }
                                printf("[%s%s] =>\n(\n", param_1, pcVar3);
                            } else if (pcVar7 == (char *)0x0)
                                goto LAB_00010b18;
                            printf("   [%s] => %s\n", param_1, pcVar7);
                        }
                    } else {
                        pcVar4 = pcVar1 + 1;
                        *pcVar1 = '\0';
                        if (*param_1 != '\0')
                            goto LAB_00010a58;
                    }
                    param_1 = pcVar4;
                    iVar5 = iVar5 + 1;
                } while (param_1 != (char *)0x0);
                puts(")");
            } else {
                pcVar6 = pcVar1 + 1;
                *pcVar1 = '\0';
                if (*param_1 != '\0')
                    goto LAB_00010a34;
            }
            param_1 = pcVar6;
        } while (param_1 != (char *)0x0);
    }
    return;
}

ssize_t FUN_00010b4c(char *param_1, char *param_2, uint param_3)

{
    hostent *phVar1;
    int __fd;
    int iVar2;
    size_t sVar3;
    ssize_t sVar4;
    char *pcVar5;
    int *piVar6;
    char *pcVar7;
    int iVar8;
    char *__buf;
    sockaddr local_30;

    phVar1 = gethostbyname(param_2);
    if (phVar1 == (hostent *)0x0) {
        printf("Couldn\'t get hostname: \'%s\'\n", param_2);
    } else {
        __fd = socket(2, 1, 0);
        if (__fd == -1) {
            piVar6 = __errno_location();
            pcVar5 = strerror(*piVar6);
            printf("Socket initialisation failed: %s\n", pcVar5);
            return 1;
        }
        iVar8 = 0;
        local_30.sa_data[6] = '\0';
        local_30.sa_data[7] = '\0';
        local_30.sa_data._0_2_ =
            (ushort)((param_3 & 0xff) << 8) | (ushort)(param_3 >> 8) & 0xff;
        local_30.sa_data[8] = '\0';
        local_30.sa_data[9] = '\0';
        local_30.sa_data[10] = '\0';
        local_30.sa_data[0xb] = '\0';
        local_30.sa_data[0xc] = '\0';
        local_30.sa_data[0xd] = '\0';
        local_30.sa_family = 2;
        local_30.sa_data._2_2_ = SUB42(*(undefined4 *)*phVar1->h_addr_list, 0);
        local_30.sa_data._4_2_ =
            SUB42((uint) * (undefined4 *)*phVar1->h_addr_list >> 0x10, 0);
        iVar2 = connect(__fd, &local_30, 0x10);
        if (iVar2 < 0) {
            piVar6 = __errno_location();
            pcVar5 = strerror(*piVar6);
            printf("Socket connect failed: %s\n", pcVar5);
            return 1;
        }
        sVar3 = strlen(param_1);
        sVar4 = send(__fd, param_1, sVar3, 0);
        if (sVar4 < 0) {
            piVar6 = __errno_location();
            sVar4 = 1;
            pcVar5 = strerror(*piVar6);
            printf("Send failed: %s\n", pcVar5);
        LAB_00010d30:
            close(__fd);
            return sVar4;
        }
        pcVar5 = (char *)malloc(0x10000);
        if (pcVar5 == (char *)0x0) {
            printf("Err: OOM (%d)\n", 0x10000);
        } else {
            iVar2 = 0xffff;
            do {
                do {
                    __buf = pcVar5 + iVar8;
                    sVar4 = recv(__fd, __buf, iVar2 - iVar8, 0);
                    iVar8 = iVar8 + sVar4;
                    if (sVar4 < 0) {
                        piVar6 = __errno_location();
                        sVar4 = 1;
                        pcVar7 = strerror(*piVar6);
                        printf("Recv failed: %s\n", pcVar7);
                    LAB_00010d0c:
                        *__buf = '\0';
                        if (DAT_00022078 == 0) {
                            printf("Reply was \'%s\'\n", pcVar5);
                            FUN_000109b8(pcVar5);
                        } else {
                            puts(pcVar5);
                        }
                        goto LAB_00010d30;
                    }
                    if (sVar4 == 0)
                        goto LAB_00010d0c;
                } while (iVar2 != iVar8);
                sVar3 = iVar2 + 0x10000;
                iVar2 = iVar2 + 0xffff;
                pcVar5 = (char *)realloc(pcVar5, sVar3);
            } while (pcVar5 != (char *)0x0);
            printf("Err: OOM (%d)\n", sVar3);
        }
    }
    return 1;
}

void FUN_00010d9c(undefined4 param_1, undefined4 param_2, undefined4 param_3,
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
