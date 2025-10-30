// Decompiled: monitor-recobtn_16a76c95b6bf0b83

void _DT_INIT(void)

{
    FUN_00010888();
    return;
}

void FUN_00010680(int param_1, int param_2)

{
    int iVar1;
    __pid_t _Var2;
    timeval local_28;
    timeval local_20;

    printf("monitor-recobtn compile %s--%s\n", "Feb  5 2025", "17:07:52");
    do {
        iVar1 = FUN_000109b8(0);
        while (iVar1 == 0) {
            gettimeofday(&local_28, (__timezone_ptr_t)0x0);
            FUN_00010938(1);
            puts("Detect recovery button push off");
        LAB_000106e8:
            iVar1 = FUN_000109b8(0);
            if (iVar1 != 1) {
                while (gettimeofday(&local_20, (__timezone_ptr_t)0x0),
                       3000000 <
                           ((local_20.tv_sec - local_28.tv_sec) * 1000000 +
                            local_20.tv_usec) -
                               local_28.tv_usec) {
                    puts("recovery button off over 3S, wait push on");
                    while (iVar1 = FUN_000109b8(0), iVar1 == 0) {
                        FUN_00010938(1);
                        sleep(1);
                        FUN_00010938(0);
                        sleep(1);
                    }
                    puts("recovery button on");
                    _Var2 = fork();
                    if (_Var2 < 0) {
                        puts("error occured.");
                        goto LAB_000106e8;
                    }
                    if (_Var2 == 0) {
                        FUN_00010938();
                        if (param_1 < 2) {
                            sleep(1);
                        } else {
                            execvp(*(char **)(param_2 + 4),
                                   (char **)(param_2 + 4));
                        }
                        /* WARNING: Subroutine does not return */
                        exit(0);
                    }
                    iVar1 = 100;
                    wait((void *)0x0);
                    puts("child complete");
                    do {
                        FUN_00010938(1);
                        usleep(100000);
                        FUN_00010938(0);
                        usleep(100000);
                        iVar1 = iVar1 + -1;
                    } while (iVar1 != 0);
                    puts("recovery factory complete");
                    iVar1 = FUN_000109b8(0);
                    if (iVar1 == 1)
                        goto LAB_000107e8;
                }
                usleep(500000);
                goto LAB_000106e8;
            }
        LAB_000107e8:
            FUN_00010938(0);
            iVar1 = FUN_000109b8(0);
        }
        sleep(1);
    } while (true);
}

void entry(undefined4 param_1)

{
    undefined4 in_stack_00000000;

    __libc_start_main(FUN_00010680, in_stack_00000000, &stack0x00000004,
                      0x10af1, &DAT_00010b31, param_1);
    /* WARNING: Subroutine does not return */
    abort();
}

/* WARNING: Removing unreachable block (ram,0x0001089c) */

void FUN_00010888(void)

{
    __gmon_start__();
    return;
}

/* WARNING: Removing unreachable block (ram,0x000108bc) */
/* WARNING: Removing unreachable block (ram,0x000108c6) */

void FUN_000108ac(void)

{
    return;
}

void _FINI_0(void)

{
    if (DAT_00020e50 == '\0') {
        FUN_000108ac();
        DAT_00020e50 = '\x01';
    }
    return;
}

/* WARNING: Removing unreachable block (ram,0x000108ec) */
/* WARNING: Removing unreachable block (ram,0x00010934) */
/* WARNING: Removing unreachable block (ram,0x000108f6) */

void _INIT_0(void)

{
    return;
}

void FUN_00010938(int param_1)

{
    char acStack_50[68];

    if (param_1 != 0) {
        param_1 = 1;
    }
    memset(acStack_50, 0, 0x40);
    sprintf(acStack_50, "echo %d > /sys/class/gpio/gpio%d/value", param_1,
            0x1b2);
    system(acStack_50);
    sprintf(acStack_50, "echo %d > /sys/class/gpio/gpio%d/value", param_1,
            0x1b3);
    system(acStack_50);
    return;
}

bool FUN_000109a0(char *param_1)

{
    int iVar1;

    iVar1 = access(param_1, 0);
    return iVar1 == 0;
}

int FUN_000109b8(void)

{
    int iVar1;
    FILE *pFVar2;
    size_t sVar3;
    int local_4c;
    char acStack_48[64];

    memset(acStack_48, 0, 0x40);
    sprintf(acStack_48, "/sys/class/gpio/gpio%d", 0x1bf);
    iVar1 = access(acStack_48, 0);
    if (iVar1 != 0) {
        pFVar2 = fopen64("/sys/class/gpio/export", "w");
        if (pFVar2 == (FILE *)0x0) {
            puts("Open read gpio/export");
        } else {
            sprintf(acStack_48, "%d", 0x1bf);
            sVar3 = strlen(acStack_48);
            sVar3 = fwrite(acStack_48, sVar3, 1, pFVar2);
            if (sVar3 != 1) {
                puts("File Write Error!");
            }
            fclose(pFVar2);
        }
        return -1;
    }
    sprintf(acStack_48, "/sys/class/gpio/gpio%d/value", 0x1bf);
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
    return -1;
}

void FUN_00010af0(undefined4 param_1, undefined4 param_2, undefined4 param_3,
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
