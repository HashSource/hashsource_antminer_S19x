// Decompiled: update-daemon_c33338de12fecb29

void _DT_INIT(void)

{
    FUN_00010bac();
    return;
}

undefined4 FUN_00010938(undefined4 param_1, undefined4 *param_2)

{
    char *pcVar1;
    undefined4 uVar2;
    int iVar3;
    int iVar4;
    char *__haystack;
    int local_3c[3];
    sockaddr local_30;
    sockaddr sStack_20;

    __haystack = (char *)*param_2;
    pcVar1 = strstr(__haystack, "daemonc");
    if (pcVar1 == (char *)0x0) {
        pcVar1 = strstr(__haystack, "daemons");
        if (pcVar1 == (char *)0x0) {
            puts("Cannot Find Command!\r");
            uVar2 = 0xffffffff;
        } else {
            iVar3 = socket(2, 1, 0);
            if (iVar3 == -1) {
                /* WARNING: Subroutine does not return */
                __assert_fail("sockfd_server != -1", "update-daemon.c", 0xa2,
                              "ProcessServer");
            }
            memset(&local_30, 0, 0x10);
            local_30.sa_family = 2;
            local_30.sa_data._2_4_ = inet_addr("127.0.0.1");
            uVar2 = FUN_00010c5c("22322");
            printf("Will Listening To Port[%d]\r\n", uVar2);
            local_30.sa_data._0_2_ = SUB42(uVar2, 0);
            iVar4 = bind(iVar3, &local_30, 0x10);
            if (iVar4 == -1) {
                fwrite("bind error!\n", 1, 0xc, stderr);
                /* WARNING: Subroutine does not return */
                exit(1);
            }
            iVar4 = listen(iVar3, 0x200);
            if (iVar4 == -1) {
                fwrite("listen error!\n", 1, 0xe, stderr);
                /* WARNING: Subroutine does not return */
                exit(1);
            }
            do {
                while (true) {
                    puts("waiting for new connection...");
                    local_3c[1] = 0x10;
                    local_3c[0] =
                        accept(iVar3, &sStack_20, (socklen_t *)(local_3c + 1));
                    if (local_3c[0] != -1)
                        break;
                    fwrite("Accept error!\n", 1, 0xe, stderr);
                }
                puts("A new connection occurs!");
                iVar4 = pthread_create((pthread_t *)(local_3c + 2),
                                       (pthread_attr_t *)0x0, FUN_00010cac,
                                       local_3c);
            } while (iVar4 != -1);
            fwrite("pthread_create error!\n", 1, 0x16, stderr);
            iVar3 = shutdown(iVar3, 1);
            if (iVar3 == -1) {
                /* WARNING: Subroutine does not return */
                __assert_fail("ret != -1", "update-daemon.c", 0xcc,
                              "ProcessServer");
            }
            puts("Server shuts down");
            uVar2 = 0;
        }
    } else {
        uVar2 = FUN_00010ee0(param_2[1]);
    }
    return uVar2;
}

void entry(undefined4 param_1)

{
    undefined4 in_stack_00000000;

    __libc_start_main(FUN_00010938, in_stack_00000000, &stack0x00000004,
                      0x11009, &DAT_00011049, param_1);
    /* WARNING: Subroutine does not return */
    abort();
}

/* WARNING: Removing unreachable block (ram,0x00010bc0) */

void FUN_00010bac(void)

{
    __gmon_start__();
    return;
}

/* WARNING: Removing unreachable block (ram,0x00010be0) */
/* WARNING: Removing unreachable block (ram,0x00010bea) */

void FUN_00010bd0(void)

{
    return;
}

void _FINI_0(void)

{
    if (DAT_0002182c == '\0') {
        FUN_00010bd0();
        DAT_0002182c = '\x01';
    }
    return;
}

/* WARNING: Removing unreachable block (ram,0x00010c10) */
/* WARNING: Removing unreachable block (ram,0x00010c58) */
/* WARNING: Removing unreachable block (ram,0x00010c1a) */

void _INIT_0(void)

{
    return;
}

int FUN_00010c5c(char *param_1)

{
    size_t sVar1;
    byte *pbVar2;
    int iVar3;

    sVar1 = strlen(param_1);
    pbVar2 = (byte *)(param_1 + -1);
    iVar3 = 0;
    while (pbVar2 != (byte *)(param_1 + (sVar1 - 2))) {
        pbVar2 = pbVar2 + 1;
        iVar3 = (iVar3 + -0x30 + (uint)*pbVar2) * 10;
    }
    return ((byte)param_1[sVar1 - 1] - 0x30) + iVar3;
}

void FUN_00010cac(int *param_1)

