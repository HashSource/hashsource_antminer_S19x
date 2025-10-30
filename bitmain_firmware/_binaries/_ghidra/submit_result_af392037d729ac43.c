// Decompiled: submit_result_af392037d729ac43

void _DT_INIT(void)

{
    FUN_000110c4();
    return;
}

void FUN_00010e28(void)

{
    DIR *__dirp;
    dirent *pdVar1;
    int iVar2;
    int iVar3;
    char *__s1;
    char local_8c[17];
    char cStack_7b;
    undefined1 auStack_7a[86];

    memset(local_8c, 0, 100);
    while (__dirp = opendir("/mnt/card/Result/"), __dirp == (DIR *)0x0) {
        printf("\n\nsubmit_result: Open %s failed!\n", "/mnt/card/Result/");
        sleep(300);
    }
    printf("\n\nsubmit_result: Open %s success\n", "/mnt/card/Result/");
LAB_00010eb0:
    do {
        pdVar1 = readdir(__dirp);
        while (pdVar1 != (dirent *)0x0) {
            if ((pdVar1->d_name[0] == '.') &&
                ((pdVar1->d_name[1] == '\0' ||
                  ((pdVar1->d_name[1] == '.' && (pdVar1->d_name[2] == '\0'))))))
                goto LAB_00010eb0;
            __s1 = pdVar1->d_name;
            iVar2 = strcmp(__s1, ".keep");
            if (iVar2 == 0)
                goto LAB_00010eb0;
            puts("\n");
            printf("submit_result: file name: %s\n", __s1);
            memset(auStack_7a, 0, 0x52);
            builtin_strncpy(local_8c, "/mnt/card/Result", 0x10);
            local_8c[0x10] = 0x2f;
            strcpy(&cStack_7b, __s1);
            while (iVar2 = FUN_000114e0(), iVar2 == 0) {
                sleep(0x1e);
            }
            iVar2 = FUN_00011254(local_8c);
            if (iVar2 == 0) {
                sleep(10);
                iVar2 = FUN_00011254(local_8c);
                if (iVar2 == 0) {
                    sleep(10);
                    iVar2 = FUN_00011254(local_8c);
                    if (iVar2 == 0) {
                        iVar2 = remove(local_8c);
                        if (iVar2 == 0) {
                            printf("rm %s success\n\n", local_8c);
                        } else {
                            printf("rm %s fail\n\n", local_8c);
                        }
                    }
                }
            } else {
                iVar2 = 5;
                do {
                    iVar3 = FUN_000116f4(&DAT_00027120, DAT_00027d20);
                    if (iVar3 == 0) {
                        puts("some wrong with internet");
                        sleep(2);
                    } else {
                        memset(&DAT_00027d28, 0, 200);
                        DAT_00027d24 = 0;
                        DAT_00027d24 = FUN_00011770(&DAT_00027d28, 200);
                        if (DAT_00027d24 == 0) {
                            puts("submit_result: Receive MES system submit "
                                 "result responce fail");
                            sleep(2);
                        } else {
                            iVar3 = FUN_00011154(&DAT_00027d28, DAT_00027d24);
                            if (iVar3 != 0) {
                                iVar2 = remove(local_8c);
                                if (iVar2 == 0) {
                                    printf("submit_result: rm %s success\n",
                                           local_8c);
                                } else {
                                    printf("submit_result: rm %s fail\n",
                                           local_8c);
                                }
                                break;
                            }
                            sleep(2);
                        }
                    }
                    iVar2 = iVar2 + -1;
                } while (iVar2 != 0);
                close(DAT_000270f4);
            }
            sleep(1);
            pdVar1 = readdir(__dirp);
        }
        closedir(__dirp);
        sleep(300);
        __dirp = opendir("/mnt/card/Result/");
        if (__dirp == (DIR *)0x0) {
            printf("submit_result: Open %s failed!\n", "/mnt/card/Result/");
        } else {
            printf("submit_result: Open %s success\n", "/mnt/card/Result/");
        }
    } while (true);
}

void entry(undefined4 param_1)

{
    undefined4 in_stack_00000000;

    __libc_start_main(0x10e29, in_stack_00000000, &stack0x00000004, 0x153ed,
                      &DAT_00015429, param_1);
    /* WARNING: Subroutine does not return */
    abort();
}

/* WARNING: Removing unreachable block (ram,0x000110d8) */

void FUN_000110c4(void)

{
    __gmon_start__();
    return;
}

/* WARNING: Removing unreachable block (ram,0x000110fc) */
/* WARNING: Removing unreachable block (ram,0x00011106) */

void FUN_000110e8(void)

{
    return;
}

/* WARNING: Removing unreachable block (ram,0x00011128) */
/* WARNING: Removing unreachable block (ram,0x00011132) */

void FUN_0001110c(void)

{
    return;
}

void _FINI_0(void)

{
    if (DAT_0002711c == '\0') {
        FUN_000110e8();
        DAT_0002711c = '\x01';
    }
    return;
}

undefined4 FUN_00011154(undefined4 param_1, undefined4 param_2)

{
    int *piVar1;
    undefined4 uVar2;
    int *piVar3;
    char *__s1;
    int iVar4;
    undefined1 auStack_10c[252];

    printf("%s: %s", "check_whether_submit_result_success", param_1);
    piVar1 = (int *)FUN_00013604(param_1, param_2, 0, auStack_10c);
    if ((piVar1 == (int *)0x0) || (*piVar1 != 0)) {
        puts("Don\'t get all respons after submit result");
        uVar2 = 0;
    } else {
        piVar1 = (int *)FUN_00013e38(piVar1, "result");
        if ((piVar1 == (int *)0x0) || (*piVar1 != 0)) {
            puts("Don\'t get result in submit responce");
            return 0;
        }
        piVar3 = (int *)FUN_00013e38(piVar1, &DAT_000154bc);
        if ((piVar3 == (int *)0x0) || (*piVar3 != 2)) {
            puts("Don\'t get code in result");
            uVar2 = 0;
        } else {
            __s1 = (char *)FUN_00014010();
            iVar4 = strcmp(__s1, "000000");
            if (iVar4 == 0) {
                puts("submit result success");
                uVar2 = 1;
            } else {
                uVar2 = FUN_00014010(piVar3);
                printf("submit result fail! code: %s\n", uVar2);
                piVar1 = (int *)FUN_00013e38(piVar1, &DAT_00015520);
                if ((piVar1 == (int *)0x0) || (*piVar1 != 2)) {
                    puts("Don\'t get msg in result");
                    uVar2 = 0;
                } else {
                    uVar2 = FUN_00014010();
                    printf("submit result fail! msg: %s\n", uVar2);
                    uVar2 = 0;
                }
            }
        }
    }
    return uVar2;
}

undefined4 FUN_00011254(undefined4 param_1)

{
    int *piVar1;
    char *__s;
    int iVar2;
    undefined1 auStack_10c[252];

    piVar1 = (int *)FUN_00013744(param_1, 0, auStack_10c);
    if ((piVar1 != (int *)0x0) && (iVar2 = *piVar1, iVar2 == 0)) {
        memset(&DAT_00027120, 0, 0xc00);
        DAT_00027d20 = iVar2;
        __s = (char *)FUN_00011f78(piVar1, 0);
        DAT_00027d20 = strlen(__s);
        memcpy(&DAT_00027120, __s, DAT_00027d20);
        return 1;
    }
    printf("submit_result: %s is not in jasson format\n", param_1);
    return 0;
}

undefined4 FUN_000112bc(int param_1)

{
    int iVar1;
    undefined4 uVar2;
    undefined4 local_2c;
    undefined4 uStack_28;
    undefined4 local_24;
    undefined4 uStack_20;
    undefined4 local_1c;

    uVar2 = 0;
    local_24 = 0x1e;
    uStack_20 = 3;
    local_2c = 1;
    uStack_28 = 0x2d;
    local_1c = 0;
    printf("socket_fd = %d\n", param_1);
    iVar1 = setsockopt(param_1, 1, 0x15, &uStack_20, 8);
    if ((iVar1 < 0) ||
        (iVar1 = setsockopt(param_1, 1, 0x14, &uStack_20, 8), iVar1 < 0)) {
        printf("Set socket send timeout fail, ret = %d\n");
        uVar2 = 0;
    } else {
        iVar1 = setsockopt(param_1, 1, 9, &local_2c, 4);
        if (iVar1 < 0) {
            printf("Set socket keep alive fail, ret = %d\n");
            return 0;
        }
        iVar1 = setsockopt(param_1, 6, 1, &local_2c, 4);
        if (iVar1 < 0) {
            printf("Set socket no delay fail, ret = %d\n");
            return 0;
        }
        iVar1 = setsockopt(param_1, 6, 6, &local_2c, 4);
        if (iVar1 < 0) {
            printf("Set socket keep cnt fail, ret = %d\n");
            uVar2 = 0;
        } else {
            iVar1 = setsockopt(param_1, 6, 4, &uStack_28, 4);
            if (iVar1 < 0) {
                printf("Set socket keep idle fail, ret = %d\n");
            } else {
                iVar1 = setsockopt(param_1, 6, 5, &local_24, 4);
                if (iVar1 < 0) {
                    printf("Set socket keep intvl fail, ret = %d\n");
                    uVar2 = 0;
                } else {
                    uVar2 = 1;
                }
            }
        }
    }
    return uVar2;
}

undefined4 FUN_000113d4(char *param_1, void *param_2)

{
    int __fd;
    size_t sVar1;
    int iVar2;
    char *__s;
    undefined4 uVar3;
    undefined4 local_38;
    undefined4 uStack_34;
    undefined4 local_30;
    undefined4 uStack_2c;
    in_addr local_24;

    __fd = socket(2, 2, 0);
    local_38 = 0;
    uStack_34 = 0;
    local_30 = 0;
    uStack_2c = 0;
    sVar1 = strlen(param_1);
    memcpy(&local_38, param_1, sVar1);
    iVar2 = ioctl(__fd, 0x8915, &local_38);
    if (iVar2 == 0) {
        __s = inet_ntoa(local_24);
        sVar1 = strlen(__s);
        memcpy(param_2, __s, sVar1);
        close(__fd);
        uVar3 = 0;
    } else {
        uVar3 = 0xffffffff;
    }
    return uVar3;
}

undefined4 FUN_000114e0(void)

{
    char cVar1;
    int iVar2;
    hostent *phVar3;
    char *__s;
    size_t __n;
    int iVar4;
    undefined4 uVar5;
    char *pcVar6;
    in_addr_t *piVar7;
    uint uVar8;
    uint uVar9;
    sockaddr local_44;
    char local_34[20];

    local_34[0] = '\0';
    local_34[1] = '\0';
    local_34[2] = '\0';
    local_34[3] = '\0';
    local_34[4] = '\0';
    local_34[5] = '\0';
    local_34[6] = '\0';
    local_34[7] = '\0';
    local_34[8] = '\0';
    local_34[9] = '\0';
    local_34[10] = '\0';
    local_34[0xb] = '\0';
    local_34[0xc] = '\0';
    local_34[0xd] = '\0';
    local_34[0xe] = '\0';
    local_34[0xf] = '\0';
    local_34[0x10] = '\0';
    local_34[0x11] = '\0';
    local_34[0x12] = '\0';
    local_34[0x13] = '\0';
    if (DAT_000270f4 != -1) {
        close(DAT_000270f4);
        DAT_000270f4 = -1;
        puts("submit_result: close socket");
    }
    while (iVar2 = FUN_000113d4(&DAT_00015784, local_34), iVar2 != 0) {
        printf("submit_result: Cann\'t get %s ip\n", &DAT_00015784);
        sleep(1);
    }
    printf("submit_result: Get %s ip: %s\n", &DAT_00015784, local_34);
    iVar2 = 0;
    while (phVar3 = gethostbyname("mtcs.bitmain.com"),
           phVar3 == (hostent *)0x0) {
        printf("submit_result: try get MES system ip: %d\n", iVar2);
        iVar2 = iVar2 + 1;
        sleep(3);
        if (iVar2 == 0x1e) {
            puts("submit_result: Can\'t get MES system by host name");
            return 0;
        }
    }
    uVar8 = 0;
    local_34[0] = '\0';
    local_34[1] = '\0';
    local_34[2] = '\0';
    local_34[3] = '\0';
    local_34[4] = '\0';
    local_34[5] = '\0';
    local_34[6] = '\0';
    local_34[7] = '\0';
    local_34[8] = '\0';
    local_34[9] = '\0';
    local_34[10] = '\0';
    local_34[0xb] = '\0';
    pcVar6 = "AF_INET";
    local_34[0xc] = '\0';
    local_34[0xd] = '\0';
    local_34[0xe] = '\0';
    local_34[0xf] = '\0';
    local_34[0x10] = '\0';
    local_34[0x11] = '\0';
    local_34[0x12] = '\0';
    local_34[0x13] = '\0';
    if (phVar3->h_addrtype != 2) {
        pcVar6 = "AF_INET6";
    }
    printf("submit_result: Address type: %s\n", pcVar6);
    piVar7 = (in_addr_t *)*phVar3->h_addr_list;
    if (piVar7 != (in_addr_t *)0x0) {
        iVar2 = 0;
        do {
            uVar9 = uVar8 + 1;
            pcVar6 = inet_ntoa((in_addr)*piVar7);
            uVar8 = uVar9 & 0xff;
            printf("submit_result: IP addr %d: %s\n", uVar9, pcVar6);
            pcVar6 = inet_ntoa(
                (in_addr) * *(in_addr_t **)((int)phVar3->h_addr_list + iVar2));
            __s = inet_ntoa((in_addr) *
                            *(in_addr_t **)((int)phVar3->h_addr_list + iVar2));
            __n = strlen(__s);
            memcpy(local_34, pcVar6, __n);
            printf("submit_result: ip addr: %s\n", local_34);
            iVar2 = (int)(short)uVar8 << 2;
            piVar7 = (in_addr_t *)phVar3->h_addr_list[(short)uVar8];
        } while (piVar7 != (in_addr_t *)0x0);
    }
    cVar1 = '\x1e';
    do {
        DAT_000270f4 = socket(phVar3->h_addrtype, 1, 0);
        if (-1 < DAT_000270f4) {
            puts("submit_result: Creat socket success");
            local_44.sa_data[0] = '\x1f';
            local_44.sa_data[1] = -0x66;
            iVar2 = 0x1e;
            local_44.sa_family = (sa_family_t)phVar3->h_addrtype;
            local_44.sa_data._2_4_ = inet_addr(local_34);
            do {
                iVar2 = iVar2 + -1;
                iVar4 = connect(DAT_000270f4, &local_44, 0x10);
                if (iVar4 == 0) {
                    puts("submit_result: Creat socket connection to MES system "
                         "success");
                    uVar5 = FUN_000112bc(DAT_000270f4);
                    return uVar5;
                }
                sleep(1);
                printf("submit_result: timeout_counter = %d\n", iVar2);
            } while (iVar2 != 0);
            puts("submit_result: Creat socket connection to MES system fail");
            return 0;
        }
        puts("submit_result: Creat socket fail");
        cVar1 = cVar1 + -1;
    } while (cVar1 != '\0');
    puts("submit_result: Creat socket timeout");
    return 0;
}

undefined1 FUN_000116f4(void *param_1, size_t param_2, undefined4 param_3,
                        undefined4 param_4)

{
    ssize_t sVar1;
    char cVar2;

    cVar2 = -5;
    printf("submit_result: %s", "send_message_to_bitmain_MES_system", param_3,
           param_4, param_4);
    do {
        sVar1 = send(DAT_000270f4, param_1, param_2, 0);
        if (sVar1 == 0) {
            puts("submit_result: Timeout. MES close socket");
        } else {
            if (-1 < sVar1) {
                printf("submit_result: %s done\n",
                       "send_message_to_bitmain_MES_system");
                return 1;
            }
            printf("submit_result: Socket return back: %d\n");
        }
        cVar2 = cVar2 + -1;
    } while (cVar2 != '\0');
    return 0;
}

int FUN_00011770(undefined1 *param_1, size_t param_2)

{
    char cVar1;
    ssize_t sVar2;
    int iVar3;
    int iVar4;
    undefined1 *__buf;

    memset(param_1, 0, param_2);
    iVar3 = 0x3d;
    iVar4 = 0;
    *param_1 = 10;
    __buf = param_1;
    while (true) {
        sVar2 = recv(DAT_000270f4, __buf, param_2 - iVar4, 0);
        if (sVar2 == 0) {
            puts("MES system close the socket");
            cVar1 = __buf[-1];
        } else {
            if (sVar2 < 0) {
                printf("Receive message fail: %d\n");
            } else {
                iVar4 = iVar4 + sVar2;
                __buf = param_1 + iVar4;
            }
            cVar1 = __buf[-1];
        }
        if (cVar1 == '\n')
            break;
        usleep(500);
        iVar3 = iVar3 + -1;
        if (iVar3 == 0) {
            puts("Not receive all message for 30 seconds");
            return 0;
        }
    }
    puts("Receive all message from MES system");
    return iVar4;
}

undefined4 FUN_00011818(uint param_1, int param_2, code *param_3,
                        undefined4 param_4, uint param_5)

{
    int iVar1;
    uint uVar2;
    char *pcVar3;
    undefined4 uVar4;
    uint uVar5;
    uint uVar6;
    uint local_34;
    char acStack_30[16];

    local_34 = 0;
    iVar1 = (*param_3)(&DAT_00015c80, 1, param_4);
    if (iVar1 == 0) {
        uVar2 = param_1;
        uVar5 = param_1;
    LAB_0001186a:
        do {
            uVar6 = uVar2;
            uVar2 = uVar6;
            if (uVar6 < param_2 + param_1) {
                uVar2 =
                    FUN_00013c8c(uVar6, (param_2 + param_1) - uVar6, &local_34);
                if (uVar2 == 0) {
                    return 0xffffffff;
                }
                if ((((local_34 != 0x5c && local_34 != 0x22) &&
                      (0x1f < (int)local_34)) &&
                     (((param_5 & 0x400) == 0 || (local_34 != 0x2f)))) &&
                    (((param_5 & 0x40) == 0 || ((int)local_34 < 0x80))))
                    goto LAB_0001186a;
            }
            if ((uVar6 != uVar5) &&
                (iVar1 = (*param_3)(uVar5, uVar6 - uVar5, param_4),
                 iVar1 != 0)) {
                return 0xffffffff;
            }
            if (uVar2 == uVar6) {
                uVar4 = (*param_3)(&DAT_00015c80, 1, param_4);
                return uVar4;
            }
            if (local_34 == 0xc) {
                uVar4 = 2;
                pcVar3 = "\\f";
            LAB_00011860:
                iVar1 = (*param_3)(pcVar3, uVar4, param_4);
            } else {
                if ((int)local_34 < 0xd) {
                    if (local_34 == 9) {
                        uVar4 = 2;
                        pcVar3 = "\\t";
                    } else if (local_34 == 10) {
                        uVar4 = 2;
                        pcVar3 = "\\n";
                    } else {
                        if (local_34 != 8)
                            goto LAB_0001184c;
                        uVar4 = 2;
                        pcVar3 = "\\b";
                    }
                    goto LAB_00011860;
                }
                if (local_34 == 0x22) {
                    pcVar3 = "\\\"";
                    uVar4 = 2;
                    goto LAB_00011860;
                }
                if (0x22 < (int)local_34) {
                    if (local_34 == 0x2f) {
                        uVar4 = 2;
                        pcVar3 = "\\/";
                    } else {
                        if (local_34 != 0x5c)
                            goto LAB_0001184c;
                        uVar4 = 2;
                        pcVar3 = "\\\\";
                    }
                    goto LAB_00011860;
                }
                if (local_34 != 0xd) {
                LAB_0001184c:
                    if ((int)local_34 < 0x10000) {
                        snprintf(acStack_30, 0xd, "\\u%04X");
                        pcVar3 = acStack_30;
                        uVar4 = 6;
                    } else {
                        uVar6 = local_34 - 0x10000;
                        uVar5 = local_34 & 0x3ff;
                        local_34 = uVar6;
                        snprintf(acStack_30, 0xd, "\\u%04X\\u%04X",
                                 uVar6 * 0x1000 >> 0x16 | 0xd800,
                                 uVar5 | 0xdc00);
                        pcVar3 = acStack_30;
                        uVar4 = 0xc;
                    }
                    goto LAB_00011860;
                }
                iVar1 = (*param_3)(&DAT_00015c74, 2, param_4);
            }
            uVar5 = uVar2;
        } while (iVar1 == 0);
    }
    return 0xffffffff;
}

