// Decompiled: monitor-ipsig_7807a0e176c439b3

void _DT_INIT(void)

{
    FUN_000109f8();
    return;
}

void entry(undefined4 param_1)

{
    undefined4 in_stack_00000000;

    __libc_start_main(&LAB_00010958, in_stack_00000000, &stack0x00000004,
                      0x1153d, &DAT_00011579, param_1);
    /* WARNING: Subroutine does not return */
    abort();
}

/* WARNING: Removing unreachable block (ram,0x00010a0c) */

void FUN_000109f8(void)

{
    __gmon_start__();
    return;
}

/* WARNING: Removing unreachable block (ram,0x00010a30) */
/* WARNING: Removing unreachable block (ram,0x00010a3a) */

void FUN_00010a1c(void)

{
    return;
}

/* WARNING: Removing unreachable block (ram,0x00010a5c) */
/* WARNING: Removing unreachable block (ram,0x00010a66) */

void FUN_00010a40(void)

{
    return;
}

void _FINI_0(void)

{
    if (DAT_000220a8 == '\0') {
        FUN_00010a1c();
        DAT_000220a8 = '\x01';
    }
    return;
}

undefined4 FUN_00010afc(char *param_1, char *param_2)

{
    int __fd;
    int iVar1;
    char *__src;
    undefined4 uVar2;
    char acStack_30[15];
    undefined1 local_21;
    in_addr iStack_1c;

    __fd = socket(2, 2, 0);
    if (__fd == -1) {
        perror("socket");
        uVar2 = 0xffffffff;
    } else {
        strncpy(acStack_30, param_1, 0x14);
        local_21 = 0x30;
        iVar1 = ioctl(__fd, 0x8915, acStack_30);
        if (iVar1 < 0) {
            uVar2 = 0xffffffff;
            printf(":No Such Device %s/n", param_1);
        } else {
            __src = inet_ntoa(iStack_1c);
            strcpy(param_2, __src);
            uVar2 = 1;
            close(__fd);
        }
    }
    return uVar2;
}

undefined4 *FUN_00010bbc(undefined4 *param_1, char *param_2)

{
    char *__s;
    int __fd;
    int iVar1;
    char *pcVar2;
    char acStack_38[18];
    byte local_26;
    byte local_25;
    byte local_24;
    byte local_23;
    byte local_22;
    byte local_21;

    __s = (char *)calloc(0x28, 1);
    __fd = socket(2, 1, 0);
    if (__fd < 0) {
        perror("socket");
        /* WARNING: Subroutine does not return */
        exit(0);
    }
    strcpy(acStack_38, param_2);
    iVar1 = ioctl(__fd, 0x8927, acStack_38);
    if (-1 < iVar1) {
        close(__fd);
        sprintf(__s, "%02X:%02X:%02X:%02X:%02X:%02X", (uint)local_26,
                (uint)local_25, (uint)local_24, (uint)local_23, (uint)local_22,
                (uint)local_21);
        *param_1 = 0x3d43414d;
        pcVar2 = stpcpy((char *)(param_1 + 1), __s);
        pcVar2[0] = ',';
        pcVar2[1] = '\0';
        free(__s);
        return param_1;
    }
    perror("ioctl");
    /* WARNING: Subroutine does not return */
    exit(0);
}

char *FUN_00010cc0(char *param_1, char *param_2)

{
    char *__s;
    int __fd;
    int iVar1;
    char acStack_38[18];
    byte local_26;
    byte local_25;
    byte local_24;
    byte local_23;
    byte local_22;
    byte local_21;

    __s = (char *)calloc(0x28, 1);
    __fd = socket(2, 1, 0);
    if (__fd < 0) {
        perror("socket");
        /* WARNING: Subroutine does not return */
        exit(0);
    }
    strcpy(acStack_38, param_2);
    iVar1 = ioctl(__fd, 0x8927, acStack_38);
    if (-1 < iVar1) {
        close(__fd);
        sprintf(__s, "%02X:%02X:%02X:%02X:%02X:%02X", (uint)local_26,
                (uint)local_25, (uint)local_24, (uint)local_23, (uint)local_22,
                (uint)local_21);
        strcpy(param_1, __s);
        free(__s);
        return param_1;
    }
    perror("ioctl");
    /* WARNING: Subroutine does not return */
    exit(0);
}

void FUN_00010da0(undefined4 param_1)

