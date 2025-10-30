// Decompiled: cgminer-api_65fbf79191d66777

void _DT_INIT(void)

{
    FUN_00010764();
    return;
}

void entry(undefined4 param_1)

{
    undefined4 in_stack_00000000;

    __libc_start_main(FUN_00010eac, in_stack_00000000, &stack0x00000004,
                      0x110f9, &DAT_00011139, param_1);
    /* WARNING: Subroutine does not return */
    abort();
}

/* WARNING: Removing unreachable block (ram,0x00010778) */

void FUN_00010764(void)

{
    __gmon_start__();
    return;
}

/* WARNING: Removing unreachable block (ram,0x00010798) */
/* WARNING: Removing unreachable block (ram,0x000107a2) */

void FUN_00010788(void)

{
    return;
}

void _FINI_0(void)

{
    if (DAT_000213fc == '\0') {
        FUN_00010788();
        DAT_000213fc = '\x01';
    }
    return;
}

/* WARNING: Removing unreachable block (ram,0x000107c8) */
/* WARNING: Removing unreachable block (ram,0x00010810) */
/* WARNING: Removing unreachable block (ram,0x000107d2) */

void _INIT_0(void)

{
    return;
}

void FUN_00010814(char *param_1)

{
    char *pcVar1;
    byte *pbVar2;
    ushort **ppuVar3;
    char *local_24;
    int local_1c;
    byte *local_18;
    char *local_14;
    char *local_10;
    char *local_c;

    local_24 = param_1;
    while (local_24 != (char *)0x0) {
        pcVar1 = strchr(local_24, 0x7c);
        local_c = pcVar1;
        if (pcVar1 != (char *)0x0) {
            local_c = pcVar1 + 1;
            *pcVar1 = '\0';
        }
        if (*local_24 != '\0') {
            local_1c = 0;
            local_10 = local_24;
            while (local_10 != (char *)0x0) {
                pcVar1 = strchr(local_10, 0x2c);
                local_14 = pcVar1;
                if (pcVar1 != (char *)0x0) {
                    local_14 = pcVar1 + 1;
                    *pcVar1 = '\0';
                }
                if (*local_10 != '\0') {
                    pbVar2 = (byte *)strchr(local_10, 0x3d);
                    local_18 = pbVar2;
                    if (pbVar2 != (byte *)0x0) {
                        local_18 = pbVar2 + 1;
                        *pbVar2 = 0;
                    }
                    if (local_1c == 0) {
                        if ((local_18 == (byte *)0x0) ||
                            (ppuVar3 = __ctype_b_loc(), pbVar2 = local_18,
                             ((*ppuVar3)[*local_18] & 0x800) == 0)) {
                            pbVar2 = &DAT_0001114c;
                        }
                        printf("[%s%s] =>\n(\n", local_10, pbVar2);
                    }
                    if (local_18 == (byte *)0x0) {
                        printf("   [%d] => %s\n", local_1c, local_10);
                    } else {
                        printf("   [%s] => %s\n", local_10, local_18);
                    }
                }
                local_1c = local_1c + 1;
                local_10 = local_14;
            }
            if (0 < local_1c) {
                puts(")");
            }
        }
        local_24 = local_c;
    }
    return;
}

undefined4 FUN_000109ec(char *param_1, char *param_2, uint16_t param_3)