undefined4 FUN_000119b0(void *param_1, size_t param_2, uint *param_3)

{
    uint uVar1;

    uVar1 = param_2 + param_3[1];
    if (uVar1 <= *param_3) {
        memcpy((void *)(param_3[2] + param_3[1]), param_1, param_2);
        uVar1 = param_2 + param_3[1];
    }
    param_3[1] = uVar1;
    return 0;
}

undefined4 FUN_000119e8(uint param_1, int param_2, int param_3, code *param_4,
                        undefined4 param_5)

{
    int iVar1;
    undefined4 uVar2;
    uint uVar3;
    uint uVar4;

    uVar3 = param_1 & 0x1f;
    if (uVar3 == 0) {
        if ((param_3 != 0) && (-1 < (int)(param_1 << 0x1a))) {
            uVar2 =
                (*param_4)(&DAT_00015c9c, 1, param_5, param_1 << 0x1a, param_4);
            return uVar2;
        }
    } else {
        uVar4 = uVar3 * param_2;
        iVar1 = (*param_4)("\n", 1, param_5, uVar3, param_4);
        if (iVar1 != 0) {
            return 0xffffffff;
        }
        for (; uVar4 != 0; uVar4 = uVar4 - uVar3) {
            uVar3 = uVar4;
            if (0x1f < uVar4) {
                uVar3 = 0x20;
            }
            iVar1 =
                (*param_4)("                                ", uVar3, param_5);
            if (iVar1 != 0) {
                return 0xffffffff;
            }
        }
    }
    return 0;
}

undefined4 FUN_00011a48(undefined4 *param_1, uint param_2, int param_3,
                        undefined4 param_4, code *param_5, undefined4 param_6)

{
    undefined4 uVar1;
    int iVar2;
    uint uVar3;
    undefined4 uVar4;
    char *pcVar5;
    size_t sVar6;
    int iVar7;
    void *__base;
    size_t sVar8;
    uint uVar9;
    uint uVar10;
    uint uVar11;
    int iVar12;
    undefined4 *puVar13;
    int iVar14;
    undefined *puVar15;
    undefined4 *puVar16;
    char acStack_8c[104];

    uVar10 = param_2 & 0x10000;
    uVar9 = param_2 & 0xfffeffff;
    if (param_1 != (undefined4 *)0x0) {
        switch (*param_1) {
        case 0:
            puVar15 = &DAT_00015ca0;
            if ((param_2 & 0x20) == 0) {
                puVar15 = &DAT_00015ca4;
                uVar1 = 2;
            } else {
                uVar1 = 1;
            }
            iVar2 = FUN_00013db0(param_4, param_1, acStack_8c, 0xb);
            if ((iVar2 == 0) &&
                ((iVar2 = FUN_00013e80(param_1),
                  uVar10 != 0 ||
                      (iVar12 = (*param_5)(&DAT_00015cd4, 1, param_6),
                       iVar12 == 0)))) {
                if (iVar2 != 0) {
                    iVar14 = param_3 + 1;
                    iVar12 = FUN_000119e8(uVar9, iVar14, 0, param_5, param_6);
                    if (iVar12 != 0) {
                        return 0xffffffff;
                    }
                    if ((param_2 & 0x80) == 0) {
                        while (true) {
                            iVar12 = FUN_00013ea8(param_1, iVar2);
                            pcVar5 = (char *)FUN_00013ebc(iVar2);
                            sVar6 = strlen(pcVar5);
                            FUN_00011818(pcVar5, sVar6, param_5, param_6,
                                         uVar9);
                            iVar7 = (*param_5)(puVar15, uVar1, param_6);
                            if (iVar7 != 0) {
                                return 0xffffffff;
                            }
                            uVar4 = FUN_00013ec4(iVar2);
                            iVar2 = FUN_00011a48(uVar4, uVar9, iVar14, param_4,
                                                 param_5, param_6);
                            if (iVar2 != 0) {
                                return 0xffffffff;
                            }
                            if (iVar12 == 0)
                                break;
                            iVar2 = (*param_5)(&DAT_00015cd0, 1, param_6);
                            if (iVar2 != 0) {
                                return 0xffffffff;
                            }
                            iVar7 = FUN_000119e8(uVar9, iVar14, 1, param_5,
                                                 param_6);
                            iVar2 = iVar12;
                            if (iVar7 != 0) {
                                return 0xffffffff;
                            }
                        }
                        iVar2 =
                            FUN_000119e8(uVar9, param_3, 0, param_5, param_6);
                        if (iVar2 != 0) {
                            return 0xffffffff;
                        }
                    } else {
                        sVar6 = FUN_00013e28(param_1);
                        __base = (void *)FUN_00013828(sVar6 << 2);
                        if (__base == (void *)0x0) {
                            return 0xffffffff;
                        }
                        puVar16 = (undefined4 *)((int)__base + -4);
                        uVar3 = 0;
                        puVar13 = puVar16;
                        do {
                            uVar11 = uVar3;
                            uVar4 = FUN_00013ebc(iVar2);
                            puVar13 = puVar13 + 1;
                            *puVar13 = uVar4;
                            iVar2 = FUN_00013ea8(param_1, iVar2);
                            uVar3 = uVar11 + 1;
                        } while (iVar2 != 0);
                        if (sVar6 != uVar3) {
                            /* WARNING: Subroutine does not return */
                            __assert_fail("i == size", "dump.c", 0x14f,
                                          "do_dump");
                        }
                        qsort(__base, sVar6, 4, (__compar_fn_t)&LAB_00011974_1);
                        if (sVar6 != 0) {
                            uVar3 = 0;
                            do {
                                puVar16 = puVar16 + 1;
                                pcVar5 = (char *)*puVar16;
                                iVar2 = FUN_00013e38(param_1, pcVar5);
                                if (iVar2 == 0) {
                                    /* WARNING: Subroutine does not return */
                                    __assert_fail("value", "dump.c", 0x159,
                                                  "do_dump");
                                }
                                sVar8 = strlen(pcVar5);
                                FUN_00011818(pcVar5, sVar8, param_5, param_6,
                                             uVar9);
                                iVar12 = (*param_5)(puVar15, uVar1, param_6);
                                if ((iVar12 != 0) ||
                                    (iVar2 = FUN_00011a48(iVar2, uVar9, iVar14,
                                                          param_4, param_5,
                                                          param_6),
                                     iVar2 != 0)) {
                                LAB_00011e56:
                                    FUN_0001383c(__base);
                                    return 0xffffffff;
                                }
                                if (uVar3 < uVar11) {
                                    iVar2 =
                                        (*param_5)(&DAT_00015cd0, 1, param_6);
                                    if (iVar2 != 0)
                                        goto LAB_00011e56;
                                    iVar2 = FUN_000119e8(uVar9, iVar14, 1,
                                                         param_5, param_6);
                                } else {
                                    iVar2 = FUN_000119e8(uVar9, param_3, 0,
                                                         param_5, param_6);
                                }
                                if (iVar2 != 0)
                                    goto LAB_00011e56;
                                uVar3 = uVar3 + 1;
                            } while (sVar6 != uVar3);
                        }
                        FUN_0001383c(__base);
                    }
                }
                FUN_00012608(param_4, acStack_8c);
                if (uVar10 != 0) {
                    return 0;
                }
                uVar1 = (*param_5)(&DAT_00015cd8, 1, param_6);
                return uVar1;
            }
            break;
        case 1:
            iVar2 = FUN_00013db0(param_4, param_1, acStack_8c, 0xb);
            if ((iVar2 == 0) &&
                ((uVar3 = FUN_00013f08(param_1),
                  uVar10 != 0 || (iVar2 = (*param_5)(&DAT_00015cc8, 1, param_6),
                                  iVar2 == 0)))) {
                if (uVar3 != 0) {
                    iVar12 = param_3 + 1;
                    iVar2 = FUN_000119e8(uVar9, iVar12, 0, param_5, param_6);
                    if (iVar2 != 0) {
                        return 0xffffffff;
                    }
                    uVar11 = 0;
                    do {
                        uVar1 = FUN_00013f1c(param_1, uVar11);
                        iVar2 = FUN_00011a48(uVar1, uVar9, iVar12, param_4,
                                             param_5, param_6);
                        if (iVar2 != 0) {
                            return 0xffffffff;
                        }
                        if (uVar11 < uVar3 - 1) {
                            iVar2 = (*param_5)(&DAT_00015cd0, 1, param_6);
                            if (iVar2 != 0) {
                                return 0xffffffff;
                            }
                            iVar2 = FUN_000119e8(uVar9, iVar12, 1, param_5,
                                                 param_6);
                        } else {
                            iVar2 = FUN_000119e8(uVar9, param_3, 0, param_5,
                                                 param_6);
                        }
                        if (iVar2 != 0) {
                            return 0xffffffff;
                        }
                        uVar11 = uVar11 + 1;
                    } while (uVar11 != uVar3);
                }
                FUN_00012608(param_4, acStack_8c);
                if (uVar10 != 0) {
                    return 0;
                }
                uVar1 = (*param_5)(&DAT_00015ccc, 1, param_6);
                return uVar1;
            }
            break;
        case 2:
            uVar1 = FUN_00014010();
            uVar4 = FUN_00014020(param_1);
            uVar1 = FUN_00011818(uVar1, uVar4, param_5, param_6, uVar9);
            return uVar1;
        case 3:
            FUN_0001416c();
            uVar9 = snprintf(acStack_8c, 100, "%lld");
            if (uVar9 < 100) {
            LAB_00011bce:
                uVar1 = (*param_5)(acStack_8c, uVar9, param_6);
                return uVar1;
            }
            break;
        case 4:
            FUN_000141d8();
            uVar9 = FUN_00013a64(acStack_8c, 100, (uVar9 << 0x10) >> 0x1b);
            if (-1 < (int)uVar9)
                goto LAB_00011bce;
            break;
        case 5:
            uVar1 = (*param_5)(&DAT_00015cb0, 4, param_6);
            return uVar1;
        case 6:
            uVar1 = (*param_5)("false", 5, param_6);
            return uVar1;
        case 7:
            uVar1 = (*param_5)(&DAT_00015ca8, 4, param_6);
            return uVar1;
        }
    }
    return 0xffffffff;
}

undefined4 FUN_00011ea4(uint *param_1, undefined4 param_2, undefined4 param_3,
                        int param_4)

{
    int iVar1;
    undefined4 uVar2;
    undefined1 auStack_34[32];

    if (((param_4 << 0x16 < 0) ||
         ((param_1 != (uint *)0x0 && (*param_1 < 2)))) &&
        (iVar1 = FUN_00012408(auStack_34), iVar1 == 0)) {
        uVar2 = FUN_00011a48(param_1, param_4, 0, auStack_34, param_2, param_3);
        FUN_00012454(auStack_34);
    } else {
        uVar2 = 0xffffffff;
    }
    return uVar2;
}

void FUN_00011ee8(undefined4 param_1, undefined4 param_2, undefined4 param_3)

{
    undefined4 local_c;

    local_c = param_2;
    FUN_00011ea4(param_1, &LAB_0001197c_1, &local_c, param_3);
    return;
}

void FUN_00011f08(undefined4 param_1, undefined4 param_2, undefined4 param_3)

{
    FUN_00011ea4(param_1, &LAB_00011998_1, param_2, param_3);
    return;
}

undefined4 FUN_00011f20(undefined4 param_1, char *param_2, undefined4 param_3)

{
    FILE *__stream;
    undefined4 uVar1;
    int iVar2;

    __stream = fopen(param_2, "w");
    if (__stream != (FILE *)0x0) {
        uVar1 = FUN_00011f08(param_1, __stream, param_3);
        iVar2 = fclose(__stream);
        if (iVar2 == 0) {
            return uVar1;
        }
    }
    return 0xffffffff;
}

undefined4 FUN_00011f54(undefined4 param_1, undefined4 param_2,
                        undefined4 param_3)

{
    int iVar1;
    undefined4 uVar2;
    undefined4 local_14;
    undefined4 local_10;
    undefined4 local_c;

    uVar2 = 0;
    local_10 = 0;
    local_14 = param_3;
    local_c = param_2;
    iVar1 = FUN_00011ea4(param_1, 0x119b1, &local_14);
    if (iVar1 == 0) {
        uVar2 = local_10;
    }
    return uVar2;
}

undefined4 FUN_00011f78(undefined4 param_1, undefined4 param_2)

{
    int iVar1;
    undefined4 uVar2;
    undefined1 auStack_1c[12];

    iVar1 = FUN_000138b8(auStack_1c);
    if (iVar1 == 0) {
        iVar1 = FUN_00011ea4(param_1, &LAB_000119d4_1, auStack_1c, param_2);
        uVar2 = 0;
        if (iVar1 == 0) {
            FUN_000138fc(auStack_1c);
            uVar2 = FUN_0001387c();
        }
        FUN_000138d8(auStack_1c);
    } else {
        uVar2 = 0;
    }
    return uVar2;
}

uint FUN_00011fbc(uint *param_1, uint param_2, int param_3)

