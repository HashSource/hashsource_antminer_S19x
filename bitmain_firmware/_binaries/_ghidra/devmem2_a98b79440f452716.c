// Decompiled: devmem2_a98b79440f452716

void _DT_INIT(void)

{
    FUN_00010950();
    return;
}

void entry(undefined4 param_1)

{
    undefined4 in_stack_00000000;

    __libc_start_main(&DAT_000105f0, in_stack_00000000, &stack0x00000004,
                      0x109e1, &DAT_00010a1d, param_1);
    /* WARNING: Subroutine does not return */
    abort();
}

/* WARNING: Removing unreachable block (ram,0x00010964) */

void FUN_00010950(void)

{
    __gmon_start__();
    return;
}

/* WARNING: Removing unreachable block (ram,0x00010988) */
/* WARNING: Removing unreachable block (ram,0x00010992) */

void FUN_00010974(void)

{
    return;
}

/* WARNING: Removing unreachable block (ram,0x000109b4) */
/* WARNING: Removing unreachable block (ram,0x000109be) */

void FUN_00010998(void)

{
    return;
}

void _FINI_0(void)

{
    if (DAT_00021060 == '\0') {
        FUN_00010974();
        DAT_00021060 = '\x01';
    }
    return;
}

void FUN_000109e0(undefined4 param_1, undefined4 param_2, undefined4 param_3,
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
