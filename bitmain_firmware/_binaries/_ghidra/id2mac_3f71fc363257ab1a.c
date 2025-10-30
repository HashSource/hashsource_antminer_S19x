// Decompiled: id2mac_3f71fc363257ab1a

void _DT_INIT(void)

{
    FUN_00010468();
    return;
}

undefined4 FUN_00010408(void)

{
    char acStack_44[20];
    undefined1 auStack_30[44];

    FUN_0001064c(auStack_30);
    FUN_00010580(auStack_30, acStack_44);
    puts(acStack_44);
    return 0;
}

void entry(undefined4 param_1)

{
    undefined4 in_stack_00000000;

    __libc_start_main(FUN_00010408, in_stack_00000000, &stack0x00000004,
                      0x10835, &DAT_00010871, param_1);
    /* WARNING: Subroutine does not return */
    abort();
}

/* WARNING: Removing unreachable block (ram,0x0001047c) */

void FUN_00010468(void)

{
    __gmon_start__();
    return;
}

/* WARNING: Removing unreachable block (ram,0x000104a0) */
/* WARNING: Removing unreachable block (ram,0x000104aa) */

void FUN_0001048c(void)

{
    return;
}

/* WARNING: Removing unreachable block (ram,0x000104cc) */
/* WARNING: Removing unreachable block (ram,0x000104d6) */

void FUN_000104b0(void)

{
    return;
}

void _FINI_0(void)

{
    if (DAT_00021440 == '\0') {
        FUN_0001048c();
        DAT_00021440 = '\x01';
    }
    return;
}

void FUN_00010580(byte *param_1, char *param_2)

{
    size_t sVar1;
    uint uVar2;
    byte *pbVar3;
    uint uVar5;
    uint uVar6;
    uint uVar7;
    uint uVar8;
    uint uVar9;
    byte *pbVar4;

    sVar1 = strlen((char *)param_1);
    if (sVar1 == 0) {
        uVar2 = 0xff;
        uVar6 = 0;
        uVar7 = 0;
        uVar8 = uVar2;
        uVar9 = uVar2;
        uVar5 = uVar2;
    } else {
        uVar7 = 0;
        pbVar4 = param_1;
        do {
            pbVar3 = pbVar4 + 1;
            uVar7 =
                *(uint *)(&DAT_0002103c + ((uint)*pbVar4 ^ uVar7 >> 8) * 4) &
                    0xffff ^
                (uVar7 & 0xff) << 8;
            pbVar4 = pbVar3;
        } while (pbVar3 != param_1 + sVar1);
        uVar5 = 0xffffffff;
        pbVar4 = param_1;
        do {
            pbVar3 = pbVar4 + 1;
            uVar5 =
                *(uint *)(&DAT_00010880 + ((uint)*pbVar4 ^ uVar5 >> 0x18) * 4) ^
                uVar5 << 8;
            pbVar4 = pbVar3;
        } while (pbVar3 != param_1 + sVar1);
        uVar6 = uVar7 & 0xfe;
        uVar7 = uVar7 >> 8;
        uVar2 = uVar5 >> 0x18;
        uVar8 = (uVar5 << 8) >> 0x18;
        uVar9 = uVar5 & 0xff;
        uVar5 = (uVar5 << 0x10) >> 0x18;
    }
    sprintf(param_2, "%02x:%02x:%02x:%02x:%02x:%02x", uVar6, uVar7, uVar9,
            uVar5, uVar8, uVar2);
    return;
}

uint FUN_0001064c(char *param_1)

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
        LAB_000107b8:
            uVar2 = uVar2 + 1;
            pcVar4 = (char *)((byte *)pcVar4 + 1);
            uVar5 = (uint)(byte)*pcVar4;
            param_1 = pcVar3 + 1;
            if (uVar5 == 0)
                goto LAB_00010808;
        }
        if (uVar5 == 0x79) {
            *pcVar3 = "0123456789abcdef"[(uVar6 & 3) + 8];
            goto LAB_000107b8;
        }
        *pcVar3 = (char)uVar5;
        pcVar4 = (char *)((byte *)pcVar4 + 1);
        uVar5 = (uint)(byte)*pcVar4;
        param_1 = pcVar3 + 1;
    } while (uVar5 != 0);
LAB_00010808:
    pcVar3[1] = (char)uVar5;
    return uVar5;
}

void FUN_00010834(undefined4 param_1, undefined4 param_2, undefined4 param_3,
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
