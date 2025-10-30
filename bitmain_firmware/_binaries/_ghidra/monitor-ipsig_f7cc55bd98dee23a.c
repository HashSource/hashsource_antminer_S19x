// Decompiled: monitor-ipsig_f7cc55bd98dee23a

void _DT_INIT(void)

{
    FUN_000109b4();
    return;
}

void entry(undefined4 param_1)

{
    undefined4 in_stack_00000000;

    __libc_start_main(FUN_0001180c, in_stack_00000000, &stack0x00000004,
                      0x1189d, &DAT_000118d9, param_1);
    /* WARNING: Subroutine does not return */
    abort();
}

/* WARNING: Removing unreachable block (ram,0x000109c8) */

void FUN_000109b4(void)

{
    __gmon_start__();
    return;
}

/* WARNING: Removing unreachable block (ram,0x000109ec) */
/* WARNING: Removing unreachable block (ram,0x000109f6) */

void FUN_000109d8(void)

{
    return;
}

/* WARNING: Removing unreachable block (ram,0x00010a18) */
/* WARNING: Removing unreachable block (ram,0x00010a22) */

void FUN_000109fc(void)

{
    return;
}

void _FINI_0(void)

{
    if (DAT_000220ac == '\0') {
        FUN_000109d8();
        DAT_000220ac = '\x01';
    }
    return;
}

undefined4 FUN_00010af0(char *param_1, char *param_2)

{
    int iVar1;
    char *__src;
    undefined4 uVar2;
    char acStack_3c[15];
    undefined1 local_2d;
    undefined4 local_2c;
    in_addr iStack_28;
    undefined4 uStack_24;
    undefined4 uStack_20;
    undefined4 local_1c;
    in_addr_t local_18;
    undefined4 uStack_14;
    undefined4 uStack_10;
    int local_c;

    local_c = socket(2, 2, 0);
    if (local_c == -1) {
        perror("socket");
        uVar2 = 0xffffffff;
    } else {
        strncpy(acStack_3c, param_1, 0x14);
        local_2d = 0x30;
        iVar1 = ioctl(local_c, 0x8915, acStack_3c);
        if (iVar1 < 0) {
            printf(":No Such Device %s/n", param_1);
            uVar2 = 0xffffffff;
        } else {
            local_1c = local_2c;
            local_18 = iStack_28.s_addr;
            uStack_14 = uStack_24;
            uStack_10 = uStack_20;
            __src = inet_ntoa(iStack_28);
            strcpy(param_2, __src);
            close(local_c);
            uVar2 = 1;
        }
    }
    return uVar2;
}

char *FUN_00010bcc(char *param_1, char *param_2)

{
    int iVar1;
    size_t sVar2;
    char acStack_30[18];
    byte local_1e;
    byte local_1d;
    byte local_1c;
    byte local_1b;
    byte local_1a;
    byte local_19;
    int local_10;
    char *local_c;

    local_c = (char *)calloc(0x28, 1);
    local_10 = socket(2, 1, 0);
    if (local_10 < 0) {
        perror("socket");
        /* WARNING: Subroutine does not return */
        exit(0);
    }
    strcpy(acStack_30, param_2);
    iVar1 = ioctl(local_10, 0x8927, acStack_30);
    if (iVar1 < 0) {
        perror("ioctl");
        /* WARNING: Subroutine does not return */
        exit(0);
    }
    close(local_10);
    sprintf(local_c, "%02X:%02X:%02X:%02X:%02X:%02X", (uint)local_1e,
            (uint)local_1d, (uint)local_1c, (uint)local_1b, (uint)local_1a,
            (uint)local_19);
    builtin_strncpy(param_1, "MAC=", 5);
    strcat(param_1, local_c);
    sVar2 = strlen(param_1);
    (param_1 + sVar2)[0] = ',';
    (param_1 + sVar2)[1] = '\0';
    free(local_c);
    return param_1;
}

char *FUN_00010d24(char *param_1, char *param_2)

{
    int iVar1;
    char acStack_30[18];
    byte local_1e;
    byte local_1d;
    byte local_1c;
    byte local_1b;
    byte local_1a;
    byte local_19;
    int local_10;
    char *local_c;

    local_c = (char *)calloc(0x28, 1);
    local_10 = socket(2, 1, 0);
    if (local_10 < 0) {
        perror("socket");
        /* WARNING: Subroutine does not return */
        exit(0);
    }
    strcpy(acStack_30, param_2);
    iVar1 = ioctl(local_10, 0x8927, acStack_30);
    if (iVar1 < 0) {
        perror("ioctl");
        /* WARNING: Subroutine does not return */
        exit(0);
    }
    close(local_10);
    sprintf(local_c, "%02X:%02X:%02X:%02X:%02X:%02X", (uint)local_1e,
            (uint)local_1d, (uint)local_1c, (uint)local_1b, (uint)local_1a,
            (uint)local_19);
    strcpy(param_1, local_c);
    free(local_c);
    return param_1;
}

