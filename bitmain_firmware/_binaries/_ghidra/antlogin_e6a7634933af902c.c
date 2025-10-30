// Decompiled: antlogin_e6a7634933af902c

void _DT_INIT(void)

{
    FUN_00010324();
    return;
}

void entry(undefined4 param_1)

{
    undefined4 in_stack_00000000;

    __libc_start_main(FUN_000103d4, in_stack_00000000, &stack0x00000004,
                      0x1041d, &DAT_0001045d, param_1);
    /* WARNING: Subroutine does not return */
    abort();
}

/* WARNING: Removing unreachable block (ram,0x00010338) */

void FUN_00010324(void)

{
    __gmon_start__();
    return;
}

/* WARNING: Removing unreachable block (ram,0x00010358) */
/* WARNING: Removing unreachable block (ram,0x00010362) */

void FUN_00010348(void)

{
    return;
}

void _FINI_0(void)

{
    if (DAT_000205a8 == '\0') {
        FUN_00010348();
        DAT_000205a8 = '\x01';
    }
    return;
}

/* WARNING: Removing unreachable block (ram,0x00010388) */
/* WARNING: Removing unreachable block (ram,0x000103d0) */
/* WARNING: Removing unreachable block (ram,0x00010392) */

void _INIT_0(void)

{
    return;
}

undefined4 FUN_000103d4(void)

{
    execlp("login", "login", &DAT_00010474, &DAT_0001046c, 0);
    return 0;
}

void FUN_0001041c(undefined4 param_1, undefined4 param_2, undefined4 param_3,
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