{
    char acStack_50[68];

    memset(acStack_50, 0, 0x40);
    sprintf(acStack_50, "echo %d > /sys/class/gpio/gpio%d/value", param_1,
            0x3ad);
    system(acStack_50);
    sprintf(acStack_50, "echo %d > /sys/class/gpio/gpio%d/value", param_1,
            0x3ae);
    system(acStack_50);
    return;
}

bool FUN_00010e04(char *param_1)

{
    int iVar1;

    iVar1 = access(param_1, 0);
    return iVar1 == 0;
}

int FUN_00010e1c(void)

{
    int iVar1;
    FILE *pFVar2;
    size_t sVar3;
    int local_4c;
    char acStack_48[64];

    memset(acStack_48, 0, 0x40);
    sprintf(acStack_48, "/sys/class/gpio/gpio%d", 0x3af);
    iVar1 = access(acStack_48, 0);
    if (iVar1 != 0) {
        pFVar2 = fopen64("/sys/class/gpio/export", "w");
        if (pFVar2 == (FILE *)0x0) {
            puts("Open read gpio/export");
            return 1;
        }
        sprintf(acStack_48, "%d", 0x3af);
        sVar3 = strlen(acStack_48);
        sVar3 = fwrite(acStack_48, sVar3, 1, pFVar2);
        if (sVar3 == 1) {
            fclose(pFVar2);
        } else {
            puts("File Write Error!");
            fclose(pFVar2);
        }
    }
    sprintf(acStack_48, "/sys/class/gpio/gpio%d/value", 0x3af);
    pFVar2 = fopen64(acStack_48, "r");
    if (pFVar2 != (FILE *)0x0) {
        __isoc99_fscanf(pFVar2, "%d", &local_4c);
        fclose(pFVar2);
        if (local_4c != 0) {
            local_4c = 1;
        }
        return local_4c;
    }
    puts("Open read recovery button failure");
    return 1;
}

void FUN_00010f58(int param_1)