{
    ushort uVar1;
    int iVar2;
    ushort **ppuVar3;
    size_t sVar4;
    byte *pbVar5;
    uint uVar6;
    uint uVar7;
    int __fd;
    char local_820[12];
    undefined2 local_814;
    undefined4 local_810;
    undefined1 auStack_80c[1020];
    char local_410[25];
    undefined1 auStack_3f7[999];

    puts("New Thread!\r");
    local_810 = 0;
    memset(auStack_80c, 0, 0x3fc);
    __fd = *param_1;
    read(__fd, &local_810, 0x400);
    printf("Recv:\'%s\'\r\n", &local_810);
    iVar2 = access((char *)&local_810, 0);
    if (iVar2 != 0) {
        printf("File does not exist: %s\n", &local_810);
        close(__fd);
        /* WARNING: Subroutine does not return */
        pthread_exit((void *)0x0);
    }
    uVar7 = local_810 & 0xff;
    if (uVar7 != 0) {
        ppuVar3 = __ctype_b_loc();
        pbVar5 = (byte *)&local_810;
        do {
            uVar1 = (*ppuVar3)[uVar7];
            if ((((uVar1 & 8) == 0) && (uVar7 != 0x5f)) && (2 < uVar7 - 0x2d)) {
                puts("Invalid client content.");
                close(__fd);
                /* WARNING: Subroutine does not return */
                pthread_exit((void *)(uVar1 & 8));
            }
            pbVar5 = pbVar5 + 1;
            uVar7 = (uint)*pbVar5;
        } while (uVar7 != 0);
    }
    builtin_strncpy(local_410, "/usr/sbin/updateporc.sh ", 0x18);
    local_410[0x18] = 0;
    memset(auStack_3f7, 0, 999);
    strcpy(local_410 + 0x18, (char *)&local_810);
    builtin_strncpy(local_820, "Come On WUHA", 0xc);
    local_814 = 0x4e;
    uVar7 = system(local_410);
    if (uVar7 == 0xffffffff) {
        puts("system err!\r");
        builtin_strncpy(local_820, "500", 4);
    } else {
        printf("system status:[%d]\r\n", uVar7);
        uVar6 = (uVar7 << 0x10) >> 0x18;
        if ((uVar7 & 0x7f) == 0) {
            if (uVar6 == 0) {
                puts("Shell Exec Successfully!\r");
                builtin_strncpy(local_820, "200", 4);
            } else {
                printf("Shell Execute Failed, Ret[%d]\r\n", uVar6);
                sprintf(local_820, "%d", uVar6);
            }
        } else {
            printf("Other Exit Ret[%d]\r\n", uVar6);
            sprintf(local_820, "6%d", uVar6);
        }
    }
    sVar4 = strlen(local_820);
    write(__fd, local_820, sVar4 + 1);
    close(__fd);
    /* WARNING: Subroutine does not return */
    pthread_exit((void *)0x0);
}

int FUN_00010ee0(char *param_1)

{
    undefined2 uVar1;
    int iVar2;
    int iVar3;
    size_t sVar4;
    ssize_t sVar5;
    sockaddr local_420;
    undefined4 local_410;
    undefined1 auStack_40c[1020];

    if (param_1 != (char *)0x0) {
        local_420.sa_data[2] = '\0';
        local_420.sa_data[3] = '\0';
        local_420.sa_data[4] = '\0';
        local_420.sa_data[5] = '\0';
        local_420.sa_data[6] = '\0';
        local_420.sa_data[7] = '\0';
        local_420.sa_data[8] = '\0';
        local_420.sa_data[9] = '\0';
        local_420.sa_data[10] = '\0';
        local_420.sa_data[0xb] = '\0';
        local_420.sa_data[0xc] = '\0';
        local_420.sa_data[0xd] = '\0';
        local_420.sa_family = 2;
        local_420.sa_data[0] = '\0';
        local_420.sa_data[1] = '\0';
        local_420.sa_data._2_4_ = inet_addr("127.0.0.1");
        uVar1 = FUN_00010c5c("22322");
        local_420.sa_data._0_2_ = uVar1;
        iVar2 = socket(2, 1, 0);
        if (iVar2 < 0) {
            perror("socket err:");
            iVar2 = -1;
        } else {
            iVar3 = connect(iVar2, &local_420, 0x10);
            if (iVar3 < 0) {
                perror("connect err:");
                iVar2 = -2;
            } else {
                sVar4 = strlen(param_1);
                send(iVar2, param_1, sVar4 + 1, 0);
                local_410 = 0;
                memset(auStack_40c, 0, 0x3fc);
                sVar5 = recv(iVar2, &local_410, 0x400, 0);
                if (sVar5 < 1) {
                    iVar2 = -3;
                } else {
                    auStack_40c[sVar5 + -4] = 0;
                    iVar2 = FUN_00010c5c(&local_410);
                    if (iVar2 == 200) {
                        iVar2 = 0;
                    }
                }
            }
        }
        return iVar2;
    }
    return -3;
}

void FUN_00011008(undefined4 param_1, undefined4 param_2, undefined4 param_3,
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