void FUN_00010e38(void)

{
    system("echo 0 >/sys/class/gpio/gpio941/value");
    system("echo 0 >/sys/class/gpio/gpio942/value");
    return;
}

void FUN_00010e60(void)

{
    system("echo 1 >/sys/class/gpio/gpio941/value");
    system("echo 1 >/sys/class/gpio/gpio942/value");
    return;
}

undefined4 FUN_00010e88(void)

{
    int iVar1;
    size_t sVar2;
    undefined4 uVar3;
    int local_14;
    FILE *local_10;
    FILE *local_c;

    local_c = (FILE *)0x0;
    iVar1 = FUN_00010fa8("/sys/class/gpio/gpio943");
    if (iVar1 == 0) {
        local_10 = (FILE *)0x0;
        local_10 = fopen("/sys/class/gpio/export", "w");
        if (local_10 == (FILE *)0x0) {
            puts("Open read gpio/export");
            return 0xffffffff;
        }
        sVar2 = fwrite(&DAT_00011a2c, 3, 1, local_10);
        if (sVar2 != 1) {
            puts("File Write Error!");
        }
        fclose(local_10);
    }
    local_c = fopen("/sys/class/gpio/gpio943/value", "r");
    if (local_c == (FILE *)0x0) {
        puts("Open read recovery button failure");
        uVar3 = 0xffffffff;
    } else {
        __isoc99_fscanf(local_c, &DAT_00011a8c, &local_14);
        fclose(local_c);
        if (local_14 == 0) {
            uVar3 = 0;
        } else {
            uVar3 = 1;
        }
    }
    return uVar3;
}

bool FUN_00010fa8(char *param_1)

{
    int iVar1;

    iVar1 = access(param_1, 0);
    return iVar1 == 0;
}

uint FUN_00010fe4(void)

{
    uint local_c;

    for (local_c = 0; local_c < 3; local_c = local_c + 1) {
        system("echo 1 >/sys/class/gpio/gpio942/value");
        usleep(50000);
        system("echo 0 >/sys/class/gpio/gpio942/value");
        usleep(50000);
    }
    return local_c;
}

int FUN_00011054(void)

{
    int local_c;

    for (local_c = 0; local_c < 3; local_c = local_c + 1) {
        system("echo 1 >/sys/class/gpio/gpio941/value");
        usleep(50000);
        system("echo 0 >/sys/class/gpio/gpio941/value");
        usleep(50000);
    }
    return local_c;
}

int FUN_000110bc(void)

{
    int iVar1;
    undefined4 local_10;
    int local_c;

    DAT_000220a8 = socket(2, 2, 0);
    if (DAT_000220a8 == -1) {
        printf("socket error");
        iVar1 = -1;
    } else {
        local_10 = 1;
        local_c = 0;
        local_c = setsockopt(DAT_000220a8, 1, 6, &local_10, 4);
        if (local_c == -1) {
            printf("set socket error...");
            iVar1 = -1;
        } else {
            bzero(&DAT_000220e8, 0x10);
            DAT_000220e8 = 2;
            DAT_000220ec = htonl(0xffffffff);
            DAT_000220ea = htons(0x379b);
            bzero(&DAT_000220d8, 0x10);
            DAT_000220d8 = 2;
            DAT_000220dc = htonl(0);
            DAT_000220da = htons(0x379c);
            iVar1 = bind(DAT_000220a8, (sockaddr *)&DAT_000220d8, 0x10);
            if (iVar1 == -1) {
                printf("bind error...");
                iVar1 = 0;
            }
        }
    }
    return iVar1;
}

undefined4 FUN_00011260(void)

{
    int iVar1;
    size_t sVar2;
    char acStack_c0[40];
    char acStack_98[32];
    char acStack_78[100];
    ssize_t local_14;

    memset(acStack_98, 0, 0x1e);
    memset(acStack_c0, 0, 0x28);
    memset(acStack_78, 0, 100);
    iVar1 = FUN_00010af0(&DAT_00011ac4, acStack_c0);
    if (iVar1 == 0) {
        puts("get IP error");
    }
    FUN_00010d24(acStack_98, &DAT_00011ac4);
    sVar2 = strlen(acStack_98);
    strncpy(&DAT_000220b4, acStack_98, sVar2);
    strcpy(acStack_78, acStack_c0);
    sVar2 = strlen(acStack_78);
    (acStack_78 + sVar2)[0] = ',';
    (acStack_78 + sVar2)[1] = '\0';
    strcat(acStack_78, acStack_98);
    iVar1 = DAT_000220a8;
    sVar2 = strlen(acStack_78);
    local_14 =
        sendto(iVar1, acStack_78, sVar2, 0, (sockaddr *)&DAT_000220e8, 0x10);
    if (local_14 < 0) {
        printf("send error....");
    } else {
        printf("send ipmac:\n%s\n", acStack_78);
    }
    return 1;
}

