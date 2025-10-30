// Decompiled: id2mac_c4904d36b9af3b01

void _DT_INIT(void)

{
    FUN_00010478();
    return;
}

undefined4 FUN_00010418(void)

{
    char acStack_44[20];
    undefined1 auStack_30[44];

    FUN_000106d0(auStack_30);
    FUN_000105b0(auStack_30, acStack_44);
    puts(acStack_44);
    return 0;
}

void entry(undefined4 param_1)

{
    undefined4 in_stack_00000000;

    __libc_start_main(FUN_00010418, in_stack_00000000, &stack0x00000004,
                      0x10901, &DAT_00010941, param_1);
    /* WARNING: Subroutine does not return */
    abort();
}

/* WARNING: Removing unreachable block (ram,0x0001048c) */

void FUN_00010478(void)

{
    __gmon_start__();
    return;
}

/* WARNING: Removing unreachable block (ram,0x000104ac) */
/* WARNING: Removing unreachable block (ram,0x000104b6) */

void FUN_0001049c(void)

{
    return;
}

void _FINI_0(void)

{
    if (DAT_00021538 == '\0') {
        FUN_0001049c();
        DAT_00021538 = '\x01';
    }
    return;
}

/* WARNING: Removing unreachable block (ram,0x000104dc) */
/* WARNING: Removing unreachable block (ram,0x00010524) */
/* WARNING: Removing unreachable block (ram,0x000104e6) */

void _INIT_0(void)

{
    return;
}

void FUN_000105b0(byte *param_1, char *param_2)

{
    char *pcVar1;
    size_t sVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    uint uVar6;
    byte *pbVar7;
    uint extraout_r12;
    byte *pbVar8;
    undefined2 local_16;

    pcVar1 = getenv("CPUID");
    if (pcVar1 != (char *)0x0) {
        uVar3 = *(undefined4 *)(pcVar1 + 4);
        uVar4 = *(undefined4 *)(pcVar1 + 8);
        uVar5 = *(undefined4 *)(pcVar1 + 0xc);
        *(undefined4 *)param_1 = *(undefined4 *)pcVar1;
        *(undefined4 *)(param_1 + 4) = uVar3;
        *(undefined4 *)(param_1 + 8) = uVar4;
        *(undefined4 *)(param_1 + 0xc) = uVar5;
    }
    sVar2 = strlen((char *)param_1);
    if ((int)sVar2 < 1) {
        uVar6 = extraout_r12;
        if (sVar2 == 0) {
            uVar6 = 0xffffffff;
        }
        local_16 = 0;
        if (sVar2 == 0)
            goto LAB_00010670;
    } else {
        uVar6 = 0;
        pbVar7 = param_1;
        do {
            pbVar8 = pbVar7 + 1;
            uVar6 =
                *(uint *)(&DAT_00021134 + ((uint)*pbVar7 ^ uVar6 >> 8) * 4) &
                    0xffff ^
                (uVar6 & 0xff) << 8;
            pbVar7 = pbVar8;
        } while (pbVar8 != param_1 + sVar2);
        local_16 = (undefined2)uVar6;
    }
    uVar6 = 0xffffffff;
    pbVar7 = param_1;
    do {
        pbVar8 = pbVar7 + 1;
        uVar6 = *(uint *)(&DAT_00010950 + ((uint)*pbVar7 ^ uVar6 >> 0x18) * 4) ^
                uVar6 << 8;
        pbVar7 = pbVar8;
    } while (pbVar8 != param_1 + sVar2);
LAB_00010670:
    sprintf(param_2, "%02x:%02x:%02x:%02x:%02x:%02x", (byte)local_16 & 0xfe,
            (uint)local_16._1_1_, uVar6 & 0xff, (uVar6 << 0x10) >> 0x18,
            (uVar6 << 8) >> 0x18, uVar6 >> 0x18);
    return;
}

uint FUN_000106d0(char *param_1)

