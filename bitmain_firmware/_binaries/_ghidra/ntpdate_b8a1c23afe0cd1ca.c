// Decompiled: ntpdate_b8a1c23afe0cd1ca

void _DT_INIT(void)

{
    FUN_0001360c();
    return;
}

void FUN_00013530(void)

{
    int *piVar1;

    piVar1 = __errno_location();
    FUN_0001a828(3, "read system clock failed: %m (%d)", *piVar1);
    /* WARNING: Subroutine does not return */
    exit(1);
}

/* WARNING: Removing unreachable block (ram,0x000135b8) */
/* WARNING: Type propagation algorithm not settling */

void main(int param_1, undefined4 *param_2)

{
    undefined1 uVar1;
    short sVar2;
    char cVar3;
    bool bVar4;
    FILE *__s;
    int iVar5;
    char *pcVar6;
    uint uVar7;
    int *piVar8;
    uint *puVar9;
    int iVar10;
    int **ppiVar11;
    ushort **ppuVar12;
    undefined *puVar13;
    undefined4 uVar14;
    sockaddr *psVar15;
    int **ppiVar16;
    socklen_t sVar17;
    int *piVar18;
    undefined4 uVar19;
    undefined4 uVar20;
    uint uVar21;
    char *pcVar22;
    byte bVar23;
    sockaddr *psVar24;
    uint uVar25;
    uint uVar26;
    addrinfo *paVar27;
    int *piVar28;
    uint uVar29;
    byte bVar30;
    addrinfo **ppaVar31;
    byte *pbVar32;
    uint uVar33;
    int iVar34;
    uint uVar35;
    uint uVar36;
    uint uVar37;
    bool bVar38;
    double dVar39;
    int *local_f4;
    undefined4 local_c8;
    addrinfo *local_b8;
    int local_b4;
    uint local_b0;
    timeval local_ac;
    addrinfo local_a4;
    int *local_84[9];
    uint uStack_60;
    sockaddr local_5c;
    uint local_4c;
    uint local_48;
    uint local_44;
    byte local_34[8];
    int local_2c;

    local_2c = __stack_chk_guard;
    FUN_00019d2c();
    if (ipv6_works == 0) {
        ai_fam_templ = 2;
    }
    iVar34 = 0;
    progname = *param_2;
    syslogit = 0;
    uVar7 = sys_samples;
switchD_00013ea4_default:
    sys_samples = uVar7;
    iVar5 = FUN_000198e4(param_1, param_2, "46a:bBde:k:o:p:qst:uv");
    if (iVar5 == -1)
        goto LAB_00013fb8;
    uVar7 = sys_samples;
    switch (iVar5) {
    case 0x34:
        ai_fam_templ = 2;
        goto switchD_00013ea4_default;
    case 0x35:
        goto switchD_00013ea4_default;
    case 0x36:
        ai_fam_templ = 10;
        goto switchD_00013ea4_default;
    case 0x37:
        goto switchD_00013ea4_default;
    case 0x38:
        goto switchD_00013ea4_default;
    case 0x39:
        goto switchD_00013ea4_default;
    case 0x3a:
        goto switchD_00013ea4_default;
    case 0x3b:
        goto switchD_00013ea4_default;
    case 0x3c:
        goto switchD_00013ea4_default;
    case 0x3d:
        goto switchD_00013ea4_default;
    case 0x3e:
        goto switchD_00013ea4_default;
    case 0x3f:
        iVar34 = iVar34 + 1;
        goto switchD_00013ea4_default;
    case 0x40:
        goto switchD_00013ea4_default;
    case 0x41:
        goto switchD_00013ea4_default;
    case 0x42:
        iVar5 = 0x2fc;
        iVar10 = 0x32c;
        break;
    case 0x43:
        goto switchD_00013ea4_default;
    case 0x44:
        goto switchD_00013ea4_default;
    case 0x45:
        goto switchD_00013ea4_default;
    case 0x46:
        goto switchD_00013ea4_default;
    case 0x47:
        goto switchD_00013ea4_default;
    case 0x48:
        goto switchD_00013ea4_default;
    case 0x49:
        goto switchD_00013ea4_default;
    case 0x4a:
        goto switchD_00013ea4_default;
    case 0x4b:
        goto switchD_00013ea4_default;
    case 0x4c:
        goto switchD_00013ea4_default;
    case 0x4d:
        goto switchD_00013ea4_default;
    case 0x4e:
        goto switchD_00013ea4_default;
    case 0x4f:
        goto switchD_00013ea4_default;
    case 0x50:
        goto switchD_00013ea4_default;
    case 0x51:
        goto switchD_00013ea4_default;
    case 0x52:
        goto switchD_00013ea4_default;
    case 0x53:
        goto switchD_00013ea4_default;
    case 0x54:
        goto switchD_00013ea4_default;
    case 0x55:
        goto switchD_00013ea4_default;
    case 0x56:
        goto switchD_00013ea4_default;
    case 0x57:
        goto switchD_00013ea4_default;
    case 0x58:
        goto switchD_00013ea4_default;
    case 0x59:
        goto switchD_00013ea4_default;
    case 0x5a:
        goto switchD_00013ea4_default;
    case 0x5b:
        goto switchD_00013ea4_default;
    case 0x5c:
        goto switchD_00013ea4_default;
    case 0x5d:
        goto switchD_00013ea4_default;
    case 0x5e:
        goto switchD_00013ea4_default;
    case 0x5f:
        goto switchD_00013ea4_default;
    case 0x60:
        goto switchD_00013ea4_default;
    case 0x61:
        sys_authkey = strtol(ntp_optarg, (char **)0x0, 10);
        sys_authenticate = 1;
        uVar7 = sys_samples;
        goto switchD_00013ea4_default;
    case 0x62:
        iVar5 = 0x32c;
        iVar10 = 0x2fc;
        break;
    case 99:
        goto switchD_00013ea4_default;
    case 100:
        debug = debug + 1;
        goto switchD_00013ea4_default;
    case 0x65:
        iVar5 = FUN_00017198(ntp_optarg, &local_b4);
        if ((iVar5 == 0) || (local_b4 != 0)) {
            iVar34 = iVar34 + 1;
            __fprintf_chk(stderr, 1, "%s: encryption delay %s is unlikely\n",
                          progname, ntp_optarg);
            uVar7 = sys_samples;
        } else {
            sys_authdelay = local_b0;
            uVar7 = sys_samples;
        }
        goto switchD_00013ea4_default;
    case 0x66:
        goto switchD_00013ea4_default;
    case 0x67:
        goto switchD_00013ea4_default;
    case 0x68:
        goto switchD_00013ea4_default;
    case 0x69:
        goto switchD_00013ea4_default;
    case 0x6a:
        goto switchD_00013ea4_default;
    case 0x6b:
        key_file = ntp_optarg;
        goto switchD_00013ea4_default;
    case 0x6c:
        goto switchD_00013ea4_default;
    case 0x6d:
        goto switchD_00013ea4_default;
    case 0x6e:
        goto switchD_00013ea4_default;
    case 0x6f:
        sys_version = strtol(ntp_optarg, (char **)0x0, 10);
        uVar7 = sys_samples;
        goto switchD_00013ea4_default;
    case 0x70:
        uVar7 = strtol(ntp_optarg, (char **)0x0, 10);
        if (7 < uVar7 - 1) {
            iVar34 = iVar34 + 1;
            __fprintf_chk(stderr, 1, "%s: number of samples (%d) is invalid\n",
                          progname, uVar7);
            uVar7 = sys_samples;
        }
        goto switchD_00013ea4_default;
    case 0x71:
        simple_query = 1;
        goto switchD_00013ea4_default;
    case 0x72:
        goto switchD_00013ea4_default;
    case 0x73:
        syslogit = 1;
        goto switchD_00013ea4_default;
    case 0x74:
        iVar5 = FUN_00017198(ntp_optarg, &local_b4);
        if (iVar5 == 0) {
            iVar34 = iVar34 + 1;
            __fprintf_chk(stderr, 1, "%s: timeout %s is undecodeable\n",
                          progname, ntp_optarg);
            uVar7 = sys_samples;
        } else {
            uVar7 = sys_samples;
            if (local_b4 + 0xffffU < 0x1ffff) {
                sys_timeout =
                    (local_b0 >> 0x10 | local_b4 << 0x10) * 5 + 0x8000 >> 0x10;
                if (sys_timeout < 5) {
                    sys_timeout = 5;
                }
            } else {
                sys_timeout = 0x8000;
            }
        }
        goto switchD_00013ea4_default;
    case 0x75:
        unpriv_port = 1;
        goto switchD_00013ea4_default;
    case 0x76:
        verbose = 1;
    default:
        goto switchD_00013ea4_default;
    }
    **(int **)((int)&__DT_PLTGOT + iVar5) =
        **(int **)((int)&__DT_PLTGOT + iVar5) + 1;
    **(undefined4 **)((int)&__DT_PLTGOT + iVar10) = 0;
    uVar7 = sys_samples;
    goto switchD_00013ea4_default;
LAB_0001499c:
    FUN_0001d470();
    iVar34 = FUN_0001d868();
    if (iVar34 != 0) {
        local_f4 = (int *)0x0;
    LAB_00014750:
        do {
            if (debug != 0) {
                uVar14 = FUN_0001f658(iVar34 + 4);
                __printf_chk(1, "receive(%s)\n", uVar14);
            }
            iVar5 = *(int *)(iVar34 + 0x54);
            if (iVar5 == 0x30) {
                bVar4 = false;
            LAB_0001476c:
                uVar7 = (uint) * (byte *)(iVar34 + 0x58);
                if (((uVar7 << 0x1a) >> 0x1d) - 1 < 4) {
                    if ((((uVar7 & 7) - 2 & 0xfd) == 0) &&
                        (bVar23 = *(byte *)(iVar34 + 0x59), bVar23 < 0x10)) {
                        if ((*(short *)(iVar34 + 6) == 0x7b00) &&
                            (sys_servers != (int *)0x0)) {
                            sVar2 = *(short *)(iVar34 + 4);
                            piVar8 = (int *)0x0;
                            piVar28 = sys_servers;
                            do {
                                while ((short)piVar28[1] != sVar2) {
                                    piVar28 = (int *)*piVar28;
                                    if (piVar28 == (int *)0x0)
                                        goto LAB_000148cc;
                                }
                                if (sVar2 == 2) {
                                    if (*(uint *)(iVar34 + 8) == piVar28[2])
                                        goto LAB_000149c0;
                                    bVar38 = (piVar28[2] & 0xf0U) == 0xe0;
                                } else {
                                    iVar10 = memcmp((void *)(iVar34 + 0xc),
                                                    piVar28 + 3, 0x10);
                                    if ((iVar10 == 0) &&
                                        (*(int *)(iVar34 + 0x1c) ==
                                         piVar28[7])) {
                                    LAB_000149c0:
                                        uVar25 = sys_authkey;
                                        uVar29 = *(uint *)(iVar34 + 0x70);
                                        uVar35 = *(uint *)(iVar34 + 0x74);
                                        uVar29 = uVar29 << 0x18 |
                                                 (uVar29 >> 8 & 0xff) << 0x10 |
                                                 (uVar29 >> 0x10 & 0xff) << 8 |
                                                 uVar29 >> 0x18;
                                        uVar35 = uVar35 << 0x18 |
                                                 (uVar35 >> 8 & 0xff) << 0x10 |
                                                 (uVar35 >> 0x10 & 0xff) << 8 |
                                                 uVar35 >> 0x18;
                                        if ((uVar29 == piVar28[0x3d]) &&
                                            (uVar35 == piVar28[0x3e])) {
                                            if (sys_authenticate == 0) {
                                                *(char *)(piVar28 + 9) =
                                                    (char)piVar28[9] << 1;
                                            LAB_000153e4:
                                                uVar7 = uVar7 >> 6;
                                                bVar30 = (byte)uVar7;
                                                if (uVar7 == 3)
                                                    goto LAB_00015f28;
                                            LAB_000153f0:
                                                *(byte *)((int)piVar28 + 0x21) =
                                                    bVar30;
                                                if (bVar23 == 0) {
                                                    bVar23 = 0x10;
                                                }
                                            LAB_000153fc:
                                                *(byte *)((int)piVar28 + 0x22) =
                                                    bVar23;
                                                cVar3 =
                                                    *(char *)(iVar34 + 0x5b);
                                                *(char *)((int)piVar28 + 0x23) =
                                                    cVar3;
                                                uVar7 =
                                                    *(uint *)(iVar34 + 0x78);
                                                uVar25 =
                                                    *(uint *)(iVar34 + 0x7c);
                                                uVar36 =
                                                    *(uint *)(iVar34 + 0x5c);
                                                uVar33 =
                                                    *(uint *)(iVar34 + 0x60);
                                                uVar21 = uVar7 << 0x18 |
                                                         (uVar7 >> 8 & 0xff)
                                                             << 0x10 |
                                                         (uVar7 >> 0x10 & 0xff)
                                                             << 8 |
                                                         uVar7 >> 0x18;
                                                uVar26 = uVar25 << 0x18 |
                                                         (uVar25 >> 8 & 0xff)
                                                             << 0x10 |
                                                         (uVar25 >> 0x10 & 0xff)
                                                             << 8 |
                                                         uVar25 >> 0x18;
                                                uVar37 =
                                                    *(uint *)(iVar34 + 0x68);
                                                uVar7 =
                                                    *(uint *)(iVar34 + 0x6c);
                                                uVar25 =
                                                    *(uint *)(iVar34 + 0x80);
                                                piVar28[10] =
                                                    uVar36 << 0x18 |
                                                    (uVar36 >> 8 & 0xff)
                                                        << 0x10 |
                                                    (uVar36 >> 0x10 & 0xff)
                                                        << 8 |
                                                    uVar36 >> 0x18;
                                                uVar36 =
                                                    *(uint *)(iVar34 + 0x84);
                                                piVar28[0xb] =
                                                    uVar33 << 0x18 |
                                                    (uVar33 >> 8 & 0xff)
                                                        << 0x10 |
                                                    (uVar33 >> 0x10 & 0xff)
                                                        << 8 |
                                                    uVar33 >> 0x18;
                                                uVar33 = uVar25 << 0x18 |
                                                         (uVar25 >> 8 & 0xff)
                                                             << 0x10 |
                                                         (uVar25 >> 0x10 & 0xff)
                                                             << 8 |
                                                         uVar25 >> 0x18;
                                                iVar5 = *(int *)(iVar34 + 100);
                                                uVar25 = uVar36 << 0x18 |
                                                         (uVar36 >> 8 & 0xff)
                                                             << 0x10 |
                                                         (uVar36 >> 0x10 & 0xff)
                                                             << 8 |
                                                         uVar36 >> 0x18;
                                                piVar28[0xd] =
                                                    uVar37 << 0x18 |
                                                    (uVar37 >> 8 & 0xff)
                                                        << 0x10 |
                                                    (uVar37 >> 0x10 & 0xff)
                                                        << 8 |
                                                    uVar37 >> 0x18;
                                                piVar28[0xe] =
                                                    uVar7 << 0x18 |
                                                    (uVar7 >> 8 & 0xff)
                                                        << 0x10 |
                                                    (uVar7 >> 0x10 & 0xff)
                                                        << 8 |
                                                    uVar7 >> 0x18;
                                                piVar28[0xc] = iVar5;
                                                piVar28[0x3b] = uVar33;
                                                piVar28[0x3c] = uVar25;
                                                if ((uVar21 != 0 ||
                                                     uVar26 != 0) &&
                                                    ((uVar21 < uVar33 ||
                                                      (uVar26 <= uVar25 &&
                                                       uVar21 == uVar33)))) {
                                                    uVar21 = uVar21 - uVar29;
                                                    if (uVar26 < uVar35) {
                                                        uVar21 = uVar21 - 1;
                                                    }
                                                    uVar26 = uVar26 - uVar35;
                                                    uVar33 =
                                                        uVar33 -
                                                        *(int *)(iVar34 + 0x48);
                                                    if (uVar25 <
                                                        *(uint *)(iVar34 +
                                                                  0x4c)) {
                                                        uVar33 = uVar33 - 1;
                                                    }
                                                    uVar25 = uVar25 -
                                                             *(uint *)(iVar34 +
                                                                       0x4c);
                                                    uVar36 = uVar21 << 0x1f |
                                                             uVar26 >> 1;
                                                    uVar29 = uVar33 << 0x1f |
                                                             uVar25 >> 1;
                                                    uVar37 =
                                                        uVar21 & 0x80000000;
                                                    uVar7 = uVar21 >> 1;
                                                    uVar35 = uVar29 + uVar36;
                                                    if (uVar26 < uVar25) {
                                                        uVar21 = uVar21 - 1;
                                                    }
                                                    iVar5 = uVar21 - uVar33;
                                                    uVar7 =
                                                        (uVar33 & 0x80000000 |
                                                         uVar33 >> 1) +
                                                        (uVar37 | uVar7) +
                                                        (uint)CARRY4(uVar29,
                                                                     uVar36);
                                                    if (iVar5 < 0x10000) {
                                                        if (iVar5 == -0x10000 ||
                                                            iVar5 + 0x10000 <
                                                                    0 !=
                                                                SCARRY4(
                                                                    iVar5,
                                                                    0x10000)) {
                                                            uVar25 = 0x80000000;
                                                        } else {
                                                            uVar25 =
                                                                uVar26 -
                                                                        uVar25 >>
                                                                    0x10 |
                                                                iVar5 * 0x10000;
                                                        }
                                                    } else {
                                                        uVar25 = 0x7fffffff;
                                                    }
                                                    if (3 < debug) {
                                                        uVar14 = FUN_0001959c(
                                                            uVar7, uVar35, 6);
                                                        uVar19 = FUN_0001921c(
                                                            uVar25, 5);
                                                        __printf_chk(
                                                            1,
                                                            "offset: %s, delay "
                                                            "%s\n",
                                                            uVar14, uVar19);
                                                        cVar3 = *(
                                                            char
                                                                *)((int)
                                                                       piVar28 +
                                                                   0x23);
                                                    }
                                                    uVar29 =
                                                        (uint) *
                                                        (ushort *)((int)
                                                                       piVar28 +
                                                                   0x4a);
                                                    iVar5 = (0x10000 >>
                                                             (-(int)cVar3 &
                                                              0xffU)) +
                                                            0x68f + uVar25;
                                                    if (iVar5 < 1) {
                                                        if (uVar29 < 8) {
                                                            uVar25 = 0;
                                                            piVar28[uVar29 +
                                                                    0x13] = 0;
                                                            piVar28[uVar29 * 2 +
                                                                    0x1b] = 0;
                                                            uVar35 = 0;
                                                            piVar28[uVar29 * 2 +
                                                                    0x1c] = 0;
                                                        LAB_000161d4:
                                                            uVar25 =
                                                                uVar35 >> 0x10 |
                                                                uVar25 << 0x10;
                                                            goto LAB_00015574;
                                                        }
                                                    } else {
                                                        if (iVar5 < 0x51f) {
                                                            iVar5 = 0x51f;
                                                        }
                                                        if (uVar29 < 8) {
                                                            uVar25 = uVar7;
                                                            if (0xffff <
                                                                (int)uVar7) {
                                                                uVar25 =
                                                                    0x7fffffff;
                                                            }
                                                            piVar28[uVar29 +
                                                                    0x13] =
                                                                iVar5;
                                                            piVar28[uVar29 * 2 +
                                                                    0x1b] =
                                                                uVar7;
                                                            piVar28[uVar29 * 2 +
                                                                    0x1c] =
                                                                uVar35;
                                                            if ((int)uVar7 <
                                                                0x10000) {
                                                                if (uVar7 !=
                                                                        0xffff0000 &&
                                                                    (int)(uVar7 +
                                                                          0x10000) <
                                                                            0 ==
                                                                        SCARRY4(
                                                                            uVar7,
                                                                            0x10000))
                                                                    goto LAB_000161d4;
                                                                uVar25 =
                                                                    0x80000000;
                                                            }
                                                        LAB_00015574:
                                                            piVar28[uVar29 +
                                                                    0x2b] =
                                                                uVar25;
                                                            piVar28[uVar29 +
                                                                    0x33] = 0;
                                                            *(short
                                                                  *)((int)
                                                                         piVar28 +
                                                                     0x4a) =
                                                                (short)(uVar29 +
                                                                        1);
                                                            uVar29 =
                                                                uVar29 + 1 &
                                                                0xffff;
                                                        }
                                                    }
                                                    if ((int)sys_samples <=
                                                        (int)uVar29)
                                                        goto LAB_000155a4;
                                                }
                                                piVar28[0xf] =
                                                    current_time + sys_timeout;
                                            } else {
                                                if (3 < debug) {
                                                    uVar7 = *(uint *)(iVar34 +
                                                                      0x88);
                                                    uVar14 = FUN_000186d0(
                                                        sys_authkey,
                                                        iVar34 + 0x58, 0x30,
                                                        iVar5 + -0x30);
                                                    __printf_chk(
                                                        1,
                                                        "receive: rpkt "
                                                        "keyid=%ld "
                                                        "sys_authkey=%ld "
                                                        "decrypt=%ld\n",
                                                        uVar7 << 0x18 |
                                                            (uVar7 >> 8 & 0xff)
                                                                << 0x10 |
                                                            (uVar7 >> 0x10 &
                                                             0xff)
                                                                << 8 |
                                                            uVar7 >> 0x18,
                                                        uVar25, uVar14);
                                                }
                                                if (bVar4) {
                                                    uVar7 = *(uint *)(iVar34 +
                                                                      0x88);
                                                    uVar7 =
                                                        uVar7 << 0x18 |
                                                        (uVar7 >> 8 & 0xff)
                                                            << 0x10 |
                                                        (uVar7 >> 0x10 & 0xff)
                                                            << 8 |
                                                        uVar7 >> 0x18;
                                                    if ((uVar7 ==
                                                         sys_authkey) &&
                                                        (iVar5 = FUN_000186d0(
                                                             uVar7,
                                                             iVar34 + 0x58,
                                                             0x30,
                                                             *(int *)(iVar34 +
                                                                      0x54) +
                                                                 -0x30),
                                                         iVar5 != 0)) {
                                                        if (debug != 0) {
                                                            __printf_chk(
                                                                1,
                                                                "receive: "
                                                                "authentication"
                                                                " %s\n",
                                                                "passed");
                                                        }
                                                        *(char *)(piVar28 + 9) =
                                                            (char)piVar28[9]
                                                            << 1;
                                                        uVar7 =
                                                            (uint) *
                                                            (byte *)(iVar34 +
                                                                     0x58);
                                                        bVar23 =
                                                            *(byte *)(iVar34 +
                                                                      0x59);
                                                        goto LAB_000153e4;
                                                    }
                                                }
                                                if (debug == 0) {
                                                    cVar3 = (char)piVar28[9];
                                                } else {
                                                    __printf_chk(
                                                        1,
                                                        "receive: "
                                                        "authentication %s\n",
                                                        "failed");
                                                    cVar3 = (char)piVar28[9];
                                                }
                                                *(byte *)(piVar28 + 9) =
                                                    cVar3 << 1 | 1;
                                                bVar23 =
                                                    *(byte *)(iVar34 + 0x59);
                                                bVar30 =
                                                    *(byte *)(iVar34 + 0x58) >>
                                                    6;
                                                uVar7 = (uint)bVar30;
                                                if (uVar7 != 3)
                                                    goto LAB_000153f0;
                                            LAB_00015f28:
                                                if (bVar23 != 0) {
                                                    *(char *)((int)piVar28 +
                                                              0x21) =
                                                        (char)uVar7;
                                                    goto LAB_000153fc;
                                                }
                                                if ((((*(char *)(iVar34 +
                                                                 100) != 'R') ||
                                                      (*(char *)(iVar34 +
                                                                 0x65) !=
                                                       'A')) ||
                                                     (*(char *)(iVar34 +
                                                                0x66) !=
                                                      'T')) ||
                                                    (*(char *)(iVar34 + 0x67) !=
                                                     'E')) {
                                                    bVar23 = 0x10;
                                                    *(undefined1
                                                          *)((int)piVar28 +
                                                             0x21) = 3;
                                                    goto LAB_000153fc;
                                                }
                                                uVar14 =
                                                    FUN_0001f658(iVar34 + 4);
                                                FUN_0001a828(
                                                    uVar7,
                                                    "%s rate limit response "
                                                    "from server.",
                                                    uVar14);
                                            LAB_000155a4:
                                                piVar28[0xf] = 0;
                                                complete_servers =
                                                    complete_servers + 1;
                                            }
                                        } else if (debug != 0) {
                                            puts("receive: pkt.org and "
                                                 "peer.xmt differ");
                                        }
                                        goto LAB_0001473c;
                                    }
                                    bVar38 = (char)piVar28[3] == -1;
                                }
                                if (bVar38) {
                                    piVar8 = piVar28;
                                }
                                piVar28 = (int *)*piVar28;
                            } while (piVar28 != (int *)0x0);
                        LAB_000148cc:
                            if (piVar8 != (int *)0x0) {
                                if (piVar8[0xf] != 0) {
                                    piVar8[0xf] = (int)piVar28;
                                    complete_servers = complete_servers + 1;
                                }
                                iVar5 = FUN_0001967c(0, 0x110, 0, 1);
                                uVar14 = *(undefined4 *)(iVar34 + 8);
                                uVar19 = *(undefined4 *)(iVar34 + 0xc);
                                uVar20 = *(undefined4 *)(iVar34 + 0x10);
                                *(undefined4 *)(iVar5 + 4) =
                                    *(undefined4 *)(iVar34 + 4);
                                *(undefined4 *)(iVar5 + 8) = uVar14;
                                *(undefined4 *)(iVar5 + 0xc) = uVar19;
                                *(undefined4 *)(iVar5 + 0x10) = uVar20;
                                piVar8 = sys_servers;
                                iVar10 = sys_numservers + 1;
                                uVar14 = *(undefined4 *)(iVar34 + 0x18);
                                uVar19 = *(undefined4 *)(iVar34 + 0x1c);
                                sys_numservers = iVar10;
                                *(undefined4 *)(iVar5 + 0x14) =
                                    *(undefined4 *)(iVar34 + 0x14);
                                *(undefined4 *)(iVar5 + 0x18) = uVar14;
                                *(undefined4 *)(iVar5 + 0x1c) = uVar19;
                                *(int *)(iVar5 + 0x3c) = iVar10;
                                do {
                                    piVar28 = piVar8;
                                    piVar8 = (int *)*piVar28;
                                } while (piVar8 != (int *)0x0);
                                *piVar28 = iVar5;
                                FUN_00013a94(iVar5);
                            }
                        }
                        if (debug != 0) {
                            puts("receive: server not found");
                        }
                    } else if (debug != 0) {
                        __printf_chk(1, "receive: mode %d stratum %d\n",
                                     uVar7 & 7, *(undefined1 *)(iVar34 + 0x59));
                    }
                }
            } else {
                if (0x2f < iVar5) {
                    bVar4 = true;
                    goto LAB_0001476c;
                }
                if (debug != 0) {
                    __printf_chk(1, "receive: packet length %d\n", iVar5);
                }
            }
        LAB_0001473c:
            FUN_0001d66c(iVar34);
            iVar34 = FUN_0001d868();
        joined_r0x00014820:
        } while (iVar34 != 0);
        if (local_f4 != (int *)0x0) {
        LAB_000147f8:
            FUN_00013b8c();
        }
    }
    goto LAB_00014660;
LAB_00014c38:
    bVar23 = *(byte *)((int)piVar8 + 0x22);
    if (bVar23 == 0) {
        if (iVar34 != 0) {
            uVar14 = FUN_0001f658(piVar8 + 1);
            __printf_chk(1, "%s: Server dropped: no data\n", uVar14);
            iVar34 = debug;
        }
        goto LAB_000155e8;
    }
    if (0xf < bVar23) {
        if (iVar34 != 0) {
            uVar14 = FUN_0001f658(piVar8 + 1);
            __printf_chk(1, "%s: Server dropped: strata too high\n", uVar14);
            iVar34 = debug;
        }
        goto LAB_000155e8;
    }
    if (0x80000 < (uint)piVar8[0x3f]) {
        if (iVar34 != 0) {
            uVar14 = FUN_0001f658(piVar8 + 1);
            __printf_chk(1, "%s: Server dropped: server too far away\n",
                         uVar14);
            iVar34 = debug;
        }
        goto LAB_000155e8;
    }
    if (*(char *)((int)piVar8 + 0x21) == '\x03') {
        if (iVar34 != 0) {
            uVar14 = FUN_0001f658(piVar8 + 1);
            __printf_chk(1, "%s: Server dropped: leap not in sync\n", uVar14);
            iVar34 = debug;
        }
        goto LAB_000155e8;
    }
    uVar29 = piVar8[0x3b];
    uVar25 = piVar8[0xd];
    if ((uVar29 <= uVar25) &&
        ((uVar29 != uVar25 || ((uint)piVar8[0x3c] < (uint)piVar8[0xe])))) {
        if (iVar34 != 0) {
            uVar14 = FUN_0001f658(piVar8 + 1);
            __printf_chk(1, "%s: Server dropped: server is very broken\n",
                         uVar14);
            iVar34 = debug;
        }
        goto LAB_000155e8;
    }
    if (0x1517f < uVar29 - uVar25) {
        if (iVar34 != 0) {
            uVar14 = FUN_0001f658(piVar8 + 1);
            __printf_chk(
                1,
                "%s: Server dropped: server has gone too long without sync\n",
                uVar14);
            iVar34 = debug;
        }
        goto LAB_000155e8;
    }
    if ((char)piVar8[9] != '\0') {
        if (iVar34 != 0) {
            uVar14 = FUN_0001f658(piVar8 + 1);
            __printf_chk(1, "%s: Server dropped: Server is untrusted\n",
                         uVar14);
            iVar34 = debug;
        }
        goto LAB_000155e8;
    }
    iVar5 = piVar8[0x40];
    uVar25 = iVar5 * 2;
    if (uVar7 != 0) {
        uVar29 = 0;
        uVar35 = uVar7;
        uVar33 = uVar7;
        if (*(byte *)((int)local_84[0] + 0x22) < bVar23) {
            do {
                uVar21 = uVar29;
                uVar29 = uVar21 + 1;
                if (uVar29 == uVar7)
                    goto LAB_00014ce4;
            } while (*(byte *)((int)local_84[uVar29] + 0x22) < bVar23);
            if ((*(byte *)((int)local_84[uVar29] + 0x22) <= bVar23) &&
                (*(int *)(local_5c.sa_data + uVar21 * 4 + 2) <= (int)uVar25))
                goto LAB_00015df0;
            if (4 < uVar29)
                goto LAB_000155e8;
            if (uVar29 < uVar7)
                goto LAB_00015e38;
            local_84[uVar29] = piVar8;
            *(uint *)(local_5c.sa_data + uVar21 * 4 + 2) = uVar25;
            goto LAB_00014d04;
        }
        uVar29 = 0;
        if ((*(byte *)((int)local_84[0] + 0x22) <= bVar23) &&
            (local_5c._0_4_ == uVar25 ||
             local_5c._0_4_ + iVar5 * -2 < 0 !=
                 SBORROW4(local_5c._0_4_, uVar25))) {
            uVar29 = 0;
        LAB_00015df0:
            ppiVar11 = local_84 + uVar29;
            uVar21 = uVar29;
            do {
                uVar29 = uVar21 + 1;
                if (uVar7 <= uVar29)
                    goto LAB_00014ce4;
                ppiVar11 = ppiVar11 + 1;
            } while ((*(byte *)((int)*ppiVar11 + 0x22) <= bVar23) &&
                     (uVar26 = *(uint *)(local_5c.sa_data + uVar21 * 4 + 2),
                      uVar21 = uVar29,
                      uVar26 == uVar25 || (int)(uVar26 + iVar5 * -2) < 0 !=
                                              SBORROW4(uVar26, uVar25)));
            if (4 < uVar29)
                goto LAB_000155e8;
        }
    LAB_00015e38:
        do {
            uVar21 = uVar33 - 1;
            if (uVar35 < 5) {
                uVar14 =
                    *(undefined4 *)(local_5c.sa_data + uVar33 * 4 + 0xfffffffa);
                local_84[uVar35] = local_84[uVar21];
                *(undefined4 *)(local_5c.sa_data + uVar35 * 4 + -2) = uVar14;
            }
            uVar35 = uVar35 - 1;
            uVar33 = uVar21;
        } while (uVar29 < uVar21);
        goto LAB_00014cec;
    }
    local_84[0] = piVar8;
    local_5c._0_4_ = uVar25;
    goto LAB_00014d04;
LAB_00014ce4:
    if (uVar29 < 5) {
    LAB_00014cec:
        local_84[uVar29] = piVar8;
        *(uint *)(local_5c.sa_data + uVar29 * 4 + -2) = uVar25;
        if (uVar7 < 5) {
        LAB_00014d04:
            piVar8 = (int *)*piVar8;
            uVar7 = uVar7 + 1;
            local_f4 = local_84[0];
            goto joined_r0x000155f0;
        }
    }
LAB_000155e8:
    piVar8 = (int *)*piVar8;
    local_f4 = local_84[0];
joined_r0x000155f0:
    local_84[0] = local_f4;
    if (piVar8 == (int *)0x0)
        goto joined_r0x000155fc;
    goto LAB_00014c38;
joined_r0x000155fc:
    if (uVar7 < 2) {
        uVar29 = uVar7;
        if (uVar7 == 0)
            goto joined_r0x00015610;
    } else {
        bVar4 = false;
        ppiVar11 = local_84;
        uVar25 = 1;
        do {
            ppiVar16 = ppiVar11 + 1;
            piVar8 = *ppiVar11;
            ppiVar11 = ppiVar11 + 1;
            if (*(byte *)((int)piVar8 + 0x22) <
                *(byte *)((int)*ppiVar16 + 0x22)) {
                uVar29 = uVar25;
                if (bVar4)
                    break;
                bVar4 = true;
            }
            uVar25 = uVar25 + 1;
            uVar29 = uVar7;
        } while (uVar25 != uVar7);
    }
    if (uVar29 != 1) {
        ppaVar31 = &local_a4.ai_next + uVar29;
        uVar7 = 0;
        ppiVar11 = local_84;
        do {
            while (uVar7 = uVar7 + 1, uVar29 <= uVar7) {
            LAB_000156b4:
                ppiVar11 = ppiVar11 + 1;
                local_f4 = local_84[0];
                if (uVar7 == uVar29 - 1)
                    goto LAB_00014f68;
            }
            piVar28 = *ppiVar11;
            piVar8 = ppiVar11[1];
            if (*(byte *)((int)piVar28 + 0x22) < *(byte *)((int)piVar8 + 0x22))
                goto LAB_000156b4;
            ppiVar16 = ppiVar11 + 1;
            do {
                if ((uint)piVar8[0x3f] <= (uint)piVar28[0x3f]) {
                    *ppiVar11 = piVar8;
                    *ppiVar16 = piVar28;
                }
                if (ppaVar31 == (addrinfo **)ppiVar16)
                    break;
                piVar28 = *ppiVar11;
                ppiVar16 = ppiVar16 + 1;
                piVar8 = *ppiVar16;
            } while (*(byte *)((int)piVar8 + 0x22) <=
                     *(byte *)((int)piVar28 + 0x22));
            ppiVar11 = ppiVar11 + 1;
            local_f4 = local_84[0];
        } while (uVar7 != uVar29 - 1);
    LAB_00014f68:
        do {
            uVar7 = 0;
            ppiVar11 = local_84;
            puVar9 = &uStack_60;
            do {
                uVar25 = 0;
                puVar9 = puVar9 + 1;
                *puVar9 = 0;
                do {
                    if (uVar7 != uVar25) {
                        iVar5 = local_84[uVar25][0x43] - (*ppiVar11)[0x43];
                        if (iVar5 < 0) {
                            iVar5 = -iVar5;
                        }
                        if (uVar25 != 0) {
                            uVar35 = 0;
                            do {
                                uVar35 = uVar35 + 1;
                                iVar5 = (iVar5 >> 2) + (iVar5 >> 1);
                            } while (uVar35 != uVar25);
                        }
                        *puVar9 = *puVar9 + iVar5;
                    }
                    uVar25 = uVar25 + 1;
                } while (uVar25 != uVar29);
                uVar7 = uVar7 + 1;
                ppiVar11 = ppiVar11 + 1;
            } while (uVar7 != uVar29);
            iVar5 = (int)*(char *)((int)local_f4 + 0x23);
            uVar7 = 0;
            uVar35 = 1;
            uVar25 = local_5c._0_4_;
            do {
                uVar33 = *(uint *)(local_5c.sa_data + uVar35 * 4 + -2);
                iVar10 = (int)*(char *)((int)local_84[uVar35] + 0x23);
                if (uVar25 <= uVar33) {
                    uVar25 = uVar33;
                    uVar7 = uVar35;
                }
                uVar35 = uVar35 + 1;
                if (iVar10 <= iVar5) {
                    iVar5 = iVar10;
                }
            } while (uVar35 < uVar29);
            if ((int)uVar25 < (0x10000 >> (-iVar5 & 0xffU)) + 0x68f)
                break;
            if (uVar7 + 1 < uVar29) {
                ppiVar11 = local_84 + uVar7;
                do {
                    ppiVar16 = ppiVar11 + 1;
                    *ppiVar11 = ppiVar11[1];
                    ppiVar11 = ppiVar16;
                    local_f4 = local_84[0];
                } while (ppaVar31 != (addrinfo **)ppiVar16);
            }
            uVar29 = uVar29 - 1;
            ppaVar31 = ppaVar31 + -1;
        } while (uVar29 != 1);
    }
    if (iVar34 == 0) {
        if (simple_query != 0)
            goto joined_r0x000156dc;
    } else {
        putchar(10);
    joined_r0x000156dc:
        piVar8 = sys_servers;
        if (sys_servers != (int *)0x0) {
        LAB_00015140:
            __s = stdout;
            if (*(char *)((int)piVar8 + 0x22) != '\0') {
                if (debug == 0) {
                    uVar14 = FUN_0001f658(piVar8 + 1);
                    uVar1 = *(undefined1 *)((int)piVar8 + 0x22);
                    uVar19 = FUN_0001959c(piVar8[0x41], piVar8[0x42], 6);
                    uVar20 = FUN_0001921c(piVar8[0x3f], 5);
                    __fprintf_chk(
                        __s, 1, "server %s, stratum %d, offset %s, delay %s\n",
                        uVar14, uVar1, uVar19, uVar20);
                    goto LAB_00015134;
                }
                uVar14 = FUN_0001f658(piVar8 + 1);
                __fprintf_chk(__s, 1, "server %s, port %d\n", uVar14,
                              *(ushort *)((int)piVar8 + 6) << 8 |
                                  *(ushort *)((int)piVar8 + 6) >> 8);
                if ((*(byte *)((int)piVar8 + 0x21) & 2) == 0) {
                    uVar14 = 0x30;
                } else {
                    uVar14 = 0x31;
                }
                if ((*(byte *)((int)piVar8 + 0x21) & 1) == 0) {
                    uVar19 = 0x30;
                } else {
                    uVar19 = 0x31;
                }
                __fprintf_chk(
                    __s, 1, "stratum %d, precision %d, leap %c%c, trust %03o\n",
                    *(undefined1 *)((int)piVar8 + 0x22),
                    (int)*(char *)((int)piVar8 + 0x23), uVar14, uVar19,
                    (char)piVar8[9]);
                if (*(byte *)((int)piVar8 + 0x22) - 2 < 0xe) {
                    pbVar32 = (byte *)FUN_0001cdb0(piVar8[0xc]);
                } else {
                    pbVar32 = (byte *)((int)piVar8 + 0x2f);
                    iVar34 = 0;
                    do {
                        pbVar32 = pbVar32 + 1;
                        bVar23 = *pbVar32;
                        if (bVar23 == 0)
                            break;
                        ppuVar12 = __ctype_b_loc();
                        if (((*ppuVar12)[(short)(ushort)bVar23] & 0x4000) ==
                            0) {
                            bVar23 = 0x2e;
                        }
                        local_34[iVar34] = bVar23;
                        iVar34 = iVar34 + 1;
                    } while (iVar34 != 4);
                    local_34[iVar34] = 0;
                    pbVar32 = local_34;
                }
                uVar7 = FUN_0001921c(piVar8[10], 6);
                uVar14 = FUN_00018fb4(piVar8[0xb], 0, 6);
                __fprintf_chk(__s, 1,
                              "refid [%s], root delay %s, root dispersion %s\n",
                              pbVar32, uVar7, uVar14);
                uVar25 = (uint) * (ushort *)((int)piVar8 + 0x4a);
                if (*(ushort *)(piVar8 + 0x11) != uVar25) {
                    __fprintf_chk(__s, 1, "transmitted %d, in filter %d\n",
                                  (uint) * (ushort *)(piVar8 + 0x11), uVar25,
                                  uVar14);
                    uVar7 = uVar25;
                }
                uVar19 = FUN_0001d318(piVar8 + 0xd);
                __fprintf_chk(__s, 1, "reference time:      %s\n", uVar19,
                              uVar7, uVar14);
                uVar14 = FUN_0001d318(piVar8 + 0x3b);
                __fprintf_chk(__s, 1, "originate timestamp: %s\n", uVar14);
                uVar14 = FUN_0001d318(piVar8 + 0x3d);
                __fprintf_chk(__s, 1, "transmit timestamp:  %s\n", uVar14);
                if (1 < (int)sys_samples) {
                    fwrite("filter delay: ", 1, 0xe, __s);
                    iVar34 = 0;
                LAB_0001538c:
                    do {
                        iVar5 = iVar34 + 1;
                        if (iVar5 == 5) {
                            fwrite("\n              ", 1, 0xf, __s);
                            if ((int)sys_samples <= iVar34) {
                                __fprintf_chk(__s, 1, " %-10.10s",
                                              &DAT_0002c660);
                                iVar34 = iVar5;
                                goto LAB_0001538c;
                            }
                        LAB_000153a4:
                            puVar13 = (undefined *)FUN_0001921c(
                                piVar8[iVar34 + 0x13], 5);
                        } else {
                            puVar13 = &DAT_0002c660;
                            if (iVar34 < (int)sys_samples)
                                goto LAB_000153a4;
                        }
                        __fprintf_chk(__s, 1, " %-10.10s", puVar13);
                        iVar34 = iVar5;
                    } while (iVar5 != 8);
                    fputc(10, __s);
                    fwrite("filter offset:", 1, 0xe, __s);
                    iVar34 = 0;
                    piVar28 = piVar8;
                    do {
                        iVar5 = iVar34 + 1;
                        if (iVar5 == 5) {
                            fwrite("\n              ", 1, 0xf, __s);
                            if (iVar34 < (int)sys_samples)
                                goto LAB_00015cb4;
                            __fprintf_chk(__s, 1, " %-10.10s", &DAT_0002c660);
                        } else {
                            puVar13 = &DAT_0002c660;
                            if (iVar34 < (int)sys_samples) {
                            LAB_00015cb4:
                                puVar13 = (undefined *)FUN_0001959c(
                                    piVar28[0x1b], piVar28[0x1c], 6);
                            }
                            __fprintf_chk(__s, 1, " %-10.10s", puVar13);
                            if (iVar5 == 8)
                                goto LAB_00015a88;
                        }
                        piVar28 = piVar28 + 2;
                        iVar34 = iVar5;
                    } while (true);
                }
                goto LAB_00015a9c;
            }
            goto LAB_00015134;
        }
    }
LAB_000156e0:
    if (local_f4 != (int *)0x0) {
        if (always_step == 0) {
            if (never_step == 0) {
                uVar7 = local_f4[0x43];
                if ((int)uVar7 < 0) {
                    uVar7 = -uVar7;
                }
                if (0x7fff < uVar7)
                    goto LAB_00015728;
            }
            if (simple_query == 0) {
                uVar25 = local_f4[0x41];
                uVar29 = local_f4[0x42];
                bVar4 = false;
                uVar7 = uVar29;
                if ((int)uVar25 < 0) {
                    uVar7 = -uVar29;
                    uVar25 = ~uVar25;
                    if (uVar29 == 0) {
                        uVar25 = uVar25 + 1;
                    }
                    bVar4 = true;
                }
                uVar29 = uVar25 << 0x1f | uVar7 >> 1;
                bVar38 = uVar29 == 0x10000000;
                if (uVar29 < 0x10000001) {
                    bVar38 = uVar25 >> 1 == 0;
                }
                if (!bVar38) {
                    uVar29 = 0x10000000;
                }
                local_ac.tv_usec =
                    (__suseconds_t)((ulonglong)(uVar7 + uVar29) * 1000000 +
                                        0x80000000 >>
                                    0x20);
                local_ac.tv_sec = CARRY4(uVar7, uVar29) + uVar25;
                if (local_ac.tv_usec == 1000000) {
                    local_ac.tv_sec = local_ac.tv_sec + 1;
                    local_ac.tv_usec = 0;
                }
                if (bVar4) {
                    local_ac.tv_sec = -local_ac.tv_sec;
                    local_ac.tv_usec = -local_ac.tv_usec;
                }
                if (((debug == 0) && (local_ac.tv_usec != 0)) &&
                    (iVar34 = adjtime(&local_ac, (timeval *)&local_a4),
                     iVar34 < 0)) {
                    FUN_0001a828(3, "Can\'t adjust the time of day: %m");
                    /* WARNING: Subroutine does not return */
                    exit(1);
                }
            }
            local_c8 = 0;
            uVar14 = FUN_0001f658(local_f4 + 1);
            uVar19 = FUN_0001959c(local_f4[0x41], local_f4[0x42], 6);
            FUN_0001a828(5, "adjust time server %s offset %s sec", uVar14,
                         uVar19);
        } else {
        LAB_00015728:
            if ((simple_query == 0) && (debug == 0)) {
                iVar5 = local_f4[0x42];
                iVar34 = local_f4[0x41];
                if (iVar34 < 0) {
                    dVar39 = (double)FUN_0002c2dc(
                        -iVar5, -(iVar34 + (uint)(iVar5 != 0)));
                    dVar39 = ldexp(dVar39, -0x20);
                    uVar14 = SUB84(-dVar39, 0);
                } else {
                    dVar39 = (double)FUN_0002c2dc(iVar5, iVar34);
                    dVar39 = ldexp(dVar39, -0x20);
                    uVar14 = SUB84(dVar39, 0);
                }
                iVar34 = FUN_00016dbc(uVar14);
                if (iVar34 == 0) {
                    local_c8 = 0;
                    goto LAB_00015c00;
                }
            }
            uVar14 = FUN_0001f658(local_f4 + 1);
            uVar19 = FUN_0001959c(local_f4[0x41], local_f4[0x42], 6);
            FUN_0001a828(5, "step time server %s offset %s sec", uVar14,
                         uVar19);
            local_c8 = 0;
        }
        goto LAB_00015c00;
    }
    goto LAB_00015dbc;
LAB_00015a88:
    fputc(10, __s);
LAB_00015a9c:
    uVar14 = FUN_0001921c(piVar8[0x3f], 5);
    uVar19 = FUN_00018fb4(piVar8[0x40], 0, 5);
    __fprintf_chk(__s, 1, "delay %s, dispersion %s, ", uVar14, uVar19);
    uVar14 = FUN_0001959c(piVar8[0x41], piVar8[0x42], 6);
    __fprintf_chk(__s, 1, "offset %s\n\n", uVar14);
LAB_00015134:
    piVar8 = (int *)*piVar8;
    if (piVar8 == (int *)0x0)
        goto LAB_000156e0;
    goto LAB_00015140;
LAB_00013fb8:
    if (iVar34 != 0) {
        __fprintf_chk(stderr, 1,
                      "usage: %s [-46bBdqsuv] [-a key#] [-e delay] [-k file] "
                      "[-p samples] [-o version#] [-t timeo] server ...\n",
                      progname);
        /* WARNING: Subroutine does not return */
        exit(2);
    }
    if (sys_samples == 0) {
        if (simple_query == 0) {
            sys_samples = 4;
        } else {
            sys_samples = 1;
        }
    }
    if ((debug == 0) && (simple_query == 0)) {
        if (syslogit != 0) {
        LAB_00015820:
            openlog("ntpdate", 9, 0x18);
            if (debug == 0) {
                iVar34 = 0x7f;
            } else {
                iVar34 = 0xff;
            }
            setlogmask(iVar34);
            if (debug != 0)
                goto LAB_000142bc;
        }
    LAB_00014054:
        if (verbose != 0)
            goto LAB_000142bc;
    } else {
        setvbuf(stdout, &DAT_0004127c, 1, 0x2000);
        if (syslogit != 0)
            goto LAB_00015820;
        if (debug == 0)
            goto LAB_00014054;
    LAB_000142bc:
        FUN_0001a828(5, "%s", Version);
    }
    if (ntp_optind < param_1) {
        do {
            pcVar22 = (char *)param_2[ntp_optind];
            FUN_000203c4(local_34, &DAT_0002c760, 5);
            memset(&local_a4, 0, 0x20);
            local_a4.ai_family = ai_fam_templ;
            local_a4.ai_socktype = 2;
            uVar7 = getaddrinfo(pcVar22, (char *)local_34, &local_a4,
                                (addrinfo **)&local_ac);
            uVar14 = stderr;
            if (uVar7 == 0) {
                if ((addrinfo *)local_ac.tv_sec != (addrinfo *)0x0) {
                    paVar27 = (addrinfo *)local_ac.tv_sec;
                    do {
                        local_5c._0_4_ = uVar7;
                        local_5c.sa_data._2_4_ = uVar7;
                        local_5c.sa_data._6_4_ = uVar7;
                        local_5c.sa_data._10_4_ = uVar7;
                        local_4c = uVar7;
                        local_48 = uVar7;
                        local_44 = uVar7;
                        if (0x1c < paVar27->ai_addrlen) {
                            /* WARNING: Subroutine does not return */
                            FUN_0002073c("ntpdate.c", 0x578, 2,
                                         "ptr->ai_addrlen <= sizeof(addr)");
                        }
                        __memcpy_chk(&local_5c, paVar27->ai_addr,
                                     paVar27->ai_addrlen, 0x1c);
                        iVar34 = socket(local_5c._0_4_ & 0xffff, 2, 0);
                        piVar8 = sys_servers;
                        if (iVar34 != -1) {
                            if (local_5c.sa_family == 2) {
                                sVar17 = 0x10;
                            } else {
                                sVar17 = 0x1c;
                            }
                            iVar5 = connect(iVar34, &local_5c, sVar17);
                            if (iVar5 == 0) {
                                close(iVar34);
                                piVar8 = (int *)FUN_0001967c(0, 0x110, 0, 1);
                                memcpy(piVar8 + 1, paVar27->ai_addr,
                                       paVar27->ai_addrlen);
                                sys_numservers = sys_numservers + 1;
                                piVar8[0xf] = sys_numservers;
                                piVar28 = sys_servers;
                                if (sys_servers != (int *)0x0) {
                                    do {
                                        piVar18 = piVar28;
                                        piVar28 = (int *)*piVar18;
                                    } while (piVar28 != (int *)0x0);
                                    *piVar18 = (int)piVar8;
                                    piVar8 = sys_servers;
                                }
                            } else {
                                close(iVar34);
                                piVar8 = sys_servers;
                            }
                        }
                        sys_servers = piVar8;
                        paVar27 = paVar27->ai_next;
                    } while (paVar27 != (addrinfo *)0x0);
                }
                freeaddrinfo((addrinfo *)local_ac.tv_sec);
            } else {
                if (uVar7 + 4 < 2) {
                    pcVar22 = gai_strerror(uVar7);
                    __fprintf_chk(
                        uVar14, 1,
                        "Exiting, name server cannot be used: %s (%d)", pcVar22,
                        uVar7);
                    pcVar22 = gai_strerror(uVar7);
                    FUN_0001a828(3, "name server cannot be used: %s (%d)",
                                 pcVar22, uVar7);
                    /* WARNING: Subroutine does not return */
                    exit(1);
                }
                pcVar6 = gai_strerror(uVar7);
                __fprintf_chk(uVar14, 1, "Error resolving %s: %s (%d)\n",
                              pcVar22, pcVar6, uVar7);
                pcVar6 = gai_strerror(uVar7);
                FUN_0001a828(3, "Can\'t find host %s: %s (%d)", pcVar22, pcVar6,
                             uVar7);
            }
            ntp_optind = ntp_optind + 1;
        } while (ntp_optind < param_1);
    }
    if (sys_numservers == 0) {
        FUN_0001a828(3, "no servers can be used, exiting");
        /* WARNING: Subroutine does not return */
        exit(1);
    }
    if (sys_authenticate != 0) {
        FUN_00017990();
        iVar34 = FUN_000189a4(key_file);
        if (iVar34 == 0) {
            FUN_0001a828(3, "no key file <%s>, exiting", key_file);
            /* WARNING: Subroutine does not return */
            exit(1);
        }
        FUN_00018038(sys_authkey, 1);
        iVar34 = FUN_0001815c(sys_authkey);
        if (iVar34 == 0) {
            FUN_0001a828(3, "authentication key %lu unknown", sys_authkey);
            /* WARNING: Subroutine does not return */
            exit(1);
        }
    }
    local_ac.tv_sec = 1;
    bVar4 = false;
    if (debug == 0) {
        if (simple_query == 0) {
            bVar4 = unpriv_port == 0;
        } else {
            bVar4 = false;
        }
    }
    FUN_0001d56c(sys_numservers + 2);
    FUN_000203c4(local_34, &DAT_0002c760, 5);
    local_a4.ai_addrlen = 0;
    local_a4.ai_protocol = 0;
    local_a4.ai_addr = (sockaddr *)0x0;
    local_a4.ai_canonname = (char *)0x0;
    local_a4.ai_next = (addrinfo *)0x0;
    local_a4.ai_socktype = 2;
    local_a4.ai_flags = 1;
    local_a4.ai_family = ai_fam_templ;
    iVar34 = getaddrinfo((char *)0x0, (char *)local_34, &local_a4, &local_b8);
    paVar27 = local_b8;
    if (iVar34 != 0) {
        FUN_0001a828(3, "getaddrinfo() failed: %m");
        /* WARNING: Subroutine does not return */
        exit(1);
    }
    nbsock = 0;
    if (local_b8 != (addrinfo *)0x0) {
        iVar34 = 0;
        do {
            iVar5 = socket(local_b8->ai_family, local_b8->ai_socktype,
                           local_b8->ai_protocol);
            *(int *)((int)&fd + iVar34 * 4) = iVar5;
            iVar34 = nbsock;
            iVar5 = *(int *)((int)&fd + nbsock * 4);
            if (iVar5 == -1) {
                puVar9 = (uint *)__errno_location();
                uVar7 = *puVar9;
                bVar38 = 0x5c < uVar7;
                if (uVar7 != 0x5d) {
                    bVar38 = uVar7 != 0x60;
                }
                if (bVar38 && (uVar7 != 0x5d && uVar7 != 0x61)) {
                    FUN_0001a828(3, "socket() failed: %m");
                    /* WARNING: Subroutine does not return */
                    exit(1);
                }
            } else {
                iVar34 = setsockopt(iVar5, 1, 2, &local_ac, 4);
                if (iVar34 < 0) {
                    FUN_0001a828(3, "setsockopt() SO_REUSEADDR failed: %m");
                    /* WARNING: Subroutine does not return */
                    exit(1);
                }
                iVar34 = local_b8->ai_family;
                if (iVar34 == 10) {
                    iVar34 = setsockopt(*(int *)((int)&fd + nbsock * 4), 0x29,
                                        0x1a, &local_ac, 4);
                    if (iVar34 < 0) {
                        FUN_0001a828(3, "setsockopt() IPV6_V6ONLY failed: %m");
                        /* WARNING: Subroutine does not return */
                        exit(1);
                    }
                    iVar34 = local_b8->ai_family;
                }
                iVar5 = nbsock;
                *(int *)((int)&fd_family + nbsock * 4) = iVar34;
                if (bVar4) {
                    local_5c.sa_family = 0;
                    local_5c.sa_data[0] = '\0';
                    local_5c.sa_data[1] = '\0';
                    local_5c.sa_data[2] = '\0';
                    local_5c.sa_data[3] = '\0';
                    local_5c.sa_data[4] = '\0';
                    local_5c.sa_data[5] = '\0';
                    local_5c.sa_data[6] = '\0';
                    local_5c.sa_data[7] = '\0';
                    local_5c.sa_data[8] = '\0';
                    local_5c.sa_data[9] = '\0';
                    local_5c.sa_data[10] = '\0';
                    local_5c.sa_data[0xb] = '\0';
                    local_5c.sa_data[0xc] = '\0';
                    local_5c.sa_data[0xd] = '\0';
                    local_4c = 0;
                    local_48 = 0;
                    local_44 = 0;
                    if (0x1c < local_b8->ai_addrlen) {
                        /* WARNING: Subroutine does not return */
                        FUN_0002073c("ntpdate.c", 0x6e6, 2,
                                     "res->ai_addrlen <= sizeof(addr)");
                    }
                    __memcpy_chk(&local_5c, local_b8->ai_addr,
                                 local_b8->ai_addrlen, 0x1c);
                    if (local_5c.sa_family == 2) {
                        sVar17 = 0x10;
                    } else {
                        sVar17 = 0x1c;
                    }
                    iVar34 =
                        bind(*(int *)((int)&fd + iVar5 * 4), &local_5c, sVar17);
                    iVar5 = nbsock;
                    if (iVar34 < 0) {
                        piVar8 = __errno_location();
                        if (*piVar8 == 0x62) {
                            FUN_0001a828(3,
                                         "the NTP socket is in use, exiting");
                        } else {
                            FUN_0001a828(3, "bind() fails: %m");
                        }
                        /* WARNING: Subroutine does not return */
                        exit(1);
                    }
                }
                iVar34 = *(int *)((int)&fd + iVar5 * 4);
                *(int *)(fdmask + iVar5 * 8) = iVar34;
                *(undefined2 *)(fdmask + iVar5 * 8 + 4) = 1;
                iVar34 = fcntl(iVar34, 4, 0x800);
                if (iVar34 < 0) {
                    FUN_0001a828(3, "fcntl(FNDELAY|FASYNC) fails: %m");
                    /* WARNING: Subroutine does not return */
                    exit(1);
                }
                iVar34 = nbsock + 1;
                nbsock = iVar34;
            }
            local_b8 = local_b8->ai_next;
        } while ((iVar34 < 2) && (local_b8 != (addrinfo *)0x0));
    }
    freeaddrinfo(paVar27);
    alarm_flag = 0;
    FUN_000205d8(0xe, &DAT_000136d4);
    local_a4.ai_family = 200000;
    local_a4.ai_protocol = 100000;
    local_a4.ai_flags = 0;
    local_a4.ai_socktype = 0;
    setitimer(ITIMER_REAL, (itimerval *)&local_a4, (itimerval *)0x0);
    setpriority(PRIO_PROCESS, 0, -0xc);
    initializing = 0;
LAB_00014660:
    if (complete_servers < sys_numservers) {
        local_f4 = (int *)alarm_flag;
        if (alarm_flag != 0) {
            alarm_flag = 0;
            local_f4 = (int *)0x1;
        }
        iVar34 = FUN_0001d470();
        if (iVar34 != 0 || local_f4 != (int *)0x0) {
            iVar34 = FUN_0001d868();
            goto joined_r0x00014820;
        }
        iVar34 = __poll_chk(fdmask, nbsock, (int)timeout * 1000, 0x10);
        if (iVar34 < 1) {
            piVar8 = __errno_location();
            if (iVar34 == -1) {
                if (*piVar8 != 4) {
                    FUN_0001a828(3, "poll() error: %m");
                }
            } else if (*piVar8 != 0) {
                FUN_0001a828(7, "poll(): nfound = %d, error: %m", iVar34);
            }
        } else {
            FUN_00013c3c();
        }
        if (alarm_flag == 0)
            goto LAB_0001499c;
        alarm_flag = 0;
        FUN_0001d470();
        iVar34 = FUN_0001d868();
        if (iVar34 != 0) {
            local_f4 = (int *)0x1;
            goto LAB_00014750;
        }
        goto LAB_000147f8;
    }
    iVar34 = debug;
    if (sys_servers != (int *)0x0) {
        uVar7 = sys_samples - 1;
        if (uVar7 < 8) {
            piVar8 = sys_servers;
            do {
                uVar25 = sys_samples;
                iVar34 = 0;
                do {
                    *(int *)(local_5c.sa_data + iVar34 * 4 + -2) = iVar34;
                    iVar34 = iVar34 + 1;
                } while (iVar34 < (int)sys_samples);
                iVar34 = 0;
                psVar24 = &local_5c;
                if (0 < (int)uVar7) {
                    do {
                        iVar34 = iVar34 + 1;
                        psVar15 = psVar24;
                        if (iVar34 < (int)sys_samples) {
                            do {
                                psVar15 = (sockaddr *)(psVar15->sa_data + 2);
                                iVar5 = *(int *)psVar15;
                                if ((piVar8[iVar5 + 0x13] != 0) &&
                                    (iVar10 = *(int *)psVar24,
                                     piVar8[iVar10 + 0x13] == 0 ||
                                         piVar8[iVar5 + 0x13] <
                                             piVar8[iVar10 + 0x13])) {
                                    psVar24->sa_family = (short)iVar5;
                                    psVar24->sa_data[0] =
                                        (char)((uint)iVar5 >> 0x10);
                                    psVar24->sa_data[1] =
                                        (char)((uint)iVar5 >> 0x18);
                                    *(int *)psVar15 = iVar10;
                                }
                            } while ((sockaddr *)(&uStack_60 + sys_samples) !=
                                     psVar15);
                        }
                        psVar24 = (sockaddr *)(psVar24->sa_data + 2);
                    } while (iVar34 < (int)uVar7);
                }
                if (piVar8[local_5c._0_4_ + 0x13] == 0) {
                    piVar8[0x3f] = 0;
                    piVar8[0x42] = 0;
                    piVar8[0x41] = 0;
                    piVar8[0x43] = 0;
                    piVar8[0x40] = 0x400000;
                    piVar8 = (int *)*piVar8;
                } else {
                    piVar8[0x3f] = piVar8[local_5c._0_4_ + 0x13];
                    iVar34 = piVar8[local_5c._0_4_ * 2 + 0x1b];
                    iVar5 = piVar8[local_5c._0_4_ * 2 + 0x1c];
                    piVar8[0x41] = iVar34;
                    piVar8[0x42] = iVar5;
                    if (iVar34 < 0x10000) {
                        if (iVar34 < -0xffff) {
                            uVar7 = 0x80000000;
                        } else {
                            uVar7 = iVar34 << 0x10 | (uint)piVar8[0x42] >> 0x10;
                        }
                    } else {
                        uVar7 = 0x7fffffff;
                    }
                    piVar8[0x43] = uVar7;
                    piVar8[0x40] = 0;
                    if (uVar25 != 1) {
                        iVar34 = 0;
                        uVar7 = 1;
                        do {
                            iVar5 = *(int *)(local_5c.sa_data + uVar7 * 4 + -2);
                            if (piVar8[iVar5 + 0x13] == 0) {
                                uVar29 = 0x400000;
                            } else {
                                uVar29 = piVar8[iVar5 + 0x2b] -
                                         piVar8[local_5c._0_4_ + 0x2b];
                                if ((int)uVar29 < 0) {
                                    uVar29 = -uVar29;
                                }
                                if (0x3fffff < (int)uVar29) {
                                    uVar29 = 0x400000;
                                }
                            }
                            iVar34 = iVar34 + (uVar29 >> (uVar7 & 0xff));
                            uVar7 = uVar7 + 1;
                        } while (uVar25 != uVar7);
                        piVar8[0x40] = iVar34;
                    }
                    piVar8 = (int *)*piVar8;
                }
                if (piVar8 == (int *)0x0) {
                    iVar34 = debug;
                    if (sys_servers == (int *)0x0)
                        goto joined_r0x00015610;
                    uVar7 = 0;
                    piVar8 = sys_servers;
                    goto LAB_00014c38;
                }
                uVar7 = sys_samples - 1;
            } while (uVar7 < 8);
        }
        /* WARNING: Subroutine does not return */
        FUN_0002073c("ntpdate.c", 0x3c6, 2,
                     "(0 < sys_samples) && (sys_samples <= 8)");
    }
joined_r0x00015610:
    if (iVar34 == 0) {
        if ((simple_query != 0) && (sys_servers != (int *)0x0)) {
            local_f4 = (int *)0x0;
            piVar8 = sys_servers;
            goto LAB_00015140;
        }
    } else {
        putchar(10);
        if (sys_servers != (int *)0x0) {
            local_f4 = (int *)0x0;
            piVar8 = sys_servers;
            goto LAB_00015140;
        }
    }
LAB_00015dbc:
    FUN_0001a828(3, "no server suitable for synchronization found");
    local_c8 = 1;
LAB_00015c00:
    if (local_2c != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail(local_c8);
    }
    return;
}

void entry(undefined4 param_1)

{
    undefined4 in_stack_00000000;

    __libc_start_main(main, in_stack_00000000, &stack0x00000004, 0x2c581,
                      0x2c5bd, param_1);
    /* WARNING: Subroutine does not return */
    abort();
}

/* WARNING: Removing unreachable block (ram,0x00013620) */

void FUN_0001360c(void)

{
    __gmon_start__();
    return;
}

/* WARNING: Removing unreachable block (ram,0x00013640) */
/* WARNING: Removing unreachable block (ram,0x00013646) */

void FUN_00013630(void)

{
    return;
}

/* WARNING: Removing unreachable block (ram,0x00013674) */
/* WARNING: Removing unreachable block (ram,0x0001367a) */

void FUN_0001365c(void)

{
    return;
}

void _FINI_0(void)

{
    if (DAT_00041278 == '\0') {
        __cxa_finalize(DAT_00041004);
        FUN_00013630();
        DAT_00041278 = '\x01';
    }
    return;
}

void FUN_00013730(sockaddr *param_1, void *param_2, size_t param_3)

{
    int iVar1;
    int iVar2;
    ssize_t sVar3;
    int *piVar4;
    undefined4 uVar5;
    socklen_t __addr_len;
    uint uVar6;

    iVar1 = __stack_chk_guard;
    uVar6 = (uint)param_1->sa_family;
    if (uVar6 == (uint)fd_family) {
        iVar2 = 0;
    } else {
        if (uVar6 != fd_family._4_4_)
            goto LAB_0001377c;
        iVar2 = 1;
    }
    iVar2 = *(int *)((int)&fd + iVar2 * 4);
    if (iVar2 != -1) {
        if (uVar6 == 2) {
            __addr_len = 0x10;
        } else {
            __addr_len = 0x1c;
        }
        sVar3 = sendto(iVar2, param_2, param_3, 0, param_1, __addr_len);
        if ((sVar3 == -1) &&
            (piVar4 = __errno_location(), *piVar4 != 0xb && *piVar4 != 0x69)) {
            uVar5 = FUN_0001fa28(param_1);
            if (iVar1 == __stack_chk_guard) {
                FUN_0001a828(3, "sendto(%s): %m", uVar5);
                return;
            }
        } else if (iVar1 == __stack_chk_guard) {
            return;
        }
        /* WARNING: Subroutine does not return */
        __stack_chk_fail();
    }
LAB_0001377c:
    FUN_0001a828(3, "cannot find family compatible socket to send ntp packet");
    /* WARNING: Subroutine does not return */
    exit(1);
}

void FUN_00013a94(int param_1)

{
    int iVar1;
    undefined4 uVar2;
    uint uVar3;
    uint uVar4;
    int iVar5;
    int iVar6;
    bool bVar7;
    byte local_86c[40];
    uint local_844;
    uint local_840;
    uint local_83c;
    int local_24;

    iVar6 = __stack_chk_guard;
    uVar4 = (uint) * (ushort *)(param_1 + 0x4a);
    if (uVar4 < 8 && uVar4 < *(ushort *)(param_1 + 0x44)) {
        iVar1 = uVar4 * 8;
        uVar3 = uVar4 + 1;
        iVar5 = param_1 + uVar4 * 4;
        uVar4 = uVar3 & 0xffff;
        iVar1 = iVar1 + 0x6c;
        *(undefined4 *)(iVar5 + 0x4c) = 0;
        *(undefined4 *)(param_1 + iVar1) = 0;
        *(undefined4 *)(param_1 + iVar1 + 4) = 0;
        *(undefined4 *)(iVar5 + 0xac) = 0;
        *(undefined4 *)(iVar5 + 0xcc) = 0;
        *(short *)(param_1 + 0x4a) = (short)uVar3;
    }
    if ((int)uVar4 < sys_samples) {
        if (iVar6 == __stack_chk_guard) {
            iVar6 = param_1 + 4;
            local_24 = __stack_chk_guard;
            if (debug != 0) {
                uVar2 = FUN_0001f658(iVar6);
                __printf_chk(1, "transmit(%s)\n", uVar2);
            }
            local_86c[2] = 3;
            local_86c[1] = 0;
            local_86c[0xc] = 0;
            local_86c[0xd] = 0;
            local_86c[0xe] = 0;
            local_86c[0xf] = 0;
            local_86c[0x14] = 0;
            local_86c[0x15] = 0;
            local_86c[0x16] = 0;
            local_86c[0x17] = 0;
            local_86c[0x10] = 0;
            local_86c[0x11] = 0;
            local_86c[0x12] = 0;
            local_86c[0x13] = 0;
            local_86c[0x1c] = 0;
            local_86c[0x1d] = 0;
            local_86c[0x1e] = 0;
            local_86c[0x1f] = 0;
            local_86c[0x18] = 0;
            local_86c[0x19] = 0;
            local_86c[0x1a] = 0;
            local_86c[0x1b] = 0;
            local_86c[0x24] = 0;
            local_86c[0x25] = 0;
            local_86c[0x26] = 0;
            local_86c[0x27] = 0;
            local_86c[0x20] = 0;
            local_86c[0x21] = 0;
            local_86c[0x22] = 0;
            local_86c[0x23] = 0;
            local_86c[0] = ~(~((byte)(sys_version << 3) & 0x38) & 0x3c);
            local_86c[3] = 0xfa;
            local_86c[4] = 0;
            local_86c[5] = 1;
            local_86c[6] = 0;
            local_86c[7] = 0;
            local_86c[8] = 0;
            local_86c[9] = 1;
            local_86c[10] = 0;
            local_86c[0xb] = 0;
            if (sys_authenticate == 0) {
                FUN_000165ac(param_1 + 0xf4);
                uVar3 = *(uint *)(param_1 + 0xf4);
                uVar4 = *(uint *)(param_1 + 0xf8);
                local_844 = uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                            (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18;
                local_840 = uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                            (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18;
                FUN_00013730(iVar6, local_86c, 0x30);
                if (1 < debug) {
                    uVar2 = FUN_0001f658(iVar6);
                    __printf_chk(1, "transmit to %s\n", uVar2);
                }
            } else {
                local_83c =
                    sys_authkey << 0x18 | (sys_authkey >> 8 & 0xff) << 0x10 |
                    (sys_authkey >> 0x10 & 0xff) << 8 | sys_authkey >> 0x18;
                FUN_000165ac(param_1 + 0xf4);
                uVar4 = sys_authkey;
                bVar7 = CARRY4(*(uint *)(param_1 + 0xf8), sys_authdelay);
                uVar3 = *(uint *)(param_1 + 0xf8) + sys_authdelay;
                *(uint *)(param_1 + 0xf8) = uVar3;
                local_840 = uVar3 * 0x1000000 | (uVar3 >> 8 & 0xff) << 0x10 |
                            (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18;
                uVar3 = (uint)bVar7 + *(int *)(param_1 + 0xf4);
                *(uint *)(param_1 + 0xf4) = uVar3;
                local_844 = uVar3 * 0x1000000 | (uVar3 >> 8 & 0xff) << 0x10 |
                            (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18;
                iVar1 = FUN_00018608(uVar4, local_86c, 0x30);
                FUN_00013730(iVar6, local_86c, iVar1 + 0x30);
                if (1 < debug) {
                    uVar2 = FUN_0001f658(iVar6);
                    __printf_chk(1, "transmit auth to %s\n", uVar2);
                }
            }
            bVar7 = local_24 != __stack_chk_guard;
            *(int *)(param_1 + 0x3c) = current_time + sys_timeout;
            *(short *)(param_1 + 0x44) = *(short *)(param_1 + 0x44) + 1;
            if (bVar7) {
                /* WARNING: Subroutine does not return */
                __stack_chk_fail();
            }
            return;
        }
    } else {
        *(undefined4 *)(param_1 + 0x3c) = 0;
        complete_servers = complete_servers + 1;
        if (iVar6 == __stack_chk_guard) {
            return;
        }
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_00013b8c(void)

{
    int iVar1;
    int *piVar2;

    iVar1 = __stack_chk_guard;
    current_time = current_time + 1;
    piVar2 = sys_servers;
    if (sys_servers != (int *)0x0) {
        do {
            while ((piVar2[0xf] == 0 || (current_time < (uint)piVar2[0xf]))) {
                piVar2 = (int *)*piVar2;
                if (piVar2 == (int *)0x0)
                    goto LAB_00013c10;
            }
            FUN_00013a94(piVar2);
            piVar2 = (int *)*piVar2;
        } while (piVar2 != (int *)0x0);
    }
LAB_00013c10:
    if (iVar1 != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail();
    }
    return;
}

void FUN_00013c3c(void)

{
    int iVar1;
    ssize_t sVar2;
    int *piVar3;
    int iVar4;
    socklen_t local_ac;
    undefined4 local_a8;
    undefined4 uStack_a4;
    undefined4 local_a0;
    uint uStack_9c;
    undefined4 uStack_98;
    uint uStack_94;
    undefined1 auStack_90[100];
    int local_2c;

    iVar4 = 0;
    local_2c = __stack_chk_guard;
    do {
        local_a0 = fdmask._0_4_;
        uStack_9c = fdmask._4_4_;
        uStack_98 = fdmask._8_4_;
        uStack_94 = fdmask._12_4_;
        iVar1 = __poll_chk(&local_a0, nbsock, 0, 0x10);
        if (0 < nbsock) {
            if ((uStack_9c & 0x10000) == 0) {
                if ((nbsock == 1) || ((uStack_94 & 0x10000) == 0))
                    goto joined_r0x00013cc8;
                iVar4 = 1;
            } else {
                iVar4 = 0;
            }
            iVar4 = *(int *)((int)&fd + iVar4 * 4);
        }
    joined_r0x00013cc8:
        if (iVar1 == 0)
            goto LAB_00013d84;
        if (iVar1 == -1) {
            piVar3 = __errno_location();
            if (*piVar3 != 4) {
                FUN_0001a828(3, "poll() error: %m");
            }
        LAB_00013d84:
            if (local_2c != __stack_chk_guard) {
                /* WARNING: Subroutine does not return */
                __stack_chk_fail();
            }
            return;
        }
        FUN_000165ac(&local_a8);
        if ((initializing == 0) && (iVar1 = FUN_0001d41c(), iVar1 != 0)) {
            iVar1 = FUN_0001d7cc();
            local_ac = 0x1c;
            sVar2 = recvfrom(iVar4, (void *)(iVar1 + 0x58), 0x848, 0,
                             (sockaddr *)(iVar1 + 4), &local_ac);
            *(ssize_t *)(iVar1 + 0x54) = sVar2;
            if (sVar2 == -1) {
                FUN_0001d66c(iVar1);
            } else {
                *(undefined4 *)(iVar1 + 0x48) = local_a8;
                *(undefined4 *)(iVar1 + 0x4c) = uStack_a4;
                FUN_0001d708(iVar1);
            }
        } else {
            read(iVar4, auStack_90, 100);
        }
    } while (true);
}

void FUN_00016488(void)

{
    int iVar1;
    double in_d0;
    double dVar2;

    iVar1 = __stack_chk_guard;
    sys_fuzz = in_d0;
    if (in_d0 < 0.0) {
        /* WARNING: Subroutine does not return */
        FUN_0002073c("systime.c", 0x75, 2, "sys_fuzz >= 0");
    }
    if (in_d0 <= 1.0) {
        dVar2 = ceil(in_d0 * 1000000000.0);
        sys_fuzz_nsec = (undefined4)(longlong)dVar2;
        if (iVar1 == __stack_chk_guard) {
            return;
        }
        /* WARNING: Subroutine does not return */
        __stack_chk_fail();
    }
    /* WARNING: Subroutine does not return */
    FUN_0002073c("systime.c", 0x76, 2, "sys_fuzz <= 1.0");
}

/* WARNING: Removing unreachable block (ram,0x000165a0) */

void FUN_00016568(void)

{
    return;
}

void FUN_000165ac(int *param_1)

{
    int iVar1;
    int iVar2;
    uint uVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    uint uVar7;
    int iVar8;
    bool bVar9;
    bool bVar10;
    undefined4 uVar11;
    double dVar12;
    undefined4 extraout_s1;
    double dVar13;
    undefined8 uVar14;
    timeval local_5c;
    timeval tStack_54;
    int local_4c;
    timespec local_34;
    int local_2c;

    local_2c = __stack_chk_guard;
    iVar2 = clock_gettime(0, &local_34);
    if (iVar2 < 0) {
        iVar2 = 0x16b30;
        uVar11 = FUN_00013530();
        local_4c = __stack_chk_guard;
        if ((double)CONCAT44(extraout_s1, uVar11) == 0.0) {
            if (((enable_panic_check != 0) && (allow_panic != 0)) &&
                (FUN_0001a828(3, "adj_systime: allow_panic is TRUE!"),
                 allow_panic != 0)) {
                /* WARNING: Subroutine does not return */
                FUN_0002073c("systime.c", 0x136, 2, "!allow_panic");
            }
        } else {
            dVar12 = (double)CONCAT44(extraout_s1, uVar11) + sys_residual;
            bVar9 = dVar12 < 0.0;
            if (bVar9) {
                dVar12 = -dVar12;
                iVar2 = 1;
            }
            local_5c.tv_sec = (__time_t)(longlong)dVar12;
            if (!bVar9) {
                iVar2 = 0;
            }
            dVar12 = dVar12 - (double)(longlong)local_5c.tv_sec;
            dVar13 = sys_tick;
            if (sys_tick <= sys_fuzz) {
                dVar13 = 1e-06;
            }
            local_5c.tv_usec =
                (__suseconds_t)(longlong)((double)(longlong)(int)(longlong)(dVar12 /
                                                                                dVar13 +
                                                                            0.5) *
                                              dVar13 * 1000000.0 +
                                          0.5);
            if (999999 < local_5c.tv_usec) {
                dVar12 = dVar12 - 1.0;
                local_5c.tv_usec = local_5c.tv_usec + -1000000;
                local_5c.tv_sec = local_5c.tv_sec + 1;
            }
            sys_residual = dVar12 - (double)(longlong)local_5c.tv_usec * 1e-06;
            if (iVar2 != 0) {
                sys_residual = -sys_residual;
                local_5c.tv_sec = -local_5c.tv_sec;
                local_5c.tv_usec = -local_5c.tv_usec;
            }
            if (((local_5c.tv_sec != 0) || (local_5c.tv_usec != 0)) &&
                (iVar2 = adjtime(&local_5c, &tStack_54), iVar2 < 0)) {
                FUN_0001a828(3, "adj_systime: %m");
                iVar2 = enable_panic_check;
                if ((enable_panic_check != 0) &&
                    (iVar2 = allow_panic, allow_panic != 0)) {
                    FUN_0001a828(3, "adj_systime: allow_panic is TRUE!");
                    iVar2 = 0;
                }
                goto LAB_00016b88;
            }
            if ((enable_panic_check != 0) && (allow_panic != 0)) {
                FUN_0001a828(3, "adj_systime: allow_panic is TRUE!");
            }
        }
        iVar2 = 1;
    LAB_00016b88:
        if (local_4c == __stack_chk_guard) {
            /* WARNING: Could not recover jumptable at 0x00016b9c. Too many
             * branches */
            /* WARNING: Treating indirect jump as call */
            (*(code *)0x16b30)();
            return;
        }
        /* WARNING: Subroutine does not return */
        __stack_chk_fail(iVar2);
    }
    if (trunc_os_clock != 0) {
        local_34.tv_nsec =
            (long)(longlong)((double)(longlong)(int)(longlong)(((double)(longlong)
                                                                    local_34
                                                                        .tv_nsec *
                                                                1e-09) /
                                                               sys_tick) *
                             1000000000.0 * sys_tick);
    }
    iVar5 = local_34.tv_nsec + 50000000;
    iVar6 = local_34.tv_sec;
    if (iVar5 < 0) {
        do {
            iVar5 = iVar5 + 1000000000;
            iVar4 = iVar6 + -1;
            iVar6 = iVar6 + -1;
        } while (iVar5 < 0);
    } else {
        iVar4 = local_34.tv_sec;
        if (999999999 < iVar5) {
            iVar5 = local_34.tv_nsec + -950000000;
            bVar10 = SBORROW4(iVar5, 999999999);
            bVar9 = iVar5 != 999999999;
            if (iVar5 < 1000000000) {
                iVar2 = local_34.tv_sec + 1;
            } else {
                iVar5 = -1950000000;
            }
            iVar4 = iVar2;
            if (bVar9 && local_34.tv_nsec + -1949999999 < 0 == bVar10) {
                iVar5 = local_34.tv_nsec + iVar5;
                iVar4 = local_34.tv_sec + 2;
            }
        }
    }
    if (DAT_000432b8 < iVar4) {
        iVar2 = 1 - (uint)(iVar4 < DAT_000432b8);
    } else {
        iVar2 = -(uint)(iVar4 < DAT_000432b8);
    }
    if (iVar2 == 0) {
        if (DAT_000432bc < iVar5) {
            iVar2 = 1 - (uint)(iVar5 < DAT_000432bc);
        } else {
            iVar2 = -(uint)(iVar5 < DAT_000432bc);
        }
    }
    if (iVar2 == -1) {
        DAT_000432c0 = 1;
        sys_lamport = sys_lamport + 1;
    }
    DAT_000432b8 = local_34.tv_sec;
    DAT_000432bc = local_34.tv_nsec;
    iVar6 = sys_fuzz_nsec + DAT_000432c8;
    iVar2 = DAT_000432c4;
    if (iVar6 < 0) {
        do {
            iVar5 = iVar6 + 1000000000;
            iVar2 = iVar2 + -1;
            iVar6 = iVar5;
        } while (iVar5 < 0);
    } else {
        iVar5 = iVar6;
        if (999999999 < iVar6) {
            iVar5 = iVar6 + -1000000000;
            iVar4 = iVar6 + -1999999999;
            if (iVar5 < 1000000000) {
                iVar2 = DAT_000432c4 + 1;
            } else {
                iVar6 = iVar6 + -0x77360000;
            }
            if (iVar5 != 999999999 && iVar4 < 0 == SBORROW4(iVar5, 999999999)) {
                iVar2 = iVar2 + 2;
                iVar5 = iVar6 + 0x6c00;
            }
        }
    }
    if (iVar2 < local_34.tv_sec) {
        iVar6 = 1 - (uint)(local_34.tv_sec < iVar2);
    } else {
        iVar6 = -(uint)(local_34.tv_sec < iVar2);
    }
    if (iVar6 == 0) {
        if (iVar5 < local_34.tv_nsec) {
            iVar6 = 1 - (uint)(local_34.tv_nsec < iVar5);
        } else {
            iVar6 = -(uint)(local_34.tv_nsec < iVar5);
        }
        if (iVar6 == -1)
            goto LAB_00016954;
    LAB_00016774:
        DAT_000432c4 = local_34.tv_sec;
        DAT_000432c8 = local_34.tv_nsec;
        iVar5 = local_34.tv_nsec;
        iVar2 = local_34.tv_sec;
        if (local_34.tv_nsec < 0)
            goto LAB_00016ac8;
        if (999999999 < local_34.tv_nsec) {
            iVar5 = local_34.tv_nsec + -1000000000;
            iVar6 = local_34.tv_nsec + -1999999999;
            if (iVar5 < 1000000000) {
                iVar2 = local_34.tv_sec + 1;
            } else {
                local_34.tv_nsec = local_34.tv_nsec + -0x77360000;
            }
            if (iVar5 != 999999999 && iVar6 < 0 == SBORROW4(iVar5, 999999999)) {
                iVar2 = iVar2 + 2;
                iVar5 = local_34.tv_nsec + 0x6c00;
            }
        }
    } else {
        if (iVar6 != -1)
            goto LAB_00016774;
    LAB_00016954:
        iVar4 = iVar5 - local_34.tv_nsec;
        iVar6 = iVar2 - local_34.tv_sec;
        if (iVar4 < 0) {
            do {
                iVar8 = iVar4 + 1000000000;
                iVar6 = iVar6 + -1;
                iVar4 = iVar8;
            } while (iVar8 < 0);
        } else {
            iVar8 = iVar4;
            if (999999999 < iVar4) {
                iVar8 = iVar4 + -1000000000;
                iVar1 = iVar4 + -1999999999;
                if (iVar8 < 1000000000) {
                    iVar6 = iVar6 + 1;
                } else {
                    iVar4 = iVar4 + -0x77360000;
                }
                if (iVar8 != 999999999 &&
                    iVar1 < 0 == SBORROW4(iVar8, 999999999)) {
                    iVar6 = iVar6 + 2;
                    iVar8 = iVar4 + 0x6c00;
                }
            }
        }
        if (0 < iVar6) {
            if (DAT_000432c0 == 0) {
                dVar12 =
                    (double)(longlong)iVar6 + (double)(longlong)iVar8 * 1e-09;
                FUN_0001a828(
                    3, "get_systime Lamport advance exceeds one second (%.9f)",
                    SUB84(dVar12, 0), (int)((ulonglong)dVar12 >> 0x20));
                /* WARNING: Subroutine does not return */
                exit(1);
            }
            goto LAB_00016774;
        }
        DAT_000432c8 = iVar5;
        DAT_000432c4 = iVar2;
        if (DAT_000432c0 != 0)
            goto LAB_00016774;
        for (; local_34.tv_nsec = DAT_000432c8, local_34.tv_sec = DAT_000432c4,
               iVar5 < 0;
             iVar5 = iVar5 + 1000000000) {
        LAB_00016ac8:
            iVar2 = iVar2 + -1;
            DAT_000432c8 = local_34.tv_nsec;
            DAT_000432c4 = local_34.tv_sec;
        }
    }
    local_34.tv_sec = DAT_000432c4;
    local_34.tv_nsec = DAT_000432c8;
    uVar3 = FUN_0002c3e8(500000000, iVar5, 1000000000, 0);
    iVar6 = FUN_0001cc30();
    dVar12 = ((double)(longlong)iVar6 + (double)(longlong)iVar6) *
             2.3283064365386963e-10 * sys_fuzz;
    if (dVar12 < 0.0) {
        dVar12 = ldexp(-dVar12, 0x20);
        uVar14 =
            FUN_0002c428(SUB84(dVar12, 0), (int)((ulonglong)dVar12 >> 0x20));
        uVar14 = CONCAT44(
            -((int)((ulonglong)uVar14 >> 0x20) + (uint)((int)uVar14 != 0)),
            -(int)uVar14);
    } else {
        dVar12 = ldexp(dVar12, 0x20);
        uVar14 =
            FUN_0002c428(SUB84(dVar12, 0), (int)((ulonglong)dVar12 >> 0x20));
    }
    iVar6 = __stack_chk_guard;
    uVar7 = (uint)uVar14 + uVar3;
    iVar2 = iVar2 + -0x7c558180 + (int)((ulonglong)uVar14 >> 0x20) +
            (uint)CARRY4((uint)uVar14, uVar3);
    if (DAT_000432cc == 0 && DAT_000432d0 == 0) {
        if (DAT_000432c0 == 0)
            goto LAB_000168a0;
    } else if (DAT_000432c0 == 0) {
        if (0.0 < sys_fuzz) {
            iVar5 = iVar2;
            if (uVar7 < DAT_000432d0) {
                iVar5 = iVar2 + -1;
            }
            iVar5 = iVar5 - DAT_000432cc;
            if (uVar7 == DAT_000432d0) {
                iVar5 = iVar5 + -1;
            }
            if (iVar5 < 0) {
                sys_tsrounding = sys_tsrounding + 1;
                iVar2 = (uint)(DAT_000432d0 == 0xffffffff) + DAT_000432cc;
                uVar7 = DAT_000432d0 + 1;
            }
        }
        goto LAB_000168a0;
    }
    DAT_000432c0 = 0;
LAB_000168a0:
    DAT_000432d0 = uVar7;
    DAT_000432cc = iVar2;
    iVar2 = DAT_000432cc;
    param_1[1] = DAT_000432d0;
    *param_1 = iVar2;
    if (local_2c == iVar6) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

/* WARNING: Control flow encountered bad instruction data */

void FUN_00016dbc(void)

{
    longlong lVar1;
    int iVar2;
    uint uVar3;
    undefined4 uVar4;
    undefined4 *puVar5;
    long lVar6;
    undefined4 extraout_r2;
    uint uVar7;
    int iVar8;
    undefined4 unaff_r9;
    int iVar9;
    undefined4 extraout_r12;
    bool bVar10;
    undefined4 in_cr1;
    undefined4 in_cr2;
    undefined4 in_cr11;
    double in_d0;
    double dVar11;
    undefined8 uVar12;
    undefined8 uVar13;
    int local_50[2];
    undefined4 local_48;
    int local_44;
    int local_40;
    timespec local_3c;
    int local_34;

    local_48 = 0x7fffffff;
    local_34 = __stack_chk_guard;
    if (sys_residual < 0.0) {
        dVar11 = ldexp(-sys_residual, 0x20);
        uVar12 =
            FUN_0002c428(SUB84(dVar11, 0), (int)((ulonglong)dVar11 >> 0x20));
        uVar12 = CONCAT44(
            -((int)((ulonglong)uVar12 >> 0x20) + (uint)((int)uVar12 != 0)),
            -(int)uVar12);
    } else {
        dVar11 = ldexp(sys_residual, 0x20);
        uVar12 =
            FUN_0002c428(SUB84(dVar11, 0), (int)((ulonglong)dVar11 >> 0x20));
    }
    puVar5 = (undefined4 *)((ulonglong)uVar12 >> 0x20);
    if (in_d0 < 0.0) {
        dVar11 = ldexp(-in_d0, 0x20);
        uVar13 =
            FUN_0002c428(SUB84(dVar11, 0), (int)((ulonglong)dVar11 >> 0x20));
        uVar13 = CONCAT44(
            -((int)((ulonglong)uVar13 >> 0x20) + (uint)((int)uVar13 != 0)),
            -(int)uVar13);
    } else {
        dVar11 = ldexp(in_d0, 0x20);
        uVar13 =
            FUN_0002c428(SUB84(dVar11, 0), (int)((ulonglong)dVar11 >> 0x20));
    }
    uVar7 = (uint)uVar12 + (uint)uVar13;
    iVar8 = (int)puVar5 + (int)((ulonglong)uVar13 >> 0x20) + -0x7c558180;
    iVar2 = clock_gettime(0, &local_3c);
    bVar10 = true;
    if (iVar2 < 0) {
        uVar4 = FUN_00013530();
        *puVar5 = 0x17108;
        puVar5[-1] = 0x17100;
        puVar5[-2] = extraout_r12;
        puVar5[-3] = &__stack_chk_guard;
        puVar5[-4] = unaff_r9;
        puVar5[-5] = iVar8;
        puVar5[-6] = uVar7;
        puVar5[-7] = extraout_r2;
        puVar5[-8] = uVar4;
        if (!bVar10) {
            coprocessor_function(0xe, 1, 0, in_cr2, in_cr1, in_cr11);
            func_0xfe6c9918(uVar4);
        }
        /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
    }
    if (trunc_os_clock != 0) {
        local_3c.tv_nsec =
            (long)(longlong)((double)(longlong)(int)(longlong)(((double)(longlong)
                                                                    local_3c
                                                                        .tv_nsec *
                                                                1e-09) /
                                                               sys_tick) *
                             1000000000.0 * sys_tick);
    }
    iVar2 = local_3c.tv_nsec;
    if (local_3c.tv_nsec < 0) {
        do {
            iVar2 = iVar2 + 1000000000;
            iVar9 = local_3c.tv_sec + -1;
            local_3c.tv_sec = iVar9;
        } while (iVar2 < 0);
    } else {
        iVar9 = local_3c.tv_sec;
        if (999999999 < local_3c.tv_nsec) {
            iVar2 = local_3c.tv_nsec + -1000000000;
            if (iVar2 < 1000000000) {
                lVar6 = local_3c.tv_nsec;
                iVar9 = local_3c.tv_sec + 1;
            } else {
                lVar6 = local_3c.tv_nsec + -0x77360000;
            }
            if (iVar2 != 999999999 && local_3c.tv_nsec + -1999999999 < 0 ==
                                          SBORROW4(iVar2, 999999999)) {
                iVar9 = iVar9 + 2;
                iVar2 = lVar6 + 0x6c00;
            }
        }
    }
    uVar3 = FUN_0002c3e8(500000000, iVar2, 1000000000, 0);
    FUN_0001b15c(local_50,
                 (uint)CARRY4((uint)uVar12, (uint)uVar13) + iVar8 + iVar9 +
                     (uint)CARRY4(uVar7, uVar3),
                 &local_48);
    lVar1 = (ulonglong)(uVar7 + uVar3) * 1000000 + 0x80000000;
    local_40 = (int)((ulonglong)lVar1 >> 0x20);
    if (local_40 == 1000000) {
        local_50[0] = local_50[0] + 1;
        local_40 = 0;
    }
    local_44 = local_50[0];
    iVar2 = FUN_00019dcc(&local_44, 0, (int)lVar1);
    if (iVar2 == 0) {
        DAT_000432c0 = (uint)(in_d0 < 0.0);
        sys_residual._0_4_ = 0;
        sys_residual._4_4_ = 0;
        if (step_callback != (code *)0x0) {
            (*step_callback)();
        }
        if (((enable_panic_check != 0) && (allow_panic != 0)) &&
            (FUN_0001a828(3, "step_systime: allow_panic is TRUE!"),
             allow_panic != 0)) {
            /* WARNING: Subroutine does not return */
            FUN_0002073c("systime.c", 0x24d, 2, "!allow_panic");
        }
        iVar2 = 1;
    } else {
        FUN_0001a828(3, "step-systime: %m");
        iVar2 = enable_panic_check;
        if ((enable_panic_check != 0) &&
            (iVar2 = allow_panic, allow_panic != 0)) {
            FUN_0001a828(3, "step_systime: allow_panic is TRUE!");
            iVar2 = 0;
        }
    }
    if (local_34 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar2);
}

void FUN_00017198(byte *param_1, undefined4 *param_2)

{
    ushort uVar1;
    int iVar2;
    ushort uVar3;
    ushort **ppuVar4;
    char *pcVar5;
    char *pcVar6;
    byte *pbVar7;
    int iVar8;
    char *pcVar9;
    char *pcVar10;
    ushort uVar11;
    ushort *puVar12;
    byte *pbVar13;
    byte *pbVar14;
    uint uVar15;

    iVar2 = __stack_chk_guard;
    if (param_1 == (byte *)0x0) {
        /* WARNING: Subroutine does not return */
        FUN_0002073c("atolfp.c", 0x2b, 0, "str != ((void *)0)");
    }
    ppuVar4 = __ctype_b_loc();
    puVar12 = *ppuVar4;
    do {
        pbVar14 = param_1;
        pcVar9 = (char *)(uint)*pbVar14;
        uVar11 = puVar12[(int)pcVar9] & 0x2000;
        param_1 = pbVar14 + 1;
    } while ((puVar12[(int)pcVar9] & 0x2000) != 0);
    if (pcVar9 == (char *)0x2d) {
        pcVar9 = (char *)(uint)pbVar14[1];
        uVar11 = 1;
        pbVar14 = pbVar14 + 1;
    }
    if (pcVar9 == (char *)0x2b) {
        pcVar9 = (char *)(uint)pbVar14[1];
        pbVar14 = pbVar14 + 1;
    }
    if (pcVar9 == (char *)0x2e) {
        pcVar10 = (char *)(puVar12[0x2e] & 0x2000);
        if ((puVar12[0x2e] & 0x2000) == 0) {
        LAB_000172d4:
            pcVar9 = (char *)0x0;
            pbVar13 = pbVar14 + 1;
            do {
                pbVar7 = pbVar13;
                uVar15 = (uint)*pbVar7;
                pbVar13 = pbVar7 + ~(uint)pbVar14;
                if ((uVar15 == 0) || (pcVar5 = strchr("0123456789", uVar15),
                                      pcVar5 == (char *)0x0))
                    goto LAB_00017384;
                pcVar9 = pcVar5 + (int)pcVar9 * 10 + -0x2cfd0;
                pbVar13 = pbVar7 + 1;
            } while (pbVar14 + 10 != pbVar7 + 1);
            uVar15 = (uint)pbVar7[1];
            pbVar13 = (byte *)0x9;
            pbVar7 = pbVar14 + 10;
        LAB_00017384:
            while (uVar1 = puVar12[uVar15], (uVar1 & 0x800) != 0) {
                pbVar7 = pbVar7 + 1;
                uVar15 = (uint)*pbVar7;
            }
            if ((uVar15 != 0) &&
                (uVar3 = uVar1 & 0x2000, (uVar1 & 0x2000) == 0))
                goto LAB_00017288;
            pcVar5 = pcVar9;
            if (pbVar13 != (byte *)0x0) {
                iVar8 = 0x20;
                uVar15 = 0x80000000;
                pcVar5 = (char *)0x0;
                pcVar6 = *(char **)(&DAT_0002cf88 + (int)pbVar13 * 4);
                do {
                    pcVar9 = (char *)((int)pcVar9 * 2);
                    if (pcVar6 <= pcVar9) {
                        pcVar5 = (char *)((uint)pcVar5 | uVar15);
                        pcVar9 = pcVar9 + -(int)pcVar6;
                    }
                    iVar8 = iVar8 + -1;
                    uVar15 = uVar15 >> 1;
                } while (iVar8 != 0);
                if (pcVar6 < (char *)((int)pcVar9 << 1)) {
                    pcVar5 = pcVar5 + 1;
                }
            }
        } else {
        LAB_000172ac:
            pcVar10 = (char *)0x0;
            pcVar5 = (char *)0x0;
        }
    } else {
        uVar3 = puVar12[(int)pcVar9] & 0x800;
        if ((puVar12[(int)pcVar9] & 0x800) == 0)
            goto LAB_00017288;
        if (pcVar9 == (char *)0x0)
            goto LAB_000172ac;
        pcVar10 = (char *)0x0;
        do {
            pcVar5 = strchr("0123456789", (int)pcVar9);
            if (pcVar5 == (char *)0x0) {
                uVar3 = puVar12[(int)pcVar9] & 0x2000;
                pcVar5 = (char *)0x0;
                if ((puVar12[(int)pcVar9] & 0x2000) == 0) {
                    if (pcVar9 != (char *)0x2e)
                        goto LAB_00017288;
                    goto LAB_000172d4;
                }
                break;
            }
            pbVar14 = pbVar14 + 1;
            pcVar9 = (char *)(uint)*pbVar14;
            pcVar10 = pcVar5 + (int)pcVar10 * 10 + -0x2cfd0;
            pcVar5 = pcVar9;
        } while (pcVar9 != (char *)0x0);
    }
    pcVar9 = pcVar5;
    if (uVar11 != 0) {
        pcVar9 = (char *)-(int)pcVar5;
        pcVar10 = (char *)~(uint)pcVar10;
        if (pcVar5 == (char *)0x0) {
            pcVar10 = pcVar10 + 1;
        }
    }
    uVar3 = 1;
    *param_2 = pcVar10;
    param_2[1] = pcVar9;
LAB_00017288:
    if (iVar2 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
}

/* WARNING: Removing unreachable block (ram,0x000174d8) */

void FUN_00017454(void)

{
    cache_keyid = 0;
    cache_type = 0;
    cache_flags = 0;
    cache_secret = 0;
    cache_secretsize = 0;
    cache_keyacclist = 0;
    return;
}

void FUN_000174fc(undefined4 param_1, undefined4 *param_2, undefined4 param_3)

{
    int iVar1;
    int iVar2;
    undefined4 *puVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined4 uVar6;

    iVar1 = __stack_chk_guard;
    puVar3 = (undefined4 *)FUN_0001967c(0, 0x24, 0);
    uVar6 = param_2[1];
    uVar4 = param_2[2];
    uVar5 = param_2[3];
    puVar3[1] = *param_2;
    iVar2 = __stack_chk_guard;
    puVar3[2] = uVar6;
    puVar3[3] = uVar4;
    puVar3[4] = uVar5;
    uVar5 = param_2[4];
    uVar4 = param_2[6];
    puVar3[6] = param_2[5];
    puVar3[5] = uVar5;
    puVar3[7] = uVar4;
    puVar3[8] = param_3;
    *puVar3 = param_1;
    if (iVar1 == iVar2) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_000175a0(undefined4 *param_1)

{
    int iVar1;
    undefined4 *puVar2;

    iVar1 = __stack_chk_guard;
    puVar2 = param_1;
    if (param_1 != (undefined4 *)0x0) {
        puVar2 = (undefined4 *)*param_1;
        free(param_1);
    }
    if (iVar1 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail(puVar2);
}

void FUN_000175f8(int param_1)

{
    int iVar1;
    int iVar2;

    iVar1 = __stack_chk_guard;
    if (param_1 != 0) {
        do {
            iVar2 = FUN_000175a0();
        } while (iVar2 != 0);
    }
    if (iVar1 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail(0);
}

void FUN_00017654(int *param_1)

{
    int *piVar1;
    int iVar2;
    int iVar3;
    int *piVar4;
    uint uVar5;
    uint uVar6;
    int *piVar7;

    iVar2 = __stack_chk_guard;
    if (param_1 != (int *)0x0) {
        if (param_1[6] == cache_keyid) {
            FUN_00017454();
        }
        FUN_000175f8(param_1[4]);
        iVar3 = key_hash;
        uVar5 = param_1[6];
        uVar6 = (uint)authhashmask;
        piVar7 = (int *)(key_hash + (uVar6 & uVar5) * 4);
        if ((void *)param_1[3] != (void *)0x0) {
            memset((void *)param_1[3], 0, param_1[8]);
            free((void *)param_1[3]);
        }
        piVar4 = *(int **)(iVar3 + (uVar6 & uVar5) * 4);
        if (param_1 == piVar4) {
        LAB_00017728:
            *piVar7 = *piVar4;
        } else if (piVar4 != (int *)0x0) {
            piVar7 = piVar4;
            for (piVar1 = (int *)*piVar4; piVar1 != (int *)0x0;
                 piVar1 = (int *)*piVar1) {
                piVar4 = param_1;
                if (param_1 == piVar1)
                    goto LAB_00017728;
                piVar7 = piVar1;
            }
        }
        iVar3 = param_1[1];
        *(int *)(iVar3 + 8) = param_1[2];
        *(int *)(param_1[2] + 4) = iVar3;
        param_1[3] = 0;
        param_1[4] = 0;
        param_1[5] = 0;
        param_1[6] = 0;
        param_1[7] = 0;
        param_1[8] = 0;
        param_1[9] = 0;
        piVar7 = param_1;
        param_1[2] = (int)authfreekeys;
        authfreekeys = piVar7;
        authnumkeys = authnumkeys + -1;
        authnumfreekeys = authnumfreekeys + 1;
    }
    if (iVar2 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_000177e4(short *param_1, short *param_2, uint param_3)

{
    uint __n;
    short sVar1;
    int iVar2;
    int iVar3;
    uint uVar4;

    iVar2 = __stack_chk_guard;
    if (param_1 == (short *)0x0)
        goto LAB_0001782c;
    sVar1 = *param_1;
    if ((sVar1 != 0 && param_2 != (short *)0x0) &&
        (sVar1 == *param_2 && *param_2 != 0)) {
        if (sVar1 == 2) {
            param_1 = param_1 + 2;
            if (0x1f < param_3) {
                param_3 = 0x20;
            }
            param_2 = param_2 + 2;
        } else {
            if ((sVar1 != 10) ||
                (*(int *)(param_1 + 0xc) != *(int *)(param_2 + 0xc)))
                goto LAB_00017828;
            param_1 = param_1 + 4;
            if (0x7f < param_3) {
                param_3 = 0x80;
            }
            param_2 = param_2 + 4;
        }
        __n = param_3 >> 3;
        uVar4 = ~(0xffU >> (param_3 & 7)) & 0xff;
        if ((__n == 0) || (iVar3 = memcmp(param_1, param_2, __n), iVar3 == 0)) {
            if (uVar4 == 0) {
                param_1 = (short *)0x1;
            } else {
                param_1 =
                    (short *)(uint)((uVar4 & (*(byte *)((int)param_1 + __n) ^
                                              *(byte *)((int)param_2 + __n))) ==
                                    0);
            }
            goto LAB_0001782c;
        }
    }
LAB_00017828:
    param_1 = (short *)0x0;
LAB_0001782c:
    if (iVar2 != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail(param_1);
    }
    return;
}

void FUN_00017908(int *param_1, undefined4 param_2, int param_3)

{
    int iVar1;
    int iVar2;

    iVar1 = __stack_chk_guard;
    if (param_1 == (int *)0x0) {
        if (param_3 != 0) {
            param_3 = 1;
        }
    } else {
        do {
            iVar2 = FUN_000177e4(param_1 + 1, param_2, param_1[8]);
            if (iVar2 != 0) {
                param_3 = 1;
                break;
            }
            param_1 = (int *)*param_1;
            param_3 = 0;
        } while (param_1 != (int *)0x0);
    }
    if (iVar1 != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail(param_3);
    }
    return;
}

void FUN_00017990(void)

{
    int iVar1;
    uint uVar2;

    iVar1 = __stack_chk_guard;
    uVar2 = (uint)authhashbuckets;
    key_hash = (void *)FUN_0001967c(key_hash, uVar2 << 2, 0);
    memset(key_hash, 0, uVar2 << 2);
    key_listhead._8_4_ = key_listhead;
    key_listhead._4_4_ = key_listhead;
    if (iVar1 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_00017a2c(int param_1)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;

    iVar1 = __stack_chk_guard;
    if (param_1 < 1) {
        param_1 = 0x10;
    }
    iVar2 = FUN_00019740(0, param_1, 0x28);
    authnumfreekeys = authnumfreekeys + param_1;
    iVar3 = param_1;
    iVar4 = iVar2;
    do {
        iVar3 = iVar3 + -1;
        *(int *)(iVar4 + 8) = authfreekeys;
        authfreekeys = iVar4;
        iVar4 = iVar4 + 0x28;
    } while (iVar3 != 0);
    authfreekeys = iVar2 + (param_1 + -1) * 0x28;
    if (iVar1 != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail();
    }
    return;
}

void FUN_00017aec(uint param_1, undefined2 param_2, undefined2 param_3,
                  undefined4 param_4, undefined4 param_5, undefined4 param_6,
                  undefined4 param_7)

{
    int iVar1;
    undefined4 *puVar2;
    int iVar3;
    uint uVar4;
    undefined4 uVar5;

    iVar3 = __stack_chk_guard;
    iVar1 = key_hash;
    uVar4 = (uint)authhashmask;
    if (authnumfreekeys < 1) {
        FUN_00017a2c(0xffffffff);
    }
    puVar2 = authfreekeys;
    authnumfreekeys = authnumfreekeys + -1;
    if (authfreekeys != (undefined4 *)0x0) {
        authfreekeys = (undefined4 *)authfreekeys[2];
    }
    uVar5 = *(undefined4 *)(iVar1 + (uVar4 & param_1) * 4);
    puVar2[8] = param_5;
    *puVar2 = uVar5;
    *(undefined2 *)(puVar2 + 9) = param_2;
    *(undefined2 *)(puVar2 + 7) = param_3;
    puVar2[6] = param_1;
    puVar2[3] = param_6;
    puVar2[4] = param_7;
    puVar2[5] = param_4;
    *(undefined4 **)(iVar1 + (uVar4 & param_1) * 4) = puVar2;
    uVar5 = key_listhead._4_4_;
    puVar2[2] = key_listhead;
    puVar2[1] = uVar5;
    uVar5 = key_listhead._4_4_;
    key_listhead._4_4_ = puVar2;
    *(undefined4 **)(uVar5 + 8) = puVar2;
    authnumkeys = authnumkeys + 1;
    if (iVar3 != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail();
    }
    return;
}

void FUN_00017c38(int param_1)

{
    size_t __n;
    void *pvVar1;
    int iVar2;
    uint uVar3;
    undefined4 *puVar4;
    uint uVar5;
    int iVar6;
    int iVar7;
    undefined4 *puVar8;
    int iVar9;

    iVar2 = __stack_chk_guard;
    uVar5 = authnumkeys + authnumfreekeys;
    if (0 < (int)(param_1 - uVar5)) {
        FUN_00017a2c();
        uVar5 = authnumkeys + authnumfreekeys;
    }
    uVar5 = uVar5 >> 2;
    iVar9 = 5;
    iVar6 = 0;
    iVar7 = 0x10;
    uVar3 = 0xffffffff;
    do {
        uVar3 = uVar3 << iVar7;
        if ((uVar3 & uVar5) == 0) {
            uVar5 = uVar5 << iVar7;
        } else {
            iVar6 = iVar6 + iVar7;
        }
        iVar9 = iVar9 + -1;
        iVar7 = iVar7 >> 1;
    } while (iVar9 != 0);
    uVar5 = iVar6 + 1U & 0xffff;
    if (uVar5 < 4) {
        uVar5 = 4;
    }
    if (0xe < uVar5) {
        uVar5 = 0xf;
    }
    __n = 4 << (uVar5 & 0xff);
    authhashbuckets = (short)(1 << (uVar5 & 0xff));
    authhashmask = authhashbuckets - 1;
    key_hash = (void *)FUN_0001967c(key_hash, __n, 0, 0);
    memset(key_hash, 0, __n);
    pvVar1 = key_hash;
    if ((undefined1 *)key_listhead._8_4_ != key_listhead) {
        uVar5 = (uint)authhashmask;
        puVar8 = (undefined4 *)key_listhead._8_4_;
        do {
            puVar4 = (undefined4 *)puVar8[2];
            *puVar8 = *(undefined4 *)((int)pvVar1 + (puVar8[6] & uVar5) * 4);
            *(undefined4 **)((int)pvVar1 + (puVar8[6] & uVar5) * 4) = puVar8;
            puVar8 = puVar4;
        } while (puVar4 != (undefined4 *)key_listhead);
    }
    if (iVar2 != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail();
    }
    return;
}

/* WARNING: Removing unreachable block (ram,0x00017e3c) */

void FUN_00017db0(uint param_1)

{
    uint uVar1;
    int *piVar2;

    piVar2 = *(int **)(key_hash + (authhashmask & param_1) * 4);
    if (piVar2 != (int *)0x0) {
        uVar1 = piVar2[6];
        while ((param_1 != uVar1 &&
                (piVar2 = (int *)*piVar2, piVar2 != (int *)0x0))) {
            uVar1 = piVar2[6];
        }
    }
    return;
}

void FUN_00017ec8(int param_1)

{
    ushort uVar1;
    int iVar2;
    ushort uVar3;
    int iVar4;

    iVar2 = __stack_chk_guard;
    authkeylookups = authkeylookups + 1;
    if ((param_1 == 0) || (cache_keyid == param_1)) {
        uVar3 = cache_flags & 1;
    } else {
        authkeyuncached = authkeyuncached + 1;
        iVar4 = FUN_00017db0();
        if ((iVar4 == 0) || (*(ushort *)(iVar4 + 0x1c) == 0)) {
            uVar3 = 0;
            authkeynotfound = authkeynotfound + 1;
        } else {
            uVar1 = *(ushort *)(iVar4 + 0x24);
            uVar3 = uVar1 & 1;
            if ((uVar1 & 1) == 0) {
                authnokey = authnokey + 1;
            } else {
                cache_keyid = *(int *)(iVar4 + 0x18);
                uVar3 = 1;
                cache_secret = *(undefined4 *)(iVar4 + 0xc);
                cache_keyacclist = *(undefined4 *)(iVar4 + 0x10);
                cache_secretsize = *(undefined4 *)(iVar4 + 0x20);
                cache_flags = uVar1;
                cache_type = (uint) * (ushort *)(iVar4 + 0x1c);
            }
        }
    }
    if (iVar2 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
}

void FUN_00018038(int param_1, uint param_2)

{
    int iVar1;
    int iVar2;

    iVar1 = __stack_chk_guard;
    iVar2 = FUN_00017db0();
    if (param_2 != 0 || iVar2 != 0) {
        if (iVar2 == 0) {
            if (param_2 < 2) {
                iVar2 = 0;
            } else {
                iVar2 = param_2 + current_time;
            }
            FUN_00017aec(param_1, 1, 0, iVar2, 0, 0, 0);
        } else {
            if (param_1 == cache_keyid) {
                FUN_00017454();
            }
            if (param_2 == 0) {
                if (iVar1 == __stack_chk_guard) {
                    FUN_00017654();
                    return;
                }
                goto LAB_00018148;
            }
            *(ushort *)(iVar2 + 0x24) = *(ushort *)(iVar2 + 0x24) | 1;
            if (param_2 < 2) {
                *(undefined4 *)(iVar2 + 0x14) = 0;
            } else {
                *(uint *)(iVar2 + 0x14) = current_time + param_2;
            }
        }
    }
    if (iVar1 == __stack_chk_guard) {
        return;
    }
LAB_00018148:
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_0001815c(int param_1)

{
    int iVar1;
    ushort uVar2;
    int iVar3;

    iVar1 = __stack_chk_guard;
    if (cache_keyid == param_1) {
        uVar2 = cache_flags & 1;
    } else {
        authkeyuncached = authkeyuncached + 1;
        iVar3 = FUN_00017db0();
        if ((iVar3 == 0) || ((*(ushort *)(iVar3 + 0x24) & 1) == 0)) {
            uVar2 = 0;
            authkeynotfound = authkeynotfound + 1;
        } else {
            uVar2 = 1;
        }
    }
    if (iVar1 != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail(uVar2);
    }
    return;
}

void FUN_00018220(int param_1, undefined4 param_2)

{
    int iVar1;
    int iVar2;

    iVar1 = __stack_chk_guard;
    if (cache_keyid == param_1) {
        if ((cache_flags & 1) != 0) {
            iVar2 = FUN_00017908(cache_keyacclist, param_2, 1);
            if (iVar2 != 0) {
                iVar2 = 1;
            }
            goto LAB_0001826c;
        }
    } else {
        iVar2 = FUN_00017db0();
        if (iVar2 == 0) {
            authkeynotfound = authkeynotfound + 1;
            iVar2 = 0;
            goto LAB_0001826c;
        }
        authkeyuncached = authkeyuncached + 1;
        if ((*(ushort *)(iVar2 + 0x24) & 1) != 0) {
            iVar2 = FUN_00017908(*(undefined4 *)(iVar2 + 0x10), param_2, 1);
            if (iVar2 != 0) {
                iVar2 = 1;
            }
            goto LAB_0001826c;
        }
    }
    iVar2 = 0;
LAB_0001826c:
    if (iVar1 != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail(iVar2);
    }
    return;
}

void FUN_00018328(int param_1, undefined2 param_2, void *param_3,
                  size_t param_4, int param_5)

{
    int iVar1;
    int iVar2;
    void *pvVar3;

    iVar1 = __stack_chk_guard;
    iVar2 = FUN_00017db0();
    if ((iVar2 == 0) || (*(int *)(iVar2 + 0x18) != param_1)) {
        pvVar3 = (void *)FUN_0001967c(0, param_4 + 1, 0);
        memcpy(pvVar3, param_3, param_4);
        FUN_00017aec(param_1, 0, param_2, 0, param_4, pvVar3, param_5);
    } else {
        if (*(void **)(iVar2 + 0xc) != (void *)0x0) {
            memset(*(void **)(iVar2 + 0xc), 0, *(size_t *)(iVar2 + 0x20));
            free(*(void **)(iVar2 + 0xc));
        }
        pvVar3 = (void *)FUN_0001967c(0, param_4 + 1, 0);
        *(void **)(iVar2 + 0xc) = pvVar3;
        *(undefined2 *)(iVar2 + 0x1c) = param_2;
        *(size_t *)(iVar2 + 0x20) = param_4;
        if (*(int *)(iVar2 + 0x10) != param_5) {
            FUN_000175f8(*(int *)(iVar2 + 0x10));
            pvVar3 = *(void **)(iVar2 + 0xc);
            *(int *)(iVar2 + 0x10) = param_5;
        }
        memcpy(pvVar3, param_3, param_4);
        if (param_1 == cache_keyid) {
            if (iVar1 == __stack_chk_guard) {
                FUN_00017454();
                return;
            }
            goto LAB_00018464;
        }
    }
    if (iVar1 == __stack_chk_guard) {
        return;
    }
LAB_00018464:
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_00018474(void)

{
    int iVar1;
    undefined4 uVar2;
    undefined1 *puVar3;
    undefined1 *puVar4;

    iVar1 = __stack_chk_guard;
    puVar3 = (undefined1 *)key_listhead._8_4_;
    if ((undefined1 *)key_listhead._8_4_ != key_listhead) {
    LAB_000184f4:
        do {
            puVar4 = *(undefined1 **)(puVar3 + 8);
            if (*(uint *)(puVar3 + 0x18) < 0x10000) {
                if ((*(ushort *)(puVar3 + 0x24) & 1) == 0) {
                    FUN_00017654(puVar3);
                    puVar3 = puVar4;
                    if (puVar4 == key_listhead)
                        break;
                    goto LAB_000184f4;
                }
                if (*(void **)(puVar3 + 0xc) != (void *)0x0) {
                    memset(*(void **)(puVar3 + 0xc), 0,
                           *(size_t *)(puVar3 + 0x20));
                    free(*(void **)(puVar3 + 0xc));
                    *(undefined4 *)(puVar3 + 0xc) = 0;
                }
                uVar2 = FUN_000175f8(*(undefined4 *)(puVar3 + 0x10));
                *(undefined4 *)(puVar3 + 0x20) = 0;
                *(undefined4 *)(puVar3 + 0x10) = uVar2;
                *(undefined4 *)(puVar3 + 0x14) = 0;
            }
            puVar3 = puVar4;
        } while (puVar4 != key_listhead);
    }
    if (iVar1 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_0001854c(void)

{
    uint *puVar1;
    int iVar2;
    undefined1 *puVar3;

    iVar2 = __stack_chk_guard;
    puVar3 = (undefined1 *)key_listhead._8_4_;
    if ((undefined1 *)key_listhead._8_4_ != key_listhead) {
        do {
            while (true) {
                puVar1 = (uint *)(puVar3 + 0x14);
                puVar3 = *(undefined1 **)(puVar3 + 8);
                if ((*puVar1 == 0) || (current_time <= *puVar1))
                    break;
                FUN_00017654();
                authkeyexpired = authkeyexpired + 1;
                if (puVar3 == key_listhead)
                    goto LAB_000185d8;
            }
        } while (puVar3 != key_listhead);
    }
LAB_000185d8:
    if (iVar2 != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail();
    }
    return;
}

void FUN_00018608(uint param_1, int param_2, uint param_3)

{
    uint uVar1;
    uint uVar2;
    uint uVar3;
    uint uVar4;
    int iVar5;
    int iVar6;
    bool bVar7;

    iVar5 = __stack_chk_guard;
    bVar7 = param_1 == 0;
    uVar1 = param_1 >> 8;
    uVar2 = param_1 >> 0x10;
    uVar3 = param_1 >> 0x18;
    uVar4 = param_1 << 0x18;
    if (bVar7) {
        param_1 = 4;
    }
    authencryptions = authencryptions + 1;
    *(uint *)(param_2 + (param_3 & 0xfffffffc)) =
        uVar4 | (uVar1 & 0xff) << 0x10 | (uVar2 & 0xff) << 8 | uVar3;
    if ((!bVar7) && (iVar6 = FUN_00017ec8(param_1), iVar6 != 0)) {
        FUN_00022fbc(cache_type, cache_secret, cache_secretsize, param_2,
                     param_3);
    }
    if (iVar5 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_000186d0(int param_1, undefined4 param_2, undefined4 param_3,
                  uint param_4)

{
    int iVar1;
    undefined4 uVar2;
    int iVar3;

    iVar1 = __stack_chk_guard;
    authdecryptions = authdecryptions + 1;
    if ((param_1 == 0) || (iVar3 = FUN_00017ec8(), iVar3 == 0 || param_4 < 4)) {
        uVar2 = 0;
    } else {
        uVar2 = FUN_00023060(cache_type, cache_secret, cache_secretsize,
                             param_2, param_3, param_4);
    }
    if (iVar1 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
}

void FUN_00018798(undefined4 *param_1)

{
    int iVar1;
    byte *pbVar2;
    byte *pbVar3;
    int iVar4;
    uint uVar5;
    byte *pbVar6;

    iVar1 = __stack_chk_guard;
    pbVar2 = (byte *)*param_1;
    uVar5 = (uint)*pbVar2;
    if (uVar5 == 9 || uVar5 == 0x20) {
        do {
            pbVar2 = pbVar2 + 1;
            uVar5 = (uint)*pbVar2;
        } while (uVar5 == 9 || uVar5 == 0x20);
    }
    if ((((uVar5 & 0xdf) != 0) && (1 < uVar5 - 9)) &&
        (pbVar3 = pbVar2, uVar5 != 0x23)) {
        do {
            uVar5 = (uint)pbVar3[1];
            pbVar6 = pbVar3 + 1;
            iVar4 = uVar5 - 10;
            if (iVar4 != 0) {
                iVar4 = 1;
            }
            if (uVar5 == 0) {
                iVar4 = 0;
            }
            if (iVar4 == 0) {
                if (pbVar6 == pbVar2)
                    goto LAB_00018898;
                if (uVar5 != 9 && uVar5 != 0x20)
                    goto LAB_00018880;
            LAB_00018844:
                *pbVar6 = 0;
                pbVar6 = pbVar3 + 2;
                goto LAB_00018850;
            }
            if (uVar5 == 0x20 || uVar5 == 9) {
                if (pbVar6 != pbVar2)
                    goto LAB_00018844;
                goto LAB_00018898;
            }
            pbVar3 = pbVar6;
        } while (uVar5 != 0x23);
        if (pbVar6 != pbVar2) {
        LAB_00018880:
            *pbVar6 = 0;
        LAB_00018850:
            *param_1 = pbVar6;
            goto LAB_00018854;
        }
    }
LAB_00018898:
    pbVar2 = (byte *)0x0;
LAB_00018854:
    if (iVar1 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pbVar2);
}

void FUN_000188ac(uint *param_1, undefined4 param_2, undefined4 param_3,
                  undefined4 param_4)

{
    int iVar1;
    uint uVar2;
    undefined4 uStack_8;
    undefined4 uStack_4;

    iVar1 = __stack_chk_guard;
    uStack_8 = param_3;
    uStack_4 = param_4;
    if ((param_1 == (uint *)0x0) ||
        (uVar2 = *param_1, *param_1 = uVar2 + 1, uVar2 + 1 < 6)) {
        FUN_0001a8b0(3, param_2, &uStack_8, &uStack_8, &uStack_8);
    }
    if (iVar1 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_00018930(void *param_1)

{
    int iVar1;
    undefined4 *__ptr;

    iVar1 = __stack_chk_guard;
    __ptr = *(undefined4 **)((int)param_1 + 4);
    while (__ptr != (undefined4 *)0x0) {
        *(undefined4 *)((int)param_1 + 4) = *__ptr;
        free(__ptr);
        __ptr = *(undefined4 **)((int)param_1 + 4);
    }
    if (iVar1 != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail();
    }
    free(param_1);
    return;
}

void FUN_000189a4(char *param_1)

{
    byte bVar1;
    FILE *__stream;
    char *pcVar2;
    uint uVar3;
    int iVar4;
    EVP_MD *pEVar5;
    size_t __n;
    int *piVar6;
    char *pcVar7;
    char *pcVar8;
    ushort **ppuVar9;
    __int32_t **pp_Var10;
    undefined4 uVar11;
    byte *pbVar12;
    undefined1 *extraout_r2;
    undefined1 *puVar13;
    uint uVar14;
    undefined1 *puVar15;
    uint uVar16;
    int *piVar17;
    byte *pbVar18;
    __int32_t *p_Var19;
    uint uVar20;
    bool bVar21;
    int local_290;
    char *local_270;
    uint local_26c;
    short local_268[14];
    undefined1 local_24c[32];
    char acStack_22c[512];
    int local_2c;
    undefined1 auStack_28[4];

    local_2c = __stack_chk_guard;
    __stream = fopen64(param_1, "r");
    if (__stream == (FILE *)0x0) {
        FUN_0001a828(3, "authreadkeys: file \'%s\': %m", param_1);
        uVar11 = 0;
    LAB_00018e04:
        if (local_2c == __stack_chk_guard) {
            return;
        }
        /* WARNING: Subroutine does not return */
        __stack_chk_fail(uVar11);
    }
    if (ssl_init_done == 0) {
        FUN_0001fdcc();
    }
    local_26c = 0;
    piVar17 = (int *)0x0;
LAB_00018a3c:
    do {
        while (true) {
            while (true) {
                while (true) {
                    do {
                        local_270 = fgets(acStack_22c, 0x200, __stream);
                        if ((local_270 == (char *)0x0) || (0xf < local_26c)) {
                            fclose(__stream);
                            if (local_26c == 0) {
                                FUN_00018474();
                                while (piVar17 != (int *)0x0) {
                                    piVar6 = (int *)*piVar17;
                                    FUN_00018328(
                                        piVar17[2],
                                        *(undefined2 *)(piVar17 + 3),
                                        piVar17 + 4,
                                        *(undefined2 *)((int)piVar17 + 0xe),
                                        piVar17[1]);
                                    piVar17[1] = 0;
                                    FUN_00018930(piVar17);
                                    piVar17 = piVar6;
                                }
                                uVar11 = 1;
                            } else {
                                if (local_26c < 0x10) {
                                    pcVar2 = "";
                                } else {
                                    pcVar2 = " (emergency break)";
                                }
                                FUN_0001a828(3,
                                             "authreadkeys: rejecting file "
                                             "\'%s\' after %u error(s)%s",
                                             param_1, local_26c, pcVar2);
                                while (piVar17 != (int *)0x0) {
                                    piVar17 = (int *)*piVar17;
                                    FUN_00018930();
                                }
                                uVar11 = 0;
                            }
                            goto LAB_00018e04;
                        }
                        pcVar2 = (char *)FUN_00018798(&local_270);
                    } while (pcVar2 == (char *)0x0);
                    uVar3 = strtol(pcVar2, (char **)0x0, 10);
                    if (uVar3 != 0)
                        break;
                    FUN_000188ac(&local_26c,
                                 "authreadkeys: cannot change key %s", pcVar2);
                }
                if (uVar3 < 0x10000)
                    break;
                FUN_000188ac(&local_26c,
                             "authreadkeys: key %s > %d reserved for Autokey",
                             pcVar2, 0xffff);
            }
            iVar4 = FUN_00018798(&local_270);
            if (iVar4 != 0)
                break;
            FUN_000188ac(&local_26c, "authreadkeys: no key type for key %d",
                         uVar3);
        }
        local_290 = FUN_00020024(iVar4, 0);
        if (local_290 == 0) {
            FUN_000188ac(0, "authreadkeys: invalid type for key %d", uVar3);
            pcVar2 = (char *)FUN_00018798(&local_270);
            if (pcVar2 == (char *)0x0)
                goto LAB_00018e40;
        LAB_00018ae8:
            __n = strlen(pcVar2);
            if (__n < 0x15) {
                piVar6 = (int *)FUN_0001967c(0, __n + 0x14, 0);
                piVar6[2] = uVar3;
                *(short *)((int)piVar6 + 0xe) = (short)__n;
                *(undefined2 *)(piVar6 + 3) = (undefined2)local_290;
                piVar6[1] = 0;
                memcpy(piVar6 + 4, pcVar2, __n);
            } else {
                pbVar18 = (byte *)(pcVar2 + -1);
                if (0x3f < __n) {
                    __n = 0x40;
                }
                uVar16 = 0;
                pp_Var10 = __ctype_tolower_loc();
                p_Var19 = *pp_Var10;
                do {
                    pbVar18 = pbVar18 + 1;
                    pcVar2 = strchr("0123456789abcdef", p_Var19[*pbVar18]);
                    if (pcVar2 == (char *)0x0) {
                        if (uVar16 < __n) {
                            FUN_000188ac(
                                &local_26c,
                                "authreadkeys: invalid hex digit for key %d",
                                uVar3);
                            goto LAB_00018a3c;
                        }
                        break;
                    }
                    bVar21 = (uVar16 & 1) != 0;
                    puVar15 = (undefined1 *)(uVar16 >> 1);
                    puVar13 = extraout_r2;
                    if (bVar21) {
                        puVar13 = auStack_28;
                        puVar15 = puVar13 + (int)puVar15;
                    }
                    if (bVar21) {
                        puVar13 = (undefined1 *)(uint)(byte)puVar15[-0x224];
                    }
                    if (!bVar21) {
                        puVar13 = auStack_28;
                    }
                    uVar16 = uVar16 + 1;
                    if (bVar21) {
                        bVar1 = (byte)(pcVar2 + -0x2cfdc) | (byte)puVar13;
                    } else {
                        bVar1 = (byte)(((uint)(pcVar2 + -0x2cfdc) & 0xff) << 4);
                        puVar15 = puVar13 + (int)puVar15;
                    }
                    puVar15[-0x224] = bVar1;
                } while (__n != uVar16);
                uVar16 = __n >> 1;
                piVar6 = (int *)FUN_0001967c(0, uVar16 + 0x14, 0);
                piVar6[2] = uVar3;
                *(short *)((int)piVar6 + 0xe) = (short)uVar16;
                *(undefined2 *)(piVar6 + 3) = (undefined2)local_290;
                piVar6[1] = 0;
                memcpy(piVar6 + 4, local_24c, uVar16);
            }
            pcVar2 = (char *)FUN_00018798(&local_270);
            while (pcVar2 != (char *)0x0) {
                pcVar7 = strchr(pcVar2, 0x2c);
                if (pcVar7 != (char *)0x0) {
                    *pcVar7 = '\0';
                }
                pcVar8 = strchr(pcVar2, 0x2f);
                if (pcVar8 == (char *)0x0) {
                    iVar4 = FUN_00019b3c(pcVar2, 0, local_268);
                    if (iVar4 != 0) {
                        uVar16 = 0xffffffff;
                        goto LAB_00018c6c;
                    }
                LAB_00018ca0:
                    FUN_000188ac(
                        &local_26c,
                        "authreadkeys: invalid IP address <%s> for key %d",
                        pcVar2, uVar3);
                } else {
                    uVar20 = (uint)(byte)pcVar8[1];
                    uVar16 = 0;
                    *pcVar8 = '\0';
                    pbVar18 = (byte *)(pcVar8 + 1);
                    if (uVar20 == 0) {
                        iVar4 = FUN_00019b3c(pcVar2, 0, local_268);
                        if (iVar4 != 0) {
                            uVar16 = 0;
                            goto LAB_00018c6c;
                        }
                        goto LAB_00018ca0;
                    }
                    ppuVar9 = __ctype_b_loc();
                    pbVar12 = pbVar18;
                    do {
                        uVar14 = (((*ppuVar9)[uVar20] ^ 0x800) << 0x14) >> 0x1f;
                        if (1000 < uVar16) {
                            uVar14 = 1;
                        }
                        if (uVar14 != 0) {
                            FUN_000188ac(
                                &local_26c,
                                "authreadkeys: Invalid character in subnet "
                                "specification for <%s/%s> in key %d",
                                pbVar12, pbVar18, uVar3);
                            goto LAB_00018bec;
                        }
                        iVar4 = uVar20 - 0x30;
                        pbVar12 = pbVar12 + 1;
                        uVar20 = (uint)*pbVar12;
                        uVar16 = iVar4 + uVar16 * 10;
                    } while (uVar20 != 0);
                    iVar4 = FUN_00019b3c(pcVar2, 0, local_268);
                    if (iVar4 == 0)
                        goto LAB_00018ca0;
                    if (uVar16 != 0xffffffff) {
                        if (local_268[0] == 2) {
                            if (0x20 < uVar16)
                                goto LAB_00018e60;
                        } else if (local_268[0] == 10 && 0x80 < uVar16) {
                        LAB_00018e60:
                            FUN_000188ac(0,
                                         "authreadkeys: excessive subnet mask "
                                         "<%s/%s> for key %d",
                                         pcVar2, pbVar18, uVar3);
                        }
                    }
                LAB_00018c6c:
                    iVar4 = FUN_000174fc(piVar6[1], local_268, uVar16);
                    piVar6[1] = iVar4;
                }
            LAB_00018bec:
                if (pcVar7 == (char *)0x0)
                    break;
                pcVar2 = pcVar7 + 1;
            }
            if (local_290 == 0) {
                FUN_00018930(piVar6);
            } else {
                *piVar6 = (int)piVar17;
                piVar17 = piVar6;
            }
            goto LAB_00018a3c;
        }
        if (local_290 != 0x37e) {
            pcVar2 = OBJ_nid2sn(local_290);
            pEVar5 = EVP_get_digestbyname(pcVar2);
            if (pEVar5 == (EVP_MD *)0x0) {
                FUN_000188ac(0, "authreadkeys: no algorithm for key %d", uVar3);
                local_290 = 0;
            }
        }
        pcVar2 = (char *)FUN_00018798(&local_270);
        if (pcVar2 != (char *)0x0)
            goto LAB_00018ae8;
    LAB_00018e40:
        FUN_000188ac(&local_26c, "authreadkeys: no key for key %d", uVar3);
    } while (true);
}

void FUN_00018fb4(uint param_1, int param_2, int param_3, int param_4)

{
    int iVar1;
    char cVar2;
    int iVar3;
    byte *pbVar4;
    char *pcVar5;
    char *extraout_r1;
    char *pcVar6;
    char *pcVar7;
    uint uVar8;
    char *pcVar10;
    byte bVar11;
    char *pcVar12;
    uint uVar13;
    char *__s;
    char *pcVar14;
    bool bVar15;
    undefined4 local_34;
    undefined4 local_30;
    int local_2c;
    uint uVar9;

    iVar3 = lib_nextbuf;
    local_2c = __stack_chk_guard;
    iVar1 = lib_nextbuf * 0x80;
    __s = lib_stringbuf + iVar1;
    pcVar14 = (char *)0x19020;
    memset(__s, 0, 0x80);
    lib_nextbuf = iVar3 + 1U & 0xf;
    bVar15 = (param_1 & 0xffff0000) == 0;
    local_34 = 0;
    pcVar6 = extraout_r1;
    if (bVar15) {
        pcVar6 = (char *)&local_34;
        pcVar14 = (char *)((int)&local_34 + 1);
    }
    local_30 = 0;
    if (!bVar15) {
        pcVar14 = (char *)((int)&local_34 + 1);
        uVar13 = param_1 >> 0x10;
        pcVar6 = pcVar14;
        do {
            uVar8 = (int)((ulonglong)uVar13 * 0xcccccccd >> 0x20) << 0xd;
            uVar9 = uVar8 >> 0x10;
            pcVar6 = pcVar6 + -1;
            *pcVar6 = (char)uVar13 + (char)(uVar8 >> 0x10) * -10;
            uVar13 = uVar9;
        } while (uVar9 != 0);
    }
    pcVar10 = pcVar14;
    if (param_4 == 0) {
    LAB_000190b4:
        if (param_3 < 7) {
            if (param_3 < 1)
                goto LAB_000190f8;
        } else {
            param_3 = 6;
        }
    } else {
        pcVar10 = (char *)&local_30;
        param_3 = (int)(short)((short)param_3 + 3);
        if (2 < param_3)
            goto LAB_000190b4;
        param_3 = 3;
    }
    uVar13 = param_3 - 1U & 0xffff;
    pcVar5 = pcVar14;
    do {
        param_1 = (param_1 & 0xffff) * 10;
        pcVar12 = pcVar5 + 1;
        *pcVar5 = (char)(param_1 >> 0x10);
        pcVar5 = pcVar12;
    } while (pcVar12 != (char *)((int)&local_34 + uVar13 + 2));
    pcVar14 = pcVar14 + uVar13 + 1;
LAB_000190f8:
    if ((param_1 & 0x8000) != 0) {
        pbVar4 = (byte *)(pcVar14 + -1);
        bVar11 = pcVar14[-1] + 1;
        pcVar14[-1] = bVar11;
        while (9 < bVar11) {
            *pbVar4 = 0;
            pbVar4 = pbVar4 + -1;
            bVar11 = *pbVar4 + 1;
            *pbVar4 = bVar11;
        }
    }
    if (pcVar6 < pcVar10 + -1) {
        cVar2 = *pcVar6;
        while (
            (cVar2 == '\0' && (pcVar6 = pcVar6 + 1, pcVar10 + -1 != pcVar6))) {
            cVar2 = *pcVar6;
        }
    }
    pcVar5 = __s;
    if (param_2 != 0) {
        lib_stringbuf[iVar3 * 0x80] = 0x2d;
        pcVar5 = lib_stringbuf + iVar1 + 1;
    }
    if (pcVar6 < pcVar14) {
        do {
            pcVar7 = pcVar5 + 1;
            pcVar12 = pcVar5;
            if (pcVar10 == pcVar6) {
                *pcVar5 = '.';
                pcVar7 = pcVar5 + 2;
                pcVar12 = pcVar5 + 1;
            }
            pcVar5 = pcVar7;
            pcVar7 = pcVar6 + 1;
            *pcVar12 = *pcVar6 + '0';
            pcVar6 = pcVar7;
        } while (pcVar14 != pcVar7);
    }
    *pcVar5 = '\0';
    if (local_2c == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail(__s);
}

/* WARNING: Removing unreachable block (ram,0x00019270) */

void FUN_0001921c(uint param_1, undefined4 param_2)

{
    FUN_00018fb4((param_1 ^ (int)param_1 >> 0x1f) - ((int)param_1 >> 0x1f),
                 param_1 >> 0x1f, param_2, 0);
    return;
}

void FUN_000192dc(uint param_1, uint param_2, int param_3, uint param_4,
                  int param_5)

{
    int iVar1;
    uint uVar2;
    uint uVar3;
    char cVar4;
    uint uVar5;
    char *pcVar6;
    int iVar7;
    int iVar8;
    char *pcVar9;
    char *pcVar10;
    char *pcVar11;
    char *pcVar12;
    int iVar13;
    char *__s;
    char *pcVar14;
    uint uVar15;
    int iVar16;
    bool bVar17;
    undefined4 local_44;
    undefined4 local_40;
    undefined4 local_3c;
    undefined4 local_38;
    undefined4 local_34;
    undefined4 local_30;
    int local_2c;

    iVar8 = lib_nextbuf;
    local_2c = __stack_chk_guard;
    iVar1 = lib_nextbuf * 0x80;
    __s = lib_stringbuf + iVar1;
    memset(__s, 0, 0x80);
    lib_nextbuf = iVar8 + 1U & 0xf;
    local_40 = 0;
    local_44 = 0;
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    pcVar12 = (char *)((int)&local_3c + 2);
    pcVar9 = pcVar12;
    if (param_1 != 0) {
        iVar16 = 10;
        do {
            iVar16 = iVar16 + -1;
            uVar15 = param_1 / 10;
            pcVar9 = pcVar9 + -1;
            *pcVar9 = (char)(param_1 % 10);
            param_1 = uVar15;
        } while ((uVar15 != 0 && iVar16 != 0) && (uVar15 == 0 || -1 < iVar16));
    }
    pcVar14 = pcVar12;
    if ((int)param_4 < 0) {
        if (param_5 != 0) {
            uVar15 = 3;
            goto LAB_000193dc;
        }
    LAB_0001951c:
        pcVar11 = pcVar12;
        if (((uint)(0 < (int)pcVar12 - (int)&local_44) & param_2 >> 0x1f) !=
            0) {
            do {
                pcVar11 = pcVar11 + -1;
                if ((char)(*pcVar11 + '\x01') != '\n') {
                    *pcVar11 = *pcVar11 + '\x01';
                    break;
                }
                *pcVar11 = '\0';
            } while (0 < (int)(pcVar11 + (((int)pcVar12 - (int)&local_44) -
                                          (int)pcVar12)));
        }
        if (pcVar11 <= pcVar9) {
            pcVar9 = pcVar11;
        }
    } else {
        if (param_5 == 0) {
            uVar15 = param_4;
            if (0xd < (int)param_4) {
                uVar15 = 0xe;
            }
            bVar17 = (int)param_2 < 0;
            if (param_2 != 0) {
                bVar17 = (int)param_4 < 0;
            }
            if ((param_2 != 0 && param_4 != 0) && !bVar17)
                goto LAB_00019408;
        LAB_0001944c:
            if (uVar15 == 0)
                goto LAB_0001951c;
        } else {
            uVar15 = param_4 + 3;
            if (0xd < (int)uVar15) {
                uVar15 = 0xe;
            }
        LAB_000193dc:
            pcVar14 = (char *)((int)&local_38 + 1);
            if (param_2 != 0) {
            LAB_00019408:
                do {
                    uVar2 = param_2 * 2;
                    iVar16 = (int)param_2 >> 0x1f;
                    iVar7 = (int)param_2 >> 0x1f;
                    uVar3 = param_2 * 8;
                    iVar13 = param_2 << 2;
                    param_2 = param_2 * 10;
                    uVar15 = uVar15 - 1;
                    uVar5 = param_2;
                    if (param_2 != 0) {
                        uVar5 = uVar15;
                    }
                    pcVar11 = pcVar12 + 1;
                    *pcVar12 = (CARRY4(uVar2, uVar3) - (char)iVar7) +
                               ((byte)((uint)iVar13 >> 0x1f) |
                                (byte)((uVar2 >> 0x1f | iVar16 * -2) << 1));
                    pcVar12 = pcVar11;
                } while ((param_2 != 0 && uVar15 != 0) && -1 < (int)uVar5);
                goto LAB_0001944c;
            }
        }
        pcVar12 = pcVar12 + uVar15;
    }
    if (pcVar9 < pcVar14) {
        cVar4 = *pcVar9;
        while (cVar4 == '\0') {
            pcVar9 = pcVar9 + 1;
            if (pcVar9 == pcVar14)
                goto LAB_00019490;
            cVar4 = *pcVar9;
        }
    } else {
    LAB_00019490:
        pcVar9 = pcVar14 + -1;
    }
    pcVar11 = __s;
    if (param_3 != 0) {
        lib_stringbuf[iVar8 * 0x80] = 0x2d;
        pcVar11 = lib_stringbuf + iVar1 + 1;
    }
    if (pcVar9 < pcVar12) {
        do {
            pcVar10 = pcVar11 + 1;
            pcVar6 = pcVar11;
            if (pcVar9 == pcVar14) {
                *pcVar11 = '.';
                pcVar10 = pcVar11 + 2;
                pcVar6 = pcVar11 + 1;
            }
            pcVar11 = pcVar10;
            pcVar10 = pcVar9 + 1;
            *pcVar6 = *pcVar9 + '0';
            pcVar9 = pcVar10;
        } while (pcVar10 != pcVar12);
    }
    *pcVar11 = '\0';
    if (local_2c != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail(__s);
    }
    return;
}

void FUN_0001959c(uint param_1, int param_2, undefined4 param_3)

{
    uint uVar1;
    int iVar2;
    int iVar3;

    iVar2 = __stack_chk_guard;
    uVar1 = param_1 >> 0x1f;
    iVar3 = param_2;
    if ((int)param_1 < 0) {
        iVar3 = -param_2;
        param_1 = ~param_1;
        if (param_2 == 0) {
            param_1 = param_1 + 1;
        }
    }
    FUN_000192dc(param_1, iVar3, uVar1, param_3, 0);
    if (iVar2 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_0001967c(void *param_1, size_t param_2, uint param_3, int param_4)

{
    int iVar1;
    void *pvVar2;

    iVar1 = __stack_chk_guard;
    if (param_2 == 0) {
        pvVar2 = realloc(param_1, 1);
        if (pvVar2 == (void *)0x0)
            goto LAB_00019700;
    } else {
        pvVar2 = realloc(param_1, param_2);
        if (pvVar2 == (void *)0x0) {
        LAB_00019700:
            msyslog_term = 1;
            FUN_0001a828(3, "fatal out of memory (%lu bytes)", param_2);
            /* WARNING: Subroutine does not return */
            exit(1);
        }
        if (param_4 != 0 && param_3 < param_2) {
            memset((void *)((int)pvVar2 + param_3), 0, param_2 - param_3);
        }
    }
    if (iVar1 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pvVar2);
}

/* WARNING: Removing unreachable block (ram,0x000197d0) */

void FUN_00019740(undefined4 param_1, uint param_2, uint param_3, int param_4)

{
    bool bVar1;
    bool bVar2;

    bVar2 = 0xfffe < param_3;
    bVar1 = param_3 == 0xffff;
    if (param_3 < 0x10000) {
        bVar2 = 0xfffe < param_2;
        bVar1 = param_2 == 0xffff;
    }
    if ((param_2 != 0 && (bVar2 && !bVar1)) &&
        ((int)((ulonglong)param_2 * (ulonglong)param_3 >> 0x20) != 0)) {
        FUN_0001a828(3, "fatal allocation size overflow");
        /* WARNING: Subroutine does not return */
        exit(1);
    }
    FUN_0001967c(param_1, param_3 * param_2 + param_4, 0, 1);
    return;
}

void FUN_000197e0(char *param_1)

{
    int iVar1;
    size_t sVar2;
    void *__dest;

    iVar1 = __stack_chk_guard;
    sVar2 = strlen(param_1);
    __dest = (void *)FUN_0001967c(0, sVar2 + 1, 0);
    memcpy(__dest, param_1, sVar2 + 1);
    if (iVar1 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_00019850(char *param_1, int param_2)

{
    int iVar1;

    iVar1 = __stack_chk_guard;
    fputs(DAT_00041030, stderr);
    fputs(param_1, stderr);
    _IO_putc(param_2, stderr);
    if (iVar1 == __stack_chk_guard) {
        _IO_putc(10, stderr);
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_000198e4(int param_1, undefined4 *param_2, byte *param_3)

{
    int iVar1;
    byte *pbVar2;
    byte *pbVar3;
    byte *pbVar4;
    char *pcVar5;
    uint uVar6;
    uint uVar7;

    iVar1 = __stack_chk_guard;
    DAT_00041030 = *param_2;
    ntp_optarg = (byte *)0x0;
    if (ntp_optind == 0) {
        ntp_optind = 1;
        DAT_000432fc = (byte *)0x0;
    LAB_00019950:
        pbVar3 = DAT_000432fc;
        if (((param_1 <= ntp_optind) ||
             (pcVar5 = (char *)param_2[ntp_optind], *pcVar5 != '-')) ||
            (pcVar5[1] == '\0')) {
            uVar7 = 0xffffffff;
            goto LAB_00019a04;
        }
        ntp_optind = ntp_optind + 1;
        if ((pcVar5[1] == '-') && (pcVar5[2] == '\0')) {
            uVar7 = 0xffffffff;
            goto LAB_00019a04;
        }
        DAT_000432fc = (byte *)(pcVar5 + 1);
        uVar7 = (uint)(byte)pcVar5[1];
    } else if ((DAT_000432fc == (byte *)0x0) ||
               (uVar7 = (uint)*DAT_000432fc, uVar7 == 0))
        goto LAB_00019950;
    pbVar4 = DAT_000432fc + 1;
    pbVar3 = pbVar4;
    ntp_optopt = uVar7;
    if (param_3 == (byte *)0x0) {
    LAB_000199ec:
        if (ntp_opterr != 0) {
            DAT_000432fc = pbVar4;
            FUN_00019850(": unknown option -", uVar7);
            uVar7 = 0x3f;
            pbVar3 = DAT_000432fc;
            goto LAB_00019a04;
        }
    } else {
        uVar6 = (uint)*param_3;
        if (uVar7 != uVar6 && uVar6 != 0) {
            pbVar2 = param_3 + 1;
            do {
                param_3 = pbVar2;
                if (param_3 == (byte *)0x0)
                    goto LAB_000199ec;
                uVar6 = (uint)*param_3;
                pbVar2 = param_3 + 1;
            } while (uVar6 != uVar7 && uVar6 != 0);
        }
        if ((uVar6 == 0) || (uVar7 == 0x3f || uVar7 == 0x3a))
            goto LAB_000199ec;
        if (param_3[1] != 0x3a)
            goto LAB_00019a04;
        if (DAT_000432fc[1] != 0) {
            DAT_000432fc = (byte *)0x0;
            pbVar3 = DAT_000432fc;
            ntp_optarg = pbVar4;
            goto LAB_00019a04;
        }
        if (ntp_optind < param_1) {
            param_2 = param_2 + ntp_optind;
            ntp_optind = ntp_optind + 1;
            ntp_optarg = (byte *)*param_2;
            goto LAB_00019a04;
        }
        if (ntp_opterr != 0) {
            DAT_000432fc = pbVar4;
            FUN_00019850(": option requires argument -", uVar7);
            uVar7 = 0x3f;
            pbVar3 = DAT_000432fc;
            goto LAB_00019a04;
        }
    }
    uVar7 = 0x3f;
LAB_00019a04:
    DAT_000432fc = pbVar3;
    if (iVar1 != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail(uVar7);
    }
    return;
}

void FUN_00019b3c(char *param_1, uint param_2, undefined4 *param_3)

{
    size_t sVar1;
    int iVar2;
    char *pcVar3;
    undefined4 uVar4;
    sockaddr *psVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    undefined4 uVar8;
    undefined4 local_c4;
    addrinfo *local_c0;
    addrinfo local_bc;
    char acStack_9c[128];
    int local_1c;

    local_1c = __stack_chk_guard;
    if (param_1 == (char *)0x0) {
        /* WARNING: Subroutine does not return */
        FUN_0002073c("is_ip_address.c", 0x28, 0, "host != ((void *)0)");
    }
    if (param_3 == (undefined4 *)0x0) {
        /* WARNING: Subroutine does not return */
        FUN_0002073c("is_ip_address.c", 0x29, 0, "addr != ((void *)0)");
    }
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    param_3[3] = 0;
    param_3[4] = 0;
    param_3[5] = 0;
    param_3[6] = 0;
    if (((param_2 & 0xfffd) == 0) &&
        (iVar2 = inet_pton(2, param_1, &local_c4), iVar2 == 1)) {
        *(undefined2 *)param_3 = 2;
        param_3[1] = local_c4;
        uVar4 = 1;
    } else {
        if ((param_2 == 10 || param_2 == 0) &&
            (sVar1 = strlen(param_1), sVar1 < 0x80)) {
            if (*param_1 == '[') {
                FUN_000203c4(acStack_9c, param_1 + 1, 0x80);
                pcVar3 = strchr(acStack_9c, 0x5d);
                if (pcVar3 != (char *)0x0) {
                    *pcVar3 = '\0';
                }
            } else {
                FUN_000203c4(acStack_9c, param_1, 0x80);
            }
            local_bc.ai_socktype = 0;
            local_bc.ai_protocol = 0;
            local_bc.ai_addrlen = 0;
            local_bc.ai_addr = (sockaddr *)0x0;
            local_bc.ai_canonname = (char *)0x0;
            local_bc.ai_next = (addrinfo *)0x0;
            local_bc.ai_family = 10;
            local_bc.ai_flags = 4;
            iVar2 = getaddrinfo(acStack_9c, (char *)0x0, &local_bc, &local_c0);
            if (iVar2 == 0) {
                *(undefined2 *)param_3 = 10;
                psVar5 = local_c0->ai_addr;
                uVar8 = *(undefined4 *)(psVar5[1].sa_data + 6);
                uVar4 = *(undefined4 *)(psVar5->sa_data + 10);
                uVar6 = *(undefined4 *)(psVar5 + 1);
                uVar7 = *(undefined4 *)(psVar5[1].sa_data + 2);
                param_3[2] = *(undefined4 *)(psVar5->sa_data + 6);
                param_3[3] = uVar4;
                param_3[4] = uVar6;
                param_3[5] = uVar7;
                param_3[6] = uVar8;
                freeaddrinfo(local_c0);
                uVar4 = 1;
                goto LAB_00019c6c;
            }
        }
        uVar4 = 0;
    }
LAB_00019c6c:
    if (local_1c != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail(uVar4);
    }
    return;
}

void FUN_00019d2c(void)

{
    int iVar1;
    int iVar2;

    iVar1 = __stack_chk_guard;
    if (lib_inited == 0) {
        iVar2 = FUN_0002145c();
        ipv4_works = (uint)(iVar2 == 0);
        iVar2 = FUN_000214b4();
        ipv6_works = (uint)(iVar2 == 0);
        FUN_00016568();
        lib_inited = 1;
    }
    if (iVar1 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_00019dcc(timeval *param_1, timezone *param_2)

{
    int *piVar1;
    int iVar2;
    code *pcVar3;
    uint uVar4;
    uint uVar5;
    timespec local_34;
    int local_2c;

    local_2c = __stack_chk_guard;
    if (0 < debug) {
        FUN_0001a750("In ntp_set_tod\n");
    }
    piVar1 = __errno_location();
    uVar4 = DAT_00043304;
    if (DAT_00043304 < 2) {
        iVar2 = param_1->tv_usec;
        local_34.tv_sec = param_1->tv_sec;
        *piVar1 = 0;
        local_34.tv_nsec = iVar2 * 1000;
        pcVar3 = (code *)clock_settime(0, &local_34);
        iVar2 = *piVar1;
        if (debug < 1) {
            if (pcVar3 != (code *)0x0 || uVar4 != 0) {
            LAB_0001a068:
                if (pcVar3 != (code *)0x0)
                    goto LAB_00019e3c;
                goto LAB_00019ecc;
            }
        } else {
            FUN_0001a750("ntp_set_tod: clock_settime: %d %m\n", pcVar3);
            uVar4 = DAT_00043304;
            if (pcVar3 != (code *)0x0 || DAT_00043304 != 0)
                goto LAB_0001a068;
        }
        DAT_00043304 = 1;
    LAB_00019ecc:
        *piVar1 = iVar2;
        if (0 < debug) {
            FUN_0001a750("ntp_set_tod: Final result: %s: %d %m\n",
                         *(undefined4 *)(set_tod_used + DAT_00043304 * 4), 0);
        }
    } else {
        iVar2 = 0;
        pcVar3 = (code *)0xffffffff;
    LAB_00019e3c:
        uVar5 = uVar4 & 0xfffffffd;
        if (uVar5 == 0) {
            local_34.tv_sec = uVar5;
            local_34.tv_nsec = uVar5;
            adjtime((timeval *)&local_34, (timeval *)0x0);
            *piVar1 = 0;
            pcVar3 = (code *)settimeofday(param_1, param_2);
            iVar2 = *piVar1;
            if (debug < 1) {
                if (pcVar3 == (code *)0x0 && uVar4 == 0) {
                LAB_0001a028:
                    DAT_00043304 = 2;
                    goto LAB_00019ecc;
                }
            } else {
                FUN_0001a750("ntp_set_tod: settimeofday: %d %m\n", pcVar3);
                uVar4 = DAT_00043304;
                if (pcVar3 == (code *)0x0 && DAT_00043304 == 0)
                    goto LAB_0001a028;
            }
            if (pcVar3 == (code *)0x0)
                goto LAB_00019ecc;
        }
        if (uVar4 != 0 && uVar4 != 3) {
            *piVar1 = iVar2;
            if (0 < debug) {
            LAB_0001a0a8:
                FUN_0001a750("ntp_set_tod: Final result: %s: %d %m\n",
                             *(undefined4 *)(set_tod_used + uVar4 * 4), pcVar3);
                goto LAB_0001a0cc;
            }
        LAB_00019e60:
            *piVar1 = iVar2;
            goto LAB_00019e64;
        }
        local_34.tv_sec = param_1->tv_sec;
        *piVar1 = 0;
        pcVar3 = (code *)stime(&local_34.tv_sec);
        iVar2 = *piVar1;
        if (0 < debug) {
            FUN_0001a750("ntp_set_tod: stime: %d %m\n", pcVar3);
            uVar4 = DAT_00043304;
        }
        *piVar1 = iVar2;
        if (uVar4 == 0 && pcVar3 == (code *)0x0) {
            DAT_00043304 = 3;
            if (0 < debug) {
                FUN_0001a750("ntp_set_tod: Final result: %s: %d %m\n", "stime",
                             0);
            }
        } else {
            if (0 < debug)
                goto LAB_0001a0a8;
        LAB_0001a0cc:
            if (pcVar3 != (code *)0x0)
                goto LAB_00019e60;
        }
    }
    pcVar3 = set_tod_using;
    if (set_tod_using != (code *)0x0) {
        (*set_tod_using)(*(undefined4 *)(set_tod_used + DAT_00043304 * 4));
        pcVar3 = (code *)0x0;
        set_tod_using = (code *)0x0;
    }
LAB_00019e64:
    if (local_2c != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail(pcVar3);
    }
    return;
}

void FUN_0001a130(int param_1, char *param_2, char *param_3)

{
    int iVar1;
    char *pcVar2;
    int *piVar3;
    bool bVar4;

    iVar1 = __stack_chk_guard;
    *param_2 = '\0';
    pcVar2 = strerror_r(param_1, param_2, (size_t)param_3);
    if (pcVar2 == (char *)0x0) {
        if (*param_2 == '\0') {
            piVar3 = __errno_location();
            FUN_0001f5f4(param_2, param_3, "%s(%d): errno %d", "strerror_r",
                         param_1, *piVar3);
        }
    } else {
        bVar4 = pcVar2 <= param_2;
        if (param_2 != pcVar2) {
            bVar4 = param_3 <= pcVar2;
        }
        if (bVar4 && (param_2 != pcVar2 && pcVar2 != param_3)) {
            if (iVar1 == __stack_chk_guard) {
                FUN_000203c4(param_2, pcVar2, param_3);
                return;
            }
            goto LAB_0001a1f4;
        }
    }
    if (iVar1 == __stack_chk_guard) {
        return;
    }
LAB_0001a1f4:
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_0001a208(char *param_1, int param_2, char *param_3, undefined4 param_4)

{
    char cVar1;
    size_t __n;
    char *__dest;
    char acStack_124[256];
    int local_24;

    local_24 = __stack_chk_guard;
    __dest = param_1;
    while (true) {
        while (true) {
            cVar1 = *param_3;
            while (true) {
                if ((cVar1 == '\0') || (param_1 + param_2 + -1 <= __dest))
                    goto LAB_0001a274;
                if (cVar1 == '%')
                    break;
                param_3 = param_3 + 1;
                *__dest = cVar1;
                cVar1 = *param_3;
                __dest = __dest + 1;
            }
            cVar1 = param_3[1];
            param_3 = param_3 + 2;
            if (cVar1 != 'm')
                break;
            FUN_0001a130(param_4, acStack_124, 0x100);
            __n = strlen(acStack_124);
            if (__dest + __n < param_1 + param_2 + -1) {
                memcpy(__dest, acStack_124, __n);
                __dest = __dest + __n;
            }
        }
        *__dest = '%';
        if (cVar1 == '\0')
            break;
        __dest[1] = cVar1;
        __dest = __dest + 2;
    }
    __dest = __dest + 1;
LAB_0001a274:
    *__dest = '\0';
    if (local_24 != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail();
    }
    return;
}

void FUN_0001a314(int param_1, char *param_2)

{
    bool bVar1;
    char *pcVar2;
    size_t sVar3;
    char *pcVar4;
    int iVar5;
    FILE *__stream;
    __pid_t _Var6;
    undefined2 *puVar7;
    undefined4 local_3c;
    undefined1 local_34[4];
    undefined2 local_30[2];
    int local_2c;

    local_30[0] = 10;
    local_34[0] = 0;
    local_2c = __stack_chk_guard;
    pcVar4 = progname;
    if ((progname != DAT_0004330c) &&
        (DAT_0004330c = pcVar4, pcVar2 = strrchr(progname, 0x2f),
         DAT_00043310 = pcVar4, pcVar2 != (char *)0x0)) {
        DAT_00043310 = pcVar2 + 1;
    }
    iVar5 = msyslog_term;
    if (syslogit == 0) {
        if (syslog_file == (FILE *)0x0) {
            iVar5 = 1;
            bVar1 = false;
        } else {
            bVar1 = true;
        }
    } else {
        __syslog_chk(param_1, 1, "%s", param_2);
        if (iVar5 == 0)
            goto LAB_0001a4cc;
        bVar1 = false;
    }
    if (msyslog_include_timestamp == 0) {
        local_3c = 0;
    } else {
        local_3c = FUN_00023220();
    }
    if (bVar1 || msyslog_term_pid != 0) {
        _Var6 = getpid();
    } else {
        _Var6 = -1;
    }
    sVar3 = strlen(param_2);
    if (param_2[sVar3 - 1] == '\n') {
        puVar7 = (undefined2 *)local_34;
    } else {
        puVar7 = local_30;
    }
    if (iVar5 != 0) {
        __stream = stderr;
        if (3 < param_1) {
            __stream = stdout;
        }
        if (msyslog_include_timestamp != 0) {
            __fprintf_chk(__stream, 1, &DAT_0002d3d4, local_3c);
        }
        if (msyslog_term_pid != 0) {
            __fprintf_chk(__stream, 1, "%s[%d]: ", DAT_00043310, _Var6);
        }
        __fprintf_chk(__stream, 1, "%s%s", param_2, puVar7);
        fflush(__stream);
    }
    if (bVar1) {
        if (msyslog_include_timestamp != 0) {
            __fprintf_chk(syslog_file, 1, &DAT_0002d3d4, local_3c);
        }
        __fprintf_chk(syslog_file, 1, "%s[%d]: %s%s", DAT_00043310, _Var6,
                      param_2, puVar7);
        fflush(syslog_file);
    }
LAB_0001a4cc:
    if (local_2c == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_0001a5e4(undefined4 param_1, undefined4 param_2, undefined4 param_3,
                  undefined4 param_4)

{
    int *piVar1;
    undefined1 auStack_11c[256];
    int local_1c;

    local_1c = __stack_chk_guard;
    piVar1 = __errno_location();
    FUN_0001a208(auStack_11c, 0x100, param_3, *piVar1);
    FUN_0001ec98(param_1, param_2, auStack_11c, param_4);
    if (local_1c == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_0001a66c(undefined4 param_1, undefined4 param_2, undefined4 param_3)

{
    int *piVar1;
    undefined1 auStack_11c[256];
    int local_1c;

    local_1c = __stack_chk_guard;
    piVar1 = __errno_location();
    FUN_0001a208(auStack_11c, 0x100, param_2, *piVar1);
    __vfprintf_chk(param_1, 1, auStack_11c, param_3);
    if (local_1c == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_0001a750(undefined4 param_1, undefined4 param_2, undefined4 param_3,
                  undefined4 param_4)

{
    int iVar1;
    undefined4 uStack_c;
    undefined4 uStack_8;
    undefined4 uStack_4;

    iVar1 = __stack_chk_guard;
    uStack_c = param_2;
    uStack_8 = param_3;
    uStack_4 = param_4;
    FUN_0001a66c(stdout, param_1, &uStack_c, &stdout, &uStack_c);
    if (iVar1 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_0001a828(undefined4 param_1, undefined4 param_2, undefined4 param_3,
                  undefined4 param_4)

{
    undefined1 auStack_424[1024];
    int local_24;
    undefined4 uStack_8;
    undefined4 uStack_4;

    local_24 = __stack_chk_guard;
    uStack_8 = param_3;
    uStack_4 = param_4;
    FUN_0001a5e4(auStack_424, 0x400, param_2, &uStack_8, &uStack_8);
    FUN_0001a314(param_1, auStack_424);
    if (local_24 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_0001a8b0(undefined4 param_1, undefined4 param_2, undefined4 param_3)

{
    undefined1 auStack_414[1024];
    int local_14;

    local_14 = __stack_chk_guard;
    FUN_0001a5e4(auStack_414, 0x400, param_2, param_3);
    FUN_0001a314(param_1, auStack_414);
    if (local_14 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_0001a924(char *param_1, int param_2, int param_3)

{
    int iVar1;
    char *pcVar2;
    int __facility;

    iVar1 = __stack_chk_guard;
    if (param_2 != 0 && ntp_syslogmask == -1) {
        ntp_syslogmask = param_2;
    }
    pcVar2 = strrchr(param_1, 0x2f);
    if (pcVar2 != (char *)0x0) {
        param_1 = pcVar2 + 1;
    }
    progname = (char *)FUN_000197e0(param_1);
    if (param_3 == 0) {
        __facility = DAT_00043314;
        if (DAT_00043314 != 0) {
            __facility = 0x18;
        }
    } else {
        DAT_00043314 = 1;
        __facility = 0x18;
    }
    openlog(progname, 9, __facility);
    if (iVar1 != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail();
    }
    setlogmask(0xff);
    return;
}

void FUN_0001aa14(char *param_1, int param_2)

{
    int iVar1;
    char *pcVar2;
    size_t sVar3;
    size_t sVar4;
    FILE *__stream;
    int iVar5;
    char *pcVar6;
    char *__buf;
    bool bVar7;
    char acStack_22d[513];
    int local_2c;

    local_2c = __stack_chk_guard;
    if (param_1 == (char *)0x0) {
        /* WARNING: Subroutine does not return */
        FUN_0002073c("msyslog.c", 0x1d5, 0, "fname != ((void *)0)");
    }
    if (((syslog_file != (FILE *)0x0) && (syslog_fname != (char *)0x0)) &&
        (iVar1 = strcmp(syslog_fname, param_1), iVar1 == 0))
        goto LAB_0001aa78;
    iVar1 = strcmp(param_1, "stderr");
    iVar5 = 0x37c;
    if (iVar1 == 0) {
    LAB_0001acac:
        __stream = (FILE *)**(undefined4 **)((int)&__DT_PLTGOT + iVar5);
        pcVar2 = (char *)FUN_000197e0(param_1);
    } else {
        iVar1 = strcmp(param_1, "stdout");
        pcVar6 = syslog_abs_fname;
        if (iVar1 == 0) {
            iVar5 = 0x368;
            goto LAB_0001acac;
        }
        if (((syslog_fname == (char *)0x0) ||
             (iVar1 = strcmp(param_1, syslog_fname), iVar1 != 0)) &&
            ((bVar7 = param_1 != pcVar6, pcVar6 = param_1,
              bVar7 && (*param_1 != '/')))) {
            __buf = acStack_22d + 1;
            pcVar2 = getcwd(__buf, 0x200);
            if (pcVar2 == (char *)0x0)
                goto LAB_0001aba4;
            sVar3 = strlen(__buf);
            if ((1 < sVar3) && (acStack_22d[sVar3] == '/')) {
                sVar3 = sVar3 - 1;
            }
            sVar4 = strlen(param_1);
            iVar1 = sVar4 + sVar3 + 2;
            pcVar2 = (char *)FUN_0001967c(0, iVar1, 0);
            FUN_0001f5f4(pcVar2, iVar1, "%.*s%c%s", sVar3, __buf, 0x2f,
                         param_1);
        } else {
        LAB_0001aba4:
            pcVar2 = (char *)FUN_000197e0(pcVar6);
        }
        if (0 < debug) {
            FUN_0001a750("attempting to open log %s\n", pcVar2);
        }
        __stream = fopen64(pcVar2, "a");
        param_1 = pcVar6;
    }
    if (__stream == (FILE *)0x0) {
        free(pcVar2);
        iVar1 = -1;
        goto LAB_0001aa78;
    }
    if ((param_2 != 0) && ((syslogit != 0 || (syslog_abs_fname != param_1)))) {
        FUN_0001a828(5, "switching logging to file %s", pcVar2);
    }
    if (((syslog_file != (FILE *)0x0) && (syslog_file != stderr)) &&
        (syslog_file != stdout)) {
        iVar1 = fileno(syslog_file);
        iVar5 = fileno(__stream);
        if (iVar1 != iVar5) {
            fclose(syslog_file);
        }
    }
    syslog_file = __stream;
    if (syslog_abs_fname == param_1) {
        free(pcVar2);
    } else {
        if (syslog_abs_fname == (char *)0x0) {
        LAB_0001ac80:
            if (syslog_fname != (char *)0x0)
                goto LAB_0001ad04;
        } else {
            if (syslog_abs_fname != syslog_fname) {
                free(syslog_abs_fname);
                goto LAB_0001ac80;
            }
        LAB_0001ad04:
            free(syslog_fname);
        }
        syslog_fname = (char *)FUN_000197e0(param_1);
        syslog_abs_fname = pcVar2;
    }
    iVar1 = 0;
    syslogit = 0;
LAB_0001aa78:
    if (local_2c != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail(iVar1);
    }
    return;
}

void FUN_0001b15c(int *param_1, int param_2, uint *param_3)

{
    int iVar1;
    int iVar2;
    uint uVar3;
    uint uVar4;
    uint uVar5;

    iVar1 = __stack_chk_guard;
    if (param_3 == (uint *)0x0) {
        uVar3 = (*DAT_00041048)(0);
    } else {
        uVar3 = *param_3;
    }
    iVar2 = __stack_chk_guard;
    uVar5 = uVar3 + 0x80000000;
    uVar4 = (param_2 + 0x7c558180) - uVar5;
    *param_1 = uVar5 + uVar4;
    param_1[1] = (((int)uVar3 >> 0x1f) - (uint)(uVar3 < 0x80000000)) +
                 (uint)CARRY4(uVar5, uVar4);
    if (iVar1 == iVar2) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1);
}

void FUN_0001b2a4(uint *param_1, uint *param_2)

{
    int iVar1;
    int iVar2;
    uint uVar3;
    uint uVar4;

    iVar1 = __stack_chk_guard;
    uVar3 = param_2[1];
    if ((int)uVar3 < 0) {
        uVar3 = FUN_0002c3e8(~*param_2, ~uVar3, 0x15180, 0);
        uVar3 = ~uVar3;
    } else {
        uVar3 = FUN_0002c3e8(*param_2, uVar3, 0x15180, 0);
    }
    iVar2 = __stack_chk_guard;
    uVar4 = *param_2;
    *param_1 = uVar3;
    param_1[1] = uVar4 + uVar3 * -0x15180;
    if (iVar1 == iVar2) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1);
}

void FUN_0001b348(int *param_1, uint param_2, uint *param_3)

{
    int iVar1;
    int iVar2;
    int *piVar3;
    uint uVar4;
    uint uVar5;
    uint uVar6;
    uint uVar7;

    iVar1 = __stack_chk_guard;
    uVar7 = (int)param_2 >> 0x1f;
    if (0x3fffffff < (param_2 ^ uVar7)) {
        piVar3 = __errno_location();
        param_2 = ~uVar7;
        *piVar3 = 0x21;
    }
    uVar5 = param_2 << 2 | 3;
    uVar7 = uVar7 ^ (uVar5 ^ uVar7) / 0x23ab1;
    uVar6 = uVar5 + uVar7 * -0x23ab1 | 3;
    uVar5 = uVar6 / 0x5b5;
    if (param_3 != (uint *)0x0) {
        if ((uVar5 + 1 & 3) == 0) {
            if (uVar5 == 99) {
                uVar4 = (uint)((uVar7 + 1 & 3) == 0);
            } else {
                uVar4 = 1;
            }
        } else {
            uVar4 = 0;
        }
        *param_3 = uVar4;
    }
    iVar2 = __stack_chk_guard;
    *param_1 = uVar7 * 100 + uVar5;
    param_1[1] = uVar6 % 0x5b5 >> 2;
    if (iVar1 != iVar2) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail(param_1);
    }
    return;
}

/* WARNING: Removing unreachable block (ram,0x0001b4fc) */

void FUN_0001b454(int *param_1, int param_2, int param_3)

{
    int iVar1;
    int iVar2;
    int iVar3;

    if (-1 < param_2) {
        if (param_3 == 0) {
            iVar1 = 0;
        } else {
            iVar1 = 0x1a;
        }
        if (param_2 < (int)(uint) * (ushort *)((int)&DAT_0002d500 + iVar1)) {
            iVar3 = (param_2 >> 5) + 1;
            iVar2 = iVar3 * 2;
            if (param_2 <
                (int)(uint) * (ushort *)(&DAT_0002d4e8 + iVar2 + iVar1)) {
                iVar2 = iVar2 + -2;
                iVar3 = param_2 >> 5;
            }
            param_2 =
                param_2 - (uint) * (ushort *)(&DAT_0002d4e8 + iVar2 + iVar1);
            goto LAB_0001b4d8;
        }
    }
    param_2 = -1;
    iVar3 = -1;
LAB_0001b4d8:
    *param_1 = iVar3;
    param_1[1] = param_2;
    return;
}

void FUN_0001b5f0(int param_1, int param_2)

{
    int iVar1;
    bool bVar2;
    undefined4 local_28;
    int local_24;
    int local_20;
    int local_1c;

    local_1c = __stack_chk_guard;
    iVar1 = param_2 % 7;
    if (iVar1 < 0) {
        iVar1 = iVar1 + 7;
    }
    *(int *)(param_1 + 0x18) = iVar1;
    FUN_0001b348(&local_24, param_2 + -1, &local_28);
    *(int *)(param_1 + 0x1c) = local_20;
    *(int *)(param_1 + 0x14) = local_24 + -0x76b;
    FUN_0001b454(&local_24, local_20, local_28);
    bVar2 = local_1c == __stack_chk_guard;
    *(int *)(param_1 + 0x10) = local_24;
    *(int *)(param_1 + 0xc) = local_20 + 1;
    if (bVar2) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_28);
}

/* WARNING: Removing unreachable block (ram,0x0001b74c) */

void FUN_0001b6ac(int param_1, uint param_2)

{
    byte bVar1;
    byte bVar2;
    byte bVar3;
    uint uVar4;

    uVar4 = (int)param_2 >> 0x1f ^ param_2;
    bVar3 = (byte)((int)param_2 >> 0x1f);
    bVar1 = bVar3 ^ (byte)(uVar4 / 0xe10);
    bVar2 = bVar3 ^ (byte)(uVar4 / 0x3c);
    *(byte *)(param_1 + 6) = bVar1 + (bVar3 ^ (byte)(uVar4 / 0x15180)) * -0x18;
    *(byte *)(param_1 + 7) = bVar2 + bVar1 * -0x3c;
    *(byte *)(param_1 + 8) = (char)param_2 + bVar2 * -0x3c;
    return;
}

void FUN_0001b8d8(ushort *param_1)

{
    int iVar1;
    char cVar2;
    uint uVar3;
    undefined4 local_28;
    int local_24;
    undefined4 local_20;
    int local_1c;
    undefined4 local_18;
    int local_14;

    local_14 = __stack_chk_guard;
    FUN_0001b2a4(&local_1c);
    iVar1 = FUN_0001b6ac(param_1, local_18);
    if (local_14 != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail();
    }
    iVar1 = iVar1 + local_1c;
    local_1c = __stack_chk_guard;
    uVar3 = (iVar1 + 0xaf93b) % 7;
    cVar2 = (char)uVar3;
    if (6 < (uVar3 & 0xff)) {
        cVar2 = cVar2 + '\a';
    }
    *(char *)((int)param_1 + 9) = cVar2;
    FUN_0001b348(&local_24, iVar1 + 0xaf93a, &local_28);
    if (local_24 + 1U >> 0x10 == 0) {
        iVar1 = -1;
    } else {
        iVar1 = 0;
    }
    param_1[1] = (short)local_20 + 1;
    *param_1 = (ushort)(local_24 + 1U) & (ushort)iVar1;
    FUN_0001b454(&local_24, local_20, local_28);
    if (iVar1 == 0) {
        local_28 = 0xffffffff;
    }
    *(char *)((int)param_1 + 5) = (char)local_20 + '\x01';
    *(char *)(param_1 + 2) = (char)local_24 + '\x01';
    if (local_1c == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_28);
}

/* WARNING: Removing unreachable block (ram,0x0001b99c) */

void FUN_0001b950(longlong *param_1, int param_2, int param_3)

{
    *param_1 = (longlong)param_2 * 0x15180 + (longlong)param_3;
    return;
}

void FUN_0001cc30(void)

{
    int iVar1;
    uint uVar2;
    uint *puVar3;
    int *piVar4;
    int iVar5;

    iVar1 = __stack_chk_guard;
    uVar2 = *DAT_000410cc;
    piVar4 = DAT_000410d0 + 1;
    iVar5 = *DAT_000410d0;
    puVar3 = DAT_000410cc + 1;
    *DAT_000410cc = uVar2 + iVar5;
    if (puVar3 < (uint *)0x410cc) {
        if ((int *)0x410cb < piVar4) {
            piVar4 = &DAT_00041050;
        }
    } else {
        puVar3 = &DAT_00041050;
    }
    DAT_000410cc = puVar3;
    DAT_000410d0 = piVar4;
    if (iVar1 != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail(uVar2 + iVar5 >> 1);
    }
    return;
}

void FUN_0001cccc(int param_1)

{
    int iVar1;
    uint __seed;
    int *piVar2;
    int iVar3;

    iVar1 = __stack_chk_guard;
    piVar2 = &DAT_00041054;
    DAT_00041050 = param_1;
    while (true) {
        param_1 = param_1 * 0x41a7 + (param_1 / 0x1f31d) * -0x7fffffff;
        if (param_1 < 1) {
            param_1 = param_1 + 0x7fffffff;
        }
        *piVar2 = param_1;
        if (piVar2 == (int *)0x410c8)
            break;
        piVar2 = piVar2 + 1;
    }
    iVar3 = 0x136;
    DAT_000410cc = &DAT_0004105c;
    DAT_000410d0 = &DAT_00041050;
    do {
        __seed = FUN_0001cc30();
        iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    if (iVar1 != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail();
    }
    srand(__seed);
    return;
}

undefined1 *FUN_0001cdb0(uint param_1)

{
    int iVar1;
    uint uVar2;
    undefined1 *__s;

    iVar1 = __stack_chk_guard;
    __s = lib_stringbuf + lib_nextbuf * 0x80;
    uVar2 = lib_nextbuf + 1;
    memset(__s, 0, 0x80);
    lib_nextbuf = uVar2 & 0xf;
    FUN_0001f5f4(__s, 0x80, "%lu.%lu.%lu.%lu", param_1 & 0xff,
                 param_1 >> 8 & 0xff, param_1 >> 0x10 & 0xff, param_1 >> 0x18);
    if (iVar1 == __stack_chk_guard) {
        return __s;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_0001cf40(uint *param_1, int param_2)

{
    int iVar1;
    uint uVar2;
    uint uVar3;
    int iVar4;
    code *pcVar5;
    bool bVar6;
    uint local_30;
    int local_2c;

    local_30 = *param_1;
    uVar3 = param_1[1];
    local_2c = __stack_chk_guard;
    uVar2 = local_30;
    if (uVar3 == (int)local_30 >> 0x1f) {
        iVar4 = 0;
    } else {
        iVar1 = 0;
        do {
            while (-1 < (int)uVar3) {
                iVar1 = iVar1 + 1;
                if (3 < iVar1)
                    goto LAB_0001d094;
                bVar6 = 0x34aadc7f < uVar2;
                uVar2 = uVar2 + 0xcb552380;
                uVar3 = (uVar3 - 1) + (uint)bVar6;
                iVar4 = iVar1;
                if ((int)uVar2 >> 0x1f == uVar3)
                    goto LAB_0001cff4;
            }
            iVar4 = iVar1 + -1;
            if (iVar1 + 2 < 0 != SCARRY4(iVar4, 3))
                goto LAB_0001d094;
            bVar6 = 0xcb55237f < uVar2;
            uVar2 = uVar2 + 0x34aadc80;
            uVar3 = uVar3 + bVar6;
            iVar1 = iVar4;
        } while ((int)uVar2 >> 0x1f != uVar3);
    }
LAB_0001cff4:
    local_30 = uVar2;
    pcVar5 = localtime;
    if (param_2 == 0) {
        pcVar5 = gmtime;
    }
    while (iVar1 = (*pcVar5)(&local_30), iVar1 == 0) {
        while (-1 < (int)local_30) {
            if (((int)local_30 < 0x34aadc80) || (iVar4 = iVar4 + 1, 3 < iVar4))
                goto LAB_0001d094;
            local_30 = local_30 + 0xcb552380;
            iVar1 = (*pcVar5)(&local_30);
            if (iVar1 != 0)
                goto LAB_0001d070;
        }
        if (iVar4 + 2 < 0 != SCARRY4(iVar4 + -1, 3))
            goto LAB_0001d094;
        local_30 = local_30 + 0x34aadc80;
        iVar4 = iVar4 + -1;
    }
LAB_0001d070:
    if ((iVar4 != 0) && (iVar4 = *(int *)(iVar1 + 0x14) + iVar4 * 0x1c,
                         *(int *)(iVar1 + 0x14) = iVar4, 0xc6 < iVar4 - 1U)) {
    LAB_0001d094:
        iVar1 = 0;
    }
    if (local_2c != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail(iVar1);
    }
    return;
}

/* WARNING: Removing unreachable block (ram,0x0001d24c) */
/* WARNING: Removing unreachable block (ram,0x0001d358) */

void FUN_0001d318(int *param_1)

{
    undefined4 *puVar1;
    int iVar2;
    uint uVar3;
    undefined1 *__s;
    undefined4 local_40;
    undefined4 uStack_3c;
    undefined4 local_38;
    undefined4 uStack_34;
    undefined2 local_30[2];
    byte local_2c;
    undefined1 local_2b;
    undefined1 local_2a;
    undefined1 local_29;
    undefined1 local_28;
    byte local_27;
    int local_24;

    local_24 = __stack_chk_guard;
    __s = lib_stringbuf + lib_nextbuf * 0x80;
    uVar3 = lib_nextbuf + 1 & 0xf;
    memset(__s, 0, 0x80);
    iVar2 = *param_1;
    lib_nextbuf = uVar3;
    if ((iVar2 == 0) && (param_1[1] == 0)) {
        FUN_000203c4(__s, "(no time)", 0x80);
    } else {
        uVar3 = (uint)param_1[1] / 0x418937;
        if (uVar3 == 1000) {
            iVar2 = iVar2 + 1;
            uVar3 = 0;
        }
        FUN_0001b15c(&local_40, iVar2, 0);
        local_38 = local_40;
        uStack_34 = uStack_3c;
        puVar1 = (undefined4 *)FUN_0001cf40(&local_38, 1);
        if (puVar1 == (undefined4 *)0x0) {
            FUN_0001b8d8(local_30, &local_38);
            FUN_0001f5f4(__s, 0x80,
                         "%08lx.%08lx [%s, %s %2d %4d %2d:%02d:%02d.%03u UTC]",
                         *param_1, param_1[1],
                         *(undefined4 *)(daynames + (uint)local_27 * 4),
                         *(undefined4 *)(months + (local_2c - 1) * 4), local_2b,
                         local_30[0], local_2a, local_29, local_28, uVar3);
        } else {
            FUN_0001f5f4(
                __s, 0x80, "%08lx.%08lx  %s, %s %2d %4d %2d:%02d:%02d.%03u",
                *param_1, param_1[1], *(undefined4 *)(daynames + puVar1[6] * 4),
                *(undefined4 *)(months + puVar1[4] * 4), puVar1[3],
                puVar1[5] + 0x76c, puVar1[2], puVar1[1], *puVar1, uVar3);
        }
    }
    if (local_24 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail(__s);
}

/* WARNING: Removing unreachable block (ram,0x0001d460) */

void FUN_0001d41c(void)

{
    return;
}

/* WARNING: Removing unreachable block (ram,0x0001d4b4) */

void FUN_0001d470(void)

{
    return;
}

void FUN_0001d56c(int param_1)

{
    int iVar1;
    int *piVar2;
    int iVar3;
    int *piVar4;

    iVar1 = __stack_chk_guard;
    iVar3 = DAT_00043330;
    DAT_00043328 = 0;
    DAT_00043320 = 0;
    DAT_0004332c = 0;
    DAT_00043324 = 0;
    DAT_00043330 = 0;
    param_1 = param_1 + iVar3;
    piVar2 = (int *)FUN_00019740(0, param_1, 0x8a4, 0);
    if (0 < param_1) {
        iVar3 = 0;
        piVar4 = piVar2;
        do {
            iVar3 = iVar3 + 1;
            *piVar4 = (int)DAT_00043334;
            DAT_00043320 = DAT_00043320 + 1;
            DAT_00043328 = DAT_00043328 + 1;
            DAT_00043334 = piVar4;
            piVar4 = piVar4 + 0x229;
        } while (param_1 != iVar3);
        DAT_00043334 = piVar2 + param_1 * 0x229 + -0x229;
    }
    DAT_0004332c = DAT_0004332c + 1;
    if (iVar1 != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail();
    }
    return;
}

void FUN_0001d66c(undefined4 *param_1)

{
    int iVar1;
    undefined4 *puVar2;
    int iVar3;

    iVar1 = __stack_chk_guard;
    if (param_1 != (undefined4 *)0x0) {
        iVar3 = param_1[0x228];
        param_1[0x228] = iVar3 + -1;
        if (iVar3 + -1 != 0) {
            FUN_0001a828(3, "******** freerecvbuff non-zero usage: %d *******");
        }
        DAT_00043320 = DAT_00043320 + 1;
        puVar2 = param_1;
        *param_1 = DAT_00043334;
        DAT_00043334 = puVar2;
    }
    if (iVar1 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_0001d708(undefined4 *param_1)

{
    int iVar1;

    iVar1 = __stack_chk_guard;
    if (param_1 == (undefined4 *)0x0) {
        FUN_0001a828(3, "add_full_recv_buffer received NULL buffer");
        return;
    }
    *param_1 = 0;
    if (DAT_0004333c == (undefined4 *)0x0) {
        DAT_0004333c = &DAT_00043338;
        DAT_00043338 = param_1;
    } else {
        *(undefined4 **)*DAT_0004333c = param_1;
        DAT_0004333c = (undefined4 *)*DAT_0004333c;
    }
    DAT_00043324 = DAT_00043324 + 1;
    if (iVar1 != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail();
    }
    return;
}

void FUN_0001d7cc(void)

{
    undefined4 *__s;
    int iVar1;

    iVar1 = __stack_chk_guard;
    __s = DAT_00043334;
    if (DAT_00043334 == (undefined4 *)0x0) {
        DAT_00043330 = DAT_00043330 + 1;
    } else {
        DAT_00043334 = (undefined4 *)*DAT_00043334;
        DAT_00043320 = DAT_00043320 + -1;
        memset(__s, 0, 0x8a4);
        __s[0x228] = 1;
    }
    if (iVar1 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail(__s);
}

/* WARNING: Removing unreachable block (ram,0x0001d8f0) */

void FUN_0001d868(void)

{
    undefined4 *puVar1;
    undefined4 *puVar2;

    if (DAT_00043338 != (undefined4 *)0x0) {
        puVar2 = (undefined4 *)*DAT_00043338;
        puVar1 = puVar2;
        if ((puVar2 != (undefined4 *)0x0) &&
            (puVar1 = DAT_0004333c, DAT_0004333c == DAT_00043338)) {
            puVar1 = &DAT_00043338;
        }
        DAT_0004333c = puVar1;
        DAT_00043324 = DAT_00043324 + -1;
        DAT_00043338 = puVar2;
    }
    return;
}

void FUN_0001dac0(int param_1, uint *param_2, uint param_3, char *param_4,
                  uint param_5, int param_6, uint param_7)

{
    char cVar1;
    int iVar2;
    uint uVar3;
    int iVar4;
    uint uVar5;
    char *pcVar6;
    uint uVar7;
    uint uVar8;
    int iVar9;

    iVar2 = __stack_chk_guard;
    if (param_4 == (char *)0x0) {
        param_4 = "(null)";
    } else if (*param_4 == '\0')
        goto LAB_0001db20;
    if (0 < param_6 || param_6 == -1) {
        iVar4 = 0;
        pcVar6 = param_4;
        do {
            pcVar6 = pcVar6 + 1;
            iVar4 = iVar4 + 1;
            if (*pcVar6 == '\0')
                break;
        } while (iVar4 < param_6 || param_6 == -1);
        param_5 = param_5 - iVar4;
    }
LAB_0001db20:
    uVar3 = param_5 & ~((int)param_5 >> 0x1f);
    if ((param_7 & 1) == 0) {
        if (0 < (int)param_5) {
            uVar7 = *param_2;
            uVar8 = uVar3;
            do {
                uVar5 = uVar7 + 1;
                if (uVar5 < param_3) {
                    *(undefined1 *)(param_1 + uVar7) = 0x20;
                    uVar5 = *param_2 + 1;
                }
                uVar8 = uVar8 - 1;
                *param_2 = uVar5;
                uVar7 = uVar5;
            } while (uVar8 != 0);
            if ((int)uVar3 < 1) {
                uVar3 = uVar3 - 1;
            } else {
                uVar3 = 0;
            }
        }
    } else {
        uVar3 = -uVar3;
    }
    cVar1 = *param_4;
    iVar4 = param_6;
    while (
        (cVar1 != '\0' &&
         ((iVar9 = iVar4, param_6 == -1 || (iVar9 = iVar4 + -1, 0 < iVar4))))) {
        uVar7 = *param_2 + 1;
        if (uVar7 < param_3) {
            *(char *)(param_1 + *param_2) = cVar1;
            uVar7 = *param_2 + 1;
        }
        *param_2 = uVar7;
        param_4 = param_4 + 1;
        cVar1 = *param_4;
        iVar4 = iVar9;
    }
    if (uVar3 != 0) {
        uVar7 = *param_2;
        do {
            uVar8 = uVar7 + 1;
            if (uVar8 < param_3) {
                *(undefined1 *)(param_1 + uVar7) = 0x20;
                uVar8 = *param_2 + 1;
            }
            uVar3 = uVar3 + 1;
            *param_2 = uVar8;
            uVar7 = uVar8;
        } while (uVar3 != 0);
    }
    if (iVar2 != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail();
    }
    return;
}

void FUN_0001dc5c(int param_1, uint *param_2, uint param_3, undefined4 param_4,
                  uint param_5, uint param_6, int param_7, int param_8,
                  uint param_9, uint param_10)

{
    uint uVar1;
    uint uVar2;
    int extraout_r2;
    uint uVar3;
    char *pcVar4;
    uint uVar5;
    char *pcVar6;
    uint uVar7;
    uint uVar8;
    uint uVar9;
    uint uVar10;
    longlong lVar11;
    uint local_88;
    int local_80;
    uint local_7c;
    uint local_70;
    uint local_6c;
    char acStack_59[45];
    int local_2c;

    uVar8 = param_10 & 0x20;
    local_2c = __stack_chk_guard;
    local_80 = param_8;
    if ((param_10 & 0x80) == 0) {
        uVar3 = (int)param_6 >> 0x1f;
        local_88 = (uVar3 ^ param_5) - uVar3;
        local_7c = (uVar3 ^ param_6) - (uVar3 + ((uVar3 ^ param_5) < uVar3));
        if ((int)param_6 < 0) {
            local_70 = 1;
            local_6c = 0x2d;
        } else if ((param_10 & 2) == 0) {
            local_70 = param_10 & 4;
            local_6c = local_70;
            if (local_70 != 0) {
                local_70 = 1;
                local_6c = 0x20;
            }
        } else {
            local_70 = 1;
            local_6c = 0x2b;
        }
    } else {
        local_88 = param_5;
        local_70 = 0;
        local_6c = 0;
        local_7c = param_6;
    }
    lVar11 = CONCAT44(local_7c, local_88);
    if ((param_10 & 0x40) == 0) {
        pcVar6 = "0123456789abcdef";
    } else {
        pcVar6 = "0123456789ABCDEF";
    }
    uVar3 = 0;
    pcVar4 = acStack_59 + 1;
    do {
        uVar1 = uVar3;
        uVar3 = uVar1 + 1;
        lVar11 = FUN_0002c3e8((int)lVar11, (int)((ulonglong)lVar11 >> 0x20),
                              param_7, param_7 >> 0x1f);
        *pcVar4 = pcVar6[extraout_r2];
        pcVar4 = pcVar4 + 1;
    } while (lVar11 != 0 && uVar3 < 0x2b);
    uVar9 = (uint)(local_88 != 0 || local_7c != 0) & param_10 >> 3;
    uVar2 = param_9;
    if (uVar9 != 0) {
        uVar9 = 0;
        if (param_7 == 8) {
            if ((int)param_9 <= (int)uVar3) {
                uVar7 = 1;
                uVar2 = uVar1 + 2;
                goto LAB_0001dd6c;
            }
        } else if (param_7 == 0x10) {
            uVar7 = param_9 - uVar3;
            if ((param_10 & 0x40) == 0) {
                uVar9 = 0x78;
            } else {
                uVar9 = 0x58;
            }
            goto LAB_0001dd6c;
        }
    }
    uVar7 = param_9 - uVar3;
LAB_0001dd6c:
    if (uVar8 != 0) {
        uVar8 = uVar3;
        if (uVar3 == ((int)uVar3 / 3) * 3) {
            uVar8 = uVar1;
        }
        uVar8 = (int)uVar8 / 3;
        uVar7 = uVar7 - uVar8;
        local_80 = param_8 - uVar8;
    }
    uVar7 = uVar7 & ~((int)uVar7 >> 0x1f);
    if ((int)uVar2 < (int)uVar3) {
        uVar2 = uVar3;
    }
    local_70 = (local_80 - uVar2) - local_70;
    if (uVar9 != 0) {
        local_70 = local_70 - 2;
    }
    uVar1 = local_70 & ~((int)local_70 >> 0x1f);
    if ((param_10 & 1) == 0) {
        if (((uint)(param_9 == 0xffffffff) & param_10 >> 4) == 0) {
            if (0 < (int)local_70) {
                uVar2 = *param_2;
                uVar10 = uVar1;
                do {
                    uVar5 = uVar2 + 1;
                    if (uVar5 < param_3) {
                        *(undefined1 *)(param_1 + uVar2) = 0x20;
                        uVar5 = *param_2 + 1;
                    }
                    uVar10 = uVar10 - 1;
                    *param_2 = uVar5;
                    uVar2 = uVar5;
                } while (uVar10 != 0);
                if ((int)uVar1 < 1) {
                    uVar1 = uVar1 - 1;
                } else {
                    uVar1 = 0;
                }
            }
        } else {
            uVar7 = uVar7 + uVar1;
            uVar1 = 0;
        }
    } else {
        uVar1 = -uVar1;
    }
    if (local_6c != 0) {
        uVar2 = *param_2 + 1;
        if (uVar2 < param_3) {
            *(char *)(param_1 + *param_2) = (char)local_6c;
            uVar2 = *param_2 + 1;
        }
        *param_2 = uVar2;
    }
    if (uVar9 != 0) {
        uVar2 = *param_2;
        uVar10 = uVar2 + 1;
        if (uVar10 < param_3) {
            *(undefined1 *)(param_1 + uVar2) = 0x30;
            uVar2 = *param_2;
            uVar10 = uVar2 + 1;
        }
        *param_2 = uVar10;
        if (uVar2 + 2 < param_3) {
            *(char *)(param_1 + uVar10) = (char)uVar9;
            uVar10 = *param_2;
        }
        *param_2 = uVar10 + 1;
    }
    if (uVar7 != 0) {
        uVar2 = *param_2;
        do {
            uVar9 = uVar2 + 1;
            if (uVar9 < param_3) {
                *(undefined1 *)(param_1 + uVar2) = 0x30;
                uVar9 = *param_2 + 1;
            }
            uVar7 = uVar7 - 1;
            *param_2 = uVar9;
            uVar2 = uVar9;
        } while (uVar7 != 0);
    }
    if (0 < (int)uVar3) {
        do {
            while (true) {
                uVar2 = *param_2;
                uVar3 = uVar3 - 1;
                uVar9 = uVar2 + 1;
                if (uVar9 < param_3) {
                    *(char *)(param_1 + uVar2) = (acStack_59 + 1)[uVar3];
                    uVar2 = *param_2;
                    uVar9 = uVar2 + 1;
                }
                *param_2 = uVar9;
                if ((int)uVar3 < 1 || (int)uVar8 < 1)
                    break;
                if (uVar3 == (uVar3 / 3) * 3) {
                    if (uVar2 + 2 < param_3) {
                        *(undefined1 *)(param_1 + uVar9) = 0x2c;
                        uVar9 = *param_2;
                    }
                    *param_2 = uVar9 + 1;
                }
            }
        } while (uVar3 != 0);
    }
    if (uVar1 != 0) {
        uVar8 = *param_2;
        do {
            uVar3 = uVar8 + 1;
            if (uVar3 < param_3) {
                *(undefined1 *)(param_1 + uVar8) = 0x20;
                uVar3 = *param_2 + 1;
            }
            uVar1 = uVar1 + 1;
            *param_2 = uVar3;
            uVar8 = uVar3;
        } while (uVar1 != 0);
    }
    if (local_2c != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail();
    }
    return;
}

/* WARNING: Removing unreachable block (ram,0x0001e53c) */
/* WARNING: Removing unreachable block (ram,0x0001ec38) */
/* WARNING: Removing unreachable block (ram,0x0001e544) */
/* WARNING: Removing unreachable block (ram,0x0001e50c) */
/* WARNING: Removing unreachable block (ram,0x0001e408) */
/* WARNING: Removing unreachable block (ram,0x0001e418) */
/* WARNING: Removing unreachable block (ram,0x0001e4cc) */
/* WARNING: Removing unreachable block (ram,0x0001e51c) */
/* WARNING: Removing unreachable block (ram,0x0001e4dc) */

void FUN_0001e0c0(int param_1, uint *param_2, uint param_3, int param_4,
                  uint param_5, uint param_6, undefined4 *param_7)

{
    byte *pbVar1;
    uint uVar2;
    char *pcVar3;
    int extraout_r2;
    uint uVar4;
    int extraout_r2_00;
    int extraout_r2_01;
    undefined1 uVar5;
    uint uVar6;
    int iVar7;
    char *pcVar8;
    int iVar9;
    uint uVar10;
    undefined4 uVar11;
    int iVar12;
    uint uVar13;
    uint uVar14;
    uint uVar15;
    uint uVar16;
    uint uVar17;
    bool bVar18;
    double in_d0;
    double dVar19;
    double dVar20;
    double dVar21;
    double dVar22;
    longlong lVar23;
    longlong lVar24;
    longlong lVar25;
    char *local_e0;
    int local_c8;
    uint local_c4;
    undefined4 local_b4;
    char local_b0[47];
    char acStack_81[45];
    int local_54;

    if (param_5 == 0xffffffff) {
        param_5 = 6;
    }
    local_54 = __stack_chk_guard;
    if (in_d0 < 0.0) {
        local_c8 = 0x2d;
    LAB_0001e42c:
        if (in_d0 + in_d0 == in_d0) {
            if ((param_6 & 0x40) == 0) {
                pbVar1 = &DAT_0002d7c4;
            } else {
                pbVar1 = &DAT_0002d7c8;
            }
            pcVar8 = (char *)(uint)*pbVar1;
            if (local_c8 == 0) {
            LAB_0001e460:
                pcVar3 = local_b0 + 4 + local_c8 + -1;
                do {
                    pcVar3 = pcVar3 + 1;
                    *pcVar3 = (char)pcVar8;
                    local_c8 = local_c8 + 1;
                    pbVar1 = pbVar1 + 1;
                    pcVar8 = (char *)(uint)*pbVar1;
                    local_e0 = local_b0 + 4;
                } while (pcVar8 != (char *)0x0);
            } else {
                local_b0[4] = (undefined1)local_c8;
                bVar18 = pcVar8 == (char *)0x0;
                if (bVar18) {
                    pcVar8 = local_b0 + 4;
                }
                local_c8 = 1;
                local_e0 = pcVar8;
                if (!bVar18)
                    goto LAB_0001e460;
            }
            FUN_0001dac0(param_1, param_2, param_3, local_e0, param_4, local_c8,
                         param_6);
        LAB_0001e4ac:
            if (local_54 == __stack_chk_guard) {
                return;
            }
            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
        }
    } else {
        if ((param_6 & 2) == 0) {
            if ((param_6 & 4) == 0) {
                local_c8 = 0;
            } else {
                local_c8 = 0x20;
            }
        } else {
            local_c8 = 0x2b;
        }
        if (in_d0 != 0.0)
            goto LAB_0001e42c;
    }
    dVar22 = -in_d0;
    if ((param_6 & 0x300) == 0) {
        if (0.0 <= in_d0) {
            dVar22 = in_d0;
        }
        uVar17 = param_5;
        if (0x12 < (int)param_5) {
            uVar17 = 0x13;
        }
        uVar15 = param_6 & 0x200;
        dVar19 = dVar22;
        if (uVar15 == 0) {
            iVar12 = 0;
            local_c4 = 0;
            goto LAB_0001e258;
        }
        dVar21 = 1.0;
        iVar12 = 0;
        local_c4 = 0;
    } else {
        local_c4 = param_6 & 0x100;
        if (local_c4 != 0) {
            param_5 = param_5 - 1;
            local_c4 = (uint)((param_6 & 8) == 0);
        }
        dVar19 = dVar22;
        if (0.0 <= in_d0) {
            dVar19 = in_d0;
        }
        if ((1.0 <= dVar19) || (dVar19 <= 0.0)) {
            iVar12 = 0;
        } else {
            iVar12 = -1;
            do {
                dVar19 = dVar19 * 10.0;
                if ((1.0 <= dVar19) || (dVar19 <= 0.0))
                    break;
                iVar12 = iVar12 + -1;
            } while (iVar12 != -99);
        }
        uVar17 = param_5;
        if (10.0 <= dVar19) {
            iVar12 = iVar12 + 1;
            do {
                dVar19 = dVar19 / 10.0;
                if (dVar19 < 10.0)
                    break;
                iVar12 = iVar12 + 1;
            } while (iVar12 < 99);
            if (0.0 <= in_d0) {
                dVar22 = in_d0;
            }
            if (0x12 < (int)param_5) {
                uVar17 = 0x13;
            }
            if (iVar12 < 1)
                goto LAB_0001ec68;
            dVar21 = 1.0;
            iVar9 = iVar12;
            do {
                iVar9 = iVar9 + -1;
                dVar21 = dVar21 * 10.0;
            } while (iVar9 != 0);
        } else {
            if (0.0 <= in_d0) {
                dVar22 = in_d0;
            }
            if (0x12 < (int)param_5) {
                uVar17 = 0x13;
            }
        LAB_0001ec68:
            if (iVar12 == 0) {
                uVar15 = 1;
                dVar21 = 1.0;
                dVar19 = dVar22;
                goto LAB_0001e254;
            }
            dVar21 = 1.0;
            iVar9 = iVar12;
            do {
                iVar9 = iVar9 + 1;
                dVar21 = dVar21 / 10.0;
            } while (iVar9 != 0);
        }
        uVar15 = 1;
        dVar19 = dVar22;
    }
LAB_0001e254:
    dVar22 = dVar19 / dVar21;
LAB_0001e258:
LAB_0001e274:
    if (1.8446744073709552e+19 <= dVar22)
        goto LAB_0001e600;
    lVar23 = FUN_0002c428(SUB84(dVar22, 0), (int)((ulonglong)dVar22 >> 0x20));
    dVar21 = (double)FUN_0002c2dc();
    if (dVar22 < dVar21) {
        lVar23 = CONCAT44((int)((ulonglong)lVar23 >> 0x20) -
                              (uint)((int)lVar23 == 0),
                          (int)lVar23 + -1);
    }
    if (lVar23 == -1)
        goto LAB_0001e600;
    dVar21 = 1.0;
    uVar6 = uVar17;
    if (0 < (int)param_5) {
        do {
            uVar6 = uVar6 - 1;
            dVar21 = dVar21 * 10.0;
        } while (uVar6 != 0);
        if ((int)uVar17 < 1) {
            uVar6 = uVar17 - 1;
        } else {
            uVar6 = 0;
        }
    }
    for (; uVar6 != 0; uVar6 = uVar6 + 1) {
        dVar21 = dVar21 / 10.0;
    }
    lVar24 = FUN_0002c428(SUB84(dVar21, 0), (int)((ulonglong)dVar21 >> 0x20));
    uVar6 = (uint)((ulonglong)lVar24 >> 0x20);
    dVar21 =
        (double)FUN_0002c2dc((int)lVar23, (int)((ulonglong)lVar23 >> 0x20));
    dVar20 = (double)FUN_0002c2dc((uint)lVar24, uVar6);
    dVar20 = (dVar22 - dVar21) * dVar20;
    if (1.8446744073709552e+19 <= dVar20) {
        if (0.5 <= dVar20 - 1.8446744073709552e+19) {
            lVar25 = 0;
            goto LAB_0001e3a4;
        }
    LAB_0001e570:
        lVar23 = lVar23 + 1;
        if (uVar15 != 0 && lVar23 == 10) {
            iVar12 = iVar12 + 1;
            lVar23 = 1;
        }
        lVar25 = 0;
    } else {
        lVar25 =
            FUN_0002c428(SUB84(dVar20, 0), (int)((ulonglong)dVar20 >> 0x20));
        dVar22 = (double)FUN_0002c2dc();
        if (dVar20 < dVar22) {
            iVar9 = (int)lVar25 + -1;
            iVar7 = (int)((ulonglong)lVar25 >> 0x20) - (uint)((int)lVar25 == 0);
            lVar25 = CONCAT44(iVar7, iVar9);
            dVar22 = (double)FUN_0002c2dc(iVar9, iVar7);
        }
        if (0.5 <= dVar20 - dVar22) {
            lVar25 = lVar25 + 1;
        }
    LAB_0001e3a4:
        uVar2 = (uint)((ulonglong)lVar25 >> 0x20);
        bVar18 = uVar2 <= uVar6;
        if (uVar6 == uVar2) {
            bVar18 = (uint)lVar25 <= (uint)lVar24;
        }
        if (!bVar18 || lVar24 == lVar25)
            goto LAB_0001e570;
    }
    if (((param_6 & 0x100) != 0) && (uVar15 != 0 && iVar12 <= (int)uVar17)) {
        if (iVar12 + 4 < 0 != SCARRY4(iVar12, 4))
            goto LAB_0001eb5c;
        param_5 = uVar17 - iVar12;
        uVar15 = 0;
        uVar17 = param_5;
        dVar22 = dVar19;
        if (0x12 < (int)param_5) {
            uVar17 = 0x13;
        }
        goto LAB_0001e274;
    }
    if (uVar15 != 0) {
    LAB_0001eb5c:
        if (iVar12 < 0) {
            uVar5 = 0x2d;
            iVar12 = -iVar12;
        } else {
            uVar5 = 0x2b;
        }
        lVar24 = (longlong)iVar12;
        iVar12 = 0;
        do {
            uVar11 = (undefined4)((ulonglong)lVar24 >> 0x20);
            uVar15 = iVar12 + 1;
            FUN_0002c3e8((int)lVar24, uVar11, 10, 0);
            local_b0[iVar12] = "0123456789abcdef"[extraout_r2_01];
            iVar12 = 1;
            lVar24 = FUN_0002c3e8((int)lVar24, uVar11, 10, 0);
            bVar18 = lVar24 != 0 && uVar15 < 2;
        } while (bVar18);
        if (uVar15 == 1) {
            local_b0[1] = uVar15 != 1 && bVar18;
        }
        uVar15 = 4;
        local_b0[2] = uVar5;
        if ((param_6 & 0x40) == 0) {
            local_b0[3] = 0x65;
        } else {
            local_b0[3] = 0x45;
        }
    }
    pcVar8 = local_b0 + 4;
    uVar6 = 0;
    do {
        uVar2 = uVar6;
        uVar11 = (undefined4)((ulonglong)lVar23 >> 0x20);
        FUN_0002c3e8((int)lVar23, uVar11, 10, 0);
        uVar6 = uVar2 + 1;
        *pcVar8 = "0123456789abcdef"[extraout_r2];
        lVar23 = FUN_0002c3e8((int)lVar23, uVar11, 10, 0);
        pcVar8 = pcVar8 + 1;
    } while (lVar23 != 0 && uVar6 < 0x2b);
    uVar16 = uVar17;
    if (lVar25 == 0) {
        uVar10 = uVar6;
        if (local_c4 == 0) {
            uVar4 = uVar17;
            uVar14 = 0;
            goto LAB_0001ea60;
        }
        uVar16 = 0;
        uVar4 = 0;
        uVar14 = 0;
        local_c4 = uVar17;
    LAB_0001e6f4:
        uVar17 = (param_6 << 0x1c) >> 0x1f;
    } else {
        uVar14 = 0;
        pcVar8 = acStack_81 + 1;
        local_b4 = uVar6;
        do {
            uVar11 = (undefined4)((ulonglong)lVar25 >> 0x20);
            FUN_0002c3e8((int)lVar25, uVar11, 10, 0);
            uVar14 = uVar14 + 1;
            *pcVar8 = "0123456789abcdef"[extraout_r2_00];
            lVar25 = FUN_0002c3e8((int)lVar25, uVar11, 10, 0);
            pcVar8 = pcVar8 + 1;
        } while (lVar25 != 0 && uVar14 < 0x2b);
        uVar4 = uVar17 - uVar14;
        uVar10 = local_b4;
        if (local_c4 != 0) {
            local_c4 = 0;
            pcVar8 = acStack_81 + 1;
            if ((int)uVar14 < 1) {
                uVar16 = 0;
                uVar4 = 0;
                local_c4 = uVar17;
                goto LAB_0001e6f4;
            }
            do {
                if (*pcVar8 != '0') {
                    uVar16 = uVar17 - local_c4;
                    goto LAB_0001ea60;
                }
                local_c4 = local_c4 + 1;
                pcVar8 = pcVar8 + 1;
            } while (local_c4 != uVar14);
            uVar16 = uVar17 - local_c4;
            uVar14 = local_c4;
        }
    LAB_0001ea60:
        if ((int)uVar16 < 1)
            goto LAB_0001e6f4;
        uVar17 = 1;
    }
    uVar13 = param_6 & 0x20;
    if (uVar13 != 0) {
        uVar13 = uVar6;
        if (uVar6 == ((int)uVar6 / 3) * 3) {
            uVar13 = uVar2;
        }
        uVar13 = (int)uVar13 / 3;
    }
    iVar12 = ((((param_4 - uVar6) - uVar15) - uVar16) - uVar13) - uVar17;
    if (local_c8 != 0) {
        iVar12 = iVar12 + -1;
    }
    if (iVar12 < 0) {
        iVar9 = 0;
    LAB_0001e83c:
        if (local_c8 != 0) {
            uVar2 = *param_2 + 1;
            if (uVar2 < param_3) {
                *(char *)(param_1 + *param_2) = (char)local_c8;
                uVar2 = *param_2 + 1;
            }
            *param_2 = uVar2;
        }
    } else {
        if ((param_6 & 1) != 0) {
            iVar9 = -iVar12;
            goto LAB_0001e83c;
        }
        iVar9 = 0;
        if ((param_6 & 0x10) == 0) {
            if (iVar12 != 0) {
                uVar2 = *param_2;
                iVar9 = iVar12;
                do {
                    uVar16 = uVar2 + 1;
                    if (uVar16 < param_3) {
                        *(undefined1 *)(param_1 + uVar2) = 0x20;
                        uVar16 = *param_2 + 1;
                    }
                    iVar9 = iVar9 + -1;
                    *param_2 = uVar16;
                    uVar2 = uVar16;
                } while (iVar9 != 0);
            }
            goto LAB_0001e83c;
        }
        if (iVar12 == 0)
            goto LAB_0001e83c;
        uVar2 = *param_2;
        if (local_c8 != 0) {
            uVar16 = uVar2 + 1;
            if (uVar2 + 1 < param_3) {
                *(char *)(param_1 + uVar2) = (char)local_c8;
                uVar16 = *param_2 + 1;
            }
            uVar2 = uVar16;
            *param_2 = uVar2;
        }
        do {
            uVar16 = uVar2 + 1;
            if (uVar16 < param_3) {
                *(undefined1 *)(param_1 + uVar2) = 0x30;
                uVar16 = *param_2 + 1;
            }
            iVar12 = iVar12 + -1;
            *param_2 = uVar16;
            uVar2 = uVar16;
        } while (iVar12 != 0);
        iVar9 = 0;
    }
    if (0 < (int)uVar6) {
        do {
            while (true) {
                uVar6 = *param_2;
                uVar10 = uVar10 - 1;
                uVar2 = uVar6 + 1;
                if (uVar2 < param_3) {
                    *(char *)(param_1 + uVar6) = (local_b0 + 4)[uVar10];
                    uVar6 = *param_2;
                    uVar2 = uVar6 + 1;
                }
                *param_2 = uVar2;
                if ((int)uVar10 < 1 || (int)uVar13 < 1)
                    break;
                if (uVar10 % 3 == 0) {
                    if (uVar6 + 2 < param_3) {
                        *(undefined1 *)(param_1 + uVar2) = 0x2c;
                        uVar2 = *param_2;
                    }
                    *param_2 = uVar2 + 1;
                }
            }
        } while (uVar10 != 0);
    }
    if (uVar17 != 0) {
        uVar17 = *param_2 + 1;
        if (uVar17 < param_3) {
            *(undefined1 *)(param_1 + *param_2) = 0x2e;
            uVar17 = *param_2 + 1;
        }
        *param_2 = uVar17;
    }
    if (0 < (int)uVar4) {
        uVar17 = *param_2;
        do {
            uVar6 = uVar17 + 1;
            if (uVar6 < param_3) {
                *(undefined1 *)(param_1 + uVar17) = 0x30;
                uVar6 = *param_2 + 1;
            }
            uVar4 = uVar4 - 1;
            *param_2 = uVar6;
            uVar17 = uVar6;
        } while (uVar4 != 0);
    }
    if ((int)local_c4 < (int)uVar14) {
        uVar17 = *param_2;
        do {
            uVar6 = uVar17 + 1;
            uVar2 = uVar14 - 1;
            if (uVar6 < param_3) {
                *(char *)(param_1 + uVar17) = acStack_81[uVar14];
                uVar6 = *param_2 + 1;
            }
            *param_2 = uVar6;
            uVar17 = uVar6;
            uVar14 = uVar2;
        } while (local_c4 != uVar2);
    }
    if (uVar15 != 0) {
        uVar17 = *param_2;
        do {
            uVar6 = uVar17 + 1;
            uVar2 = uVar15 - 1;
            if (uVar6 < param_3) {
                *(char *)(param_1 + uVar17) = local_b0[uVar15 - 1];
                uVar6 = *param_2 + 1;
            }
            *param_2 = uVar6;
            uVar17 = uVar6;
            uVar15 = uVar2;
        } while (uVar2 != 0);
    }
    if (iVar9 != 0) {
        uVar17 = *param_2;
        do {
            uVar15 = uVar17 + 1;
            if (uVar15 < param_3) {
                *(undefined1 *)(param_1 + uVar17) = 0x20;
                uVar15 = *param_2 + 1;
            }
            iVar9 = iVar9 + 1;
            *param_2 = uVar15;
            uVar17 = uVar15;
        } while (iVar9 != 0);
    }
    goto LAB_0001e4ac;
LAB_0001e600:
    *param_7 = 1;
    goto LAB_0001e4ac;
}

void FUN_0001ec98(int param_1, uint param_2, char *param_3, uint *param_4)

{
    uint uVar1;
    int *piVar2;
    uint uVar3;
    uint *puVar4;
    char cVar5;
    undefined4 uVar6;
    int iVar7;
    undefined8 *puVar8;
    uint *puVar9;
    uint uVar10;
    uint uVar11;
    uint uVar12;
    uint uVar13;
    uint uVar14;
    uint local_34;
    int local_30;
    int local_2c;

    uVar12 = param_2;
    if (param_2 != 0) {
        uVar12 = 1;
    }
    if (param_1 != 0) {
        uVar12 = 0;
    }
    local_2c = __stack_chk_guard;
    if (uVar12 != 0) {
        param_2 = 0;
    }
    local_34 = 0;
    cVar5 = *param_3;
    uVar3 = 0;
    local_30 = 0;
    param_3 = param_3 + 1;
    uVar1 = 0xffffffff;
    uVar10 = 0;
    uVar12 = 0;
    uVar14 = 0;
LAB_0001ed14:
    uVar13 = uVar14;
    if (cVar5 != '\0') {
        do {
            uVar11 = uVar1;
            uVar14 = uVar13;
            switch (uVar13) {
            case 1:
                switch (cVar5) {
                case ' ':
                    cVar5 = *param_3;
                    uVar3 = uVar3 | 4;
                    param_3 = param_3 + 1;
                    goto LAB_0001ed14;
                case '!':
                    break;
                case '\"':
                    break;
                case '#':
                    cVar5 = *param_3;
                    uVar3 = uVar3 | 8;
                    param_3 = param_3 + 1;
                    goto LAB_0001ed14;
                case '$':
                    break;
                case '%':
                    break;
                case '&':
                    break;
                case '\'':
                    cVar5 = *param_3;
                    uVar3 = uVar3 | 0x20;
                    param_3 = param_3 + 1;
                    goto LAB_0001ed14;
                case '(':
                    break;
                case ')':
                    break;
                case '*':
                    break;
                case '+':
                    cVar5 = *param_3;
                    uVar3 = uVar3 | 2;
                    param_3 = param_3 + 1;
                    goto LAB_0001ed14;
                case ',':
                    break;
                case '-':
                    uVar3 = uVar3 | 1;
                    goto LAB_0001ee44;
                case '.':
                    break;
                case '/':
                    break;
                case '0':
                    cVar5 = *param_3;
                    uVar3 = uVar3 | 0x10;
                    param_3 = param_3 + 1;
                    goto LAB_0001ed14;
                }
                uVar14 = 2;
                goto LAB_0001ed14;
            case 2:
                goto LAB_0001eec4;
            case 3:
                if (cVar5 == '.') {
                    cVar5 = *param_3;
                    param_3 = param_3 + 1;
                    uVar14 = 4;
                } else {
                LAB_0001eebc:
                    uVar14 = 5;
                }
                goto LAB_0001ed14;
            case 4:
                uVar11 = (uint)(byte)(cVar5 - 0x30);
                if (uVar1 == 0xffffffff) {
                    if (uVar11 < 10)
                        goto LAB_0001ee44;
                    uVar1 = 0;
                LAB_0001f30c:
                    if (cVar5 != '*')
                        goto LAB_0001eebc;
                    uVar1 = *param_4;
                    cVar5 = *param_3;
                    param_4 = param_4 + 1;
                    param_3 = param_3 + 1;
                    uVar1 = uVar1 | (int)uVar1 >> 0x1f;
                    uVar14 = 5;
                    goto LAB_0001ed14;
                }
                if (9 < uVar11)
                    goto LAB_0001f30c;
                if ((int)((0x7fffffff - uVar11) / 10) < (int)uVar1)
                    goto LAB_0001f558;
                uVar11 = uVar11 + uVar1 * 10;
            LAB_0001ee44:
                cVar5 = *param_3;
                param_3 = param_3 + 1;
                uVar1 = uVar11;
                if (cVar5 == '\0')
                    goto LAB_0001ee58;
                break;
            case 5:
                switch (cVar5) {
                case 'L':
                    cVar5 = *param_3;
                    uVar14 = 6;
                    param_3 = param_3 + 1;
                    uVar10 = uVar13;
                    goto LAB_0001ed14;
                case 'M':
                    break;
                case 'N':
                    break;
                case 'O':
                    break;
                case 'P':
                    break;
                case 'Q':
                    break;
                case 'R':
                    break;
                case 'S':
                    break;
                case 'T':
                    break;
                case 'U':
                    break;
                case 'V':
                    break;
                case 'W':
                    break;
                case 'X':
                    break;
                case 'Y':
                    break;
                case 'Z':
                    break;
                case '[':
                    break;
                case '\\':
                    break;
                case ']':
                    break;
                case '^':
                    break;
                case '_':
                    break;
                case '`':
                    break;
                case 'a':
                    break;
                case 'b':
                    break;
                case 'c':
                    break;
                case 'd':
                    break;
                case 'e':
                    break;
                case 'f':
                    break;
                case 'g':
                    break;
                case 'h':
                    cVar5 = *param_3;
                    if (cVar5 == 'h') {
                        cVar5 = param_3[1];
                        param_3 = param_3 + 2;
                        uVar10 = 1;
                    } else {
                        param_3 = param_3 + 1;
                        uVar10 = 2;
                    }
                    uVar14 = 6;
                    goto LAB_0001ed14;
                case 'i':
                    break;
                case 'j':
                    cVar5 = *param_3;
                    uVar14 = 6;
                    param_3 = param_3 + 1;
                    uVar10 = 8;
                    goto LAB_0001ed14;
                case 'k':
                    break;
                case 'l':
                    cVar5 = *param_3;
                    if (cVar5 == 'l') {
                        cVar5 = param_3[1];
                        param_3 = param_3 + 2;
                        uVar10 = 4;
                    } else {
                        param_3 = param_3 + 1;
                        uVar10 = 3;
                    }
                    uVar14 = 6;
                    goto LAB_0001ed14;
                case 'm':
                    break;
                case 'n':
                    break;
                case 'o':
                    break;
                case 'p':
                    break;
                case 'q':
                    break;
                case 'r':
                    break;
                case 's':
                    break;
                case 't':
                    cVar5 = *param_3;
                    uVar14 = 6;
                    param_3 = param_3 + 1;
                    uVar10 = 7;
                    goto LAB_0001ed14;
                case 'u':
                    break;
                case 'v':
                    break;
                case 'w':
                    break;
                case 'x':
                    break;
                case 'y':
                    break;
                case 'z':
                    uVar14 = 6;
                    cVar5 = *param_3;
                    param_3 = param_3 + 1;
                    uVar10 = 6;
                    goto LAB_0001ed14;
                }
                uVar14 = 6;
                goto LAB_0001ed14;
            case 6:
                puVar9 = param_4;
                uVar14 = local_34;
                switch (cVar5) {
                case '%':
                    uVar14 = local_34 + 1;
                    if (uVar14 < param_2) {
                        *(undefined1 *)(param_1 + local_34) = 0x25;
                    }
                    break;
                case '&':
                    break;
                case '\'':
                    break;
                case '(':
                    break;
                case ')':
                    break;
                case '*':
                    break;
                case '+':
                    break;
                case ',':
                    break;
                case '-':
                    break;
                case '.':
                    break;
                case '/':
                    break;
                case '0':
                    break;
                case '1':
                    break;
                case '2':
                    break;
                case '3':
                    break;
                case '4':
                    break;
                case '5':
                    break;
                case '6':
                    break;
                case '7':
                    break;
                case '8':
                    break;
                case '9':
                    break;
                case ':':
                    break;
                case ';':
                    break;
                case '<':
                    break;
                case '=':
                    break;
                case '>':
                    break;
                case '?':
                    break;
                case '@':
                    break;
                case 'A':
                    goto LAB_0001f2b4;
                case 'B':
                    break;
                case 'C':
                    break;
                case 'D':
                    break;
                case 'E':
                    uVar3 = uVar3 | 0x40;
                    goto LAB_0001f280;
                case 'F':
                LAB_0001f2b4:
                    uVar3 = uVar3 | 0x40;
                    goto LAB_0001f2b8;
                case 'G':
                    uVar3 = uVar3 | 0x40;
                    goto LAB_0001f210;
                case 'H':
                    break;
                case 'I':
                    break;
                case 'J':
                    break;
                case 'K':
                    break;
                case 'L':
                    break;
                case 'M':
                    break;
                case 'N':
                    break;
                case 'O':
                    break;
                case 'P':
                    break;
                case 'Q':
                    break;
                case 'R':
                    break;
                case 'S':
                    break;
                case 'T':
                    break;
                case 'U':
                    break;
                case 'V':
                    break;
                case 'W':
                    break;
                case 'X':
                    uVar3 = uVar3 | 0x40;
                    goto LAB_0001f1d4;
                case 'Y':
                    break;
                case 'Z':
                    break;
                case '[':
                    break;
                case '\\':
                    break;
                case ']':
                    break;
                case '^':
                    break;
                case '_':
                    break;
                case '`':
                    break;
                case 'a':
                    goto LAB_0001f2b8;
                case 'b':
                    break;
                case 'c':
                    uVar14 = local_34 + 1;
                    puVar9 = param_4 + 1;
                    if (uVar14 < param_2) {
                        *(char *)(param_1 + local_34) = (char)*param_4;
                    }
                    break;
                case 'd':
                    goto LAB_0001f428;
                case 'e':
                LAB_0001f280:
                    uVar3 = uVar3 | 0x200;
                    puVar8 =
                        (undefined8 *)((uint)((int)param_4 + 7) & 0xfffffff8);
                    uVar6 = (undefined4)*puVar8;
                    goto LAB_0001f248;
                case 'f':
                LAB_0001f2b8:
                    puVar8 =
                        (undefined8 *)((uint)((int)param_4 + 7) & 0xfffffff8);
                    uVar6 = (undefined4)*puVar8;
                LAB_0001f248:
                    FUN_0001e0c0(uVar6, param_1, &local_34, param_2, uVar12,
                                 uVar1, uVar3, &local_30);
                    puVar9 = (uint *)(puVar8 + 1);
                    uVar14 = local_34;
                    if (local_30 != 0)
                        goto LAB_0001ee58;
                    break;
                case 'g':
                LAB_0001f210:
                    uVar3 = uVar3 | 0x100;
                    puVar8 =
                        (undefined8 *)((uint)((int)param_4 + 7) & 0xfffffff8);
                    uVar6 = (undefined4)*puVar8;
                    if (uVar1 == 0) {
                        uVar1 = 1;
                    }
                    goto LAB_0001f248;
                case 'h':
                    break;
                case 'i':
                LAB_0001f428:
                    switch (uVar10) {
                    case 1:
                        uVar10 = (uint)(char)(byte)*param_4;
                        puVar9 = param_4 + 1;
                        uVar14 = (int)uVar10 >> 0x1f;
                        break;
                    case 2:
                        uVar10 = (uint)(short)(ushort)*param_4;
                        puVar9 = param_4 + 1;
                        uVar14 = (int)uVar10 >> 0x1f;
                        break;
                    case 3:
                    default:
                    switchD_0001f430_default:
                        uVar10 = *param_4;
                        puVar9 = param_4 + 1;
                        uVar14 = (int)uVar10 >> 0x1f;
                        break;
                    case 4:
                        goto LAB_0001f544;
                    case 5:
                        goto switchD_0001f430_default;
                    case 6:
                        uVar10 = *param_4;
                        uVar14 = 0;
                        puVar9 = param_4 + 1;
                        break;
                    case 7:
                        goto switchD_0001f430_default;
                    case 8:
                    LAB_0001f544:
                        puVar4 =
                            (uint *)((uint)((int)param_4 + 7) & 0xfffffff8);
                        puVar9 = puVar4 + 2;
                        uVar10 = *puVar4;
                        uVar14 = puVar4[1];
                    }
                    FUN_0001dc5c(param_1, &local_34, param_2, 10, uVar10,
                                 uVar14, 10, uVar12, uVar1, uVar3);
                    uVar14 = local_34;
                    break;
                case 'j':
                    break;
                case 'k':
                    break;
                case 'l':
                    break;
                case 'm':
                    break;
                case 'n':
                    puVar9 = param_4 + 1;
                    param_4 = (uint *)*param_4;
                    switch (uVar10) {
                    case 1:
                        *(char *)param_4 = (char)local_34;
                        goto switchD_0001f078_default;
                    case 2:
                        *(short *)param_4 = (short)local_34;
                        goto switchD_0001f078_default;
                    case 3:
                        break;
                    case 4:
                        goto LAB_0001f534;
                    case 5:
                        break;
                    case 6:
                        break;
                    case 7:
                        break;
                    case 8:
                    LAB_0001f534:
                        *param_4 = local_34;
                        param_4[1] = 0;
                        goto switchD_0001f078_default;
                    }
                    *param_4 = local_34;
                    break;
                case 'o':
                    uVar6 = 8;
                    goto LAB_0001f1d8;
                case 'p':
                    uVar14 = *param_4;
                    puVar9 = param_4 + 1;
                    if (uVar14 == 0) {
                        FUN_0001dac0(param_1, &local_34, param_2, "(nil)",
                                     uVar12, 0xffffffff, uVar3);
                        uVar14 = local_34;
                    } else {
                        FUN_0001dc5c(param_1, &local_34, param_2, uVar14,
                                     uVar14, 0, 0x10, uVar12, uVar1,
                                     uVar3 | 0x88);
                        uVar14 = local_34;
                    }
                    break;
                case 'q':
                    break;
                case 'r':
                    break;
                case 's':
                    FUN_0001dac0(param_1, &local_34, param_2, *param_4, uVar12,
                                 uVar1, uVar3);
                    puVar9 = param_4 + 1;
                    uVar14 = local_34;
                    break;
                case 't':
                    break;
                case 'u':
                    uVar6 = 10;
                    goto LAB_0001f1d8;
                case 'v':
                    break;
                case 'w':
                    break;
                case 'x':
                LAB_0001f1d4:
                    uVar6 = 0x10;
                LAB_0001f1d8:
                    switch (uVar10) {
                    case 1:
                        uVar10 = (uint)(byte)*param_4;
                        uVar14 = 0;
                        puVar9 = param_4 + 1;
                        break;
                    case 2:
                        uVar10 = (uint)(ushort)*param_4;
                        uVar14 = 0;
                        puVar9 = param_4 + 1;
                        break;
                    case 3:
                    default:
                    switchD_0001f1e4_default:
                        uVar10 = *param_4;
                        uVar14 = 0;
                        puVar9 = param_4 + 1;
                        break;
                    case 4:
                        goto LAB_0001f398;
                    case 5:
                        goto switchD_0001f1e4_default;
                    case 6:
                        goto switchD_0001f1e4_default;
                    case 7:
                        uVar10 = *param_4;
                        puVar9 = param_4 + 1;
                        uVar14 = (int)uVar10 >> 0x1f;
                        break;
                    case 8:
                    LAB_0001f398:
                        puVar4 =
                            (uint *)((uint)((int)param_4 + 7) & 0xfffffff8);
                        puVar9 = puVar4 + 2;
                        uVar10 = *puVar4;
                        uVar14 = puVar4[1];
                    }
                    FUN_0001dc5c(param_1, &local_34, param_2, uVar6, uVar10,
                                 uVar14, uVar6, uVar12, uVar1, uVar3 | 0x80);
                    uVar14 = local_34;
                }
            switchD_0001f078_default:
                local_34 = uVar14;
                uVar3 = 0;
                cVar5 = *param_3;
                param_3 = param_3 + 1;
                uVar1 = 0xffffffff;
                param_4 = puVar9;
                uVar10 = uVar3;
                uVar12 = uVar3;
                uVar14 = uVar3;
                goto LAB_0001ed14;
            default:
                if (cVar5 == '%') {
                    uVar13 = 1;
                } else {
                    if (local_34 + 1 < param_2) {
                        *(char *)(param_1 + local_34) = cVar5;
                    }
                    uVar13 = 0;
                    local_34 = local_34 + 1;
                }
                goto LAB_0001ee44;
            }
        } while (true);
    }
    goto LAB_0001ee58;
LAB_0001eec4:
    uVar13 = (uint)(byte)(cVar5 - 0x30);
    if (9 < uVar13) {
        if (cVar5 == '*') {
            uVar12 = *param_4;
            uVar14 = 3;
            cVar5 = *param_3;
            param_4 = param_4 + 1;
            param_3 = param_3 + 1;
            if ((int)uVar12 < 0) {
                uVar3 = uVar3 | 1;
                uVar12 = -uVar12;
            }
        } else {
            uVar14 = 3;
        }
        goto LAB_0001ed14;
    }
    if ((int)uVar12 <= (int)((0x7fffffff - uVar13) / 10)) {
        cVar5 = *param_3;
        param_3 = param_3 + 1;
        uVar12 = uVar13 + uVar12 * 10;
        goto LAB_0001ed14;
    }
LAB_0001f558:
    local_30 = 1;
LAB_0001ee58:
    if (local_34 < param_2) {
        *(undefined1 *)(param_1 + local_34) = 0;
    } else if (param_2 != 0) {
        *(undefined1 *)(param_1 + param_2 + -1) = 0;
    }
    if (local_30 == 0) {
        uVar12 = local_34;
        if (local_34 < 0x7fffffff)
            goto LAB_0001ee94;
        iVar7 = 0x22;
    } else {
        iVar7 = 0x4b;
    }
    piVar2 = __errno_location();
    *piVar2 = iVar7;
    uVar12 = 0xffffffff;
LAB_0001ee94:
    if (local_2c != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail(uVar12);
    }
    return;
}

void FUN_0001f5f4(undefined4 param_1, undefined4 param_2, undefined4 param_3,
                  undefined4 param_4)

{
    int iVar1;
    undefined4 uStack_4;

    iVar1 = __stack_chk_guard;
    uStack_4 = param_4;
    FUN_0001ec98(param_1, param_2, param_3, &uStack_4, &uStack_4);
    if (iVar1 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_0001f658(short *param_1)

{
    int iVar1;
    short sVar2;
    int iVar3;
    int *piVar4;
    char *pcVar5;
    char *__buf;
    int iVar6;
    uint uVar7;
    int iVar8;

    iVar3 = __stack_chk_guard;
    piVar4 = __errno_location();
    iVar6 = *piVar4;
    __buf = lib_stringbuf + lib_nextbuf * 0x80;
    uVar7 = lib_nextbuf + 1 & 0xf;
    memset(__buf, 0, 0x80);
    lib_nextbuf = uVar7;
    if (param_1 == (short *)0x0) {
        FUN_000203c4(__buf, "(null)", 0x80);
        goto LAB_0001f6f4;
    }
    sVar2 = *param_1;
    if (sVar2 != 2) {
        if (sVar2 == 10) {
            inet_ntop(10, param_1 + 4, __buf, 0x80);
            iVar8 = *(int *)(param_1 + 0xc);
            if ((iVar8 != 0) && (pcVar5 = strchr(__buf, 0x25),
                                 uVar7 = lib_nextbuf, pcVar5 == (char *)0x0)) {
                iVar1 = lib_nextbuf * 0x80;
                pcVar5 = lib_stringbuf + iVar1;
                memset(pcVar5, 0, 0x80);
                lib_nextbuf = uVar7 + 1 & 0xf;
                FUN_0001f5f4(pcVar5, 0x80, "%s%%%lu", __buf, iVar8);
                lib_stringbuf[iVar1 + 0x7f] = 0;
                __buf = pcVar5;
            }
            goto LAB_0001f6f4;
        }
        if (sVar2 != 0) {
            FUN_0001f5f4(__buf, 0x80, "(socktoa unknown family %d)");
            goto LAB_0001f6f4;
        }
    }
    inet_ntop(2, param_1 + 2, __buf, 0x80);
LAB_0001f6f4:
    iVar8 = __stack_chk_guard;
    *piVar4 = iVar6;
    if (iVar3 == iVar8) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail(__buf);
}

void FUN_0001f7ec(short *param_1)

{
    int iVar1;
    int iVar2;
    int *piVar3;
    undefined4 uVar4;
    char *pcVar5;
    uint uVar6;
    undefined1 *__s;
    int iVar7;

    iVar1 = __stack_chk_guard;
    piVar3 = __errno_location();
    iVar7 = *piVar3;
    uVar4 = FUN_0001f658(param_1);
    __s = lib_stringbuf + lib_nextbuf * 0x80;
    uVar6 = lib_nextbuf + 1;
    memset(__s, 0, 0x80);
    if (*param_1 == 10) {
        pcVar5 = "[%s]:%hu";
    } else {
        pcVar5 = "%s:%hu";
    }
    lib_nextbuf = uVar6 & 0xf;
    FUN_0001f5f4(__s, 0x80, pcVar5, uVar4,
                 param_1[1] << 8 | (ushort)param_1[1] >> 8);
    iVar2 = __stack_chk_guard;
    *piVar3 = iVar7;
    if (iVar1 == iVar2) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail(__s);
}

void FUN_0001fa28(sockaddr *param_1)

{
    sa_family_t sVar1;
    addrinfo *__ai;
    int *piVar2;
    int iVar3;
    char *pcVar4;
    undefined4 uVar5;
    int iVar6;
    socklen_t __salen;
    uint uVar7;
    addrinfo *paVar8;
    char *__host;
    int iVar9;
    addrinfo *local_70;
    addrinfo local_6c;
    int local_4c;
    int local_48;
    int local_44;
    int local_40;
    int local_3c;
    int local_38;
    int local_34;
    undefined4 local_30;
    int local_2c;

    local_30 = 0x70746e;
    local_2c = __stack_chk_guard;
    piVar2 = __errno_location();
    iVar9 = *piVar2;
    __host = lib_stringbuf + lib_nextbuf * 0x80;
    uVar7 = lib_nextbuf + 1;
    memset(__host, 0, 0x80);
    if (param_1->sa_family == 2) {
        __salen = 0x10;
    } else {
        __salen = 0x1c;
    }
    lib_nextbuf = uVar7 & 0xf;
    iVar3 = getnameinfo(param_1, __salen, __host, 0x80, (char *)0x0, 0, 0x18);
    if (iVar3 == 0) {
        if (0 < debug) {
            uVar5 = FUN_0001f658(param_1);
            FUN_0001a750("%s reversed to %s\n", uVar5, __host);
        }
        memset(&local_6c, 0, 0x20);
        local_6c.ai_family = (int)param_1->sa_family;
        local_70 = (addrinfo *)0x0;
        local_6c.ai_protocol = 0x11;
        local_6c.ai_socktype = 2;
        iVar3 = getaddrinfo(__host, (char *)&local_30, &local_6c, &local_70);
        if (iVar3 == -2 || iVar3 == -5) {
            local_6c.ai_flags = 0x22;
            iVar3 =
                getaddrinfo(__host, (char *)&local_30, &local_6c, &local_70);
        }
        if (iVar3 == -1) {
            local_6c.ai_flags = local_6c.ai_flags & 0xffffffdf;
            iVar3 =
                getaddrinfo(__host, (char *)&local_30, &local_6c, &local_70);
        }
        __ai = local_70;
        if (iVar3 == 0) {
            if (local_70 == (addrinfo *)0x0) {
                /* WARNING: Subroutine does not return */
                FUN_0002073c("socktohost.c", 0x57, 2, "alist != ((void *)0)");
            }
            sVar1 = param_1->sa_family;
            paVar8 = local_70;
            do {
                while (true) {
                    uVar7 = paVar8->ai_addrlen;
                    if (0x1b < uVar7) {
                        uVar7 = 0x1c;
                    }
                    local_4c = iVar3;
                    local_48 = iVar3;
                    local_44 = iVar3;
                    local_40 = iVar3;
                    local_3c = iVar3;
                    local_38 = iVar3;
                    local_34 = iVar3;
                    __memcpy_chk(&local_4c, paVar8->ai_addr, uVar7);
                    if ((sa_family_t)local_4c == sVar1)
                        break;
                LAB_0001fc3c:
                    paVar8 = paVar8->ai_next;
                    if (paVar8 == (addrinfo *)0x0)
                        goto LAB_0001fd60;
                }
                if (sVar1 != 2) {
                    iVar6 = memcmp(param_1->sa_data + 6, &local_44, 0x10);
                    if ((iVar6 == 0) &&
                        (*(int *)(param_1[1].sa_data + 6) == local_34))
                        goto LAB_0001fcbc;
                    goto LAB_0001fc3c;
                }
                if (*(int *)(param_1->sa_data + 2) == local_48) {
                LAB_0001fcbc:
                    freeaddrinfo(__ai);
                    *piVar2 = iVar9;
                    goto LAB_0001fbf0;
                }
                paVar8 = paVar8->ai_next;
            } while (paVar8 != (addrinfo *)0x0);
        LAB_0001fd60:
            freeaddrinfo(__ai);
        }
        if (0 < debug) {
            pcVar4 = gai_strerror(iVar3);
            FUN_0001a750("%s forward check lookup fail: %s\n", __host, pcVar4);
        }
        pcVar4 = lib_stringbuf + lib_nextbuf * 0x80;
        uVar7 = lib_nextbuf + 1;
        memset(pcVar4, 0, 0x80);
        lib_nextbuf = uVar7 & 0xf;
        uVar5 = FUN_0001f658(param_1);
        FUN_0001f5f4(pcVar4, 0x80, "%s (%s)", uVar5, __host);
        *piVar2 = iVar9;
        __host = pcVar4;
    } else {
        *piVar2 = iVar9;
        __host = (char *)FUN_0001f658(param_1);
    }
LAB_0001fbf0:
    if (local_2c == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail(__host);
}

void FUN_0001fdcc(void)

{
    int iVar1;

    iVar1 = __stack_chk_guard;
    FUN_00019d2c();
    ssl_init_done = 1;
    if (iVar1 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_0001fe28(void)

{
    int iVar1;
    uint uVar2;

    iVar1 = __stack_chk_guard;
    uVar2 = OpenSSL_version_num();
    if (((uVar2 ^ 0x1010104f) & 0xfffff00f) != 0) {
        FUN_0001a828(
            4, "OpenSSL version mismatch. Built against %lx, you have %lx",
            0x1010104f, uVar2);
        __fprintf_chk(
            stderr, 1,
            "OpenSSL version mismatch. Built against %lx, you have %lx\n",
            0x1010104f, uVar2);
    }
    if (ssl_init_done == 0) {
        if (iVar1 == __stack_chk_guard) {
            FUN_0001fdcc();
            return;
        }
    } else if (iVar1 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_0001ff00(int param_1)

{
    int iVar1;
    char *pcVar2;

    iVar1 = __stack_chk_guard;
    if (ssl_init_done == 0) {
        FUN_0001fdcc();
    }
    pcVar2 = OBJ_nid2sn(param_1);
    if (param_1 == 0x37e) {
        if (debug == 0) {
            pcVar2 = "AES128CMAC";
        } else {
            pcVar2 = "AES128CMAC";
            __fprintf_chk(stderr, 1, "%s:%d:%s():%s:nid\n", "ssl_init.c", 0xdf,
                          "keytype_name", "AES128CMAC");
        }
    } else if (pcVar2 == (char *)0x0) {
        pcVar2 = "(unknown key type)";
    }
    if (iVar1 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pcVar2);
}

void FUN_00020024(byte *param_1, uint *param_2)

{
    int iVar1;
    __int32_t **pp_Var2;
    int iVar3;
    int iVar4;
    char *name;
    EVP_MD *md;
    undefined4 uVar5;
    undefined4 uVar6;
    byte *pbVar7;
    uint uVar8;
    byte *s;

    iVar1 = __stack_chk_guard;
    if (ssl_init_done == 0) {
        FUN_0001fdcc();
    }
    iVar4 = lib_nextbuf;
    s = lib_stringbuf + lib_nextbuf * 0x80;
    memset(s, 0, 0x80);
    lib_nextbuf = iVar4 + 1U & 0xf;
    FUN_000203c4(s, param_1, 0x80);
    uVar8 = (uint)(byte)lib_stringbuf[iVar4 * 0x80];
    if (uVar8 != 0) {
        pp_Var2 = __ctype_toupper_loc();
        pbVar7 = s;
        do {
            *pbVar7 = (byte)(*pp_Var2)[uVar8];
            pbVar7 = pbVar7 + 1;
            uVar8 = (uint)*pbVar7;
        } while (uVar8 != 0);
    }
    iVar3 = OBJ_sn2nid((char *)s);
    iVar4 = iVar3;
    if (iVar3 == 0) {
        iVar4 = strcmp("AES128CMAC", (char *)s);
        if (iVar4 == 0) {
            if (debug == 0) {
                iVar4 = 0x37e;
            } else {
                iVar4 = 0x37e;
                __fprintf_chk(stderr, 1, "%s:%d:%s():%s:key\n", "ssl_init.c",
                              0x87, "keytype_from_text", "AES128CMAC");
            }
        } else {
            pp_Var2 = __ctype_tolower_loc();
            if ((*pp_Var2)[*param_1] != 0x6d)
                goto LAB_000201ac;
            iVar4 = 4;
        }
    }
    iVar3 = iVar4;
    if (param_2 != (uint *)0x0) {
        name = OBJ_nid2sn(iVar4);
        md = EVP_get_digestbyname(name);
        if ((md == (EVP_MD *)0x0) ||
            (uVar8 = EVP_MD_size(md), uVar6 = stderr, uVar8 == 0)) {
            uVar6 = stderr;
            if (iVar4 != 0x37e) {
                uVar5 = FUN_0001ff00(iVar4);
                __fprintf_chk(uVar6, 1,
                              "key type %s is not supported by OpenSSL\n",
                              uVar5);
                iVar3 = 0;
                uVar6 = FUN_0001ff00(iVar4);
                FUN_0001a828(3, "key type %s is not supported by OpenSSL\n",
                             uVar6);
                goto LAB_000201ac;
            }
            if (debug == 0) {
                uVar8 = 0x10;
            } else {
                __fprintf_chk(stderr, 1, "%s:%d:%s():%s:len\n", "ssl_init.c",
                              0xa4, "keytype_from_text", "AES128CMAC");
                uVar8 = 0x10;
            }
        } else if (0x14 < uVar8) {
            uVar5 = FUN_0001ff00(iVar4);
            __fprintf_chk(uVar6, 1,
                          "key type %s %u octet digests are too big, max %lu\n",
                          uVar5, uVar8, 0x14);
            uVar6 = FUN_0001ff00(iVar4);
            FUN_0001a828(3, "key type %s %u octet digests are too big, max %lu",
                         uVar6, uVar8, 0x14);
            iVar3 = 0;
            goto LAB_000201ac;
        }
        *param_2 = uVar8;
    }
LAB_000201ac:
    if (iVar1 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar3);
}

void FUN_000203c4(char *param_1, char *param_2, int param_3)

{
    char cVar1;
    int iVar2;
    char *pcVar3;
    char *pcVar4;
    char *pcVar5;

    iVar2 = __stack_chk_guard;
    pcVar5 = param_2;
    if (param_3 == 0)
        goto LAB_00020458;
    pcVar3 = param_1;
    while (pcVar4 = pcVar5 + 1, param_1 + param_3 + -1 != pcVar3) {
        cVar1 = *pcVar5;
        *pcVar3 = cVar1;
        pcVar3 = pcVar3 + 1;
        pcVar5 = pcVar4;
        if (cVar1 == '\0')
            goto LAB_00020434;
    }
    param_1[param_3 + -1] = '\0';
    cVar1 = *pcVar5;
    while (pcVar4 = pcVar5 + 1, pcVar5 = pcVar4, cVar1 != '\0') {
    LAB_00020458:
        cVar1 = *pcVar5;
    }
LAB_00020434:
    if (iVar2 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pcVar4 + (-1 - (int)param_2));
}

void FUN_00020474(char *param_1, char *param_2, int param_3)

{
    int iVar1;
    size_t sVar2;
    char *pcVar3;
    char cVar4;
    char *pcVar5;
    bool bVar6;

    iVar1 = __stack_chk_guard;
    if (param_3 == 0) {
        pcVar5 = (char *)0x0;
    LAB_00020540:
        sVar2 = strlen(param_2);
        pcVar5 = pcVar5 + sVar2;
    } else {
        if (*param_1 == '\0') {
            pcVar5 = (char *)0x0;
        } else {
            pcVar5 = param_1 + 1;
            do {
                pcVar3 = pcVar5;
                if (param_1 + param_3 == pcVar3)
                    break;
                pcVar5 = pcVar3 + 1;
            } while (*pcVar3 != '\0');
            pcVar5 = pcVar3 + -(int)param_1;
            param_3 = param_3 - (int)pcVar5;
            param_1 = pcVar3;
            if (param_3 == 0)
                goto LAB_00020540;
        }
        cVar4 = *param_2;
        pcVar3 = param_2;
        if (cVar4 != '\0') {
            do {
                bVar6 = param_3 != 1;
                if (bVar6) {
                    *param_1 = cVar4;
                    param_3 = param_3 + -1;
                }
                pcVar3 = pcVar3 + 1;
                cVar4 = *pcVar3;
                if (bVar6) {
                    param_1 = param_1 + 1;
                }
            } while (cVar4 != '\0');
            pcVar5 = pcVar3 + ((int)pcVar5 - (int)param_2);
        }
        *param_1 = '\0';
    }
    if (iVar1 != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail(pcVar5);
    }
    return;
}

/* WARNING: Removing unreachable block (ram,0x000205c8) */

void sigint_handler(void)

{
    if (DAT_00043340 != (code *)0x0) {
        /* WARNING: Could not recover jumptable at 0x000205b0. Too many branches
         */
        /* WARNING: Treating indirect jump as call */
        (*DAT_00043340)();
        return;
    }
    return;
}

void FUN_000205d8(int param_1, _union_1051 param_2)

{
    int *piVar1;
    int iVar2;
    undefined4 extraout_r3;
    undefined4 uVar3;
    _union_1051 local_134;
    sigset_t sStack_130;
    undefined4 local_b0;
    sigaction sStack_a8;
    int local_1c;

    local_1c = __stack_chk_guard;
    memset(&local_134, 0, 0x8c);
    sigemptyset(&sStack_130);
    uVar3 = extraout_r3;
    if (param_1 == 0x1d) {
        uVar3 = 0x10000000;
    }
    local_134 = param_2;
    if (param_1 == 0x1d) {
        local_b0 = uVar3;
    }
    while (iVar2 = sigaction(param_1, (sigaction *)&local_134, &sStack_a8),
           iVar2 == -1) {
        piVar1 = __errno_location();
        if (*piVar1 != 4) {
            perror("sigaction");
            /* WARNING: Subroutine does not return */
            exit(1);
        }
    }
    if (local_1c != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail();
    }
    return;
}

void FUN_0002073c(void)

{
    (*DAT_000410d4)();
    /* WARNING: Subroutine does not return */
    abort();
}

/* WARNING: Removing unreachable block (ram,0x00020880) */

void FUN_000207f8(undefined4 param_1)

{
    switch (param_1) {
    case 0:
        break;
    case 1:
        break;
    case 2:
        break;
    case 3:
    }
    return;
}

void FUN_0002089c(undefined4 param_1, undefined4 param_2, undefined4 param_3,
                  undefined4 param_4)

{
    FILE *pFVar1;
    int iVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    int iVar5;
    undefined4 *puVar6;
    char *pcVar7;
    int local_238;
    undefined4 local_234;
    undefined4 local_230;
    undefined4 local_22c[128];
    int local_2c;

    local_2c = __stack_chk_guard;
    iVar2 = FUN_00020ad4(local_22c, 0x80, &local_238);
    pFVar1 = stderr;
    if (iVar2 == 0) {
        if (local_238 < 1) {
            pcVar7 = ".";
        } else {
            pcVar7 = ", back trace";
        }
        uVar3 = FUN_000207f8(param_3);
        uVar4 = FUN_0002103c(isc_msgcat, 1, 0x65, "failed");
        __fprintf_chk(pFVar1, 1, "%s:%d: %s(%s) %s%s\n", param_1, param_2,
                      uVar3, param_4, uVar4, pcVar7);
        if (0 < local_238) {
            iVar2 = 0;
            puVar6 = &local_230;
            do {
                puVar6 = puVar6 + 1;
                local_234 = 0;
                iVar5 = FUN_00020c28(*puVar6, &local_234, &local_230);
                if (iVar5 == 0) {
                    uVar3 = local_234;
                    param_4 = local_230;
                    __fprintf_chk(stderr, 1, "#%d %p in %s()+0x%lx\n", iVar2,
                                  *puVar6, local_234, local_230, uVar4, pcVar7);
                } else {
                    __fprintf_chk(stderr, 1, "#%d %p in ??\n", iVar2, *puVar6,
                                  uVar3, param_4, uVar4, pcVar7);
                }
                iVar2 = iVar2 + 1;
            } while (iVar2 < local_238);
        }
    } else {
        uVar3 = FUN_000207f8(param_3);
        uVar4 = FUN_0002103c(isc_msgcat, 1, 0x65, "failed");
        __fprintf_chk(pFVar1, 1, "%s:%d: %s(%s) %s%s\n", param_1, param_2,
                      uVar3, param_4, uVar4, ".");
    }
    fflush(stderr);
    if (local_2c == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

/* WARNING: Removing unreachable block (ram,0x00020b1c) */

void FUN_00020ad4(void)

{
    return;
}

/* WARNING: Removing unreachable block (ram,0x00020ca0) */
/* WARNING: Removing unreachable block (ram,0x00020cb4) */
/* WARNING: Removing unreachable block (ram,0x00020cc0) */
/* WARNING: Removing unreachable block (ram,0x00020cd4) */
/* WARNING: Removing unreachable block (ram,0x00020cd8) */
/* WARNING: Removing unreachable block (ram,0x00020cdc) */
/* WARNING: Removing unreachable block (ram,0x00020d1c) */
/* WARNING: Removing unreachable block (ram,0x00020d24) */
/* WARNING: Removing unreachable block (ram,0x00020d30) */
/* WARNING: Removing unreachable block (ram,0x00020d3c) */
/* WARNING: Removing unreachable block (ram,0x00020ce4) */
/* WARNING: Removing unreachable block (ram,0x00020cec) */
/* WARNING: Removing unreachable block (ram,0x00020d08) */
/* WARNING: Removing unreachable block (ram,0x00020d44) */

void FUN_00020c28(void)

{
    return;
}

void FUN_00020db8(void)

{
    int iVar1;
    undefined4 uVar2;
    int iVar3;
    undefined4 uVar4;
    undefined4 uVar5;

    iVar1 = __stack_chk_guard;
    iVar3 = pthread_once((pthread_once_t *)&DAT_00043344,
                         (__init_routine *)&DAT_00020d58);
    uVar2 = stderr;
    if (iVar3 != 0) {
        uVar4 = FUN_0002103c(isc_msgcat, 1, 0x6e, "fatal error");
        uVar5 = FUN_0002103c(isc_msgcat, 1, 0x65, "failed");
        __fprintf_chk(uVar2, 1, "%s:%d: %s: isc_once_do() %s.\n",
                      "./../lib/isc/lib.c", 0x4d, uVar4, uVar5);
        /* WARNING: Subroutine does not return */
        abort();
    }
    if (iVar1 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

/* WARNING: Removing unreachable block (ram,0x000210c8) */

void FUN_0002103c(int *param_1, int param_2, int param_3, int param_4)

{
    if ((param_1 != (int *)0x0) && (*param_1 != 0x4d436174)) {
        /* WARNING: Subroutine does not return */
        FUN_0002073c("./../lib/isc/nls/msgcat.c", 0x77, 0,
                     "(((msgcat) != ((void *)0)) && (((const isc__magic_t "
                     "*)(msgcat))->magic == (((\'M\') << 24 | (\'C\') << 16 | "
                     "(\'a\') << 8 | (\'t\'))))) || msgcat == ((void *)0)");
    }
    if (param_2 < 1) {
        /* WARNING: Subroutine does not return */
        FUN_0002073c("./../lib/isc/nls/msgcat.c", 0x78, 0, "set > 0");
    }
    if (param_3 < 1) {
        /* WARNING: Subroutine does not return */
        FUN_0002073c("./../lib/isc/nls/msgcat.c", 0x79, 0, "message > 0");
    }
    if (param_4 != 0) {
        return;
    }
    /* WARNING: Subroutine does not return */
    FUN_0002073c("./../lib/isc/nls/msgcat.c", 0x7a, 0,
                 "default_text != ((void *)0)");
}

void FUN_00021148(int param_1)

{
    int iVar1;
    int *piVar2;
    undefined4 uVar3;
    int iVar4;
    undefined4 uVar5;
    socklen_t local_c4;
    sockaddr sStack_c0;
    undefined1 auStack_a4[128];
    int local_24;

    local_24 = __stack_chk_guard;
    iVar1 = socket(param_1, 1, 0);
    if (iVar1 == -1) {
        piVar2 = __errno_location();
        iVar1 = *piVar2;
        if (((iVar1 == 0x5d) || (iVar1 == 0x61)) || (iVar1 == 0x16)) {
            uVar5 = 0x17;
        } else {
            FUN_000229c0(iVar1, auStack_a4, 0x80);
            uVar5 = 0x22;
            uVar3 = FUN_0002103c(isc_msgcat, 1, 0x65, "failed");
            FUN_00025008("./../lib/isc/unix/net.c", 0x90, "socket() %s: %s",
                         uVar3, auStack_a4);
        }
        goto LAB_00021198;
    }
    if (param_1 == 10) {
        local_c4 = 0x1c;
        iVar4 = getsockname(iVar1, &sStack_c0, &local_c4);
        if (iVar4 < 0) {
            uVar5 = 0x17;
            FUN_00027f70(isc_lctx, 0x41128, isc_modules, 0xfffffffc,
                         "retrieving the address of an IPv6 socket from the "
                         "kernel failed.");
            FUN_00027f70(isc_lctx, 0x41128, isc_modules, 0xfffffffc,
                         "IPv6 is not supported.");
        } else {
            if (local_c4 == 0x1c)
                goto LAB_0002118c;
            uVar5 = 0x17;
            FUN_00027f70(
                isc_lctx, 0x41128, isc_modules, 0xfffffffc,
                "IPv6 structures in kernel and user space do not match.");
            FUN_00027f70(isc_lctx, 0x41128, isc_modules, 0xfffffffc,
                         "IPv6 is not supported.");
        }
    } else {
    LAB_0002118c:
        uVar5 = 0;
    }
    close(iVar1);
LAB_00021198:
    if (local_24 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
}

void FUN_000213c4(void)

{
    int iVar1;
    int iVar2;

    iVar1 = __stack_chk_guard;
    iVar2 = pthread_once((pthread_once_t *)&DAT_0004334c,
                         (__init_routine *)&LAB_0002135c);
    if (iVar2 == 0) {
        if (iVar1 == __stack_chk_guard) {
            return;
        }
    } else if (iVar1 == __stack_chk_guard) {
        FUN_000250d0("./../lib/isc/unix/net.c", 0xdd,
                     "((pthread_once((&once), (initialize_action)) == 0) ? 0 : "
                     "34) == 0");
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_0002145c(void)

{
    int iVar1;

    iVar1 = __stack_chk_guard;
    FUN_000213c4();
    if (iVar1 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail(DAT_000410d8);
}

void FUN_000214b4(void)

{
    int iVar1;

    iVar1 = __stack_chk_guard;
    FUN_000213c4();
    if (iVar1 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail(DAT_000410dc);
}

void FUN_0002150c(void)

{
    int iVar1;
    int iVar2;
    int *piVar3;
    undefined4 uVar4;
    undefined4 local_a8;
    undefined1 auStack_a4[128];
    int local_24;

    local_24 = __stack_chk_guard;
    iVar1 = FUN_000214b4();
    if (iVar1 == 0) {
        iVar1 = socket(10, 1, 0);
        if (iVar1 == -1) {
            piVar3 = __errno_location();
            FUN_000229c0(*piVar3, auStack_a4, 0x80);
            uVar4 = FUN_0002103c(isc_msgcat, 1, 0x65, "failed");
            FUN_00025008("./../lib/isc/unix/net.c", 0x10a, "socket() %s: %s",
                         uVar4, auStack_a4);
            DAT_000410e0 = 0x22;
            iVar1 = DAT_000410e0;
        } else {
            local_a8 = 1;
            iVar2 = setsockopt(iVar1, 0x29, 0x1a, &local_a8, 4);
            if (iVar2 < 0) {
                DAT_000410e0 = 0x17;
            } else {
                close(iVar1);
                iVar1 = socket(10, 2, 0);
                if (iVar1 == -1) {
                    piVar3 = __errno_location();
                    FUN_000229c0(*piVar3, auStack_a4, 0x80);
                    uVar4 = FUN_0002103c(isc_msgcat, 1, 0x65, "failed");
                    FUN_00025008("./../lib/isc/unix/net.c", 0x121,
                                 "socket() %s: %s", uVar4, auStack_a4);
                    DAT_000410e0 = 0x22;
                    iVar1 = DAT_000410e0;
                    goto LAB_00021544;
                }
                local_a8 = 1;
                iVar2 = setsockopt(iVar1, 0x29, 0x1a, &local_a8, 4);
                if (iVar2 < 0) {
                    DAT_000410e0 = 0x17;
                } else {
                    DAT_000410e0 = 0;
                }
            }
            close(iVar1);
            iVar1 = DAT_000410e0;
        }
    }
LAB_00021544:
    DAT_000410e0 = iVar1;
    if (local_24 != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail();
    }
    return;
}

void FUN_00021740(void)

{
    int iVar1;
    int iVar2;
    int *piVar3;
    undefined4 uVar4;
    undefined4 local_a0;
    undefined1 auStack_9c[128];
    int local_1c;

    local_1c = __stack_chk_guard;
    iVar1 = FUN_000214b4();
    if (iVar1 == 0) {
        iVar1 = socket(10, 2, 0x11);
        if (iVar1 == -1) {
            piVar3 = __errno_location();
            FUN_000229c0(*piVar3, auStack_9c, 0x80);
            uVar4 = FUN_0002103c(isc_msgcat, 1, 0x65, "failed");
            FUN_00025008("./../lib/isc/unix/net.c", 0x152, "socket() %s: %s",
                         uVar4, auStack_9c);
            DAT_000410e4 = 0x22;
            iVar1 = DAT_000410e4;
        } else {
            local_a0 = 1;
            iVar2 = setsockopt(iVar1, 0x29, 0x31, &local_a0, 4);
            if (iVar2 < 0) {
                DAT_000410e4 = 0x17;
            } else {
                DAT_000410e4 = 0;
            }
            close(iVar1);
            iVar1 = DAT_000410e4;
        }
    }
    DAT_000410e4 = iVar1;
    if (local_1c != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail();
    }
    return;
}

void FUN_000229c0(int param_1, int param_2, undefined4 param_3)

{
    int iVar1;
    int iVar2;
    char *pcVar3;

    iVar1 = __stack_chk_guard;
    if (param_2 == 0) {
        /* WARNING: Subroutine does not return */
        FUN_0002073c("./../lib/isc/unix/strerror.c", 0x37, 0,
                     "buf != ((void *)0)");
    }
    iVar2 = pthread_once((pthread_once_t *)&DAT_00043370,
                         (__init_routine *)&LAB_00022928);
    if (iVar2 != 0) {
        FUN_000250d0(
            "./../lib/isc/unix/strerror.c", 0x39,
            "((pthread_once((&once), (init_lock)) == 0) ? 0 : 34) == 0");
    }
    iVar2 = pthread_mutex_lock((pthread_mutex_t *)&DAT_00043358);
    if (iVar2 == 0) {
        pcVar3 = strerror(param_1);
    } else {
        FUN_000250d0("./../lib/isc/unix/strerror.c", 0x3b,
                     "((pthread_mutex_lock(((&isc_strerror_lock))) == 0) ? 0 : "
                     "34) == 0");
        pcVar3 = strerror(param_1);
    }
    if (pcVar3 == (char *)0x0) {
        FUN_0001f5f4(param_2, param_3, "Unknown error: %u", param_1);
    } else {
        FUN_0001f5f4(param_2, param_3, "%s");
    }
    iVar2 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_00043358);
    if (iVar2 == 0) {
        if (iVar1 == __stack_chk_guard) {
            return;
        }
    } else if (iVar1 == __stack_chk_guard) {
        FUN_000250d0("./../lib/isc/unix/strerror.c", 0x41,
                     "((pthread_mutex_unlock(((&isc_strerror_lock))) == 0) ? 0 "
                     ": 34) == 0");
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_00022b5c(pthread_mutex_t *param_1, undefined4 param_2,
                  undefined4 param_3)

{
    int iVar1;
    int *piVar2;
    undefined1 auStack_9c[128];
    int local_1c;

    local_1c = __stack_chk_guard;
    iVar1 = pthread_mutex_init(param_1, (pthread_mutexattr_t *)0x0);
    if (iVar1 == 0xc) {
        iVar1 = 1;
    } else if (iVar1 != 0) {
        piVar2 = __errno_location();
        FUN_000229c0(*piVar2, auStack_9c, 0x80);
        FUN_00025008(param_2, param_3, "isc_mutex_init() failed: %s",
                     auStack_9c);
        iVar1 = 0x22;
    }
    if (local_1c != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail(iVar1);
    }
    return;
}

void FUN_00022c00(undefined4 *param_1, int param_2, undefined4 *param_3,
                  undefined4 *param_4)

{
    CMAC_CTX *ctx;
    EVP_CIPHER *cipher;
    int iVar1;
    size_t sVar2;
    EVP_MD_CTX *ctx_00;
    char *pcVar3;
    EVP_MD *pEVar4;
    EVP_CIPHER_CTX *ctx_01;
    uint uVar5;
    undefined1 *key;
    size_t local_3c;
    uint local_38;
    undefined1 auStack_34[16];
    int local_24;

    local_3c = 0;
    local_24 = __stack_chk_guard;
    if (ssl_init_done == 0) {
        FUN_0001fdcc();
    }
    if (param_2 == 0x37e) {
        uVar5 = param_3[1];
        key = (undefined1 *)*param_3;
        if (uVar5 < 0x10) {
            __memcpy_chk(auStack_34, key, uVar5, 0x10);
            memset(auStack_34 + uVar5, 0, 0x10 - uVar5);
            ctx = CMAC_CTX_new();
            key = auStack_34;
        } else {
            ctx = CMAC_CTX_new();
        }
        if (ctx == (CMAC_CTX *)0x0) {
            FUN_0001a828(3, "MAC encrypt: CMAC %s CTX new failed.",
                         "AES128CMAC");
            sVar2 = local_3c;
        } else {
            cipher = EVP_aes_128_cbc();
            iVar1 = CMAC_Init(ctx, key, 0x10, cipher, (ENGINE *)0x0);
            if (iVar1 == 0) {
                FUN_0001a828(3, "MAC encrypt: CMAC %s Init failed.",
                             "AES128CMAC");
            } else {
                ctx_01 = CMAC_CTX_get0_cipher_ctx(ctx);
                if ((ctx_01 == (EVP_CIPHER_CTX *)0x0) ||
                    (uVar5 = EVP_CIPHER_CTX_block_size(ctx_01),
                     uVar5 <= (uint)param_1[1])) {
                    iVar1 = CMAC_Update(ctx, (void *)*param_4, param_4[1]);
                    if (iVar1 == 0) {
                        FUN_0001a828(3, "MAC encrypt: CMAC %s Update failed.",
                                     "AES128CMAC");
                    } else {
                        iVar1 = CMAC_Final(ctx, (uchar *)*param_1, &local_3c);
                        if (iVar1 == 0) {
                            FUN_0001a828(3,
                                         "MAC encrypt: CMAC %s Final failed.",
                                         "AES128CMAC");
                            local_3c = 0;
                        }
                    }
                } else {
                    FUN_0001a828(3, "MAC encrypt: CMAC %s buf too small.",
                                 "AES128CMAC");
                }
            }
            CMAC_CTX_cleanup(ctx);
            sVar2 = local_3c;
        }
    } else {
        ctx_00 = (EVP_MD_CTX *)EVP_MD_CTX_new();
        local_38 = 0;
        if (ctx_00 == (EVP_MD_CTX *)0x0) {
            pcVar3 = OBJ_nid2sn(param_2);
            FUN_0001a828(3, "MAC encrypt: MAC %s Digest CTX new failed.",
                         pcVar3);
            sVar2 = local_38;
        } else {
            EVP_MD_CTX_set_flags(ctx_00, 8);
            pcVar3 = OBJ_nid2sn(param_2);
            pEVar4 = EVP_get_digestbyname(pcVar3);
            iVar1 = EVP_DigestInit_ex(ctx_00, pEVar4, (ENGINE *)0x0);
            if (iVar1 == 0) {
                pcVar3 = OBJ_nid2sn(param_2);
                FUN_0001a828(3, "MAC encrypt: MAC %s Digest Init failed.",
                             pcVar3);
            } else {
                pEVar4 = EVP_MD_CTX_md(ctx_00);
                uVar5 = EVP_MD_size(pEVar4);
                if ((uint)param_1[1] < uVar5) {
                    pcVar3 = OBJ_nid2sn(param_2);
                    FUN_0001a828(3, "MAC encrypt: MAC %s buf too small.",
                                 pcVar3);
                } else {
                    iVar1 =
                        EVP_DigestUpdate(ctx_00, (void *)*param_3, param_3[1]);
                    if (iVar1 == 0) {
                        pcVar3 = OBJ_nid2sn(param_2);
                        FUN_0001a828(
                            3, "MAC encrypt: MAC %s Digest Update key failed.",
                            pcVar3);
                    } else {
                        iVar1 = EVP_DigestUpdate(ctx_00, (void *)*param_4,
                                                 param_4[1]);
                        if (iVar1 == 0) {
                            pcVar3 = OBJ_nid2sn(param_2);
                            FUN_0001a828(3,
                                         "MAC encrypt: MAC %s Digest Update "
                                         "data failed.",
                                         pcVar3);
                        } else {
                            iVar1 = EVP_DigestFinal(ctx_00, (uchar *)*param_1,
                                                    &local_38);
                            if (iVar1 == 0) {
                                pcVar3 = OBJ_nid2sn(param_2);
                                FUN_0001a828(
                                    3,
                                    "MAC encrypt: MAC %s Digest Final failed.",
                                    pcVar3);
                                local_38 = 0;
                            }
                        }
                    }
                }
            }
            local_3c = local_38;
            EVP_MD_CTX_free(ctx_00);
            sVar2 = local_3c;
        }
    }
    if (local_24 != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail(sVar2);
    }
    return;
}

int FUN_00022fbc(undefined4 param_1, undefined4 param_2, undefined4 param_3,
                 int param_4, int param_5)

{
    uint __n;
    undefined1 *puStack_74;
    undefined4 uStack_70;
    undefined4 local_6c;
    undefined4 local_68;
    int local_64;
    int local_60;
    undefined1 auStack_5c[64];
    int local_1c;

    local_1c = __stack_chk_guard;
    uStack_70 = 0x40;
    local_60 = param_5;
    puStack_74 = auStack_5c;
    local_6c = param_2;
    local_68 = param_3;
    local_64 = param_4;
    __n = FUN_00022c00(&puStack_74, param_1, &local_6c, &local_64);
    if (0x13 < __n) {
        __n = 0x14;
    }
    memcpy((void *)(param_4 + param_5 + 4), auStack_5c, __n);
    if (local_1c == __stack_chk_guard) {
        return __n + 4;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_00023060(undefined4 param_1, undefined4 param_2, undefined4 param_3,
                  int param_4, int param_5, int param_6)

{
    bool bVar1;
    uint uVar2;
    int iVar3;
    undefined1 *puStack_74;
    undefined4 uStack_70;
    undefined4 local_6c;
    undefined4 local_68;
    int local_64;
    int local_60;
    undefined1 auStack_5c[64];
    int local_1c;

    local_1c = __stack_chk_guard;
    uStack_70 = 0x40;
    local_60 = param_5;
    puStack_74 = auStack_5c;
    local_6c = param_2;
    local_68 = param_3;
    local_64 = param_4;
    uVar2 = FUN_00022c00(&puStack_74, param_1, &local_6c, &local_64);
    if (0x13 < uVar2) {
        uVar2 = 0x14;
    }
    if (uVar2 + 4 == param_6) {
        iVar3 = FUN_00029c68(auStack_5c, param_4 + param_5 + 4);
        bVar1 = iVar3 == 0;
    } else {
        FUN_0001a828(3, "MAC decrypt: MAC length error");
        bVar1 = false;
    }
    if (local_1c == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar1);
}

void FUN_00023220(void)

{
    tm *ptVar1;
    char *__s;
    uint uVar2;
    time_t local_28;
    int local_24;

    local_24 = __stack_chk_guard;
    local_28 = time((time_t *)0x0);
    ptVar1 = localtime(&local_28);
    if (ptVar1 == (tm *)0x0) {
        __s = "-- --- --:--:--";
    } else {
        __s = lib_stringbuf + lib_nextbuf * 0x80;
        uVar2 = lib_nextbuf + 1;
        memset(__s, 0, 0x80);
        lib_nextbuf = uVar2 & 0xf;
        FUN_0001f5f4(__s, 0x80, "%2d %s %02d:%02d:%02d", ptVar1->tm_mday,
                     *(undefined4 *)(months + ptVar1->tm_mon * 4),
                     ptVar1->tm_hour, ptVar1->tm_min, ptVar1->tm_sec);
    }
    if (local_24 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail(__s);
}

void FUN_00023320(time_t param_1)

{
    tm *ptVar1;
    char *__s;
    uint uVar2;
    time_t local_24[2];
    int local_1c;

    local_1c = __stack_chk_guard;
    local_24[0] = param_1;
    ptVar1 = localtime(local_24);
    if (ptVar1 == (tm *)0x0) {
        __s = "--:--:--";
    } else {
        __s = lib_stringbuf + lib_nextbuf * 0x80;
        uVar2 = lib_nextbuf + 1;
        memset(__s, 0, 0x80);
        lib_nextbuf = uVar2 & 0xf;
        FUN_0001f5f4(__s, 0x80, "%02d:%02d:%02d", ptVar1->tm_hour,
                     ptVar1->tm_min, ptVar1->tm_sec);
    }
    if (local_1c == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail(__s);
}

void FUN_00024d90(undefined4 param_1, undefined4 param_2, undefined4 param_3,
                  undefined4 param_4)

{
    int iVar1;

    iVar1 = __stack_chk_guard;
    __fprintf_chk(stderr, 1, "%s:%d: ", param_1, param_2);
    __vfprintf_chk(stderr, 1, param_3, param_4);
    fputc(10, stderr);
    if (iVar1 == __stack_chk_guard) {
        fflush(stderr);
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_00024e34(undefined4 param_1, undefined4 param_2, undefined4 param_3,
                  undefined4 param_4)

{
    int iVar1;
    FILE *pFVar2;
    undefined4 uVar3;

    pFVar2 = stderr;
    iVar1 = __stack_chk_guard;
    uVar3 = FUN_0002103c(isc_msgcat, 1, 0x6e, "fatal error");
    __fprintf_chk(pFVar2, 1, "%s:%d: %s: ", param_1, param_2, uVar3);
    __vfprintf_chk(stderr, 1, param_3, param_4);
    fputc(10, stderr);
    if (iVar1 == __stack_chk_guard) {
        fflush(stderr);
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_00025008(undefined4 param_1, undefined4 param_2, undefined4 param_3,
                  undefined4 param_4)

{
    int iVar1;
    undefined4 uStack_4;

    iVar1 = __stack_chk_guard;
    uStack_4 = param_4;
    (*DAT_000410e8)(param_1, param_2, param_3, &uStack_4, &uStack_4);
    if (iVar1 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_0002507c(undefined4 param_1, undefined4 param_2, undefined4 param_3,
                  undefined4 param_4)

{
    undefined4 uStack_4;

    uStack_4 = param_4;
    (*DAT_000410ec)(param_1, param_2, param_3, &uStack_4, &uStack_4,
                    __stack_chk_guard);
    /* WARNING: Subroutine does not return */
    abort();
}

void FUN_000250d0(undefined4 param_1, undefined4 param_2, undefined4 param_3)

{
    undefined4 uVar1;

    uVar1 = FUN_0002103c(isc_msgcat, 1, 0x65, "failed");
    /* WARNING: Subroutine does not return */
    FUN_0002507c(param_1, param_2, "RUNTIME_CHECK(%s) %s", param_3, uVar1);
}

void FUN_00025438(int param_1)

{
    char *pcVar1;
    size_t __n;
    int iVar2;
    int iVar3;
    long lVar4;
    uint uVar5;
    int iVar6;
    undefined4 uVar7;
    char *pcVar8;
    char *__s;
    int local_2550;
    char *local_2544;
    undefined1 auStack_2540[1028];
    char acStack_213c[256];
    uint local_203c;
    undefined1 auStack_2034[4100];
    undefined1 auStack_1030[4100];
    int local_2c;

    local_2c = __stack_chk_guard;
    if (*(int *)(param_1 + 0x18) != -2) {
        __s = *(char **)(param_1 + 0x14);
        if (*(int *)(param_1 + 4) != 3) {
            /* WARNING: Subroutine does not return */
            FUN_0002073c("./../lib/isc/log.c", 0x485, 0, "channel->type == 3");
        }
        pcVar1 = strrchr(__s, 0x2f);
        if (pcVar1 == (char *)0x0) {
            pcVar8 = ".";
            pcVar1 = __s;
        } else {
            *pcVar1 = '\0';
            pcVar8 = *(char **)(param_1 + 0x14);
            pcVar1 = pcVar1 + 1;
        }
        __n = strlen(pcVar1);
        FUN_00029d18(auStack_2540);
        iVar2 = FUN_00029da4(auStack_2540, pcVar8);
        if (pcVar1 != *(char **)(param_1 + 0x14)) {
            pcVar1[-1] = '/';
        }
        if (iVar2 != 0)
            goto LAB_000255b0;
        local_2550 = -1;
        while (iVar3 = FUN_00029f0c(auStack_2540), iVar3 == 0) {
            if ((((__n < local_203c) &&
                  (iVar3 = strncmp(acStack_213c, pcVar1, __n), iVar3 == 0)) &&
                 (acStack_213c[__n] == '.')) &&
                (lVar4 = strtol(auStack_2540 + __n + 0x405, &local_2544, 10),
                 *local_2544 == '\0' && local_2550 < lVar4)) {
                local_2550 = lVar4;
            }
        }
        local_2550 = local_2550 + 1;
        FUN_00029fec(auStack_2540);
        iVar3 = *(int *)(param_1 + 0x18);
        if (iVar3 <= local_2550 && iVar3 != -1) {
            while (true) {
                local_2550 = local_2550 + -1;
                if (local_2550 < iVar3)
                    break;
                uVar5 = FUN_0001f5f4(auStack_2034, 0x1001, "%s.%d", __s,
                                     local_2550);
                if (uVar5 < 0x1001) {
                    iVar3 = FUN_0002b0b0(auStack_2034);
                    if (iVar3 != 0 && iVar3 != 0x26)
                        goto LAB_000257d8;
                    iVar3 = *(int *)(param_1 + 0x18);
                } else {
                    iVar3 = 0x13;
                LAB_000257d8:
                    uVar7 = FUN_00028698(iVar3);
                    __syslog_chk(3, 1,
                                 "unable to remove log file \'%s.%d\': %s", __s,
                                 local_2550, uVar7);
                    iVar3 = *(int *)(param_1 + 0x18);
                }
            }
        }
        if (0 < local_2550) {
            do {
                while (true) {
                    iVar3 = local_2550 + -1;
                    uVar5 =
                        FUN_0001f5f4(auStack_2034, 0x1001, "%s.%d", __s, iVar3);
                    if (uVar5 < 0x1001)
                        break;
                LAB_00025634:
                    iVar6 = 0x13;
                LAB_00025638:
                    uVar7 = FUN_00028698(iVar6);
                    __syslog_chk(
                        3, 1,
                        "unable to rename log file \'%s.%d\' to \'%s.%d\': %s",
                        __s, iVar3, __s, local_2550, uVar7);
                    local_2550 = iVar3;
                    if (iVar3 == 0)
                        goto LAB_000256e4;
                }
                uVar5 = FUN_0001f5f4(auStack_1030, 0x1001, "%s.%d", __s,
                                     local_2550);
                if (0x1000 < uVar5)
                    goto LAB_00025634;
                iVar6 = FUN_0002b15c(auStack_2034, auStack_1030);
                if (iVar6 != 0 && iVar6 != 0x26)
                    goto LAB_00025638;
                local_2550 = iVar3;
            } while (iVar3 != 0);
        LAB_000256e4:
            iVar3 = *(int *)(param_1 + 0x18);
        }
        if (iVar3 != 0) {
            uVar5 = FUN_0001f5f4(auStack_1030, 0x1001, &DAT_0002e904, __s);
            if (uVar5 < 0x1001) {
                iVar3 = FUN_0002b15c(__s, auStack_1030);
                if (iVar3 == 0 || iVar3 == 0x26)
                    goto LAB_000255ac;
            } else {
                iVar3 = 0x13;
            }
            uVar7 = FUN_00028698(iVar3);
            __syslog_chk(3, 1,
                         "unable to rename log file \'%s\' to \'%s.0\': %s",
                         __s, __s, uVar7);
            goto LAB_000255b0;
        }
        iVar3 = FUN_0002b0b0(__s);
        if (iVar3 != 0 && iVar3 != 0x26) {
            uVar7 = FUN_00028698();
            __syslog_chk(3, 1, "unable to remove log file \'%s\': %s", __s,
                         uVar7);
            goto LAB_000255b0;
        }
    }
LAB_000255ac:
    iVar2 = 0;
LAB_000255b0:
    if (local_2c != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail(iVar2);
    }
    return;
}

/* WARNING: Removing unreachable block (ram,0x000272ac) */

void FUN_00027228(void)

{
    return;
}

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_000272b8(int *param_1, undefined4 *param_2, undefined4 *param_3,
                  int param_4, int param_5, int param_6, undefined4 param_7,
                  undefined4 param_8, int param_9, undefined4 param_10)

{
    byte bVar1;
    int iVar2;
    undefined4 uVar3;
    size_t sVar4;
    int *piVar5;
    uint uVar6;
    int *piVar7;
    char *pcVar8;
    int iVar9;
    char *pcVar10;
    char *pcVar11;
    pthread_mutex_t *__mutex;
    undefined4 *puVar12;
    uint uVar13;
    undefined4 uVar14;
    char *pcVar15;
    int iVar16;
    char *pcVar17;
    int iVar18;
    char *pcVar19;
    undefined4 *puVar20;
    undefined4 *__ptr;
    char *pcVar21;
    uint uVar22;
    char *pcVar23;
    char *pcVar24;
    bool bVar25;
    int local_184;
    int local_168;
    undefined1 auStack_160[8];
    stat64 sStack_158;
    stat64 sStack_f0;
    char local_84[24];
    char local_6c[64];
    int local_2c;

    local_2c = __stack_chk_guard;
    local_184 = param_9;
    if ((param_1 != (int *)0x0) && (*param_1 != 0x4c637478)) {
        /* WARNING: Subroutine does not return */
        FUN_0002073c("./../lib/isc/log.c", 0x590, 0,
                     "lctx == ((void *)0) || (((lctx) != ((void *)0)) && "
                     "(((const isc__magic_t *)(lctx))->magic == (((\'L\') << "
                     "24 | (\'c\') << 16 | (\'t\') << 8 | (\'x\')))))");
    }
    if (param_2 == (undefined4 *)0x0) {
        /* WARNING: Subroutine does not return */
        FUN_0002073c("./../lib/isc/log.c", 0x591, 0, "category != ((void *)0)");
    }
    if (param_3 == (undefined4 *)0x0) {
        /* WARNING: Subroutine does not return */
        FUN_0002073c("./../lib/isc/log.c", 0x592, 0, "module != ((void *)0)");
    }
    if (param_4 == 0) {
        /* WARNING: Subroutine does not return */
        FUN_0002073c("./../lib/isc/log.c", 0x593, 0, "level != 0");
    }
    if (param_9 == 0) {
        /* WARNING: Subroutine does not return */
        FUN_0002073c("./../lib/isc/log.c", 0x594, 0, "format != ((void *)0)");
    }
    if (param_1 != (int *)0x0) {
        if ((uint)param_1[3] <= (uint)param_2[1]) {
            /* WARNING: Subroutine does not return */
            FUN_0002073c("./../lib/isc/log.c", 0x59e, 0,
                         "category->id < lctx->category_count");
        }
        if ((uint)param_1[5] <= (uint)param_3[1]) {
            /* WARNING: Subroutine does not return */
            FUN_0002073c("./../lib/isc/log.c", 0x59f, 0,
                         "module->id < lctx->module_count");
        }
        iVar2 = FUN_00027228(param_1, param_4);
        if (iVar2 != 0) {
            if (param_6 != 0) {
                local_184 = FUN_0002103c(param_6, param_7, param_8, param_9);
            }
            __mutex = (pthread_mutex_t *)(param_1 + 7);
            local_6c[0] = '\0';
            local_84[0] = '\0';
            iVar2 = pthread_mutex_lock(__mutex);
            if (iVar2 != 0) {
                FUN_000250d0("./../lib/isc/log.c", 0x5ac,
                             "((pthread_mutex_lock(((&lctx->lock))) == 0) ? 0 "
                             ": 34) == 0");
            }
            iVar2 = param_1[0xd];
            bVar1 = 0;
            *(undefined1 *)(param_1 + 0xe) = 0;
            puVar12 = *(undefined4 **)(*(int *)(iVar2 + 0x10) + param_2[1] * 8);
            bVar25 = puVar12 == (undefined4 *)0x0;
            do {
                puVar20 = puVar12;
                if (((bool)(bVar25 & (bVar1 ^ 1))) &&
                    (puVar20 = (undefined4 *)**(undefined4 **)(iVar2 + 0x10),
                     (undefined4 *)**(undefined4 **)(iVar2 + 0x10) ==
                         (undefined4 *)0x0)) {
                    puVar20 = &DAT_00043374;
                }
                puVar12 = (undefined4 *)puVar20[3];
                if ((undefined4 *)*puVar20 == param_3 ||
                    (undefined4 *)*puVar20 == (undefined4 *)0x0) {
                    iVar16 = puVar20[1];
                    uVar13 = *(uint *)(iVar16 + 0xc);
                    if (((uVar13 & 0x1000) == 0) || (param_1[6] != 0)) {
                        iVar9 = *(int *)(iVar16 + 8);
                        if (iVar9 == 0) {
                            iVar9 = param_1[6];
                        }
                        if (param_4 <= iVar9) {
                            if (((uVar13 & 1) != 0) && (local_6c[0] == '\0')) {
                                iVar9 = FUN_00028fac(&sStack_f0);
                                if (iVar9 != 0) {
                                    FUN_000250d0(
                                        "./../lib/isc/log.c", 0x5eb,
                                        "isc_time_now((&isctime)) == 0");
                                }
                                FUN_000299bc(&sStack_f0, local_6c, 0x40);
                                uVar13 = *(uint *)(iVar16 + 0xc);
                            }
                            if (((uVar13 & 2) != 0) && (local_84[0] == '\0')) {
                                if (param_4 + 5 < 0 == SCARRY4(param_4, 5)) {
                                    if (param_4 < 1) {
                                        FUN_0001f5f4(
                                            local_84, 0x18, &DAT_0002f0b4,
                                            (&PTR_s_debug_00040b08)[-param_4]);
                                    } else {
                                        FUN_0001f5f4(local_84, 0x18,
                                                     "%s %d: ", "debug",
                                                     param_4);
                                    }
                                } else {
                                    uVar3 = FUN_0002103c(isc_msgcat, 10, 0x322,
                                                         "level");
                                    FUN_0001f5f4(local_84, 0x18,
                                                 "%s %d: ", uVar3, param_4);
                                }
                            }
                            if ((char)param_1[0xe] == '\0') {
                                piVar7 = param_1 + 0xe;
                                FUN_0001ec98(piVar7, 0x2000, local_184,
                                             param_10);
                                if (param_5 != 0) {
                                    FUN_00028c70(&sStack_f0,
                                                 *(undefined4 *)(iVar2 + 0x18),
                                                 0);
                                    iVar9 = FUN_00028fac(auStack_160);
                                    if (iVar9 != 0) {
                                        FUN_000250d0(
                                            "./../lib/isc/log.c", 0x61a,
                                            "isc_time_now((&oldest)) == 0");
                                    }
                                    iVar9 = FUN_0002956c(
                                        auStack_160, &sStack_f0, auStack_160);
                                    if (iVar9 == 0) {
                                        puVar20 = (undefined4 *)param_1[0x80e];
                                        while (__ptr = puVar20,
                                               puVar20 != (undefined4 *)0x0) {
                                            while (iVar9 = FUN_0002933c(
                                                       __ptr + 1, auStack_160),
                                                   -1 < iVar9) {
                                                iVar9 = strcmp((char *)piVar7,
                                                               (char *)*__ptr);
                                                if (iVar9 == 0) {
                                                    iVar2 =
                                                        pthread_mutex_unlock(
                                                            __mutex);
                                                    if (iVar2 != 0) {
                                                        FUN_000250d0(
                                                            "./../lib/isc/"
                                                            "log.c",
                                                            0x64e,
                                                            "((pthread_mutex_"
                                                            "unlock(((&lctx->"
                                                            "lock))) == 0) ? 0 "
                                                            ": 34) == 0");
                                                    }
                                                    goto LAB_0002739c;
                                                }
                                                __ptr = (undefined4 *)__ptr[4];
                                                if (__ptr == (undefined4 *)0x0)
                                                    goto LAB_000278cc;
                                            }
                                            puVar20 = (undefined4 *)__ptr[4];
                                            if (puVar20 == (undefined4 *)0x0) {
                                                if ((undefined4 *)
                                                        param_1[0x80f] !=
                                                    __ptr) {
                                                    /* WARNING: Subroutine does
                                                     * not return */
                                                    FUN_0002073c(
                                                        "./../lib/isc/log.c",
                                                        0x638, 2,
                                                        "(lctx->messages).tail "
                                                        "== (message)");
                                                }
                                                iVar9 = __ptr[3];
                                                param_1[0x80f] = iVar9;
                                            } else {
                                                puVar20[3] = __ptr[3];
                                                iVar9 = __ptr[3];
                                            }
                                            if (iVar9 == 0) {
                                                if ((undefined4 *)
                                                        param_1[0x80e] !=
                                                    __ptr) {
                                                    /* WARNING: Subroutine does
                                                     * not return */
                                                    FUN_0002073c(
                                                        "./../lib/isc/log.c",
                                                        0x638, 2,
                                                        "(lctx->messages).head "
                                                        "== (message)");
                                                }
                                                param_1[0x80e] = (int)puVar20;
                                            } else {
                                                *(undefined4 **)(iVar9 + 0x10) =
                                                    puVar20;
                                            }
                                            free(__ptr);
                                        }
                                    }
                                LAB_000278cc:
                                    sVar4 = strlen((char *)piVar7);
                                    piVar5 =
                                        (int *)FUN_0001967c(0, sVar4 + 0x15, 0);
                                    if (piVar5 != (int *)0x0) {
                                        *piVar5 = (int)(piVar5 + 5);
                                        FUN_000203c4(piVar5 + 5, piVar7,
                                                     sVar4 + 1);
                                        iVar9 = FUN_00028fac(piVar5 + 1);
                                        if (iVar9 != 0) {
                                            FUN_000250d0("./../lib/isc/log.c",
                                                         0x665,
                                                         "isc_time_now((&new->"
                                                         "time)) == 0");
                                        }
                                        iVar9 = param_1[0x80f];
                                        if (iVar9 == 0) {
                                            param_1[0x80e] = (int)piVar5;
                                        } else {
                                            *(int **)(iVar9 + 0x10) = piVar5;
                                        }
                                        piVar5[3] = iVar9;
                                        piVar5[4] = 0;
                                        param_1[0x80f] = (int)piVar5;
                                    }
                                }
                            }
                            uVar22 = *(uint *)(iVar16 + 0xc);
                            uVar13 = uVar22 & 0x10;
                            if ((uVar13 != 0) &&
                                (uVar13 = *(uint *)(iVar2 + 0x20),
                                 uVar13 != 0)) {
                                uVar13 = 1;
                            }
                            iVar9 = *(int *)(iVar16 + 4);
                            iVar18 = uVar22 << 0x1d;
                            if (iVar9 == 3) {
                                if (*(int *)(iVar16 + 0x28) == 0) {
                                    iVar9 = *(int *)(iVar16 + 0x10);
                                    if (iVar9 != 0)
                                        goto LAB_00027718;
                                } else {
                                    if ((*(int *)(iVar16 + 0x18) == -2) &&
                                        (((iVar9 = __xstat64(
                                               3, *(char **)(iVar16 + 0x14),
                                               &sStack_158),
                                           iVar9 == 0 ||
                                               (piVar7 = __errno_location(),
                                                *piVar7 != 2)) &&
                                          (iVar9 = *(int *)(iVar16 + 0x24),
                                           bVar25 = (uint)sStack_158.st_size <
                                                    *(uint *)(iVar16 + 0x20),
                                           (int)(sStack_158.st_size._4_4_ -
                                                 (iVar9 + (uint)bVar25)) < 0 ==
                                               (SBORROW4(
                                                    sStack_158.st_size._4_4_,
                                                    iVar9) !=
                                                SBORROW4(
                                                    sStack_158.st_size._4_4_ -
                                                        iVar9,
                                                    (uint)bVar25))))))
                                        goto LAB_00027508;
                                    fclose(*(FILE **)(iVar16 + 0x10));
                                    *(undefined4 *)(iVar16 + 0x10) = 0;
                                    *(undefined4 *)(iVar16 + 0x28) = 0;
                                    if (*(int *)(iVar16 + 4) != 3) {
                                        /* WARNING: Subroutine does not return
                                         */
                                        FUN_0002073c("./../lib/isc/log.c",
                                                     0x52e, 0,
                                                     "channel->type == 3");
                                    }
                                }
                                pcVar24 = *(char **)(iVar16 + 0x14);
                                if ((pcVar24 == (char *)0x0) ||
                                    (*pcVar24 == '\0')) {
                                    /* WARNING: Subroutine does not return */
                                    FUN_0002073c("./../lib/isc/log.c", 0x533, 0,
                                                 "path != ((void *)0) && *path "
                                                 "!= \'\\0\'");
                                }
                                iVar9 = __xstat64(3, pcVar24, &sStack_f0);
                                if (iVar9 == 0) {
                                    uVar6 = *(uint *)(iVar16 + 0x20);
                                    iVar9 = *(int *)(iVar16 + 0x24);
                                    if (uVar6 != 0 || iVar9 != 0) {
                                        if ((((int)(uint)(uVar6 == 0) <=
                                              iVar9) &&
                                             ((int)(sStack_f0.st_size._4_4_ -
                                                    (iVar9 +
                                                     (uint)((uint)sStack_f0
                                                                .st_size <
                                                            uVar6))) < 0 ==
                                              (SBORROW4(sStack_f0.st_size._4_4_,
                                                        iVar9) !=
                                               SBORROW4(
                                                   sStack_f0.st_size._4_4_ -
                                                       iVar9,
                                                   (uint)((uint)sStack_f0
                                                              .st_size <
                                                          uVar6))))) &&
                                            ((sStack_f0.st_mode & 0xf000) ==
                                             0x8000)) {
                                            if (*(int *)(iVar16 + 0x18) == -2)
                                                goto LAB_00027508;
                                            goto LAB_00027654;
                                        }
                                        goto LAB_00027c70;
                                    }
                                    if ((*(int *)(iVar16 + 0x18) == -2) ||
                                        ((sStack_f0.st_mode & 0xf000) !=
                                         0x8000))
                                        goto LAB_00027c70;
                                LAB_00027654:
                                    local_168 = FUN_00025438(iVar16);
                                    if (local_168 == 0)
                                        goto LAB_00027c70;
                                    uVar6 = *(uint *)(iVar16 + 0xc);
                                    if ((uVar6 & 0x8000) == 0) {
                                        uVar14 = *(undefined4 *)(iVar16 + 0x14);
                                        uVar3 = FUN_00028698();
                                        __syslog_chk(3, 1,
                                                     "isc_log_open: roll_log "
                                                     "\'%s\' failed: %s",
                                                     uVar14, uVar3);
                                        uVar6 =
                                            *(uint *)(iVar16 + 0xc) | 0x8000;
                                        *(uint *)(iVar16 + 0xc) = uVar6;
                                    }
                                    if ((local_168 == 0x3a) ||
                                        ((uVar6 & 0x8000) != 0))
                                        goto LAB_00027508;
                                LAB_000276c4:
                                    uVar14 = *(undefined4 *)(iVar16 + 0x14);
                                    uVar3 = FUN_00028698(local_168);
                                    __syslog_chk(
                                        3, 1, "isc_log_open \'%s\' failed: %s",
                                        uVar14, uVar3);
                                    *(uint *)(iVar16 + 0xc) =
                                        *(uint *)(iVar16 + 0xc) | 0x8000;
                                } else {
                                LAB_00027c70:
                                    local_168 = FUN_0002884c(
                                        pcVar24, &DAT_0002d448, iVar16 + 0x10);
                                    if ((local_168 != 0 && local_168 != 0x3a) &&
                                        ((*(uint *)(iVar16 + 0xc) & 0x8000) ==
                                         0))
                                        goto LAB_000276c4;
                                }
                                if (local_168 != 0)
                                    goto LAB_00027508;
                                iVar9 = *(int *)(iVar16 + 0x10);
                                *(uint *)(iVar16 + 0xc) =
                                    *(uint *)(iVar16 + 0xc) & 0xffff7fff;
                            } else {
                                if (iVar9 != 4) {
                                    if (iVar9 == 2) {
                                        if (param_4 < 1) {
                                            uVar6 = 2;
                                            if (param_4 + 5 < 0 ==
                                                SCARRY4(param_4, 5)) {
                                                uVar6 =
                                                    *(uint *)(&DAT_0002e750 +
                                                              param_4 * -4);
                                            }
                                        } else {
                                            uVar6 = 7;
                                        }
                                        if ((uVar22 & 1) == 0) {
                                            pcVar15 = "";
                                            pcVar24 = pcVar15;
                                        } else {
                                            pcVar15 = local_6c;
                                            pcVar24 = " ";
                                        }
                                        if (uVar13 == 0) {
                                            pcVar11 = "";
                                            pcVar10 = pcVar11;
                                        } else {
                                            pcVar11 = *(char **)(iVar2 + 0x20);
                                            pcVar10 = ": ";
                                        }
                                        if (iVar18 < 0) {
                                            pcVar17 = ": ";
                                            pcVar23 = (char *)*param_2;
                                        } else {
                                            pcVar17 = "";
                                            pcVar23 = pcVar17;
                                        }
                                        if ((int)(uVar22 << 0x1c) < 0) {
                                            pcVar8 = (char *)*param_3;
                                            pcVar19 = ": ";
                                        } else {
                                            pcVar8 = "";
                                            pcVar19 = pcVar8;
                                        }
                                        if ((int)(uVar22 << 0x1e) < 0) {
                                            pcVar21 = local_84;
                                        } else {
                                            pcVar21 = "";
                                        }
                                        __syslog_chk(
                                            uVar6 | *(uint *)(iVar16 + 0x10), 1,
                                            "%s%s%s%s%s%s%s%s%s%s", pcVar15,
                                            pcVar24, pcVar11, pcVar10, pcVar23,
                                            pcVar17, pcVar8, pcVar19, pcVar21,
                                            param_1 + 0xe);
                                        bVar1 = 1;
                                        goto LAB_00027510;
                                    }
                                    goto LAB_00027508;
                                }
                                iVar9 = *(int *)(iVar16 + 0x10);
                            }
                        LAB_00027718:
                            if ((uVar22 & 1) == 0) {
                                pcVar15 = "";
                                pcVar24 = pcVar15;
                            } else {
                                pcVar15 = local_6c;
                                pcVar24 = " ";
                            }
                            if (uVar13 == 0) {
                                pcVar10 = "";
                                pcVar11 = pcVar10;
                                if (iVar18 < 0)
                                    goto LAB_0002774c;
                            LAB_00027a14:
                                pcVar23 = "";
                                pcVar17 = pcVar23;
                            } else {
                                pcVar10 = *(char **)(iVar2 + 0x20);
                                pcVar11 = ": ";
                                if (-1 < iVar18)
                                    goto LAB_00027a14;
                            LAB_0002774c:
                                pcVar23 = (char *)*param_2;
                                pcVar17 = ": ";
                            }
                            pcVar19 = "";
                            pcVar8 = "";
                            if ((int)(uVar22 << 0x1c) < 0) {
                                pcVar19 = (char *)*param_3;
                                pcVar8 = ": ";
                            }
                            if ((int)(uVar22 << 0x1e) < 0) {
                                pcVar21 = local_84;
                            } else {
                                pcVar21 = "";
                            }
                            __fprintf_chk(iVar9, 1, "%s%s%s%s%s%s%s%s%s%s\n",
                                          pcVar15, pcVar24, pcVar10, pcVar11,
                                          pcVar23, pcVar17, pcVar19, pcVar8,
                                          pcVar21, param_1 + 0xe);
                            fflush(*(FILE **)(iVar16 + 0x10));
                            if ((int)(uint)(*(int *)(iVar16 + 0x20) == 0) <=
                                *(int *)(iVar16 + 0x24)) {
                                if (*(int *)(iVar16 + 4) != 3) {
                                    /* WARNING: Subroutine does not return */
                                    FUN_0002073c("./../lib/isc/log.c", 0x6bb, 2,
                                                 "channel->type == 3");
                                }
                                iVar9 = fileno(*(FILE **)(iVar16 + 0x10));
                                iVar9 = __fxstat64(3, iVar9, &sStack_158);
                                if ((-1 < iVar9) &&
                                    (iVar9 = *(int *)(iVar16 + 0x24),
                                     bVar25 = *(uint *)(iVar16 + 0x20) <
                                              (uint)sStack_158.st_size,
                                     (int)(iVar9 - (sStack_158.st_size._4_4_ +
                                                    (uint)bVar25)) < 0 !=
                                         (SBORROW4(iVar9,
                                                   sStack_158.st_size._4_4_) !=
                                          SBORROW4(iVar9 -
                                                       sStack_158.st_size._4_4_,
                                                   (uint)bVar25)))) {
                                    bVar1 = 1;
                                    *(undefined4 *)(iVar16 + 0x28) = 1;
                                    goto LAB_00027510;
                                }
                            }
                        }
                    }
                LAB_00027508:
                    bVar1 = 1;
                }
            LAB_00027510:
                bVar25 = puVar12 == (undefined4 *)0x0;
            } while (!(bool)(bVar25 & bVar1));
            iVar2 = pthread_mutex_unlock(__mutex);
            if (iVar2 != 0) {
                FUN_000250d0("./../lib/isc/log.c", 0x6e6,
                             "((pthread_mutex_unlock(((&lctx->lock))) == 0) ? "
                             "0 : 34) == 0");
            }
        }
    }
LAB_0002739c:
    if (local_2c != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail();
    }
    return;
}

void FUN_00027f70(void)

{
    int iVar1;

    iVar1 = __stack_chk_guard;
    FUN_000272b8();
    if (iVar1 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_00027fe0(void)

{
    int iVar1;

    iVar1 = __stack_chk_guard;
    FUN_000272b8();
    if (iVar1 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_0002804c(void)

{
    int iVar1;

    iVar1 = __stack_chk_guard;
    FUN_000272b8();
    if (iVar1 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_000280bc(void)

{
    int iVar1;

    iVar1 = __stack_chk_guard;
    FUN_000272b8();
    if (iVar1 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_0002812c(void)

{
    int iVar1;

    iVar1 = __stack_chk_guard;
    FUN_000272b8();
    if (iVar1 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_000281a8(void)

{
    int iVar1;

    iVar1 = __stack_chk_guard;
    FUN_000272b8();
    if (iVar1 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_00028220(void)

{
    int iVar1;

    iVar1 = __stack_chk_guard;
    FUN_000272b8();
    if (iVar1 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_0002829c(void)

{
    int iVar1;

    iVar1 = __stack_chk_guard;
    FUN_000272b8();
    if (iVar1 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_00028314(uint param_1, uint param_2, uint param_3, uint param_4,
                  uint param_5)

{
    int iVar1;
    uint *puVar2;
    uint *puVar3;
    int iVar4;

    iVar1 = __stack_chk_guard;
    if ((param_1 & 0xffff) != 0) {
        /* WARNING: Subroutine does not return */
        FUN_0002073c("./../lib/isc/result.c", 0x79, 0, "base % 65536 == 0");
    }
    if (0x10000 < param_2) {
        /* WARNING: Subroutine does not return */
        FUN_0002073c("./../lib/isc/result.c", 0x7a, 0, "nresults <= 65536");
    }
    if (param_3 == 0) {
        /* WARNING: Subroutine does not return */
        FUN_0002073c("./../lib/isc/result.c", 0x7b, 0, "txt != ((void *)0)");
    }
    puVar3 = (uint *)malloc(0x1c);
    if (puVar3 == (uint *)0x0) {
        iVar4 = 1;
    } else {
        *puVar3 = param_1;
        puVar3[1] = (param_2 - 1) + param_1;
        puVar3[2] = param_3;
        puVar3[3] = param_4;
        puVar3[4] = param_5;
        puVar3[5] = 0xffffffff;
        puVar3[6] = 0xffffffff;
        iVar4 = pthread_mutex_lock((pthread_mutex_t *)&DAT_00043388);
        if (iVar4 != 0) {
            FUN_000250d0(
                "./../lib/isc/result.c", 0x8b,
                "((pthread_mutex_lock(((&lock))) == 0) ? 0 : 34) == 0");
        }
        puVar2 = puVar3;
        if (DAT_000433a4 != (uint *)0x0) {
            DAT_000433a4[6] = (uint)puVar3;
            puVar2 = DAT_000433a0;
        }
        DAT_000433a0 = puVar2;
        puVar3[5] = (uint)DAT_000433a4;
        puVar3[6] = 0;
        DAT_000433a4 = puVar3;
        iVar4 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_00043388);
        if (iVar4 != 0) {
            FUN_000250d0(
                "./../lib/isc/result.c", 0x8f,
                "((pthread_mutex_unlock(((&lock))) == 0) ? 0 : 34) == 0");
            iVar4 = 0;
        }
    }
    if (iVar1 != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail(iVar4);
    }
    return;
}

void FUN_000284d8(void)

{
    int iVar1;
    int iVar2;
    undefined4 uVar3;

    iVar1 = __stack_chk_guard;
    iVar2 = FUN_00022b5c(&DAT_00043388, "./../lib/isc/result.c", 0x98);
    if (iVar2 != 0) {
        FUN_000250d0(
            "./../lib/isc/result.c", 0x98,
            "isc__mutex_init((&lock), \"./../lib/isc/result.c\", 152) == 0");
    }
    DAT_000433a0 = 0;
    DAT_000433a4 = 0;
    iVar2 = FUN_00028314(0, 0x3e, &PTR_s_success_00041138, isc_msgcat, 2);
    if (iVar2 != 0) {
        uVar3 = FUN_0002103c(isc_msgcat, 1, 0x65, "failed");
        FUN_00025008("./../lib/isc/result.c", 0x9e, "register_table() %s: %u",
                     uVar3, iVar2);
    }
    if (iVar1 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_000285f8(void)

{
    int iVar1;
    int iVar2;

    iVar1 = __stack_chk_guard;
    FUN_00020db8();
    iVar2 = pthread_once((pthread_once_t *)&DAT_000433a8, FUN_000284d8);
    if (iVar2 == 0) {
        if (iVar1 == __stack_chk_guard) {
            return;
        }
    } else if (iVar1 == __stack_chk_guard) {
        FUN_000250d0("./../lib/isc/result.c", 0xa8,
                     "((pthread_once((&once), (initialize_action)) == 0) ? 0 : "
                     "34) == 0");
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_00028698(uint param_1)

{
    int iVar1;
    int iVar2;
    int iVar3;
    uint *puVar4;

    iVar1 = __stack_chk_guard;
    FUN_000285f8();
    iVar2 = pthread_mutex_lock((pthread_mutex_t *)&DAT_00043388);
    if (iVar2 != 0) {
        FUN_000250d0("./../lib/isc/result.c", 0xb3,
                     "((pthread_mutex_lock(((&lock))) == 0) ? 0 : 34) == 0");
    }
    puVar4 = (uint *)&DAT_00043388;
    do {
        puVar4 = (uint *)puVar4[6];
        if (puVar4 == (uint *)0x0)
            goto LAB_00028720;
    } while ((param_1 < *puVar4) || (puVar4[1] < param_1));
    iVar2 = param_1 - *puVar4;
    iVar2 = FUN_0002103c(puVar4[3], puVar4[4], iVar2 + 1,
                         *(undefined4 *)(puVar4[2] + iVar2 * 4));
    if (iVar2 == 0) {
    LAB_00028720:
        iVar2 =
            FUN_0002103c(isc_msgcat, 3, 1, "(result code text not available)");
    }
    iVar3 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_00043388);
    if (iVar3 != 0) {
        FUN_000250d0("./../lib/isc/result.c", 0xca,
                     "((pthread_mutex_unlock(((&lock))) == 0) ? 0 : 34) == 0");
    }
    if (iVar1 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar2);
}

void FUN_0002884c(char *param_1, char *param_2, undefined4 *param_3)

{
    int iVar1;
    FILE *pFVar2;
    int *piVar3;

    iVar1 = __stack_chk_guard;
    pFVar2 = fopen64(param_1, param_2);
    if (pFVar2 == (FILE *)0x0) {
        piVar3 = __errno_location();
        if (iVar1 == __stack_chk_guard) {
            FUN_0002a3f8(*piVar3, "./../lib/isc/unix/stdio.c", 0x24);
            return;
        }
    } else {
        *param_3 = pFVar2;
        piVar3 = (int *)0x0;
        if (iVar1 == __stack_chk_guard) {
            return;
        }
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail(piVar3);
}

/* WARNING: Removing unreachable block (ram,0x00028ce0) */

void FUN_00028c70(undefined4 *param_1, undefined4 param_2, uint param_3)

{
    if (param_1 == (undefined4 *)0x0) {
        /* WARNING: Subroutine does not return */
        FUN_0002073c("./../lib/isc/unix/time.c", 0x5a, 0, "i != ((void *)0)");
    }
    if (999999999 < param_3) {
        /* WARNING: Subroutine does not return */
        FUN_0002073c("./../lib/isc/unix/time.c", 0x5b, 0,
                     "nanoseconds < 1000000000");
    }
    *param_1 = param_2;
    param_1[1] = param_3;
    return;
}

void FUN_00028fac(int *param_1)

{
    int iVar1;
    undefined4 uVar2;
    int *piVar3;
    timeval local_9c;
    undefined1 auStack_94[128];
    int local_14;

    local_14 = __stack_chk_guard;
    if (param_1 == (int *)0x0) {
        /* WARNING: Subroutine does not return */
        FUN_0002073c("./../lib/isc/unix/time.c", 0x96, 0, "t != ((void *)0)");
    }
    iVar1 = gettimeofday(&local_9c, (__timezone_ptr_t)0x0);
    if (iVar1 == -1) {
        piVar3 = __errno_location();
        FUN_000229c0(*piVar3, auStack_94, 0x80);
        FUN_00025008("./../lib/isc/unix/time.c", 0x9a, "%s", auStack_94);
        uVar2 = 0x22;
        goto LAB_00029080;
    }
    if (local_9c.tv_usec < 0) {
        do {
            local_9c.tv_sec = local_9c.tv_sec + -1;
            local_9c.tv_usec = local_9c.tv_usec + 1000000;
        } while (local_9c.tv_usec < 0);
    LAB_00029048:
        __syslog_chk(3, 1, "gettimeofday returned bad tv_usec: corrected");
    } else if (999999 < local_9c.tv_usec) {
        do {
            local_9c.tv_sec = local_9c.tv_sec + 1;
            local_9c.tv_usec = local_9c.tv_usec + -1000000;
        } while (999999 < local_9c.tv_usec);
        goto LAB_00029048;
    }
    if (local_9c.tv_sec < 0) {
        uVar2 = 0x22;
    } else {
        uVar2 = 0;
        *param_1 = local_9c.tv_sec;
        param_1[1] = local_9c.tv_usec * 1000;
    }
LAB_00029080:
    if (local_14 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
}

/* WARNING: Removing unreachable block (ram,0x00029410) */

void FUN_0002933c(int param_1, int param_2)

{
    int iVar1;

    iVar1 = param_2;
    if (param_2 != 0) {
        iVar1 = 1;
    }
    if (param_1 == 0) {
        iVar1 = 0;
    }
    if (iVar1 != 0) {
        if ((*(uint *)(param_1 + 4) < 1000000000) &&
            (*(uint *)(param_2 + 4) < 1000000000)) {
            return;
        }
        /* WARNING: Subroutine does not return */
        FUN_0002073c(
            "./../lib/isc/unix/time.c", 0xf1, 2,
            "t1->nanoseconds < 1000000000 && t2->nanoseconds < 1000000000");
    }
    /* WARNING: Subroutine does not return */
    FUN_0002073c("./../lib/isc/unix/time.c", 0xf0, 0,
                 "t1 != ((void *)0) && t2 != ((void *)0)");
}

void FUN_0002942c(uint *param_1, uint *param_2, int *param_3)

{
    int iVar1;
    uint uVar2;
    undefined4 uVar3;
    uint uVar4;
    int *piVar5;
    uint uVar6;
    int iVar7;
    uint uVar8;

    iVar1 = __stack_chk_guard;
    piVar5 = param_3;
    if (param_3 != (int *)0x0) {
        piVar5 = (int *)0x1;
    }
    if (param_2 == (uint *)0x0) {
        piVar5 = (int *)0x0;
    }
    if (param_1 == (uint *)0x0) {
        piVar5 = (int *)0x0;
    }
    if (piVar5 == (int *)0x0) {
        /* WARNING: Subroutine does not return */
        FUN_0002073c(
            "./../lib/isc/unix/time.c", 0x101, 0,
            "t != ((void *)0) && i != ((void *)0) && result != ((void *)0)");
    }
    uVar8 = param_1[1];
    if ((999999999 < uVar8) || (999999999 < param_2[1])) {
        /* WARNING: Subroutine does not return */
        FUN_0002073c(
            "./../lib/isc/unix/time.c", 0x102, 2,
            "t->nanoseconds < 1000000000 && i->nanoseconds < 1000000000");
    }
    uVar2 = *param_1;
    uVar6 = *param_2;
    if ((((int)uVar2 < 0) || ((int)uVar6 < 0)) && (CARRY4(uVar6, uVar2))) {
        uVar3 = 0x29;
    } else {
        uVar4 = uVar8 + param_2[1];
        iVar7 = uVar6 + uVar2;
        *param_3 = iVar7;
        if (999999999 < uVar4) {
            iVar7 = iVar7 + 1;
            uVar8 = uVar4 + 0xc4653600;
        }
        uVar3 = 0;
        param_3[1] = uVar4;
        if (999999999 < uVar4) {
            *param_3 = iVar7;
            param_3[1] = uVar8;
        }
    }
    if (iVar1 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
}

void FUN_0002956c(uint *param_1, uint *param_2, int *param_3)

{
    int iVar1;
    uint uVar2;
    undefined4 uVar3;
    uint uVar4;
    int *piVar5;
    uint uVar6;
    int iVar7;
    uint uVar8;

    iVar1 = __stack_chk_guard;
    piVar5 = param_3;
    if (param_3 != (int *)0x0) {
        piVar5 = (int *)0x1;
    }
    if (param_2 == (uint *)0x0) {
        piVar5 = (int *)0x0;
    }
    if (param_1 == (uint *)0x0) {
        piVar5 = (int *)0x0;
    }
    if (piVar5 == (int *)0x0) {
        /* WARNING: Subroutine does not return */
        FUN_0002073c(
            "./../lib/isc/unix/time.c", 0x11c, 0,
            "t != ((void *)0) && i != ((void *)0) && result != ((void *)0)");
    }
    uVar6 = param_1[1];
    if ((999999999 < uVar6) || (uVar8 = param_2[1], 999999999 < uVar8)) {
        /* WARNING: Subroutine does not return */
        FUN_0002073c(
            "./../lib/isc/unix/time.c", 0x11d, 2,
            "t->nanoseconds < 1000000000 && i->nanoseconds < 1000000000");
    }
    uVar2 = *param_1;
    uVar4 = *param_2;
    if (uVar2 < uVar4) {
    LAB_00029648:
        uVar3 = 0x29;
    } else {
        if (uVar2 == uVar4) {
            if (uVar6 < uVar8)
                goto LAB_00029648;
            iVar7 = uVar6 - uVar8;
            *param_3 = 0;
        } else {
            *param_3 = uVar2 - uVar4;
            iVar7 = uVar6 - uVar8;
            if (uVar6 < uVar8) {
                *param_3 = (uVar2 - uVar4) + -1;
                uVar3 = 0;
                param_3[1] = iVar7 + 1000000000;
                goto LAB_00029610;
            }
        }
        param_3[1] = iVar7;
        uVar3 = 0;
    }
LAB_00029610:
    if (iVar1 != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail(uVar3);
    }
    return;
}

void FUN_000299bc(time_t *param_1, char *param_2, size_t param_3)

{
    tm *__tp;
    size_t sVar1;
    time_t local_20;
    int local_1c;

    local_1c = __stack_chk_guard;
    if (param_3 == 0) {
        /* WARNING: Subroutine does not return */
        FUN_0002073c("./../lib/isc/unix/time.c", 0x182, 0, "len > 0");
    }
    local_20 = *param_1;
    __tp = localtime(&local_20);
    sVar1 = strftime(param_2, param_3, "%d-%b-%Y %X", __tp);
    if (sVar1 < param_3) {
        if (sVar1 == 0) {
            FUN_0001f5f4(param_2, param_3, "99-Bad-9999 99:99:99.999");
        } else {
            FUN_0001f5f4(param_2 + sVar1, param_3 - sVar1, ".%03u",
                         (uint)param_1[1] / 1000000);
        }
        if (local_1c == __stack_chk_guard) {
            return;
        }
        /* WARNING: Subroutine does not return */
        __stack_chk_fail();
    }
    /* WARNING: Subroutine does not return */
    FUN_0002073c("./../lib/isc/unix/time.c", 0x186, 2, "flen < len");
}

/* WARNING: Removing unreachable block (ram,0x00029d0c) */

void FUN_00029c68(undefined4 param_1, int param_2, int param_3)

{
    if (param_3 != 0) {
        param_3 = param_2 + param_3;
        do {
            param_2 = param_2 + 1;
        } while (param_2 != param_3);
    }
    return;
}

/* WARNING: Removing unreachable block (ram,0x00029d90) */

void FUN_00029d18(undefined4 *param_1)

{
    if (param_1 != (undefined4 *)0x0) {
        *param_1 = 0x4449522a;
        *(undefined1 *)(param_1 + 0x101) = 0;
        param_1[0x141] = 0;
        param_1[0x142] = 0;
        return;
    }
    /* WARNING: Subroutine does not return */
    FUN_0002073c("./../lib/isc/unix/dir.c", 0x2d, 0, "dir != ((void *)0)");
}

void FUN_00029da4(int *param_1, char *param_2)

{
    int iVar1;
    size_t sVar2;
    DIR *pDVar3;
    int *piVar4;
    int *__s;

    iVar1 = __stack_chk_guard;
    if ((param_1 == (int *)0x0) || (*param_1 != 0x4449522a)) {
        /* WARNING: Subroutine does not return */
        FUN_0002073c(
            "./../lib/isc/unix/dir.c", 0x41, 0,
            "(((dir) != ((void *)0)) && (((const isc__magic_t *)(dir))->magic "
            "== (((\'D\') << 24 | (\'I\') << 16 | (\'R\') << 8 | (\'*\')))))");
    }
    if (param_2 == (char *)0x0) {
        /* WARNING: Subroutine does not return */
        FUN_0002073c("./../lib/isc/unix/dir.c", 0x42, 0,
                     "dirname != ((void *)0)");
    }
    sVar2 = strlen(param_2);
    if (sVar2 + 3 < 0x401) {
        __s = param_1 + 1;
        FUN_000203c4(__s, param_2, sVar2 + 1);
        sVar2 = strlen((char *)__s);
        piVar4 = (int *)((int)__s + sVar2);
        if ((__s < piVar4) && (*(char *)((int)piVar4 + -1) != '/')) {
            piVar4 = (int *)((int)piVar4 + 1);
            *(undefined1 *)((int)__s + sVar2) = 0x2f;
        }
        *(undefined1 *)piVar4 = 0x2a;
        *(undefined1 *)((int)piVar4 + 1) = 0;
        pDVar3 = opendir(param_2);
        param_1[0x142] = (int)pDVar3;
        if (pDVar3 == (DIR *)0x0) {
            piVar4 = __errno_location();
            if (iVar1 == __stack_chk_guard) {
                FUN_0002a3f8(*piVar4, "./../lib/isc/unix/dir.c", 0x5d);
                return;
            }
            goto LAB_00029ed0;
        }
        piVar4 = (int *)0x0;
    } else {
        piVar4 = (int *)0x13;
    }
    if (iVar1 == __stack_chk_guard) {
        return;
    }
LAB_00029ed0:
    /* WARNING: Subroutine does not return */
    __stack_chk_fail(piVar4);
}

void FUN_00029f0c(int *param_1)

{
    int iVar1;
    dirent64 *pdVar2;
    size_t sVar3;
    undefined4 uVar4;
    char *__s;

    iVar1 = __stack_chk_guard;
    if (((param_1 == (int *)0x0) || (*param_1 != 0x4449522a)) ||
        ((DIR *)param_1[0x142] == (DIR *)0x0)) {
        /* WARNING: Subroutine does not return */
        FUN_0002073c(
            "./../lib/isc/unix/dir.c", 0x6e, 0,
            "(((dir) != ((void *)0)) && (((const isc__magic_t *)(dir))->magic "
            "== (((\'D\') << 24 | (\'I\') << 16 | (\'R\') << 8 | (\'*\'))))) "
            "&& dir->handle != ((void *)0)");
    }
    pdVar2 = readdir64((DIR *)param_1[0x142]);
    if (pdVar2 == (dirent64 *)0x0) {
        uVar4 = 0x1d;
    } else {
        __s = pdVar2->d_name;
        sVar3 = strlen(__s);
        if (sVar3 + 1 < 0x101) {
            FUN_000203c4(param_1 + 0x101, __s);
            sVar3 = strlen(__s);
            uVar4 = 0;
            param_1[0x141] = sVar3;
        } else {
            uVar4 = 0x22;
        }
    }
    if (iVar1 != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail(uVar4);
    }
    return;
}

void FUN_00029fec(int *param_1)

{
    int iVar1;
    int iVar2;

    iVar1 = __stack_chk_guard;
    if (((param_1 != (int *)0x0) && (*param_1 == 0x4449522a)) &&
        ((DIR *)param_1[0x142] != (DIR *)0x0)) {
        closedir((DIR *)param_1[0x142]);
        iVar2 = __stack_chk_guard;
        param_1[0x142] = 0;
        if (iVar1 == iVar2) {
            return;
        }
        /* WARNING: Subroutine does not return */
        __stack_chk_fail();
    }
    /* WARNING: Subroutine does not return */
    FUN_0002073c("./../lib/isc/unix/dir.c", 0x8e, 0,
                 "(((dir) != ((void *)0)) && (((const isc__magic_t "
                 "*)(dir))->magic == (((\'D\') << 24 | (\'I\') << 16 | (\'R\') "
                 "<< 8 | (\'*\'))))) && dir->handle != ((void *)0)");
}

void FUN_0002a3f8(undefined4 param_1, undefined4 param_2, undefined4 param_3)

{
    undefined4 uVar1;
    undefined1 auStack_9c[128];
    int local_1c;

    local_1c = __stack_chk_guard;
    switch (param_1) {
    case 1:
        goto LAB_0002a690;
    case 2:
        uVar1 = 0x26;
        goto LAB_0002a600;
    case 3:
        break;
    case 4:
        break;
    case 5:
        uVar1 = 0x1a;
        goto LAB_0002a600;
    case 6:
        break;
    case 7:
        break;
    case 8:
        break;
    case 9:
        goto LAB_0002a5fc;
    case 10:
        break;
    case 0xb:
        break;
    case 0xc:
        uVar1 = 1;
        goto LAB_0002a600;
    case 0xd:
    LAB_0002a690:
        uVar1 = 6;
        goto LAB_0002a600;
    case 0xe:
        break;
    case 0xf:
        break;
    case 0x10:
        break;
    case 0x11:
        uVar1 = 0x27;
        goto LAB_0002a600;
    case 0x12:
        break;
    case 0x13:
        break;
    case 0x14:
        goto LAB_0002a5fc;
    case 0x15:
        break;
    case 0x16:
        goto LAB_0002a5fc;
    case 0x17:
        goto LAB_0002a628;
    case 0x18:
    LAB_0002a628:
        uVar1 = 0x32;
        goto LAB_0002a600;
    case 0x19:
        break;
    case 0x1a:
        break;
    case 0x1b:
        break;
    case 0x1c:
        break;
    case 0x1d:
        break;
    case 0x1e:
        break;
    case 0x1f:
        break;
    case 0x20:
        goto LAB_0002a630;
    case 0x21:
        break;
    case 0x22:
        break;
    case 0x23:
        break;
    case 0x24:
        goto LAB_0002a5fc;
    case 0x25:
        break;
    case 0x26:
        break;
    case 0x27:
        break;
    case 0x28:
    LAB_0002a5fc:
        uVar1 = 0x1e;
        goto LAB_0002a600;
    case 0x29:
        break;
    case 0x2a:
        break;
    case 0x2b:
        break;
    case 0x2c:
        break;
    case 0x2d:
        break;
    case 0x2e:
        break;
    case 0x2f:
        break;
    case 0x30:
        break;
    case 0x31:
        break;
    case 0x32:
        break;
    case 0x33:
        break;
    case 0x34:
        break;
    case 0x35:
        break;
    case 0x36:
        break;
    case 0x37:
        break;
    case 0x38:
        break;
    case 0x39:
        break;
    case 0x3a:
        break;
    case 0x3b:
        break;
    case 0x3c:
        break;
    case 0x3d:
        break;
    case 0x3e:
        break;
    case 0x3f:
        break;
    case 0x40:
        break;
    case 0x41:
        break;
    case 0x42:
        break;
    case 0x43:
        break;
    case 0x44:
        break;
    case 0x45:
        break;
    case 0x46:
        break;
    case 0x47:
        break;
    case 0x48:
        break;
    case 0x49:
        break;
    case 0x4a:
        break;
    case 0x4b:
        break;
    case 0x4c:
        break;
    case 0x4d:
        break;
    case 0x4e:
        break;
    case 0x4f:
        break;
    case 0x50:
        break;
    case 0x51:
        break;
    case 0x52:
        break;
    case 0x53:
        break;
    case 0x54:
        break;
    case 0x55:
        break;
    case 0x56:
        break;
    case 0x57:
        break;
    case 0x58:
        break;
    case 0x59:
        break;
    case 0x5a:
        break;
    case 0x5b:
        break;
    case 0x5c:
        break;
    case 0x5d:
        break;
    case 0x5e:
        break;
    case 0x5f:
        break;
    case 0x60:
        break;
    case 0x61:
        uVar1 = 0x30;
        goto LAB_0002a600;
    case 0x62:
        uVar1 = 5;
        goto LAB_0002a600;
    case 99:
        uVar1 = 4;
        goto LAB_0002a600;
    case 100:
        uVar1 = 10;
        goto LAB_0002a600;
    case 0x65:
        uVar1 = 8;
        goto LAB_0002a600;
    case 0x66:
        break;
    case 0x67:
        goto LAB_0002a630;
    case 0x68:
    LAB_0002a630:
        uVar1 = 0x36;
        goto LAB_0002a600;
    case 0x69:
        uVar1 = 0xd;
        goto LAB_0002a600;
    case 0x6a:
        break;
    case 0x6b:
        uVar1 = 0x28;
        goto LAB_0002a600;
    case 0x6c:
        break;
    case 0x6d:
        break;
    case 0x6e:
        uVar1 = 2;
        goto LAB_0002a600;
    case 0x6f:
        uVar1 = 0xc;
        goto LAB_0002a600;
    case 0x70:
        uVar1 = 0xb;
        goto LAB_0002a600;
    case 0x71:
        uVar1 = 9;
        goto LAB_0002a600;
    }
    FUN_000229c0(param_1, auStack_9c, 0x80);
    FUN_00025008(param_2, param_3,
                 "unable to convert errno to isc_result: %d: %s", param_1,
                 auStack_9c);
    uVar1 = 0x22;
LAB_0002a600:
    if (local_1c != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail(uVar1);
    }
    return;
}

void FUN_0002b0b0(char *param_1)

{
    int iVar1;
    int iVar2;
    int *piVar3;

    iVar1 = __stack_chk_guard;
    if (param_1 == (char *)0x0) {
        /* WARNING: Subroutine does not return */
        FUN_0002073c("./../lib/isc/unix/file.c", 0x140, 0,
                     "filename != ((void *)0)");
    }
    iVar2 = unlink(param_1);
    if (iVar2 == 0) {
        if (iVar1 == __stack_chk_guard) {
            return;
        }
    } else {
        piVar3 = __errno_location();
        if (iVar1 == __stack_chk_guard) {
            FUN_0002a3f8(*piVar3, "./../lib/isc/unix/file.c", 0x146);
            return;
        }
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_0002b15c(char *param_1, char *param_2)

{
    int iVar1;
    int iVar2;
    int *piVar3;

    iVar1 = __stack_chk_guard;
    if (param_1 == (char *)0x0) {
        /* WARNING: Subroutine does not return */
        FUN_0002073c("./../lib/isc/unix/file.c", 0x14d, 0,
                     "oldname != ((void *)0)");
    }
    if (param_2 != (char *)0x0) {
        iVar2 = rename(param_1, param_2);
        if (iVar2 == 0) {
            if (iVar1 == __stack_chk_guard) {
                return;
            }
        } else {
            piVar3 = __errno_location();
            if (iVar1 == __stack_chk_guard) {
                FUN_0002a3f8(*piVar3, "./../lib/isc/unix/file.c", 0x154);
                return;
            }
        }
        /* WARNING: Subroutine does not return */
        __stack_chk_fail();
    }
    /* WARNING: Subroutine does not return */
    FUN_0002073c("./../lib/isc/unix/file.c", 0x14e, 0,
                 "newname != ((void *)0)");
}

void FUN_0002bb30(void)

{
    int iVar1;
    int iVar2;

    iVar1 = __stack_chk_guard;
    iVar2 = pthread_once((pthread_once_t *)&DAT_000433bc,
                         (__init_routine *)&LAB_0002bad4);
    if (iVar2 == 0) {
        if (iVar1 == __stack_chk_guard) {
            return;
        }
    } else if (iVar1 == __stack_chk_guard) {
        FUN_000250d0(
            "./../lib/isc/random.c", 0x3c,
            "((pthread_once((&once), (initialize_rand)) == 0) ? 0 : 34) == 0");
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_0002bc1c(uint *param_1)

{
    int iVar1;
    int iVar2;
    uint uVar3;
    bool bVar4;

    iVar1 = __stack_chk_guard;
    if (param_1 == (uint *)0x0) {
        /* WARNING: Subroutine does not return */
        FUN_0002073c("./../lib/isc/random.c", 0x4e, 0, "val != ((void *)0)");
    }
    FUN_0002bb30();
    iVar2 = rand();
    uVar3 = rand();
    bVar4 = iVar1 == __stack_chk_guard;
    *param_1 = (uint)(iVar2 << 0xc) >> 0x10 | (uVar3 & 0xffff0) << 0xc;
    if (bVar4) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

ulonglong FUN_0002bd58(uint param_1, uint param_2)

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
    /* WARNING: Could not recover jumptable at 0x0002bd88. Too many branches */
    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(&UNK_0002bd90 +
                       (0x1f - (LZCOUNT(param_2) - LZCOUNT(param_1))) * 0x10))(
        param_1, param_2, 0);
    return uVar2;
}

void FUN_0002bfb4(undefined4 param_1, int param_2)

{
    if (param_2 != 0) {
        FUN_0002bd58();
        return;
    }
    raise(8);
    return;
}

ulonglong FUN_0002c2dc(uint param_1, uint param_2)

{
    byte bVar1;
    uint uVar2;
    uint uVar3;
    uint uVar4;
    int iVar5;
    uint uVar6;
    int iVar7;
    uint uVar8;
    bool bVar9;
    bool bVar10;
    bool bVar11;

    if (param_1 == 0 && param_2 == 0) {
        return CONCAT44(param_2, param_1);
    }
    iVar7 = 0x432;
    uVar8 = param_2 >> 0x16;
    if (uVar8 != 0) {
        iVar7 = 3;
        if (param_2 >> 0x19 != 0) {
            iVar7 = 6;
        }
        if (param_2 >> 0x1c != 0) {
            iVar7 = iVar7 + 3;
        }
        uVar4 = iVar7 - ((int)param_2 >> 0x1f);
        uVar8 = param_1 << (0x20 - uVar4 & 0xff);
        param_1 = param_1 >> (uVar4 & 0xff) | param_2 << (0x20 - uVar4 & 0xff);
        param_2 = param_2 >> (uVar4 & 0xff);
        iVar7 = uVar4 + 0x432;
    }
    if (0xfffff < param_2) {
        if (0x1fffff < param_2) {
            uVar4 = param_2 & 1;
            param_2 = param_2 >> 1;
            bVar1 = (byte)param_1;
            param_1 = (uint)(uVar4 != 0) << 0x1f | param_1 >> 1;
            uVar8 = (uint)(bVar1 & 1) << 0x1f | uVar8 >> 1;
            iVar7 = iVar7 + 1;
            if (0xffbfffff < (uint)(iVar7 * 0x200000)) {
                return 0x7ff0000000000000;
            }
        }
    LAB_0002c0e8:
        bVar10 = 0x7fffffff < uVar8;
        if (uVar8 == 0x80000000) {
            bVar10 = (param_1 & 1) != 0;
        }
        return CONCAT44(param_2 + iVar7 * 0x100000 +
                            (uint)CARRY4(param_1, (uint)bVar10),
                        param_1 + bVar10);
    }
    bVar9 = (uVar8 & 0x80000000) != 0;
    uVar8 = uVar8 << 1;
    uVar4 = param_1 * 2;
    bVar10 = CARRY4(param_1, param_1);
    param_1 = param_1 * 2 + (uint)bVar9;
    param_2 = param_2 * 2 + (uint)(bVar10 || CARRY4(uVar4, (uint)bVar9));
    iVar7 = iVar7 + -1;
    if ((param_2 & 0x100000) != 0)
        goto LAB_0002c0e8;
    uVar2 = param_1;
    uVar4 = param_2;
    if (param_2 == 0) {
        uVar2 = 0;
        uVar4 = param_1;
    }
    iVar5 = LZCOUNT(uVar4);
    if (param_2 == 0) {
        iVar5 = iVar5 + 0x20;
    }
    uVar6 = iVar5 - 0xb;
    bVar11 = SBORROW4(uVar6, 0x20);
    uVar3 = iVar5 - 0x2b;
    bVar10 = (int)uVar3 < 0;
    bVar9 = uVar3 == 0;
    if ((int)uVar6 < 0x20) {
        bVar11 = SCARRY4(uVar3, 0xc);
        iVar5 = iVar5 + -0x1f;
        bVar10 = iVar5 < 0;
        bVar9 = iVar5 == 0;
        uVar3 = uVar6;
        if (!bVar9 && bVar10 == bVar11) {
            uVar2 = uVar4 << (uVar6 & 0xff);
            uVar4 = uVar4 >> (0xcU - iVar5 & 0xff);
            goto LAB_0002c160;
        }
    }
    if (bVar9 || bVar10 != bVar11) {
        uVar8 = 0x20 - uVar3;
    }
    uVar4 = uVar4 << (uVar3 & 0xff);
    if (bVar9 || bVar10 != bVar11) {
        uVar4 = uVar4 | uVar2 >> (uVar8 & 0xff);
        uVar2 = uVar2 << (uVar3 & 0xff);
    }
LAB_0002c160:
    if ((int)uVar6 <= iVar7) {
        return CONCAT44(uVar4 + (iVar7 - uVar6) * 0x100000, uVar2);
    }
    uVar8 = ~(iVar7 - uVar6);
    if (0x1e < (int)uVar8) {
        return (ulonglong)(uVar4 >> (uVar8 - 0x1f & 0xff));
    }
    iVar7 = uVar8 - 0x13;
    if (iVar7 == 0 || iVar7 < 0 != SCARRY4(uVar8 - 0x1f, 0xc)) {
        uVar8 = uVar8 + 1;
        return CONCAT44(uVar4 >> (uVar8 & 0xff),
                        uVar2 >> (uVar8 & 0xff) | uVar4
                                                      << (0x20 - uVar8 & 0xff));
    }
    return (ulonglong)(uVar2 >> (0x20 - (0xcU - iVar7) & 0xff) |
                       uVar4 << (0xcU - iVar7 & 0xff));
}

void FUN_0002c3e8(undefined4 param_1, undefined4 param_2, int param_3,
                  int param_4)

{
    if ((param_4 == 0) && (param_3 == 0)) {
        raise(8);
        return;
    }
    FUN_0002c468();
    return;
}

undefined8 FUN_0002c428(undefined4 param_1, undefined4 param_2)

{
    uint uVar1;
    double dVar2;

    dVar2 = (double)CONCAT44(param_2, param_1) * 2.3283064365386963e-10;
    uVar1 = (uint)(0.0 < dVar2) * (int)(longlong)dVar2;
    dVar2 = (double)CONCAT44(param_2, param_1) - (double)uVar1 * 4294967296.0;
    return CONCAT44(uVar1, (uint)(0.0 < dVar2) * (int)(longlong)dVar2);
}

undefined8 FUN_0002c468(uint param_1, uint param_2, uint param_3, uint param_4,
                        uint *param_5)

{
    uint uVar1;
    uint uVar2;
    int iVar3;
    uint uVar4;
    uint uVar5;
    uint uVar6;
    uint uVar7;
    uint uVar8;
    uint uVar9;
    int iVar10;
    uint uVar11;
    bool bVar12;

    bVar12 = param_4 <= param_2;
    if (param_2 == param_4) {
        bVar12 = param_3 <= param_1;
    }
    if (bVar12) {
        iVar10 = LZCOUNT(param_4);
        if (param_4 == 0) {
            iVar10 = LZCOUNT(param_3) + 0x20;
        }
        iVar3 = LZCOUNT(param_2);
        if (param_2 == 0) {
            iVar3 = LZCOUNT(param_1) + 0x20;
        }
        uVar11 = iVar10 - iVar3;
        uVar8 = uVar11 - 0x20;
        uVar9 = 0x20 - uVar11;
        uVar5 = param_3 << (uVar11 & 0xff);
        uVar6 = param_4 << (uVar11 & 0xff) | param_3 << (uVar8 & 0xff) |
                param_3 >> (uVar9 & 0xff);
        bVar12 = uVar6 <= param_2;
        if (param_2 == uVar6) {
            bVar12 = uVar5 <= param_1;
        }
        if (bVar12) {
            bVar12 = param_1 < uVar5;
            param_1 = param_1 - uVar5;
            uVar1 = 1 << (uVar11 & 0xff);
            param_2 = (param_2 - uVar6) - (uint)bVar12;
            uVar2 = 1 << (uVar8 & 0xff) | 1U >> (uVar9 & 0xff);
        } else {
            uVar1 = 0;
            uVar2 = uVar1;
        }
        if (uVar11 != 0) {
            uVar7 = uVar6 >> 1;
            uVar6 = (uint)((uVar6 & 1) != 0) << 0x1f | uVar5 >> 1;
            uVar5 = uVar11;
            do {
                while (true) {
                    bVar12 = uVar7 <= param_2;
                    if (param_2 == uVar7) {
                        bVar12 = uVar6 <= param_1;
                    }
                    if (bVar12)
                        break;
                    bVar12 = CARRY4(param_1, param_1);
                    param_1 = param_1 * 2;
                    param_2 = param_2 * 2 + (uint)bVar12;
                    uVar5 = uVar5 - 1;
                    uVar4 = param_2;
                    if (uVar5 == 0)
                        goto LAB_0002c512;
                }
                bVar12 = param_1 < uVar6;
                uVar4 = param_1 - uVar6;
                param_1 = uVar4 * 2 + 1;
                param_2 = ((param_2 - uVar7) - (uint)bVar12) * 2 +
                          (uint)CARRY4(uVar4, uVar4) +
                          (uint)(0xfffffffe < uVar4 * 2);
                uVar5 = uVar5 - 1;
                uVar4 = param_2;
            } while (uVar5 != 0);
        LAB_0002c512:
            param_2 = uVar4 >> (uVar11 & 0xff);
            bVar12 = CARRY4(uVar1, param_1);
            uVar5 = uVar1 + param_1;
            param_1 = param_1 >> (uVar11 & 0xff) | uVar4 << (uVar9 & 0xff) |
                      uVar4 >> (uVar8 & 0xff);
            uVar6 = param_1 << (uVar11 & 0xff);
            uVar1 = uVar5 - uVar6;
            uVar2 = ((uVar4 + uVar2 + bVar12) -
                     (param_2 << (uVar11 & 0xff) |
                      param_1 << (uVar11 - 0x20 & 0xff) |
                      param_1 >> (0x20 - uVar11 & 0xff))) -
                    (uint)(uVar5 < uVar6);
        }
    } else {
        uVar1 = 0;
        uVar2 = uVar1;
    }
    if (param_5 != (uint *)0x0) {
        *param_5 = param_1;
        param_5[1] = param_2;
    }
    return CONCAT44(uVar2, uVar1);
}

void __libc_csu_init(undefined4 param_1, undefined4 param_2, undefined4 param_3,
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

void __libc_csu_fini(void)

{
    return;
}

void _DT_FINI(void)

{
    return;
}