{
    int iVar1;
    uint uVar2;
    uint uVar3;
    uint uVar4;
    uint *puVar5;
    uint uVar6;
    int iVar7;
    int iVar8;

    uVar3 = param_3 + param_2 + 0xdeadbeef;
    uVar6 = uVar3;
    uVar4 = uVar3;
    if (((uint)param_1 & 3) != 0) {
        if ((int)param_1 << 0x1f < 0) {
            if (0xc < param_2) {
                do {
                    param_2 = param_2 - 0xc;
                    uVar3 = uVar3 +
                            (uint) * (byte *)((int)param_1 + 10) * 0x10000 +
                            (uint) * (byte *)((int)param_1 + 9) * 0x100 +
                            (uint)(byte)param_1[2] +
                            (uint) * (byte *)((int)param_1 + 0xb) * 0x1000000;
                    uVar4 = (((uint) * (byte *)((int)param_1 + 2) * 0x10000 +
                              (uint) * (byte *)((int)param_1 + 1) * 0x100 +
                              (uint)(byte)*param_1 +
                              (uint) * (byte *)((int)param_1 + 3) * 0x1000000) -
                             uVar3) +
                                uVar4 ^
                            (uVar3 >> 0x1c | uVar3 * 0x10);
                    iVar7 = uVar6 +
                            (uint) * (byte *)((int)param_1 + 6) * 0x10000 +
                            (uint) * (byte *)((int)param_1 + 5) * 0x100 +
                            (uint)(byte)param_1[1] +
                            (uint) * (byte *)((int)param_1 + 7) * 0x1000000;
                    param_1 = param_1 + 3;
                    iVar1 = uVar3 + iVar7;
                    uVar6 = iVar7 - uVar4 ^ (uVar4 >> 0x1a | uVar4 << 6);
                    iVar7 = uVar4 + iVar1;
                    iVar8 = uVar6 + iVar7;
                    uVar6 = iVar1 - uVar6 ^ (uVar6 >> 0x18 | uVar6 << 8);
                    iVar1 = uVar6 + iVar8;
                    uVar6 = iVar7 - uVar6 ^ (uVar6 >> 0x10 | uVar6 << 0x10);
                    uVar4 = uVar6 + iVar1;
                    uVar3 = iVar8 - uVar6 ^ (uVar6 >> 0xd | uVar6 << 0x13);
                    uVar6 = uVar3 + uVar4;
                    uVar3 = iVar1 - uVar3 ^ (uVar3 >> 0x1c | uVar3 << 4);
                } while (0xc < param_2);
            }
            switch (param_2) {
            case 0xc:
                uVar3 =
                    uVar3 + (uint) * (byte *)((int)param_1 + 0xb) * 0x1000000;
            case 0xb:
                uVar3 = uVar3 + (uint) * (byte *)((int)param_1 + 10) * 0x10000;
            case 10:
                uVar3 = uVar3 + (uint) * (byte *)((int)param_1 + 9) * 0x100;
            case 9:
                uVar3 = uVar3 + (byte)param_1[2];
            case 8:
                uVar6 = uVar6 + (uint) * (byte *)((int)param_1 + 7) * 0x1000000;
            case 7:
                uVar6 = uVar6 + (uint) * (byte *)((int)param_1 + 6) * 0x10000;
            case 6:
                uVar6 = uVar6 + (uint) * (byte *)((int)param_1 + 5) * 0x100;
            case 5:
                uVar6 = uVar6 + (byte)param_1[1];
            case 4:
                uVar4 = uVar4 + (uint) * (byte *)((int)param_1 + 3) * 0x1000000;
            case 3:
                uVar4 = uVar4 + (uint) * (byte *)((int)param_1 + 2) * 0x10000;
            case 2:
                uVar4 = uVar4 + (uint) * (byte *)((int)param_1 + 1) * 0x100;
            case 1:
                uVar4 = uVar4 + (byte)*param_1;
                break;
            default:
                goto switchD_0001203e_default;
            }
        } else {
            puVar5 = param_1;
            if (0xc < param_2) {
                do {
                    param_2 = param_2 - 0xc;
                    param_1 = puVar5 + 3;
                    uVar3 = uVar3 + (uint)(ushort)puVar5[2] +
                            (uint) * (ushort *)((int)puVar5 + 10) * 0x10000;
                    iVar7 = uVar6 + (uint)(ushort)puVar5[1] +
                            (uint) * (ushort *)((int)puVar5 + 6) * 0x10000;
                    iVar1 = uVar3 + iVar7;
                    uVar6 =
                        uVar4 +
                            (((uint)(ushort)*puVar5 +
                              (uint) * (ushort *)((int)puVar5 + 2) * 0x10000) -
                             uVar3) ^
                        (uVar3 >> 0x1c | uVar3 * 0x10);
                    iVar8 = uVar6 + iVar1;
                    uVar6 = iVar7 - uVar6 ^ (uVar6 >> 0x1a | uVar6 << 6);
                    iVar7 = uVar6 + iVar8;
                    uVar6 = iVar1 - uVar6 ^ (uVar6 >> 0x18 | uVar6 << 8);
                    iVar1 = uVar6 + iVar7;
                    uVar6 = iVar8 - uVar6 ^ (uVar6 >> 0x10 | uVar6 << 0x10);
                    uVar4 = uVar6 + iVar1;
                    uVar3 = iVar7 - uVar6 ^ (uVar6 >> 0xd | uVar6 << 0x13);
                    uVar6 = uVar3 + uVar4;
                    uVar3 = iVar1 - uVar3 ^ (uVar3 >> 0x1c | uVar3 << 4);
                    puVar5 = param_1;
                } while (0xc < param_2);
            }
            switch (param_2) {
            case 1:
                goto switchD_0001203e_caseD_1;
            case 3:
                uVar4 = uVar4 + (uint) * (byte *)((int)param_1 + 2) * 0x10000;
            case 2:
            switchD_0001203e_caseD_2:
                uVar4 = uVar4 + (ushort)*param_1;
                break;
            case 5:
                uVar6 = uVar6 + (byte)param_1[1];
            case 4:
                uVar4 = (ushort)*param_1 + uVar4 +
                        (uint) * (ushort *)((int)param_1 + 2) * 0x10000;
                break;
            case 7:
                uVar6 = uVar6 + (uint) * (byte *)((int)param_1 + 6) * 0x10000;
            case 6:
                uVar4 = (ushort)*param_1 + uVar4 +
                        (uint) * (ushort *)((int)param_1 + 2) * 0x10000;
                uVar6 = uVar6 + (ushort)param_1[1];
                break;
            case 9:
                uVar3 = uVar3 + (byte)param_1[2];
            case 8:
                uVar6 = (ushort)param_1[1] + uVar6 +
                        (uint) * (ushort *)((int)param_1 + 6) * 0x10000;
                uVar4 = (ushort)*param_1 + uVar4 +
                        (uint) * (ushort *)((int)param_1 + 2) * 0x10000;
                break;
            case 0xb:
                uVar3 = uVar3 + (uint) * (byte *)((int)param_1 + 10) * 0x10000;
            case 10:
                uVar6 = (ushort)param_1[1] + uVar6 +
                        (uint) * (ushort *)((int)param_1 + 6) * 0x10000;
                uVar4 = (ushort)*param_1 + uVar4 +
                        (uint) * (ushort *)((int)param_1 + 2) * 0x10000;
                uVar3 = uVar3 + (ushort)param_1[2];
                break;
            case 0xc:
                uVar3 = (ushort)param_1[2] + uVar3 +
                        (uint) * (ushort *)((int)param_1 + 10) * 0x10000;
                uVar6 = (ushort)param_1[1] + uVar6 +
                        (uint) * (ushort *)((int)param_1 + 6) * 0x10000;
                uVar4 = (ushort)*param_1 + uVar4 +
                        (uint) * (ushort *)((int)param_1 + 2) * 0x10000;
                break;
            default:
                goto switchD_0001203e_default;
            }
        }
        goto LAB_0001209c;
    }
    puVar5 = param_1;
    if (0xc < param_2) {
        do {
            param_2 = param_2 - 0xc;
            param_1 = puVar5 + 3;
            uVar3 = uVar3 + puVar5[2];
            iVar1 = uVar3 + uVar6 + puVar5[1];
            uVar4 = uVar4 + (*puVar5 - uVar3) ^ (uVar3 >> 0x1c | uVar3 * 0x10);
            iVar8 = uVar4 + iVar1;
            uVar6 = (uVar6 + puVar5[1]) - uVar4 ^ (uVar4 >> 0x1a | uVar4 << 6);
            iVar7 = uVar6 + iVar8;
            uVar6 = iVar1 - uVar6 ^ (uVar6 >> 0x18 | uVar6 << 8);
            iVar1 = uVar6 + iVar7;
            uVar6 = iVar8 - uVar6 ^ (uVar6 >> 0x10 | uVar6 << 0x10);
            uVar4 = uVar6 + iVar1;
            uVar3 = iVar7 - uVar6 ^ (uVar6 >> 0xd | uVar6 << 0x13);
            uVar6 = uVar3 + uVar4;
            uVar3 = iVar1 - uVar3 ^ (uVar3 >> 0x1c | uVar3 << 4);
            puVar5 = param_1;
        } while (0xc < param_2);
    }
    switch (param_2) {
    case 1:
    switchD_0001203e_caseD_1:
        uVar4 = (byte)*param_1 + uVar4;
        break;
    case 2:
        goto switchD_0001203e_caseD_2;
    case 3:
        uVar4 = (*param_1 & 0xffffff) + uVar4;
        break;
    case 4:
        uVar4 = uVar4 + *param_1;
        break;
    case 5:
        uVar6 = uVar6 + (byte)param_1[1];
        uVar4 = uVar4 + *param_1;
        break;
    case 6:
        uVar6 = uVar6 + (ushort)param_1[1];
        uVar4 = uVar4 + *param_1;
        break;
    case 7:
        uVar6 = uVar6 + (param_1[1] & 0xffffff);
        uVar4 = uVar4 + *param_1;
        break;
    case 8:
        uVar6 = uVar6 + param_1[1];
        uVar4 = uVar4 + *param_1;
        break;
    case 9:
        uVar2 = (uint)(byte)param_1[2];
        goto LAB_00012270;
    case 10:
        uVar2 = (uint)(ushort)param_1[2];
        goto LAB_00012270;
    case 0xb:
        uVar3 = uVar3 + (param_1[2] & 0xffffff);
        uVar6 = uVar6 + param_1[1];
        uVar4 = uVar4 + *param_1;
        break;
    case 0xc:
        uVar2 = param_1[2];
    LAB_00012270:
        uVar3 = uVar3 + uVar2;
        uVar6 = uVar6 + param_1[1];
        uVar4 = uVar4 + *param_1;
        break;
    default:
        goto switchD_0001203e_default;
    }
LAB_0001209c:
    uVar3 = (uVar3 ^ uVar6) - (uVar6 >> 0x12 | uVar6 << 0xe);
    uVar2 = (uVar4 ^ uVar3) - (uVar3 >> 0x15 | uVar3 * 0x800);
    uVar4 = (uVar6 ^ uVar2) - (uVar2 >> 7 | uVar2 * 0x2000000);
    uVar6 = (uVar3 ^ uVar4) - (uVar4 >> 0x10 | uVar4 * 0x10000);
    uVar3 = (uVar2 ^ uVar6) - (uVar6 >> 0x1c | uVar6 * 0x10);
    uVar4 = (uVar4 ^ uVar3) - (uVar3 >> 0x12 | uVar3 * 0x4000);
    uVar3 = (uVar4 ^ uVar6) - (uVar4 >> 8 | uVar4 * 0x1000000);
switchD_0001203e_default:
    return uVar3;
}

void FUN_00012354(int param_1, undefined4 *param_2, int *param_3)

{
    int iVar1;
    int *piVar2;

    piVar2 = (int *)*param_2;
    if ((piVar2 == (int *)(param_1 + 0xc)) && (piVar2 == (int *)param_2[1])) {
        iVar1 = *(int *)(param_1 + 0xc);
        param_3[1] = (int)piVar2;
        *param_3 = iVar1;
        iVar1 = *(int *)(param_1 + 0xc);
        *(int **)(param_1 + 0xc) = param_3;
        *(int **)(iVar1 + 4) = param_3;
        param_2[1] = param_3;
        *param_2 = param_3;
    } else {
        *param_3 = *piVar2;
        param_3[1] = (int)piVar2;
        iVar1 = *piVar2;
        *piVar2 = (int)param_3;
        *(int **)(iVar1 + 4) = param_3;
        *param_2 = param_3;
    }
    return;
}

int FUN_0001238c(int param_1, int *param_2, char *param_3, int param_4)

{
    int iVar1;
    int iVar2;

    iVar2 = *param_2;
    if ((iVar2 != param_1 + 0xc) || (iVar2 != param_2[1])) {
        while (true) {
            if ((*(int *)(iVar2 + 0x10) == param_4) &&
                (iVar1 = strcmp((char *)(iVar2 + 0x18), param_3), iVar1 == 0)) {
                return iVar2;
            }
            if (param_2[1] == iVar2)
                break;
            iVar2 = *(int *)(iVar2 + 4);
        }
    }
    return 0;
}

void FUN_000123c8(int param_1)

{
    bool bVar1;
    int iVar2;
    int iVar3;
    int *piVar4;
    int iVar5;

    iVar2 = *(int *)(param_1 + 0x10);
    while (iVar2 != param_1 + 0xc) {
        iVar3 = *(int *)(iVar2 + 0x14);
        iVar5 = *(int *)(iVar2 + 4);
        piVar4 = (int *)(iVar3 + 4);
        if ((iVar3 != 0) && (*(int *)(iVar3 + 4) != -1)) {
            DataMemoryBarrier(0x1f);
            do {
                ExclusiveAccess(piVar4);
                iVar3 = *piVar4;
                bVar1 = (bool)hasExclusiveAccess(piVar4);
            } while (!bVar1);
            *piVar4 = iVar3 + -1;
            if (iVar3 + -1 == 0) {
                FUN_0001427c();
            }
        }
        FUN_0001383c(iVar2);
        iVar2 = iVar5;
    }
    return;
}

undefined4 FUN_00012408(undefined4 *param_1)

{
    int iVar1;
    undefined4 *puVar2;
    int iVar3;
    int iVar4;

    param_1[2] = 3;
    *param_1 = 0;
    iVar1 = FUN_00013828(0x40);
    param_1[1] = iVar1;
    if (iVar1 == 0) {
        return 0xffffffff;
    }
    puVar2 = param_1 + 3;
    param_1[4] = puVar2;
    param_1[3] = puVar2;
    iVar4 = 1 << (param_1[2] & 0xff);
    param_1[6] = param_1 + 5;
    param_1[5] = param_1 + 5;
    if (iVar4 != 0) {
        iVar3 = 0;
        do {
            *(undefined4 **)(iVar1 + iVar3 + 4) = puVar2;
            *(undefined4 **)(iVar1 + iVar3) = puVar2;
            iVar3 = iVar3 + 8;
        } while (iVar3 != iVar4 << 3);
    }
    return 0;
}

void FUN_00012454(int param_1)

{
    FUN_000123c8();
    FUN_0001383c(*(undefined4 *)(param_1 + 4));
    return;
}

undefined4 FUN_00012468(uint *param_1, char *param_2, undefined4 param_3)

{
    uint *puVar1;
    bool bVar2;
    uint uVar3;
    size_t sVar4;
    int extraout_r1;
    uint uVar5;
    int iVar6;
    int *piVar7;
    uint *puVar8;
    int iVar9;
    uint uVar10;
    uint *puVar11;

    uVar5 = param_1[2];
    if (*param_1 >> (uVar5 & 0xff) != 0) {
        iVar9 = 1 << (uVar5 + 1 & 0xff);
        uVar3 = FUN_00013828(iVar9 * 8);
        if (uVar3 == 0) {
            return 0xffffffff;
        }
        FUN_0001383c(param_1[1]);
        param_1[2] = uVar5 + 1;
        iVar6 = 0;
        param_1[1] = uVar3;
        if (iVar9 != 0) {
            do {
                *(uint **)(uVar3 + iVar6 + 4) = param_1 + 3;
                *(uint **)(uVar3 + iVar6) = param_1 + 3;
                iVar6 = iVar6 + 8;
            } while (iVar6 != iVar9 * 8);
        }
        puVar8 = (uint *)param_1[4];
        puVar1 = param_1 + 3;
        *puVar1 = (uint)puVar1;
        param_1[4] = (uint)puVar1;
        if (puVar8 == puVar1)
            goto LAB_000124f4;
        while (true) {
            puVar11 = (uint *)puVar8[1];
            FUN_0001504c(puVar8[4], iVar9);
            FUN_00012354(param_1, uVar3 + extraout_r1 * 8, puVar8);
            if (puVar1 == puVar11)
                break;
            uVar3 = param_1[1];
            puVar8 = puVar11;
        }
        uVar5 = param_1[2];
    }
    uVar3 = param_1[1];
    iVar9 = 1 << (uVar5 & 0xff);
LAB_000124f4:
    sVar4 = strlen(param_2);
    uVar5 = FUN_00011fbc(param_2, sVar4, DAT_00027df4);
    iVar6 = uVar3 + (iVar9 - 1U & uVar5) * 8;
    iVar9 = FUN_0001238c(param_1, iVar6, param_2, uVar5);
    if (iVar9 != 0) {
        iVar6 = *(int *)(iVar9 + 0x14);
        if ((iVar6 != 0) && (*(int *)(iVar6 + 4) != -1)) {
            piVar7 = (int *)(iVar6 + 4);
            DataMemoryBarrier(0x1f);
            do {
                ExclusiveAccess(piVar7);
                iVar6 = *piVar7;
                bVar2 = (bool)hasExclusiveAccess(piVar7);
            } while (!bVar2);
            *piVar7 = iVar6 + -1;
            if (iVar6 + -1 == 0) {
                FUN_0001427c();
            }
        }
        *(undefined4 *)(iVar9 + 0x14) = param_3;
        return 0;
    }
    if ((sVar4 < 0xffffffe7) &&
        (iVar9 = FUN_00013828(sVar4 + 0x19), iVar9 != 0)) {
        *(uint *)(iVar9 + 0x10) = uVar5;
        strncpy((char *)(iVar9 + 0x18), param_2, sVar4 + 1);
        uVar10 = iVar9 + 8;
        *(int *)(iVar9 + 4) = iVar9;
        *(undefined4 *)(iVar9 + 0x14) = param_3;
        *(int *)iVar9 = iVar9;
        *(uint *)(iVar9 + 0xc) = uVar10;
        *(uint *)(iVar9 + 8) = uVar10;
        FUN_00012354(param_1, iVar6, iVar9);
        uVar5 = param_1[5];
        uVar3 = *param_1;
        *(uint **)(iVar9 + 0xc) = param_1 + 5;
        *(uint *)(iVar9 + 8) = uVar5;
        uVar5 = param_1[5];
        param_1[5] = uVar10;
        *(uint *)(uVar5 + 4) = uVar10;
        *param_1 = uVar3 + 1;
        return 0;
    }
    return 0xffffffff;
}

int FUN_000125c8(int param_1, char *param_2, undefined4 param_3,
                 undefined4 param_4)

{
    size_t sVar1;
    uint uVar2;
    int iVar3;

    sVar1 = strlen(param_2);
    uVar2 = FUN_00011fbc(param_2, sVar1, DAT_00027df4, &DAT_00027df4, param_4);
    iVar3 = FUN_0001238c(
        param_1,
        *(int *)(param_1 + 4) +
            ((1 << (*(uint *)(param_1 + 8) & 0xff)) - 1U & uVar2) * 8,
        param_2, uVar2);
    if (iVar3 != 0) {
        iVar3 = *(int *)(iVar3 + 0x14);
    }
    return iVar3;
}

undefined4 FUN_00012608(int *param_1, char *param_2)

{
    size_t sVar1;
    uint uVar2;
    int *piVar3;
    int *piVar4;
    int iVar5;
    int *piVar6;
    int iVar7;
    uint uVar8;
    int iVar9;
    bool bVar10;

    sVar1 = strlen(param_2);
    uVar2 = FUN_00011fbc(param_2, sVar1, DAT_00027df4);
    iVar7 = param_1[1];
    uVar8 = (1 << (param_1[2] & 0xffU)) - 1U & uVar2;
    iVar9 = iVar7 + uVar8 * 8;
    piVar3 = (int *)FUN_0001238c(param_1, iVar9, param_2, uVar2);
    if (piVar3 != (int *)0x0) {
        piVar4 = *(int **)(iVar9 + 4);
        if (piVar3 == *(int **)(iVar7 + uVar8 * 8)) {
            if (piVar3 != piVar4) {
                piVar6 = (int *)piVar3[1];
            } else {
                piVar6 = param_1 + 3;
            }
            if (piVar3 == piVar4) {
                *(int **)(iVar9 + 4) = piVar6;
            }
            *(int **)(iVar7 + uVar8 * 8) = piVar6;
        } else {
            bVar10 = piVar3 == piVar4;
            if (bVar10) {
                piVar4 = (int *)*piVar3;
            }
            if (bVar10) {
                *(int **)(iVar9 + 4) = piVar4;
            }
        }
        iVar5 = *piVar3;
        iVar7 = piVar3[5];
        *(int *)(iVar5 + 4) = piVar3[1];
        iVar9 = piVar3[3];
        *(int *)piVar3[1] = iVar5;
        iVar5 = piVar3[2];
        *(int *)(iVar5 + 4) = iVar9;
        *(int *)piVar3[3] = iVar5;
        if ((iVar7 != 0) && (*(int *)(iVar7 + 4) != -1)) {
            piVar4 = (int *)(iVar7 + 4);
            DataMemoryBarrier(0x1f);
            do {
                ExclusiveAccess(piVar4);
                iVar7 = *piVar4;
                bVar10 = (bool)hasExclusiveAccess(piVar4);
            } while (!bVar10);
            *piVar4 = iVar7 + -1;
            if (iVar7 + -1 == 0) {
                FUN_0001427c();
            }
        }
        FUN_0001383c(piVar3);
        *param_1 = *param_1 + -1;
        return 0;
    }
    return 0xffffffff;
}

void FUN_000126cc(undefined4 *param_1)

{
    int iVar1;
    int iVar2;
    int iVar3;

    FUN_000123c8();
    iVar3 = 1 << (param_1[2] & 0xff);
    if (iVar3 != 0) {
        iVar1 = param_1[1];
        iVar2 = 0;
        do {
            *(undefined4 **)(iVar1 + iVar2 + 4) = param_1 + 3;
            *(undefined4 **)(iVar1 + iVar2) = param_1 + 3;
            iVar2 = iVar2 + 8;
        } while (iVar2 != iVar3 * 8);
    }
    param_1[4] = param_1 + 3;
    param_1[3] = param_1 + 3;
    param_1[6] = param_1 + 5;
    param_1[5] = param_1 + 5;
    *param_1 = 0;
    return;
}

int FUN_0001271c(int param_1, char *param_2, undefined4 param_3,
                 undefined4 param_4)

{
    size_t sVar1;
    uint uVar2;
    int iVar3;

    sVar1 = strlen(param_2);
    uVar2 = FUN_00011fbc(param_2, sVar1, DAT_00027df4, &DAT_00027df4, param_4);
    iVar3 = FUN_0001238c(
        param_1,
        *(int *)(param_1 + 4) +
            ((1 << (*(uint *)(param_1 + 8) & 0xff)) - 1U & uVar2) * 8,
        param_2, uVar2);
    if (iVar3 != 0) {
        iVar3 = iVar3 + 8;
    }
    return iVar3;
}

void FUN_00012774(int param_1, undefined4 param_2)

{
    bool bVar1;
    int iVar2;
    int *piVar3;

    iVar2 = *(int *)(param_1 + 0xc);
    if ((iVar2 != 0) && (*(int *)(iVar2 + 4) != -1)) {
        piVar3 = (int *)(iVar2 + 4);
        DataMemoryBarrier(0x1f);
        do {
            ExclusiveAccess(piVar3);
            iVar2 = *piVar3;
            bVar1 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar1);
        *piVar3 = iVar2 + -1;
        if (iVar2 + -1 == 0) {
            FUN_0001427c();
            *(undefined4 *)(param_1 + 0xc) = param_2;
            return;
        }
    }
    *(undefined4 *)(param_1 + 0xc) = param_2;
    return;
}

