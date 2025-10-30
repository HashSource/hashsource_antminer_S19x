// Decompiled: monitor-recobtn_5af9289bf88b3aa8

void _DT_INIT(void)

{
    FUN_00010894();
    return;
}

void FUN_00010614(int param_1, int param_2)

{
    int iVar1;
    __pid_t _Var2;
    timeval local_38;
    timeval local_30;

    printf("monitor-recobtn compile %s--%s\n", "Jan 14 2020", "18:22:32");
    do {
        iVar1 = FUN_0001097c(0);
        while (iVar1 == 0) {
            gettimeofday(&local_38, (__timezone_ptr_t)0x0);
            system("echo low >/sys/class/gpio/gpio941/direction");
            system("echo low >/sys/class/gpio/gpio942/direction");
            puts("Detect recovery button push off");
        LAB_0001069c:
            iVar1 = FUN_0001097c(0);
            if (iVar1 != 1) {
                while (gettimeofday(&local_30, (__timezone_ptr_t)0x0),
                       3000000 <
                           ((local_30.tv_sec - local_38.tv_sec) * 1000000 +
                            local_30.tv_usec) -
                               local_38.tv_usec) {
                    puts("recovery button off over 3S, wait push on");
                    while (iVar1 = FUN_0001097c(0), iVar1 == 0) {
                        system("echo low >/sys/class/gpio/gpio941/direction");
                        system("echo low >/sys/class/gpio/gpio942/direction");
                        sleep(1);
                        system("echo high >/sys/class/gpio/gpio941/direction");
                        system("echo high >/sys/class/gpio/gpio942/direction");
                        sleep(1);
                    }
                    puts("recovery button on");
                    _Var2 = fork();
                    if (_Var2 < 0) {
                        puts("error occured.");
                        goto LAB_0001069c;
                    }
                    if (_Var2 == 0) {
                        system("echo high >/sys/class/gpio/gpio941/direction");
                        system("echo high >/sys/class/gpio/gpio942/direction");
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
                        system("echo low >/sys/class/gpio/gpio941/direction");
                        system("echo low >/sys/class/gpio/gpio942/direction");
                        usleep(100000);
                        system("echo high >/sys/class/gpio/gpio941/direction");
                        system("echo high >/sys/class/gpio/gpio942/direction");
                        usleep(100000);
                        iVar1 = iVar1 + -1;
                    } while (iVar1 != 0);
                    puts("recovery factory complete");
                    iVar1 = FUN_0001097c(0);
                    if (iVar1 == 1)
                        goto LAB_000107d0;
                }
                usleep(500000);
                goto LAB_0001069c;
            }
        LAB_000107d0:
            system("echo high >/sys/class/gpio/gpio941/direction");
            system("echo high >/sys/class/gpio/gpio942/direction");
            iVar1 = FUN_0001097c(0);
        }
        sleep(1);
    } while (true);
}

void entry(undefined4 param_1)

{
    undefined4 in_stack_00000000;

    __libc_start_main(FUN_00010614, in_stack_00000000, &stack0x00000004,
                      0x10a6d, &DAT_00010aa9, param_1);
    /* WARNING: Subroutine does not return */
    abort();
}

/* WARNING: Removing unreachable block (ram,0x000108a8) */

void FUN_00010894(void)

{
    __gmon_start__();
    return;
}

/* WARNING: Removing unreachable block (ram,0x000108cc) */
/* WARNING: Removing unreachable block (ram,0x000108d6) */

void FUN_000108b8(void)

{
    return;
}

/* WARNING: Removing unreachable block (ram,0x000108f8) */
/* WARNING: Removing unreachable block (ram,0x00010902) */

void FUN_000108dc(void)

{
    return;
}

void _FINI_0(void)

{
    if (DAT_00021060 == '\0') {
        FUN_000108b8();
        DAT_00021060 = '\x01';
    }
    return;
}

int FUN_0001097c(void)

{
    int iVar1;
    FILE *pFVar2;
    size_t sVar3;
    int local_c;

    iVar1 = access("/sys/class/gpio/gpio921", 0);
    if (iVar1 == 0) {
        pFVar2 = fopen64("/sys/class/gpio/gpio921/value", "r");
        if (pFVar2 == (FILE *)0x0) {
            puts("Open read recovery button failure");
            local_c = -1;
        } else {
            __isoc99_fscanf(pFVar2, &DAT_00010c18, &local_c);
            fclose(pFVar2);
            if (local_c != 0) {
                local_c = 1;
            }
        }
        return local_c;
    }
    pFVar2 = fopen64("/sys/class/gpio/export", "w");
    if (pFVar2 != (FILE *)0x0) {
        sVar3 = fwrite("921", 3, 1, pFVar2);
        if (sVar3 != 1) {
            puts("File Write Error!");
        }
        fclose(pFVar2);
        return -1;
    }
    puts("Open read gpio/export");
    return -1;
}

void FUN_00010a6c(undefined4 param_1, undefined4 param_2, undefined4 param_3,
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