{
    FILE *__stream;
    size_t sVar1;
    char *pcVar2;
    uint uVar3;
    uint uVar4;
    uint uVar5;
    uint uVar6;
    char *pcVar7;
    bool bVar8;
    int local_38;
    int iStack_34;
    int local_30;
    int iStack_2c;

    if (DAT_00021540 == 0) {
        do {
            __stream = fopen64("/dev/urandom", "rb");
            if (__stream == (FILE *)0x0) {
                return 0xffffffff;
            }
            sVar1 = fread(&DAT_00021548, 1, 0x10, __stream);
            fclose(__stream);
            if (sVar1 != 0x10) {
                return 0xffffffff;
            }
        } while ((DAT_00021548 == 0 && DAT_0002154c == 0) &&
                 (DAT_00021550 == 0 && DAT_00021554 == 0));
        DAT_00021540 = 1;
    }
    uVar3 = DAT_00021548 << 0x17 ^ DAT_00021548;
    uVar4 = (DAT_0002154c << 0x17 | DAT_00021548 >> 9) ^ DAT_0002154c;
    uVar5 = DAT_00021550 << 0x17 ^ DAT_00021550;
    uVar6 = (DAT_00021554 << 0x17 | DAT_00021550 >> 9) ^ DAT_00021554;
    DAT_00021548 = uVar3 ^ (DAT_00021550 >> 5 | DAT_00021554 << 0x1b) ^
                   DAT_00021550 ^ (uVar3 >> 0x12 | uVar4 << 0xe);
    DAT_0002154c = uVar4 ^ DAT_00021554 >> 5 ^ DAT_00021554 ^ uVar4 >> 0x12;
    bVar8 = CARRY4(DAT_00021550, DAT_00021548);
    local_38 = DAT_00021550 + DAT_00021548;
    DAT_00021550 = uVar5 ^ (uVar5 >> 0x12 | uVar6 << 0xe) ^ DAT_00021548 ^
                   (DAT_00021548 >> 5 | DAT_0002154c << 0x1b);
    uVar4 = uVar6 ^ uVar6 >> 0x12 ^ DAT_0002154c ^ DAT_0002154c >> 5;
    pcVar7 = "xxxxxxxxxxxx4xxxyxxxxxxxxxxxxxxx";
    uVar3 = 0x78;
    uVar5 = 0;
    iStack_34 = DAT_00021554 + DAT_0002154c + (uint)bVar8;
    local_30 = DAT_00021548 + DAT_00021550;
    iStack_2c = DAT_0002154c + uVar4 + (uint)CARRY4(DAT_00021548, DAT_00021550);
    DAT_00021554 = uVar4;
    do {
        while (true) {
            pcVar2 = param_1;
            uVar4 = (uint) * (byte *)((int)&local_38 + ((int)uVar5 >> 1));
            if ((uVar5 & 1) == 0) {
                uVar4 = uVar4 & 0xf;
            } else {
                uVar4 = (int)uVar4 >> 4;
            }
            if (uVar3 != 0x78)
                break;
            *pcVar2 = "0123456789abcdef"[uVar4];
        LAB_00010810:
            uVar5 = uVar5 + 1;
            pcVar7 = (char *)((byte *)pcVar7 + 1);
            uVar3 = (uint)(byte)*pcVar7;
            param_1 = pcVar2 + 1;
            if (uVar3 == 0)
                goto LAB_00010860;
        }
        if (uVar3 == 0x79) {
            *pcVar2 = "0123456789abcdef"[(uVar4 & 3) + 8];
            goto LAB_00010810;
        }
        *pcVar2 = (char)uVar3;
        pcVar7 = (char *)((byte *)pcVar7 + 1);
        uVar3 = (uint)(byte)*pcVar7;
        param_1 = pcVar2 + 1;
    } while (uVar3 != 0);
LAB_00010860:
    pcVar2[1] = (char)uVar3;
    return uVar3;
}

void FUN_00010900(undefined4 param_1, undefined4 param_2, undefined4 param_3,
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