void FUN_000127a8(uint param_1)

{
    bool bVar1;
    char cVar2;
    int __fd;
    ssize_t sVar3;
    timeval local_20;

    cVar2 = DAT_00027df8;
    if (DAT_00027df4 != 0) {
        return;
    }
    do {
        ExclusiveAccess(0x27df8);
        bVar1 = (bool)hasExclusiveAccess(0x27df8);
    } while (!bVar1);
    DAT_00027df8 = 1;
    if (cVar2 != '\0') {
        do {
            sched_yield();
            DataMemoryBarrier(0x1f);
            if (DAT_00027df4 != 0) {
                return;
            }
            sched_yield();
            DataMemoryBarrier(0x1f);
        } while (DAT_00027df4 == 0);
        return;
    }
    if (param_1 != 0)
        goto LAB_000127d0;
    __fd = open("/dev/urandom", 0);
    if (__fd == -1) {
    LAB_00012838:
        gettimeofday(&local_20, (__timezone_ptr_t)0x0);
        param_1 = getpid();
        param_1 = param_1 ^ local_20.tv_sec ^ local_20.tv_usec;
    } else {
        sVar3 = read(__fd, &local_20, 4);
        close(__fd);
        if (sVar3 != 4)
            goto LAB_00012838;
        param_1 = CONCAT31(CONCAT21(CONCAT11((undefined1)local_20.tv_sec,
                                             local_20.tv_sec._1_1_),
                                    local_20.tv_sec._2_1_),
                           local_20.tv_sec._3_1_);
    }
    if (param_1 == 0) {
        param_1 = 1;
    }
LAB_000127d0:
    DataMemoryBarrier(0x1f);
    DAT_00027df4 = param_1;
    return;
}

void FUN_000128d8(int param_1, int param_2, int param_3, char *param_4)

{
    char *pcVar1;
    char *pcVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    char acStack_168[159];
    undefined1 local_c9;
    char acStack_c8[159];
    undefined1 local_29;

    if (param_1 != 0) {
        vsnprintf(acStack_168, 0xa0, param_4, &stack0x00000000);
        local_c9 = 0;
        if (param_2 == 0) {
            uVar3 = 0xffffffff;
            uVar5 = 0xffffffff;
            pcVar2 = acStack_168;
            uVar4 = 0;
        } else {
            pcVar1 = (char *)FUN_000138fc(param_2 + 0x28);
            uVar5 = *(undefined4 *)(param_2 + 0x18);
            uVar3 = *(undefined4 *)(param_2 + 0x1c);
            uVar4 = *(undefined4 *)(param_2 + 0x24);
            if ((pcVar1 == (char *)0x0) || (*pcVar1 == '\0')) {
                if (param_3 == 8) {
                    param_3 = 6;
                }
                pcVar2 = acStack_168;
                if (*(int *)(param_2 + 0x14) != -2) {
                    snprintf(acStack_c8, 0xa0, "%s near end of file");
                    pcVar2 = acStack_c8;
                    local_29 = 0;
                }
            } else {
                pcVar2 = acStack_168;
                if (*(uint *)(param_2 + 0x2c) < 0x15) {
                    snprintf(acStack_c8, 0xa0, "%s near \'%s\'", acStack_168,
                             pcVar1);
                    pcVar2 = acStack_c8;
                    local_29 = 0;
                }
            }
        }
        FUN_00014dd4(param_1, uVar5, uVar3, uVar4, param_3, "%s", pcVar2);
    }
    return;
}

undefined4 FUN_00012994(undefined4 *param_1, undefined4 param_2,
                        undefined4 param_3, undefined4 param_4)

{
    int iVar1;

    *param_1 = param_2;
    param_1[1] = param_4;
    param_1[6] = 1;
    *(undefined1 *)(param_1 + 2) = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[7] = 0;
    param_1[9] = 0;
    iVar1 = FUN_000138b8(param_1 + 10);
    if (iVar1 == 0) {
        param_1[0xd] = param_3;
        param_1[0xf] = 0xffffffff;
        return 0;
    }
    return 0xffffffff;
}

uint FUN_000129c8(int *param_1)

{
    ssize_t sVar1;
    uint uVar2;
    byte local_9[5];

    sVar1 = read(*param_1, local_9, 1);
    if (sVar1 == 1) {
        uVar2 = (uint)local_9[0];
    } else {
        uVar2 = 0xffffffff;
    }
    return uVar2;
}

int FUN_000129e8(char *param_1)

{
    int iVar1;
    uint uVar2;
    int iVar3;

    if (*param_1 != 'u') {
        /* WARNING: Subroutine does not return */
        __assert_fail("str[0] == \'u\'", "load.c", 0x116,
                      "decode_unicode_escape");
    }
    iVar1 = 0;
    iVar3 = 1;
    do {
        uVar2 = (uint)(byte)param_1[iVar3];
        iVar1 = iVar1 * 0x10;
        if ((uVar2 - 0x30 & 0xff) < 10) {
            iVar1 = (uVar2 - 0x30) + iVar1;
        } else if (uVar2 - 0x61 < 0x1a) {
            iVar1 = (uVar2 - 0x57) + iVar1;
        } else {
            if (0x19 < uVar2 - 0x41) {
                return -1;
            }
            iVar1 = (uVar2 - 0x37) + iVar1;
        }
        iVar3 = iVar3 + 1;
    } while (iVar3 != 5);
    return iVar1;
}

void FUN_00012a4c(int param_1, uint param_2)

{
    int iVar1;

    if (1 < param_2 + 2) {
        *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
        if (param_2 == 10) {
            *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
            *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x20);
        } else {
            iVar1 = FUN_00013bac(param_2 & 0xff);
            if (iVar1 != 0) {
                *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
            }
        }
        if (*(int *)(param_1 + 0x10) == 0) {
            /* WARNING: Subroutine does not return */
            __assert_fail("stream->buffer_pos > 0", "load.c", 0xdd,
                          "stream_unget");
        }
        iVar1 = *(int *)(param_1 + 0x10) + -1;
        *(int *)(param_1 + 0x10) = iVar1;
        if (*(byte *)(param_1 + iVar1 + 8) != param_2) {
            /* WARNING: Subroutine does not return */
            __assert_fail("stream->buffer[stream->buffer_pos] == c", "load.c",
                          0xdf, "stream_unget");
        }
    }
    return;
}

uint FUN_00012ab8(undefined4 *param_1, undefined4 param_2)

{
    undefined1 uVar1;
    uint uVar2;
    int iVar3;
    uint uVar4;
    uint uVar5;
    undefined4 uVar6;
    uint uVar7;
    undefined4 *puVar8;

    uVar5 = param_1[4] + 1;
    uVar2 = (uint) * (byte *)((int)param_1 + param_1[4] + 8);
    if (uVar2 == 0) {
        uVar4 = (*(code *)*param_1)(param_1[1]);
        if (uVar4 == 0xffffffff) {
            param_1[5] = 0xffffffff;
            return 0xffffffff;
        }
        uVar7 = uVar4 - 0x80;
        uVar2 = uVar4 & 0xff;
        *(char *)(param_1 + 2) = (char)uVar4;
        param_1[4] = 0;
        uVar5 = uVar7;
        if (0x7f < uVar7) {
            uVar5 = 1;
        }
        if (uVar7 < 0x80) {
            uVar5 = FUN_00013bac();
            if (uVar5 != 0) {
                if (uVar5 < 2) {
                    /* WARNING: Subroutine does not return */
                    __assert_fail("count >= 2", "load.c", 0xaf, "stream_get");
                }
                puVar8 = param_1;
                do {
                    uVar1 = (*(code *)*param_1)(param_1[1]);
                    *(undefined1 *)((int)puVar8 + 9) = uVar1;
                    puVar8 = (undefined4 *)((int)puVar8 + 1);
                } while (puVar8 != (undefined4 *)((int)param_1 + (uVar5 - 1)));
                iVar3 = FUN_00013bf4(param_1 + 2, uVar5, 0);
                if (iVar3 != 0) {
                    iVar3 = param_1[4];
                    *(undefined1 *)((int)param_1 + uVar5 + 8) = 0;
                    uVar5 = iVar3 + 1;
                    uVar2 = (uint) * (byte *)((int)param_1 + iVar3 + 8);
                    goto LAB_00012acc;
                }
            }
            param_1[5] = 0xfffffffe;
            FUN_000128d8(param_2, param_1, 5, "unable to decode byte 0x%x",
                         uVar4);
            return 0xfffffffe;
        }
        *(undefined1 *)((int)param_1 + 9) = 0;
    }
LAB_00012acc:
    param_1[4] = uVar5;
    param_1[9] = param_1[9] + 1;
    if (uVar2 == 10) {
        uVar6 = param_1[7];
        param_1[7] = 0;
        param_1[6] = param_1[6] + 1;
        param_1[8] = uVar6;
    } else {
        iVar3 = FUN_00013bac();
        if (iVar3 != 0) {
            param_1[7] = param_1[7] + 1;
        }
    }
    return uVar2;
}

void FUN_00012ba0(int param_1, int param_2)

{
    int iVar1;

    if (1 < param_2 + 2U) {
        FUN_00012a4c();
        iVar1 = FUN_000139a4(param_1 + 0x28);
        if (iVar1 != param_2) {
            /* WARNING: Subroutine does not return */
            __assert_fail("c == d", "load.c", 0xff, "lex_unget_unsave");
        }
    }
    return;
}

uint FUN_00012bd8(int param_1, undefined4 param_2, undefined4 param_3,
                  undefined4 param_4)

{
    undefined4 extraout_r2;
    uint uVar1;

    uVar1 = *(uint *)(param_1 + 0x14);
    if (uVar1 == 0) {
        uVar1 = FUN_00012ab8();
        param_3 = extraout_r2;
    }
    if (1 < uVar1 + 2) {
        FUN_0001398c(param_1 + 0x28, uVar1 & 0xff, param_3, uVar1 + 2, param_4);
    }
    return uVar1;
}

/* WARNING: Type propagation algorithm not settling */

uint FUN_00012bfc(int param_1, undefined4 param_2)

{
    char cVar1;
    uint uVar2;
    char *pcVar3;
    int *piVar4;
    byte *pbVar5;
    uint uVar6;
    byte bVar7;
    int iVar8;
    byte *pbVar9;
    int iVar10;
    byte *pbVar11;
    bool bVar12;
    bool bVar13;
    longlong lVar14;
    int local_38;
    char *local_34;
    undefined8 local_30;

    iVar10 = param_1 + 0x28;
    FUN_000138f0(iVar10);
    if (*(int *)(param_1 + 0x3c) == 0x100) {
        FUN_0001383c(*(undefined4 *)(param_1 + 0x40));
        *(undefined4 *)(param_1 + 0x40) = 0;
        *(undefined4 *)(param_1 + 0x44) = 0;
    }
    do {
        uVar2 = *(uint *)(param_1 + 0x14);
        if (uVar2 == 0) {
            uVar2 = FUN_00012ab8(param_1, param_2);
        }
    } while ((uVar2 == 0x20 || uVar2 == 9) || (uVar2 == 10 || uVar2 == 0xd));
    if (uVar2 == 0xffffffff) {
        *(undefined4 *)(param_1 + 0x3c) = 0;
        return 0;
    }
    if (uVar2 != 0xfffffffe) {
        FUN_0001398c(iVar10, uVar2 & 0xff);
        if (((uVar2 == 0x7b || uVar2 == 0x7d) ||
             (uVar2 == 0x5b || uVar2 == 0x5d)) ||
            (uVar2 == 0x3a || uVar2 == 0x2c))
            goto LAB_00012d0c;
        if (uVar2 == 0x22) {
            *(undefined4 *)(param_1 + 0x40) = 0;
            *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
            uVar2 = FUN_00012bd8(param_1, param_2);
            while (uVar2 != 0x22) {
                if (uVar2 == 0xfffffffe)
                    goto LAB_00012e84;
                if (uVar2 == 0xffffffff) {
                    FUN_000128d8(param_2, param_1, 6, "premature end of input");
                    goto LAB_00012e84;
                }
                if (uVar2 < 0x20) {
                    FUN_00012ba0(param_1, uVar2);
                    if (uVar2 == 10) {
                        FUN_000128d8(param_2, param_1, 8, "unexpected newline");
                    } else {
                        FUN_000128d8(param_2, param_1, 8,
                                     "control character 0x%x", uVar2);
                    }
                    goto LAB_00012e84;
                }
                if (uVar2 == 0x5c) {
                    uVar2 = FUN_00012bd8(param_1, param_2);
                    if (uVar2 == 0x75) {
                        iVar8 = 4;
                        uVar2 = FUN_00012bd8(param_1, param_2);
                        do {
                            uVar6 = uVar2 - 0x41;
                            bVar13 = 4 < uVar6;
                            bVar12 = uVar6 == 5;
                            if (5 < uVar6) {
                                bVar13 = 8 < uVar2 - 0x30;
                                bVar12 = uVar2 - 0x30 == 9;
                            }
                            if ((bVar13 && !bVar12) && (5 < uVar2 - 0x61))
                                goto LAB_000130f0;
                            uVar2 = FUN_00012bd8(param_1, param_2);
                            iVar8 = iVar8 + -1;
                        } while (iVar8 != 0);
                    } else {
                        if (((uVar2 != 0x22 && uVar2 != 0x5c) &&
                             (uVar2 != 0x2f && uVar2 != 0x62)) &&
                            (((uVar2 & 0xfffffff7) != 0x66 &&
                              (uVar2 != 0x72 && uVar2 != 0x74)))) {
                        LAB_000130f0:
                            FUN_000128d8(param_2, param_1, 8, "invalid escape");
                            goto LAB_00012e84;
                        }
                        uVar2 = FUN_00012bd8(param_1, param_2);
                    }
                } else {
                    uVar2 = FUN_00012bd8(param_1, param_2);
                }
            }
            pbVar5 = (byte *)FUN_00013828(*(int *)(param_1 + 0x2c) + 1);
            if (pbVar5 == (byte *)0x0) {
            LAB_00012e84:
                FUN_0001383c(*(undefined4 *)(param_1 + 0x40));
                *(undefined4 *)(param_1 + 0x40) = 0;
                *(undefined4 *)(param_1 + 0x44) = 0;
                return *(uint *)(param_1 + 0x3c);
            }
            *(byte **)(param_1 + 0x40) = pbVar5;
            iVar10 = FUN_000138fc(iVar10);
            pbVar11 = (byte *)(iVar10 + 1);
            do {
                while (true) {
                    while (true) {
                        bVar7 = *pbVar11;
                        if (bVar7 == 0x22) {
                            *pbVar5 = 0;
                            *(undefined4 *)(param_1 + 0x3c) = 0x100;
                            *(int *)(param_1 + 0x44) =
                                (int)pbVar5 - *(int *)(param_1 + 0x40);
                            return 0x100;
                        }
                        if (bVar7 == 0x5c)
                            break;
                        *pbVar5 = bVar7;
                        pbVar5 = pbVar5 + 1;
                        pbVar11 = pbVar11 + 1;
                    }
                    bVar7 = pbVar11[1];
                    if (bVar7 == 0x75)
                        break;
                    if (bVar7 == 0x66) {
                        *pbVar5 = 0xc;
                    } else if (bVar7 < 0x67) {
                        if (bVar7 != 0x5c) {
                            if (0x5c < bVar7) {
                                if (bVar7 != 0x62)
                                    goto LAB_00012f6e;
                                *pbVar5 = 8;
                                goto LAB_00012fba;
                            }
                            if ((bVar7 != 0x22) && (bVar7 != 0x2f)) {
                            LAB_00012f6e:
                                /* WARNING: Subroutine does not return */
                                __assert_fail("0", "load.c", 0x1ba,
                                              "lex_scan_string");
                            }
                        }
                    LAB_00012fb8:
                        *pbVar5 = bVar7;
                    } else if (bVar7 == 0x72) {
                        *pbVar5 = 0xd;
                    } else {
                        if (bVar7 != 0x74) {
                            if (bVar7 != 0x6e)
                                goto LAB_00012f6e;
                            bVar7 = 10;
                            goto LAB_00012fb8;
                        }
                        *pbVar5 = 9;
                    }
                LAB_00012fba:
                    pbVar5 = pbVar5 + 1;
                    pbVar11 = pbVar11 + 2;
                }
                iVar10 = FUN_000129e8(pbVar11 + 1);
                pbVar9 = pbVar11;
                if (iVar10 < 0) {
                LAB_00013120:
                    FUN_000128d8(param_2, param_1, 8,
                                 "invalid Unicode escape \'%.6s\'", pbVar9);
                    goto LAB_00012e84;
                }
                pbVar9 = pbVar11 + 6;
                if (iVar10 - 0xd800U < 0x400) {
                    if ((pbVar11[6] != 0x5c) || (pbVar11[7] != 0x75)) {
                    LAB_00013138:
                        FUN_000128d8(param_2, param_1, 8,
                                     "invalid Unicode \'\\u%04X\'", iVar10);
                        goto LAB_00012e84;
                    }
                    iVar8 = FUN_000129e8(pbVar11 + 7);
                    if (iVar8 < 0)
                        goto LAB_00013120;
                    pbVar9 = pbVar11 + 0xc;
                    if (0x3ff < iVar8 - 0xdc00U) {
                        FUN_000128d8(param_2, param_1, 8,
                                     "invalid Unicode \'\\u%04X\\u%04X\'",
                                     iVar10, iVar8);
                        goto LAB_00012e84;
                    }
                    iVar10 = (iVar8 - 0xdc00U) + (iVar10 - 0xd800U) * 0x400 +
                             0x10000;
                } else if (iVar10 - 0xdc00U < 0x400)
                    goto LAB_00013138;
                iVar10 = FUN_00013b18(iVar10, pbVar5, &local_38);
                if (iVar10 != 0) {
                    /* WARNING: Subroutine does not return */
                    __assert_fail("0", "load.c", 0x1a1, "lex_scan_string");
                }
                pbVar5 = pbVar5 + local_38;
                pbVar11 = pbVar9;
            } while (true);
        }
        bVar12 = 0x2c < uVar2;
        if (uVar2 != 0x2d) {
            bVar12 = 8 < uVar2 - 0x30;
        }
        if (!bVar12 || (uVar2 == 0x2d || uVar2 - 0x30 == 9)) {
            *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
            if (uVar2 == 0x2d) {
                uVar2 = FUN_00012bd8(param_1, param_2);
            }
            if (uVar2 == 0x30) {
                uVar2 = FUN_00012bd8(param_1, param_2);
                if (uVar2 - 0x30 < 10)
                    goto LAB_00012f98;
            } else {
                if (9 < uVar2 - 0x30) {
                    FUN_00012ba0(param_1, uVar2);
                    return *(uint *)(param_1 + 0x3c);
                }
                do {
                    uVar2 = FUN_00012bd8(param_1, param_2);
                } while (uVar2 - 0x30 < 10);
            }
            if (((*(uint *)(param_1 + 0x34) & 8) == 0) &&
                (uVar2 != 0x45 && uVar2 != 0x2e)) {
                if (uVar2 != 0x65) {
                    FUN_00012ba0(param_1, uVar2);
                    pcVar3 = (char *)FUN_000138fc(iVar10);
                    piVar4 = __errno_location();
                    *piVar4 = 0;
                    lVar14 = strtoll(pcVar3, &local_34, 10);
                    if (*piVar4 == 0x22) {
                        if (lVar14 < 0) {
                            pcVar3 = "too big negative integer";
                        } else {
                            pcVar3 = "too big integer";
                        }
                        FUN_000128d8(param_2, param_1, 0xf, pcVar3);
                        return *(uint *)(param_1 + 0x3c);
                    }
                    if (local_34 == pcVar3 + *(int *)(param_1 + 0x2c)) {
                        *(longlong *)(param_1 + 0x40) = lVar14;
                        *(undefined4 *)(param_1 + 0x3c) = 0x101;
                        return 0x101;
                    }
                    /* WARNING: Subroutine does not return */
                    __assert_fail("end == saved_text + lex->saved_text.length",
                                  "load.c", 0x202, "lex_scan_number");
                }
            } else {
                if (uVar2 == 0x2e) {
                    uVar2 = *(uint *)(param_1 + 0x14);
                    if (uVar2 == 0) {
                        uVar2 = FUN_00012ab8(param_1, param_2);
                    }
                    if (9 < uVar2 - 0x30) {
                        FUN_00012a4c(param_1);
                        return *(uint *)(param_1 + 0x3c);
                    }
                    FUN_0001398c(iVar10, uVar2 & 0xff);
                    do {
                        uVar2 = FUN_00012bd8(param_1, param_2);
                    } while (uVar2 - 0x30 < 10);
                }
                if ((uVar2 & 0xffffffdf) != 0x45)
                    goto LAB_00012dbe;
            }
            uVar2 = FUN_00012bd8(param_1, param_2);
            if (uVar2 == 0x2b || uVar2 == 0x2d) {
                uVar2 = FUN_00012bd8(param_1, param_2);
            }
            if (9 < uVar2 - 0x30) {
            LAB_00012f98:
                FUN_00012ba0(param_1, uVar2);
                return *(uint *)(param_1 + 0x3c);
            }
            do {
                uVar2 = FUN_00012bd8(param_1, param_2);
            } while (uVar2 - 0x30 < 10);
        LAB_00012dbe:
            FUN_00012ba0(param_1, uVar2);
            iVar10 = FUN_000139c0(iVar10, &local_30);
            if (iVar10 == 0) {
                *(undefined4 *)(param_1 + 0x3c) = 0x102;
                *(undefined8 *)(param_1 + 0x40) = local_30;
                return 0x102;
            }
            FUN_000128d8(param_2, param_1, 0xf, "real number overflow");
            return *(uint *)(param_1 + 0x3c);
        }
        if ((uVar2 & 0xffffffdf) - 0x41 < 0x1a) {
            do {
                uVar2 = FUN_00012bd8(param_1, param_2);
            } while ((uVar2 & 0xffffffdf) - 0x41 < 0x1a);
            FUN_00012ba0(param_1, uVar2);
            pcVar3 = (char *)FUN_000138fc(iVar10);
            iVar10 = strcmp(pcVar3, "true");
            if (iVar10 == 0) {
                *(undefined4 *)(param_1 + 0x3c) = 0x103;
                return 0x103;
            }
            iVar10 = strcmp(pcVar3, "false");
            if (iVar10 == 0) {
                *(undefined4 *)(param_1 + 0x3c) = 0x104;
                return 0x104;
            }
            iVar10 = strcmp(pcVar3, "null");
            if (iVar10 == 0) {
                *(undefined4 *)(param_1 + 0x3c) = 0x105;
                return 0x105;
            }
        } else {
            cVar1 = *(char *)(param_1 + *(int *)(param_1 + 0x10) + 8);
            while (cVar1 != '\0') {
                FUN_0001398c(iVar10);
                iVar8 = *(int *)(param_1 + 0x10) + 1;
                cVar1 = *(char *)(param_1 + iVar8 + 8);
                *(int *)(param_1 + 0x10) = iVar8;
                *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
            }
        }
    }
    uVar2 = 0xffffffff;
LAB_00012d0c:
    *(uint *)(param_1 + 0x3c) = uVar2;
    return uVar2;
}

