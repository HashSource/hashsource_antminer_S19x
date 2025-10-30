// Decompiled: id2mac_ab6d00421bd97cb1

void _DT_INIT(void)

{
    FUN_00010498();
    return;
}

undefined4 FUN_00010438(void)

{
    char acStack_44[20];
    undefined1 auStack_30[44];

    FUN_000106c8(auStack_30);
    FUN_000105b0(auStack_30, acStack_44);
    puts(acStack_44);
    return 0;
}

void entry(undefined4 param_1)

{
    undefined4 in_stack_00000000;

    __libc_start_main(FUN_00010438, in_stack_00000000, &stack0x00000004,
                      0x108b1, &DAT_000108ed, param_1);
    /* WARNING: Subroutine does not return */
    abort();
}

/* WARNING: Removing unreachable block (ram,0x000104ac) */

void FUN_00010498(void)

{
    __gmon_start__();
    return;
}

/* WARNING: Removing unreachable block (ram,0x000104d0) */
/* WARNING: Removing unreachable block (ram,0x000104da) */

void FUN_000104bc(void)

{
    return;
}

/* WARNING: Removing unreachable block (ram,0x000104fc) */
/* WARNING: Removing unreachable block (ram,0x00010506) */

void FUN_000104e0(void)

{
    return;
}

void _FINI_0(void)

{
    if (DAT_00021440 == '\0') {
        FUN_000104bc();
        DAT_00021440 = '\x01';
    }
    return;
}

void FUN_000105b0(byte *param_1, char *param_2)

{
    char *pcVar1;
    size_t sVar2;
    uint uVar3;
    uint uVar4;
    undefined4 uVar5;
    uint uVar6;
    undefined4 uVar7;
    uint uVar8;
    undefined4 uVar9;
    byte *pbVar10;
    uint uVar11;
    byte *pbVar12;
    uint uVar13;

    pcVar1 = getenv("CPUID");
    if (pcVar1 == (char *)0x0) {
        sVar2 = strlen((char *)param_1);
    } else {
        uVar5 = *(undefined4 *)(pcVar1 + 4);
        uVar7 = *(undefined4 *)(pcVar1 + 8);
        uVar9 = *(undefined4 *)(pcVar1 + 0xc);
        *(undefined4 *)param_1 = *(undefined4 *)pcVar1;
        *(undefined4 *)(param_1 + 4) = uVar5;
        *(undefined4 *)(param_1 + 8) = uVar7;
        *(undefined4 *)(param_1 + 0xc) = uVar9;
        sVar2 = strlen((char *)param_1);
    }
    if (sVar2 == 0) {
        uVar3 = 0xff;
        uVar6 = 0;
        uVar8 = 0;
        uVar11 = uVar3;
        uVar13 = uVar3;
        uVar4 = uVar3;
    } else {
        uVar6 = 0;
        pbVar10 = param_1;
        do {
            pbVar12 = pbVar10 + 1;
            uVar6 =
                *(uint *)(&DAT_00021040 + ((uint)*pbVar10 ^ uVar6 >> 8) * 4) &
                    0xffff ^
                (uVar6 & 0xff) << 8;
            pbVar10 = pbVar12;
        } while (pbVar12 != param_1 + sVar2);
        uVar4 = 0xffffffff;
        pbVar10 = param_1;
        do {
            pbVar12 = pbVar10 + 1;
            uVar4 = *(uint *)(&DAT_000108fc +
                              ((uint)*pbVar10 ^ uVar4 >> 0x18) * 4) ^
                    uVar4 << 8;
            pbVar10 = pbVar12;
        } while (pbVar12 != param_1 + sVar2);
        uVar3 = uVar4 >> 0x18;
        uVar8 = uVar6 >> 8;
        uVar6 = uVar6 & 0xfe;
        uVar11 = (uVar4 << 0x10) >> 0x18;
        uVar13 = (uVar4 << 8) >> 0x18;
        uVar4 = uVar4 & 0xff;
    }
    sprintf(param_2, "%02x:%02x:%02x:%02x:%02x:%02x", uVar6, uVar8, uVar4,
            uVar11, uVar13, uVar3);
    return;
}

