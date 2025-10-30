// Decompiled: monitor-ipsig_b3f178402ef6ce61

void _DT_INIT(void)

{
    FUN_000109d0();
    return;
}

void entry(undefined4 param_1)

{
    undefined4 in_stack_00000000;

    __libc_start_main(&LAB_00010938, in_stack_00000000, &stack0x00000004,
                      0x115ad, &DAT_000115ed, param_1);
    /* WARNING: Subroutine does not return */
    abort();
}

/* WARNING: Removing unreachable block (ram,0x000109e4) */

void FUN_000109d0(void)

{
    __gmon_start__();
    return;
}

/* WARNING: Removing unreachable block (ram,0x00010a04) */
/* WARNING: Removing unreachable block (ram,0x00010a0e) */

void FUN_000109f4(void)

{
    return;
}

void _FINI_0(void)

{
    if (DAT_000219e4 == '\0') {
        FUN_000109f4();
        DAT_000219e4 = '\x01';
    }
    return;
}

/* WARNING: Removing unreachable block (ram,0x00010a34) */
/* WARNING: Removing unreachable block (ram,0x00010a7c) */
/* WARNING: Removing unreachable block (ram,0x00010a3e) */

void _INIT_0(void)

{
    return;
}

char *FUN_00010a80(char *param_1)

{
    size_t sVar1;
    uint __n;
    char acStack_18[8];
    timeval tStack_10;

    gettimeofday(&tStack_10, (__timezone_ptr_t)0x0);
    sprintf(acStack_18, "%ld", tStack_10.tv_usec);
    *param_1 = '\0';
    param_1[1] = '\0';
    param_1[2] = '\0';
    param_1[3] = '\0';
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
    param_1[8] = '\0';
    param_1[9] = '\0';
    sVar1 = strlen(acStack_18);
    __n = 6 - sVar1 & 0xff;
    if (__n != 0) {
        memset(param_1, 0x30, __n);
    }
    strcat(param_1, acStack_18);
    return param_1;
}

undefined4 FUN_00010b18(char *param_1, char *param_2)

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
            printf(":No Such Device %s/n", param_1);
            uVar2 = 0xffffffff;
        } else {
            __src = inet_ntoa(iStack_1c);
            strcpy(param_2, __src);
            close(__fd);
            uVar2 = 1;
        }
    }
    return uVar2;
}

undefined4 *FUN_00010bd4(undefined4 *param_1, char *param_2)

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

char *FUN_00010cd8(char *param_1, char *param_2)

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

void FUN_00010db8(undefined4 param_1)

{
    char acStack_50[68];

    memset(acStack_50, 0, 0x40);
    sprintf(acStack_50, "echo %d > /sys/class/gpio/gpio%d/value", param_1,
            0x1b2);
    system(acStack_50);
    sprintf(acStack_50, "echo %d > /sys/class/gpio/gpio%d/value", param_1,
            0x1b3);
    system(acStack_50);
    return;
}

bool FUN_00010e1c(char *param_1)

{
    int iVar1;

    iVar1 = access(param_1, 0);
    return iVar1 == 0;
}

int FUN_00010e34(void)

{
    int iVar1;
    FILE *pFVar2;
    size_t sVar3;
    int local_4c;
    char acStack_48[64];

    memset(acStack_48, 0, 0x40);
    sprintf(acStack_48, "/sys/class/gpio/gpio%d", 0x196);
    iVar1 = access(acStack_48, 0);
    if (iVar1 != 0) {
        pFVar2 = fopen64("/sys/class/gpio/export", "w");
        if (pFVar2 == (FILE *)0x0) {
            puts("Open read gpio/export");
            return 1;
        }
        sprintf(acStack_48, "%d", 0x196);
        sVar3 = strlen(acStack_48);
        sVar3 = fwrite(acStack_48, sVar3, 1, pFVar2);
        if (sVar3 != 1) {
            puts("File Write Error!");
        }
        fclose(pFVar2);
    }
    sprintf(acStack_48, "/sys/class/gpio/gpio%d/value", 0x196);
    pFVar2 = fopen64(acStack_48, "r");
    if (pFVar2 == (FILE *)0x0) {
        puts("Open read recovery button failure");
        local_4c = 1;
    } else {
        __isoc99_fscanf(pFVar2, "%d", &local_4c);
        fclose(pFVar2);
        if (local_4c != 0) {
            local_4c = 1;
        }
    }
    return local_4c;
}

undefined4 FUN_00010f5c(int param_1)