undefined4 FUN_000113e4(void *param_1)

{
    ssize_t sVar1;
    undefined4 extraout_r3;
    undefined4 extraout_r3_00;
    undefined4 uVar2;

    sVar1 =
        sendto(DAT_000220a8, param_1, 10, 0, (sockaddr *)&DAT_000220e8, 0x10);
    if (sVar1 < 0) {
        printf("send error....");
        uVar2 = extraout_r3;
    } else {
        printf("send ack OK!\n ");
        uVar2 = extraout_r3_00;
    }
    return uVar2;
}

/* WARNING: Type propagation algorithm not settling */

bool FUN_00011460(void)

{
    int iVar1;
    size_t __n;
    uint uVar2;
    uint uVar3;
    bool bVar4;
    socklen_t local_a4;
    timeval local_a0;
    fd_set fStack_98;
    ssize_t local_18;
    char *local_14;
    fd_set *local_10;
    uint local_c;

    local_a0.tv_sec = 2;
    local_a0.tv_usec = 0;
    local_10 = &fStack_98;
    for (local_c = 0; local_c < 0x20; local_c = local_c + 1) {
        fStack_98.fds_bits[local_c] = 0;
    }
    uVar2 = DAT_000220a8 + 0x1f;
    if (-1 < (int)DAT_000220a8) {
        uVar2 = DAT_000220a8;
    }
    uVar3 = DAT_000220a8 & 0x1f;
    if ((int)DAT_000220a8 < 1) {
        uVar3 = -(-DAT_000220a8 & 0x1f);
    }
    fStack_98.fds_bits[(int)uVar2 >> 5] =
        fStack_98.fds_bits[(int)uVar2 >> 5] | 1 << (uVar3 & 0xff);
    local_14 = (char *)0x0;
    local_14 = (char *)calloc(0x1e, 1);
    iVar1 = select(DAT_000220a8 + 1, &fStack_98, (fd_set *)0x0, (fd_set *)0x0,
                   &local_a0);
    if (iVar1 != -1) {
        if (iVar1 == 0) {
            DAT_000220d4 = DAT_000220d4 + 1;
        } else {
            uVar2 = DAT_000220a8 + 0x1f;
            if (-1 < (int)DAT_000220a8) {
                uVar2 = DAT_000220a8;
            }
            uVar3 = DAT_000220a8 & 0x1f;
            if ((int)DAT_000220a8 < 1) {
                uVar3 = -(-DAT_000220a8 & 0x1f);
            }
            if ((1 << (uVar3 & 0xff) & fStack_98.fds_bits[(int)uVar2 >> 5]) !=
                0) {
                local_a4 = 0x10;
                local_18 = recvfrom(DAT_000220a8, local_14, 0x1e, 0,
                                    (sockaddr *)&DAT_000220d8, &local_a4);
                if (0 < local_18) {
                    printf("rev:\n%s\t", local_14);
                    DAT_000220d4 = 0;
                    __n = strlen(&DAT_000220b4);
                    iVar1 = strncmp(local_14, &DAT_000220b4, __n);
                    if (iVar1 == 0) {
                        printf("send_ack(\"1\");");
                        FUN_00010fe4();
                        FUN_000113e4(&DAT_00011b3c);
                        free(local_14);
                        return true;
                    }
                    printf("send_ack(\"0\");");
                    FUN_00011054();
                    FUN_000113e4("FAILD");
                    free(local_14);
                    return false;
                }
                printf("read error....");
                DAT_000220d4 = DAT_000220d4 + 1;
            }
        }
        bVar4 = DAT_000220d4 != 5;
        if (bVar4) {
            free(local_14);
        } else {
            DAT_000220d4 = 0;
            puts("Time Out");
            free(local_14);
        }
        return !bVar4;
    }
    /* WARNING: Subroutine does not return */
    exit(-1);
}

bool FUN_00011780(void)

{
    int iVar1;
    int local_10;
    int local_c;

    local_10 = 0;
    for (local_c = 0; local_c < 5; local_c = local_c + 1) {
        iVar1 = FUN_00010e88();
        if (iVar1 == 0) {
            usleep(20000);
            local_10 = local_10 + 1;
        }
    }
    if (local_10 == 5) {
        FUN_00010e60();
    }
    return local_10 == 5;
}

void FUN_0001180c(undefined4 param_1, undefined4 param_2)

{
    int iVar1;

    printf("monitor-ipsig compile %s--%s\n", "Jan 14 2020", "18:22:32", 0,
           param_2, param_1);
    FUN_000110bc();
    do {
        while (iVar1 = FUN_00011780(), iVar1 != 1) {
            usleep(400000);
        }
        do {
            puts("Key Down!!!!!");
            FUN_00011260();
            iVar1 = FUN_00011460();
        } while (iVar1 != 1);
    } while (true);
}

void FUN_0001189c(undefined4 param_1, undefined4 param_2, undefined4 param_3,
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