void FUN_000131c8(int param_1)

{
    if (*(int *)(param_1 + 0x3c) == 0x100) {
        FUN_0001383c(*(undefined4 *)(param_1 + 0x40));
        *(undefined4 *)(param_1 + 0x40) = 0;
        *(undefined4 *)(param_1 + 0x44) = 0;
    }
    FUN_000138d8(param_1 + 0x28);
    return;
}

int FUN_000131f0(int param_1, uint param_2, undefined4 param_3)

{
    bool bVar1;
    void *pvVar2;
    int iVar3;
    uint uVar4;
    int iVar5;
    int *piVar6;
    size_t sVar7;
    void *pvVar8;

    uVar4 = *(int *)(param_1 + 0x38) + 1;
    *(uint *)(param_1 + 0x38) = uVar4;
    if (0x800 < uVar4) {
        FUN_000128d8(param_3, param_1, 2, "maximum parsing depth reached");
        return 0;
    }
    iVar5 = *(int *)(param_1 + 0x3c);
    if (iVar5 == 0x101) {
        iVar5 = FUN_00014150(*(undefined4 *)(param_1 + 0x40),
                             *(undefined4 *)(param_1 + 0x44));
    } else if (iVar5 < 0x102) {
        if (iVar5 == 0x5b) {
            iVar5 = FUN_00013ed4();
            if (iVar5 == 0) {
                return 0;
            }
            FUN_00012bfc(param_1, param_3);
            iVar3 = *(int *)(param_1 + 0x3c);
            if (iVar3 != 0x5d) {
                while (iVar3 != 0) {
                    iVar3 = FUN_000131f0(param_1, param_2, param_3);
                    if ((iVar3 == 0) ||
                        (iVar3 = FUN_0001483c(iVar5, iVar3), iVar3 != 0))
                        goto LAB_000133f2;
                    FUN_00012bfc(param_1, param_3);
                    if (*(int *)(param_1 + 0x3c) != 0x2c) {
                        if (*(int *)(param_1 + 0x3c) == 0x5d)
                            goto LAB_00013284;
                        break;
                    }
                    FUN_00012bfc(param_1, param_3);
                    iVar3 = *(int *)(param_1 + 0x3c);
                }
                FUN_000128d8(param_3, param_1, 8, "\']\' expected");
            LAB_000133f2:
                if (*(int *)(iVar5 + 4) == -1) {
                    return 0;
                }
                piVar6 = (int *)(iVar5 + 4);
                DataMemoryBarrier(0x1f);
                do {
                    ExclusiveAccess(piVar6);
                    iVar3 = *piVar6 + -1;
                    bVar1 = (bool)hasExclusiveAccess(piVar6);
                } while (!bVar1);
                *piVar6 = iVar3;
            LAB_0001340e:
                if (iVar3 != 0) {
                    return 0;
                }
                FUN_0001427c(iVar5);
                return 0;
            }
        } else {
            if (iVar5 < 0x5c) {
                if (iVar5 == -1) {
                    FUN_000128d8(param_3, param_1, 8, "invalid token");
                    return 0;
                }
            LAB_00013232:
                FUN_000128d8(param_3, param_1, 8, "unexpected token");
                return 0;
            }
            if (iVar5 == 0x7b) {
                iVar5 = FUN_00013dec();
                if (iVar5 == 0) {
                    return 0;
                }
                FUN_00012bfc(param_1, param_3);
                if (*(int *)(param_1 + 0x3c) != 0x7d) {
                    if (*(int *)(param_1 + 0x3c) == 0x100) {
                        pvVar8 = *(void **)(param_1 + 0x40);
                        sVar7 = *(size_t *)(param_1 + 0x44);
                        *(undefined4 *)(param_1 + 0x40) = 0;
                        *(undefined4 *)(param_1 + 0x44) = 0;
                        if (pvVar8 == (void *)0x0) {
                            return 0;
                        }
                        while (true) {
                            pvVar2 = memchr(pvVar8, 0, sVar7);
                            if (pvVar2 != (void *)0x0) {
                                FUN_0001383c(pvVar8, pvVar8);
                                FUN_000128d8(
                                    param_3, param_1, 0xd,
                                    "NUL byte in object key not supported");
                                goto LAB_0001346a;
                            }
                            if (((param_2 & 1) != 0) &&
                                (iVar3 = FUN_00013e38(iVar5), iVar3 != 0)) {
                                FUN_0001383c(pvVar8);
                                FUN_000128d8(param_3, param_1, 0xe,
                                             "duplicate object key");
                                goto LAB_0001346a;
                            }
                            FUN_00012bfc(param_1, param_3);
                            if (*(int *)(param_1 + 0x3c) != 0x3a) {
                                FUN_0001383c(pvVar8, param_3);
                                FUN_000128d8(param_3, param_1, 8,
                                             "\':\' expected");
                                goto LAB_0001346a;
                            }
                            FUN_00012bfc(param_1);
                            iVar3 = FUN_000131f0(param_1, param_2, param_3);
                            if (iVar3 == 0) {
                                FUN_0001383c(pvVar8, pvVar8, 0);
                                goto LAB_0001346a;
                            }
                            iVar3 = FUN_000144b0(iVar5);
                            if (iVar3 != 0) {
                                FUN_0001383c(pvVar8);
                                goto LAB_0001346a;
                            }
                            FUN_0001383c(pvVar8);
                            FUN_00012bfc(param_1, param_3);
                            if (*(int *)(param_1 + 0x3c) != 0x2c)
                                break;
                            FUN_00012bfc(param_1, param_3);
                            if (*(int *)(param_1 + 0x3c) != 0x100)
                                goto LAB_0001345e;
                            pvVar8 = *(void **)(param_1 + 0x40);
                            sVar7 = *(size_t *)(param_1 + 0x44);
                            *(undefined4 *)(param_1 + 0x40) = 0;
                            *(undefined4 *)(param_1 + 0x44) = 0;
                            if (pvVar8 == (void *)0x0) {
                                return 0;
                            }
                        }
                        if (*(int *)(param_1 + 0x3c) == 0x7d)
                            goto LAB_00013284;
                        FUN_000128d8(param_3, param_1, 8, "\'}\' expected");
                    } else {
                    LAB_0001345e:
                        FUN_000128d8(param_3, param_1, 8,
                                     "string or \'}\' expected");
                    }
                LAB_0001346a:
                    if (*(int *)(iVar5 + 4) == -1) {
                        return 0;
                    }
                    piVar6 = (int *)(iVar5 + 4);
                    DataMemoryBarrier(0x1f);
                    do {
                        ExclusiveAccess(piVar6);
                        iVar3 = *piVar6 + -1;
                        bVar1 = (bool)hasExclusiveAccess(piVar6);
                    } while (!bVar1);
                    *piVar6 = iVar3;
                    goto LAB_0001340e;
                }
            } else {
                if (iVar5 != 0x100)
                    goto LAB_00013232;
                pvVar8 = *(void **)(param_1 + 0x40);
                sVar7 = *(size_t *)(param_1 + 0x44);
                if (((param_2 & 0x10) == 0) &&
                    (pvVar2 = memchr(pvVar8, 0, sVar7),
                     pvVar2 != (void *)0x0)) {
                    FUN_000128d8(
                        param_3, param_1, 0xb,
                        "\\u0000 is not allowed without JSON_ALLOW_NUL");
                    return 0;
                }
                iVar5 = FUN_00013fd0(pvVar8, sVar7);
                *(undefined4 *)(param_1 + 0x40) = 0;
                *(undefined4 *)(param_1 + 0x44) = 0;
            }
        }
    } else if (iVar5 == 0x103) {
        iVar5 = FUN_00014260();
    } else if (iVar5 < 0x103) {
        iVar5 = FUN_0001419c((int)*(undefined8 *)(param_1 + 0x40));
    } else if (iVar5 == 0x104) {
        iVar5 = FUN_00014268();
    } else {
        if (iVar5 != 0x105)
            goto LAB_00013232;
        iVar5 = FUN_00014270();
    }
LAB_00013284:
    if (iVar5 != 0) {
        *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
        return iVar5;
    }
    return 0;
}

int FUN_00013510(int param_1, uint param_2, int param_3, undefined4 param_4)

{
    bool bVar1;
    int iVar2;
    int iVar3;
    int *piVar4;

    *(undefined4 *)(param_1 + 0x38) = 0;
    FUN_00012bfc(param_1, param_3, param_3, 0, param_4);
    if (((param_2 & 4) == 0) &&
        ((*(uint *)(param_1 + 0x3c) & 0xffffffdf) != 0x5b)) {
        FUN_000128d8(param_3, param_1, 8, "\'[\' or \'{\' expected");
    } else {
        iVar2 = FUN_000131f0(param_1, param_2, param_3);
        if (iVar2 != 0) {
            if (((int)(param_2 << 0x1e) < 0) ||
                (FUN_00012bfc(param_1, param_3),
                 *(int *)(param_1 + 0x3c) == 0)) {
                if (param_3 != 0) {
                    *(undefined4 *)(param_3 + 8) =
                        *(undefined4 *)(param_1 + 0x24);
                    return iVar2;
                }
                return iVar2;
            }
            FUN_000128d8(param_3, param_1, 7, "end of file expected");
            if (*(int *)(iVar2 + 4) != -1) {
                piVar4 = (int *)(iVar2 + 4);
                DataMemoryBarrier(0x1f);
                do {
                    ExclusiveAccess(piVar4);
                    iVar3 = *piVar4;
                    bVar1 = (bool)hasExclusiveAccess(piVar4);
                } while (!bVar1);
                *piVar4 = iVar3 + -1;
                if (iVar3 + -1 == 0) {
                    FUN_0001427c(iVar2);
                    return 0;
                }
            }
        }
    }
    return 0;
}

undefined4 FUN_000135a8(int param_1, undefined4 param_2, undefined4 param_3)

{
    int iVar1;
    undefined4 uVar2;
    int local_68[2];
    undefined1 auStack_60[76];

    FUN_00014d80(param_3, "<string>");
    if (param_1 == 0) {
        FUN_000128d8(param_3, 0, 4, "wrong arguments");
        uVar2 = 0;
    } else {
        uVar2 = 0;
        local_68[1] = 0;
        local_68[0] = param_1;
        iVar1 = FUN_00012994(auStack_60, &LAB_00012860_1, param_2, local_68);
        if (iVar1 == 0) {
            uVar2 = FUN_00013510(auStack_60, param_2, param_3);
            FUN_000131c8(auStack_60);
        }
    }
    return uVar2;
}

undefined4 FUN_00013604(int param_1, undefined4 param_2, undefined4 param_3,
                        undefined4 param_4)

{
    int iVar1;
    undefined4 uVar2;
    int local_6c;
    undefined4 local_68;
    undefined4 local_64;
    undefined1 auStack_60[72];

    FUN_00014d80(param_4, "<buffer>");
    if (param_1 == 0) {
        FUN_000128d8(param_4, 0, 4, "wrong arguments");
        uVar2 = 0;
    } else {
        uVar2 = 0;
        local_64 = 0;
        local_6c = param_1;
        local_68 = param_2;
        iVar1 = FUN_00012994(auStack_60, &LAB_00012878_1, param_3, &local_6c);
        if (iVar1 == 0) {
            uVar2 = FUN_00013510(auStack_60, param_3, param_4);
            FUN_000131c8(auStack_60);
        }
    }
    return uVar2;
}

undefined4 FUN_0001366c(int param_1, undefined4 param_2, undefined4 param_3)

{
    int iVar1;
    char *pcVar2;
    undefined4 uVar3;
    undefined1 auStack_60[76];

    if (param_1 == stdin) {
        pcVar2 = "<stdin>";
    } else {
        pcVar2 = "<stream>";
    }
    FUN_00014d80(param_3, pcVar2);
    if (param_1 == 0) {
        FUN_000128d8(param_3, 0, 4, "wrong arguments");
        uVar3 = 0;
    } else {
        iVar1 = FUN_00012994(auStack_60, fgetc, param_2, param_1);
        uVar3 = 0;
        if (iVar1 == 0) {
            uVar3 = FUN_00013510(auStack_60, param_2, param_3);
            FUN_000131c8(auStack_60);
        }
    }
    return uVar3;
}

undefined4 FUN_000136d8(int param_1, undefined4 param_2, undefined4 param_3)

{
    int iVar1;
    undefined4 uVar2;
    char *pcVar3;
    int local_5c;
    undefined1 auStack_58[76];

    if (param_1 == 0) {
        pcVar3 = "<stdin>";
    } else {
        pcVar3 = "<stream>";
    }
    local_5c = param_1;
    FUN_00014d80(param_3, pcVar3);
    if (local_5c < 0) {
        FUN_000128d8(param_3, 0, 4, "wrong arguments");
        uVar2 = 0;
    } else {
        iVar1 = FUN_00012994(auStack_58, 0x129c9, param_2, &local_5c);
        if (iVar1 == 0) {
            uVar2 = FUN_00013510(auStack_58, param_2, param_3);
            FUN_000131c8(auStack_58);
        } else {
            uVar2 = 0;
        }
    }
    return uVar2;
}

undefined4 FUN_00013744(char *param_1, undefined4 param_2, undefined4 param_3)

{
    FILE *__stream;
    undefined4 uVar1;
    int *piVar2;
    char *pcVar3;

    FUN_00014d80(param_3, param_1);
    if (param_1 == (char *)0x0) {
        FUN_000128d8(param_3, 0, 4, "wrong arguments");
        uVar1 = 0;
    } else {
        __stream = fopen(param_1, "rb");
        if (__stream == (FILE *)0x0) {
            piVar2 = __errno_location();
            pcVar3 = strerror(*piVar2);
            FUN_000128d8(param_3, 0, 3, "unable to open %s: %s", param_1,
                         pcVar3);
            uVar1 = 0;
        } else {
            uVar1 = FUN_0001366c(__stream, param_2, param_3);
            fclose(__stream);
        }
    }
    return uVar1;
}

void FUN_00013828(int param_1)

{
    if (param_1 != 0) {
        (*DAT_000270f8)();
        return;
    }
    return;
}

void FUN_0001383c(int param_1)

{
    if (param_1 != 0) {
        (*DAT_000270fc)();
    }
    return;
}

void *FUN_0001384c(void *param_1, size_t param_2)

{
    void *__dest;

    if ((param_2 != 0xffffffff) &&
        (__dest = (void *)(*DAT_000270f8)(), __dest != (void *)0x0)) {
        memcpy(__dest, param_1, param_2);
        *(undefined1 *)((int)__dest + param_2) = 0;
        return __dest;
    }
    return (void *)0x0;
}

void FUN_0001387c(char *param_1)

{
    size_t sVar1;

    sVar1 = strlen(param_1);
    FUN_0001384c(param_1, sVar1);
    return;
}

undefined4 FUN_000138b8(undefined4 *param_1)

{
    undefined1 *puVar1;

    param_1[2] = 0x10;
    param_1[1] = 0;
    puVar1 = (undefined1 *)FUN_00013828();
    *param_1 = puVar1;
    if (puVar1 != (undefined1 *)0x0) {
        *puVar1 = 0;
        return 0;
    }
    return 0xffffffff;
}

void FUN_000138d8(int *param_1)

