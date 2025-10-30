// Decompiled: antlogin_1511556bd301af36

void _DT_INIT(void)

{
    FUN_00010380();
    return;
}

void entry(undefined4 param_1)

{
    undefined4 in_stack_00000000;

    __libc_start_main(&DAT_00010314, in_stack_00000000, &stack0x00000004,
                      0x10411, &DAT_0001044d, param_1);
    /* WARNING: Subroutine does not return */
    abort();
}

/* WARNING: Removing unreachable block (ram,0x00010394) */

void FUN_00010380(void)

{
    __gmon_start__();
    return;
}

/* WARNING: Removing unreachable block (ram,0x000103b8) */
/* WARNING: Removing unreachable block (ram,0x000103c2) */

void FUN_000103a4(void)

{
    return;
}

/* WARNING: Removing unreachable block (ram,0x000103e4) */
/* WARNING: Removing unreachable block (ram,0x000103ee) */

void FUN_000103c8(void)

{
    return;
}

void _FINI_0(void)

{
    if (DAT_00021028 == '\0') {
        FUN_000103a4();
        DAT_00021028 = '\x01';
    }
    return;
}

void FUN_00010410(undefined4 param_1, undefined4 param_2, undefined4 param_3,
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