{
    int iVar1;
    undefined4 uVar2;
    char acStack_50[64];

    memset(acStack_50, 0, 0x40);
    uVar2 = 0x3ae;
    if (param_1 == 0) {
        uVar2 = 0x3ad;
    }
    iVar1 = 3;
    do {
        sprintf(acStack_50, "echo %d > /sys/class/gpio/gpio%d/value", 1, uVar2);
        system(acStack_50);
        usleep(50000);
        sprintf(acStack_50, "echo %d > /sys/class/gpio/gpio%d/value", 0, uVar2);
        system(acStack_50);
        usleep(50000);
        iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    return;
}

undefined4 FUN_00010fe8(void)

{
    int iVar1;
    undefined4 local_14[2];

    DAT_000220a4 = socket(2, 2, 0);
    if (DAT_000220a4 == -1) {
        printf("socket error");
        return 0xffffffff;
    }
    local_14[0] = 1;
    iVar1 = setsockopt(DAT_000220a4, 1, 6, local_14, 4);
    if (iVar1 != -1) {
        DAT_000220d4 = 0x9c370002;
        DAT_000220d8 = 0;
        DAT_000220dc = 0;
        DAT_000220e0 = 0;
        DAT_000220ec = 0;
        DAT_000220f0 = 0;
        DAT_000220e4 = 0x9b370002;
        DAT_000220e8 = 0xffffffff;
        iVar1 = bind(DAT_000220a4, (sockaddr *)&DAT_000220d4, 0x10);
        if (iVar1 == -1) {
            printf("bind error...");
        }
        return 0;
    }
    printf("set socket error...");
    return 0xffffffff;
}

undefined4 FUN_000110ec(void)

{
    int iVar1;
    size_t __n;
    char *pcVar2;
    ssize_t sVar3;
    char acStack_bc[32];
    char acStack_9c[40];
    char acStack_74[100];

    memset(acStack_bc, 0, 0x1e);
    memset(acStack_9c, 0, 0x28);
    memset(acStack_74, 0, 100);
    iVar1 = FUN_00010afc(&DAT_000116e4, acStack_9c);
    if (iVar1 == 0) {
        puts("get IP error");
    }
    FUN_00010cc0(acStack_bc, &DAT_000116e4);
    __n = strlen(acStack_bc);
    strncpy(&DAT_000220ac, acStack_bc, __n);
    pcVar2 = stpcpy(acStack_74, acStack_9c);
    *pcVar2 = ',';
    memcpy(pcVar2 + 1, acStack_bc, __n + 1);
    sVar3 = sendto(DAT_000220a4, acStack_74,
                   (size_t)(pcVar2 + (__n - (int)acStack_74) + 1), 0,
                   (sockaddr *)&DAT_000220e4, 0x10);
    if (-1 < sVar3) {
        printf("send ipmac:\n%s\n", acStack_74);
        return 1;
    }
    printf("send error....");
    return 1;
}

void FUN_0001121c(void *param_1)

{
    ssize_t sVar1;
    char *__format;

    sVar1 =
        sendto(DAT_000220a4, param_1, 10, 0, (sockaddr *)&DAT_000220e4, 0x10);
    if (sVar1 < 0) {
        __format = "send error....";
    } else {
        __format = "send ack OK!\n ";
    }
    printf(__format);
    return;
}

undefined4 FUN_00011274(void)

{
    char *__s1;
    int iVar1;
    ssize_t sVar2;
    size_t __n;
    uint uVar3;
    __suseconds_t *p_Var4;
    uint uVar5;
    uint uVar6;
    socklen_t local_a4;
    timeval local_a0;
    fd_set local_98;

    uVar5 = DAT_000220a4;
    p_Var4 = &local_a0.tv_usec;
    local_a0.tv_usec = 0;
    local_a0.tv_sec = 2;
    do {
        p_Var4 = p_Var4 + 1;
        *p_Var4 = 0;
    } while (p_Var4 != local_98.fds_bits + 0x1f);
    uVar3 = DAT_000220a4 + 0x1f;
    if (-1 < (int)DAT_000220a4) {
        uVar3 = DAT_000220a4;
    }
    uVar6 = DAT_000220a4 & 0x1f;
    if ((int)DAT_000220a4 < 1) {
        uVar6 = -(-DAT_000220a4 & 0x1f);
    }
    local_98.fds_bits[(int)uVar3 >> 5] =
        local_98.fds_bits[(int)uVar3 >> 5] | 1 << (uVar6 & 0xff);
    __s1 = (char *)calloc(0x1e, 1);
    iVar1 =
        select(uVar5 + 1, &local_98, (fd_set *)0x0, (fd_set *)0x0, &local_a0);
    if (iVar1 == -1) {
        /* WARNING: Subroutine does not return */
        exit(-1);
    }
    if (iVar1 != 0) {
        uVar5 = DAT_000220a4 + 0x1f;
        if (-1 < (int)DAT_000220a4) {
            uVar5 = DAT_000220a4;
        }
        uVar3 = DAT_000220a4 & 0x1f;
        if ((int)DAT_000220a4 < 1) {
            uVar3 = -(-DAT_000220a4 & 0x1f);
        }
        if ((local_98.fds_bits[(int)uVar5 >> 5] & 1 << (uVar3 & 0xff)) == 0)
            goto joined_r0x000113bc;
        local_a4 = 0x10;
        sVar2 = recvfrom(DAT_000220a4, __s1, 0x1e, 0, (sockaddr *)&DAT_000220d4,
                         &local_a4);
        if (0 < sVar2) {
            printf("rev:\n%s\t", __s1);
            DAT_000220cc = 0;
            __n = strlen(&DAT_000220ac);
            iVar1 = strncmp(__s1, &DAT_000220ac, __n);
            if (iVar1 == 0) {
                printf("send_ack(\"1\");");
                FUN_00010f58(1);
                FUN_0001121c(&DAT_00011758);
                free(__s1);
                return 1;
            }
            printf("send_ack(\"0\");");
            FUN_00010f58(0);
            FUN_0001121c("FAILD");
            free(__s1);
            return 0;
        }
        printf("read error....");
    }
    DAT_000220cc = DAT_000220cc + 1;
joined_r0x000113bc:
    if (DAT_000220cc != 5) {
        free(__s1);
        return 0;
    }
    DAT_000220cc = 0;
    puts("Time Out");
    free(__s1);
    return 1;
}

undefined4 FUN_000114a8(void)

{
    int iVar1;
    int iVar2;
    int iVar3;

    iVar2 = 5;
    iVar3 = 0;
    do {
        iVar1 = FUN_00010e1c();
        if (iVar1 == 0) {
            iVar3 = iVar3 + 1;
            usleep(20000);
        }
        iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    if (iVar3 != 5) {
        return 0;
    }
    FUN_00010da0(0);
    while (iVar2 = FUN_00010e1c(), iVar2 == 0) {
        usleep(1000);
    }
    iVar2 = 5;
    do {
        FUN_00010da0(1);
        usleep(100000);
        FUN_00010da0(0);
        usleep(100000);
        iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    return 1;
}

void FUN_0001153c(undefined4 param_1, undefined4 param_2, undefined4 param_3,
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