{
    if (*param_1 != 0) {
        FUN_0001383c();
    }
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    return;
}

void FUN_000138f0(undefined4 *param_1)

{
    param_1[1] = 0;
    *(undefined1 *)*param_1 = 0;
    return;
}

undefined4 FUN_000138fc(undefined4 *param_1)

{
    return *param_1;
}

undefined4 FUN_0001390c(int *param_1, void *param_2, size_t param_3)

{
    int iVar1;
    uint uVar2;
    void *__dest;
    uint uVar3;

    uVar2 = param_1[1];
    iVar1 = param_1[2];
    if (param_3 < iVar1 - uVar2) {
        __dest = (void *)*param_1;
    LAB_00013968:
        memcpy((void *)((int)__dest + uVar2), param_2, param_3);
        iVar1 = param_1[1];
        param_1[1] = param_3 + iVar1;
        *(undefined1 *)(*param_1 + param_3 + iVar1) = 0;
        return 0;
    }
    if (((-1 < iVar1) && (param_3 != 0xffffffff)) && (uVar2 <= -param_3 - 2)) {
        uVar3 = uVar2 + 1 + param_3;
        if (uVar3 < (uint)(iVar1 << 1)) {
            uVar3 = iVar1 << 1;
        }
        __dest = (void *)FUN_00013828(uVar3);
        if (__dest != (void *)0x0) {
            memcpy(__dest, (void *)*param_1, param_1[1]);
            FUN_0001383c(*param_1);
            uVar2 = param_1[1];
            *param_1 = (int)__dest;
            param_1[2] = uVar3;
            goto LAB_00013968;
        }
    }
    return 0xffffffff;
}

void FUN_0001398c(undefined4 param_1, undefined1 param_2)

{
    undefined1 local_9[5];

    local_9[0] = param_2;
    FUN_0001390c(param_1, local_9, 1);
    return;
}

undefined1 FUN_000139a4(int *param_1)

{
    undefined1 uVar1;
    int iVar2;

    if (param_1[1] != 0) {
        iVar2 = param_1[1] + -1;
        param_1[1] = iVar2;
        uVar1 = *(undefined1 *)(*param_1 + iVar2);
        *(undefined1 *)(*param_1 + iVar2) = 0;
        return uVar1;
    }
    return 0;
}

undefined4 FUN_000139c0(int *param_1, double *param_2)

{
    char cVar1;
    lconv *plVar2;
    char *pcVar3;
    int *piVar4;
    undefined4 uVar5;
    char *__s;
    double dVar6;
    char *local_1c[2];

    plVar2 = localeconv();
    __s = (char *)*param_1;
    cVar1 = *plVar2->decimal_point;
    if ((cVar1 != '.') && (pcVar3 = strchr(__s, 0x2e), pcVar3 != (char *)0x0)) {
        *pcVar3 = cVar1;
        __s = (char *)*param_1;
    }
    piVar4 = __errno_location();
    *piVar4 = 0;
    dVar6 = strtod(__s, local_1c);
    if (local_1c[0] == (char *)(*param_1 + param_1[1])) {
        if (((dVar6 <= 1.79769313486232e+308) &&
             (-1 < (int)((uint)(dVar6 < -1.79769313486232e+308) << 0x1f))) ||
            (*piVar4 != 0x22)) {
            uVar5 = 0;
            *param_2 = dVar6;
        } else {
            uVar5 = 0xffffffff;
        }
        return uVar5;
    }
    /* WARNING: Subroutine does not return */
    __assert_fail("end == strbuffer->value + strbuffer->length", "strconv.c",
                  0x44, "jsonp_strtod");
}

char *FUN_00013a64(char *param_1, char *param_2, int param_3)

{
    int iVar1;
    char *pcVar2;
    lconv *plVar3;
    char *pcVar4;
    char *pcVar5;
    char *__src;

    if (param_3 == 0) {
        param_3 = 0x11;
    }
    pcVar2 = (char *)snprintf(param_1, (size_t)param_2, "%.*g", param_3);
    if (((int)pcVar2 < 0) || (param_2 <= pcVar2)) {
        return (char *)0xffffffff;
    }
    plVar3 = localeconv();
    if (((byte)*plVar3->decimal_point != 0x2e) &&
        (pcVar4 = strchr(param_1, (uint)(byte)*plVar3->decimal_point),
         pcVar4 != (char *)0x0)) {
        *pcVar4 = '.';
    }
    pcVar5 = strchr(param_1, 0x2e);
    pcVar4 = pcVar2;
    if (pcVar5 == (char *)0x0) {
        pcVar5 = strchr(param_1, 0x65);
        if (pcVar5 != (char *)0x0)
            goto LAB_00013ab4;
        if (param_2 <= pcVar2 + 3) {
            return (char *)0xffffffff;
        }
        pcVar4 = pcVar2 + 2;
        param_1[(int)pcVar2] = '.';
        param_1[(int)(pcVar2 + 1)] = '0';
        param_1[(int)pcVar4] = '\0';
    }
    pcVar5 = strchr(param_1, 0x65);
    pcVar2 = pcVar4;
    if (pcVar5 == (char *)0x0) {
        return pcVar4;
    }
LAB_00013ab4:
    __src = pcVar5 + 2;
    pcVar4 = __src;
    if (pcVar5[1] != '-') {
        pcVar4 = pcVar5 + 1;
    }
    if (pcVar5[2] == '0') {
        pcVar5 = pcVar5 + 3;
        do {
            __src = pcVar5;
            pcVar5 = __src + 1;
        } while (*__src == '0');
    }
    if (__src != pcVar4) {
        iVar1 = (int)pcVar2 - (int)__src;
        pcVar2 = pcVar4 + ((int)pcVar2 - (int)__src);
        memmove(pcVar4, __src, (size_t)(param_1 + iVar1));
    }
    return pcVar2;
}

undefined4 FUN_00013b18(int param_1, byte *param_2, undefined4 *param_3)

{
    byte bVar1;

    if (-1 < param_1) {
        bVar1 = (byte)param_1;
        if (param_1 < 0x80) {
            *param_2 = bVar1;
            *param_3 = 1;
            return 0;
        }
        if (param_1 < 0x800) {
            param_2[1] = (bVar1 & 0x3f) + 0x80;
            *param_2 = (byte)((uint)(param_1 << 0x15) >> 0x1b) - 0x40;
            *param_3 = 2;
            return 0;
        }
        if (param_1 < 0x10000) {
            *param_2 = ((byte)((uint)param_1 >> 8) >> 4) - 0x20;
            param_2[1] = (byte)((uint)(param_1 << 0x14) >> 0x1a) + 0x80;
            param_2[2] = (bVar1 & 0x3f) + 0x80;
            *param_3 = 3;
            return 0;
        }
        if (param_1 < 0x110000) {
            *param_2 = (byte)((uint)(param_1 << 0xb) >> 0x1d) - 0x10;
            param_2[1] = (byte)((uint)(param_1 << 0xe) >> 0x1a) + 0x80;
            param_2[2] = (byte)((uint)(param_1 << 0x14) >> 0x1a) + 0x80;
            param_2[3] = (bVar1 & 0x3f) + 0x80;
            *param_3 = 4;
            return 0;
        }
    }
    return 0xffffffff;
}

undefined4 FUN_00013bac(uint param_1)

{
    undefined4 uVar1;

    if (-1 < (int)(param_1 << 0x18)) {
        return 1;
    }
    if (((param_1 ^ 0x80) < 0x40) || ((param_1 + 0x40 & 0xff) < 2)) {
        return 0;
    }
    if ((param_1 + 0x3e & 0xff) < 0x1e) {
        return 2;
    }
    if (0xf < (param_1 + 0x20 & 0xff)) {
        if ((param_1 + 0x10 & 0xff) < 5) {
            uVar1 = 4;
        } else {
            uVar1 = 0;
        }
        return uVar1;
    }
    return 3;
}

undefined4 FUN_00013bf4(byte *param_1, uint param_2, uint *param_3)

{
    uint uVar1;
    uint uVar2;
    uint uVar3;
    bool bVar4;

    uVar3 = (uint)*param_1;
    if (param_2 == 2) {
        uVar3 = uVar3 & 0x1f;
    } else if (param_2 == 3) {
        uVar3 = uVar3 & 0xf;
    } else {
        if (param_2 != 4) {
            return 0;
        }
        uVar3 = uVar3 & 7;
    }
    uVar2 = (uint)param_1[1];
    if ((uVar2 ^ 0x80) < 0x40) {
        uVar1 = 1;
        do {
            uVar1 = uVar1 + 1;
            uVar3 = (uVar2 & 0x3f) + uVar3 * 0x40;
            if (param_2 <= uVar1) {
                if (0x10ffff < (int)uVar3) {
                    return 0;
                }
                if (uVar3 - 0xd800 < 0x800) {
                    return 0;
                }
                bVar4 = uVar3 == 0x7f;
                if ((int)uVar3 < 0x80) {
                    bVar4 = param_2 == 2;
                }
                if (bVar4) {
                    return 0;
                }
                bVar4 = uVar3 == 0x7ff;
                if ((int)uVar3 < 0x800) {
                    bVar4 = param_2 == 3;
                }
                if (!bVar4) {
                    if (param_2 == 4 && (int)uVar3 < 0x10000) {
                        return 0;
                    }
                    if (param_3 == (uint *)0x0) {
                        return 1;
                    }
                    *param_3 = uVar3;
                    return 1;
                }
                return 0;
            }
            uVar2 = (uint)param_1[uVar1];
        } while ((uVar2 ^ 0x80) < 0x40);
    }
    return 0;
}

byte *FUN_00013c8c(byte *param_1, uint param_2, uint *param_3)

{
    byte bVar1;
    uint uVar2;
    uint uVar3;
    int iVar4;
    uint local_1c;

    if (param_2 != 0) {
        bVar1 = *param_1;
        uVar3 = FUN_00013bac((uint)bVar1);
        if ((uVar3 == 0) ||
            ((uVar2 = (uint)bVar1,
              uVar3 != 1 && ((param_2 < uVar3 ||
                              (iVar4 = FUN_00013bf4(param_1, uVar3, &local_1c),
                               uVar2 = local_1c, iVar4 == 0)))))) {
            param_1 = (byte *)0x0;
        } else {
            local_1c = uVar2;
            if (param_3 != (uint *)0x0) {
                *param_3 = local_1c;
            }
            param_1 = param_1 + uVar3;
        }
    }
    return param_1;
}

undefined4 FUN_00013cd8(int param_1, uint param_2)

{
    uint uVar1;
    uint uVar2;
    uint uVar3;
    undefined8 uVar4;

    if (param_2 != 0) {
        uVar3 = 0;
        uVar2 = param_2;
        do {
            uVar1 = FUN_00013bac(*(undefined1 *)(param_1 + uVar3), uVar2);
            if (uVar1 == 0) {
                return 0;
            }
            uVar2 = uVar1;
            if (1 < uVar1) {
                if (param_2 - uVar3 < uVar1) {
                    return 0;
                }
                uVar4 = FUN_00013bf4(param_1 + uVar3, uVar1, 0);
                uVar2 = (uint)((ulonglong)uVar4 >> 0x20);
                if ((int)uVar4 == 0) {
                    return 0;
                }
                uVar3 = (uVar1 + uVar3) - 1;
            }
            uVar3 = uVar3 + 1;
        } while (uVar3 < param_2);
    }
    return 1;
}

void *FUN_00013d64(int param_1, int param_2, int param_3)

{
    void *__dest;
    uint uVar1;
    uint uVar2;
    void *__src;

    uVar1 = *(uint *)(param_1 + 8);
    if (uVar1 < (uint)(param_2 + *(int *)(param_1 + 0xc))) {
        uVar2 = param_2 + uVar1;
        __src = *(void **)(param_1 + 0x10);
        if (uVar2 < uVar1 << 1) {
            uVar2 = uVar1 << 1;
        }
        __dest = (void *)FUN_00013828(uVar2 << 2);
        if (__dest == (void *)0x0) {
            return (void *)0x0;
        }
        *(uint *)(param_1 + 8) = uVar2;
        *(void **)(param_1 + 0x10) = __dest;
        if (param_3 == 0) {
            return __src;
        }
        memcpy(__dest, __src, *(int *)(param_1 + 0xc) << 2);
        FUN_0001383c(__src);
    }
    return *(void **)(param_1 + 0x10);
}

undefined4 FUN_00013db0(undefined4 param_1, undefined4 param_2, char *param_3,
                        size_t param_4)

{
    int iVar1;
    undefined4 uVar2;

    snprintf(param_3, param_4, "%p", param_2);
    iVar1 = FUN_000125c8(param_1, param_3);
    if (iVar1 == 0) {
        uVar2 = FUN_00012468(param_1, param_3, &DAT_00027100);
        return uVar2;
    }
    return 0xffffffff;
}

undefined4 *FUN_00013dec(void)

{
    undefined4 *puVar1;
    int iVar2;

    puVar1 = (undefined4 *)FUN_00013828(0x24);
    if (puVar1 != (undefined4 *)0x0) {
        if (DAT_00027df4 == 0) {
            FUN_000127a8();
        }
        *puVar1 = 0;
        puVar1[1] = 1;
        iVar2 = FUN_00012408(puVar1 + 2);
        if (iVar2 != 0) {
            FUN_0001383c(puVar1);
            return (undefined4 *)0x0;
        }
    }
    return puVar1;
}

int *FUN_00013e28(int *param_1)

{
    if (param_1 != (int *)0x0) {
        if (*param_1 == 0) {
            return (int *)param_1[2];
        }
        param_1 = (int *)0x0;
    }
    return param_1;
}

undefined4 FUN_00013e38(int *param_1, int param_2)

{
    undefined4 uVar1;

    if ((param_1 != (int *)0x0 && param_2 != 0) && (*param_1 == 0)) {
        uVar1 = FUN_000125c8(param_1 + 2);
        return uVar1;
    }
    return 0;
}

int *FUN_00013e80(int *param_1)

{
    int *piVar1;

    if ((param_1 != (int *)0x0) && (*param_1 == 0)) {
        piVar1 = (int *)param_1[8];
        if (piVar1 == param_1 + 7) {
            piVar1 = (int *)0x0;
        }
        return piVar1;
    }
    return (int *)0x0;
}

int *FUN_00013ea8(int *param_1, int param_2)

{
    int *piVar1;

    if (((param_1 != (int *)0x0) && (*param_1 == 0)) && (param_2 != 0)) {
        piVar1 = *(int **)(param_2 + 4);
        if (piVar1 == param_1 + 7) {
            piVar1 = (int *)0x0;
        }
        return piVar1;
    }
    return (int *)0x0;
}

int FUN_00013ebc(int param_1)

{
    if (param_1 != 0) {
        return param_1 + 0x10;
    }
    return 0;
}

undefined4 FUN_00013ec4(int param_1)

{
    if (param_1 != 0) {
        return *(undefined4 *)(param_1 + 0xc);
    }
    return 0;
}

undefined4 *FUN_00013ed4(void)

{
    undefined4 *puVar1;
    int iVar2;

    puVar1 = (undefined4 *)FUN_00013828(0x14);
    if (puVar1 == (undefined4 *)0x0) {
        return (undefined4 *)0x0;
    }
    *puVar1 = 1;
    puVar1[1] = 1;
    puVar1[3] = 0;
    puVar1[2] = 8;
    iVar2 = FUN_00013828(0x20);
    puVar1[4] = iVar2;
    if (iVar2 != 0) {
        return puVar1;
    }
    FUN_0001383c(puVar1);
    return (undefined4 *)0x0;
}

int *FUN_00013f08(int *param_1)

{
    if (param_1 != (int *)0x0) {
        if (*param_1 == 1) {
            return (int *)param_1[3];
        }
        param_1 = (int *)0x0;
    }
    return param_1;
}

int *FUN_00013f1c(int *param_1, uint param_2)

{
    if (param_1 != (int *)0x0) {
        if ((*param_1 == 1) && (param_2 < (uint)param_1[3])) {
            return *(int **)(param_1[4] + param_2 * 4);
        }
        param_1 = (int *)0x0;
    }
    return param_1;
}

undefined4 FUN_00013f38(int *param_1, int *param_2, undefined4 param_3,
                        undefined4 param_4)

{
    bool bVar1;
    int iVar2;
    void *__src;
    uint uVar3;
    uint uVar4;
    int *piVar5;

    if ((((param_1 != (int *)0x0) && (*param_1 == 1)) &&
         (param_2 != (int *)0x0)) &&
        ((*param_2 == 1 &&
          (iVar2 = FUN_00013d64(param_1, param_2[3], 1, 1, param_4),
           iVar2 != 0)))) {
        uVar3 = param_2[3];
        uVar4 = 0;
        __src = (void *)param_2[4];
        if (uVar3 != 0) {
            do {
                iVar2 = *(int *)((int)__src + uVar4 * 4);
                piVar5 = (int *)(iVar2 + 4);
                if ((iVar2 != 0) && (*(int *)(iVar2 + 4) != -1)) {
                    do {
                        ExclusiveAccess(piVar5);
                        bVar1 = (bool)hasExclusiveAccess(piVar5);
                    } while (!bVar1);
                    *piVar5 = *piVar5 + 1;
                    DataMemoryBarrier(0x1f);
                    __src = (void *)param_2[4];
                    uVar3 = param_2[3];
                }
                uVar4 = uVar4 + 1;
            } while (uVar4 < uVar3);
        }
        memcpy((void *)(param_1[4] + param_1[3] * 4), __src, uVar3 << 2);
        param_1[3] = param_1[3] + param_2[3];
        return 0;
    }
    return 0xffffffff;
}

undefined4 *FUN_00013fac(char *param_1)

{
    undefined4 *puVar1;
    int iVar2;
    size_t sVar3;

    if (param_1 == (char *)0x0) {
        return (undefined4 *)0x0;
    }
    sVar3 = strlen(param_1);
    if ((param_1 != (char *)0x0) && (iVar2 = FUN_0001384c(), iVar2 != 0)) {
        puVar1 = (undefined4 *)FUN_00013828(0x10);
        if (puVar1 == (undefined4 *)0x0) {
            FUN_0001383c(iVar2);
            return (undefined4 *)0x0;
        }
        puVar1[2] = iVar2;
        puVar1[3] = sVar3;
        *puVar1 = 2;
        puVar1[1] = 1;
        return puVar1;
    }
    return (undefined4 *)0x0;
}

undefined4 *FUN_00013fc8(int param_1, undefined4 param_2)

{
    undefined4 *puVar1;
    int iVar2;

    if ((param_1 != 0) && (iVar2 = FUN_0001384c(), iVar2 != 0)) {
        puVar1 = (undefined4 *)FUN_00013828(0x10);
        if (puVar1 == (undefined4 *)0x0) {
            FUN_0001383c(iVar2);
            return (undefined4 *)0x0;
        }
        puVar1[2] = iVar2;
        puVar1[3] = param_2;
        *puVar1 = 2;
        puVar1[1] = 1;
        return puVar1;
    }
    return (undefined4 *)0x0;
}

/* WARNING: Removing unreachable block (ram,0x00013d4a) */

undefined4 *FUN_00013fd0(int param_1, undefined4 param_2)