{
    int *piVar1;
    char *pcVar2;
    int iVar3;
    size_t sVar4;
    undefined4 local_40;
    undefined4 local_3c;
    undefined4 local_38;
    sockaddr local_34;
    ssize_t local_24;
    int local_20;
    hostent *local_1c;
    int local_18;
    int local_14;
    char *local_10;
    undefined4 local_c;

    local_c = 0;
    local_10 = (char *)0x0;
    local_1c = gethostbyname(param_2);
    if (local_1c == (hostent *)0x0) {
        printf("Couldn\'t get hostname: \'%s\'\n", param_2);
        local_c = 1;
    } else {
        local_20 = socket(2, 1, 0);
        if (local_20 == -1) {
            piVar1 = __errno_location();
            pcVar2 = strerror(*piVar1);
            printf("Socket initialisation failed: %s\n", pcVar2);
            local_c = 1;
        } else {
            memset(&local_34, 0, 0x10);
            local_34.sa_family = 2;
            local_34.sa_data._2_4_ = *(undefined4 *)*local_1c->h_addr_list;
            local_34.sa_data._0_2_ = htons(param_3);
            iVar3 = connect(local_20, &local_34, 0x10);
            if (iVar3 < 0) {
                piVar1 = __errno_location();
                pcVar2 = strerror(*piVar1);
                printf("Socket connect failed: %s\n", pcVar2);
                local_c = 1;
            } else {
                local_38 = 1;
                local_3c = 5;
                local_40 = 2;
                setsockopt(local_20, 1, 9, &local_38, 4);
                setsockopt(local_20, 6, 1, &local_38, 4);
                setsockopt(local_20, 6, 6, &local_38, 4);
                setsockopt(local_20, 6, 4, &local_3c, 4);
                setsockopt(local_20, 6, 5, &local_40, 4);
                sVar4 = strlen(param_1);
                local_24 = send(local_20, param_1, sVar4, 0);
                if (local_24 < 0) {
                    piVar1 = __errno_location();
                    pcVar2 = strerror(*piVar1);
                    printf("Send failed: %s\n", pcVar2);
                    local_c = 1;
                } else {
                    local_14 = 0xffff;
                    local_10 = (char *)malloc(0x10000);
                    if (local_10 == (char *)0x0) {
                        printf("Err: OOM (%d)\n", local_14 + 1);
                        return 1;
                    }
                    local_18 = 0;
                    while (true) {
                        if (local_14 == local_18) {
                            sVar4 = local_14 + 0x10000;
                            local_14 = local_14 + 0xffff;
                            local_10 = (char *)realloc(local_10, sVar4);
                            if (local_10 == (char *)0x0) {
                                printf("Err: OOM (%d)\n", local_14 + 1);
                                return 1;
                            }
                        }
                        local_24 = recv(local_20, local_10 + local_18,
                                        local_14 - local_18, 0);
                        if (local_24 < 0)
                            break;
                        if (local_24 == 0)
                            goto LAB_00010d88;
                        local_18 = local_18 + local_24;
                    }
                    piVar1 = __errno_location();
                    pcVar2 = strerror(*piVar1);
                    printf("Recv failed: %s\n", pcVar2);
                    local_c = 1;
                LAB_00010d88:
                    local_10[local_18] = '\0';
                    if (DAT_00021400 == 0) {
                        printf("Reply was \'%s\'\n", local_10);
                        FUN_00010814(local_10);
                    } else {
                        puts(local_10);
                    }
                }
                close(local_20);
            }
        }
    }
    return local_c;
}

byte *FUN_00010dec(byte *param_1)

{
    ushort **ppuVar1;
    byte *pbVar2;
    byte *local_14;
    byte *local_c;

    local_14 = param_1;
    while (ppuVar1 = __ctype_b_loc(), ((*ppuVar1)[*local_14] & 0x2000) != 0) {
        local_14 = local_14 + 1;
    }
    local_c = (byte *)strchr((char *)local_14, 0);
    while (pbVar2 = local_c + -1, local_14 < local_c) {
        ppuVar1 = __ctype_b_loc();
        local_c = pbVar2;
        if (((*ppuVar1)[*pbVar2] & 0x2000) != 0) {
            *pbVar2 = 0;
        }
    }
    return local_14;
}

undefined4 FUN_00010eac(int param_1, undefined4 *param_2)

{
    int iVar1;
    char *pcVar2;
    undefined4 uVar3;
    int local_18;
    short local_12;
    char *local_10;
    char *local_c;

    local_c = "summary";
    local_10 = "127.0.0.1";
    local_12 = 0xfbc;
    local_18 = 1;
    if ((param_1 < 2) ||
        (((iVar1 = strcmp((char *)param_2[1], "-?"),
           iVar1 != 0 &&
               (iVar1 = strcmp((char *)param_2[1], "-h"), iVar1 != 0)) &&
          (iVar1 = strcmp((char *)param_2[1], "--help"), iVar1 != 0)))) {
        if ((1 < param_1) &&
            (iVar1 = strcmp((char *)param_2[1], "-o"), iVar1 == 0)) {
            DAT_00021400 = 1;
            local_18 = 2;
        }
        if (local_18 < param_1) {
            iVar1 = local_18 + 1;
            pcVar2 = (char *)FUN_00010dec(param_2[local_18]);
            local_18 = iVar1;
            if (*pcVar2 != '\0') {
                local_c = pcVar2;
            }
        }
        if (local_18 < param_1) {
            iVar1 = local_18 + 1;
            pcVar2 = (char *)FUN_00010dec(param_2[local_18]);
            local_18 = iVar1;
            if (*pcVar2 != '\0') {
                local_10 = pcVar2;
            }
        }
        if (local_18 < param_1) {
            pcVar2 = (char *)FUN_00010dec(param_2[local_18]);
            if (*pcVar2 != '\0') {
                iVar1 = atoi(pcVar2);
                local_12 = (short)iVar1;
            }
        }
        uVar3 = FUN_000109ec(local_c, local_10, (int)local_12);
    } else {
        fprintf(stderr, "usAge: %s [command [ip/host [port]]]\n", *param_2);
        uVar3 = 1;
    }
    return uVar3;
}

void FUN_000110f8(undefined4 param_1, undefined4 param_2, undefined4 param_3,
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