{
    undefined4 uVar1;
    int iVar2;
    char acStack_50[68];

    iVar2 = 3;
    memset(acStack_50, 0, 0x40);
    do {
        if (param_1 == 0) {
            sprintf(acStack_50, "echo %d > /sys/class/gpio/gpio%d/value", 1,
                    0x1b2);
            system(acStack_50);
            usleep(50000);
            uVar1 = 0x1b2;
        } else {
            sprintf(acStack_50, "echo %d > /sys/class/gpio/gpio%d/value", 1,
                    0x1b3);
            system(acStack_50);
            usleep(50000);
            uVar1 = 0x1b3;
        }
        sprintf(acStack_50, "echo %d > /sys/class/gpio/gpio%d/value", 0, uVar1);
        system(acStack_50);
        usleep(50000);
        iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    return 0;
}

int FUN_00011018(void)

{
    int iVar1;
    int iVar2;
    undefined4 local_14[2];

    DAT_000219e0 = socket(2, 2, 0);
    if (DAT_000219e0 == -1) {
        printf("socket error");
        iVar1 = -1;
    } else {
        local_14[0] = 1;
        iVar1 = setsockopt(DAT_000219e0, 1, 6, local_14, 4);
        if (iVar1 == -1) {
            printf("set socket error...");
            iVar1 = -1;
        } else {
            iVar1 = 0;
            DAT_00021a22 = 0x9b37;
            DAT_00021a24 = 0xffffffff;
            DAT_00021a28 = 0;
            DAT_00021a18 = 0;
            DAT_00021a2c = 0;
            DAT_00021a1c = 0;
            DAT_00021a12 = 0x9c37;
            DAT_00021a14 = 0;
            DAT_00021a20 = 2;
            DAT_00021a10 = 2;
            iVar2 = bind(DAT_000219e0, (sockaddr *)&DAT_00021a10, 0x10);
            if (iVar2 != -1) {
                return iVar2;
            }
            printf("bind error...");
        }
    }
    return iVar1;
}

undefined4 FUN_0001111c(void)

{
    int iVar1;
    size_t __n;
    char *pcVar2;
    ssize_t sVar3;
    char *__dest;
    char local_bc[32];
    char local_9c[140];

    __dest = local_9c + 0x28;
    local_bc[0] = '\0';
    local_bc[1] = '\0';
    local_bc[2] = '\0';
    local_bc[3] = '\0';
    local_bc[4] = '\0';
    local_bc[5] = '\0';
    local_bc[6] = '\0';
    local_bc[7] = '\0';
    local_bc[8] = '\0';
    local_bc[9] = '\0';
    local_bc[10] = '\0';
    local_bc[0xb] = '\0';
    local_bc[0xc] = '\0';
    local_bc[0xd] = '\0';
    local_bc[0xe] = '\0';
    local_bc[0xf] = '\0';
    local_bc[0x10] = '\0';
    local_bc[0x11] = '\0';
    local_bc[0x12] = '\0';
    local_bc[0x13] = '\0';
    local_bc[0x14] = '\0';
    local_bc[0x15] = '\0';
    local_bc[0x16] = '\0';
    local_bc[0x17] = '\0';
    local_bc[0x18] = '\0';
    local_bc[0x19] = '\0';
    local_bc[0x1a] = '\0';
    local_bc[0x1b] = '\0';
    local_bc[0x1c] = '\0';
    local_bc[0x1d] = '\0';
    local_9c[0] = '\0';
    local_9c[1] = '\0';
    local_9c[2] = '\0';
    local_9c[3] = '\0';
    local_9c[4] = '\0';
    local_9c[5] = '\0';
    local_9c[6] = '\0';
    local_9c[7] = '\0';
    local_9c[8] = '\0';
    local_9c[9] = '\0';
    local_9c[10] = '\0';
    local_9c[0xb] = '\0';
    local_9c[0xc] = '\0';
    local_9c[0xd] = '\0';
    local_9c[0xe] = '\0';
    local_9c[0xf] = '\0';
    local_9c[0x10] = '\0';
    local_9c[0x11] = '\0';
    local_9c[0x12] = '\0';
    local_9c[0x13] = '\0';
    local_9c[0x14] = '\0';
    local_9c[0x15] = '\0';
    local_9c[0x16] = '\0';
    local_9c[0x17] = '\0';
    local_9c[0x18] = '\0';
    local_9c[0x19] = '\0';
    local_9c[0x1a] = '\0';
    local_9c[0x1b] = '\0';
    local_9c[0x1c] = '\0';
    local_9c[0x1d] = '\0';
    local_9c[0x1e] = '\0';
    local_9c[0x1f] = '\0';
    local_9c[0x20] = '\0';
    local_9c[0x21] = '\0';
    local_9c[0x22] = '\0';
    local_9c[0x23] = '\0';
    local_9c[0x24] = '\0';
    local_9c[0x25] = '\0';
    local_9c[0x26] = '\0';
    local_9c[0x27] = '\0';
    memset(__dest, 0, 100);
    iVar1 = FUN_00010b18(&DAT_00011758, local_9c);
    if (iVar1 == 0) {
        puts("get IP error");
    }
    FUN_00010cd8(local_bc, &DAT_00011758);
    __n = strlen(local_bc);
    strncpy(&DAT_000219e8, local_bc, __n);
    pcVar2 = stpcpy(__dest, local_9c);
    *pcVar2 = ',';
    memcpy(pcVar2 + 1, local_bc, __n + 1);
    sVar3 = sendto(DAT_000219e0, __dest,
                   (size_t)(pcVar2 + ((__n + 1) - (int)__dest)), 0,
                   (sockaddr *)&DAT_00021a20, 0x10);
    if (-1 < sVar3) {
        printf("send ipmac:\n%s\n", __dest);
        return 1;
    }
    printf("send error....");
    return 1;
}

void FUN_00011274(void *param_1)

{
    ssize_t sVar1;
    char *__format;

    sVar1 =
        sendto(DAT_000219e0, param_1, 10, 0, (sockaddr *)&DAT_00021a20, 0x10);
    if (sVar1 < 0) {
        __format = "send error....";
    } else {
        __format = "send ack OK!\n ";
    }
    printf(__format);
    return;
}

undefined4 FUN_000112cc(void)

{
    char *__s1;
    int iVar1;
    ssize_t sVar2;
    size_t __n;
    __suseconds_t *p_Var3;
    int iVar4;
    socklen_t local_a4;
    timeval local_a0;
    fd_set local_98;

    iVar1 = DAT_000219e0;
    p_Var3 = &local_a0.tv_usec;
    local_a0.tv_usec = 0;
    local_a0.tv_sec = 2;
    do {
        p_Var3 = p_Var3 + 1;
        *p_Var3 = 0;
    } while (p_Var3 != local_98.fds_bits + 0x1f);
    iVar4 = DAT_000219e0 + 0x1f;
    if (-1 < DAT_000219e0) {
        iVar4 = DAT_000219e0;
    }
    local_98.fds_bits[iVar4 >> 5] =
        local_98.fds_bits[iVar4 >> 5] | 1 << (DAT_000219e0 % 0x20 & 0xffU);
    __s1 = (char *)calloc(0x1e, 1);
    iVar1 =
        select(iVar1 + 1, &local_98, (fd_set *)0x0, (fd_set *)0x0, &local_a0);
    if (iVar1 == -1) {
        /* WARNING: Subroutine does not return */
        exit(-1);
    }
    if (iVar1 != 0) {
        iVar1 = DAT_000219e0 + 0x1f;
        if (-1 < DAT_000219e0) {
            iVar1 = DAT_000219e0;
        }
        if ((local_98.fds_bits[iVar1 >> 5] >> (DAT_000219e0 % 0x20 & 0xffU) &
             1U) == 0)
            goto joined_r0x00011404;
        local_a4 = 0x10;
        sVar2 = recvfrom(DAT_000219e0, __s1, 0x1e, 0, (sockaddr *)&DAT_00021a10,
                         &local_a4);
        if (0 < sVar2) {
            printf("rev:\n%s\t", __s1);
            DAT_00021a08 = 0;
            __n = strlen(&DAT_000219e8);
            iVar1 = strncmp(__s1, &DAT_000219e8, __n);
            if (iVar1 == 0) {
                printf("send_ack(\"1\");");
                FUN_00010f5c(1);
                FUN_00011274(&DAT_000117cc);
                free(__s1);
                return 1;
            }
            printf("send_ack(\"0\");");
            FUN_00010f5c(0);
            FUN_00011274("FAILD");
            free(__s1);
            return 0;
        }
        printf("read error....");
    }
    DAT_00021a08 = DAT_00021a08 + 1;
joined_r0x00011404:
    if (DAT_00021a08 != 5) {
        free(__s1);
        return 0;
    }
    DAT_00021a08 = 0;
    puts("Time Out");
    free(__s1);
    return 1;
}

undefined4 FUN_00011514(void)

{
    int iVar1;
    int iVar2;
    int iVar3;

    iVar2 = 5;
    iVar3 = 0;
    do {
        iVar1 = FUN_00010e34();
        if (iVar1 == 0) {
            iVar3 = iVar3 + 1;
            usleep(20000);
        }
        iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    if (iVar3 != 5) {
        return 0;
    }
    FUN_00010db8(0);
    while (iVar2 = FUN_00010e34(), iVar2 == 0) {
        usleep(1000);
    }
    iVar2 = 5;
    do {
        FUN_00010db8(1);
        usleep(100000);
        FUN_00010db8(0);
        usleep(100000);
        iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    return 1;
}

void FUN_000115ac(undefined4 param_1, undefined4 param_2, undefined4 param_3,
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