{
    undefined4 *puVar1;

    if (param_1 == 0) {
        return (undefined4 *)0x0;
    }
    puVar1 = (undefined4 *)FUN_00013828(0x10);
    if (puVar1 == (undefined4 *)0x0) {
        FUN_0001383c(param_1);
        return (undefined4 *)0x0;
    }
    puVar1[2] = param_1;
    puVar1[3] = param_2;
    *puVar1 = 2;
    puVar1[1] = 1;
    return puVar1;
}

undefined4 FUN_00013fd8(int param_1, undefined4 param_2, undefined4 param_3,
                        undefined4 param_4)

{
    int iVar1;
    undefined4 uVar2;
    undefined4 extraout_r2;

    if ((param_1 != 0) && (iVar1 = FUN_00013cd8(), iVar1 != 0)) {
        uVar2 = FUN_00013fc8(param_1, param_2, extraout_r2, param_4);
        return uVar2;
    }
    return 0;
}

void FUN_00013ff8(char *param_1)

{
    size_t sVar1;

    if (param_1 != (char *)0x0) {
        sVar1 = strlen(param_1);
        FUN_00013fd8(param_1, sVar1);
        return;
    }
    return;
}

int *FUN_00014010(int *param_1)

{
    if (param_1 != (int *)0x0) {
        if (*param_1 == 2) {
            return (int *)param_1[2];
        }
        param_1 = (int *)0x0;
    }
    return param_1;
}

int *FUN_00014020(int *param_1)

{
    if (param_1 != (int *)0x0) {
        if (*param_1 == 2) {
            return (int *)param_1[3];
        }
        param_1 = (int *)0x0;
    }
    return param_1;
}

undefined4 FUN_00014034(int *param_1, int param_2, int param_3)

{
    int iVar1;

    if ((((param_1 != (int *)0x0) && (*param_1 == 2)) && (param_2 != 0)) &&
        (iVar1 = FUN_0001384c(param_2, param_3), iVar1 != 0)) {
        FUN_0001383c(param_1[2]);
        param_1[2] = iVar1;
        param_1[3] = param_3;
        return 0;
    }
    return 0xffffffff;
}

undefined4 FUN_00014064(undefined4 param_1, char *param_2, undefined4 param_3,
                        undefined4 param_4)

{
    size_t sVar1;
    undefined4 uVar2;

    if (param_2 != (char *)0x0) {
        sVar1 = strlen(param_2);
        uVar2 = FUN_00014034(param_1, param_2, sVar1, param_4);
        return uVar2;
    }
    return 0xffffffff;
}

undefined4 FUN_00014088(undefined4 param_1, int param_2, undefined4 param_3)

{
    int iVar1;
    undefined4 uVar2;

    if ((param_2 != 0) &&
        (iVar1 = FUN_00013cd8(param_2, param_3), iVar1 != 0)) {
        uVar2 = FUN_00014034(param_1, param_2, param_3);
        return uVar2;
    }
    return 0xffffffff;
}

undefined4 FUN_000140b0(undefined4 param_1, char *param_2, undefined4 param_3,
                        undefined4 param_4)

{
    size_t sVar1;
    undefined4 uVar2;

    if (param_2 != (char *)0x0) {
        sVar1 = strlen(param_2);
        uVar2 = FUN_00014088(param_1, param_2, sVar1, param_4);
        return uVar2;
    }
    return 0xffffffff;
}

char *FUN_000140d4(char *param_1, __gnuc_va_list param_2)

{
    int iVar1;
    char *__s;
    int iVar2;

    iVar1 = vsnprintf((char *)0x0, 0, param_1, param_2);
    if (iVar1 == 0) {
        __s = (char *)FUN_00013ff8("");
    } else {
        __s = (char *)FUN_00013828(iVar1 + 1U);
        if (__s != (char *)0x0) {
            vsnprintf(__s, iVar1 + 1U, param_1, param_2);
            iVar2 = FUN_00013cd8(__s, iVar1);
            if (iVar2 == 0) {
                FUN_0001383c(__s);
                __s = (char *)0x0;
            } else {
                __s = (char *)FUN_00013fd0(__s, iVar1);
            }
        }
    }
    return __s;
}

void FUN_00014150(undefined4 param_1, undefined4 param_2)

{
    undefined4 *puVar1;

    puVar1 = (undefined4 *)FUN_00013828(0x10);
    if (puVar1 != (undefined4 *)0x0) {
        puVar1[2] = param_1;
        puVar1[3] = param_2;
        *puVar1 = 3;
        puVar1[1] = 1;
    }
    return;
}

undefined8 FUN_0001416c(int *param_1)

{
    int iVar1;
    int iVar2;

    if ((param_1 == (int *)0x0) || (*param_1 != 3)) {
        iVar1 = 0;
        iVar2 = 0;
    } else {
        iVar1 = param_1[2];
        iVar2 = param_1[3];
    }
    return CONCAT44(iVar2, iVar1);
}

undefined4 *FUN_0001419c(void)

{
    int iVar1;
    undefined4 *puVar2;
    double in_d0;

    iVar1 = __isnan(in_d0);
    if (((iVar1 == 0) && (iVar1 = __isinf(in_d0), iVar1 == 0)) &&
        (puVar2 = (undefined4 *)FUN_00013828(0x10),
         puVar2 != (undefined4 *)0x0)) {
        *(double *)(puVar2 + 2) = in_d0;
        *puVar2 = 4;
        puVar2[1] = 1;
    } else {
        puVar2 = (undefined4 *)0x0;
    }
    return puVar2;
}

undefined4 FUN_000141d8(int *param_1)

{
    if ((param_1 != (int *)0x0) && (*param_1 == 4)) {
        return (int)*(undefined8 *)(param_1 + 2);
    }
    return 0;
}

undefined4 FUN_000141f8(int *param_1)

{
    int iVar1;
    undefined4 uVar2;
    double in_d0;

    if ((((param_1 == (int *)0x0) || (*param_1 != 4)) ||
         (iVar1 = __isnan(in_d0), iVar1 != 0)) ||
        (iVar1 = __isinf(in_d0), iVar1 != 0)) {
        uVar2 = 0xffffffff;
    } else {
        *(double *)(param_1 + 2) = in_d0;
        uVar2 = 0;
    }
    return uVar2;
}

undefined *FUN_00014260(void)

{
    return &DAT_00027108;
}

undefined *FUN_00014268(void)

{
    return &DAT_00027110;
}

undefined *FUN_00014270(void)

{
    return &DAT_00027100;
}

void FUN_0001427c(undefined4 *param_1)

{
    bool bVar1;
    int iVar2;
    int *piVar3;
    int iVar4;
    uint uVar5;
    uint uVar6;

    if (param_1 == (undefined4 *)0x0) {
    switchD_00014288_default:
        return;
    }
    switch (*param_1) {
    case 0:
        FUN_00012454(param_1 + 2);
        FUN_0001383c(param_1);
        return;
    case 1:
        uVar6 = param_1[3];
        iVar2 = param_1[4];
        if (uVar6 != 0) {
            uVar5 = 0;
            do {
                iVar4 = *(int *)(iVar2 + uVar5 * 4);
                piVar3 = (int *)(iVar4 + 4);
                if ((iVar4 != 0) && (*(int *)(iVar4 + 4) != -1)) {
                    DataMemoryBarrier(0x1f);
                    do {
                        ExclusiveAccess(piVar3);
                        iVar2 = *piVar3;
                        bVar1 = (bool)hasExclusiveAccess(piVar3);
                    } while (!bVar1);
                    *piVar3 = iVar2 + -1;
                    if (iVar2 + -1 == 0) {
                        FUN_0001427c(iVar4);
                    }
                    iVar2 = param_1[4];
                    uVar6 = param_1[3];
                }
                uVar5 = uVar5 + 1;
            } while (uVar5 < uVar6);
        }
        break;
    case 2:
        iVar2 = param_1[2];
        break;
    case 3:
    case 4:
        goto switchD_00014288_caseD_3;
    default:
        goto switchD_00014288_default;
    }
    FUN_0001383c(iVar2);
switchD_00014288_caseD_3:
    FUN_0001383c(param_1);
    return;
}

undefined4 FUN_000142f4(int *param_1)

{
    bool bVar1;
    int iVar2;
    uint uVar3;
    int *piVar4;
    uint uVar5;

    if ((param_1 != (int *)0x0) && (*param_1 == 1)) {
        uVar3 = param_1[3];
        if (uVar3 != 0) {
            uVar5 = 0;
            do {
                iVar2 = *(int *)(param_1[4] + uVar5 * 4);
                piVar4 = (int *)(iVar2 + 4);
                if ((iVar2 != 0) && (*(int *)(iVar2 + 4) != -1)) {
                    DataMemoryBarrier(0x1f);
                    do {
                        ExclusiveAccess(piVar4);
                        iVar2 = *piVar4;
                        bVar1 = (bool)hasExclusiveAccess(piVar4);
                    } while (!bVar1);
                    *piVar4 = iVar2 + -1;
                    if (iVar2 + -1 == 0) {
                        FUN_0001427c();
                    }
                    uVar3 = param_1[3];
                }
                uVar5 = uVar5 + 1;
            } while (uVar5 < uVar3);
        }
        param_1[3] = 0;
        return 0;
    }
    return 0xffffffff;
}

undefined4 FUN_00014344(int *param_1, uint param_2)

{
    bool bVar1;
    int iVar2;
    undefined4 uVar3;
    uint uVar4;
    int *piVar5;

    if (((param_1 == (int *)0x0) || (*param_1 != 1)) ||
        (uVar4 = param_1[3], uVar4 <= param_2)) {
        uVar3 = 0xffffffff;
    } else {
        iVar2 = *(int *)(param_1[4] + param_2 * 4);
        if ((iVar2 != 0) && (*(int *)(iVar2 + 4) != -1)) {
            piVar5 = (int *)(iVar2 + 4);
            DataMemoryBarrier(0x1f);
            do {
                ExclusiveAccess(piVar5);
                iVar2 = *piVar5;
                bVar1 = (bool)hasExclusiveAccess(piVar5);
            } while (!bVar1);
            *piVar5 = iVar2 + -1;
            if (iVar2 + -1 == 0) {
                FUN_0001427c();
                uVar4 = param_1[3];
            } else {
                uVar4 = param_1[3];
            }
        }
        uVar4 = uVar4 - 1;
        if (param_2 < uVar4) {
            memmove((void *)(param_1[4] + param_2 * 4),
                    (void *)(param_1[4] + (param_2 + 1) * 4),
                    (uVar4 - param_2) * 4);
            uVar4 = param_1[3] - 1;
        }
        uVar3 = 0;
        param_1[3] = uVar4;
    }
    return uVar3;
}

undefined4 FUN_000143bc(int *param_1, uint param_2, int *param_3)

{
    bool bVar1;
    void *__src;
    void *__dest;
    int iVar2;
    int *piVar3;

    if (param_3 != (int *)0x0) {
        if (((param_1 == (int *)0x0) || (*param_1 != 1)) ||
            (param_1 == param_3)) {
            if (param_3[1] == -1) {
                return 0xffffffff;
            }
            piVar3 = param_3 + 1;
            DataMemoryBarrier(0x1f);
            do {
                ExclusiveAccess(piVar3);
                iVar2 = *piVar3 + -1;
                bVar1 = (bool)hasExclusiveAccess(piVar3);
            } while (!bVar1);
            *piVar3 = iVar2;
        } else if ((uint)param_1[3] < param_2) {
            if (param_3[1] == -1) {
                return 0xffffffff;
            }
            piVar3 = param_3 + 1;
            DataMemoryBarrier(0x1f);
            do {
                ExclusiveAccess(piVar3);
                iVar2 = *piVar3 + -1;
                bVar1 = (bool)hasExclusiveAccess(piVar3);
            } while (!bVar1);
            *piVar3 = iVar2;
        } else {
            __src = (void *)FUN_00013d64(param_1, 1, 0);
            if (__src != (void *)0x0) {
                __dest = (void *)param_1[4];
                if (__dest == __src) {
                    memmove((void *)((int)__dest + (param_2 + 1) * 4),
                            (void *)((int)__dest + param_2 * 4),
                            (param_1[3] - param_2) * 4);
                } else {
                    memcpy(__dest, __src, param_2 * 4);
                    memcpy((void *)(param_1[4] + (param_2 + 1) * 4),
                           (void *)((int)__src + param_2 * 4),
                           (param_1[3] - param_2) * 4);
                    FUN_0001383c(__src);
                }
                iVar2 = param_1[3];
                *(int **)(param_1[4] + param_2 * 4) = param_3;
                param_1[3] = iVar2 + 1;
                return 0;
            }
            if (param_3[1] == -1) {
                return 0xffffffff;
            }
            piVar3 = param_3 + 1;
            DataMemoryBarrier(0x1f);
            do {
                ExclusiveAccess(piVar3);
                iVar2 = *piVar3 + -1;
                bVar1 = (bool)hasExclusiveAccess(piVar3);
            } while (!bVar1);
            *piVar3 = iVar2;
        }
        if (iVar2 == 0) {
            FUN_0001427c(param_3);
        }
    }
    return 0xffffffff;
}

undefined4 FUN_000144b0(int *param_1, int param_2, int *param_3)

{
    bool bVar1;
    int iVar2;
    int *piVar3;

    if (param_3 != (int *)0x0) {
        if (((param_1 == (int *)0x0 || param_2 == 0) || (*param_1 != 0)) ||
            (param_1 == param_3)) {
            if (param_3[1] == -1) {
                return 0xffffffff;
            }
            piVar3 = param_3 + 1;
            DataMemoryBarrier(0x1f);
            do {
                ExclusiveAccess(piVar3);
                iVar2 = *piVar3 + -1;
                bVar1 = (bool)hasExclusiveAccess(piVar3);
            } while (!bVar1);
            *piVar3 = iVar2;
        } else {
            iVar2 = FUN_00012468(param_1 + 2);
            if (iVar2 == 0) {
                return 0;
            }
            if (param_3[1] == -1) {
                return 0xffffffff;
            }
            piVar3 = param_3 + 1;
            DataMemoryBarrier(0x1f);
            do {
                ExclusiveAccess(piVar3);
                iVar2 = *piVar3 + -1;
                bVar1 = (bool)hasExclusiveAccess(piVar3);
            } while (!bVar1);
            *piVar3 = iVar2;
        }
        if (iVar2 == 0) {
            FUN_0001427c(param_3);
        }
    }
    return 0xffffffff;
}

undefined4 FUN_00014514(int *param_1, int *param_2)

{
    bool bVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int *piVar5;

    if ((((param_1 != (int *)0x0) && (*param_1 == 0)) &&
         (param_2 != (int *)0x0)) &&
        (*param_2 == 0)) {
        FUN_00013e80(param_2);
        iVar2 = FUN_00013ebc();
        while (true) {
            if (iVar2 == 0) {
                return 0;
            }
            iVar3 = FUN_00013ec4(iVar2 + -0x10);
            if (iVar3 == 0)
                break;
            iVar4 = FUN_00013e38(param_1, iVar2);
            if (iVar4 == 0) {
                piVar5 = (int *)(iVar3 + 4);
                if (*(int *)(iVar3 + 4) != -1) {
                    do {
                        ExclusiveAccess(piVar5);
                        bVar1 = (bool)hasExclusiveAccess(piVar5);
                    } while (!bVar1);
                    *piVar5 = *piVar5 + 1;
                    DataMemoryBarrier(0x1f);
                }
                FUN_000144b0(param_1, iVar2, iVar3);
            }
            FUN_00013ea8(param_2, iVar2 + -0x10);
            iVar2 = FUN_00013ebc();
        }
        return 0;
    }
    return 0xffffffff;
}

undefined4 FUN_000145a0(undefined4 param_1, char *param_2, int param_3)

{
    bool bVar1;
    size_t sVar2;
    int iVar3;
    undefined4 uVar4;
    int *piVar5;

    if (param_2 != (char *)0x0) {
        sVar2 = strlen(param_2);
        iVar3 = FUN_00013cd8(param_2, sVar2);
        if (iVar3 != 0) {
            uVar4 = FUN_000144b0(param_1, param_2, param_3);
            return uVar4;
        }
    }
    if ((param_3 != 0) && (*(int *)(param_3 + 4) != -1)) {
        piVar5 = (int *)(param_3 + 4);
        DataMemoryBarrier(0x1f);
        do {
            ExclusiveAccess(piVar5);
            iVar3 = *piVar5;
            bVar1 = (bool)hasExclusiveAccess(piVar5);
        } while (!bVar1);
        *piVar5 = iVar3 + -1;
        if (iVar3 + -1 == 0) {
            FUN_0001427c(param_3);
        }
    }
    return 0xffffffff;
}

undefined4 FUN_000145f4(int *param_1, int *param_2, undefined4 param_3)

{
    bool bVar1;
    int iVar2;
    int *piVar3;
    int *piVar4;
    int iVar5;
    undefined4 uVar6;
    undefined1 auStack_2c[16];

    if ((((param_1 == (int *)0x0) || (*param_1 != 0)) ||
         (param_2 == (int *)0x0)) ||
        ((*param_2 != 0 ||
          (iVar2 = FUN_00013db0(param_3, param_2, auStack_2c, 0xb),
           iVar2 != 0)))) {
        uVar6 = 0xffffffff;
    } else {
        FUN_00013e80(param_2);
        iVar2 = FUN_00013ebc();
        while (iVar2 != 0) {
            piVar3 = (int *)FUN_00013ec4(iVar2 + -0x10);
            if (piVar3 == (int *)0x0)
                break;
            piVar4 = (int *)FUN_00013e38(param_1, iVar2);
            if (((piVar4 == (int *)0x0) || (*piVar4 != 0)) || (*piVar3 != 0)) {
                piVar4 = piVar3 + 1;
                if (piVar3[1] != -1) {
                    do {
                        ExclusiveAccess(piVar4);
                        bVar1 = (bool)hasExclusiveAccess(piVar4);
                    } while (!bVar1);
                    *piVar4 = *piVar4 + 1;
                    DataMemoryBarrier(0x1f);
                }
                iVar5 = FUN_000144b0(param_1, iVar2, piVar3);
            } else {
                iVar5 = FUN_000145f4(piVar4, piVar3, param_3);
            }
            if (iVar5 != 0) {
                uVar6 = 0xffffffff;
                goto LAB_000146a0;
            }
            FUN_00013ea8(param_2, iVar2 + -0x10);
            iVar2 = FUN_00013ebc();
        }
        uVar6 = 0;
    LAB_000146a0:
        FUN_00012608(param_3, auStack_2c);
    }
    return uVar6;
}

undefined4 FUN_000146bc(undefined4 param_1, undefined4 param_2)

{
    int iVar1;
    undefined4 uVar2;
    undefined1 auStack_2c[32];

    iVar1 = FUN_00012408(auStack_2c);
    if (iVar1 == 0) {
        uVar2 = FUN_000145f4(param_1, param_2, auStack_2c);
        FUN_00012454(auStack_2c);
    } else {
        uVar2 = 0xffffffff;
    }
    return uVar2;
}

undefined4 FUN_000146ec(int *param_1, int *param_2)