uint FUN_000106c8(char *param_1)

{
    FILE *__stream;
    size_t sVar1;
    uint uVar2;
    char *pcVar3;
    char *pcVar4;
    uint uVar5;
    uint uVar6;
    bool bVar7;
    int local_30;
    int local_2c;
    int local_28;
    int local_24;

    if (DAT_00021448 == 0) {
        do {
            __stream = fopen64("/dev/urandom", "rb");
            if (__stream == (FILE *)0x0) {
                return 0xffffffff;
            }
            sVar1 = fread(&DAT_00021450, 1, 0x10, __stream);
            fclose(__stream);
            if (sVar1 != 0x10) {
                return 0xffffffff;
            }
        } while ((DAT_00021450 == 0 && DAT_00021454 == 0) &&
                 (DAT_00021458 == 0 && DAT_0002145c == 0));
        DAT_00021448 = 1;
    }
    uVar6 = DAT_00021450 ^ DAT_00021450 << 0x17;
    uVar2 = DAT_00021458 ^ DAT_00021458 << 0x17;
    uVar5 = (DAT_00021454 << 0x17 | DAT_00021450 >> 9) ^ DAT_00021454;
    DAT_00021450 = (DAT_00021458 >> 5 | DAT_0002145c << 0x1b) ^ DAT_00021458 ^
                   uVar6 ^ (uVar6 >> 0x12 | uVar5 << 0xe);
    uVar6 = (DAT_0002145c << 0x17 | DAT_00021458 >> 9) ^ DAT_0002145c;
    DAT_00021454 = DAT_0002145c ^ DAT_0002145c >> 5 ^ uVar5 ^ uVar5 >> 0x12;
    bVar7 = CARRY4(DAT_00021450, DAT_00021458);
    local_30 = DAT_00021450 + DAT_00021458;
    DAT_00021458 = uVar2 ^ (uVar2 >> 0x12 | uVar6 << 0xe) ^ DAT_00021450 ^
                   (DAT_00021450 >> 5 | DAT_00021454 << 0x1b);
    uVar6 = uVar6 ^ uVar6 >> 0x12 ^ DAT_00021454 ^ DAT_00021454 >> 5;
    pcVar4 = "xxxxxxxxxxxx4xxxyxxxxxxxxxxxxxxx";
    uVar2 = 0;
    uVar5 = 0x78;
    local_24 = uVar6 + DAT_00021454 + (uint)CARRY4(DAT_00021458, DAT_00021450);
    local_28 = DAT_00021458 + DAT_00021450;
    local_2c = DAT_00021454 + DAT_0002145c + (uint)bVar7;
    DAT_0002145c = uVar6;
    do {
        while (true) {
            pcVar3 = param_1;
            uVar6 = (uint) * (byte *)((int)&local_30 + ((int)uVar2 >> 1));
            if ((uVar2 & 1) == 0) {
                uVar6 = uVar6 & 0xf;
            } else {
                uVar6 = (int)uVar6 >> 4;
            }
            if (uVar5 != 0x78)
                break;
            *pcVar3 = "0123456789abcdef"[uVar6];
        LAB_00010834:
            uVar2 = uVar2 + 1;
            pcVar4 = (char *)((byte *)pcVar4 + 1);
            uVar5 = (uint)(byte)*pcVar4;
            param_1 = pcVar3 + 1;
            if (uVar5 == 0)
                goto LAB_00010884;
        }
        if (uVar5 == 0x79) {
            *pcVar3 = "0123456789abcdef"[(uVar6 & 3) + 8];
            goto LAB_00010834;
        }
        *pcVar3 = (char)uVar5;
        pcVar4 = (char *)((byte *)pcVar4 + 1);
        uVar5 = (uint)(byte)*pcVar4;
        param_1 = pcVar3 + 1;
    } while (uVar5 != 0);
LAB_00010884:
    pcVar3[1] = (char)uVar5;
    return uVar5;
}

void FUN_000108b0(undefined4 param_1, undefined4 param_2, undefined4 param_3,
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
