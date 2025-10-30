// Decompiled: monitor-recobtn_dab6be8778d64916

void _DT_INIT(void)

{
    FUN_000108b0();
    return;
}

void FUN_000106a0(int param_1, int param_2)

{
    int iVar1;
    __pid_t _Var2;
    timeval local_38;
    timeval local_30;

    printf("monitor-recobtn compile %s--%s\n", "Feb  5 2025", "17:22:12");
    do {
        iVar1 = FUN_000109c0(0);
        while (iVar1 == 0) {
            gettimeofday(&local_38, (__timezone_ptr_t)0x0);
            FUN_00010940(1);
            puts("Detect recovery button push off");
        LAB_00010714:
            iVar1 = FUN_000109c0(0);
            if (iVar1 != 1) {
                while (gettimeofday(&local_30, (__timezone_ptr_t)0x0),
                       3000000 <
                           ((local_30.tv_sec - local_38.tv_sec) * 1000000 +
                            local_30.tv_usec) -
                               local_38.tv_usec) {
                    puts("recovery button off over 3S, wait push on");
                    while (iVar1 = FUN_000109c0(0), iVar1 == 0) {
                        FUN_00010940(1);
                        sleep(1);
                        FUN_00010940(0);
                        sleep(1);
                    }
                    puts("recovery button on");
                    _Var2 = fork();
                    if (_Var2 < 0) {
                        puts("error occured.");
                        goto LAB_00010714;
                    }
                    if (_Var2 == 0) {
                        FUN_00010940();
                        if (param_1 < 2) {
                            sleep(1);
                        } else {
                            execvp(*(char **)(param_2 + 4),
                                   (char **)(param_2 + 4));
                        }
                        /* WARNING: Subroutine does not return */
                        exit(0);
                    }
                    wait((void *)0x0);
                    iVar1 = 100;
                    puts("child complete");
                    do {
                        FUN_00010940(1);
                        usleep(100000);
                        FUN_00010940(0);
                        usleep(100000);
                        iVar1 = iVar1 + -1;
                    } while (iVar1 != 0);
                    puts("recovery factory complete");
                    iVar1 = FUN_000109c0(0);
                    if (iVar1 == 1)
                        goto LAB_00010814;
                }
                usleep(500000);
                goto LAB_00010714;
            }
        LAB_00010814:
            FUN_00010940(0);
            iVar1 = FUN_000109c0(0);
        }
        sleep(1);
    } while (true);
}

void entry(undefined4 param_1)

{
    undefined4 in_stack_00000000;

    __libc_start_main(FUN_000106a0, in_stack_00000000, &stack0x00000004,
                      0x10af9, &DAT_00010b35, param_1);
    /* WARNING: Subroutine does not return */
    abort();
}

/* WARNING: Removing unreachable block (ram,0x000108c4) */

void FUN_000108b0(void)

{
    __gmon_start__();
    return;
}

/* WARNING: Removing unreachable block (ram,0x000108e8) */
/* WARNING: Removing unreachable block (ram,0x000108f2) */

void FUN_000108d4(void)

{
    return;
}

/* WARNING: Removing unreachable block (ram,0x00010914) */
/* WARNING: Removing unreachable block (ram,0x0001091e) */

void FUN_000108f8(void)

{
    return;
}

void _FINI_0(void)

{
    if (DAT_0002106c == '\0') {
        FUN_000108d4();
        DAT_0002106c = '\x01';
    }
    return;
}

void FUN_00010940(int param_1)

{
    char acStack_50[68];

    if (param_1 != 0) {
        param_1 = 1;
    }
    memset(acStack_50, 0, 0x40);
    sprintf(acStack_50, "echo %d > /sys/class/gpio/gpio%d/value", param_1,
            0x3ad);
    system(acStack_50);
    sprintf(acStack_50, "echo %d > /sys/class/gpio/gpio%d/value", param_1,
            0x3ae);
    system(acStack_50);
    return;
}

bool FUN_000109a8(char *param_1)

{
    int iVar1;

    iVar1 = access(param_1, 0);
    return iVar1 == 0;
}

int FUN_000109c0(void)

{
    int iVar1;
    FILE *pFVar2;
    size_t sVar3;
    int local_4c;
    char acStack_48[64];

    memset(acStack_48, 0, 0x40);
    sprintf(acStack_48, "/sys/class/gpio/gpio%d", 0x399);
    iVar1 = access(acStack_48, 0);
    if (iVar1 == 0) {
        sprintf(acStack_48, "/sys/class/gpio/gpio%d/value", 0x399);
        pFVar2 = fopen64(acStack_48, "r");
        if (pFVar2 == (FILE *)0x0) {
            puts("Open read recovery button failure");
            local_4c = -1;
        } else {
            __isoc99_fscanf(pFVar2, "%d", &local_4c);
            fclose(pFVar2);
            if (local_4c != 0) {
                local_4c = 1;
            }
        }
        return local_4c;
    }
    pFVar2 = fopen64("/sys/class/gpio/export", "w");
    if (pFVar2 != (FILE *)0x0) {
        sprintf(acStack_48, "%d", 0x399);
        sVar3 = strlen(acStack_48);
        sVar3 = fwrite(acStack_48, sVar3, 1, pFVar2);
        if (sVar3 != 1) {
            puts("File Write Error!");
        }
        fclose(pFVar2);
        return -1;
    }
    puts("Open read gpio/export");
    return -1;
}

void FUN_00010af8(undefined4 param_1, undefined4 param_2, undefined4 param_3,
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