{
    bool bVar1;
    int iVar2;
    int iVar3;
    int *piVar4;

    if ((((param_1 == (int *)0x0) || (*param_1 != 0)) ||
         (param_2 == (int *)0x0)) ||
        (*param_2 != 0)) {
        return 0xffffffff;
    }
    FUN_00013e80(param_2);
    iVar2 = FUN_00013ebc();
    while (true) {
        if (iVar2 == 0) {
            return 0;
        }
        iVar3 = FUN_00013ec4(iVar2 + -0x10);
        piVar4 = (int *)(iVar3 + 4);
        if (iVar3 == 0)
            break;
        if (*(int *)(iVar3 + 4) != -1) {
            do {
                ExclusiveAccess(piVar4);
                bVar1 = (bool)hasExclusiveAccess(piVar4);
            } while (!bVar1);
            *piVar4 = *piVar4 + 1;
            DataMemoryBarrier(0x1f);
        }
        iVar3 = FUN_000144b0(param_1, iVar2, iVar3);
        if (iVar3 != 0) {
            return 0xffffffff;
        }
        FUN_00013ea8(param_2, iVar2 + -0x10);
        iVar2 = FUN_00013ebc();
    }
    return 0;
}

undefined4 FUN_00014764(int *param_1, int *param_2)

{
    bool bVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int *piVar5;

    if ((((param_1 != (int *)0x0) && (*param_1 == 0)) &&
         (param_2 != (int *)0x0)) &&
        (*param_2 == 0)) {
        FUN_00013e80(param_2);
        iVar2 = FUN_00013ebc();
        while (true) {
            if (iVar2 == 0) {
                return 0;
            }
            iVar3 = FUN_00013ec4(iVar2 + -0x10);
            if (iVar3 == 0)
                break;
            iVar4 = FUN_00013e38(param_1, iVar2);
            piVar5 = (int *)(iVar3 + 4);
            if (iVar4 != 0) {
                if (*(int *)(iVar3 + 4) != -1) {
                    do {
                        ExclusiveAccess(piVar5);
                        bVar1 = (bool)hasExclusiveAccess(piVar5);
                    } while (!bVar1);
                    *piVar5 = *piVar5 + 1;
                    DataMemoryBarrier(0x1f);
                }
                FUN_000144b0(param_1, iVar2, iVar3);
            }
            FUN_00013ea8(param_2, iVar2 + -0x10);
            iVar2 = FUN_00013ebc();
        }
        return 0;
    }
    return 0xffffffff;
}

undefined4 FUN_0001483c(int *param_1, int *param_2, undefined4 param_3,
                        undefined4 param_4)

{
    bool bVar1;
    int iVar2;
    int *piVar3;

    if (param_2 != (int *)0x0) {
        if (((param_1 == (int *)0x0) || (*param_1 != 1)) ||
            (param_1 == param_2)) {
            if (param_2[1] == -1) {
                return 0xffffffff;
            }
            piVar3 = param_2 + 1;
            DataMemoryBarrier(0x1f);
            do {
                ExclusiveAccess(piVar3);
                iVar2 = *piVar3 + -1;
                bVar1 = (bool)hasExclusiveAccess(piVar3);
            } while (!bVar1);
            *piVar3 = iVar2;
        } else {
            iVar2 = FUN_00013d64(param_1, 1, 1, param_4, param_4);
            if (iVar2 != 0) {
                iVar2 = param_1[3];
                *(int **)(param_1[4] + iVar2 * 4) = param_2;
                param_1[3] = iVar2 + 1;
                return 0;
            }
            if (param_2[1] == -1) {
                return 0xffffffff;
            }
            piVar3 = param_2 + 1;
            DataMemoryBarrier(0x1f);
            do {
                ExclusiveAccess(piVar3);
                iVar2 = *piVar3 + -1;
                bVar1 = (bool)hasExclusiveAccess(piVar3);
            } while (!bVar1);
            *piVar3 = iVar2;
        }
        if (iVar2 == 0) {
            FUN_0001427c(param_2);
        }
    }
    return 0xffffffff;
}

undefined4 FUN_000148b0(int *param_1, uint param_2, int *param_3)

{
    bool bVar1;
    int iVar2;
    int *piVar3;
    int iVar4;

    if (param_3 != (int *)0x0) {
        if (((param_1 == (int *)0x0) || (*param_1 != 1)) ||
            (param_1 == param_3)) {
            if (param_3[1] == -1) {
                return 0xffffffff;
            }
            piVar3 = param_3 + 1;
            DataMemoryBarrier(0x1f);
            do {
                ExclusiveAccess(piVar3);
                iVar2 = *piVar3 + -1;
                bVar1 = (bool)hasExclusiveAccess(piVar3);
            } while (!bVar1);
            *piVar3 = iVar2;
        } else {
            if (param_2 < (uint)param_1[3]) {
                iVar4 = param_2 * 4;
                iVar2 = *(int *)(param_1[4] + param_2 * 4);
                piVar3 = (int *)(param_1[4] + iVar4);
                if ((iVar2 != 0) && (*(int *)(iVar2 + 4) != -1)) {
                    piVar3 = (int *)(iVar2 + 4);
                    DataMemoryBarrier(0x1f);
                    do {
                        ExclusiveAccess(piVar3);
                        iVar2 = *piVar3;
                        bVar1 = (bool)hasExclusiveAccess(piVar3);
                    } while (!bVar1);
                    *piVar3 = iVar2 + -1;
                    if (iVar2 + -1 == 0) {
                        FUN_0001427c();
                        piVar3 = (int *)(param_1[4] + iVar4);
                    } else {
                        piVar3 = (int *)(param_1[4] + iVar4);
                    }
                }
                *piVar3 = (int)param_3;
                return 0;
            }
            if (param_3[1] == -1) {
                return 0xffffffff;
            }
            piVar3 = param_3 + 1;
            DataMemoryBarrier(0x1f);
            do {
                ExclusiveAccess(piVar3);
                iVar2 = *piVar3 + -1;
                bVar1 = (bool)hasExclusiveAccess(piVar3);
            } while (!bVar1);
            *piVar3 = iVar2;
        }
        if (iVar2 == 0) {
            FUN_0001427c(param_3);
        }
    }
    return 0xffffffff;
}

uint FUN_00014958(int *param_1, int *param_2)

{
    uint uVar1;
    uint uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    int iVar5;
    int iVar6;

    if (param_1 != (int *)0x0 && param_2 != (int *)0x0) {
        iVar6 = *param_1;
        if (iVar6 != *param_2) {
            return 0;
        }
        if (param_1 == param_2) {
            return 1;
        }
        switch (iVar6) {
        case 0:
            if (param_1[2] == param_2[2]) {
                FUN_00013e80(param_1);
                iVar6 = FUN_00013ebc();
                while (true) {
                    if (iVar6 == 0) {
                        return 1;
                    }
                    iVar5 = FUN_00013ec4(iVar6 + -0x10);
                    if (iVar5 == 0)
                        break;
                    uVar3 = FUN_00013e38(param_2, iVar6);
                    iVar5 = FUN_00014958(iVar5, uVar3);
                    if (iVar5 == 0) {
                        return 0;
                    }
                    FUN_00013ea8(param_1, iVar6 + -0x10);
                    iVar6 = FUN_00013ebc();
                }
                return 1;
            }
            break;
        case 1:
            uVar1 = param_1[3];
            if (uVar1 == param_2[3]) {
                if (uVar1 == 0) {
                    return 1;
                }
                iVar5 = 1;
                uVar2 = 0;
                while (true) {
                    if ((iVar5 == 1) && (uVar2 < (uint)param_1[3])) {
                        uVar3 = *(undefined4 *)(param_1[4] + uVar2 * 4);
                    } else {
                        uVar3 = 0;
                    }
                    if ((iVar6 == 1) && (uVar2 < (uint)param_2[3])) {
                        uVar4 = *(undefined4 *)(param_2[4] + uVar2 * 4);
                    } else {
                        uVar4 = 0;
                    }
                    iVar6 = FUN_00014958(uVar3, uVar4);
                    if (iVar6 == 0)
                        break;
                    uVar2 = uVar2 + 1;
                    if (uVar2 == uVar1) {
                        return 1;
                    }
                    iVar5 = *param_1;
                    iVar6 = *param_2;
                }
                return 0;
            }
            break;
        case 2:
            if (param_1[3] == param_2[3]) {
                uVar1 =
                    memcmp((void *)param_1[2], (void *)param_2[2], param_1[3]);
                uVar2 = 1 - uVar1;
                if (1 < uVar1) {
                    uVar2 = 0;
                }
                return uVar2;
            }
            break;
        case 3:
            return (uint)(param_1[3] == param_2[3] && param_1[2] == param_2[2]);
        case 4:
            return (uint)(*(double *)(param_1 + 2) == *(double *)(param_2 + 2));
        }
    }
    return 0;
}

int *FUN_00014a94(int *param_1, undefined4 param_2, undefined4 param_3,
                  undefined4 param_4)

{
    bool bVar1;
    int iVar2;
    int *piVar3;
    int iVar4;
    int *piVar5;
    uint uVar6;
    uint uVar7;

    piVar3 = param_1;
    if (param_1 != (int *)0x0) {
        switch (*param_1) {
        case 0:
            piVar3 = (int *)FUN_00013dec();
            if (piVar3 != (int *)0x0) {
                FUN_00013e80(param_1);
                iVar4 = FUN_00013ebc();
                while (iVar4 != 0) {
                    iVar2 = FUN_00013ec4(iVar4 + -0x10);
                    piVar5 = (int *)(iVar2 + 4);
                    if (iVar2 == 0) {
                        return piVar3;
                    }
                    if (*(int *)(iVar2 + 4) != -1) {
                        do {
                            ExclusiveAccess(piVar5);
                            bVar1 = (bool)hasExclusiveAccess(piVar5);
                        } while (!bVar1);
                        *piVar5 = *piVar5 + 1;
                        DataMemoryBarrier(0x1f);
                    }
                    FUN_000144b0(piVar3, iVar4);
                    FUN_00013ea8(param_1, iVar4 + -0x10);
                    iVar4 = FUN_00013ebc();
                }
            }
            return piVar3;
        case 1:
            piVar3 = (int *)FUN_00013ed4();
            if (((piVar3 != (int *)0x0) && (*param_1 == 1)) &&
                (uVar6 = param_1[3], uVar6 != 0)) {
                uVar7 = 0;
                do {
                    iVar4 = 0;
                    if (uVar7 < uVar6) {
                        iVar4 = *(int *)(param_1[4] + uVar7 * 4);
                        piVar5 = (int *)(iVar4 + 4);
                        if ((iVar4 != 0) && (*(int *)(iVar4 + 4) != -1)) {
                            do {
                                ExclusiveAccess(piVar5);
                                bVar1 = (bool)hasExclusiveAccess(piVar5);
                            } while (!bVar1);
                            *piVar5 = *piVar5 + 1;
                            DataMemoryBarrier(0x1f);
                        }
                    }
                    FUN_0001483c(piVar3, iVar4);
                    if (*param_1 != 1) {
                        return piVar3;
                    }
                    uVar6 = param_1[3];
                    uVar7 = uVar7 + 1;
                } while (uVar7 < uVar6);
            }
            break;
        case 2:
            piVar3 =
                (int *)FUN_00013fc8(param_1[2], param_1[3], param_3, param_4);
            return piVar3;
        case 3:
            piVar3 =
                (int *)FUN_00014150(param_1[2], param_1[3], param_3, param_4);
            return piVar3;
        case 4:
            piVar3 = (int *)FUN_0001419c((int)*(undefined8 *)(param_1 + 2));
            return piVar3;
        case 5:
        case 6:
        case 7:
            break;
        default:
            return (int *)0x0;
        }
    }
    return piVar3;
}

int *FUN_00014b90(int *param_1, undefined4 param_2)

{
    bool bVar1;
    int iVar2;
    int *piVar3;
    undefined4 uVar4;
    int iVar5;
    undefined4 uVar6;
    int *piVar7;
    uint uVar8;
    undefined1 auStack_2c[16];

    if (param_1 == (int *)0x0) {
        return (int *)0x0;
    }
    switch (*param_1) {
    case 0:
        iVar2 = FUN_00013db0(param_2, param_1, auStack_2c, 0xb);
        if (iVar2 == 0) {
            piVar3 = (int *)FUN_00013dec();
            if (piVar3 == (int *)0x0) {
            LAB_00014c76:
                piVar3 = (int *)0x0;
            } else {
                iVar2 = FUN_00013e80(param_1);
                if (iVar2 != 0) {
                LAB_00014c2a:
                    uVar6 = FUN_00013ebc(iVar2);
                    uVar4 = FUN_00013ec4(iVar2);
                    uVar4 = FUN_00014b90(uVar4, param_2);
                    iVar5 = FUN_000144b0(piVar3, uVar6, uVar4);
                    if (iVar5 == 0)
                        goto LAB_00014c1e;
                    if (piVar3[1] != -1) {
                        piVar7 = piVar3 + 1;
                        DataMemoryBarrier(0x1f);
                        do {
                            ExclusiveAccess(piVar7);
                            iVar2 = *piVar7;
                            bVar1 = (bool)hasExclusiveAccess(piVar7);
                        } while (!bVar1);
                        *piVar7 = iVar2 + -1;
                        if (iVar2 + -1 == 0) {
                            FUN_0001427c(piVar3);
                            piVar3 = (int *)0x0;
                            goto LAB_00014c78;
                        }
                    }
                    goto LAB_00014c76;
                }
            }
        LAB_00014c78:
            FUN_00012608(param_2, auStack_2c);
            return piVar3;
        }
    default:
    switchD_00014ba2_default:
        param_1 = (int *)0x0;
        break;
    case 1:
        iVar2 = FUN_00013db0(param_2, param_1, auStack_2c, 0xb);
        if (iVar2 == 0) {
            piVar3 = (int *)FUN_00013ed4();
            if (piVar3 != (int *)0x0) {
                if ((*param_1 != 1) || (param_1[3] == 0))
                    goto LAB_00014bd2;
                uVar6 = 0;
                uVar8 = 0;
                if (param_1[3] != 0)
                    goto LAB_00014cd6;
                while (true) {
                    uVar6 = FUN_00014b90(uVar6, param_2);
                    iVar2 = FUN_0001483c(piVar3, uVar6);
                    if (iVar2 != 0)
                        break;
                    if (*param_1 != 1)
                        goto LAB_00014bd2;
                    uVar8 = uVar8 + 1;
                    if ((uint)param_1[3] <= uVar8)
                        goto LAB_00014bd2;
                    uVar6 = 0;
                    if (uVar8 < (uint)param_1[3]) {
                    LAB_00014cd6:
                        uVar6 = *(undefined4 *)(param_1[4] + uVar8 * 4);
                    }
                }
                if (piVar3[1] != -1) {
                    piVar7 = piVar3 + 1;
                    DataMemoryBarrier(0x1f);
                    do {
                        ExclusiveAccess(piVar7);
                        iVar2 = *piVar7;
                        bVar1 = (bool)hasExclusiveAccess(piVar7);
                    } while (!bVar1);
                    *piVar7 = iVar2 + -1;
                    if (iVar2 + -1 == 0) {
                        FUN_0001427c(piVar3);
                        piVar3 = (int *)0x0;
                        goto LAB_00014bd2;
                    }
                }
            }
            piVar3 = (int *)0x0;
        LAB_00014bd2:
            FUN_00012608(param_2, auStack_2c);
            return piVar3;
        }
        goto switchD_00014ba2_default;
    case 2:
        param_1 = (int *)FUN_00013fc8(param_1[2], param_1[3]);
        break;
    case 3:
        param_1 = (int *)FUN_00014150(param_1[2], param_1[3]);
        break;
    case 4:
        param_1 = (int *)FUN_0001419c((int)*(undefined8 *)(param_1 + 2));
        break;
    case 5:
    case 6:
    case 7:
        break;
    }
    return param_1;
LAB_00014c1e:
    iVar2 = FUN_00013ea8(param_1, iVar2);
    if (iVar2 == 0)
        goto LAB_00014c78;
    goto LAB_00014c2a;
}

undefined4 FUN_00014d08(undefined4 param_1)

{
    int iVar1;
    undefined4 uVar2;
    undefined1 auStack_24[28];

    iVar1 = FUN_00012408(auStack_24);
    if (iVar1 == 0) {
        uVar2 = FUN_00014b90(param_1, auStack_24);
        FUN_00012454(auStack_24);
    } else {
        uVar2 = 0;
    }
    return uVar2;
}

void FUN_00014d80(undefined4 *param_1, char *param_2)

{
    int iVar1;
    size_t sVar2;

    if (param_1 != (undefined4 *)0x0) {
        *(undefined1 *)(param_1 + 0x17) = 0;
        param_1[2] = 0;
        *param_1 = 0xffffffff;
        param_1[1] = 0xffffffff;
        if (param_2 != (char *)0x0) {
            if (param_1 == (undefined4 *)0x0 || param_2 == (char *)0x0) {
                return;
            }
            sVar2 = strlen(param_2);
            if (sVar2 < 0x50) {
                iVar1 = 0xc;
                sVar2 = sVar2 + 1;
            } else {
                param_2 = param_2 + (sVar2 - 0x4c);
                iVar1 = 0xf;
                sVar2 = 0x4d;
                *(undefined2 *)(param_1 + 3) = 0x2e2e;
                *(undefined1 *)((int)param_1 + 0xe) = 0x2e;
            }
            strncpy((char *)((int)param_1 + iVar1), param_2, sVar2);
            return;
        }
        *(undefined1 *)(param_1 + 3) = 0;
    }
    return;
}

void FUN_00014da8(undefined4 *param_1, undefined4 param_2, undefined4 param_3,
                  undefined4 param_4, undefined1 param_5, char *param_6,
                  __gnuc_va_list param_7)

{
    if ((param_1 != (undefined4 *)0x0) && (*(char *)(param_1 + 0x17) == '\0')) {
        *param_1 = param_2;
        param_1[1] = param_3;
        param_1[2] = param_4;
        vsnprintf((char *)(param_1 + 0x17), 0x9f, param_6, param_7);
        *(undefined1 *)((int)param_1 + 0xfa) = 0;
        *(undefined1 *)((int)param_1 + 0xfb) = param_5;
    }
    return;
}

void FUN_00014dd4(void)

{
    FUN_00014da8();
    return;
}

ulonglong FUN_00014df0(uint param_1, uint param_2)

{
    uint uVar1;
    ulonglong uVar2;

    if (param_2 - 1 == 0) {
        return CONCAT44(param_2, param_1);
    }
    if (param_2 == 0) {
        uVar1 = raise(8);
        return (ulonglong)uVar1;
    }
    if (param_1 <= param_2) {
        return CONCAT44(param_2, (uint)(param_1 == param_2));
    }
    if ((param_2 & param_2 - 1) == 0) {
        return CONCAT44(param_2, param_1 >> (0x1fU - LZCOUNT(param_2) & 0xff));
    }
    /* WARNING: Could not recover jumptable at 0x00014e20. Too many branches */
    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(&UNK_00014e28 +
                       (0x1f - (LZCOUNT(param_2) - LZCOUNT(param_1))) * 0x10))(
        param_1, param_2, 0);
    return uVar2;
}

void FUN_0001504c(undefined4 param_1, int param_2)

{
    if (param_2 != 0) {
        FUN_00014df0();
        return;
    }
    raise(8);
    return;
}

void FUN_000153ec(undefined4 param_1, undefined4 param_2, undefined4 param_3,
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
