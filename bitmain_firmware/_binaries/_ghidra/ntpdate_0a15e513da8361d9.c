// Decompiled: ntpdate_0a15e513da8361d9

void _DT_INIT(void)

{
    FUN_0001373c();
    return;
}

void FUN_00013660(void)

{
    int *piVar1;

    piVar1 = __errno_location();
    FUN_0001abf8(3, "read system clock failed: %m (%d)", *piVar1);
    /* WARNING: Subroutine does not return */
    exit(1);
}

/* WARNING: Removing unreachable block (ram,0x000136e8) */
/* WARNING: Type propagation algorithm not settling */

void main(int param_1, undefined4 *param_2)

{
    undefined1 uVar1;
    short sVar2;
    bool bVar3;
    FILE *__s;
    int iVar4;
    char *pcVar5;
    uint uVar6;
    int *piVar7;
    uint *puVar8;
    int iVar9;
    ushort **ppuVar10;
    undefined *puVar11;
    int *piVar12;
    undefined4 uVar13;
    sockaddr *psVar14;
    int **ppiVar15;
    int **ppiVar17;
    socklen_t sVar18;
    undefined4 uVar19;
    sockaddr *psVar20;
    char cVar21;
    undefined4 uVar22;
    uint uVar23;
    uint uVar24;
    uint uVar25;
    uint uVar26;
    int iVar27;
    char *pcVar28;
    addrinfo *paVar29;
    int *piVar30;
    byte bVar31;
    uint uVar32;
    byte *pbVar33;
    uint uVar34;
    bool bVar35;
    bool bVar36;
    double dVar37;
    int *local_10c;
    addrinfo *local_b8;
    int local_b4;
    uint local_b0;
    timeval local_ac;
    addrinfo local_a4;
    int *local_84[9];
    uint uStack_60;
    sockaddr local_5c;
    undefined4 local_4c;
    undefined4 local_48;
    undefined4 local_44;
    byte local_34[8];
    int local_2c;
    int **ppiVar16;

    local_2c = __stack_chk_guard;
    FUN_0001a12c();
    if (ipv6_works == 0) {
        ai_fam_templ = 2;
    }
    iVar27 = 0;
    progname = *param_2;
    syslogit = 0;
    uVar6 = sys_samples;
switchD_00014018_default:
    sys_samples = uVar6;
    iVar4 = FUN_00019cf4(param_1, param_2, "46a:bBde:k:o:p:qst:uv");
    if (iVar4 == -1)
        goto LAB_0001432c;
    uVar6 = sys_samples;
    switch (iVar4) {
    case 0x34:
        ai_fam_templ = 2;
        goto switchD_00014018_default;
    case 0x35:
        goto switchD_00014018_default;
    case 0x36:
        ai_fam_templ = 10;
        goto switchD_00014018_default;
    case 0x37:
        goto switchD_00014018_default;
    case 0x38:
        goto switchD_00014018_default;
    case 0x39:
        goto switchD_00014018_default;
    case 0x3a:
        goto switchD_00014018_default;
    case 0x3b:
        goto switchD_00014018_default;
    case 0x3c:
        goto switchD_00014018_default;
    case 0x3d:
        goto switchD_00014018_default;
    case 0x3e:
        goto switchD_00014018_default;
    case 0x3f:
        iVar27 = iVar27 + 1;
        goto switchD_00014018_default;
    case 0x40:
        goto switchD_00014018_default;
    case 0x41:
        goto switchD_00014018_default;
    case 0x42:
        iVar4 = 0x300;
        iVar9 = 0x330;
        break;
    case 0x43:
        goto switchD_00014018_default;
    case 0x44:
        goto switchD_00014018_default;
    case 0x45:
        goto switchD_00014018_default;
    case 0x46:
        goto switchD_00014018_default;
    case 0x47:
        goto switchD_00014018_default;
    case 0x48:
        goto switchD_00014018_default;
    case 0x49:
        goto switchD_00014018_default;
    case 0x4a:
        goto switchD_00014018_default;
    case 0x4b:
        goto switchD_00014018_default;
    case 0x4c:
        goto switchD_00014018_default;
    case 0x4d:
        goto switchD_00014018_default;
    case 0x4e:
        goto switchD_00014018_default;
    case 0x4f:
        goto switchD_00014018_default;
    case 0x50:
        goto switchD_00014018_default;
    case 0x51:
        goto switchD_00014018_default;
    case 0x52:
        goto switchD_00014018_default;
    case 0x53:
        goto switchD_00014018_default;
    case 0x54:
        goto switchD_00014018_default;
    case 0x55:
        goto switchD_00014018_default;
    case 0x56:
        goto switchD_00014018_default;
    case 0x57:
        goto switchD_00014018_default;
    case 0x58:
        goto switchD_00014018_default;
    case 0x59:
        goto switchD_00014018_default;
    case 0x5a:
        goto switchD_00014018_default;
    case 0x5b:
        goto switchD_00014018_default;
    case 0x5c:
        goto switchD_00014018_default;
    case 0x5d:
        goto switchD_00014018_default;
    case 0x5e:
        goto switchD_00014018_default;
    case 0x5f:
        goto switchD_00014018_default;
    case 0x60:
        goto switchD_00014018_default;
    case 0x61:
        sys_authkey = strtol(ntp_optarg, (char **)0x0, 10);
        sys_authenticate = 1;
        uVar6 = sys_samples;
        goto switchD_00014018_default;
    case 0x62:
        iVar4 = 0x330;
        iVar9 = 0x300;
        break;
    case 99:
        goto switchD_00014018_default;
    case 100:
        debug = debug + 1;
        goto switchD_00014018_default;
    case 0x65:
        iVar4 = FUN_000174f8(ntp_optarg, &local_b4);
        pcVar28 = "%s: encryption delay %s is unlikely\n";
        if ((iVar4 == 0) || (local_b4 != 0))
            goto LAB_00015df0;
        sys_authdelay = local_b0;
        uVar6 = sys_samples;
        goto switchD_00014018_default;
    case 0x66:
        goto switchD_00014018_default;
    case 0x67:
        goto switchD_00014018_default;
    case 0x68:
        goto switchD_00014018_default;
    case 0x69:
        goto switchD_00014018_default;
    case 0x6a:
        goto switchD_00014018_default;
    case 0x6b:
        key_file = ntp_optarg;
        goto switchD_00014018_default;
    case 0x6c:
        goto switchD_00014018_default;
    case 0x6d:
        goto switchD_00014018_default;
    case 0x6e:
        goto switchD_00014018_default;
    case 0x6f:
        sys_version = strtol(ntp_optarg, (char **)0x0, 10);
        uVar6 = sys_samples;
        goto switchD_00014018_default;
    case 0x70:
        uVar6 = strtol(ntp_optarg, (char **)0x0, 10);
        if (7 < uVar6 - 1) {
            iVar27 = iVar27 + 1;
            __fprintf_chk(stderr, 1, "%s: number of samples (%d) is invalid\n",
                          progname, uVar6);
            uVar6 = sys_samples;
        }
        goto switchD_00014018_default;
    case 0x71:
        simple_query = 1;
        goto switchD_00014018_default;
    case 0x72:
        goto switchD_00014018_default;
    case 0x73:
        syslogit = 1;
        goto switchD_00014018_default;
    case 0x74:
        iVar4 = FUN_000174f8(ntp_optarg, &local_b4);
        pcVar28 = "%s: timeout %s is undecodeable\n";
        if (iVar4 == 0) {
        LAB_00015df0:
            iVar27 = iVar27 + 1;
            __fprintf_chk(stderr, 1, pcVar28, progname, ntp_optarg);
            uVar6 = sys_samples;
        } else {
            uVar6 = sys_samples;
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
        goto switchD_00014018_default;
    case 0x75:
        unpriv_port = 1;
        goto switchD_00014018_default;
    case 0x76:
        verbose = 1;
    default:
        goto switchD_00014018_default;
    }
    **(int **)((int)&__DT_PLTGOT + iVar4) =
        **(int **)((int)&__DT_PLTGOT + iVar4) + 1;
    **(undefined4 **)((int)&__DT_PLTGOT + iVar9) = 0;
    uVar6 = sys_samples;
    goto switchD_00014018_default;
LAB_00014df8:
    iVar27 = FUN_0001dcb8();
    if (iVar27 != 0) {
        bVar36 = false;
    LAB_00014bb0:
        do {
            if (debug == 0) {
                iVar4 = *(int *)(iVar27 + 0x54);
                if (iVar4 == 0x30)
                    goto LAB_00014c48;
            LAB_00014bc8:
                if (0x2f < iVar4) {
                    bVar35 = true;
                    goto LAB_00014bd4;
                }
                if (debug != 0) {
                    __printf_chk(1, "receive: packet length %d\n", iVar4);
                }
            } else {
                uVar13 = FUN_0001fae0(iVar27 + 4);
                __printf_chk(1, "receive(%s)\n", uVar13);
                iVar4 = *(int *)(iVar27 + 0x54);
                if (iVar4 != 0x30)
                    goto LAB_00014bc8;
            LAB_00014c48:
                bVar35 = false;
            LAB_00014bd4:
                if ((((uint) * (byte *)(iVar27 + 0x58) << 0x1a) >> 0x1d) - 1 <
                    4) {
                    uVar6 = *(byte *)(iVar27 + 0x58) & 7;
                    if (((uVar6 - 2 & 0xfd) == 0) &&
                        (*(byte *)(iVar27 + 0x59) < 0x10)) {
                        if (((ushort)(*(ushort *)(iVar27 + 6) >> 8 |
                                      *(ushort *)(iVar27 + 6) << 8) == 0x7b) &&
                            (sys_servers != (int *)0x0)) {
                            sVar2 = *(short *)(iVar27 + 4);
                            piVar7 = (int *)0x0;
                            piVar30 = sys_servers;
                            do {
                                while ((short)piVar30[1] != sVar2) {
                                    piVar30 = (int *)*piVar30;
                                    if (piVar30 == (int *)0x0)
                                        goto LAB_00014d28;
                                }
                                if (sVar2 == 2) {
                                    if (*(uint *)(iVar27 + 8) == piVar30[2])
                                        goto LAB_00014e38;
                                    bVar3 = (piVar30[2] & 0xf0U) == 0xe0;
                                } else {
                                    iVar9 = memcmp((void *)(iVar27 + 0xc),
                                                   piVar30 + 3, 0x10);
                                    if ((iVar9 == 0) &&
                                        (*(int *)(iVar27 + 0x1c) ==
                                         piVar30[7])) {
                                    LAB_00014e38:
                                        uVar6 = sys_authkey;
                                        uVar23 = *(uint *)(iVar27 + 0x70);
                                        uVar23 = uVar23 << 0x18 |
                                                 (uVar23 >> 8 & 0xff) << 0x10 |
                                                 (uVar23 >> 0x10 & 0xff) << 8 |
                                                 uVar23 >> 0x18;
                                        uVar24 = *(uint *)(iVar27 + 0x74);
                                        uVar24 = uVar24 << 0x18 |
                                                 (uVar24 >> 8 & 0xff) << 0x10 |
                                                 (uVar24 >> 0x10 & 0xff) << 8 |
                                                 uVar24 >> 0x18;
                                        if ((uVar23 != piVar30[0x3d]) ||
                                            (uVar24 != piVar30[0x3e])) {
                                            if (debug != 0) {
                                                puts("receive: pkt.org and "
                                                     "peer.xmt differ");
                                            }
                                            goto LAB_00014b9c;
                                        }
                                        if (sys_authenticate == 0) {
                                        LAB_00015f08:
                                            *(char *)(piVar30 + 9) =
                                                (char)piVar30[9] << 1;
                                            bVar31 = *(byte *)(iVar27 + 0x58);
                                        } else {
                                            if (3 < debug) {
                                                uVar25 =
                                                    *(uint *)(iVar27 + 0x88);
                                                uVar13 = FUN_00018a90(
                                                    sys_authkey, iVar27 + 0x58,
                                                    0x30, iVar4 + -0x30);
                                                __printf_chk(
                                                    1,
                                                    "receive: rpkt keyid=%ld "
                                                    "sys_authkey=%ld "
                                                    "decrypt=%ld\n",
                                                    uVar25 << 0x18 |
                                                        (uVar25 >> 8 & 0xff)
                                                            << 0x10 |
                                                        (uVar25 >> 0x10 & 0xff)
                                                            << 8 |
                                                        uVar25 >> 0x18,
                                                    uVar6, uVar13);
                                            }
                                            if (bVar35) {
                                                uVar6 =
                                                    *(uint *)(iVar27 + 0x88);
                                                uVar6 = uVar6 << 0x18 |
                                                        (uVar6 >> 8 & 0xff)
                                                            << 0x10 |
                                                        (uVar6 >> 0x10 & 0xff)
                                                            << 8 |
                                                        uVar6 >> 0x18;
                                                if ((uVar6 == sys_authkey) &&
                                                    (iVar4 = FUN_00018a90(
                                                         uVar6, iVar27 + 0x58,
                                                         0x30,
                                                         *(int *)(iVar27 +
                                                                  0x54) +
                                                             -0x30),
                                                     iVar4 != 0)) {
                                                    if (debug != 0) {
                                                        __printf_chk(
                                                            1,
                                                            "receive: "
                                                            "authentication "
                                                            "%s\n",
                                                            "passed");
                                                    }
                                                    goto LAB_00015f08;
                                                }
                                            }
                                            if (debug != 0) {
                                                __printf_chk(
                                                    1,
                                                    "receive: authentication "
                                                    "%s\n",
                                                    "failed");
                                            }
                                            *(byte *)(piVar30 + 9) =
                                                (char)piVar30[9] << 1 | 1;
                                            bVar31 = *(byte *)(iVar27 + 0x58);
                                        }
                                        if (((bVar31 >> 6 == 3) &&
                                             (*(char *)(iVar27 + 0x59) ==
                                              '\0')) &&
                                            (iVar4 = memcmp(
                                                 &DAT_0002cffc,
                                                 (void *)(iVar27 + 100), 4),
                                             iVar4 == 0)) {
                                            uVar13 = FUN_0001fae0(iVar27 + 4);
                                            FUN_0001abf8(
                                                3,
                                                "%s rate limit response from "
                                                "server.",
                                                uVar13);
                                            piVar30[0xf] = 0;
                                            complete_servers =
                                                complete_servers + 1;
                                            goto LAB_00014b9c;
                                        }
                                        *(byte *)((int)piVar30 + 0x21) =
                                            bVar31 >> 6;
                                        cVar21 = *(char *)(iVar27 + 0x59);
                                        if (cVar21 == '\0') {
                                            cVar21 = '\x10';
                                        }
                                        *(char *)((int)piVar30 + 0x22) = cVar21;
                                        cVar21 = *(char *)(iVar27 + 0x5b);
                                        *(char *)((int)piVar30 + 0x23) = cVar21;
                                        uVar6 = *(uint *)(iVar27 + 0x5c);
                                        uVar25 = *(uint *)(iVar27 + 0x60);
                                        piVar30[0xc] = *(int *)(iVar27 + 100);
                                        piVar30[10] =
                                            uVar6 << 0x18 |
                                            (uVar6 >> 8 & 0xff) << 0x10 |
                                            (uVar6 >> 0x10 & 0xff) << 8 |
                                            uVar6 >> 0x18;
                                        piVar30[0xb] =
                                            uVar25 << 0x18 |
                                            (uVar25 >> 8 & 0xff) << 0x10 |
                                            (uVar25 >> 0x10 & 0xff) << 8 |
                                            uVar25 >> 0x18;
                                        uVar6 = *(uint *)(iVar27 + 0x68);
                                        uVar25 = *(uint *)(iVar27 + 0x7c);
                                        piVar30[0xd] =
                                            uVar6 << 0x18 |
                                            (uVar6 >> 8 & 0xff) << 0x10 |
                                            (uVar6 >> 0x10 & 0xff) << 8 |
                                            uVar6 >> 0x18;
                                        uVar6 = *(uint *)(iVar27 + 0x78);
                                        uVar26 = uVar25 << 0x18 |
                                                 (uVar25 >> 8 & 0xff) << 0x10 |
                                                 (uVar25 >> 0x10 & 0xff) << 8 |
                                                 uVar25 >> 0x18;
                                        uVar34 = *(uint *)(iVar27 + 0x80);
                                        uVar32 = uVar6 << 0x18 |
                                                 (uVar6 >> 8 & 0xff) << 0x10 |
                                                 (uVar6 >> 0x10 & 0xff) << 8 |
                                                 uVar6 >> 0x18;
                                        uVar6 = *(uint *)(iVar27 + 0x6c);
                                        uVar25 = *(uint *)(iVar27 + 0x84);
                                        uVar34 = uVar34 << 0x18 |
                                                 (uVar34 >> 8 & 0xff) << 0x10 |
                                                 (uVar34 >> 0x10 & 0xff) << 8 |
                                                 uVar34 >> 0x18;
                                        uVar25 = uVar25 << 0x18 |
                                                 (uVar25 >> 8 & 0xff) << 0x10 |
                                                 (uVar25 >> 0x10 & 0xff) << 8 |
                                                 uVar25 >> 0x18;
                                        piVar30[0x3b] = uVar34;
                                        piVar30[0xe] =
                                            uVar6 << 0x18 |
                                            (uVar6 >> 8 & 0xff) << 0x10 |
                                            (uVar6 >> 0x10 & 0xff) << 8 |
                                            uVar6 >> 0x18;
                                        piVar30[0x3c] = uVar25;
                                        if ((uVar26 != 0 || uVar32 != 0) &&
                                            ((uVar32 < uVar34 ||
                                              (uVar26 <= uVar25 &&
                                               uVar32 == uVar34)))) {
                                            uVar32 = uVar32 - uVar23;
                                            uVar6 = uVar25 -
                                                    *(int *)(iVar27 + 0x4c);
                                            uVar24 = uVar26 - uVar24;
                                            uVar34 = uVar34 -
                                                     *(int *)(iVar27 + 0x48);
                                            if (uVar26 < uVar24) {
                                                uVar32 = uVar32 - 1;
                                            }
                                            if (uVar25 < uVar6) {
                                                uVar34 = uVar34 - 1;
                                            }
                                            uVar26 = uVar24 >> 1 | uVar32
                                                                       << 0x1f;
                                            uVar23 = uVar6 >> 1 | uVar34
                                                                      << 0x1f;
                                            uVar25 = uVar26 + uVar23;
                                            uVar23 =
                                                (uVar32 & 0x80000000 |
                                                 uVar32 >> 1) +
                                                (uVar34 & 0x80000000 |
                                                 uVar34 >> 1) +
                                                (uint)CARRY4(uVar26, uVar23);
                                            if (uVar24 < uVar24 - uVar6) {
                                                uVar32 = uVar32 - 1;
                                            }
                                            iVar4 = uVar32 - uVar34;
                                            if (iVar4 < 0x10000) {
                                                if (iVar4 == -0x10000 ||
                                                    iVar4 + 0x10000 < 0 !=
                                                        SCARRY4(iVar4,
                                                                0x10000)) {
                                                    uVar6 = 0x80000000;
                                                } else {
                                                    uVar6 =
                                                        uVar24 - uVar6 >> 0x10 |
                                                        iVar4 * 0x10000;
                                                }
                                            } else {
                                                uVar6 = 0x7fffffff;
                                            }
                                            if (3 < debug) {
                                                uVar13 = FUN_00019980(
                                                    uVar23, uVar25, 6);
                                                uVar19 = FUN_000195f8(uVar6, 5);
                                                __printf_chk(
                                                    1, "offset: %s, delay %s\n",
                                                    uVar13, uVar19);
                                                cVar21 =
                                                    *(char *)((int)piVar30 +
                                                              0x23);
                                            }
                                            iVar4 = uVar6 +
                                                    (0x10000 >>
                                                     (-(int)cVar21 & 0xffU)) +
                                                    0x68f;
                                            if (iVar4 < 1) {
                                                uVar6 =
                                                    (uint) *
                                                    (ushort *)((int)piVar30 +
                                                               0x4a);
                                                if (uVar6 < 8) {
                                                    uVar34 = 0;
                                                    piVar30[uVar6 + 0x13] = 0;
                                                    piVar30[(uVar6 + 0xd) * 2 +
                                                            1] = 0;
                                                    piVar30[(uVar6 + 0xd) * 2 +
                                                            2] = 0;
                                                    uVar24 = uVar6;
                                                    goto LAB_0001526c;
                                                }
                                            } else {
                                                uVar6 =
                                                    (uint) *
                                                    (ushort *)((int)piVar30 +
                                                               0x4a);
                                                if (iVar4 < 0x51f) {
                                                    iVar4 = 0x51f;
                                                }
                                                if (uVar6 < 8) {
                                                    piVar30[uVar6 + 0x13] =
                                                        iVar4;
                                                    piVar30[(uVar6 + 0xd) * 2 +
                                                            1] = uVar23;
                                                    uVar34 = uVar23;
                                                    if (0xffff < (int)uVar23) {
                                                        uVar34 = 0x7fffffff;
                                                    }
                                                    piVar30[(uVar6 + 0xd) * 2 +
                                                            2] = uVar25;
                                                    uVar24 = uVar6;
                                                    if ((int)uVar23 < 0x10000) {
                                                        if (uVar34 ==
                                                                0xffff0000 ||
                                                            (int)(uVar34 +
                                                                  0x10000) <
                                                                    0 !=
                                                                SCARRY4(
                                                                    uVar34,
                                                                    0x10000)) {
                                                            uVar34 = 0x80000000;
                                                        } else {
                                                            uVar34 =
                                                                uVar25 >> 0x10 |
                                                                uVar34 << 0x10;
                                                        }
                                                    }
                                                LAB_0001526c:
                                                    piVar30[uVar24 + 0x2b] =
                                                        uVar34;
                                                    uVar6 = uVar24 + 1 & 0xffff;
                                                    piVar30[uVar24 + 0x33] = 0;
                                                    *(short *)((int)piVar30 +
                                                               0x4a) =
                                                        (short)(uVar24 + 1);
                                                }
                                            }
                                            if ((int)sys_samples <=
                                                (int)uVar6) {
                                                piVar30[0xf] = 0;
                                                complete_servers =
                                                    complete_servers + 1;
                                                goto LAB_00014b9c;
                                            }
                                        }
                                        piVar30[0xf] =
                                            sys_timeout + current_time;
                                        goto LAB_00014b9c;
                                    }
                                    bVar3 = (char)piVar30[3] == -1;
                                }
                                if (bVar3) {
                                    piVar7 = piVar30;
                                }
                                piVar30 = (int *)*piVar30;
                            } while (piVar30 != (int *)0x0);
                        LAB_00014d28:
                            if (piVar7 != (int *)0x0) {
                                if (piVar7[0xf] != 0) {
                                    piVar7[0xf] = (int)piVar30;
                                    complete_servers = complete_servers + 1;
                                }
                                iVar4 = FUN_00019a68(0, 0x110, 0, 1);
                                piVar7 = sys_servers;
                                iVar9 = sys_numservers + 1;
                                uVar13 = *(undefined4 *)(iVar27 + 8);
                                uVar19 = *(undefined4 *)(iVar27 + 0xc);
                                uVar22 = *(undefined4 *)(iVar27 + 0x10);
                                sys_numservers = iVar9;
                                *(undefined4 *)(iVar4 + 4) =
                                    *(undefined4 *)(iVar27 + 4);
                                *(undefined4 *)(iVar4 + 8) = uVar13;
                                *(undefined4 *)(iVar4 + 0xc) = uVar19;
                                *(undefined4 *)(iVar4 + 0x10) = uVar22;
                                uVar13 = *(undefined4 *)(iVar27 + 0x18);
                                uVar19 = *(undefined4 *)(iVar27 + 0x1c);
                                *(undefined4 *)(iVar4 + 0x14) =
                                    *(undefined4 *)(iVar27 + 0x14);
                                *(undefined4 *)(iVar4 + 0x18) = uVar13;
                                *(undefined4 *)(iVar4 + 0x1c) = uVar19;
                                *(int *)(iVar4 + 0x3c) = iVar9;
                                do {
                                    piVar30 = piVar7;
                                    piVar7 = (int *)*piVar30;
                                } while (piVar7 != (int *)0x0);
                                *piVar30 = iVar4;
                                FUN_00013bf8(iVar4);
                            }
                        }
                        if (debug != 0) {
                            puts("receive: server not found");
                        }
                    } else if (debug != 0) {
                        __printf_chk(1, "receive: mode %d stratum %d\n", uVar6,
                                     *(undefined1 *)(iVar27 + 0x59));
                    }
                }
            }
        LAB_00014b9c:
            FUN_0001dabc(iVar27);
            iVar27 = FUN_0001dcb8();
        } while (iVar27 != 0);
        if (bVar36) {
        LAB_00014c74:
            FUN_00013ce4();
        }
    }
    goto LAB_00014aa4;
LAB_0001551c:
    do {
        bVar31 = *(byte *)((int)piVar7 + 0x22);
        if (bVar31 == 0) {
            if (iVar27 != 0) {
                uVar13 = FUN_0001fae0(piVar7 + 1);
                __printf_chk(1, "%s: Server dropped: no data\n", uVar13);
                iVar27 = debug;
            }
            goto LAB_00015510;
        }
        if (bVar31 < 0x10) {
            if (0x80000 < (uint)piVar7[0x3f]) {
                if (iVar27 != 0) {
                    uVar13 = FUN_0001fae0(piVar7 + 1);
                    __printf_chk(1, "%s: Server dropped: server too far away\n",
                                 uVar13);
                    iVar27 = debug;
                }
                goto LAB_00015510;
            }
            if (*(char *)((int)piVar7 + 0x21) == '\x03') {
                if (iVar27 != 0) {
                    uVar13 = FUN_0001fae0(piVar7 + 1);
                    __printf_chk(1, "%s: Server dropped: leap not in sync\n",
                                 uVar13);
                    iVar27 = debug;
                }
                goto LAB_00015510;
            }
            uVar24 = piVar7[0x3b];
            uVar23 = piVar7[0xd];
            if (uVar23 < uVar24) {
                if (uVar24 - uVar23 < 0x15180)
                    goto LAB_000160fc;
                if (iVar27 != 0) {
                    uVar13 = FUN_0001fae0(piVar7 + 1);
                    __printf_chk(1,
                                 "%s: Server dropped: server has gone too long "
                                 "without sync\n",
                                 uVar13);
                    iVar27 = debug;
                }
                goto LAB_00015510;
            }
            if ((uVar24 != uVar23) ||
                ((uint)piVar7[0x3c] < (uint)piVar7[0xe])) {
                if (iVar27 != 0) {
                    uVar13 = FUN_0001fae0(piVar7 + 1);
                    __printf_chk(1,
                                 "%s: Server dropped: server is very broken\n",
                                 uVar13);
                    iVar27 = debug;
                }
                goto LAB_00015510;
            }
        LAB_000160fc:
            if ((char)piVar7[9] != '\0') {
                if (iVar27 != 0) {
                    uVar13 = FUN_0001fae0(piVar7 + 1);
                    __printf_chk(1, "%s: Server dropped: Server is untrusted\n",
                                 uVar13);
                    iVar27 = debug;
                }
                goto LAB_00015510;
            }
            uVar23 = piVar7[0x40] * 2;
            if (uVar6 != 0) {
                if (*(byte *)((int)local_84[0] + 0x22) < bVar31) {
                    ppiVar17 = local_84;
                    uVar24 = 0;
                    do {
                        uVar25 = uVar24;
                        uVar24 = uVar25 + 1;
                        if (uVar24 == uVar6)
                            goto LAB_000161b0;
                        ppiVar17 = ppiVar17 + 1;
                    } while (*(byte *)((int)*ppiVar17 + 0x22) < bVar31);
                    if ((*(byte *)((int)*ppiVar17 + 0x22) <= bVar31) &&
                        (iVar4 = uVar25 * 4 + 4,
                         *(int *)(local_5c.sa_data + uVar25 * 4 + 2) <=
                             (int)uVar23)) {
                    LAB_000164e4:
                        pcVar28 = local_5c.sa_data + iVar4 + -2;
                        piVar30 = (int *)((int)local_84 + iVar4);
                        do {
                            uVar24 = uVar24 + 1;
                            if (uVar6 <= uVar24)
                                goto LAB_000161b0;
                            piVar30 = piVar30 + 1;
                        } while ((*(byte *)(*piVar30 + 0x22) <= bVar31) &&
                                 (pcVar28 = pcVar28 + 4,
                                  *(int *)pcVar28 <= (int)uVar23));
                    }
                    if (4 < uVar24)
                        goto LAB_00015510;
                } else {
                    if ((*(byte *)((int)local_84[0] + 0x22) <= bVar31) &&
                        ((int)local_5c._0_4_ <= (int)uVar23)) {
                        iVar4 = 0;
                        uVar24 = 0;
                        goto LAB_000164e4;
                    }
                    uVar24 = 0;
                }
                pcVar28 = local_5c.sa_data + uVar6 * 4 + -2;
                ppiVar17 = local_84 + uVar6;
                uVar25 = uVar6;
                do {
                    uVar34 = uVar25 - 1;
                    if (uVar25 < 5) {
                        *ppiVar17 = ppiVar17[-1];
                        *(undefined4 *)pcVar28 =
                            *(undefined4 *)(pcVar28 + 0xfffffffc);
                    }
                    pcVar28 = pcVar28 + 0xfffffffc;
                    ppiVar17 = ppiVar17 + -1;
                    uVar25 = uVar34;
                } while (uVar24 < uVar34);
                goto LAB_000161b8;
            }
            local_84[0] = piVar7;
            local_5c._0_4_ = uVar23;
            goto LAB_000161d0;
        }
        if (iVar27 == 0)
            goto LAB_00015510;
        uVar13 = FUN_0001fae0(piVar7 + 1);
        __printf_chk(1, "%s: Server dropped: strata too high\n", uVar13);
        piVar7 = (int *)*piVar7;
        iVar27 = debug;
    } while (piVar7 != (int *)0x0);
    goto LAB_00015560;
LAB_000161b0:
    if (uVar24 < 5) {
    LAB_000161b8:
        local_84[uVar24] = piVar7;
        *(uint *)(local_5c.sa_data + uVar24 * 4 + -2) = uVar23;
        if (uVar6 < 5) {
        LAB_000161d0:
            uVar6 = uVar6 + 1;
        }
    }
LAB_00015510:
    piVar7 = (int *)*piVar7;
    if (piVar7 == (int *)0x0)
        goto LAB_00015560;
    goto LAB_0001551c;
LAB_00015560:
    if (uVar6 < 2) {
        uVar23 = uVar6;
        if (uVar6 == 0) {
            local_10c = (int *)0x0;
            goto LAB_00015774;
        }
    } else {
        uVar23 = 1;
        ppiVar17 = local_84;
        do {
            if (*(byte *)((int)*ppiVar17 + 0x22) <
                *(byte *)((int)ppiVar17[1] + 0x22)) {
                if (piVar7 == (int *)0x1)
                    break;
                piVar7 = (int *)0x1;
            }
            uVar23 = uVar23 + 1;
            ppiVar17 = ppiVar17 + 1;
        } while (uVar23 != uVar6);
    }
    local_10c = local_84[0];
    if (uVar23 != 1) {
        uVar6 = 0;
        ppiVar17 = local_84;
        do {
            while (uVar6 = uVar6 + 1, uVar23 <= uVar6) {
            LAB_00015e4c:
                ppiVar17 = ppiVar17 + 1;
                if (uVar6 == uVar23 - 1)
                    goto LAB_00015638;
            }
            piVar30 = *ppiVar17;
            piVar7 = ppiVar17[1];
            if (*(byte *)((int)piVar30 + 0x22) < *(byte *)((int)piVar7 + 0x22))
                goto LAB_00015e4c;
            uVar24 = uVar6;
            ppiVar15 = ppiVar17 + 1;
            do {
                uVar24 = uVar24 + 1;
                if ((uint)piVar7[0x3f] <= (uint)piVar30[0x3f]) {
                    *ppiVar17 = piVar7;
                    *ppiVar15 = piVar30;
                }
                if (uVar23 <= uVar24)
                    break;
                piVar30 = *ppiVar17;
                ppiVar15 = ppiVar15 + 1;
                piVar7 = *ppiVar15;
            } while (*(byte *)((int)piVar7 + 0x22) <=
                     *(byte *)((int)piVar30 + 0x22));
            ppiVar17 = ppiVar17 + 1;
        } while (uVar6 != uVar23 - 1);
    LAB_00015638:
        ppiVar17 = local_84 + uVar23 + 0x3fffffff;
        local_10c = local_84[0];
        do {
            uVar6 = 0;
            puVar8 = &uStack_60;
            do {
                uVar24 = 0;
                puVar8 = puVar8 + 1;
                *puVar8 = 0;
                do {
                    if (uVar6 != uVar24) {
                        uVar34 = local_84[uVar24][0x43] - local_84[uVar6][0x43];
                        uVar25 = (int)uVar34 >> 0x1f;
                        iVar4 = (uVar34 ^ uVar25) - uVar25;
                        if (uVar24 != 0) {
                            uVar25 = 0;
                            do {
                                uVar25 = uVar25 + 1;
                                iVar4 = (iVar4 >> 2) + (iVar4 >> 1);
                            } while (uVar25 != uVar24);
                        }
                        *puVar8 = *puVar8 + iVar4;
                    }
                    uVar24 = uVar24 + 1;
                } while (uVar24 < uVar23);
                uVar6 = uVar6 + 1;
            } while (uVar6 < uVar23);
            uVar25 = 1;
            iVar4 = (int)*(char *)((int)local_10c + 0x23);
            uVar6 = 0;
            ppiVar15 = local_84;
            psVar20 = &local_5c;
            uVar24 = local_5c._0_4_;
            do {
                psVar20 = (sockaddr *)(psVar20->sa_data + 2);
                uVar34 = *(uint *)psVar20;
                bVar36 = uVar24 <= uVar34;
                if (bVar36) {
                    uVar24 = uVar34;
                }
                ppiVar15 = ppiVar15 + 1;
                if (bVar36) {
                    uVar6 = uVar25;
                }
                uVar25 = uVar25 + 1;
                if (*(char *)((int)*ppiVar15 + 0x23) <= iVar4) {
                    iVar4 = (int)*(char *)((int)*ppiVar15 + 0x23);
                }
            } while (uVar25 < uVar23);
            if ((int)uVar24 < (0x10000 >> (-iVar4 & 0xffU)) + 0x68f)
                break;
            if (uVar6 + 1 < uVar23) {
                ppiVar15 = local_84 + uVar6;
                do {
                    ppiVar16 = ppiVar15 + 1;
                    *ppiVar15 = *ppiVar16;
                    ppiVar15 = ppiVar16;
                } while (ppiVar16 != ppiVar17);
                local_10c = local_84[0];
            }
            uVar23 = uVar23 - 1;
            ppiVar17 = ppiVar17 + -1;
        } while (uVar23 != 1);
    }
    goto LAB_00015774;
LAB_00015cec:
    fputc(10, __s);
    fwrite("filter offset:", 1, 0xe, __s);
    iVar4 = 1;
    iVar27 = 0;
    piVar30 = piVar7;
    do {
        if (iVar27 == 4) {
            fwrite("\n              ", 1, 0xf, __s);
            if (4 < (int)sys_samples)
                goto LAB_00015d8c;
            __fprintf_chk(__s, 1, " %-10.10s", &DAT_0002cc04);
        } else {
            puVar11 = &DAT_0002cc04;
            if (iVar27 < (int)sys_samples) {
            LAB_00015d8c:
                puVar11 =
                    (undefined *)FUN_00019980(piVar30[0x1b], piVar30[0x1c], 6);
            }
            __fprintf_chk(__s, 1, " %-10.10s", puVar11);
            if (iVar4 == 8)
                break;
        }
        iVar27 = iVar27 + 1;
        iVar4 = iVar4 + 1;
        piVar30 = piVar30 + 2;
    } while (true);
    fputc(10, __s);
LAB_00015b3c:
    uVar13 = FUN_000195f8(piVar7[0x3f], 5);
    uVar19 = FUN_0001939c(piVar7[0x40], 0, 5);
    __fprintf_chk(__s, 1, "delay %s, dispersion %s, ", uVar13, uVar19);
    uVar13 = FUN_00019980(piVar7[0x41], piVar7[0x42], 6);
    __fprintf_chk(__s, 1, "offset %s\n\n", uVar13);
    piVar7 = (int *)*piVar7;
joined_r0x00015830:
    if (piVar7 == (int *)0x0)
        goto joined_r0x00015dbc;
    goto LAB_00015834;
LAB_0001432c:
    if (iVar27 != 0) {
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
        LAB_00015e20:
            openlog("ntpdate", 9, 0x18);
            if (debug == 0) {
                iVar27 = 0x7f;
            } else {
                iVar27 = 0xff;
            }
            setlogmask(iVar27);
            goto LAB_000143c0;
        }
    LAB_000143cc:
        if (verbose != 0)
            goto LAB_000146bc;
    } else {
        setvbuf(stdout, &DAT_0004127c, 1, 0x2000);
        if (syslogit != 0)
            goto LAB_00015e20;
    LAB_000143c0:
        if (debug == 0)
            goto LAB_000143cc;
    LAB_000146bc:
        FUN_0001abf8(5, "%s", Version);
    }
    if (ntp_optind < param_1) {
        do {
            pcVar28 = (char *)param_2[ntp_optind];
            FUN_000208c4(local_34, &DAT_0002cd04, 5);
            local_a4.ai_family = ai_fam_templ;
            local_a4.ai_socktype = 2;
            uVar6 = getaddrinfo(pcVar28, (char *)local_34, &local_a4,
                                (addrinfo **)&local_ac);
            uVar13 = stderr;
            if (uVar6 == 0) {
                if ((addrinfo *)local_ac.tv_sec != (addrinfo *)0x0) {
                    paVar29 = (addrinfo *)local_ac.tv_sec;
                    do {
                        local_5c.sa_data[10] = '\0';
                        local_5c.sa_data[0xb] = '\0';
                        local_5c.sa_data[0xc] = '\0';
                        local_5c.sa_data[0xd] = '\0';
                        local_4c = 0;
                        local_48 = 0;
                        local_44 = 0;
                        local_5c._0_4_ = uVar6;
                        local_5c.sa_data._2_4_ = uVar6;
                        local_5c.sa_data._6_4_ = uVar6;
                        if (0x1c < paVar29->ai_addrlen) {
                            /* WARNING: Subroutine does not return */
                            FUN_00020c38("ntpdate.c", 0x578, 2,
                                         "ptr->ai_addrlen <= sizeof(addr)");
                        }
                        __memcpy_chk(&local_5c, paVar29->ai_addr,
                                     paVar29->ai_addrlen, 0x1c);
                        iVar27 = socket(local_5c._0_4_ & 0xffff, 2, 0);
                        piVar7 = sys_servers;
                        if (iVar27 != -1) {
                            if ((local_5c._0_4_ & 0xffff) == 2) {
                                sVar18 = 0x10;
                            } else {
                                sVar18 = 0x1c;
                            }
                            iVar4 = connect(iVar27, &local_5c, sVar18);
                            if (iVar4 == 0) {
                                close(iVar27);
                                piVar7 = (int *)FUN_00019a68(0, 0x110, 0, 1);
                                memcpy(piVar7 + 1, paVar29->ai_addr,
                                       paVar29->ai_addrlen);
                                sys_numservers = sys_numservers + 1;
                                piVar7[0xf] = sys_numservers;
                                piVar30 = sys_servers;
                                if (sys_servers != (int *)0x0) {
                                    do {
                                        piVar12 = piVar30;
                                        piVar30 = (int *)*piVar12;
                                    } while (piVar30 != (int *)0x0);
                                    *piVar12 = (int)piVar7;
                                    piVar7 = sys_servers;
                                }
                            } else {
                                close(iVar27);
                                piVar7 = sys_servers;
                            }
                        }
                        sys_servers = piVar7;
                        paVar29 = paVar29->ai_next;
                    } while (paVar29 != (addrinfo *)0x0);
                }
                freeaddrinfo((addrinfo *)local_ac.tv_sec);
            } else {
                if (uVar6 + 4 < 2) {
                    pcVar28 = gai_strerror(uVar6);
                    __fprintf_chk(
                        uVar13, 1,
                        "Exiting, name server cannot be used: %s (%d)", pcVar28,
                        uVar6);
                    pcVar28 = gai_strerror(uVar6);
                    FUN_0001abf8(3, "name server cannot be used: %s (%d)",
                                 pcVar28, uVar6);
                    /* WARNING: Subroutine does not return */
                    exit(1);
                }
                pcVar5 = gai_strerror(uVar6);
                __fprintf_chk(uVar13, 1, "Error resolving %s: %s (%d)\n",
                              pcVar28, pcVar5, uVar6);
                pcVar5 = gai_strerror(uVar6);
                FUN_0001abf8(3, "Can\'t find host %s: %s (%d)", pcVar28, pcVar5,
                             uVar6);
            }
            ntp_optind = ntp_optind + 1;
        } while (ntp_optind < param_1);
    }
    if (sys_numservers == 0) {
        FUN_0001abf8(3, "no servers can be used, exiting");
        /* WARNING: Subroutine does not return */
        exit(1);
    }
    if (sys_authenticate != 0) {
        FUN_00017d44();
        iVar27 = FUN_00018d78(key_file);
        if (iVar27 == 0) {
            FUN_0001abf8(3, "no key file <%s>, exiting", key_file);
            /* WARNING: Subroutine does not return */
            exit(1);
        }
        FUN_000183e4(sys_authkey, 1);
        iVar27 = FUN_00018508(sys_authkey);
        if (iVar27 == 0) {
            FUN_0001abf8(3, "authentication key %lu unknown", sys_authkey);
            /* WARNING: Subroutine does not return */
            exit(1);
        }
    }
    local_ac.tv_sec = 1;
    if (debug == 0) {
        bVar36 = false;
        if (simple_query == 0) {
            bVar36 = unpriv_port == 0;
        }
    } else {
        bVar36 = false;
    }
    FUN_0001d9bc(sys_numservers + 2);
    FUN_000208c4(local_34, &DAT_0002cd04, 5);
    local_a4.ai_protocol = 0;
    local_a4.ai_addrlen = 0;
    local_a4.ai_addr = (sockaddr *)0x0;
    local_a4.ai_canonname = (char *)0x0;
    local_a4.ai_next = (addrinfo *)0x0;
    local_a4.ai_flags = 1;
    local_a4.ai_socktype = 2;
    local_a4.ai_family = ai_fam_templ;
    iVar27 = getaddrinfo((char *)0x0, (char *)local_34, &local_a4, &local_b8);
    paVar29 = local_b8;
    if (iVar27 != 0) {
        FUN_0001abf8(3, "getaddrinfo() failed: %m");
        /* WARNING: Subroutine does not return */
        exit(1);
    }
    nbsock = 0;
    if (local_b8 != (addrinfo *)0x0) {
        iVar27 = 0;
        do {
            iVar4 = socket(local_b8->ai_family, local_b8->ai_socktype,
                           local_b8->ai_protocol);
            *(int *)((int)&fd + iVar27 * 4) = iVar4;
            iVar27 = nbsock;
            iVar4 = *(int *)((int)&fd + nbsock * 4);
            if (iVar4 == -1) {
                puVar8 = (uint *)__errno_location();
                uVar6 = *puVar8;
                bVar35 = 0x5c < uVar6;
                if (uVar6 != 0x5d) {
                    bVar35 = uVar6 != 0x60;
                }
                if (bVar35 && (uVar6 != 0x5d && uVar6 != 0x61)) {
                    FUN_0001abf8(3, "socket() failed: %m");
                    /* WARNING: Subroutine does not return */
                    exit(1);
                }
            } else {
                iVar27 = setsockopt(iVar4, 1, 2, &local_ac, 4);
                if (iVar27 < 0) {
                    FUN_0001abf8(3, "setsockopt() SO_REUSEADDR failed: %m");
                    /* WARNING: Subroutine does not return */
                    exit(1);
                }
                iVar27 = local_b8->ai_family;
                if (iVar27 == 10) {
                    iVar27 = setsockopt(*(int *)((int)&fd + nbsock * 4), 0x29,
                                        0x1a, &local_ac, 4);
                    if (iVar27 < 0) {
                        FUN_0001abf8(3, "setsockopt() IPV6_V6ONLY failed: %m");
                        /* WARNING: Subroutine does not return */
                        exit(1);
                    }
                    iVar27 = local_b8->ai_family;
                }
                iVar4 = nbsock;
                *(int *)((int)&fd_family + nbsock * 4) = iVar27;
                if (bVar36) {
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
                        FUN_00020c38("ntpdate.c", 0x6e6, 2,
                                     "res->ai_addrlen <= sizeof(addr)");
                    }
                    __memcpy_chk(&local_5c, local_b8->ai_addr,
                                 local_b8->ai_addrlen, 0x1c);
                    if (local_5c.sa_family == 2) {
                        sVar18 = 0x10;
                    } else {
                        sVar18 = 0x1c;
                    }
                    iVar27 =
                        bind(*(int *)((int)&fd + iVar4 * 4), &local_5c, sVar18);
                    iVar4 = nbsock;
                    if (iVar27 < 0) {
                        piVar7 = __errno_location();
                        if (*piVar7 == 0x62) {
                            FUN_0001abf8(3,
                                         "the NTP socket is in use, exiting");
                        } else {
                            FUN_0001abf8(3, "bind() fails: %m");
                        }
                        /* WARNING: Subroutine does not return */
                        exit(1);
                    }
                }
                iVar27 = *(int *)((int)&fd + iVar4 * 4);
                *(int *)(fdmask + iVar4 * 8) = iVar27;
                *(undefined2 *)(fdmask + iVar4 * 8 + 4) = 1;
                iVar27 = fcntl(iVar27, 4, 0x800);
                if (iVar27 < 0) {
                    FUN_0001abf8(3, "fcntl(FNDELAY|FASYNC) fails: %m");
                    /* WARNING: Subroutine does not return */
                    exit(1);
                }
                iVar27 = nbsock + 1;
                nbsock = iVar27;
            }
            local_b8 = local_b8->ai_next;
        } while ((iVar27 < 2) && (local_b8 != (addrinfo *)0x0));
    }
    freeaddrinfo(paVar29);
    alarm_flag = 0;
    FUN_00020ad4(0xe, &DAT_00013830);
    local_a4.ai_family = 200000;
    local_a4.ai_flags = 0;
    local_a4.ai_protocol = 100000;
    local_a4.ai_socktype = 0;
    setitimer(ITIMER_REAL, (itimerval *)&local_a4, (itimerval *)0x0);
    setpriority(PRIO_PROCESS, 0, -0xc);
    initializing = 0;
LAB_00014aa4:
    while (complete_servers < sys_numservers) {
        if (alarm_flag != 0) {
        LAB_00014b38:
            alarm_flag = 0;
            FUN_0001d8c0();
            iVar27 = FUN_0001dcb8();
            if (iVar27 != 0) {
                bVar36 = true;
                goto LAB_00014bb0;
            }
            goto LAB_00014c74;
        }
        iVar27 = FUN_0001d8c0();
        if (iVar27 != 0)
            goto LAB_00014df8;
        iVar27 = __poll_chk(fdmask, nbsock, (int)timeout * 1000, 0x10);
        if (iVar27 < 1) {
            if (iVar27 == -1) {
                piVar7 = __errno_location();
                if (*piVar7 != 4) {
                    FUN_0001abf8(3, "poll() error: %m");
                }
            } else {
                piVar7 = __errno_location();
                if (*piVar7 != 0) {
                    FUN_0001abf8(7, "poll(): nfound = %d, error: %m", iVar27);
                }
            }
        } else {
            FUN_00013d94();
        }
        if (alarm_flag != 0)
            goto LAB_00014b38;
        FUN_0001d8c0();
        iVar27 = FUN_0001dcb8();
        bVar36 = false;
        if (iVar27 != 0)
            goto LAB_00014bb0;
    }
    iVar27 = debug;
    local_10c = sys_servers;
    if (sys_servers != (int *)0x0) {
        uVar6 = sys_samples - 1;
        if (uVar6 < 8) {
            piVar7 = sys_servers;
            do {
                uVar23 = sys_samples;
                iVar27 = 0;
                psVar20 = &local_5c;
                do {
                    psVar20->sa_family = (short)iVar27;
                    psVar20->sa_data[0] = (char)((uint)iVar27 >> 0x10);
                    psVar20->sa_data[1] = (char)((uint)iVar27 >> 0x18);
                    iVar27 = iVar27 + 1;
                    psVar20 = (sockaddr *)(psVar20->sa_data + 2);
                } while (iVar27 < (int)sys_samples);
                iVar27 = 0;
                psVar20 = &local_5c;
                if (0 < (int)uVar6) {
                    do {
                        iVar27 = iVar27 + 1;
                        psVar14 = psVar20;
                        if (iVar27 < (int)sys_samples) {
                            do {
                                psVar14 = (sockaddr *)(psVar14->sa_data + 2);
                                iVar4 = *(int *)psVar14;
                                if ((piVar7[iVar4 + 0x13] != 0) &&
                                    (iVar9 = *(int *)psVar20,
                                     piVar7[iVar9 + 0x13] == 0 ||
                                         piVar7[iVar4 + 0x13] <
                                             piVar7[iVar9 + 0x13])) {
                                    psVar20->sa_family = (short)iVar4;
                                    psVar20->sa_data[0] =
                                        (char)((uint)iVar4 >> 0x10);
                                    psVar20->sa_data[1] =
                                        (char)((uint)iVar4 >> 0x18);
                                    *(int *)psVar14 = iVar9;
                                }
                            } while (psVar14 != (sockaddr *)(local_5c.sa_data +
                                                             sys_samples * 4 +
                                                             0xfffffffa));
                        }
                        psVar20 = (sockaddr *)(psVar20->sa_data + 2);
                    } while (iVar27 < (int)uVar6);
                }
                if (piVar7[local_5c._0_4_ + 0x13] == 0) {
                    piVar7[0x3f] = 0;
                    piVar7[0x42] = 0;
                    piVar7[0x41] = 0;
                    piVar7[0x43] = 0;
                    piVar7[0x40] = 0x400000;
                    piVar7 = (int *)*piVar7;
                } else {
                    piVar7[0x3f] = piVar7[local_5c._0_4_ + 0x13];
                    iVar27 = piVar7[local_5c._0_4_ * 2 + 0x1b];
                    iVar4 = piVar7[local_5c._0_4_ * 2 + 0x1c];
                    piVar7[0x41] = iVar27;
                    piVar7[0x42] = iVar4;
                    if (iVar27 < 0x10000) {
                        if (iVar27 < -0xffff) {
                            uVar6 = 0x80000000;
                        } else {
                            uVar6 = (uint)piVar7[0x42] >> 0x10 | iVar27 << 0x10;
                        }
                    } else {
                        uVar6 = 0x7fffffff;
                    }
                    piVar7[0x43] = uVar6;
                    piVar7[0x40] = 0;
                    if (uVar23 != 1) {
                        iVar27 = 0;
                        uVar6 = 1;
                        psVar20 = &local_5c;
                        do {
                            psVar20 = (sockaddr *)(psVar20->sa_data + 2);
                            if (piVar7[*(int *)psVar20 + 0x13] == 0) {
                                uVar24 = 0x400000;
                            } else {
                                uVar24 = piVar7[*(int *)psVar20 + 0x2b] -
                                             piVar7[local_5c._0_4_ + 0x2b] >>
                                         0x1f;
                                uVar24 = (piVar7[*(int *)psVar20 + 0x2b] -
                                              piVar7[local_5c._0_4_ + 0x2b] ^
                                          uVar24) -
                                         uVar24;
                                if (0x3fffff < (int)uVar24) {
                                    uVar24 = 0x400000;
                                }
                            }
                            iVar27 = iVar27 + (uVar24 >> (uVar6 & 0xff));
                            uVar6 = uVar6 + 1;
                        } while (uVar6 != uVar23);
                        piVar7[0x40] = iVar27;
                    }
                    piVar7 = (int *)*piVar7;
                }
                if (piVar7 == (int *)0x0) {
                    local_10c = (int *)0x0;
                    iVar27 = debug;
                    if (sys_servers == (int *)0x0)
                        goto LAB_00015774;
                    uVar6 = 0;
                    piVar7 = sys_servers;
                    goto LAB_0001551c;
                }
                uVar6 = sys_samples - 1;
            } while (uVar6 < 8);
        }
        /* WARNING: Subroutine does not return */
        FUN_00020c38("ntpdate.c", 0x3c6, 2,
                     "(0 < sys_samples) && (sys_samples <= 8)");
    }
LAB_00015774:
    if (iVar27 == 0) {
        if (simple_query != 0)
            goto LAB_00015784;
    } else {
        putchar(10);
    LAB_00015784:
        piVar7 = sys_servers;
        if (sys_servers != (int *)0x0) {
        LAB_00015834:
            __s = stdout;
            if (*(char *)((int)piVar7 + 0x22) != '\0') {
                if (debug == 0) {
                    uVar13 = FUN_0001fae0(piVar7 + 1);
                    uVar1 = *(undefined1 *)((int)piVar7 + 0x22);
                    uVar19 = FUN_00019980(piVar7[0x41], piVar7[0x42], 6);
                    uVar22 = FUN_000195f8(piVar7[0x3f], 5);
                    __fprintf_chk(
                        __s, 1, "server %s, stratum %d, offset %s, delay %s\n",
                        uVar13, uVar1, uVar19, uVar22);
                    goto LAB_00015828;
                }
                uVar13 = FUN_0001fae0(piVar7 + 1);
                __fprintf_chk(__s, 1, "server %s, port %d\n", uVar13,
                              *(ushort *)((int)piVar7 + 6) >> 8 |
                                  *(ushort *)((int)piVar7 + 6) << 8);
                if ((*(byte *)((int)piVar7 + 0x21) & 2) == 0) {
                    uVar13 = 0x30;
                } else {
                    uVar13 = 0x31;
                }
                if ((*(byte *)((int)piVar7 + 0x21) & 1) == 0) {
                    uVar19 = 0x30;
                } else {
                    uVar19 = 0x31;
                }
                __fprintf_chk(
                    __s, 1, "stratum %d, precision %d, leap %c%c, trust %03o\n",
                    *(undefined1 *)((int)piVar7 + 0x22),
                    (int)*(char *)((int)piVar7 + 0x23), uVar13, uVar19,
                    (char)piVar7[9]);
                if (*(byte *)((int)piVar7 + 0x22) - 2 < 0xe) {
                    pbVar33 = (byte *)FUN_0001d200(piVar7[0xc]);
                } else {
                    pbVar33 = (byte *)((int)piVar7 + 0x2f);
                    iVar27 = 0;
                    do {
                        pbVar33 = pbVar33 + 1;
                        bVar31 = *pbVar33;
                        if (bVar31 == 0)
                            break;
                        ppuVar10 = __ctype_b_loc();
                        if (((*ppuVar10)[(short)(ushort)bVar31] & 0x4000) ==
                            0) {
                            bVar31 = 0x2e;
                        }
                        local_34[iVar27] = bVar31;
                        iVar27 = iVar27 + 1;
                    } while (iVar27 != 4);
                    local_34[iVar27] = 0;
                    pbVar33 = local_34;
                }
                uVar6 = FUN_000195f8(piVar7[10], 6);
                uVar13 = FUN_0001939c(piVar7[0xb], 0, 6);
                __fprintf_chk(__s, 1,
                              "refid [%s], root delay %s, root dispersion %s\n",
                              pbVar33, uVar6, uVar13);
                uVar23 = (uint) * (ushort *)((int)piVar7 + 0x4a);
                if (*(ushort *)(piVar7 + 0x11) != uVar23) {
                    __fprintf_chk(__s, 1, "transmitted %d, in filter %d\n",
                                  (uint) * (ushort *)(piVar7 + 0x11), uVar23,
                                  uVar13);
                    uVar6 = uVar23;
                }
                uVar19 = FUN_0001d768(piVar7 + 0xd);
                __fprintf_chk(__s, 1, "reference time:      %s\n", uVar19,
                              uVar6, uVar13);
                uVar13 = FUN_0001d768(piVar7 + 0x3b);
                __fprintf_chk(__s, 1, "originate timestamp: %s\n", uVar13);
                uVar13 = FUN_0001d768(piVar7 + 0x3d);
                __fprintf_chk(__s, 1, "transmit timestamp:  %s\n", uVar13);
                if (1 < (int)sys_samples) {
                    piVar30 = piVar7 + 0x13;
                    fwrite("filter delay: ", 1, 0xe, __s);
                    iVar4 = 1;
                    iVar27 = 0;
                    do {
                        if (iVar27 == 4) {
                            fwrite("\n              ", 1, 0xf, __s);
                            if (4 < (int)sys_samples)
                                goto LAB_00015aa0;
                            __fprintf_chk(__s, 1, " %-10.10s", &DAT_0002cc04);
                        } else {
                            puVar11 = &DAT_0002cc04;
                            if (iVar27 < (int)sys_samples) {
                            LAB_00015aa0:
                                puVar11 =
                                    (undefined *)FUN_000195f8(*piVar30, 5);
                            }
                            __fprintf_chk(__s, 1, " %-10.10s", puVar11);
                            if (iVar4 == 8)
                                goto LAB_00015cec;
                        }
                        iVar27 = iVar27 + 1;
                        iVar4 = iVar4 + 1;
                        piVar30 = piVar30 + 1;
                    } while (true);
                }
                goto LAB_00015b3c;
            }
        LAB_00015828:
            piVar7 = (int *)*piVar7;
            goto joined_r0x00015830;
        }
    }
joined_r0x00015dbc:
    if (local_10c == (int *)0x0) {
        iVar27 = 1;
        FUN_0001abf8(3, "no server suitable for synchronization found");
    } else if ((always_step == 0) &&
               ((never_step != 0 ||
                 (uVar6 = local_10c[0x43] >> 0x1f,
                  (local_10c[0x43] ^ uVar6) - uVar6 < 0x8000)))) {
        if (simple_query == 0) {
            uVar24 = local_10c[0x41];
            uVar23 = local_10c[0x42];
            bVar36 = false;
            uVar6 = uVar23;
            if ((int)uVar24 < 0) {
                uVar6 = -uVar23;
                uVar24 = ~uVar24;
                bVar36 = true;
                if (uVar23 == 0) {
                    uVar24 = uVar24 + 1;
                }
            }
            uVar23 = uVar6 >> 1 | uVar24 << 0x1f;
            if (0x10000000 < uVar23 || uVar24 >> 1 != 0) {
                uVar23 = 0x10000000;
            }
            local_ac.tv_usec =
                (__suseconds_t)((ulonglong)(uVar23 + uVar6) * 1000000 +
                                    0x80000000 >>
                                0x20);
            local_ac.tv_sec = CARRY4(uVar23, uVar6) + uVar24;
            if (local_ac.tv_usec == 1000000) {
                local_ac.tv_sec = local_ac.tv_sec + 1;
                local_ac.tv_usec = 0;
            }
            if (bVar36) {
                local_ac.tv_sec = -local_ac.tv_sec;
                local_ac.tv_usec = -local_ac.tv_usec;
            }
            if (((debug == 0) && (local_ac.tv_usec != 0)) &&
                (iVar27 = adjtime(&local_ac, (timeval *)&local_a4),
                 iVar27 < 0)) {
                FUN_0001abf8(3, "Can\'t adjust the time of day: %m");
                /* WARNING: Subroutine does not return */
                exit(1);
            }
        }
        uVar13 = FUN_0001fae0(local_10c + 1);
        uVar19 = FUN_00019980(local_10c[0x41], local_10c[0x42], 6);
        FUN_0001abf8(5, "adjust time server %s offset %s sec", uVar13, uVar19);
        iVar27 = 0;
    } else {
        if ((simple_query == 0) && (debug == 0)) {
            uVar23 = local_10c[0x41] >> 0x1f;
            uVar6 = -uVar23;
            uVar23 = uVar23 ^ local_10c[0x42];
            dVar37 = (double)FUN_0002c914(
                uVar23 + uVar6, (-(uint)(uVar6 != 0) ^ local_10c[0x41]) +
                                    (uint)CARRY4(uVar23, uVar6));
            dVar37 = ldexp(dVar37, -0x20);
            if (uVar6 != 0) {
                dVar37 = -dVar37;
            }
            iVar27 = FUN_00017094(SUB84(dVar37, 0));
            if (iVar27 == 0)
                goto LAB_0001609c;
        }
        iVar27 = 0;
        uVar13 = FUN_0001fae0(local_10c + 1);
        uVar19 = FUN_00019980(local_10c[0x41], local_10c[0x42], 6);
        FUN_0001abf8(5, "step time server %s offset %s sec", uVar13, uVar19);
    }
LAB_0001609c:
    if (local_2c != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail(iVar27);
    }
    return;
}

void entry(undefined4 param_1)

{
    undefined4 in_stack_00000000;

    __libc_start_main(main, in_stack_00000000, &stack0x00000004, 0x2cb21,
                      0x2cb61, param_1);
    /* WARNING: Subroutine does not return */
    abort();
}

/* WARNING: Removing unreachable block (ram,0x00013750) */

void FUN_0001373c(void)

{
    __gmon_start__();
    return;
}

/* WARNING: Removing unreachable block (ram,0x00013774) */
/* WARNING: Removing unreachable block (ram,0x0001377a) */

void FUN_00013760(void)

{
    return;
}

void _FINI_0(void)

{
    if (__bss_start__ == '\0') {
        __cxa_finalize(DAT_00041004);
        FUN_00013760();
        __bss_start__ = '\x01';
    }
    return;
}

/* WARNING: Removing unreachable block (ram,0x000137a8) */
/* WARNING: Removing unreachable block (ram,0x000137ae) */
/* WARNING: Removing unreachable block (ram,0x00013818) */
/* WARNING: Removing unreachable block (ram,0x00013820) */

void _INIT_0(void)

{
    return;
}

void FUN_0001388c(sockaddr *param_1, void *param_2, size_t param_3)

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
            goto LAB_000138d8;
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
            (piVar4 = __errno_location(), *piVar4 != 0x69 && *piVar4 != 0xb)) {
            uVar5 = FUN_0001feb0(param_1);
            if (iVar1 == __stack_chk_guard) {
                FUN_0001abf8(3, "sendto(%s): %m", uVar5);
                return;
            }
        } else if (iVar1 == __stack_chk_guard) {
            return;
        }
        /* WARNING: Subroutine does not return */
        __stack_chk_fail();
    }
LAB_000138d8:
    FUN_0001abf8(3, "cannot find family compatible socket to send ntp packet");
    /* WARNING: Subroutine does not return */
    exit(1);
}

void FUN_00013bf8(int param_1)

{
    undefined4 uVar1;
    uint uVar2;
    uint uVar3;
    int iVar4;
    int iVar5;
    uint uVar6;
    uint uVar7;
    int iVar8;
    bool bVar9;
    byte local_86c[40];
    uint local_844;
    uint local_840;
    uint local_83c;
    int local_24;

    iVar5 = __stack_chk_guard;
    uVar2 = (uint) * (ushort *)(param_1 + 0x4a);
    if (uVar2 < 8 && uVar2 < *(ushort *)(param_1 + 0x44)) {
        iVar4 = param_1 + uVar2 * 4;
        uVar3 = uVar2 + 1;
        iVar8 = param_1 + (uVar2 + 0xd) * 8;
        *(undefined4 *)(iVar4 + 0x4c) = 0;
        uVar2 = uVar3 & 0xffff;
        *(undefined4 *)(iVar8 + 4) = 0;
        *(undefined4 *)(iVar8 + 8) = 0;
        *(undefined4 *)(iVar4 + 0xac) = 0;
        *(undefined4 *)(iVar4 + 0xcc) = 0;
        *(short *)(param_1 + 0x4a) = (short)uVar3;
    }
    if ((int)uVar2 < sys_samples) {
        if (iVar5 == __stack_chk_guard) {
            iVar5 = param_1 + 4;
            local_24 = __stack_chk_guard;
            if (debug != 0) {
                uVar1 = FUN_0001fae0(iVar5);
                __printf_chk(1, "transmit(%s)\n", uVar1);
            }
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
            local_86c[0] = ~(~(byte)((sys_version & 7) << 3) & 0x3c);
            local_86c[2] = 3;
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
                FUN_00016854(param_1 + 0xf4);
                uVar2 = *(uint *)(param_1 + 0xf4);
                uVar3 = *(uint *)(param_1 + 0xf8);
                local_844 = uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 |
                            (uVar2 >> 0x10 & 0xff) << 8 | uVar2 >> 0x18;
                local_840 = uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                            (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18;
                FUN_0001388c(iVar5, local_86c, 0x30);
                if (1 < debug) {
                    uVar1 = FUN_0001fae0(iVar5);
                    __printf_chk(1, "transmit to %s\n", uVar1);
                }
            } else {
                local_83c =
                    sys_authkey << 0x18 | (sys_authkey >> 8 & 0xff) << 0x10 |
                    (sys_authkey >> 0x10 & 0xff) << 8 | sys_authkey >> 0x18;
                FUN_00016854(param_1 + 0xf4);
                uVar2 = sys_authkey;
                uVar7 = *(uint *)(param_1 + 0xf8);
                uVar6 = *(uint *)(param_1 + 0xf4);
                uVar3 = uVar7 + sys_authdelay;
                *(uint *)(param_1 + 0xf8) = uVar3;
                if (uVar3 < uVar7) {
                    uVar6 = uVar6 + 1;
                }
                *(uint *)(param_1 + 0xf4) = uVar6;
                local_840 = uVar3 * 0x1000000 | (uVar3 >> 8 & 0xff) << 0x10 |
                            (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18;
                local_844 = uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                            (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18;
                iVar4 = FUN_000189c4(uVar2, local_86c, 0x30);
                FUN_0001388c(iVar5, local_86c, iVar4 + 0x30);
                if (1 < debug) {
                    uVar1 = FUN_0001fae0(iVar5);
                    __printf_chk(1, "transmit auth to %s\n", uVar1);
                }
            }
            bVar9 = local_24 != __stack_chk_guard;
            *(int *)(param_1 + 0x3c) = sys_timeout + current_time;
            *(short *)(param_1 + 0x44) = *(short *)(param_1 + 0x44) + 1;
            if (bVar9) {
                /* WARNING: Subroutine does not return */
                __stack_chk_fail();
            }
            return;
        }
    } else {
        *(undefined4 *)(param_1 + 0x3c) = 0;
        complete_servers = complete_servers + 1;
        if (iVar5 == __stack_chk_guard) {
            return;
        }
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_00013ce4(void)

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
                    goto LAB_00013d68;
            }
            FUN_00013bf8(piVar2);
            piVar2 = (int *)*piVar2;
        } while (piVar2 != (int *)0x0);
    }
LAB_00013d68:
    if (iVar1 != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail();
    }
    return;
}

void FUN_00013d94(void)

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
                    goto joined_r0x00013e20;
                iVar4 = 1;
            } else {
                iVar4 = 0;
            }
            iVar4 = *(int *)((int)&fd + iVar4 * 4);
        }
    joined_r0x00013e20:
        if (iVar1 == 0)
            goto LAB_00013e84;
        if (iVar1 == -1) {
            piVar3 = __errno_location();
            if (*piVar3 != 4) {
                FUN_0001abf8(3, "poll() error: %m");
            }
        LAB_00013e84:
            if (local_2c != __stack_chk_guard) {
                /* WARNING: Subroutine does not return */
                __stack_chk_fail();
            }
            return;
        }
        FUN_00016854(&local_a8);
        if ((initializing == 0) && (iVar1 = FUN_0001d86c(), iVar1 != 0)) {
            iVar1 = FUN_0001dc1c();
            local_ac = 0x1c;
            sVar2 = recvfrom(iVar4, (void *)(iVar1 + 0x58), 0x848, 0,
                             (sockaddr *)(iVar1 + 4), &local_ac);
            *(ssize_t *)(iVar1 + 0x54) = sVar2;
            if (sVar2 == -1) {
                FUN_0001dabc(iVar1);
            } else {
                *(undefined4 *)(iVar1 + 0x48) = local_a8;
                *(undefined4 *)(iVar1 + 0x4c) = uStack_a4;
                FUN_0001db58(iVar1);
            }
        } else {
            read(iVar4, auStack_90, 100);
        }
    } while (true);
}

void FUN_00016608(int param_1, int param_2, int param_3, int param_4)

{
    uint uVar1;
    undefined1 auStack_314[384];
    undefined1 auStack_194[384];
    int local_14;

    param_2 = param_2 - param_4;
    local_14 = __stack_chk_guard;
    uVar1 = param_1 - param_3;
    if (6000000 < param_2 + 3000000U) {
        uVar1 = uVar1 + param_2 / 1000000;
        param_2 = param_2 % 1000000;
    }
    if (param_2 < 0) {
        do {
            uVar1 = uVar1 - 1;
            param_2 = param_2 + 1000000;
        } while (param_2 < 0);
    } else {
        for (; 999999 < param_2; param_2 = param_2 + -1000000) {
            uVar1 = uVar1 + 1;
        }
    }
    if ((int)uVar1 < 0) {
        if (param_2 != 0) {
            uVar1 = ~uVar1;
            goto LAB_000166b8;
        }
    } else {
    LAB_000166b8:
        if (uVar1 == 0)
            goto LAB_000166e0;
    }
    memset(auStack_314, 0, 0x180);
    memset(auStack_194, 0, 0x180);
LAB_000166e0:
    if (local_14 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_0001672c(void)

{
    int iVar1;
    double in_d0;
    double dVar2;

    iVar1 = __stack_chk_guard;
    sys_fuzz = in_d0;
    if (in_d0 < 0.0) {
        /* WARNING: Subroutine does not return */
        FUN_00020c38("systime.c", 0x75, 2, "sys_fuzz >= 0");
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
    FUN_00020c38("systime.c", 0x76, 2, "sys_fuzz <= 1.0");
}

/* WARNING: Removing unreachable block (ram,0x00016848) */

void FUN_00016810(void)

{
    return;
}

void FUN_00016854(int *param_1)

{
    int iVar1;
    __time_t _Var2;
    int iVar3;
    uint uVar4;
    int iVar5;
    undefined4 extraout_r2;
    int iVar6;
    uint uVar7;
    uint uVar8;
    int iVar9;
    uint uVar10;
    uint uVar11;
    undefined4 unaff_r9;
    undefined4 unaff_r10;
    undefined4 extraout_r12;
    bool bVar12;
    bool bVar13;
    undefined4 in_cr1;
    undefined4 in_cr2;
    undefined4 in_cr11;
    undefined4 extraout_s0;
    double dVar14;
    undefined4 extraout_s1;
    undefined8 uVar15;
    double dVar16;
    timeval local_64;
    timeval tStack_5c;
    int local_54;
    timespec *ptStack_4c;
    timespec local_34;
    int local_2c;

    local_2c = __stack_chk_guard;
    iVar3 = clock_gettime(0, &local_34);
    bVar12 = true;
    if (iVar3 < 0) {
        DAT_00040c2c = FUN_00013660();
        __DT_PLTGOT = (undefined *)0x16df8;
        DAT_00040c48 = 0x16df0;
        if (!bVar12) {
            coprocessor_function(0xe, 1, 0, in_cr2, in_cr1, in_cr11);
        }
        local_54 = __stack_chk_guard;
        ptStack_4c = &local_34;
        DAT_00040c30 = extraout_r2;
        DAT_00040c34 = &local_34;
        DAT_00040c38 = param_1;
        DAT_00040c3c = unaff_r9;
        DAT_00040c40 = unaff_r10;
        DAT_00040c44 = extraout_r12;
        if ((double)CONCAT44(extraout_s1, extraout_s0) == 0.0) {
            if (((enable_panic_check != 0) && (allow_panic != 0)) &&
                (FUN_0001abf8(3, "adj_systime: allow_panic is TRUE!"),
                 allow_panic != 0)) {
                /* WARNING: Subroutine does not return */
                FUN_00020c38("systime.c", 0x136, 2, "!allow_panic");
            }
        } else {
            dVar14 = (double)CONCAT44(extraout_s1, extraout_s0) + sys_residual;
            bVar12 = dVar14 < 0.0;
            if (bVar12) {
                dVar14 = -dVar14;
            }
            local_64.tv_sec = (__time_t)(longlong)dVar14;
            dVar14 = dVar14 - (double)(longlong)local_64.tv_sec;
            dVar16 = sys_tick;
            if (sys_tick <= sys_fuzz) {
                dVar16 = 1e-06;
            }
            local_64.tv_usec =
                (__suseconds_t)(longlong)((double)(longlong)(int)(longlong)(dVar14 /
                                                                                dVar16 +
                                                                            0.5) *
                                              dVar16 * 1000000.0 +
                                          0.5);
            if (999999 < local_64.tv_usec) {
                local_64.tv_usec = local_64.tv_usec + -1000000;
                local_64.tv_sec = local_64.tv_sec + 1;
                dVar14 = dVar14 - 1.0;
            }
            sys_residual = dVar14 - (double)(longlong)local_64.tv_usec * 1e-06;
            if (bVar12) {
                local_64.tv_sec = -local_64.tv_sec;
                local_64.tv_usec = -local_64.tv_usec;
                sys_residual = -sys_residual;
            }
            if (((local_64.tv_sec != 0) || (local_64.tv_usec != 0)) &&
                (iVar3 = adjtime(&local_64, &tStack_5c), iVar3 < 0)) {
                FUN_0001abf8(3, "adj_systime: %m");
                iVar3 = enable_panic_check;
                if ((enable_panic_check != 0) &&
                    (iVar3 = allow_panic, allow_panic != 0)) {
                    FUN_0001abf8(3, "adj_systime: allow_panic is TRUE!");
                    iVar3 = 0;
                }
                goto LAB_00016e5c;
            }
            if ((enable_panic_check != 0) && (allow_panic != 0)) {
                FUN_0001abf8(3, "adj_systime: allow_panic is TRUE!");
            }
        }
        iVar3 = 1;
    LAB_00016e5c:
        if (local_54 == __stack_chk_guard) {
            /* WARNING: Could not recover jumptable at 0x00016e70. Too many
             * branches */
            /* WARNING: Treating indirect jump as call */
            (*(code *)0x16df0)();
            return;
        }
        /* WARNING: Subroutine does not return */
        __stack_chk_fail(iVar3);
    }
    if (trunc_os_clock != 0) {
        local_34.tv_nsec =
            (long)(longlong)(sys_tick *
                             (double)(longlong)(int)(longlong)(((double)(longlong)
                                                                    local_34
                                                                        .tv_nsec *
                                                                1e-09) /
                                                               sys_tick) *
                             1000000000.0);
    }
    iVar6 = local_34.tv_nsec + 50000000;
    iVar3 = local_34.tv_sec;
    if (iVar6 < 0) {
        do {
            iVar6 = iVar6 + 1000000000;
            iVar9 = iVar3 + -1;
            iVar3 = iVar3 + -1;
        } while (iVar6 < 0);
    } else {
        iVar9 = local_34.tv_sec;
        if (999999999 < iVar6) {
            iVar6 = local_34.tv_nsec + 0xc7602680;
            if (iVar6 < 1000000000) {
                iVar9 = local_34.tv_sec + 1;
            } else {
                iVar9 = local_34.tv_sec + 2;
                iVar6 = local_34.tv_nsec + 0x8bc55c80;
            }
        }
    }
    if (DAT_000432b8 < iVar9) {
        iVar3 = 1 - (uint)(iVar9 < DAT_000432b8);
    } else {
        iVar3 = -(uint)(iVar9 < DAT_000432b8);
    }
    if (iVar3 == 0) {
        if ((int)DAT_000432bc < iVar6) {
            iVar3 = 1 - (uint)(iVar6 < (int)DAT_000432bc);
        } else {
            iVar3 = -(uint)(iVar6 < (int)DAT_000432bc);
        }
    }
    if (iVar3 == -1) {
        DAT_000432c0 = 1;
        sys_lamport = sys_lamport + 1;
    }
    DAT_000432b8 = local_34.tv_sec;
    DAT_000432bc = local_34.tv_nsec;
    uVar7 = sys_fuzz_nsec + DAT_000432c8;
    uVar8 = uVar7;
    iVar3 = DAT_000432c4;
    if ((int)uVar7 < 0) {
        do {
            iVar3 = iVar3 + -1;
            uVar8 = uVar8 + 1000000000;
        } while ((int)uVar8 < 0);
    } else if (999999999 < (int)uVar7) {
        uVar8 = uVar7 + 0xc4653600;
        iVar6 = uVar7 + 0x88ca6c01;
        if ((int)uVar8 < 1000000000) {
            iVar3 = DAT_000432c4 + 1;
        } else {
            uVar7 = uVar7 + 0x88ca0000;
        }
        if (uVar8 != 999999999 && iVar6 < 0 == SBORROW4(uVar8, 999999999)) {
            iVar3 = iVar3 + 2;
            uVar8 = uVar7 + 0x6c00;
        }
    }
    if (iVar3 < local_34.tv_sec) {
        iVar6 = 1 - (uint)(local_34.tv_sec < iVar3);
    } else {
        iVar6 = -(uint)(local_34.tv_sec < iVar3);
    }
    if (iVar6 == 0) {
        if ((int)uVar8 < local_34.tv_nsec) {
            iVar6 = 1 - (uint)(local_34.tv_nsec < (int)uVar8);
        } else {
            iVar6 = -(uint)(local_34.tv_nsec < (int)uVar8);
        }
    }
    if (iVar6 == -1) {
        iVar5 = uVar8 - local_34.tv_nsec;
        iVar6 = iVar3 - local_34.tv_sec;
        iVar9 = iVar5;
        if (iVar5 < 0) {
            do {
                iVar6 = iVar6 + -1;
                iVar9 = iVar9 + 1000000000;
            } while (iVar9 < 0);
        } else if (999999999 < iVar5) {
            iVar9 = iVar5 + -1000000000;
            iVar1 = iVar5 + -1999999999;
            if (iVar9 < 1000000000) {
                iVar6 = iVar6 + 1;
            } else {
                iVar5 = iVar5 + -0x77360000;
            }
            if (iVar9 != 999999999 && iVar1 < 0 == SBORROW4(iVar9, 999999999)) {
                iVar6 = iVar6 + 2;
                iVar9 = iVar5 + 0x6c00;
            }
        }
        if (iVar6 < 1) {
            uVar7 = uVar8;
            DAT_000432c8 = uVar8;
            _Var2 = iVar3;
            DAT_000432c4 = iVar3;
            if (DAT_000432c0 == 0)
                goto joined_r0x00016b94;
        } else if (DAT_000432c0 == 0) {
            dVar14 = (double)(longlong)iVar6 + (double)(longlong)iVar9 * 1e-09;
            FUN_0001abf8(
                3, "get_systime Lamport advance exceeds one second (%.9f)",
                SUB84(dVar14, 0), (int)((ulonglong)dVar14 >> 0x20));
            /* WARNING: Subroutine does not return */
            exit(1);
        }
    }
    DAT_000432c4 = local_34.tv_sec;
    DAT_000432c8 = local_34.tv_nsec;
    uVar8 = local_34.tv_nsec;
    iVar3 = local_34.tv_sec;
    if (local_34.tv_nsec < 0) {
        do {
            iVar3 = iVar3 + -1;
            uVar8 = uVar8 + 1000000000;
            uVar7 = local_34.tv_nsec;
            _Var2 = local_34.tv_sec;
        joined_r0x00016b94:
            local_34.tv_sec = _Var2;
            local_34.tv_nsec = uVar7;
        } while ((int)uVar8 < 0);
    } else if (999999999 < local_34.tv_nsec) {
        uVar8 = local_34.tv_nsec + 0xc4653600;
        bVar13 = SBORROW4(uVar8, 999999999);
        bVar12 = uVar8 != 999999999;
        if ((int)uVar8 < 1000000000) {
            iVar3 = local_34.tv_sec + 1;
        } else {
            iVar3 = local_34.tv_sec + 2;
            uVar8 = 0x6c00;
        }
        if (bVar12 && (int)(local_34.tv_nsec + 0x88ca6c01U) < 0 == bVar13) {
            uVar8 = local_34.tv_nsec + (uVar8 & 0xffff | 0x88ca0000);
        }
    }
    uVar15 = VectorShiftRight(CONCAT44(uVar8, uVar8), 0x20);
    uVar15 = VectorShiftLeft(uVar15, 0x20, 0x40, 0);
    uVar8 = FUN_0002c980((uint)uVar15 + 500000000,
                         (int)((ulonglong)uVar15 >> 0x20) +
                             (uint)(0xe2329aff < (uint)uVar15),
                         1000000000, 0);
    iVar6 = FUN_0001d068();
    dVar14 = ((double)(longlong)iVar6 + (double)(longlong)iVar6) *
             2.3283064365386963e-10 * sys_fuzz;
    bVar12 = dVar14 < 0.0;
    if (bVar12) {
        dVar14 = -dVar14;
    }
    uVar10 = (uint)bVar12;
    dVar14 = ldexp(dVar14, 0x20);
    uVar15 = FUN_0002c9c0(SUB84(dVar14, 0), (int)((ulonglong)dVar14 >> 0x20));
    uVar4 = (uint)uVar15 ^ -uVar10;
    uVar11 = uVar10 + uVar4;
    uVar7 = uVar8 + uVar11;
    iVar3 = iVar3 + -0x7c558180 +
            ((uint)((ulonglong)uVar15 >> 0x20) ^ -(uint)(uVar10 != 0)) +
            (uint)CARRY4(uVar10, uVar4) + (uint)CARRY4(uVar8, uVar11);
    if (DAT_000432d0 == 0 && DAT_000432cc == 0) {
        if (DAT_000432c0 == 0)
            goto LAB_00016b24;
    } else if (DAT_000432c0 == 0) {
        if (0.0 < sys_fuzz) {
            uVar8 = uVar7 - DAT_000432d0;
            iVar6 = iVar3;
            if (uVar7 < uVar8) {
                iVar6 = iVar3 + -1;
            }
            iVar6 = iVar6 - DAT_000432cc;
            if (uVar8 < uVar8 - 1) {
                iVar6 = iVar6 + -1;
            }
            if (iVar6 < 0) {
                sys_tsrounding = sys_tsrounding + 1;
                iVar3 = (uint)(DAT_000432d0 == -1) + DAT_000432cc;
                uVar7 = DAT_000432d0 + 1;
            }
        }
        goto LAB_00016b24;
    }
    DAT_000432c0 = 0;
LAB_00016b24:
    DAT_000432d0 = uVar7;
    DAT_000432cc = iVar3;
    iVar3 = DAT_000432cc;
    param_1[1] = DAT_000432d0;
    iVar6 = __stack_chk_guard;
    *param_1 = iVar3;
    if (local_2c == iVar6) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_00017094(void)

{
    uint uVar1;
    int iVar2;
    uint uVar3;
    uint uVar4;
    uint uVar5;
    uint uVar6;
    uint uVar7;
    int iVar8;
    uint uVar9;
    uint uVar10;
    int iVar11;
    bool bVar12;
    bool bVar13;
    double in_d0;
    double dVar14;
    uint uVar15;
    undefined8 uVar16;
    undefined8 uVar17;
    undefined8 uVar18;
    int local_58[2];
    undefined4 local_50;
    int local_4c;
    int local_48;
    int local_44;
    int local_40;
    timespec local_3c;
    int local_34;

    local_50 = 0x7fffffff;
    local_34 = __stack_chk_guard;
    dVar14 = sys_residual;
    if (sys_residual < 0.0) {
        dVar14 = -sys_residual;
    }
    uVar6 = (uint)(sys_residual < 0.0);
    dVar14 = ldexp(dVar14, 0x20);
    uVar18 = FUN_0002c9c0(SUB84(dVar14, 0), (int)((ulonglong)dVar14 >> 0x20));
    bVar12 = in_d0 < 0.0;
    uVar1 = (uint)uVar18 ^ -uVar6;
    uVar3 = uVar1 + uVar6;
    if (bVar12) {
        in_d0 = -in_d0;
    }
    uVar10 = (uint)bVar12;
    dVar14 = ldexp(in_d0, 0x20);
    uVar16 = VectorShiftRight((ulonglong)CONCAT14(bVar12, uVar10), 0x20);
    iVar11 = (int)((ulonglong)uVar16 >> 0x20);
    uVar15 = (uint)uVar16;
    uVar16 = FUN_0002c9c0(SUB84(dVar14, 0), (int)((ulonglong)dVar14 >> 0x20));
    uVar4 = (uint)uVar16 ^ -uVar15;
    uVar7 = uVar4 + uVar15;
    uVar9 = uVar7 + uVar3;
    iVar2 = clock_gettime(0, &local_3c);
    if (iVar2 < 0) {
        iVar2 = FUN_00013660();
    } else {
        if (trunc_os_clock != 0) {
            local_3c.tv_nsec =
                (long)(longlong)(sys_tick *
                                 (double)(longlong)(int)(longlong)(((double)(longlong)
                                                                        local_3c
                                                                            .tv_nsec *
                                                                    1e-09) /
                                                                   sys_tick) *
                                 1000000000.0);
        }
        uVar5 = local_3c.tv_nsec;
        iVar2 = local_3c.tv_sec;
        if (local_3c.tv_nsec < 0) {
            do {
                uVar5 = uVar5 + 1000000000;
                iVar8 = iVar2 + -1;
                iVar2 = iVar2 + -1;
            } while ((int)uVar5 < 0);
        } else {
            iVar8 = local_3c.tv_sec;
            if (999999999 < local_3c.tv_nsec) {
                uVar5 = local_3c.tv_nsec + 0xc4653600;
                bVar13 = SBORROW4(uVar5, 999999999);
                bVar12 = uVar5 != 999999999;
                if ((int)uVar5 < 1000000000) {
                    iVar8 = local_3c.tv_sec + 1;
                } else {
                    iVar8 = local_3c.tv_sec + 2;
                    uVar5 = 0x6c00;
                }
                if (bVar12 &&
                    (int)(local_3c.tv_nsec + 0x88ca6c01U) < 0 == bVar13) {
                    uVar5 = local_3c.tv_nsec + (uVar5 & 0xffff | 0x88ca0000);
                }
            }
        }
        uVar17 = VectorShiftRight(CONCAT44(uVar5, uVar5), 0x20);
        iVar2 = local_3c.tv_nsec + 500;
        uVar17 = VectorShiftLeft(uVar17, 0x20, 0x40, 0);
        uVar5 = FUN_0002c980((uint)uVar17 + 500000000,
                             (int)((ulonglong)uVar17 >> 0x20) +
                                 (uint)(0xe2329aff < (uint)uVar17),
                             1000000000, 0);
        local_44 = local_3c.tv_sec;
        local_40 = iVar2 / 1000;
        FUN_0001b624(
            local_58,
            iVar8 + ((uint)((ulonglong)uVar18 >> 0x20) ^ -(uint)(uVar6 != 0)) +
                (uint)CARRY4(uVar1, uVar6) + -0x7c558180 +
                ((uint)((ulonglong)uVar16 >> 0x20) ^
                 -(iVar11 + (uint)(uVar15 != 0))) +
                iVar11 + (uint)CARRY4(uVar4, uVar15) +
                (uint)CARRY4(uVar7, uVar3) + (uint)CARRY4(uVar5, uVar9),
            &local_50);
        local_48 =
            (int)((ulonglong)(uVar5 + uVar9) * 1000000 + 0x80000000 >> 0x20);
        local_4c = local_58[0];
        if (local_48 == 1000000) {
            local_4c = local_58[0] + 1;
            local_48 = 0;
        }
        iVar2 = FUN_0001a1cc(&local_4c, 0);
        if (iVar2 == 0) {
            sys_residual._0_4_ = 0;
            sys_residual._4_4_ = 0;
            DAT_000432c0 = uVar10;
            if (step_callback != (code *)0x0) {
                (*step_callback)();
            }
            FUN_00016608(local_4c, local_48, local_44, local_40);
            if (((enable_panic_check != 0) && (allow_panic != 0)) &&
                (FUN_0001abf8(3, "step_systime: allow_panic is TRUE!"),
                 allow_panic != 0)) {
                /* WARNING: Subroutine does not return */
                FUN_00020c38("systime.c", 0x24d, 2, "!allow_panic");
            }
            iVar2 = 1;
        } else {
            FUN_0001abf8(3, "step-systime: %m");
            iVar2 = enable_panic_check;
            if ((enable_panic_check != 0) &&
                (iVar2 = allow_panic, allow_panic != 0)) {
                FUN_0001abf8(3, "step_systime: allow_panic is TRUE!");
                iVar2 = 0;
            }
        }
        if (local_34 == __stack_chk_guard) {
            return;
        }
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar2);
}

void FUN_000174f8(byte *param_1, int *param_2)

{
    int iVar1;
    ushort **ppuVar2;
    char *pcVar3;
    char *pcVar4;
    byte *pbVar5;
    uint uVar6;
    uint uVar7;
    int iVar8;
    ushort uVar9;
    char *pcVar10;
    char *pcVar11;
    byte *pbVar12;
    ushort *puVar13;
    char *pcVar14;

    iVar1 = __stack_chk_guard;
    if (param_1 == (byte *)0x0) {
        /* WARNING: Subroutine does not return */
        FUN_00020c38("atolfp.c", 0x2b, 0, "str != ((void *)0)");
    }
    ppuVar2 = __ctype_b_loc();
    puVar13 = *ppuVar2;
    do {
        pbVar12 = param_1;
        pcVar10 = (char *)(uint)*pbVar12;
        uVar9 = puVar13[(int)pcVar10] & 0x2000;
        param_1 = pbVar12 + 1;
    } while ((puVar13[(int)pcVar10] & 0x2000) != 0);
    if (pcVar10 == (char *)0x2d) {
        pcVar10 = (char *)(uint)pbVar12[1];
        uVar9 = 1;
        pbVar12 = pbVar12 + 1;
    }
    if (pcVar10 == (char *)0x2b) {
        pcVar10 = (char *)(uint)pbVar12[1];
        pbVar12 = pbVar12 + 1;
    }
    if (pcVar10 == (char *)0x2e) {
    LAB_0001759c:
        pcVar11 = (char *)0x0;
        do {
            pcVar3 = strchr("0123456789", (int)pcVar10);
            if (pcVar3 == (char *)0x0) {
                uVar6 = (uint)*pbVar12;
                if ((uVar6 != 0) && (pcVar3 = (char *)(puVar13[uVar6] & 0x2000),
                                     (puVar13[uVar6] & 0x2000) == 0)) {
                    if (uVar6 != 0x2e)
                        goto LAB_0001773c;
                    pbVar12 = pbVar12 + 1;
                    pcVar10 = pcVar3;
                    goto LAB_00017630;
                }
                break;
            }
            pbVar12 = pbVar12 + 1;
            pcVar10 = (char *)(uint)*pbVar12;
            pcVar11 = pcVar3 + (int)pcVar11 * 10 + -0x2d574;
        } while (pcVar10 != (char *)0x0);
    } else {
        pcVar3 = (char *)(puVar13[(int)pcVar10] & 0x800);
        if ((puVar13[(int)pcVar10] & 0x800) == 0)
            goto LAB_0001773c;
        pcVar11 = pcVar10;
        if (pcVar10 != (char *)0x0)
            goto LAB_0001759c;
    }
    pcVar3 = (char *)0x0;
    goto joined_r0x00017718;
    while (true) {
        pcVar10 = pcVar10 + 1;
        pcVar3 = pcVar4 + (int)pcVar3 * 10 + -0x2d574;
        pbVar12 = pbVar5 + 1;
        if (pcVar10 == (char *)0x9)
            break;
    LAB_00017630:
        pbVar5 = pbVar12;
        uVar6 = (uint)*pbVar5;
        pcVar14 = pcVar3;
        if (uVar6 == 0) {
            if ((*puVar13 & 0x800) == 0)
                goto LAB_000176cc;
            goto LAB_000176a0;
        }
        pcVar4 = strchr("0123456789", uVar6);
        if (pcVar4 == (char *)0x0) {
            uVar7 = (uint)puVar13[uVar6];
            if ((puVar13[uVar6] & 0x800) == 0)
                goto LAB_000176bc;
            goto LAB_000176a0;
        }
    }
    pbVar12 = pbVar5 + 1;
    uVar7 = (uint)puVar13[*pbVar12];
    pbVar5 = pbVar5 + 1;
    if ((puVar13[*pbVar12] & 0x800) == 0) {
        pcVar14 = pcVar3;
        if (*pbVar12 != 0)
            goto LAB_000176bc;
    } else {
    LAB_000176a0:
        do {
            pbVar5 = pbVar5 + 1;
            uVar7 = (uint)puVar13[*pbVar5];
        } while ((puVar13[*pbVar5] & 0x800) != 0);
        pcVar14 = pcVar3;
        if (*pbVar5 != 0) {
        LAB_000176bc:
            pcVar3 = (char *)(uVar7 & 0x2000);
            if (pcVar3 == (char *)0x0)
                goto LAB_0001773c;
        }
    LAB_000176cc:
        pcVar3 = pcVar14;
        if (pcVar10 == (char *)0x0)
            goto joined_r0x00017718;
    }
    iVar8 = 0x20;
    uVar6 = 0x80000000;
    pcVar14 = (char *)0x0;
    pcVar10 = *(char **)(&DAT_0002d52c + (int)pcVar10 * 4);
    do {
        pcVar3 = (char *)((int)pcVar3 * 2);
        if (pcVar10 <= pcVar3) {
            pcVar14 = (char *)((uint)pcVar14 | uVar6);
            pcVar3 = pcVar3 + -(int)pcVar10;
        }
        iVar8 = iVar8 + -1;
        uVar6 = uVar6 >> 1;
    } while (iVar8 != 0);
    pcVar4 = (char *)((int)pcVar3 << 1);
    pcVar3 = pcVar14;
    if (pcVar10 < pcVar4) {
        pcVar3 = pcVar14 + 1;
    }
joined_r0x00017718:
    pcVar10 = pcVar3;
    if (uVar9 != 0) {
        pcVar10 = (char *)-(int)pcVar3;
        if (pcVar3 == (char *)0x0) {
            iVar8 = 1 - (int)pcVar11;
        } else {
            iVar8 = -(int)pcVar11;
        }
        pcVar11 = (char *)(iVar8 + -1);
    }
    pcVar3 = (char *)0x1;
    *param_2 = (int)pcVar11;
    param_2[1] = (int)pcVar10;
LAB_0001773c:
    if (iVar1 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pcVar3);
}

/* WARNING: Removing unreachable block (ram,0x00017888) */

void FUN_00017804(void)

{
    cache_keyid = 0;
    cache_type = 0;
    cache_flags = 0;
    cache_secret = 0;
    cache_secretsize = 0;
    cache_keyacclist = 0;
    return;
}

void FUN_000178ac(undefined4 param_1, undefined4 *param_2, undefined4 param_3)

{
    int iVar1;
    int iVar2;
    undefined4 *puVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined4 uVar6;

    iVar1 = __stack_chk_guard;
    puVar3 = (undefined4 *)FUN_00019a68(0, 0x24, 0);
    uVar6 = param_2[1];
    uVar4 = param_2[2];
    uVar5 = param_2[3];
    puVar3[1] = *param_2;
    iVar2 = __stack_chk_guard;
    puVar3[2] = uVar6;
    puVar3[3] = uVar4;
    puVar3[4] = uVar5;
    uVar5 = param_2[5];
    uVar4 = param_2[6];
    puVar3[5] = param_2[4];
    puVar3[6] = uVar5;
    puVar3[7] = uVar4;
    puVar3[8] = param_3;
    *puVar3 = param_1;
    if (iVar1 == iVar2) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_00017950(undefined4 *param_1)

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

void FUN_000179a8(int param_1)

{
    int iVar1;
    int iVar2;

    iVar1 = __stack_chk_guard;
    if (param_1 != 0) {
        do {
            iVar2 = FUN_00017950();
        } while (iVar2 != 0);
    }
    if (iVar1 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail(0);
}

void FUN_00017a04(int *param_1)

{
    int iVar1;
    int *piVar2;
    uint uVar3;
    int *piVar4;
    int iVar5;
    uint uVar6;
    int *piVar7;

    iVar1 = __stack_chk_guard;
    if (param_1 != (int *)0x0) {
        if (param_1[6] == cache_keyid) {
            FUN_00017804();
        }
        FUN_000179a8(param_1[4]);
        iVar5 = key_hash;
        uVar3 = param_1[6];
        uVar6 = (uint)authhashmask;
        piVar7 = (int *)(key_hash + (uVar6 & uVar3) * 4);
        if ((void *)param_1[3] != (void *)0x0) {
            memset((void *)param_1[3], 0, param_1[8]);
            free((void *)param_1[3]);
        }
        piVar2 = *(int **)(iVar5 + (uVar6 & uVar3) * 4);
        piVar4 = param_1;
        if (piVar2 == param_1) {
        LAB_00017ad4:
            *piVar7 = *piVar4;
        } else if (piVar2 != (int *)0x0) {
            piVar7 = piVar2;
            for (piVar4 = (int *)*piVar2; piVar4 != (int *)0x0;
                 piVar4 = (int *)*piVar4) {
                if (param_1 == piVar4)
                    goto LAB_00017ad4;
                piVar7 = piVar4;
            }
        }
        iVar5 = param_1[1];
        *(int *)(iVar5 + 8) = param_1[2];
        *(int *)(param_1[2] + 4) = iVar5;
        memset(param_1 + 3, 0, 0x1c);
        piVar7 = param_1;
        param_1[2] = (int)authfreekeys;
        authfreekeys = piVar7;
        authnumkeys = authnumkeys + -1;
        authnumfreekeys = authnumfreekeys + 1;
    }
    if (iVar1 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_00017b88(ushort *param_1, ushort *param_2, uint param_3)

{
    int iVar1;
    int iVar2;
    uint uVar3;
    uint uVar4;
    bool bVar5;

    iVar1 = __stack_chk_guard;
    if (param_1 == (ushort *)0x0) {
        bVar5 = false;
        goto LAB_00017be4;
    }
    uVar3 = (uint)*param_1;
    if (uVar3 != 0 && param_2 != (ushort *)0x0) {
        bVar5 = false;
        uVar4 = uVar3 - *param_2;
        if (uVar4 != 0) {
            uVar4 = 1;
        }
        if (*param_2 == 0) {
            uVar4 = uVar4 | 1;
        }
        if (uVar4 != 0)
            goto LAB_00017be4;
        if (uVar3 == 2) {
            param_1 = param_1 + 2;
            param_2 = param_2 + 2;
            if (0x1f < param_3) {
                param_3 = 0x20;
            }
        } else {
            if ((uVar3 != 10) ||
                (*(int *)(param_1 + 0xc) != *(int *)(param_2 + 0xc))) {
                bVar5 = false;
                goto LAB_00017be4;
            }
            param_1 = param_1 + 4;
            param_2 = param_2 + 4;
            if (0x7f < param_3) {
                param_3 = 0x80;
            }
        }
        uVar3 = param_3 >> 3;
        uVar4 = ~(0xffU >> (param_3 & 7)) & 0xff;
        if ((uVar3 == 0) ||
            (iVar2 = memcmp(param_1, param_2, uVar3), iVar2 == 0)) {
            if (uVar4 == 0) {
                bVar5 = true;
            } else {
                bVar5 = (uVar4 & (*(byte *)((int)param_1 + uVar3) ^
                                  *(byte *)((int)param_2 + uVar3))) == 0;
            }
            goto LAB_00017be4;
        }
    }
    bVar5 = false;
LAB_00017be4:
    if (iVar1 != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail(bVar5);
    }
    return;
}

void FUN_00017cbc(int *param_1, undefined4 param_2, int param_3)

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
            iVar2 = FUN_00017b88(param_1 + 1, param_2, param_1[8]);
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

void FUN_00017d44(void)

{
    int iVar1;
    uint uVar2;

    iVar1 = __stack_chk_guard;
    uVar2 = (uint)authhashbuckets;
    key_hash = (void *)FUN_00019a68(key_hash, uVar2 << 2, 0);
    memset(key_hash, 0, uVar2 << 2);
    key_listhead._8_4_ = key_listhead;
    key_listhead._4_4_ = key_listhead;
    if (iVar1 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_00017de0(int param_1)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;

    iVar1 = __stack_chk_guard;
    if (param_1 < 1) {
        param_1 = 0x10;
    }
    iVar2 = FUN_00019b30(0, param_1, 0x28);
    authnumfreekeys = param_1 + authnumfreekeys;
    iVar3 = param_1;
    iVar4 = iVar2;
    do {
        iVar3 = iVar3 + -1;
        *(int *)(iVar4 + 8) = authfreekeys;
        authfreekeys = iVar4;
        iVar4 = iVar4 + 0x28;
    } while (iVar3 != 0);
    authfreekeys = iVar2 + (param_1 + -1) * 0x28;
    if (iVar1 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_00017ea4(uint param_1, undefined2 param_2, undefined2 param_3,
                  undefined4 param_4, undefined4 param_5, undefined4 param_6,
                  undefined4 param_7)

{
    int iVar1;
    undefined4 *puVar2;
    int iVar3;
    uint uVar4;
    undefined4 *unaff_r9;
    undefined4 uVar5;
    bool bVar6;

    iVar3 = __stack_chk_guard;
    iVar1 = key_hash;
    uVar4 = (uint)authhashmask;
    if (authnumfreekeys < 1) {
        FUN_00017de0(0xffffffff);
    }
    puVar2 = authfreekeys;
    authnumfreekeys = authnumfreekeys + -1;
    bVar6 = authfreekeys != (undefined4 *)0x0;
    authfreekeys[3] = param_6;
    if (bVar6) {
        unaff_r9 = (undefined4 *)puVar2[2];
    }
    puVar2[4] = param_7;
    if (bVar6) {
        authfreekeys = unaff_r9;
    }
    uVar5 = *(undefined4 *)(iVar1 + (uVar4 & param_1) * 4);
    *(undefined2 *)(puVar2 + 7) = param_3;
    *puVar2 = uVar5;
    *(undefined2 *)(puVar2 + 9) = param_2;
    puVar2[8] = param_5;
    puVar2[6] = param_1;
    puVar2[5] = param_4;
    *(undefined4 **)(iVar1 + (uVar4 & param_1) * 4) = puVar2;
    uVar5 = key_listhead._4_4_;
    puVar2[2] = key_listhead;
    puVar2[1] = uVar5;
    uVar5 = key_listhead._4_4_;
    key_listhead._4_4_ = puVar2;
    *(undefined4 **)(uVar5 + 8) = puVar2;
    authnumkeys = authnumkeys + 1;
    if (iVar3 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_00017ff4(int param_1)

{
    size_t __n;
    void *pvVar1;
    int iVar2;
    uint uVar3;
    undefined4 *puVar4;
    int iVar5;
    uint uVar6;
    int iVar7;
    undefined4 *puVar8;
    int iVar9;

    iVar2 = __stack_chk_guard;
    uVar6 = authnumfreekeys + authnumkeys;
    if (0 < (int)(param_1 - uVar6)) {
        FUN_00017de0();
        uVar6 = authnumfreekeys + authnumkeys;
    }
    uVar6 = uVar6 >> 2;
    iVar9 = 5;
    iVar5 = 0;
    iVar7 = 0x10;
    uVar3 = 0xffffffff;
    do {
        uVar3 = uVar3 << iVar7;
        if ((uVar3 & uVar6) == 0) {
            uVar6 = uVar6 << iVar7;
        } else {
            iVar5 = iVar5 + iVar7;
        }
        iVar9 = iVar9 + -1;
        iVar7 = iVar7 >> 1;
    } while (iVar9 != 0);
    uVar6 = iVar5 + 1U & 0xffff;
    if (uVar6 < 4) {
        uVar6 = 4;
    }
    if (0xe < uVar6) {
        uVar6 = 0xf;
    }
    iVar7 = 1 << (uVar6 & 0xff);
    authhashbuckets = (short)iVar7;
    authhashmask = authhashbuckets - 1;
    __n = iVar7 << 2;
    key_hash = (void *)FUN_00019a68(key_hash, __n, 0, 0);
    memset(key_hash, 0, __n);
    if ((undefined1 *)key_listhead._8_4_ != key_listhead) {
        uVar6 = (uint)authhashmask;
        puVar8 = (undefined4 *)key_listhead._8_4_;
        do {
            pvVar1 = key_hash;
            puVar4 = (undefined4 *)puVar8[2];
            *puVar8 = *(undefined4 *)((int)key_hash + (puVar8[6] & uVar6) * 4);
            *(undefined4 **)((int)pvVar1 + (puVar8[6] & uVar6) * 4) = puVar8;
            puVar8 = puVar4;
        } while (puVar4 != (undefined4 *)key_listhead);
    }
    if (iVar2 != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail();
    }
    return;
}

/* WARNING: Removing unreachable block (ram,0x000181e8) */

void FUN_00018168(uint param_1)

{
    int *piVar1;

    for (piVar1 = *(int **)(key_hash + (authhashmask & param_1) * 4);
         (piVar1 != (int *)0x0 && (piVar1[6] != param_1));
         piVar1 = (int *)*piVar1) {
    }
    return;
}

void FUN_00018274(int param_1)

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
        iVar4 = FUN_00018168();
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

void FUN_000183e4(int param_1, uint param_2)

{
    int iVar1;
    int iVar2;

    iVar1 = __stack_chk_guard;
    iVar2 = FUN_00018168();
    if (iVar2 != 0 || param_2 != 0) {
        if (iVar2 == 0) {
            if (param_2 < 2) {
                iVar2 = 0;
            } else {
                iVar2 = param_2 + current_time;
            }
            FUN_00017ea4(param_1, 1, 0, iVar2, 0, 0, 0);
        } else {
            if (param_1 == cache_keyid) {
                FUN_00017804();
            }
            if (param_2 == 0) {
                if (iVar1 == __stack_chk_guard) {
                    FUN_00017a04();
                    return;
                }
                goto LAB_000184f4;
            }
            *(ushort *)(iVar2 + 0x24) = *(ushort *)(iVar2 + 0x24) | 1;
            if (param_2 < 2) {
                *(undefined4 *)(iVar2 + 0x14) = 0;
            } else {
                *(uint *)(iVar2 + 0x14) = param_2 + current_time;
            }
        }
    }
    if (iVar1 == __stack_chk_guard) {
        return;
    }
LAB_000184f4:
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_00018508(int param_1)

{
    int iVar1;
    ushort uVar2;
    int iVar3;

    iVar1 = __stack_chk_guard;
    if (param_1 == cache_keyid) {
        uVar2 = cache_flags & 1;
    } else {
        authkeyuncached = authkeyuncached + 1;
        iVar3 = FUN_00018168();
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

void FUN_000185cc(int param_1, undefined4 param_2)

{
    int iVar1;
    int iVar2;

    iVar1 = __stack_chk_guard;
    if (param_1 == cache_keyid) {
        if ((cache_flags & 1) != 0) {
            iVar2 = FUN_00017cbc(cache_keyacclist, param_2, 1);
            if (iVar2 != 0) {
                iVar2 = 1;
            }
            goto LAB_00018634;
        }
    } else {
        iVar2 = FUN_00018168();
        if (iVar2 == 0) {
            authkeynotfound = authkeynotfound + 1;
            iVar2 = 0;
            goto LAB_00018634;
        }
        authkeyuncached = authkeyuncached + 1;
        if ((*(ushort *)(iVar2 + 0x24) & 1) != 0) {
            iVar2 = FUN_00017cbc(*(undefined4 *)(iVar2 + 0x10), param_2, 1);
            if (iVar2 != 0) {
                iVar2 = 1;
            }
            goto LAB_00018634;
        }
    }
    iVar2 = 0;
LAB_00018634:
    if (iVar1 != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail(iVar2);
    }
    return;
}

void FUN_000186d4(int param_1, undefined2 param_2, void *param_3,
                  size_t param_4, int param_5)

{
    int iVar1;
    int iVar2;
    void *pvVar3;
    int iVar4;

    iVar1 = __stack_chk_guard;
    iVar2 = FUN_00018168();
    if ((iVar2 == 0) || (iVar4 = *(int *)(iVar2 + 0x18), iVar4 != param_1)) {
        pvVar3 = (void *)FUN_00019a68(0, param_4 + 1, 0);
        memcpy(pvVar3, param_3, param_4);
        FUN_00017ea4(param_1, 0, param_2, 0, param_4, pvVar3, param_5);
    } else {
        if (*(void **)(iVar2 + 0xc) != (void *)0x0) {
            memset(*(void **)(iVar2 + 0xc), 0, *(size_t *)(iVar2 + 0x20));
            free(*(void **)(iVar2 + 0xc));
        }
        pvVar3 = (void *)FUN_00019a68(0, param_4 + 1, 0);
        *(undefined2 *)(iVar2 + 0x1c) = param_2;
        *(size_t *)(iVar2 + 0x20) = param_4;
        *(void **)(iVar2 + 0xc) = pvVar3;
        if (*(int *)(iVar2 + 0x10) != param_5) {
            FUN_000179a8(*(int *)(iVar2 + 0x10));
            pvVar3 = *(void **)(iVar2 + 0xc);
            *(int *)(iVar2 + 0x10) = param_5;
        }
        memcpy(pvVar3, param_3, param_4);
        if (iVar4 == cache_keyid) {
            if (iVar1 == __stack_chk_guard) {
                FUN_00017804();
                return;
            }
            goto LAB_00018820;
        }
    }
    if (iVar1 == __stack_chk_guard) {
        return;
    }
LAB_00018820:
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_00018830(void)

{
    int iVar1;
    undefined4 uVar2;
    undefined1 *puVar3;
    undefined1 *puVar4;

    iVar1 = __stack_chk_guard;
    puVar3 = (undefined1 *)key_listhead._8_4_;
    if ((undefined1 *)key_listhead._8_4_ != key_listhead) {
    LAB_000188b0:
        do {
            puVar4 = *(undefined1 **)(puVar3 + 8);
            if (*(uint *)(puVar3 + 0x18) < 0x10000) {
                if ((*(ushort *)(puVar3 + 0x24) & 1) == 0) {
                    FUN_00017a04(puVar3);
                    puVar3 = puVar4;
                    if (puVar4 == key_listhead)
                        break;
                    goto LAB_000188b0;
                }
                if (*(void **)(puVar3 + 0xc) != (void *)0x0) {
                    memset(*(void **)(puVar3 + 0xc), 0,
                           *(size_t *)(puVar3 + 0x20));
                    free(*(void **)(puVar3 + 0xc));
                    *(undefined4 *)(puVar3 + 0xc) = 0;
                }
                uVar2 = FUN_000179a8(*(undefined4 *)(puVar3 + 0x10));
                *(undefined4 *)(puVar3 + 0x20) = 0;
                *(undefined4 *)(puVar3 + 0x14) = 0;
                *(undefined4 *)(puVar3 + 0x10) = uVar2;
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

void FUN_00018908(void)

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
                FUN_00017a04();
                authkeyexpired = authkeyexpired + 1;
                if (puVar3 == key_listhead)
                    goto LAB_00018994;
            }
        } while (puVar3 != key_listhead);
    }
LAB_00018994:
    if (iVar2 != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail();
    }
    return;
}

void FUN_000189c4(uint param_1, int param_2, uint param_3)

{
    uint uVar1;
    uint uVar2;
    uint uVar3;
    uint uVar4;
    int iVar5;
    int iVar6;
    bool bVar7;

    iVar5 = __stack_chk_guard;
    bVar7 = param_1 != 0;
    uVar1 = param_1 >> 8;
    uVar2 = param_1 >> 0x10;
    uVar3 = param_1 >> 0x18;
    uVar4 = param_1 << 0x18;
    if (!bVar7) {
        param_1 = 4;
    }
    authencryptions = authencryptions + 1;
    *(uint *)(param_2 + (param_3 & 0xfffffffc)) =
        uVar4 | (uVar1 & 0xff) << 0x10 | (uVar2 & 0xff) << 8 | uVar3;
    if (bVar7) {
        iVar6 = FUN_00018274(param_1);
        if (iVar6 != 0) {
            FUN_000234a0(cache_type, cache_secret, cache_secretsize, param_2,
                         param_3);
        }
    }
    if (iVar5 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_00018a90(int param_1, undefined4 param_2, undefined4 param_3,
                  uint param_4)

{
    int iVar1;
    undefined4 uVar2;
    int iVar3;

    iVar1 = __stack_chk_guard;
    authdecryptions = authdecryptions + 1;
    if ((param_1 == 0) || (iVar3 = FUN_00018274(), iVar3 == 0 || param_4 < 4)) {
        uVar2 = 0;
    } else {
        uVar2 = FUN_00023540(cache_type, cache_secret, cache_secretsize,
                             param_2, param_3, param_4);
    }
    if (iVar1 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
}

void FUN_00018b58(undefined4 *param_1)

{
    byte bVar1;
    int iVar2;
    byte *pbVar3;
    byte *pbVar4;
    uint uVar5;
    byte *pbVar6;
    byte *pbVar7;

    iVar2 = __stack_chk_guard;
    pbVar3 = (byte *)*param_1;
    uVar5 = (uint)*pbVar3;
    if (uVar5 == 0x20 || uVar5 == 9) {
        do {
            pbVar3 = pbVar3 + 1;
            uVar5 = (uint)*pbVar3;
        } while (uVar5 == 0x20 || uVar5 == 9);
    }
    pbVar7 = (byte *)(uVar5 & 0xdf);
    if (pbVar7 != (byte *)0x0) {
        if ((1 < uVar5 - 9) && (pbVar6 = pbVar3, uVar5 != 0x23)) {
            do {
                pbVar4 = pbVar6 + 1;
                bVar1 = *pbVar4;
                if (bVar1 == 10 || bVar1 == 0) {
                    pbVar7 = (byte *)0x0;
                    if (pbVar3 == pbVar4)
                        goto LAB_00018c1c;
                    if (bVar1 != 0x20 && bVar1 != 9)
                        goto LAB_00018c08;
                LAB_00018c3c:
                    pbVar6 = pbVar6 + 2;
                    *pbVar4 = 0;
                    goto LAB_00018c14;
                }
                if (bVar1 == 0x20 || bVar1 == 9) {
                    pbVar7 = (byte *)0x0;
                    if (pbVar3 != pbVar4)
                        goto LAB_00018c3c;
                    goto LAB_00018c1c;
                }
                pbVar6 = pbVar4;
            } while (bVar1 != 0x23);
            if (pbVar3 != pbVar4) {
            LAB_00018c08:
                *pbVar4 = 0;
                pbVar6 = pbVar4;
            LAB_00018c14:
                *param_1 = pbVar6;
                pbVar7 = pbVar3;
                goto LAB_00018c1c;
            }
        }
        pbVar7 = (byte *)0x0;
    }
LAB_00018c1c:
    if (iVar2 != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail(pbVar7);
    }
    return;
}

void FUN_00018c70(uint *param_1, undefined4 param_2, undefined4 param_3,
                  undefined4 param_4)

{
    uint uVar1;
    uint uVar2;
    undefined4 uStack_8;
    undefined4 uStack_4;

    uVar1 = __stack_chk_guard;
    uVar2 = __stack_chk_guard;
    uStack_8 = param_3;
    uStack_4 = param_4;
    if (param_1 != (uint *)0x0) {
        uVar2 = *param_1 + 1;
        *param_1 = uVar2;
        if (5 < uVar2)
            goto LAB_00018cc4;
    }
    FUN_0001ac80(3, param_2, &uStack_8, uVar2, &uStack_8);
LAB_00018cc4:
    if (uVar1 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_00018cf0(void *param_1)

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
    memset(param_1, 0, *(ushort *)((int)param_1 + 0xe) + 0x14);
    if (iVar1 != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail();
    }
    free(param_1);
    return;
}

void FUN_00018d78(char *param_1)

{
    FILE *__stream;
    char *pcVar1;
    uint uVar2;
    int iVar3;
    EVP_MD *pEVar4;
    size_t __n;
    __int32_t **pp_Var5;
    int *piVar6;
    char *pcVar7;
    char *pcVar8;
    ushort **ppuVar9;
    undefined4 uVar10;
    undefined1 *extraout_r2;
    undefined1 *puVar11;
    byte *pbVar12;
    undefined1 *puVar13;
    uint uVar14;
    byte *pbVar15;
    uint uVar16;
    __int32_t *p_Var17;
    uint uVar18;
    bool bVar19;
    int local_290;
    int *local_284;
    char *local_270;
    uint local_26c;
    short local_268[14];
    undefined1 local_24c[32];
    char acStack_22c[512];
    int local_2c;
    undefined1 auStack_28[4];

    local_2c = __stack_chk_guard;
    __stream = fopen64(param_1, "r");
    if (__stream != (FILE *)0x0) {
        if (ssl_init_done == 0) {
            FUN_000202c4();
        }
        local_26c = 0;
        local_284 = (int *)0x0;
    LAB_00018e14:
        do {
            local_270 = fgets(acStack_22c, 0x200, __stream);
            if ((local_270 == (char *)0x0) || (0xf < local_26c))
                goto LAB_00019198;
            pcVar1 = (char *)FUN_00018b58(&local_270);
            if (pcVar1 != (char *)0x0) {
                uVar2 = strtol(pcVar1, (char **)0x0, 10);
                if (uVar2 == 0) {
                    FUN_00018c70(&local_26c,
                                 "authreadkeys: cannot change key %s", pcVar1);
                } else if (uVar2 < 0x10000) {
                    iVar3 = FUN_00018b58(&local_270);
                    if (iVar3 == 0) {
                        FUN_00018c70(&local_26c,
                                     "authreadkeys: no key type for key %d",
                                     uVar2);
                    } else {
                        local_290 = FUN_0002051c(iVar3, 0);
                        if (local_290 == 0) {
                            FUN_00018c70(
                                0, "authreadkeys: invalid type for key %d",
                                uVar2);
                            pcVar1 = (char *)FUN_00018b58(&local_270);
                        } else {
                            if (local_290 != 0x37e) {
                                pcVar1 = OBJ_nid2sn(local_290);
                                pEVar4 = EVP_get_digestbyname(pcVar1);
                                if (pEVar4 == (EVP_MD *)0x0) {
                                    FUN_00018c70(
                                        0,
                                        "authreadkeys: no algorithm for key %d",
                                        uVar2);
                                    local_290 = 0;
                                }
                            }
                            pcVar1 = (char *)FUN_00018b58(&local_270);
                        }
                        if (pcVar1 == (char *)0x0) {
                            FUN_00018c70(&local_26c,
                                         "authreadkeys: no key for key %d",
                                         uVar2);
                        } else {
                            __n = strlen(pcVar1);
                            if (__n < 0x15) {
                                piVar6 = (int *)FUN_00019a68(0, __n + 0x14, 0);
                                piVar6[2] = uVar2;
                                *(undefined2 *)(piVar6 + 3) =
                                    (undefined2)local_290;
                                *(short *)((int)piVar6 + 0xe) = (short)__n;
                                piVar6[1] = 0;
                                memcpy(piVar6 + 4, pcVar1, __n);
                            } else {
                                pbVar15 = (byte *)(pcVar1 + -1);
                                uVar18 = 0;
                                if (0x3f < __n) {
                                    __n = 0x40;
                                }
                                pp_Var5 = __ctype_tolower_loc();
                                p_Var17 = *pp_Var5;
                                do {
                                    pbVar15 = pbVar15 + 1;
                                    pcVar1 = strchr("0123456789abcdef",
                                                    p_Var17[*pbVar15]);
                                    if (pcVar1 == (char *)0x0) {
                                        if (uVar18 < __n) {
                                            FUN_00018c70(
                                                &local_26c,
                                                "authreadkeys: invalid hex "
                                                "digit for key %d",
                                                uVar2);
                                            goto LAB_00018e14;
                                        }
                                        break;
                                    }
                                    bVar19 = (uVar18 & 1) == 0;
                                    puVar11 = extraout_r2;
                                    if (!bVar19) {
                                        puVar11 = auStack_28 + (uVar18 >> 1);
                                    }
                                    puVar13 = auStack_28;
                                    if (bVar19) {
                                        puVar13 = puVar13 + (uVar18 >> 1);
                                    }
                                    uVar18 = uVar18 + 1;
                                    if (bVar19) {
                                        puVar13[-0x224] =
                                            (char)(((uint)(pcVar1 + -0x2d580) &
                                                    0xff)
                                                   << 4);
                                    } else {
                                        puVar11[-0x224] =
                                            (byte)(pcVar1 + -0x2d580) |
                                            puVar11[-0x224];
                                    }
                                } while (uVar18 != __n);
                                uVar18 = __n >> 1;
                                piVar6 =
                                    (int *)FUN_00019a68(0, uVar18 + 0x14, 0);
                                *(undefined2 *)(piVar6 + 3) =
                                    (undefined2)local_290;
                                piVar6[2] = uVar2;
                                *(short *)((int)piVar6 + 0xe) = (short)uVar18;
                                piVar6[1] = 0;
                                memcpy(piVar6 + 4, local_24c, uVar18);
                            }
                            pcVar1 = (char *)FUN_00018b58(&local_270);
                            while (pcVar1 != (char *)0x0) {
                                pcVar7 = strchr(pcVar1, 0x2c);
                                if (pcVar7 != (char *)0x0) {
                                    *pcVar7 = '\0';
                                }
                                pcVar8 = strchr(pcVar1, 0x2f);
                                if (pcVar8 == (char *)0x0) {
                                    iVar3 = FUN_00019f50(pcVar1, 0, local_268);
                                    if (iVar3 != 0) {
                                    LAB_00019114:
                                        uVar18 = 0xffffffff;
                                        goto LAB_000190e4;
                                    }
                                LAB_00019154:
                                    FUN_00018c70(&local_26c,
                                                 "authreadkeys: invalid IP "
                                                 "address <%s> for key %d",
                                                 pcVar1, uVar2);
                                } else {
                                    uVar16 = (uint)(byte)pcVar8[1];
                                    uVar18 = 0;
                                    pbVar15 = (byte *)(pcVar8 + 1);
                                    *pcVar8 = '\0';
                                    if (uVar16 == 0) {
                                        iVar3 =
                                            FUN_00019f50(pcVar1, 0, local_268);
                                        if (iVar3 != 0) {
                                            uVar18 = 0;
                                            goto LAB_000190e4;
                                        }
                                        goto LAB_00019154;
                                    }
                                    ppuVar9 = __ctype_b_loc();
                                    pbVar12 = pbVar15;
                                    do {
                                        uVar14 = (((*ppuVar9)[uVar16] ^ 0x800)
                                                  << 0x14) >>
                                                 0x1f;
                                        if (1000 < uVar18) {
                                            uVar14 = 1;
                                        }
                                        if (uVar14 != 0) {
                                            FUN_00018c70(
                                                &local_26c,
                                                "authreadkeys: Invalid "
                                                "character in subnet "
                                                "specification for <%s/%s> in "
                                                "key %d",
                                                pbVar12, pbVar15, uVar2);
                                            goto LAB_00019054;
                                        }
                                        iVar3 = uVar16 - 0x30;
                                        pbVar12 = pbVar12 + 1;
                                        uVar16 = (uint)*pbVar12;
                                        uVar18 = iVar3 + uVar18 * 10;
                                    } while (uVar16 != 0);
                                    iVar3 = FUN_00019f50(pcVar1, 0, local_268);
                                    if (iVar3 == 0)
                                        goto LAB_00019154;
                                    if (uVar18 == 0xffffffff)
                                        goto LAB_00019114;
                                    if (local_268[0] == 2) {
                                        if (0x20 < uVar18)
                                            goto LAB_000190cc;
                                    } else if (local_268[0] == 10 &&
                                               0x80 < uVar18) {
                                    LAB_000190cc:
                                        FUN_00018c70(
                                            0,
                                            "authreadkeys: excessive subnet "
                                            "mask <%s/%s> for key %d",
                                            pcVar1, pbVar15, uVar2);
                                    }
                                LAB_000190e4:
                                    iVar3 = FUN_000178ac(piVar6[1], local_268,
                                                         uVar18);
                                    piVar6[1] = iVar3;
                                }
                            LAB_00019054:
                                if (pcVar7 == (char *)0x0)
                                    break;
                                pcVar1 = pcVar7 + 1;
                            }
                            if (local_290 == 0) {
                                FUN_00018cf0(piVar6);
                            } else {
                                *piVar6 = (int)local_284;
                                local_284 = piVar6;
                            }
                        }
                    }
                } else {
                    FUN_00018c70(
                        &local_26c,
                        "authreadkeys: key %s > %d reserved for Autokey",
                        pcVar1, 0xffff);
                }
            }
        } while (true);
    }
    FUN_0001abf8(3, "authreadkeys: file \'%s\': %m", param_1);
    uVar10 = 0;
LAB_000191fc:
    if (local_2c == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar10);
LAB_00019198:
    fclose(__stream);
    if (local_26c == 0) {
        FUN_00018830();
        while (local_284 != (int *)0x0) {
            piVar6 = (int *)*local_284;
            FUN_000186d4(local_284[2], *(undefined2 *)(local_284 + 3),
                         local_284 + 4, *(undefined2 *)((int)local_284 + 0xe),
                         local_284[1]);
            local_284[1] = 0;
            FUN_00018cf0(local_284);
            local_284 = piVar6;
        }
        uVar10 = 1;
    } else {
        if (local_26c < 0x10) {
            pcVar1 = "";
        } else {
            pcVar1 = " (emergency break)";
        }
        FUN_0001abf8(3,
                     "authreadkeys: rejecting file \'%s\' after %u error(s)%s",
                     param_1, local_26c, pcVar1);
        while (local_284 != (int *)0x0) {
            local_284 = (int *)*local_284;
            FUN_00018cf0();
        }
        uVar10 = 0;
    }
    goto LAB_000191fc;
}

void FUN_0001939c(uint param_1, int param_2, int param_3, int param_4)

{
    int iVar1;
    char cVar2;
    int iVar3;
    char *pcVar4;
    char *pcVar5;
    byte *pbVar6;
    char *pcVar7;
    char *extraout_r1;
    char *pcVar8;
    char *pcVar9;
    uint uVar10;
    byte bVar12;
    char *pcVar13;
    char *__s;
    uint uVar14;
    char *pcVar15;
    bool bVar16;
    undefined4 local_34;
    undefined4 local_30;
    int local_2c;
    uint uVar11;

    iVar3 = lib_nextbuf;
    local_2c = __stack_chk_guard;
    iVar1 = lib_nextbuf * 0x80;
    __s = lib_stringbuf + iVar1;
    pcVar4 = (char *)memset(__s, 0, 0x80);
    bVar16 = param_1 >> 0x10 == 0;
    lib_nextbuf = iVar3 + 1U & 0xf;
    pcVar8 = extraout_r1;
    if (bVar16) {
        pcVar8 = (char *)&local_34;
    }
    local_34 = 0;
    if (bVar16) {
        pcVar4 = (char *)((int)&local_34 + 1);
    }
    local_30 = 0;
    if (!bVar16) {
        pcVar4 = (char *)((int)&local_34 + 1);
        pcVar8 = pcVar4;
        uVar14 = param_1 >> 0x10;
        do {
            uVar10 = (int)((ulonglong)uVar14 * 0xcccccccd >> 0x20) << 0xd;
            uVar11 = uVar10 >> 0x10;
            pcVar8 = pcVar8 + -1;
            *pcVar8 = (char)uVar14 + (char)(uVar10 >> 0x10) * -10;
            uVar14 = uVar11;
        } while (uVar11 != 0);
    }
    if (param_4 == 0) {
        pcVar7 = (char *)&local_34;
        pcVar15 = pcVar4;
        if (param_3 < 7) {
            pcVar13 = pcVar4;
            if (param_3 < 1)
                goto LAB_000194c8;
        } else {
            param_3 = 6;
        }
    } else {
        param_3 = (int)(short)((short)param_3 + 3);
        if (param_3 < 3) {
            pcVar7 = (char *)((int)&local_34 + 3);
            param_3 = 3;
            pcVar15 = (char *)&local_30;
        } else {
            pcVar7 = (char *)((int)&local_34 + 3);
            pcVar15 = (char *)&local_30;
            if (5 < param_3) {
                param_3 = 6;
            }
        }
    }
    pcVar13 = (char *)((int)&local_34 + (param_3 - 1U & 0xffff) + 2);
    pcVar9 = pcVar4;
    do {
        param_1 = (param_1 & 0xffff) * 10;
        pcVar5 = pcVar9 + 1;
        *pcVar9 = (char)(param_1 >> 0x10);
        pcVar9 = pcVar5;
        pcVar4 = pcVar15;
    } while (pcVar5 != pcVar13);
LAB_000194c8:
    if ((param_1 & 0x8000) != 0) {
        pbVar6 = (byte *)(pcVar13 + -1);
        bVar12 = pcVar13[-1] + 1;
        pcVar13[-1] = bVar12;
        while (9 < bVar12) {
            *pbVar6 = 0;
            pbVar6 = pbVar6 + -1;
            bVar12 = *pbVar6 + 1;
            *pbVar6 = bVar12;
        }
    }
    if (pcVar8 < pcVar7) {
        cVar2 = *pcVar8;
        while ((cVar2 == '\0' && (pcVar8 = pcVar8 + 1, pcVar8 != pcVar7))) {
            cVar2 = *pcVar8;
        }
    }
    pcVar15 = __s;
    if (param_2 != 0) {
        lib_stringbuf[iVar3 * 0x80] = 0x2d;
        pcVar15 = lib_stringbuf + iVar1 + 1;
    }
    if (pcVar8 < pcVar13) {
        do {
            pcVar9 = pcVar8 + 1;
            cVar2 = *pcVar8;
            pcVar7 = pcVar15;
            if (pcVar8 == pcVar4) {
                *pcVar15 = '.';
                pcVar7 = pcVar15 + 1;
            }
            pcVar15 = pcVar7 + 1;
            *pcVar7 = cVar2 + '0';
            pcVar8 = pcVar9;
        } while (pcVar9 != pcVar13);
    }
    iVar1 = __stack_chk_guard;
    *pcVar15 = '\0';
    if (local_2c != iVar1) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail(__s);
    }
    return;
}

/* WARNING: Removing unreachable block (ram,0x00019648) */

void FUN_000195f8(int param_1, undefined4 param_2)

{
    int iVar1;

    iVar1 = param_1 >> 0x1f;
    if (-iVar1 != 0) {
        param_1 = -param_1;
    }
    FUN_0001939c(param_1, -iVar1, param_2, 0);
    return;
}

void FUN_000196b0(uint param_1, uint param_2, int param_3, uint param_4,
                  int param_5)

{
    int iVar1;
    uint uVar2;
    uint uVar3;
    char cVar4;
    int iVar5;
    uint uVar6;
    int iVar7;
    int iVar8;
    char *pcVar9;
    int *piVar10;
    char *__s;
    int *piVar11;
    int iVar12;
    char *pcVar13;
    int *piVar14;
    int *piVar15;
    bool bVar16;
    undefined4 local_44;
    undefined4 local_40;
    undefined1 local_3c[4];
    undefined1 local_38[4];
    undefined4 local_34;
    undefined4 local_30;
    int local_2c[2];

    iVar8 = lib_nextbuf;
    local_2c[0] = __stack_chk_guard;
    iVar1 = lib_nextbuf * 0x80;
    __s = lib_stringbuf + iVar1;
    memset(__s, 0, 0x80);
    lib_nextbuf = iVar8 + 1U & 0xf;
    local_44 = 0;
    local_40 = 0;
    local_3c = (undefined1[4])0x0;
    local_38 = (undefined1[4])0x0;
    local_34 = 0;
    local_30 = 0;
    piVar10 = (int *)(local_3c + 2);
    piVar14 = piVar10;
    if (param_1 != 0) {
        iVar12 = 10;
        do {
            iVar12 = iVar12 + -1;
            uVar3 = param_1 / 10;
            piVar14 = (int *)((int)piVar14 + -1);
            *(char *)piVar14 = (char)(param_1 % 10);
            param_1 = uVar3;
        } while ((uVar3 != 0 && iVar12 != 0) && (uVar3 == 0 || -1 < iVar12));
    }
    piVar11 = piVar10;
    if ((int)param_4 < 0) {
        if (param_5 != 0) {
            param_4 = 3;
            goto LAB_000198e0;
        }
    } else {
        piVar15 = piVar10;
        if (param_5 != 0) {
            param_4 = param_4 + 3;
        LAB_000198e0:
            piVar15 = (int *)(local_38 + 1);
        }
        if ((int)param_4 < 0xf) {
            bVar16 = (int)param_2 < 0;
            if (param_2 != 0) {
                bVar16 = (int)param_4 < 0;
            }
            if ((param_2 != 0 && param_4 != 0) && !bVar16)
                goto LAB_000197bc;
        } else {
            if (param_2 == 0) {
                piVar11 = local_2c;
                piVar10 = piVar15;
                goto LAB_00019804;
            }
            param_4 = 0xe;
        LAB_000197bc:
            do {
                iVar5 = (int)param_2 >> 0x1f;
                iVar7 = (int)param_2 >> 0x1f;
                uVar3 = param_2 * 2;
                iVar12 = param_2 << 2;
                uVar2 = param_2 * 8;
                param_2 = param_2 * 10;
                param_4 = param_4 - 1;
                uVar6 = param_2;
                if (param_2 != 0) {
                    uVar6 = param_4;
                }
                *(byte *)piVar10 =
                    (((byte)((uint)iVar12 >> 0x1f) |
                      (byte)((iVar5 * -2 | uVar3 >> 0x1f) << 1)) -
                     (char)iVar7) +
                    CARRY4(uVar2, uVar3);
                piVar11 = (int *)((int)piVar10 + 1);
                piVar10 = (int *)((int)piVar10 + 1);
            } while ((param_2 != 0 && param_4 != 0) && -1 < (int)uVar6);
        }
        piVar10 = piVar15;
        if (param_4 != 0) {
            piVar11 = (int *)((int)piVar11 + param_4);
            goto LAB_00019804;
        }
    }
    param_2 = param_2 >> 0x1f;
    if ((int)piVar11 - (int)&local_44 < 1) {
        param_2 = 0;
    }
    piVar15 = piVar11;
    if (param_2 != 0) {
        do {
            piVar15 = (int *)((int)piVar15 + -1);
            if ((char)(*(char *)piVar15 + '\x01') != '\n') {
                *(char *)piVar15 = *(char *)piVar15 + '\x01';
                break;
            }
            *(char *)piVar15 = '\0';
        } while (0 < (int)((int)piVar15 +
                           (((int)piVar11 - (int)&local_44) - (int)piVar11)));
    }
    if (piVar15 <= piVar14) {
        piVar14 = piVar15;
    }
LAB_00019804:
    if (piVar14 < piVar10) {
        cVar4 = (char)*piVar14;
        while (cVar4 == '\0') {
            piVar14 = (int *)((int)piVar14 + 1);
            if (piVar14 == piVar10)
                goto LAB_0001983c;
            cVar4 = *(char *)piVar14;
        }
    } else {
    LAB_0001983c:
        piVar14 = (int *)((int)piVar10 + -1);
    }
    pcVar13 = __s;
    if (param_3 != 0) {
        lib_stringbuf[iVar8 * 0x80] = 0x2d;
        pcVar13 = lib_stringbuf + iVar1 + 1;
    }
    if (piVar14 < piVar11) {
        do {
            piVar15 = (int *)((int)piVar14 + 1);
            iVar1 = *piVar14;
            pcVar9 = pcVar13;
            if (piVar14 == piVar10) {
                *pcVar13 = '.';
                pcVar9 = pcVar13 + 1;
            }
            pcVar13 = pcVar9 + 1;
            *pcVar9 = (char)iVar1 + '0';
            piVar14 = piVar15;
        } while (piVar15 != piVar11);
    }
    *pcVar13 = '\0';
    if (local_2c[0] != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail(__s);
    }
    return;
}

void FUN_00019980(int param_1, int param_2, undefined4 param_3)

{
    int iVar1;
    int iVar2;
    int iVar3;

    iVar2 = __stack_chk_guard;
    iVar1 = param_1 >> 0x1f;
    iVar3 = param_2;
    if (-iVar1 != 0) {
        iVar3 = -param_2;
        if (param_2 == 0) {
            param_1 = 1 - param_1;
        } else {
            param_1 = -param_1;
        }
        param_1 = param_1 + -1;
    }
    FUN_000196b0(param_1, iVar3, -iVar1, param_3, 0);
    if (iVar2 != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail();
    }
    return;
}

void FUN_00019a68(void *param_1, size_t param_2, uint param_3, int param_4)

{
    int iVar1;
    void *pvVar2;

    iVar1 = __stack_chk_guard;
    if (param_2 == 0) {
        pvVar2 = realloc(param_1, 1);
        if (pvVar2 == (void *)0x0) {
        LAB_00019af0:
            msyslog_term = 1;
            FUN_0001abf8(3, "fatal out of memory (%lu bytes)", param_2);
            /* WARNING: Subroutine does not return */
            exit(1);
        }
    } else {
        pvVar2 = realloc(param_1, param_2);
        if (pvVar2 == (void *)0x0)
            goto LAB_00019af0;
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

void FUN_00019b30(undefined4 param_1, uint param_2, undefined **param_3,
                  int param_4)

{
    int iVar1;
    undefined **ppuVar2;
    bool bVar3;
    bool bVar4;

    iVar1 = __stack_chk_guard;
    bVar4 = (undefined **)0xfffe < param_3;
    bVar3 = param_3 == (undefined **)0xffff;
    if (param_3 < (undefined **)0x10000) {
        bVar4 = 0xfffe < param_2;
        bVar3 = param_2 == 0xffff;
    }
    ppuVar2 = &__DT_PLTGOT;
    if ((param_2 != 0 && (bVar4 && !bVar3)) &&
        (ppuVar2 = (undefined **)FUN_0002c398(0xffffffff), ppuVar2 < param_3)) {
        FUN_0001abf8(3, "fatal allocation size overflow");
        /* WARNING: Subroutine does not return */
        exit(1);
    }
    if (iVar1 != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail(ppuVar2);
    }
    FUN_00019a68(param_1, (int)param_3 * param_2 + param_4, 0, 1);
    return;
}

void FUN_00019bf0(char *param_1)

{
    int iVar1;
    size_t sVar2;
    void *__dest;

    iVar1 = __stack_chk_guard;
    sVar2 = strlen(param_1);
    __dest = (void *)FUN_00019a68(0, sVar2 + 1, 0);
    memcpy(__dest, param_1, sVar2 + 1);
    if (iVar1 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_00019c60(char *param_1, int param_2)

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

void FUN_00019cf4(int param_1, undefined4 *param_2, byte *param_3)

{
    int iVar1;
    byte *pbVar2;
    byte *pbVar3;
    char *pcVar4;
    byte *pbVar5;
    uint uVar6;
    uint uVar7;

    iVar1 = __stack_chk_guard;
    DAT_00041030 = *param_2;
    ntp_optarg = (byte *)0x0;
    if (ntp_optind == 0) {
        ntp_optind = 1;
        DAT_00043300 = (byte *)0x0;
    LAB_00019e08:
        pbVar3 = DAT_00043300;
        if ((param_1 <= ntp_optind) ||
            ((pcVar4 = (char *)param_2[ntp_optind],
              *pcVar4 != '-' || (pcVar4[1] == '\0')))) {
            uVar7 = 0xffffffff;
            goto LAB_00019ddc;
        }
        ntp_optind = ntp_optind + 1;
        if ((pcVar4[1] == '-') && (pcVar4[2] == '\0')) {
            uVar7 = 0xffffffff;
            goto LAB_00019ddc;
        }
        DAT_00043300 = (byte *)(pcVar4 + 1);
        uVar7 = (uint)*DAT_00043300;
    } else if ((DAT_00043300 == (byte *)0x0) ||
               (uVar7 = (uint)*DAT_00043300, uVar7 == 0))
        goto LAB_00019e08;
    pbVar5 = DAT_00043300 + 1;
    pbVar3 = pbVar5;
    ntp_optopt = uVar7;
    if (param_3 == (byte *)0x0) {
    LAB_00019dc4:
        if (ntp_opterr != 0) {
            DAT_00043300 = pbVar5;
            FUN_00019c60(": unknown option -", uVar7);
            uVar7 = 0x3f;
            pbVar3 = DAT_00043300;
            goto LAB_00019ddc;
        }
    } else {
        uVar6 = (uint)*param_3;
        if (uVar6 != 0 && uVar6 != uVar7) {
            pbVar2 = param_3 + 1;
            do {
                param_3 = pbVar2;
                if (param_3 == (byte *)0x0)
                    goto LAB_00019dc4;
                uVar6 = (uint)*param_3;
                pbVar2 = param_3 + 1;
            } while (uVar6 != uVar7 && uVar6 != 0);
        }
        if ((uVar6 == 0) || (uVar7 == 0x3f || uVar7 == 0x3a))
            goto LAB_00019dc4;
        if (param_3[1] != 0x3a)
            goto LAB_00019ddc;
        if (DAT_00043300[1] != 0) {
            DAT_00043300 = (byte *)0x0;
            pbVar3 = DAT_00043300;
            ntp_optarg = pbVar5;
            goto LAB_00019ddc;
        }
        if (ntp_optind < param_1) {
            param_2 = param_2 + ntp_optind;
            ntp_optind = ntp_optind + 1;
            ntp_optarg = (byte *)*param_2;
            goto LAB_00019ddc;
        }
        if (ntp_opterr != 0) {
            DAT_00043300 = pbVar5;
            FUN_00019c60(": option requires argument -", uVar7);
            uVar7 = 0x3f;
            pbVar3 = DAT_00043300;
            goto LAB_00019ddc;
        }
    }
    uVar7 = 0x3f;
LAB_00019ddc:
    DAT_00043300 = pbVar3;
    if (iVar1 != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail(uVar7);
    }
    return;
}

void FUN_00019f50(char *param_1, uint param_2, undefined2 *param_3)

{
    size_t sVar1;
    int iVar2;
    undefined4 uVar3;
    char *pcVar4;
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
        FUN_00020c38("is_ip_address.c", 0x28, 0, "host != ((void *)0)");
    }
    if (param_3 == (undefined2 *)0x0) {
        /* WARNING: Subroutine does not return */
        FUN_00020c38("is_ip_address.c", 0x29, 0, "addr != ((void *)0)");
    }
    memset(param_3, 0, 0x1c);
    if (((param_2 & 0xfffffffd) == 0) &&
        (iVar2 = inet_pton(2, param_1, &local_c4), iVar2 == 1)) {
        *param_3 = 2;
        *(undefined4 *)(param_3 + 2) = local_c4;
        uVar3 = 1;
    } else {
        if ((param_2 == 10 || param_2 == 0) &&
            (sVar1 = strlen(param_1), sVar1 < 0x80)) {
            if (*param_1 == '[') {
                FUN_000208c4(acStack_9c, param_1 + 1, 0x80);
                pcVar4 = strchr(acStack_9c, 0x5d);
                if (pcVar4 != (char *)0x0) {
                    *pcVar4 = '\0';
                }
            } else {
                FUN_000208c4(acStack_9c, param_1, 0x80);
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
                *param_3 = 10;
                psVar5 = local_c0->ai_addr;
                uVar8 = *(undefined4 *)(psVar5[1].sa_data + 6);
                uVar3 = *(undefined4 *)(psVar5->sa_data + 10);
                uVar6 = *(undefined4 *)(psVar5 + 1);
                uVar7 = *(undefined4 *)(psVar5[1].sa_data + 2);
                *(undefined4 *)(param_3 + 4) =
                    *(undefined4 *)(psVar5->sa_data + 6);
                *(undefined4 *)(param_3 + 6) = uVar3;
                *(undefined4 *)(param_3 + 8) = uVar6;
                *(undefined4 *)(param_3 + 10) = uVar7;
                *(undefined4 *)(param_3 + 0xc) = uVar8;
                freeaddrinfo(local_c0);
                uVar3 = 1;
                goto LAB_0001a038;
            }
        }
        uVar3 = 0;
    }
LAB_0001a038:
    if (local_1c != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail(uVar3);
    }
    return;
}

void FUN_0001a12c(void)

{
    int iVar1;
    int iVar2;

    iVar1 = __stack_chk_guard;
    if (lib_inited == 0) {
        iVar2 = FUN_00021940();
        ipv4_works = (uint)(iVar2 == 0);
        iVar2 = FUN_00021998();
        ipv6_works = (uint)(iVar2 == 0);
        FUN_00016810();
        lib_inited = 1;
    }
    if (iVar1 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_0001a1cc(timeval *param_1, timezone *param_2)

{
    int *piVar1;
    uint uVar2;
    uint uVar3;
    int iVar4;
    int iVar5;
    timespec local_34;
    int local_2c;

    local_2c = __stack_chk_guard;
    if (0 < debug) {
        FUN_0001ab20("In ntp_set_tod\n");
    }
    uVar3 = DAT_00043308;
    if (DAT_00043308 < 2) {
        local_34.tv_sec = param_1->tv_sec;
        local_34.tv_nsec = param_1->tv_usec * 1000;
        piVar1 = __errno_location();
        *piVar1 = 0;
        iVar4 = clock_settime(0, &local_34);
        iVar5 = *piVar1;
        if (0 < debug) {
            FUN_0001ab20("ntp_set_tod: clock_settime: %d %m\n", iVar4);
            uVar3 = DAT_00043308;
        }
        if (uVar3 == 0 && iVar4 == 0) {
            DAT_00043308 = 1;
        } else if (iVar4 != 0)
            goto LAB_0001a234;
    LAB_0001a360:
        *piVar1 = iVar5;
        if (0 < debug) {
            iVar4 = 0;
            uVar3 = DAT_00043308;
        LAB_0001a260:
            FUN_0001ab20("ntp_set_tod: Final result: %s: %d %m\n",
                         *(undefined4 *)(set_tod_used + uVar3 * 4), iVar4);
        LAB_0001a27c:
            if (iVar4 != 0)
                goto LAB_0001a284;
        }
        if (set_tod_using != (code *)0x0) {
            (*set_tod_using)(*(undefined4 *)(set_tod_used + DAT_00043308 * 4));
            set_tod_using = (code *)0x0;
        }
        iVar4 = 0;
    } else {
        iVar5 = 0;
        iVar4 = -1;
    LAB_0001a234:
        uVar3 = DAT_00043308;
        uVar2 = DAT_00043308 & 0xfffffffd;
        if (uVar2 == 0) {
            local_34.tv_sec = uVar2;
            local_34.tv_nsec = uVar2;
            adjtime((timeval *)&local_34, (timeval *)0x0);
            piVar1 = __errno_location();
            *piVar1 = 0;
            iVar4 = settimeofday(param_1, param_2);
            iVar5 = *piVar1;
            if (0 < debug) {
                FUN_0001ab20("ntp_set_tod: settimeofday: %d %m\n", iVar4);
                uVar3 = DAT_00043308;
            }
            if (uVar3 == 0 && iVar4 == 0) {
                DAT_00043308 = 2;
            } else {
                uVar3 = DAT_00043308;
                if (iVar4 != 0)
                    goto LAB_0001a244;
            }
            goto LAB_0001a360;
        }
        piVar1 = __errno_location();
    LAB_0001a244:
        if (uVar3 == 3 || uVar3 == 0) {
            local_34.tv_sec = param_1->tv_sec;
            *piVar1 = 0;
            iVar4 = stime(&local_34.tv_sec);
            iVar5 = *piVar1;
            if (0 < debug) {
                FUN_0001ab20("ntp_set_tod: stime: %d %m\n", iVar4);
                uVar3 = DAT_00043308;
            }
            if (uVar3 == 0 && iVar4 == 0) {
                DAT_00043308 = 3;
            }
            *piVar1 = iVar5;
            uVar3 = DAT_00043308;
            if (0 < debug)
                goto LAB_0001a260;
            goto LAB_0001a27c;
        }
        *piVar1 = iVar5;
        if (0 < debug)
            goto LAB_0001a260;
    LAB_0001a284:
        *piVar1 = iVar5;
    }
    if (local_2c != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail(iVar4);
    }
    return;
}

void FUN_0001a4f4(int param_1, char *param_2, char *param_3)

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
            FUN_0001fa7c(param_2, param_3, "%s(%d): errno %d", "strerror_r",
                         param_1, *piVar3);
        }
    } else {
        bVar4 = param_2 <= pcVar2;
        if (pcVar2 != param_2) {
            bVar4 = param_3 <= pcVar2;
        }
        if (bVar4 && (pcVar2 != param_2 && pcVar2 != param_3)) {
            if (iVar1 == __stack_chk_guard) {
                FUN_000208c4(param_2, pcVar2, param_3);
                return;
            }
            goto LAB_0001a5b4;
        }
    }
    if (iVar1 == __stack_chk_guard) {
        return;
    }
LAB_0001a5b4:
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_0001a5c8(char *param_1, int param_2, char *param_3, undefined4 param_4)

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
                    goto LAB_0001a634;
                if (cVar1 == '%')
                    break;
                param_3 = param_3 + 1;
                *__dest = cVar1;
                __dest = __dest + 1;
                cVar1 = *param_3;
            }
            cVar1 = param_3[1];
            param_3 = param_3 + 2;
            if (cVar1 != 'm')
                break;
            FUN_0001a4f4(param_4, acStack_124, 0x100);
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
LAB_0001a634:
    *__dest = '\0';
    if (local_24 != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail();
    }
    return;
}

void FUN_0001a6d4(int param_1, char *param_2)

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
    if ((progname != DAT_00043310) &&
        (DAT_00043310 = pcVar4, pcVar2 = strrchr(progname, 0x2f),
         DAT_00043314 = pcVar4, pcVar2 != (char *)0x0)) {
        DAT_00043314 = pcVar2 + 1;
    }
    iVar5 = msyslog_term;
    if (syslogit == 0) {
        if (syslog_file != (FILE *)0x0) {
            bVar1 = true;
            goto LAB_0001a784;
        }
        iVar5 = 1;
        bVar1 = false;
    } else {
        bVar1 = false;
        __syslog_chk(param_1, 1, "%s", param_2);
    LAB_0001a784:
        if (!bVar1 && iVar5 == 0)
            goto LAB_0001a78c;
    }
    if (msyslog_include_timestamp == 0) {
        local_3c = 0;
    } else {
        local_3c = FUN_00023700();
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
            __fprintf_chk(__stream, 1, &DAT_0002d978, local_3c);
        }
        if (msyslog_term_pid != 0) {
            __fprintf_chk(__stream, 1, "%s[%d]: ", DAT_00043314, _Var6);
        }
        __fprintf_chk(__stream, 1, "%s%s", param_2, puVar7);
        fflush(__stream);
    }
    if (bVar1) {
        if (msyslog_include_timestamp != 0) {
            __fprintf_chk(syslog_file, 1, &DAT_0002d978, local_3c);
        }
        __fprintf_chk(syslog_file, 1, "%s[%d]: %s%s", DAT_00043314, _Var6,
                      param_2, puVar7);
        fflush(syslog_file);
    }
LAB_0001a78c:
    if (local_2c == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_0001a9b4(undefined4 param_1, undefined4 param_2, undefined4 param_3,
                  undefined4 param_4)

{
    int *piVar1;
    undefined1 auStack_11c[256];
    int local_1c;

    local_1c = __stack_chk_guard;
    piVar1 = __errno_location();
    FUN_0001a5c8(auStack_11c, 0x100, param_3, *piVar1);
    FUN_0001f0c4(param_1, param_2, auStack_11c, param_4);
    if (local_1c == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_0001aa3c(undefined4 param_1, undefined4 param_2, undefined4 param_3)

{
    int *piVar1;
    undefined1 auStack_11c[256];
    int local_1c;

    local_1c = __stack_chk_guard;
    piVar1 = __errno_location();
    FUN_0001a5c8(auStack_11c, 0x100, param_2, *piVar1);
    __vfprintf_chk(param_1, 1, auStack_11c, param_3);
    if (local_1c == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_0001ab20(undefined4 param_1, undefined4 param_2, undefined4 param_3,
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
    FUN_0001aa3c(stdout, param_1, &uStack_c, &stdout, &uStack_c);
    if (iVar1 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_0001abf8(undefined4 param_1, undefined4 param_2, undefined4 param_3,
                  undefined4 param_4)

{
    undefined1 auStack_424[1024];
    int local_24;
    undefined4 uStack_8;
    undefined4 uStack_4;

    local_24 = __stack_chk_guard;
    uStack_8 = param_3;
    uStack_4 = param_4;
    FUN_0001a9b4(auStack_424, 0x400, param_2, &uStack_8, &uStack_8);
    FUN_0001a6d4(param_1, auStack_424);
    if (local_24 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_0001ac80(undefined4 param_1, undefined4 param_2, undefined4 param_3)

{
    undefined1 auStack_414[1024];
    int local_14;

    local_14 = __stack_chk_guard;
    FUN_0001a9b4(auStack_414, 0x400, param_2, param_3);
    FUN_0001a6d4(param_1, auStack_414);
    if (local_14 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_0001acf4(char *param_1, int param_2, int param_3)

{
    int iVar1;
    char *pcVar2;
    int iVar3;

    iVar1 = __stack_chk_guard;
    iVar3 = param_2;
    if (param_2 != 0) {
        iVar3 = 1;
    }
    if (ntp_syslogmask != -1) {
        iVar3 = 0;
    }
    if (iVar3 != 0) {
        ntp_syslogmask = param_2;
    }
    pcVar2 = strrchr(param_1, 0x2f);
    if (pcVar2 != (char *)0x0) {
        param_1 = pcVar2 + 1;
    }
    progname = (char *)FUN_00019bf0(param_1);
    if (param_3 == 0) {
        iVar3 = DAT_00043318;
        if (DAT_00043318 != 0) {
            iVar3 = 0x18;
        }
    } else {
        DAT_00043318 = 1;
        iVar3 = 0x18;
    }
    openlog(progname, 9, iVar3);
    if (iVar1 != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail();
    }
    setlogmask(0xff);
    return;
}

void FUN_0001ade0(char *param_1, int param_2)

{
    int iVar1;
    char *pcVar2;
    size_t sVar3;
    size_t sVar4;
    FILE *__stream;
    int iVar5;
    char *__buf;
    char *pcVar6;
    char acStack_22d[513];
    int local_2c;

    local_2c = __stack_chk_guard;
    if (param_1 == (char *)0x0) {
        /* WARNING: Subroutine does not return */
        FUN_00020c38("msyslog.c", 0x1d5, 0, "fname != ((void *)0)");
    }
    if (((syslog_file != (FILE *)0x0) && (syslog_fname != (char *)0x0)) &&
        (iVar1 = strcmp(syslog_fname, param_1), iVar1 == 0))
        goto LAB_0001b074;
    iVar1 = strcmp(param_1, "stderr");
    if (iVar1 == 0) {
        iVar1 = 0x380;
    LAB_0001b0d0:
        __stream = (FILE *)**(undefined4 **)((int)&__DT_PLTGOT + iVar1);
        pcVar2 = (char *)FUN_00019bf0(param_1);
    } else {
        iVar1 = strcmp(param_1, "stdout");
        if (iVar1 == 0) {
            iVar1 = 0x36c;
            goto LAB_0001b0d0;
        }
        if (((syslog_fname == (char *)0x0) ||
             (iVar1 = strcmp(param_1, syslog_fname), pcVar6 = syslog_abs_fname,
              iVar1 != 0)) &&
            ((pcVar6 = param_1,
              param_1 != syslog_abs_fname && (*param_1 != '/')))) {
            __buf = acStack_22d + 1;
            pcVar2 = getcwd(__buf, 0x200);
            if (pcVar2 == (char *)0x0)
                goto LAB_0001af5c;
            sVar3 = strlen(__buf);
            if ((1 < sVar3) && (acStack_22d[sVar3] == '/')) {
                sVar3 = sVar3 - 1;
            }
            sVar4 = strlen(param_1);
            iVar1 = sVar3 + sVar4 + 2;
            pcVar2 = (char *)FUN_00019a68(0, iVar1, 0);
            FUN_0001fa7c(pcVar2, iVar1, "%.*s%c%s", sVar3, __buf, 0x2f,
                         param_1);
        } else {
        LAB_0001af5c:
            pcVar2 = (char *)FUN_00019bf0(pcVar6);
        }
        if (0 < debug) {
            FUN_0001ab20("attempting to open log %s\n", pcVar2);
        }
        __stream = fopen64(pcVar2, "a");
        param_1 = pcVar6;
    }
    if (__stream == (FILE *)0x0) {
        free(pcVar2);
        iVar1 = -1;
        goto LAB_0001b074;
    }
    if ((param_2 != 0) && ((syslogit != 0 || (param_1 != syslog_abs_fname)))) {
        FUN_0001abf8(5, "switching logging to file %s", pcVar2);
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
    if (param_1 == syslog_abs_fname) {
        free(pcVar2);
    } else {
        if (syslog_abs_fname == (char *)0x0) {
        LAB_0001b050:
            if (syslog_fname != (char *)0x0)
                goto LAB_0001b058;
        } else {
            if (syslog_abs_fname != syslog_fname) {
                free(syslog_abs_fname);
                goto LAB_0001b050;
            }
        LAB_0001b058:
            free(syslog_fname);
        }
        syslog_fname = (char *)FUN_00019bf0(param_1);
        syslog_abs_fname = pcVar2;
    }
    iVar1 = 0;
    syslogit = 0;
LAB_0001b074:
    if (local_2c == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1);
}

void FUN_0001b264(int *param_1, uint param_2)

{
    uint uVar1;
    int iVar2;
    uint uVar3;
    uint uVar4;
    uint uVar5;
    bool bVar6;

    iVar2 = __stack_chk_guard;
    uVar5 = (int)param_2 >> 0x1f;
    uVar1 = (uVar5 ^ param_2) / 0x3c;
    uVar3 = uVar1 ^ uVar5;
    param_1[2] = param_2 + uVar3 * -0x3c;
    uVar1 = uVar1 / 0x3c;
    uVar4 = uVar1 ^ uVar5;
    bVar6 = iVar2 == __stack_chk_guard;
    param_1[1] = uVar3 + uVar4 * -0x3c;
    uVar5 = uVar5 ^ uVar1 / 0x18;
    *param_1 = uVar4 + uVar5 * -0x18;
    if (bVar6) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
}

void FUN_0001b624(int *param_1, int param_2, uint *param_3)

{
    int iVar1;
    uint uVar2;
    uint uVar3;
    uint uVar4;
    bool bVar5;

    iVar1 = __stack_chk_guard;
    if (param_3 == (uint *)0x0) {
        uVar3 = (*DAT_00041048)(0);
    } else {
        uVar3 = *param_3;
    }
    uVar4 = uVar3 + 0x80000000;
    uVar2 = (0x7c558180 - uVar4) + param_2;
    bVar5 = iVar1 == __stack_chk_guard;
    *param_1 = uVar4 + uVar2;
    param_1[1] = (((int)uVar3 >> 0x1f) - (uint)(uVar3 < 0x80000000)) +
                 (uint)CARRY4(uVar4, uVar2);
    if (bVar5) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1);
}

void FUN_0001b78c(uint *param_1, uint *param_2)

{
    int iVar1;
    uint uVar2;
    uint uVar3;
    bool bVar4;

    iVar1 = __stack_chk_guard;
    uVar2 = param_2[1];
    if ((int)uVar2 < 0) {
        uVar2 = FUN_0002c980(~*param_2, ~uVar2, 0x15180, 0);
        uVar2 = ~uVar2;
    } else {
        uVar2 = FUN_0002c980(*param_2, uVar2, 0x15180, 0);
    }
    uVar3 = *param_2;
    bVar4 = iVar1 == __stack_chk_guard;
    *param_1 = uVar2;
    param_1[1] = uVar3 + uVar2 * -0x15180;
    if (bVar4) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1);
}

void FUN_0001b834(int *param_1, uint param_2, uint *param_3)

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
    if (0x3fffffff < (uVar7 ^ param_2)) {
        piVar3 = __errno_location();
        param_2 = ~uVar7;
        *piVar3 = 0x21;
    }
    uVar4 = param_2 << 2 | 3;
    uVar7 = uVar7 ^ (uVar4 ^ uVar7) / 0x23ab1;
    uVar5 = uVar4 + uVar7 * -0x23ab1 | 3;
    uVar4 = uVar5 / 0x5b5;
    if (param_3 != (uint *)0x0) {
        if ((uVar4 + 1 & 3) == 0) {
            if (uVar4 == 99) {
                uVar6 = (uint)((uVar7 + 1 & 3) == 0);
            } else {
                uVar6 = 1;
            }
        } else {
            uVar6 = 0;
        }
        *param_3 = uVar6;
    }
    iVar2 = __stack_chk_guard;
    *param_1 = uVar7 * 100 + uVar4;
    param_1[1] = uVar5 % 0x5b5 >> 2;
    if (iVar1 != iVar2) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail(param_1);
    }
    return;
}

/* WARNING: Removing unreachable block (ram,0x0001b9ec) */

void FUN_0001b940(int *param_1, int param_2, int param_3)

{
    int iVar1;
    int iVar2;
    int iVar3;

    if (param_3 == 0) {
        iVar2 = 0;
    } else {
        iVar2 = 0x1a;
    }
    if ((param_2 < 0) ||
        ((int)(uint) * (ushort *)((int)&DAT_0002daa4 + iVar2) <= param_2)) {
        param_2 = -1;
        iVar3 = -1;
    } else {
        iVar3 = (param_2 >> 5) + 1;
        iVar1 = iVar3 * 2;
        if (param_2 < (int)(uint) * (ushort *)(&DAT_0002da8c + iVar1 + iVar2)) {
            iVar1 = iVar1 + -2;
            iVar3 = param_2 >> 5;
        }
        param_2 = param_2 - (uint) * (ushort *)(&DAT_0002da8c + iVar1 + iVar2);
    }
    *param_1 = iVar3;
    param_1[1] = param_2;
    return;
}

void FUN_0001bae0(int param_1, int param_2)

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
    FUN_0001b834(&local_24, param_2 + -1, &local_28);
    *(int *)(param_1 + 0x1c) = local_20;
    *(int *)(param_1 + 0x14) = local_24 + -0x76b;
    FUN_0001b940(&local_24, local_20, local_28);
    bVar2 = local_1c == __stack_chk_guard;
    *(int *)(param_1 + 0x10) = local_24;
    *(int *)(param_1 + 0xc) = local_20 + 1;
    if (bVar2) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_28);
}

void FUN_0001bba0(int param_1)

{
    bool bVar1;
    undefined1 local_20[4];
    undefined1 uStack_1c;
    undefined1 local_18;
    int local_14;

    local_14 = __stack_chk_guard;
    FUN_0001b264(local_20);
    bVar1 = local_14 == __stack_chk_guard;
    *(undefined1 *)(param_1 + 6) = local_20[0];
    *(undefined1 *)(param_1 + 7) = uStack_1c;
    *(undefined1 *)(param_1 + 8) = local_18;
    if (bVar1) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_0001bd40(ushort *param_1)

{
    int iVar1;
    char cVar2;
    uint uVar3;
    int iVar4;
    undefined4 local_20;
    int local_1c;
    undefined4 local_18;
    int local_14;

    local_14 = __stack_chk_guard;
    FUN_0001b78c(&local_1c);
    iVar4 = local_1c;
    iVar1 = FUN_0001bba0(param_1, local_18);
    if (local_14 != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail();
    }
    local_14 = __stack_chk_guard;
    uVar3 = (iVar1 + iVar4 + 0xaf93b) % 7;
    cVar2 = (char)uVar3;
    if (6 < (uVar3 & 0xff)) {
        cVar2 = cVar2 + '\a';
    }
    *(char *)((int)param_1 + 9) = cVar2;
    FUN_0001b834(&local_1c, iVar1 + iVar4 + 0xaf93a, &local_20);
    param_1[1] = (short)local_18 + 1;
    if (local_1c + 1U >> 0x10 == 0) {
        iVar4 = -1;
    } else {
        iVar4 = 0;
    }
    *param_1 = (ushort)(local_1c + 1U) & (ushort)iVar4;
    FUN_0001b940(&local_1c, local_18, local_20);
    *(char *)((int)param_1 + 5) = (char)local_18 + '\x01';
    *(char *)(param_1 + 2) = (char)local_1c + '\x01';
    if (iVar4 == 0) {
        local_20 = 0xffffffff;
    }
    if (local_14 != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail(local_20);
    }
    return;
}

void FUN_0001d068(void)

{
    int iVar1;
    uint uVar2;
    int *piVar3;
    int iVar4;
    uint *puVar5;

    iVar1 = __stack_chk_guard;
    piVar3 = DAT_000410d0 + 1;
    iVar4 = *DAT_000410d0;
    uVar2 = *DAT_000410cc;
    puVar5 = DAT_000410cc + 1;
    *DAT_000410cc = iVar4 + uVar2;
    if (puVar5 < (uint *)0x410cc) {
        if ((int *)0x410cb < piVar3) {
            piVar3 = &DAT_00041050;
        }
    } else {
        puVar5 = &DAT_00041050;
    }
    DAT_000410cc = puVar5;
    DAT_000410d0 = piVar3;
    if (iVar1 != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail(iVar4 + uVar2 >> 1);
    }
    return;
}

undefined1 *FUN_0001d200(uint param_1)

{
    int iVar1;
    uint uVar2;
    undefined1 *__s;

    iVar1 = __stack_chk_guard;
    __s = lib_stringbuf + lib_nextbuf * 0x80;
    uVar2 = lib_nextbuf + 1;
    memset(__s, 0, 0x80);
    lib_nextbuf = uVar2 & 0xf;
    FUN_0001fa7c(__s, 0x80, "%lu.%lu.%lu.%lu", param_1 & 0xff,
                 param_1 >> 8 & 0xff, param_1 >> 0x10 & 0xff, param_1 >> 0x18);
    if (iVar1 == __stack_chk_guard) {
        return __s;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_0001d388(uint *param_1, int param_2)

{
    tm *ptVar1;
    uint uVar2;
    uint uVar3;
    int iVar4;
    int iVar5;
    bool bVar6;
    uint local_30;
    int local_2c;

    uVar2 = *param_1;
    uVar3 = param_1[1];
    local_2c = __stack_chk_guard;
    local_30 = uVar2;
    if (uVar3 == (int)uVar2 >> 0x1f) {
        iVar4 = 0;
    } else {
        iVar5 = 0;
        do {
            while (-1 < (int)uVar3) {
                iVar4 = iVar5 + 1;
                if (3 < iVar4)
                    goto LAB_0001d4e0;
                bVar6 = 0x34aadc7f < local_30;
                local_30 = local_30 + 0xcb552380;
                uVar3 = (uVar3 - 1) + (uint)bVar6;
                iVar5 = iVar4;
                if (uVar3 == (int)local_30 >> 0x1f)
                    goto LAB_0001d448;
            }
            iVar4 = iVar5 + -1;
            if (iVar5 + 2 < 0 != SCARRY4(iVar4, 3))
                goto LAB_0001d4e0;
            bVar6 = 0xcb55237f < local_30;
            local_30 = local_30 + 0x34aadc80;
            uVar3 = uVar3 + bVar6;
            iVar5 = iVar4;
        } while (uVar3 != (int)local_30 >> 0x1f);
    }
LAB_0001d448:
    if (param_2 != 0)
        goto LAB_0001d4a0;
    while (ptVar1 = gmtime((time_t *)&local_30), iVar5 = iVar4,
           ptVar1 == (tm *)0x0) {
        while (true) {
            uVar2 = local_30;
            if ((int)local_30 < 0) {
                iVar4 = iVar5 + -1;
                if (iVar5 + 2 < 0 != SCARRY4(iVar4, 3))
                    goto LAB_0001d4e0;
                local_30 = local_30 + 0x34aadc80;
                goto LAB_0001d448;
            }
            if (((int)local_30 < 0x34aadc80) || (iVar4 = iVar5 + 1, 3 < iVar4))
                goto LAB_0001d4e0;
            local_30 = local_30 + 0xcb552380;
            if (param_2 == 0)
                break;
        LAB_0001d4a0:
            ptVar1 = localtime((time_t *)&local_30);
            iVar5 = iVar4;
            if (ptVar1 != (tm *)0x0)
                goto LAB_0001d4b8;
        }
    }
LAB_0001d4b8:
    if ((iVar4 != 0) &&
        (iVar4 = iVar4 * 0x1c + ptVar1->tm_year, ptVar1->tm_year = iVar4,
         uVar2 = local_30, 0xc6 < iVar4 - 1U)) {
    LAB_0001d4e0:
        local_30 = uVar2;
        ptVar1 = (tm *)0x0;
    }
    if (local_2c != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail(ptVar1);
    }
    return;
}

/* WARNING: Removing unreachable block (ram,0x0001d6b4) */
/* WARNING: Removing unreachable block (ram,0x0001d7a8) */

void FUN_0001d768(int *param_1)

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
        FUN_000208c4(__s, "(no time)", 0x80);
    } else {
        uVar3 = (uint)param_1[1] / 0x418937;
        if (uVar3 == 1000) {
            iVar2 = iVar2 + 1;
            uVar3 = 0;
        }
        FUN_0001b624(&local_40, iVar2, 0);
        local_38 = local_40;
        uStack_34 = uStack_3c;
        puVar1 = (undefined4 *)FUN_0001d388(&local_38, 1);
        if (puVar1 == (undefined4 *)0x0) {
            FUN_0001bd40(local_30, &local_38);
            FUN_0001fa7c(__s, 0x80,
                         "%08lx.%08lx [%s, %s %2d %4d %2d:%02d:%02d.%03u UTC]",
                         *param_1, param_1[1],
                         *(undefined4 *)(daynames + (uint)local_27 * 4),
                         *(undefined4 *)(months + (local_2c - 1) * 4), local_2b,
                         local_30[0], local_2a, local_29, local_28, uVar3);
        } else {
            FUN_0001fa7c(
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

/* WARNING: Removing unreachable block (ram,0x0001d8b0) */

void FUN_0001d86c(void)

{
    return;
}

/* WARNING: Removing unreachable block (ram,0x0001d904) */

void FUN_0001d8c0(void)

{
    return;
}

void FUN_0001d9bc(int param_1)

{
    int iVar1;
    int *piVar2;
    int iVar3;
    int *piVar4;

    iVar1 = __stack_chk_guard;
    iVar3 = DAT_00043334;
    DAT_0004332c = 0;
    DAT_00043324 = 0;
    DAT_00043330 = 0;
    DAT_00043328 = 0;
    DAT_00043334 = 0;
    param_1 = param_1 + iVar3;
    piVar2 = (int *)FUN_00019b30(0, param_1, 0x8a4, 0);
    if (0 < param_1) {
        iVar3 = 0;
        piVar4 = piVar2;
        do {
            iVar3 = iVar3 + 1;
            DAT_00043324 = DAT_00043324 + 1;
            *piVar4 = (int)DAT_00043338;
            DAT_0004332c = DAT_0004332c + 1;
            DAT_00043338 = piVar4;
            piVar4 = piVar4 + 0x229;
        } while (param_1 != iVar3);
        DAT_00043338 = piVar2 + param_1 * 0x229 + -0x229;
    }
    DAT_00043330 = DAT_00043330 + 1;
    if (iVar1 != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail();
    }
    return;
}

void FUN_0001dabc(undefined4 *param_1)

{
    int iVar1;
    undefined4 *puVar2;
    int iVar3;

    iVar1 = __stack_chk_guard;
    if (param_1 != (undefined4 *)0x0) {
        iVar3 = param_1[0x228];
        param_1[0x228] = iVar3 + -1;
        if (iVar3 + -1 != 0) {
            FUN_0001abf8(3, "******** freerecvbuff non-zero usage: %d *******");
        }
        DAT_00043324 = DAT_00043324 + 1;
        puVar2 = param_1;
        *param_1 = DAT_00043338;
        DAT_00043338 = puVar2;
    }
    if (iVar1 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_0001db58(undefined4 *param_1)

{
    int iVar1;

    iVar1 = __stack_chk_guard;
    if (param_1 == (undefined4 *)0x0) {
        FUN_0001abf8(3, "add_full_recv_buffer received NULL buffer");
        return;
    }
    *param_1 = 0;
    if (DAT_00043340 == (undefined4 *)0x0) {
        DAT_00043340 = &DAT_0004333c;
        DAT_0004333c = param_1;
    } else {
        *(undefined4 **)*DAT_00043340 = param_1;
        DAT_00043340 = (undefined4 *)*DAT_00043340;
    }
    DAT_00043328 = DAT_00043328 + 1;
    if (iVar1 != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail();
    }
    return;
}

void FUN_0001dc1c(void)

{
    undefined4 *__s;
    int iVar1;

    iVar1 = __stack_chk_guard;
    __s = DAT_00043338;
    if (DAT_00043338 == (undefined4 *)0x0) {
        DAT_00043334 = DAT_00043334 + 1;
    } else {
        DAT_00043338 = (undefined4 *)*DAT_00043338;
        DAT_00043324 = DAT_00043324 + -1;
        memset(__s, 0, 0x8a4);
        __s[0x228] = 1;
    }
    if (iVar1 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail(__s);
}

/* WARNING: Removing unreachable block (ram,0x0001dd40) */

void FUN_0001dcb8(void)

{
    undefined4 *puVar1;
    undefined4 *puVar2;

    if (DAT_0004333c != (undefined4 *)0x0) {
        puVar2 = (undefined4 *)*DAT_0004333c;
        puVar1 = puVar2;
        if ((puVar2 != (undefined4 *)0x0) &&
            (puVar1 = DAT_00043340, DAT_00043340 == DAT_0004333c)) {
            puVar1 = &DAT_0004333c;
        }
        DAT_00043340 = puVar1;
        DAT_00043328 = DAT_00043328 + -1;
        DAT_0004333c = puVar2;
    }
    return;
}

void FUN_0001df00(int param_1, uint *param_2, uint param_3, char *param_4,
                  uint param_5, int param_6, uint param_7)

{
    int iVar1;
    uint uVar2;
    char cVar3;
    int iVar4;
    char *pcVar5;
    int iVar6;
    uint uVar7;
    uint uVar8;

    iVar1 = __stack_chk_guard;
    uVar2 = (uint)(param_6 == -1);
    if (param_4 == (char *)0x0) {
        param_4 = "(null)";
    }
    cVar3 = *param_4;
    if (cVar3 == '\0') {
        uVar7 = -(param_7 & 1);
        if (-1 < (int)param_5) {
            uVar7 = uVar7 ^ param_5;
        }
        iVar6 = uVar7 + (param_7 & 1);
        if (0 < iVar6)
            goto LAB_0001dfb0;
    } else {
        uVar7 = uVar2;
        if (0 < param_6) {
            uVar7 = 1;
        }
        if (uVar7 != 0) {
            uVar7 = 0;
            pcVar5 = param_4;
            do {
                pcVar5 = pcVar5 + 1;
                uVar7 = uVar7 + 1;
                if (*pcVar5 == '\0')
                    break;
                uVar8 = uVar2;
                if ((int)uVar7 < param_6) {
                    uVar8 = 1;
                }
            } while (uVar8 != 0);
        }
        uVar8 = -(param_7 & 1);
        if (-1 < (int)(param_5 - uVar7)) {
            uVar8 = uVar8 ^ param_5 - uVar7;
        }
        iVar6 = uVar8 + (param_7 & 1);
        if (0 < iVar6) {
        LAB_0001dfb0:
            uVar7 = *param_2;
            do {
                uVar8 = uVar7 + 1;
                if (uVar8 < param_3) {
                    *(undefined1 *)(param_1 + uVar7) = 0x20;
                    uVar8 = *param_2 + 1;
                }
                iVar6 = iVar6 + -1;
                *param_2 = uVar8;
                uVar7 = uVar8;
            } while (iVar6 != 0);
            cVar3 = *param_4;
            iVar6 = 0;
            if (cVar3 == '\0')
                goto LAB_0001e058;
        }
        do {
            iVar4 = param_6;
            if ((uVar2 == 0) && (iVar4 = param_6 + -1, param_6 < 1))
                break;
            uVar7 = *param_2 + 1;
            if (uVar7 < param_3) {
                *(char *)(param_1 + *param_2) = cVar3;
                uVar7 = *param_2 + 1;
            }
            *param_2 = uVar7;
            param_4 = param_4 + 1;
            cVar3 = *param_4;
            param_6 = iVar4;
        } while (cVar3 != '\0');
    }
    if (iVar6 != 0) {
        uVar2 = *param_2;
        do {
            uVar7 = uVar2 + 1;
            if (uVar7 < param_3) {
                *(undefined1 *)(param_1 + uVar2) = 0x20;
                uVar7 = *param_2 + 1;
            }
            iVar6 = iVar6 + 1;
            *param_2 = uVar7;
            uVar2 = uVar7;
        } while (iVar6 != 0);
    }
LAB_0001e058:
    if (iVar1 != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail();
    }
    return;
}

void FUN_0001e0ac(int param_1, uint *param_2, uint param_3, undefined4 param_4,
                  uint param_5, uint param_6, int param_7, int param_8,
                  uint param_9, uint param_10)

{
    byte bVar1;
    int iVar2;
    uint uVar3;
    uint uVar4;
    int extraout_r2;
    uint uVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    uint uVar8;
    char *pcVar9;
    char *pcVar10;
    uint uVar11;
    uint uVar12;
    undefined8 uVar13;
    longlong lVar14;
    uint local_8c;
    uint local_88;
    uint uStack_84;
    int local_6c;
    undefined1 local_68;
    char acStack_61[45];
    int local_34;

    local_8c = param_10 & 0x20;
    local_34 = __stack_chk_guard;
    if ((param_10 & 0x80) == 0) {
        uVar8 = (int)param_6 >> 0x1f;
        local_88 = (uVar8 ^ param_5) - uVar8;
        uStack_84 = (uVar8 ^ param_6) - (uVar8 + ((uVar8 ^ param_5) < uVar8));
        if ((int)param_6 < 0) {
            local_68 = 0x2d;
            local_6c = 1;
        } else if ((param_10 & 2) == 0) {
            if ((param_10 & 4) == 0) {
                local_6c = 0;
                local_68 = 0;
            } else {
                local_68 = 0x20;
                local_6c = 1;
            }
        } else {
            local_68 = 0x2b;
            local_6c = 1;
        }
    } else {
        local_88 = param_5;
        uStack_84 = param_6;
        local_6c = 0;
        local_68 = 0;
    }
    lVar14 = CONCAT44(uStack_84, local_88);
    if ((param_10 & 0x40) == 0) {
        pcVar10 = "0123456789abcdef";
    } else {
        pcVar10 = "0123456789ABCDEF";
    }
    uVar13 = VectorShiftRight(CONCAT44(param_7, param_7), 0x20);
    uVar8 = 0;
    pcVar9 = acStack_61 + 1;
    do {
        uVar3 = uVar8;
        uVar7 = (undefined4)((ulonglong)lVar14 >> 0x20);
        uVar6 = (undefined4)((ulonglong)uVar13 >> 0x20);
        uVar8 = uVar3 + 1;
        FUN_0002c980((int)lVar14, uVar7, (int)uVar13, uVar6);
        *pcVar9 = pcVar10[extraout_r2];
        lVar14 = FUN_0002c980((int)lVar14, uVar7, (int)uVar13, uVar6);
        pcVar9 = pcVar9 + 1;
    } while (uVar8 < 0x2b && lVar14 != 0);
    uVar5 = (param_10 << 0x1c) >> 0x1f;
    if (local_88 == 0 && uStack_84 == 0) {
        uVar5 = 0;
    }
    uVar11 = param_9;
    if (uVar5 != 0) {
        uVar5 = 0;
        if (param_7 == 8) {
            if ((int)param_9 <= (int)uVar8) {
                uVar11 = uVar3 + 2;
            }
        } else if (param_7 == 0x10) {
            if ((param_10 & 0x40) == 0) {
                uVar5 = 0x78;
            } else {
                uVar5 = 0x58;
            }
        }
    }
    if (local_8c != 0) {
        local_8c = uVar8;
        if (uVar8 == ((int)uVar8 / 3) * 3) {
            local_8c = uVar3;
        }
        local_8c = (int)local_8c / 3;
    }
    iVar2 = uVar11 - uVar8;
    if ((int)uVar11 < (int)uVar8) {
        uVar11 = uVar8;
    }
    uVar3 = iVar2 - local_8c;
    if (uVar5 == 0) {
        iVar2 = 0;
    } else {
        iVar2 = 2;
    }
    uVar11 = (((param_8 - local_8c) - uVar11) - local_6c) - iVar2;
    uVar3 = uVar3 & ~((int)uVar3 >> 0x1f);
    uVar11 = uVar11 & ~((int)uVar11 >> 0x1f);
    if ((param_10 & 1) == 0) {
        if (((uint)(param_9 == 0xffffffff) & param_10 >> 4) == 0) {
            if (0 < (int)uVar11) {
                uVar4 = *param_2;
                do {
                    uVar12 = uVar4 + 1;
                    if (uVar12 < param_3) {
                        *(undefined1 *)(param_1 + uVar4) = 0x20;
                        uVar12 = *param_2 + 1;
                    }
                    uVar11 = uVar11 - 1;
                    *param_2 = uVar12;
                    uVar4 = uVar12;
                } while (uVar11 != 0);
            }
        } else {
            uVar3 = uVar3 + uVar11;
            uVar11 = 0;
        }
    } else {
        uVar11 = -uVar11;
    }
    if (local_6c != 0) {
        uVar4 = *param_2 + 1;
        if (uVar4 < param_3) {
            *(undefined1 *)(param_1 + *param_2) = local_68;
            uVar4 = *param_2 + 1;
        }
        *param_2 = uVar4;
    }
    if (uVar5 != 0) {
        uVar4 = *param_2;
        uVar12 = uVar4 + 1;
        if (uVar12 < param_3) {
            *(undefined1 *)(param_1 + uVar4) = 0x30;
            uVar4 = *param_2;
            uVar12 = uVar4 + 1;
        }
        *param_2 = uVar12;
        if (uVar4 + 2 < param_3) {
            *(char *)(param_1 + uVar12) = (char)uVar5;
            uVar12 = *param_2;
        }
        *param_2 = uVar12 + 1;
    }
    if (uVar3 != 0) {
        uVar5 = *param_2;
        do {
            uVar4 = uVar5 + 1;
            if (uVar4 < param_3) {
                *(undefined1 *)(param_1 + uVar5) = 0x30;
                uVar4 = *param_2 + 1;
            }
            uVar3 = uVar3 - 1;
            *param_2 = uVar4;
            uVar5 = uVar4;
        } while (uVar3 != 0);
    }
    if (0 < (int)uVar8) {
        if ((int)local_8c < 1) {
            bVar1 = 0;
        } else {
            bVar1 = 1;
        }
        do {
            while (true) {
                uVar3 = *param_2;
                uVar8 = uVar8 - 1;
                uVar5 = uVar3 + 1;
                if (uVar5 < param_3) {
                    *(char *)(param_1 + uVar3) = (acStack_61 + 1)[uVar8];
                    uVar3 = *param_2;
                    uVar5 = uVar3 + 1;
                }
                *param_2 = uVar5;
                if (!(bool)(0 < (int)uVar8 & bVar1))
                    break;
                if (uVar8 == ((int)uVar8 / 3) * 3) {
                    if (uVar3 + 2 < param_3) {
                        *(undefined1 *)(param_1 + uVar5) = 0x2c;
                        uVar5 = *param_2;
                    }
                    *param_2 = uVar5 + 1;
                }
            }
        } while (0 < (int)uVar8);
    }
    if (uVar11 != 0) {
        uVar8 = *param_2;
        do {
            uVar3 = uVar8 + 1;
            if (uVar3 < param_3) {
                *(undefined1 *)(param_1 + uVar8) = 0x20;
                uVar3 = *param_2 + 1;
            }
            uVar11 = uVar11 + 1;
            *param_2 = uVar3;
            uVar8 = uVar3;
        } while (uVar11 != 0);
    }
    if (local_34 != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail();
    }
    return;
}

/* WARNING: Removing unreachable block (ram,0x0001e5e0) */
/* WARNING: Removing unreachable block (ram,0x0001e760) */
/* WARNING: Removing unreachable block (ram,0x0001e780) */
/* WARNING: Removing unreachable block (ram,0x0001e788) */
/* WARNING: Removing unreachable block (ram,0x0001e78c) */
/* WARNING: Removing unreachable block (ram,0x0001e790) */
/* WARNING: Removing unreachable block (ram,0x0001e5ec) */
/* WARNING: Removing unreachable block (ram,0x0001e794) */

void FUN_0001e560(int param_1, uint *param_2, uint param_3, int param_4,
                  uint param_5, uint param_6, undefined4 *param_7)

{
    byte bVar1;
    uint uVar2;
    char *pcVar3;
    uint uVar4;
    undefined4 uVar5;
    char *pcVar6;
    int iVar7;
    int extraout_r2;
    int extraout_r2_00;
    uint uVar8;
    int extraout_r2_01;
    int extraout_r2_02;
    char cVar9;
    uint uVar10;
    int iVar11;
    undefined1 uVar12;
    uint uVar13;
    uint uVar14;
    bool bVar15;
    double in_d0;
    double dVar16;
    double dVar17;
    undefined8 uVar18;
    double dVar19;
    double dVar20;
    longlong lVar21;
    longlong lVar22;
    longlong lVar23;
    char *local_f0;
    int local_e4;
    uint local_d8;
    uint local_d4;
    uint local_d0;
    int local_c8;
    undefined4 local_bc;
    char local_b8;
    char local_b7;
    undefined1 local_b6;
    char local_b5[44];
    char acStack_89[45];
    int local_5c;

    if (param_5 == 0xffffffff) {
        param_5 = 6;
    }
    local_5c = __stack_chk_guard;
    if (in_d0 < 0.0) {
        local_e4 = 0x2d;
    LAB_0001e69c:
        if (in_d0 + in_d0 == in_d0) {
            if ((param_6 & 0x40) == 0) {
                pcVar6 = "inf";
            } else {
                pcVar6 = "INF";
            }
            if (local_e4 != 0) {
                local_b5[1] = (undefined1)local_e4;
            }
            uVar2 = (uint)(local_e4 != 0);
            cVar9 = *pcVar6;
            if (cVar9 != '\0') {
                pcVar3 = local_b5 + uVar2;
                do {
                    pcVar3 = pcVar3 + 1;
                    *pcVar3 = cVar9;
                    uVar2 = uVar2 + 1;
                    pcVar6 = pcVar6 + 1;
                    cVar9 = *pcVar6;
                } while (cVar9 != '\0');
            }
            local_f0 = local_b5 + 1;
            FUN_0001df00(param_1, param_2, param_3, local_f0, param_4, uVar2,
                         param_6);
        LAB_0001e670:
            if (local_5c == __stack_chk_guard) {
                return;
            }
            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
        }
    } else {
        if ((param_6 & 2) == 0) {
            if ((param_6 & 4) == 0) {
                local_e4 = 0;
            } else {
                local_e4 = 0x20;
            }
        } else {
            local_e4 = 0x2b;
        }
        if (in_d0 != 0.0)
            goto LAB_0001e69c;
    }
    if ((param_6 & 0x300) == 0) {
        dVar17 = -in_d0;
        if (0.0 <= in_d0) {
            dVar17 = in_d0;
        }
        if (0x12 < (int)param_5) {
            param_5 = 0x13;
        }
        uVar2 = param_6 & 0x200;
        if (uVar2 == 0) {
            iVar11 = 0;
            local_d4 = 0;
            dVar19 = dVar17;
            goto LAB_0001e71c;
        }
        iVar11 = 0;
        local_d4 = 0;
    LAB_0001e714:
        dVar16 = 1.0;
        dVar19 = dVar17;
    } else {
        if ((param_6 & 0x100) == 0) {
            local_d4 = 0;
        } else {
            param_5 = param_5 - 1;
            local_d4 = (uint)((param_6 & 8) == 0);
        }
        dVar17 = -in_d0;
        if (0.0 <= in_d0) {
            dVar17 = in_d0;
        }
        if ((1.0 <= dVar17) || (dVar17 <= 0.0)) {
            iVar11 = 0;
        } else {
            iVar11 = -1;
            do {
                dVar17 = dVar17 * 10.0;
                if ((1.0 <= dVar17) || (dVar17 <= 0.0)) {
                    if (dVar17 < 10.0)
                        goto LAB_0001e858;
                    goto LAB_0001e834;
                }
                iVar11 = iVar11 + -1;
            } while (iVar11 != -99);
        }
        if (10.0 <= dVar17) {
        LAB_0001e834:
            iVar11 = iVar11 + 1;
            do {
                dVar17 = dVar17 / 10.0;
                if (dVar17 < 10.0)
                    break;
                iVar11 = iVar11 + 1;
            } while (iVar11 < 99);
        }
    LAB_0001e858:
        uVar2 = 1;
        dVar17 = -in_d0;
        if (0.0 <= in_d0) {
            dVar17 = in_d0;
        }
        if (0x12 < (int)param_5) {
            param_5 = 0x13;
        }
        dVar19 = dVar17;
        if (iVar11 < 1) {
            if (iVar11 == 0)
                goto LAB_0001e714;
            dVar16 = 1.0;
            iVar7 = iVar11;
            do {
                iVar7 = iVar7 + 1;
                dVar16 = dVar16 / 10.0;
            } while (iVar7 != 0);
        } else {
            dVar16 = 1.0;
            iVar7 = iVar11;
            do {
                iVar7 = iVar7 + -1;
                dVar16 = dVar16 * 10.0;
            } while (iVar7 != 0);
        }
    }
    dVar17 = dVar19 / dVar16;
LAB_0001e71c:
LAB_0001e744:
    if (1.8446744073709552e+19 <= dVar17)
        goto LAB_0001e750;
    lVar21 = FUN_0002c9c0(SUB84(dVar17, 0), (int)((ulonglong)dVar17 >> 0x20));
    dVar16 = (double)FUN_0002c914();
    if (dVar17 < dVar16) {
        lVar21 = CONCAT44((int)((ulonglong)lVar21 >> 0x20) -
                              (uint)((int)lVar21 == 0),
                          (int)lVar21 + -1);
    }
    iVar7 = (int)lVar21;
    if (lVar21 == -1)
        goto LAB_0001e750;
    if ((int)param_5 < 1) {
        dVar16 = 1.0;
        for (uVar10 = param_5; uVar10 != 0; uVar10 = uVar10 + 1) {
            dVar16 = dVar16 / 10.0;
        }
    } else {
        dVar16 = 1.0;
        uVar10 = param_5;
        do {
            uVar10 = uVar10 - 1;
            dVar16 = dVar16 * 10.0;
        } while (uVar10 != 0);
    }
    lVar22 = FUN_0002c9c0(SUB84(dVar16, 0), (int)((ulonglong)dVar16 >> 0x20));
    uVar10 = (uint)((ulonglong)lVar22 >> 0x20);
    dVar16 = (double)FUN_0002c914();
    dVar20 = (double)FUN_0002c914(iVar7, (int)((ulonglong)lVar21 >> 0x20));
    dVar16 = dVar16 * (dVar17 - dVar20);
    if (1.8446744073709552e+19 <= dVar16) {
        if (0.5 <= dVar16 - 1.8446744073709552e+19) {
            lVar23 = 0;
            goto LAB_0001e97c;
        }
    LAB_0001e98c:
        lVar22 = lVar21 + 1;
        lVar21 = lVar21 + 1;
        if (uVar2 == 0 ||
            ((int)((ulonglong)lVar22 >> 0x20) != 0 || iVar7 != 9)) {
            lVar23 = 0;
        } else {
            iVar11 = iVar11 + 1;
            lVar23 = 0;
            lVar21 = 1;
        }
    } else {
        lVar23 =
            FUN_0002c9c0(SUB84(dVar16, 0), (int)((ulonglong)dVar16 >> 0x20));
        dVar17 = (double)FUN_0002c914();
        if (dVar16 < dVar17) {
            lVar23 = CONCAT44((int)((ulonglong)lVar23 >> 0x20) -
                                  (uint)((int)lVar23 == 0),
                              (int)lVar23 + -1);
            dVar17 = (double)FUN_0002c914();
        }
        if (0.5 <= dVar16 - dVar17) {
            lVar23 = lVar23 + 1;
        }
    LAB_0001e97c:
        uVar14 = (uint)((ulonglong)lVar23 >> 0x20);
        bVar15 = uVar14 <= uVar10;
        if (uVar10 == uVar14) {
            bVar15 = (uint)lVar23 <= (uint)lVar22;
        }
        if (!bVar15 || lVar22 == lVar23)
            goto LAB_0001e98c;
    }
    if (((param_6 & 0x100) != 0) && (uVar2 != 0 && iVar11 <= (int)param_5)) {
        if (iVar11 + 4 < 0 != SCARRY4(iVar11, 4)) {
        LAB_0001edfc:
            iVar11 = -iVar11;
            uVar12 = 0x2d;
            goto LAB_0001ee04;
        }
        param_5 = param_5 - iVar11;
        uVar2 = 0;
        dVar17 = dVar19;
        if (0x12 < (int)param_5) {
            param_5 = 0x13;
        }
        goto LAB_0001e744;
    }
    if (uVar2 == 0) {
        local_c8 = 0;
    } else {
        if (iVar11 < 0)
            goto LAB_0001edfc;
        uVar12 = 0x2b;
    LAB_0001ee04:
        uVar18 = VectorShiftRight(CONCAT44(iVar11, iVar11), 0x20);
        uVar5 = (undefined4)((ulonglong)uVar18 >> 0x20);
        FUN_0002c980((int)uVar18, uVar5, 10, 0);
        local_b8 = "0123456789abcdef"[extraout_r2_01];
        lVar22 = FUN_0002c980((int)uVar18, uVar5, 10, 0);
        if (lVar22 == 0) {
            local_b7 = '0';
        } else {
            FUN_0002c980((int)lVar22, (int)((ulonglong)lVar22 >> 0x20), 10, 0);
            local_b7 = "0123456789abcdef"[extraout_r2_02];
        }
        local_c8 = 4;
        local_b6 = uVar12;
        if ((param_6 & 0x40) == 0) {
            local_b5[0] = 'e';
        } else {
            local_b5[0] = 'E';
        }
    }
    pcVar6 = local_b5 + 1;
    uVar2 = 0;
    do {
        uVar10 = uVar2;
        uVar5 = (undefined4)((ulonglong)lVar21 >> 0x20);
        FUN_0002c980((int)lVar21, uVar5, 10, 0);
        uVar2 = uVar10 + 1;
        *pcVar6 = "0123456789abcdef"[extraout_r2];
        lVar21 = FUN_0002c980((int)lVar21, uVar5, 10, 0);
        pcVar6 = pcVar6 + 1;
    } while (uVar2 < 0x2b && lVar21 != 0);
    if (lVar23 == 0) {
        if (local_d4 == 0) {
            local_d0 = local_d4;
            uVar14 = param_5;
            local_d8 = param_5;
            goto LAB_0001ebec;
        }
        local_d0 = 0;
    LAB_0001eebc:
        uVar14 = 0;
        local_d8 = 0;
    LAB_0001eecc:
        local_d4 = (param_6 << 0x1c) >> 0x1f;
    } else {
        pcVar6 = acStack_89;
        local_d0 = 0;
        local_bc = param_5;
        do {
            pcVar6 = pcVar6 + 1;
            uVar5 = (undefined4)((ulonglong)lVar23 >> 0x20);
            FUN_0002c980((int)lVar23, uVar5, 10, 0);
            local_d0 = local_d0 + 1;
            *pcVar6 = "0123456789abcdef"[extraout_r2_00];
            lVar23 = FUN_0002c980((int)lVar23, uVar5, 10, 0);
        } while (local_d0 < 0x2b && lVar23 != 0);
        uVar14 = local_bc - local_d0;
        local_d8 = param_5;
        if (local_d4 != 0) {
            param_5 = local_bc;
            if ((int)local_d0 < 1)
                goto LAB_0001eebc;
            pcVar6 = acStack_89;
            local_d4 = 0;
            do {
                pcVar6 = pcVar6 + 1;
                if (*pcVar6 != '0') {
                    local_d8 = local_bc - local_d4;
                    break;
                }
                local_d4 = local_d4 + 1;
                local_d8 = uVar14;
            } while (local_d4 != local_d0);
        }
    LAB_0001ebec:
        param_5 = local_d4;
        if ((int)local_d8 < 1)
            goto LAB_0001eecc;
        local_d4 = 1;
    }
    uVar13 = param_6 & 0x20;
    if (uVar13 != 0) {
        uVar13 = uVar2;
        if (uVar2 == ((int)uVar2 / 3) * 3) {
            uVar13 = uVar10;
        }
        uVar13 = (int)uVar13 / 3;
    }
    iVar11 = local_e4;
    if (local_e4 != 0) {
        iVar11 = 1;
    }
    uVar10 =
        (((((param_4 - uVar2) - local_c8) - local_d8) - uVar13) - local_d4) -
        iVar11;
    uVar10 = uVar10 & ~((int)uVar10 >> 0x1f);
    if ((param_6 & 1) == 0) {
        if ((param_6 & 0x10) == 0) {
            if (0 < (int)uVar10) {
                uVar8 = *param_2;
                do {
                    uVar4 = uVar8 + 1;
                    if (uVar4 < param_3) {
                        *(undefined1 *)(param_1 + uVar8) = 0x20;
                        uVar4 = *param_2 + 1;
                    }
                    uVar10 = uVar10 - 1;
                    *param_2 = uVar4;
                    uVar8 = uVar4;
                } while (uVar10 != 0);
                uVar10 = 0;
            }
        } else {
            if (uVar10 != 0) {
                if (iVar11 == 0) {
                    uVar8 = *param_2;
                } else {
                    uVar8 = *param_2 + 1;
                    if (uVar8 < param_3) {
                        *(char *)(param_1 + *param_2) = (char)local_e4;
                        uVar8 = *param_2 + 1;
                    }
                    *param_2 = uVar8;
                }
                do {
                    uVar4 = uVar8 + 1;
                    if (uVar4 < param_3) {
                        *(undefined1 *)(param_1 + uVar8) = 0x30;
                        uVar4 = *param_2 + 1;
                    }
                    uVar10 = uVar10 - 1;
                    *param_2 = uVar4;
                    uVar8 = uVar4;
                } while (uVar10 != 0);
                local_e4 = 0;
            }
            uVar10 = 0;
        }
    } else {
        uVar10 = -uVar10;
    }
    if (local_e4 != 0) {
        uVar8 = *param_2 + 1;
        if (uVar8 < param_3) {
            *(char *)(param_1 + *param_2) = (char)local_e4;
            uVar8 = *param_2 + 1;
        }
        *param_2 = uVar8;
    }
    if (0 < (int)uVar2) {
        if ((int)uVar13 < 1) {
            bVar1 = 0;
        } else {
            bVar1 = 1;
        }
        do {
            while (true) {
                uVar13 = *param_2;
                uVar2 = uVar2 - 1;
                uVar8 = uVar13 + 1;
                if (uVar8 < param_3) {
                    *(char *)(param_1 + uVar13) = (local_b5 + 1)[uVar2];
                    uVar13 = *param_2;
                    uVar8 = uVar13 + 1;
                }
                *param_2 = uVar8;
                if (!(bool)(0 < (int)uVar2 & bVar1))
                    break;
                if (uVar2 == ((int)uVar2 / 3) * 3) {
                    if (uVar13 + 2 < param_3) {
                        *(undefined1 *)(param_1 + uVar8) = 0x2c;
                        uVar8 = *param_2;
                    }
                    *param_2 = uVar8 + 1;
                }
            }
        } while (0 < (int)uVar2);
    }
    if (local_d4 != 0) {
        uVar2 = *param_2 + 1;
        if (uVar2 < param_3) {
            *(undefined1 *)(param_1 + *param_2) = 0x2e;
            uVar2 = *param_2 + 1;
        }
        *param_2 = uVar2;
    }
    if (0 < (int)uVar14) {
        uVar2 = *param_2;
        do {
            uVar13 = uVar2 + 1;
            if (uVar13 < param_3) {
                *(undefined1 *)(param_1 + uVar2) = 0x30;
                uVar13 = *param_2 + 1;
            }
            uVar14 = uVar14 - 1;
            *param_2 = uVar13;
            uVar2 = uVar13;
        } while (uVar14 != 0);
    }
    if ((int)param_5 < (int)local_d0) {
        pcVar6 = acStack_89 + local_d0;
        uVar2 = *param_2;
        do {
            uVar14 = uVar2 + 1;
            pcVar3 = pcVar6 + -1;
            if (uVar14 < param_3) {
                *(char *)(param_1 + uVar2) = *pcVar6;
                uVar14 = *param_2 + 1;
            }
            *param_2 = uVar14;
            pcVar6 = pcVar3;
            uVar2 = uVar14;
        } while (pcVar3 != acStack_89 + param_5);
    }
    if (local_c8 != 0) {
        uVar2 = *param_2;
        do {
            uVar14 = uVar2 + 1;
            iVar11 = local_c8 + -1;
            if (uVar14 < param_3) {
                *(undefined1 *)(param_1 + uVar2) =
                    *(undefined1 *)((int)&local_bc + local_c8 + 3);
                uVar14 = *param_2 + 1;
            }
            *param_2 = uVar14;
            local_c8 = iVar11;
            uVar2 = uVar14;
        } while (iVar11 != 0);
    }
    if (uVar10 != 0) {
        uVar2 = *param_2;
        do {
            uVar14 = uVar2 + 1;
            if (uVar14 < param_3) {
                *(undefined1 *)(param_1 + uVar2) = 0x20;
                uVar14 = *param_2 + 1;
            }
            uVar10 = uVar10 + 1;
            *param_2 = uVar14;
            uVar2 = uVar14;
        } while (uVar10 != 0);
    }
    goto LAB_0001e670;
LAB_0001e750:
    *param_7 = 1;
    goto LAB_0001e670;
}

void FUN_0001f0c4(int param_1, uint param_2, char *param_3, uint *param_4)

{
    uint uVar1;
    int *piVar2;
    uint uVar3;
    uint uVar4;
    uint *puVar5;
    char cVar6;
    undefined4 uVar7;
    undefined8 *puVar8;
    int iVar9;
    uint unaff_r6;
    uint uVar10;
    uint uVar11;
    uint uVar12;
    uint local_34;
    int local_30;
    int local_2c;

    if (param_2 == 0 || param_1 != 0) {
        unaff_r6 = param_2;
    }
    if (param_2 != 0 && param_1 == 0) {
        unaff_r6 = 0;
    }
    local_2c = __stack_chk_guard;
    local_34 = 0;
    uVar1 = 0;
    local_30 = 0;
    cVar6 = *param_3;
    param_3 = param_3 + 1;
    uVar3 = 0xffffffff;
    uVar10 = 0;
    uVar11 = 0;
    uVar12 = 0;
LAB_0001f14c:
    if (cVar6 != '\0') {
        do {
            uVar4 = local_34;
            switch (uVar11) {
            case 0:
                goto LAB_0001f4a8;
            case 1:
                switch (cVar6) {
                case ' ':
                    cVar6 = *param_3;
                    uVar12 = uVar12 | 4;
                    param_3 = param_3 + 1;
                    goto LAB_0001f14c;
                case '!':
                    break;
                case '\"':
                    break;
                case '#':
                    cVar6 = *param_3;
                    uVar12 = uVar12 | 8;
                    param_3 = param_3 + 1;
                    goto LAB_0001f14c;
                case '$':
                    break;
                case '%':
                    break;
                case '&':
                    break;
                case '\'':
                    cVar6 = *param_3;
                    uVar12 = uVar12 | 0x20;
                    param_3 = param_3 + 1;
                    goto LAB_0001f14c;
                case '(':
                    break;
                case ')':
                    break;
                case '*':
                    break;
                case '+':
                    cVar6 = *param_3;
                    uVar12 = uVar12 | 2;
                    param_3 = param_3 + 1;
                    goto LAB_0001f14c;
                case ',':
                    break;
                case '-':
                    uVar12 = uVar12 | 1;
                    goto LAB_0001f4c8;
                case '.':
                    break;
                case '/':
                    break;
                case '0':
                    cVar6 = *param_3;
                    uVar12 = uVar12 | 0x10;
                    param_3 = param_3 + 1;
                    goto LAB_0001f14c;
                }
                uVar11 = 2;
                goto LAB_0001f14c;
            case 2:
                uVar4 = (uint)(byte)(cVar6 - 0x30);
                if (uVar4 < 10) {
                    if ((int)uVar1 <= (int)(0x7fffffff - uVar4) / 10) {
                        cVar6 = *param_3;
                        param_3 = param_3 + 1;
                        uVar1 = uVar4 + uVar1 * 10;
                        goto LAB_0001f14c;
                    }
                LAB_0001f9ac:
                    local_30 = 1;
                    goto LAB_0001f400;
                }
                if (cVar6 == '*') {
                    uVar1 = *param_4;
                    uVar11 = 3;
                    cVar6 = *param_3;
                    param_4 = param_4 + 1;
                    param_3 = param_3 + 1;
                    if ((int)uVar1 < 0) {
                        uVar12 = uVar12 | 1;
                        uVar1 = -uVar1;
                    }
                } else {
                    uVar11 = 3;
                }
                goto LAB_0001f14c;
            case 3:
                if (cVar6 == '.') {
                    cVar6 = *param_3;
                    uVar11 = 4;
                    param_3 = param_3 + 1;
                } else {
                LAB_0001f458:
                    uVar11 = 5;
                }
                goto LAB_0001f14c;
            case 4:
                uVar4 = (uint)(byte)(cVar6 - 0x30);
                if (uVar3 != 0xffffffff) {
                    if (uVar4 < 10) {
                        if ((int)uVar3 <= (int)(0x7fffffff - uVar4) / 10) {
                            uVar3 = uVar3 * 10;
                            goto LAB_0001f3e8;
                        }
                        goto LAB_0001f9ac;
                    }
                LAB_0001f724:
                    if (cVar6 != '*')
                        goto LAB_0001f458;
                    uVar3 = *param_4;
                    uVar11 = 5;
                    cVar6 = *param_3;
                    param_4 = param_4 + 1;
                    param_3 = param_3 + 1;
                    uVar3 = uVar3 | (int)uVar3 >> 0x1f;
                    goto LAB_0001f14c;
                }
                uVar3 = 0;
                if (9 < uVar4)
                    goto LAB_0001f724;
            LAB_0001f3e8:
                cVar6 = *param_3;
                uVar3 = uVar3 + uVar4;
                param_3 = param_3 + 1;
                if (cVar6 == '\0')
                    goto LAB_0001f400;
                break;
            case 5:
                switch (cVar6) {
                case 'L':
                    cVar6 = *param_3;
                    uVar11 = 6;
                    param_3 = param_3 + 1;
                    uVar10 = 5;
                    goto LAB_0001f14c;
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
                    cVar6 = *param_3;
                    if (cVar6 == 'h') {
                        cVar6 = param_3[1];
                        param_3 = param_3 + 2;
                        uVar10 = 1;
                    } else {
                        param_3 = param_3 + 1;
                        uVar10 = 2;
                    }
                    uVar11 = 6;
                    goto LAB_0001f14c;
                case 'i':
                    break;
                case 'j':
                    cVar6 = *param_3;
                    uVar11 = 6;
                    param_3 = param_3 + 1;
                    uVar10 = 8;
                    goto LAB_0001f14c;
                case 'k':
                    break;
                case 'l':
                    cVar6 = *param_3;
                    if (cVar6 == 'l') {
                        cVar6 = param_3[1];
                        param_3 = param_3 + 2;
                        uVar10 = 4;
                    } else {
                        param_3 = param_3 + 1;
                        uVar10 = 3;
                    }
                    uVar11 = 6;
                    goto LAB_0001f14c;
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
                    cVar6 = *param_3;
                    uVar11 = 6;
                    param_3 = param_3 + 1;
                    uVar10 = 7;
                    goto LAB_0001f14c;
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
                    uVar11 = 6;
                    cVar6 = *param_3;
                    uVar10 = 6;
                    param_3 = param_3 + 1;
                    goto LAB_0001f14c;
                }
                uVar11 = 6;
                goto LAB_0001f14c;
            case 6:
                uVar11 = local_34;
                switch (cVar6) {
                case '%':
                    uVar11 = local_34 + 1;
                    if (uVar11 < unaff_r6) {
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
                    goto LAB_0001f620;
                case 'B':
                    break;
                case 'C':
                    break;
                case 'D':
                    break;
                case 'E':
                    uVar12 = uVar12 | 0x40;
                    goto LAB_0001f700;
                case 'F':
                LAB_0001f620:
                    uVar12 = uVar12 | 0x40;
                    goto LAB_0001f624;
                case 'G':
                    uVar12 = uVar12 | 0x40;
                    goto LAB_0001f6c4;
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
                    uVar12 = uVar12 | 0x40;
                    goto LAB_0001f688;
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
                    goto LAB_0001f624;
                case 'b':
                    break;
                case 'c':
                    puVar5 = param_4 + 1;
                    uVar1 = *param_4;
                    uVar11 = local_34 + 1;
                    param_4 = puVar5;
                    if (uVar11 < unaff_r6) {
                        *(char *)(param_1 + local_34) = (char)uVar1;
                    }
                    break;
                case 'd':
                    goto LAB_0001f820;
                case 'e':
                LAB_0001f700:
                    uVar12 = uVar12 | 0x200;
                    puVar8 =
                        (undefined8 *)((uint)((int)param_4 + 7) & 0xfffffff8);
                    uVar7 = (undefined4)*puVar8;
                    goto LAB_0001f64c;
                case 'f':
                LAB_0001f624:
                    puVar8 =
                        (undefined8 *)((uint)((int)param_4 + 7) & 0xfffffff8);
                    uVar7 = (undefined4)*puVar8;
                LAB_0001f64c:
                    FUN_0001e560(uVar7, param_1, &local_34, unaff_r6, uVar1,
                                 uVar3, uVar12, &local_30);
                    param_4 = (uint *)(puVar8 + 1);
                    uVar11 = local_34;
                    if (local_30 != 0)
                        goto LAB_0001f400;
                    break;
                case 'g':
                LAB_0001f6c4:
                    puVar8 =
                        (undefined8 *)((uint)((int)param_4 + 7) & 0xfffffff8);
                    uVar12 = uVar12 | 0x100;
                    if (uVar3 == 0) {
                        uVar3 = 1;
                    }
                    uVar7 = (undefined4)*puVar8;
                    goto LAB_0001f64c;
                case 'h':
                    break;
                case 'i':
                LAB_0001f820:
                    switch (uVar10) {
                    case 1:
                        uVar10 = (uint)(char)(byte)*param_4;
                        param_4 = param_4 + 1;
                        uVar11 = (int)uVar10 >> 0x1f;
                        break;
                    case 2:
                        uVar10 = (uint)(short)(ushort)*param_4;
                        param_4 = param_4 + 1;
                        uVar11 = (int)uVar10 >> 0x1f;
                        break;
                    case 3:
                    default:
                    switchD_0001f828_default:
                        uVar10 = *param_4;
                        param_4 = param_4 + 1;
                        uVar11 = (int)uVar10 >> 0x1f;
                        break;
                    case 4:
                        goto LAB_0001f998;
                    case 5:
                        goto switchD_0001f828_default;
                    case 6:
                        uVar10 = *param_4;
                        uVar11 = 0;
                        param_4 = param_4 + 1;
                        break;
                    case 7:
                        goto switchD_0001f828_default;
                    case 8:
                    LAB_0001f998:
                        puVar5 =
                            (uint *)((uint)((int)param_4 + 7) & 0xfffffff8);
                        param_4 = puVar5 + 2;
                        uVar10 = *puVar5;
                        uVar11 = puVar5[1];
                    }
                    FUN_0001e0ac(param_1, &local_34, unaff_r6, 10, uVar10,
                                 uVar11, 10, uVar1, uVar3, uVar12);
                    uVar11 = local_34;
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
                    switch (uVar10) {
                    case 1:
                        *(char *)*param_4 = (char)local_34;
                        param_4 = param_4 + 1;
                        break;
                    case 2:
                        *(short *)*param_4 = (short)local_34;
                        param_4 = param_4 + 1;
                        break;
                    case 3:
                    default:
                    switchD_0001f7f8_default:
                        *(uint *)*param_4 = local_34;
                        param_4 = param_4 + 1;
                        break;
                    case 4:
                        goto LAB_0001f97c;
                    case 5:
                        goto switchD_0001f7f8_default;
                    case 6:
                        *(uint *)*param_4 = local_34;
                        param_4 = param_4 + 1;
                        break;
                    case 7:
                        goto switchD_0001f7f8_default;
                    case 8:
                    LAB_0001f97c:
                        puVar5 = (uint *)*param_4;
                        puVar5[1] = 0;
                        *puVar5 = local_34;
                        param_4 = param_4 + 1;
                    }
                    break;
                case 'o':
                    uVar7 = 8;
                    goto LAB_0001f68c;
                case 'p':
                    uVar11 = *param_4;
                    if (uVar11 == 0) {
                        FUN_0001df00(param_1, &local_34, unaff_r6, "(nil)",
                                     uVar1, 0xffffffff, uVar12);
                        param_4 = param_4 + 1;
                        uVar11 = local_34;
                    } else {
                        FUN_0001e0ac(param_1, &local_34, unaff_r6, uVar11,
                                     uVar11, 0, 0x10, uVar1, uVar3,
                                     uVar12 | 0x88);
                        param_4 = param_4 + 1;
                        uVar11 = local_34;
                    }
                    break;
                case 'q':
                    break;
                case 'r':
                    break;
                case 's':
                    FUN_0001df00(param_1, &local_34, unaff_r6, *param_4, uVar1,
                                 uVar3, uVar12);
                    param_4 = param_4 + 1;
                    uVar11 = local_34;
                    break;
                case 't':
                    break;
                case 'u':
                    uVar7 = 10;
                    goto LAB_0001f68c;
                case 'v':
                    break;
                case 'w':
                    break;
                case 'x':
                LAB_0001f688:
                    uVar7 = 0x10;
                LAB_0001f68c:
                    switch (uVar10) {
                    case 1:
                        uVar10 = (uint)(byte)*param_4;
                        uVar11 = 0;
                        param_4 = param_4 + 1;
                        break;
                    case 2:
                        uVar10 = (uint)(ushort)*param_4;
                        uVar11 = 0;
                        param_4 = param_4 + 1;
                        break;
                    case 3:
                    default:
                    switchD_0001f698_default:
                        uVar10 = *param_4;
                        param_4 = param_4 + 1;
                        uVar11 = 0;
                        break;
                    case 4:
                        goto LAB_0001f7cc;
                    case 5:
                        goto switchD_0001f698_default;
                    case 6:
                        goto switchD_0001f698_default;
                    case 7:
                        uVar10 = *param_4;
                        param_4 = param_4 + 1;
                        uVar11 = (int)uVar10 >> 0x1f;
                        break;
                    case 8:
                    LAB_0001f7cc:
                        puVar5 =
                            (uint *)((uint)((int)param_4 + 7) & 0xfffffff8);
                        param_4 = puVar5 + 2;
                        uVar10 = *puVar5;
                        uVar11 = puVar5[1];
                    }
                    FUN_0001e0ac(param_1, &local_34, unaff_r6, uVar7, uVar10,
                                 uVar11, uVar7, uVar1, uVar3, uVar12 | 0x80);
                    uVar11 = local_34;
                }
                local_34 = uVar11;
                uVar1 = 0;
                cVar6 = *param_3;
                param_3 = param_3 + 1;
                uVar3 = 0xffffffff;
                uVar10 = uVar1;
                uVar11 = uVar1;
                uVar12 = uVar1;
                goto LAB_0001f14c;
            }
        } while (true);
    }
LAB_0001f400:
    if (local_34 < unaff_r6) {
        *(undefined1 *)(param_1 + local_34) = 0;
    } else if (unaff_r6 != 0) {
        *(undefined1 *)(param_1 + unaff_r6 + -1) = 0;
    }
    if (local_30 == 0) {
        uVar1 = local_34;
        if (local_34 < 0x7fffffff)
            goto LAB_0001f434;
        piVar2 = __errno_location();
        iVar9 = 0x22;
    } else {
        piVar2 = __errno_location();
        iVar9 = 0x4b;
    }
    *piVar2 = iVar9;
    uVar1 = 0xffffffff;
LAB_0001f434:
    if (local_2c == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar1);
LAB_0001f4a8:
    if (cVar6 == '%') {
        uVar11 = 1;
    } else {
        uVar4 = local_34 + 1;
        if (uVar4 < unaff_r6) {
            *(char *)(param_1 + local_34) = cVar6;
        }
    }
LAB_0001f4c8:
    local_34 = uVar4;
    cVar6 = *param_3;
    param_3 = param_3 + 1;
    goto LAB_0001f14c;
}

void FUN_0001fa7c(undefined4 param_1, undefined4 param_2, undefined4 param_3,
                  undefined4 param_4)

{
    int iVar1;
    undefined4 uStack_4;

    iVar1 = __stack_chk_guard;
    uStack_4 = param_4;
    FUN_0001f0c4(param_1, param_2, param_3, &uStack_4, &uStack_4);
    if (iVar1 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_0001fae0(short *param_1)

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
        FUN_000208c4(__buf, &DAT_0002dd30, 0x80);
        goto LAB_0001fb7c;
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
                FUN_0001fa7c(pcVar5, 0x80, "%s%%%lu", __buf, iVar8);
                lib_stringbuf[iVar1 + 0x7f] = 0;
                __buf = pcVar5;
            }
            goto LAB_0001fb7c;
        }
        if (sVar2 != 0) {
            FUN_0001fa7c(__buf, 0x80, "(socktoa unknown family %d)");
            goto LAB_0001fb7c;
        }
    }
    inet_ntop(2, param_1 + 2, __buf, 0x80);
LAB_0001fb7c:
    iVar8 = __stack_chk_guard;
    *piVar4 = iVar6;
    if (iVar3 == iVar8) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail(__buf);
}

void FUN_0001fc74(short *param_1)

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
    uVar4 = FUN_0001fae0(param_1);
    __s = lib_stringbuf + lib_nextbuf * 0x80;
    uVar6 = lib_nextbuf + 1;
    memset(__s, 0, 0x80);
    if (*param_1 == 10) {
        pcVar5 = "[%s]:%hu";
    } else {
        pcVar5 = "%s:%hu";
    }
    lib_nextbuf = uVar6 & 0xf;
    FUN_0001fa7c(__s, 0x80, pcVar5, uVar4,
                 (ushort)param_1[1] >> 8 | param_1[1] << 8);
    iVar2 = __stack_chk_guard;
    *piVar3 = iVar7;
    if (iVar1 == iVar2) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail(__s);
}

void FUN_0001feb0(sockaddr *param_1)

{
    sa_family_t sVar1;
    bool bVar2;
    addrinfo *__ai;
    int *piVar3;
    int iVar4;
    undefined4 uVar5;
    char *pcVar6;
    int iVar7;
    socklen_t __salen;
    uint uVar8;
    addrinfo *paVar9;
    char *__host;
    int iVar10;
    addrinfo *local_70;
    addrinfo local_6c;
    int local_4c;
    int local_48;
    int local_44;
    int local_40;
    int local_3c;
    undefined4 local_38;
    int local_34;
    undefined4 local_30;
    int local_2c;

    local_30 = 0x70746e;
    local_2c = __stack_chk_guard;
    piVar3 = __errno_location();
    iVar10 = *piVar3;
    __host = lib_stringbuf + lib_nextbuf * 0x80;
    uVar8 = lib_nextbuf + 1;
    memset(__host, 0, 0x80);
    if (param_1->sa_family == 2) {
        __salen = 0x10;
    } else {
        __salen = 0x1c;
    }
    lib_nextbuf = uVar8 & 0xf;
    iVar4 = getnameinfo(param_1, __salen, __host, 0x80, (char *)0x0, 0, 0x18);
    if (iVar4 == 0) {
        if (0 < debug) {
            uVar5 = FUN_0001fae0(param_1);
            FUN_0001ab20("%s reversed to %s\n", uVar5, __host);
        }
        local_6c.ai_family = (int)param_1->sa_family;
        local_70 = (addrinfo *)0x0;
        local_6c.ai_flags = 0;
        local_6c.ai_addrlen = 0;
        local_6c.ai_addr = (sockaddr *)0x0;
        local_6c.ai_canonname = (char *)0x0;
        local_6c.ai_next = (addrinfo *)0x0;
        local_6c.ai_protocol = 0x11;
        local_6c.ai_socktype = 2;
        iVar4 = getaddrinfo(__host, (char *)&local_30, &local_6c, &local_70);
        if (iVar4 == -5 || iVar4 == -2) {
            local_6c.ai_flags = 0x22;
            iVar4 =
                getaddrinfo(__host, (char *)&local_30, &local_6c, &local_70);
        }
        if (iVar4 == -1) {
            local_6c.ai_flags = local_6c.ai_flags & 0xffffffdf;
            iVar4 =
                getaddrinfo(__host, (char *)&local_30, &local_6c, &local_70);
        }
        __ai = local_70;
        if (iVar4 == 0) {
            if (local_70 == (addrinfo *)0x0) {
                /* WARNING: Subroutine does not return */
                FUN_00020c38("socktohost.c", 0x57, 2, "alist != ((void *)0)");
            }
            sVar1 = param_1->sa_family;
            paVar9 = local_70;
            do {
                uVar8 = paVar9->ai_addrlen;
                if (0x1b < uVar8) {
                    uVar8 = 0x1c;
                }
                local_38 = 0;
                local_34 = 0;
                local_4c = iVar4;
                local_48 = iVar4;
                local_44 = iVar4;
                local_40 = iVar4;
                local_3c = iVar4;
                __memcpy_chk(&local_4c, paVar9->ai_addr, uVar8);
                if ((sa_family_t)local_4c == sVar1) {
                    if (sVar1 == 2) {
                        bVar2 = *(int *)(param_1->sa_data + 2) == local_48;
                    } else {
                        iVar7 = memcmp(param_1->sa_data + 6, &local_44, 0x10);
                        if (iVar7 != 0)
                            goto LAB_00020128;
                        bVar2 = *(int *)(param_1[1].sa_data + 6) == local_34;
                    }
                    if (bVar2) {
                        freeaddrinfo(__ai);
                        *piVar3 = iVar10;
                        goto LAB_000200a8;
                    }
                }
            LAB_00020128:
                paVar9 = paVar9->ai_next;
            } while (paVar9 != (addrinfo *)0x0);
            freeaddrinfo(__ai);
        }
        if (0 < debug) {
            pcVar6 = gai_strerror(iVar4);
            FUN_0001ab20("%s forward check lookup fail: %s\n", __host, pcVar6);
        }
        pcVar6 = lib_stringbuf + lib_nextbuf * 0x80;
        uVar8 = lib_nextbuf + 1;
        memset(pcVar6, 0, 0x80);
        lib_nextbuf = uVar8 & 0xf;
        uVar5 = FUN_0001fae0(param_1);
        FUN_0001fa7c(pcVar6, 0x80, "%s (%s)", uVar5, __host);
        *piVar3 = iVar10;
        __host = pcVar6;
    } else {
        *piVar3 = iVar10;
        __host = (char *)FUN_0001fae0(param_1);
    }
LAB_000200a8:
    if (local_2c == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail(__host);
}

void FUN_000202c4(void)

{
    int iVar1;

    iVar1 = __stack_chk_guard;
    FUN_0001a12c();
    ssl_init_done = 1;
    if (iVar1 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_00020320(void)

{
    int iVar1;
    uint uVar2;

    iVar1 = __stack_chk_guard;
    uVar2 = OpenSSL_version_num();
    if (((uVar2 ^ 0x1010104f) & 0xfffff00f) != 0) {
        FUN_0001abf8(
            4, "OpenSSL version mismatch. Built against %lx, you have %lx",
            0x1010104f, uVar2);
        __fprintf_chk(
            stderr, 1,
            "OpenSSL version mismatch. Built against %lx, you have %lx\n",
            0x1010104f, uVar2);
    }
    if (ssl_init_done == 0) {
        if (iVar1 == __stack_chk_guard) {
            FUN_000202c4();
            return;
        }
    } else if (iVar1 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_00020400(int param_1)

{
    int iVar1;
    char *pcVar2;

    iVar1 = __stack_chk_guard;
    if (ssl_init_done == 0) {
        FUN_000202c4();
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
    if (iVar1 != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail(pcVar2);
    }
    return;
}

void FUN_0002051c(byte *param_1, uint *param_2)

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
        FUN_000202c4();
    }
    iVar3 = lib_nextbuf;
    s = lib_stringbuf + lib_nextbuf * 0x80;
    memset(s, 0, 0x80);
    lib_nextbuf = iVar3 + 1U & 0xf;
    FUN_000208c4(s, param_1, 0x80);
    uVar8 = (uint)(byte)lib_stringbuf[iVar3 * 0x80];
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
    if (iVar3 == 0) {
        iVar4 = strcmp("AES128CMAC", (char *)s);
        if (iVar4 == 0) {
            if (debug == 0) {
                iVar3 = 0x37e;
            } else {
                iVar3 = 0x37e;
                __fprintf_chk(stderr, 1, "%s:%d:%s():%s:key\n", "ssl_init.c",
                              0x87, "keytype_from_text", "AES128CMAC");
            }
        } else {
            pp_Var2 = __ctype_tolower_loc();
            if ((*pp_Var2)[*param_1] != 0x6d)
                goto LAB_0002066c;
            iVar3 = 4;
        }
    }
    if (param_2 != (uint *)0x0) {
        name = OBJ_nid2sn(iVar3);
        md = EVP_get_digestbyname(name);
        if ((md == (EVP_MD *)0x0) ||
            (uVar8 = EVP_MD_size(md), uVar6 = stderr, uVar8 == 0)) {
            uVar6 = stderr;
            if (iVar3 == 0x37e) {
                if (debug != 0) {
                    __fprintf_chk(stderr, 1, "%s:%d:%s():%s:len\n",
                                  "ssl_init.c", 0xa4, "keytype_from_text",
                                  "AES128CMAC");
                }
                *param_2 = 0x10;
            } else {
                uVar5 = FUN_00020400(iVar3);
                __fprintf_chk(uVar6, 1,
                              "key type %s is not supported by OpenSSL\n",
                              uVar5);
                uVar6 = FUN_00020400(iVar3);
                FUN_0001abf8(3, "key type %s is not supported by OpenSSL\n",
                             uVar6);
                iVar3 = 0;
            }
        } else if (uVar8 < 0x15) {
            *param_2 = uVar8;
        } else {
            uVar5 = FUN_00020400(iVar3);
            __fprintf_chk(uVar6, 1,
                          "key type %s %u octet digests are too big, max %lu\n",
                          uVar5, uVar8, 0x14);
            uVar6 = FUN_00020400(iVar3);
            FUN_0001abf8(3, "key type %s %u octet digests are too big, max %lu",
                         uVar6, uVar8, 0x14);
            iVar3 = 0;
        }
    }
LAB_0002066c:
    if (iVar1 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar3);
}

void FUN_000208c4(char *param_1, char *param_2, int param_3)

{
    char cVar1;
    int iVar2;
    char *pcVar3;
    char *pcVar4;
    char *pcVar5;

    iVar2 = __stack_chk_guard;
    pcVar5 = param_2;
    if (param_3 == 0)
        goto LAB_0002094c;
    pcVar3 = param_1;
    while (pcVar3 != param_1 + param_3 + -1) {
        pcVar4 = pcVar5 + 1;
        cVar1 = *pcVar5;
        *pcVar3 = cVar1;
        pcVar3 = pcVar3 + 1;
        pcVar5 = pcVar4;
        if (cVar1 == '\0')
            goto LAB_00020928;
    }
    *pcVar3 = '\0';
    cVar1 = *pcVar5;
    while (pcVar4 = pcVar5 + 1, pcVar5 = pcVar4, cVar1 != '\0') {
    LAB_0002094c:
        cVar1 = *pcVar5;
    }
LAB_00020928:
    if (iVar2 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pcVar4 + (-1 - (int)param_2));
}

/* WARNING: Removing unreachable block (ram,0x00020ac4) */

void sigint_handler(void)

{
    if (DAT_00043344 != (code *)0x0) {
        /* WARNING: Could not recover jumptable at 0x00020aac. Too many branches
         */
        /* WARNING: Treating indirect jump as call */
        (*DAT_00043344)();
        return;
    }
    return;
}

void FUN_00020ad4(int param_1, _union_1051 param_2)

{
    int *piVar1;
    int iVar2;
    _union_1051 local_134;
    sigset_t sStack_130;
    undefined4 local_b0;
    sigaction sStack_a8;
    int local_1c;

    local_1c = __stack_chk_guard;
    memset(&local_134, 0, 0x8c);
    sigemptyset(&sStack_130);
    local_134 = param_2;
    if (param_1 == 0x1d) {
        local_b0 = 0x10000000;
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
    if (local_1c == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_00020c38(void)

{
    (*DAT_000410d4)();
    /* WARNING: Subroutine does not return */
    abort();
}

/* WARNING: Removing unreachable block (ram,0x00020d7c) */

void FUN_00020cf4(undefined4 param_1)

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

void FUN_00020d98(undefined4 param_1, undefined4 param_2, undefined4 param_3,
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
    iVar2 = FUN_00020fd0(local_22c, 0x80, &local_238);
    pFVar1 = stderr;
    if (iVar2 == 0) {
        if (local_238 < 1) {
            pcVar7 = ".";
        } else {
            pcVar7 = ", back trace";
        }
        uVar3 = FUN_00020cf4(param_3);
        uVar4 = FUN_00021534(isc_msgcat, 1, 0x65, "failed");
        __fprintf_chk(pFVar1, 1, "%s:%d: %s(%s) %s%s\n", param_1, param_2,
                      uVar3, param_4, uVar4, pcVar7);
        if (0 < local_238) {
            iVar2 = 0;
            puVar6 = &local_230;
            do {
                puVar6 = puVar6 + 1;
                local_234 = 0;
                iVar5 = FUN_00021124(*puVar6, &local_234, &local_230);
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
        uVar3 = FUN_00020cf4(param_3);
        uVar4 = FUN_00021534(isc_msgcat, 1, 0x65, "failed");
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

/* WARNING: Removing unreachable block (ram,0x00021018) */

void FUN_00020fd0(void)

{
    return;
}

/* WARNING: Removing unreachable block (ram,0x00021180) */
/* WARNING: Removing unreachable block (ram,0x00021194) */
/* WARNING: Removing unreachable block (ram,0x000211a0) */
/* WARNING: Removing unreachable block (ram,0x000211b0) */
/* WARNING: Removing unreachable block (ram,0x000211b4) */
/* WARNING: Removing unreachable block (ram,0x000211b8) */
/* WARNING: Removing unreachable block (ram,0x00021218) */
/* WARNING: Removing unreachable block (ram,0x000211c4) */
/* WARNING: Removing unreachable block (ram,0x000211cc) */
/* WARNING: Removing unreachable block (ram,0x00021220) */
/* WARNING: Removing unreachable block (ram,0x000211d8) */
/* WARNING: Removing unreachable block (ram,0x00021208) */
/* WARNING: Removing unreachable block (ram,0x00021214) */
/* WARNING: Removing unreachable block (ram,0x0002123c) */

void FUN_00021124(void)

{
    return;
}

void FUN_000212b0(void)

{
    int iVar1;
    undefined4 uVar2;
    int iVar3;
    undefined4 uVar4;
    undefined4 uVar5;

    iVar1 = __stack_chk_guard;
    iVar3 = pthread_once((pthread_once_t *)&DAT_00043348,
                         (__init_routine *)&DAT_00021250);
    uVar2 = stderr;
    if (iVar3 != 0) {
        uVar4 = FUN_00021534(isc_msgcat, 1, 0x6e, "fatal error");
        uVar5 = FUN_00021534(isc_msgcat, 1, 0x65, "failed");
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

/* WARNING: Removing unreachable block (ram,0x000215dc) */

void FUN_00021534(int *param_1, int param_2, int param_3, int param_4)

{
    if ((param_1 != (int *)0x0) && (*param_1 != 0x4d436174)) {
        /* WARNING: Subroutine does not return */
        FUN_00020c38("./../lib/isc/nls/msgcat.c", 0x77, 0,
                     "(((msgcat) != ((void *)0)) && (((const isc__magic_t "
                     "*)(msgcat))->magic == (((\'M\') << 24 | (\'C\') << 16 | "
                     "(\'a\') << 8 | (\'t\'))))) || msgcat == ((void *)0)");
    }
    if (param_2 < 1) {
        /* WARNING: Subroutine does not return */
        FUN_00020c38("./../lib/isc/nls/msgcat.c", 0x78, 0, "set > 0");
    }
    if (param_3 < 1) {
        /* WARNING: Subroutine does not return */
        FUN_00020c38("./../lib/isc/nls/msgcat.c", 0x79, 0, "message > 0");
    }
    if (param_4 != 0) {
        return;
    }
    /* WARNING: Subroutine does not return */
    FUN_00020c38("./../lib/isc/nls/msgcat.c", 0x7a, 0,
                 "default_text != ((void *)0)");
}

void FUN_00021640(int param_1)

{
    int iVar1;
    int *piVar2;
    int iVar3;
    undefined4 uVar4;
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
            uVar4 = 0x17;
        } else {
            FUN_00022eac(iVar1, auStack_a4, 0x80);
            uVar4 = FUN_00021534(isc_msgcat, 1, 0x65, "failed");
            FUN_0002557c("./../lib/isc/unix/net.c", 0x90, "socket() %s: %s",
                         uVar4, auStack_a4);
            uVar4 = 0x22;
        }
        goto LAB_00021694;
    }
    if (param_1 == 10) {
        local_c4 = 0x1c;
        iVar3 = getsockname(iVar1, &sStack_c0, &local_c4);
        if (iVar3 < 0) {
            FUN_00028558(isc_lctx, 0x41128, isc_modules, 0xfffffffc,
                         "retrieving the address of an IPv6 socket from the "
                         "kernel failed.");
        } else {
            if (local_c4 == 0x1c)
                goto LAB_00021684;
            FUN_00028558(
                isc_lctx, 0x41128, isc_modules, 0xfffffffc,
                "IPv6 structures in kernel and user space do not match.");
        }
        uVar4 = 0x17;
        FUN_00028558(isc_lctx, 0x41128, isc_modules, 0xfffffffc,
                     "IPv6 is not supported.");
    } else {
    LAB_00021684:
        uVar4 = 0;
    }
    close(iVar1);
LAB_00021694:
    if (local_24 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
}

void FUN_000218a8(void)

{
    int iVar1;
    int iVar2;

    iVar1 = __stack_chk_guard;
    iVar2 = pthread_once((pthread_once_t *)&DAT_00043350,
                         (__init_routine *)&LAB_00021840);
    if (iVar2 == 0) {
        if (iVar1 == __stack_chk_guard) {
            return;
        }
    } else if (iVar1 == __stack_chk_guard) {
        FUN_00025644("./../lib/isc/unix/net.c", 0xdd,
                     "((pthread_once((&once), (initialize_action)) == 0) ? 0 : "
                     "34) == 0");
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_00021940(void)

{
    int iVar1;

    iVar1 = __stack_chk_guard;
    FUN_000218a8();
    if (iVar1 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail(DAT_000410d8);
}

void FUN_00021998(void)

{
    int iVar1;

    iVar1 = __stack_chk_guard;
    FUN_000218a8();
    if (iVar1 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail(DAT_000410dc);
}

void FUN_000219f0(void)

{
    int iVar1;
    int iVar2;
    int *piVar3;
    undefined4 uVar4;
    undefined4 local_a8;
    undefined1 auStack_a4[128];
    int local_24;

    local_24 = __stack_chk_guard;
    iVar1 = FUN_00021998();
    if (iVar1 == 0) {
        iVar1 = socket(10, 1, 0);
        if (iVar1 == -1) {
            piVar3 = __errno_location();
            FUN_00022eac(*piVar3, auStack_a4, 0x80);
            uVar4 = FUN_00021534(isc_msgcat, 1, 0x65, "failed");
            FUN_0002557c("./../lib/isc/unix/net.c", 0x10a, "socket() %s: %s",
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
                    FUN_00022eac(*piVar3, auStack_a4, 0x80);
                    uVar4 = FUN_00021534(isc_msgcat, 1, 0x65, "failed");
                    FUN_0002557c("./../lib/isc/unix/net.c", 0x121,
                                 "socket() %s: %s", uVar4, auStack_a4);
                    DAT_000410e0 = 0x22;
                    iVar1 = DAT_000410e0;
                    goto LAB_00021a28;
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
LAB_00021a28:
    DAT_000410e0 = iVar1;
    if (local_24 != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail();
    }
    return;
}

void FUN_00021c24(void)

{
    int iVar1;
    int iVar2;
    int *piVar3;
    undefined4 uVar4;
    undefined4 local_a0;
    undefined1 auStack_9c[128];
    int local_1c;

    local_1c = __stack_chk_guard;
    iVar1 = FUN_00021998();
    if (iVar1 == 0) {
        iVar1 = socket(10, 2, 0x11);
        if (iVar1 == -1) {
            piVar3 = __errno_location();
            FUN_00022eac(*piVar3, auStack_9c, 0x80);
            uVar4 = FUN_00021534(isc_msgcat, 1, 0x65, "failed");
            FUN_0002557c("./../lib/isc/unix/net.c", 0x152, "socket() %s: %s",
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

void FUN_00022eac(int param_1, int param_2, undefined4 param_3)

{
    int iVar1;
    int iVar2;
    char *pcVar3;

    iVar1 = __stack_chk_guard;
    if (param_2 == 0) {
        /* WARNING: Subroutine does not return */
        FUN_00020c38("./../lib/isc/unix/strerror.c", 0x37, 0,
                     "buf != ((void *)0)");
    }
    iVar2 = pthread_once((pthread_once_t *)&DAT_00043374,
                         (__init_routine *)&LAB_00022e14);
    if (iVar2 != 0) {
        FUN_00025644(
            "./../lib/isc/unix/strerror.c", 0x39,
            "((pthread_once((&once), (init_lock)) == 0) ? 0 : 34) == 0");
    }
    iVar2 = pthread_mutex_lock((pthread_mutex_t *)&DAT_0004335c);
    if (iVar2 == 0) {
        pcVar3 = strerror(param_1);
    } else {
        FUN_00025644("./../lib/isc/unix/strerror.c", 0x3b,
                     "((pthread_mutex_lock(((&isc_strerror_lock))) == 0) ? 0 : "
                     "34) == 0");
        pcVar3 = strerror(param_1);
    }
    if (pcVar3 == (char *)0x0) {
        FUN_0001fa7c(param_2, param_3, "Unknown error: %u", param_1);
    } else {
        FUN_0001fa7c(param_2, param_3, "%s");
    }
    iVar2 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_0004335c);
    if (iVar2 == 0) {
        if (iVar1 == __stack_chk_guard) {
            return;
        }
    } else if (iVar1 == __stack_chk_guard) {
        FUN_00025644("./../lib/isc/unix/strerror.c", 0x41,
                     "((pthread_mutex_unlock(((&isc_strerror_lock))) == 0) ? 0 "
                     ": 34) == 0");
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_00023048(pthread_mutex_t *param_1, undefined4 param_2,
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
        FUN_00022eac(*piVar2, auStack_9c, 0x80);
        FUN_0002557c(param_2, param_3, "isc_mutex_init() failed: %s",
                     auStack_9c);
        iVar1 = 0x22;
    }
    if (local_1c != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail(iVar1);
    }
    return;
}

void FUN_000230ec(undefined4 *param_1, int param_2, undefined4 *param_3,
                  undefined4 *param_4)

{
    EVP_MD_CTX *ctx;
    char *pcVar1;
    EVP_MD *pEVar2;
    int iVar3;
    size_t sVar4;
    CMAC_CTX *ctx_00;
    EVP_CIPHER *cipher;
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
        FUN_000202c4();
    }
    if (param_2 == 0x37e) {
        uVar5 = param_3[1];
        key = (undefined1 *)*param_3;
        if (uVar5 < 0x10) {
            key = auStack_34;
            __memcpy_chk(key, (undefined1 *)*param_3, uVar5, 0x10);
            memset(key + uVar5, 0, 0x10 - uVar5);
        }
        ctx_00 = CMAC_CTX_new();
        if (ctx_00 == (CMAC_CTX *)0x0) {
            FUN_0001abf8(3, "MAC encrypt: CMAC %s CTX new failed.",
                         "AES128CMAC");
            sVar4 = local_3c;
        } else {
            cipher = EVP_aes_128_cbc();
            iVar3 = CMAC_Init(ctx_00, key, 0x10, cipher, (ENGINE *)0x0);
            if (iVar3 == 0) {
                FUN_0001abf8(3, "MAC encrypt: CMAC %s Init failed.",
                             "AES128CMAC");
            } else {
                ctx_01 = CMAC_CTX_get0_cipher_ctx(ctx_00);
                if ((ctx_01 == (EVP_CIPHER_CTX *)0x0) ||
                    (uVar5 = EVP_CIPHER_CTX_block_size(ctx_01),
                     uVar5 <= (uint)param_1[1])) {
                    iVar3 = CMAC_Update(ctx_00, (void *)*param_4, param_4[1]);
                    if (iVar3 == 0) {
                        FUN_0001abf8(3, "MAC encrypt: CMAC %s Update failed.",
                                     "AES128CMAC");
                    } else {
                        iVar3 =
                            CMAC_Final(ctx_00, (uchar *)*param_1, &local_3c);
                        if (iVar3 == 0) {
                            FUN_0001abf8(3,
                                         "MAC encrypt: CMAC %s Final failed.",
                                         "AES128CMAC");
                            local_3c = 0;
                        }
                    }
                } else {
                    FUN_0001abf8(3, "MAC encrypt: CMAC %s buf too small.",
                                 "AES128CMAC");
                }
            }
            CMAC_CTX_cleanup(ctx_00);
            sVar4 = local_3c;
        }
    } else {
        ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
        local_38 = 0;
        if (ctx == (EVP_MD_CTX *)0x0) {
            pcVar1 = OBJ_nid2sn(param_2);
            FUN_0001abf8(3, "MAC encrypt: MAC %s Digest CTX new failed.",
                         pcVar1);
            sVar4 = local_38;
        } else {
            EVP_MD_CTX_set_flags(ctx, 8);
            pcVar1 = OBJ_nid2sn(param_2);
            pEVar2 = EVP_get_digestbyname(pcVar1);
            iVar3 = EVP_DigestInit_ex(ctx, pEVar2, (ENGINE *)0x0);
            if (iVar3 == 0) {
                pcVar1 = OBJ_nid2sn(param_2);
                FUN_0001abf8(3, "MAC encrypt: MAC %s Digest Init failed.",
                             pcVar1);
            } else {
                pEVar2 = EVP_MD_CTX_md(ctx);
                uVar5 = EVP_MD_size(pEVar2);
                if ((uint)param_1[1] < uVar5) {
                    pcVar1 = OBJ_nid2sn(param_2);
                    FUN_0001abf8(3, "MAC encrypt: MAC %s buf too small.",
                                 pcVar1);
                } else {
                    iVar3 = EVP_DigestUpdate(ctx, (void *)*param_3, param_3[1]);
                    if (iVar3 == 0) {
                        pcVar1 = OBJ_nid2sn(param_2);
                        FUN_0001abf8(
                            3, "MAC encrypt: MAC %s Digest Update key failed.",
                            pcVar1);
                    } else {
                        iVar3 =
                            EVP_DigestUpdate(ctx, (void *)*param_4, param_4[1]);
                        if (iVar3 == 0) {
                            pcVar1 = OBJ_nid2sn(param_2);
                            FUN_0001abf8(3,
                                         "MAC encrypt: MAC %s Digest Update "
                                         "data failed.",
                                         pcVar1);
                        } else {
                            iVar3 = EVP_DigestFinal(ctx, (uchar *)*param_1,
                                                    &local_38);
                            if (iVar3 == 0) {
                                pcVar1 = OBJ_nid2sn(param_2);
                                FUN_0001abf8(
                                    3,
                                    "MAC encrypt: MAC %s Digest Final failed.",
                                    pcVar1);
                                local_38 = 0;
                            }
                        }
                    }
                }
            }
            local_3c = local_38;
            EVP_MD_CTX_free(ctx);
            sVar4 = local_3c;
        }
    }
    if (local_24 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail(sVar4);
}

void FUN_000234a0(undefined4 param_1, undefined4 param_2, undefined4 param_3,
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
    __n = FUN_000230ec(&puStack_74, param_1, &local_6c, &local_64);
    if (0x13 < __n) {
        __n = 0x14;
    }
    memcpy((void *)(param_4 + param_5 + 4), auStack_5c, __n);
    if (local_1c == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail(__n + 4);
}

void FUN_00023540(undefined4 param_1, undefined4 param_2, undefined4 param_3,
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
    uVar2 = FUN_000230ec(&puStack_74, param_1, &local_6c, &local_64);
    if (0x13 < uVar2) {
        uVar2 = 0x14;
    }
    if (uVar2 + 4 == param_6) {
        iVar3 = FUN_0002a274(auStack_5c, param_4 + param_5 + 4, uVar2);
        bVar1 = iVar3 == 0;
    } else {
        FUN_0001abf8(3, "MAC decrypt: MAC length error");
        bVar1 = false;
    }
    if (local_1c == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar1);
}

void FUN_00023700(void)

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
        FUN_0001fa7c(__s, 0x80, "%2d %s %02d:%02d:%02d", ptVar1->tm_mday,
                     *(undefined4 *)(months + ptVar1->tm_mon * 4),
                     ptVar1->tm_hour, ptVar1->tm_min, ptVar1->tm_sec);
    }
    if (local_24 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail(__s);
}

void FUN_00023800(time_t param_1)

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
        FUN_0001fa7c(__s, 0x80, "%02d:%02d:%02d", ptVar1->tm_hour,
                     ptVar1->tm_min, ptVar1->tm_sec);
    }
    if (local_1c == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail(__s);
}

void FUN_00025304(undefined4 param_1, undefined4 param_2, undefined4 param_3,
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

void FUN_000253a8(undefined4 param_1, undefined4 param_2, undefined4 param_3,
                  undefined4 param_4)

{
    int iVar1;
    FILE *pFVar2;
    undefined4 uVar3;

    pFVar2 = stderr;
    iVar1 = __stack_chk_guard;
    uVar3 = FUN_00021534(isc_msgcat, 1, 0x6e, "fatal error");
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

void FUN_0002557c(undefined4 param_1, undefined4 param_2, undefined4 param_3,
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

void FUN_000255f0(undefined4 param_1, undefined4 param_2, undefined4 param_3,
                  undefined4 param_4)

{
    undefined4 uStack_4;

    uStack_4 = param_4;
    (*DAT_000410ec)(param_1, param_2, param_3, &uStack_4, &uStack_4,
                    __stack_chk_guard);
    /* WARNING: Subroutine does not return */
    abort();
}

void FUN_00025644(undefined4 param_1, undefined4 param_2, undefined4 param_3)

{
    undefined4 uVar1;

    uVar1 = FUN_00021534(isc_msgcat, 1, 0x65, "failed");
    /* WARNING: Subroutine does not return */
    FUN_000255f0(param_1, param_2, "RUNTIME_CHECK(%s) %s", param_3, uVar1);
}

void FUN_000259b4(int param_1)

{
    char *pcVar1;
    size_t __n;
    int iVar2;
    int iVar3;
    long lVar4;
    uint uVar5;
    undefined4 uVar6;
    int iVar7;
    char *pcVar8;
    char *__s;
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
            FUN_00020c38("./../lib/isc/log.c", 0x485, 0, "channel->type == 3");
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
        FUN_0002a328(auStack_2540);
        iVar2 = FUN_0002a3b4(auStack_2540, pcVar8);
        if (pcVar1 != *(char **)(param_1 + 0x14)) {
            pcVar1[-1] = '/';
        }
        if (iVar2 != 0)
            goto LAB_00025ce8;
        iVar2 = -1;
        while (iVar3 = FUN_0002a51c(auStack_2540), iVar3 == 0) {
            while (
                ((__n < local_203c &&
                  (iVar3 = strncmp(acStack_213c, pcVar1, __n), iVar3 == 0)) &&
                 (acStack_213c[__n] == '.'))) {
                lVar4 = strtol(acStack_213c + __n + 1, &local_2544, 10);
                if (*local_2544 == '\0' && iVar2 < lVar4) {
                    iVar2 = lVar4;
                }
                iVar3 = FUN_0002a51c(auStack_2540);
                if (iVar3 != 0)
                    goto LAB_00025b10;
            }
        }
    LAB_00025b10:
        iVar2 = iVar2 + 1;
        FUN_0002a600(auStack_2540);
        iVar3 = *(int *)(param_1 + 0x18);
        if (iVar3 <= iVar2 && iVar3 != -1) {
        LAB_00025b54:
            iVar2 = iVar2 + -1;
            iVar7 = iVar2;
            if (iVar3 <= iVar2) {
                do {
                    uVar5 =
                        FUN_0001fa7c(auStack_2034, 0x1001, "%s.%d", __s, iVar7);
                    if (uVar5 < 0x1001) {
                        iVar2 = FUN_0002b6f0(auStack_2034);
                        if (iVar2 == 0x26 || iVar2 == 0)
                            goto code_r0x00025d60;
                    } else {
                        iVar2 = 0x13;
                    }
                    uVar6 = FUN_00028c7c(iVar2);
                    iVar2 = iVar7 + -1;
                    __syslog_chk(3, 1,
                                 "unable to remove log file \'%s.%d\': %s", __s,
                                 iVar7, uVar6);
                    iVar3 = *(int *)(param_1 + 0x18);
                    iVar7 = iVar2;
                    if (iVar2 < iVar3)
                        break;
                } while (true);
            }
        }
        if (0 < iVar2) {
            do {
                while (true) {
                    iVar3 = iVar2 + -1;
                    uVar5 =
                        FUN_0001fa7c(auStack_2034, 0x1001, "%s.%d", __s, iVar3);
                    if (uVar5 < 0x1001)
                        break;
                LAB_00025c50:
                    iVar7 = 0x13;
                LAB_00025c54:
                    uVar6 = FUN_00028c7c(iVar7);
                    __syslog_chk(
                        3, 1,
                        "unable to rename log file \'%s.%d\' to \'%s.%d\': %s",
                        __s, iVar3, __s, iVar2, uVar6);
                    iVar2 = iVar3;
                    if (iVar3 == 0)
                        goto LAB_00025c88;
                }
                uVar5 = FUN_0001fa7c(auStack_1030, 0x1001, "%s.%d", __s, iVar2);
                if (0x1000 < uVar5)
                    goto LAB_00025c50;
                iVar7 = FUN_0002b79c(auStack_2034, auStack_1030);
                if (iVar7 != 0x26 && iVar7 != 0)
                    goto LAB_00025c54;
                iVar2 = iVar3;
            } while (iVar3 != 0);
        LAB_00025c88:
            iVar3 = *(int *)(param_1 + 0x18);
        }
        if (iVar3 == 0) {
            iVar2 = FUN_0002b6f0(__s);
            if (iVar2 != 0x26 && iVar2 != 0) {
                uVar6 = FUN_00028c7c();
                __syslog_chk(3, 1, "unable to remove log file \'%s\': %s", __s,
                             uVar6);
                iVar2 = 0;
                goto LAB_00025ce8;
            }
        } else {
            uVar5 = FUN_0001fa7c(auStack_1030, 0x1001, &DAT_0002eea8, __s);
            if (uVar5 < 0x1001) {
                iVar2 = FUN_0002b79c(__s, auStack_1030);
                if (iVar2 == 0x26 || iVar2 == 0)
                    goto LAB_00025ce4;
            } else {
                iVar2 = 0x13;
            }
            uVar6 = FUN_00028c7c(iVar2);
            __syslog_chk(3, 1,
                         "unable to rename log file \'%s\' to \'%s.0\': %s",
                         __s, __s, uVar6);
        }
    }
LAB_00025ce4:
    iVar2 = 0;
LAB_00025ce8:
    if (local_2c != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail(iVar2);
    }
    return;
code_r0x00025d60:
    iVar3 = *(int *)(param_1 + 0x18);
    iVar2 = iVar7;
    goto LAB_00025b54;
}

/* WARNING: Removing unreachable block (ram,0x00027830) */

void FUN_000277a4(void)

{
    return;
}

void FUN_0002783c(int *param_1, undefined4 *param_2, undefined4 *param_3,
                  int param_4, int param_5, int param_6, undefined4 param_7,
                  undefined4 param_8, int param_9, undefined4 param_10)

{
    int iVar1;
    uint uVar2;
    uint uVar3;
    undefined4 uVar4;
    int *piVar5;
    size_t sVar6;
    int *piVar7;
    char *pcVar8;
    uint uVar9;
    int iVar10;
    int iVar11;
    undefined4 *puVar12;
    char *pcVar13;
    pthread_mutex_t *__mutex;
    uint uVar14;
    char *pcVar15;
    char *pcVar16;
    int iVar17;
    undefined4 *__ptr;
    char *pcVar18;
    undefined4 uVar19;
    char *pcVar20;
    char *pcVar21;
    undefined4 *puVar22;
    int iVar23;
    char *pcVar24;
    char *pcVar25;
    bool bVar26;
    int local_194;
    char *local_190;
    undefined1 auStack_160[8];
    stat64 sStack_158;
    stat64 sStack_f0;
    char local_84[24];
    char local_6c[64];
    int local_2c;

    local_2c = __stack_chk_guard;
    local_194 = param_9;
    if ((param_1 != (int *)0x0) && (*param_1 != 0x4c637478)) {
        /* WARNING: Subroutine does not return */
        FUN_00020c38("./../lib/isc/log.c", 0x590, 0,
                     "lctx == ((void *)0) || (((lctx) != ((void *)0)) && "
                     "(((const isc__magic_t *)(lctx))->magic == (((\'L\') << "
                     "24 | (\'c\') << 16 | (\'t\') << 8 | (\'x\')))))");
    }
    if (param_2 == (undefined4 *)0x0) {
        /* WARNING: Subroutine does not return */
        FUN_00020c38("./../lib/isc/log.c", 0x591, 0, "category != ((void *)0)");
    }
    if (param_3 == (undefined4 *)0x0) {
        /* WARNING: Subroutine does not return */
        FUN_00020c38("./../lib/isc/log.c", 0x592, 0, "module != ((void *)0)");
    }
    if (param_4 == 0) {
        /* WARNING: Subroutine does not return */
        FUN_00020c38("./../lib/isc/log.c", 0x593, 0, "level != 0");
    }
    if (param_9 == 0) {
        /* WARNING: Subroutine does not return */
        FUN_00020c38("./../lib/isc/log.c", 0x594, 0, "format != ((void *)0)");
    }
    if (param_1 != (int *)0x0) {
        if ((uint)param_1[3] <= (uint)param_2[1]) {
            /* WARNING: Subroutine does not return */
            FUN_00020c38("./../lib/isc/log.c", 0x59e, 0,
                         "category->id < lctx->category_count");
        }
        if ((uint)param_1[5] <= (uint)param_3[1]) {
            /* WARNING: Subroutine does not return */
            FUN_00020c38("./../lib/isc/log.c", 0x59f, 0,
                         "module->id < lctx->module_count");
        }
        iVar1 = FUN_000277a4(param_1, param_4);
        if (iVar1 != 0) {
            if (param_6 != 0) {
                local_194 = FUN_00021534(param_6, param_7, param_8, param_9);
            }
            __mutex = (pthread_mutex_t *)(param_1 + 7);
            local_6c[0] = '\0';
            local_84[0] = '\0';
            iVar1 = pthread_mutex_lock(__mutex);
            if (iVar1 != 0) {
                FUN_00025644("./../lib/isc/log.c", 0x5ac,
                             "((pthread_mutex_lock(((&lctx->lock))) == 0) ? 0 "
                             ": 34) == 0");
            }
            uVar9 = 0;
            iVar1 = param_1[0xd];
            *(undefined1 *)(param_1 + 0xe) = 0;
            puVar22 = *(undefined4 **)(*(int *)(iVar1 + 0x10) + param_2[1] * 8);
            uVar14 = (uint)(puVar22 == (undefined4 *)0x0);
            do {
                while (true) {
                    if (((uVar14 & (uVar9 ^ 1)) != 0) &&
                        (puVar22 =
                             (undefined4 *)**(undefined4 **)(iVar1 + 0x10),
                         (undefined4 *)**(undefined4 **)(iVar1 + 0x10) ==
                             (undefined4 *)0x0)) {
                        puVar22 = &DAT_00043378;
                    }
                    if (param_3 == (undefined4 *)*puVar22 ||
                        (undefined4 *)*puVar22 == (undefined4 *)0x0)
                        break;
                    puVar22 = (undefined4 *)puVar22[3];
                    uVar2 = uVar9;
                LAB_000279c4:
                    uVar14 = (uint)(puVar22 == (undefined4 *)0x0);
                    if ((uVar14 & uVar2) != 0)
                        goto LAB_00027a3c;
                }
                iVar17 = puVar22[1];
                puVar22 = (undefined4 *)puVar22[3];
                uVar14 = *(uint *)(iVar17 + 0xc);
                if (((uVar14 & 0x1000) == 0) || (param_1[6] != 0)) {
                    iVar10 = *(int *)(iVar17 + 8);
                    if (iVar10 == 0) {
                        iVar10 = param_1[6];
                    }
                    if (param_4 <= iVar10) {
                        if (((uVar14 & 1) != 0) && (local_6c[0] == '\0')) {
                            iVar10 = FUN_0002959c(&sStack_f0);
                            if (iVar10 != 0) {
                                FUN_00025644("./../lib/isc/log.c", 0x5eb,
                                             "isc_time_now((&isctime)) == 0");
                            }
                            FUN_00029fc8(&sStack_f0, local_6c, 0x40);
                            uVar14 = *(uint *)(iVar17 + 0xc);
                        }
                        if (((uVar14 & 2) != 0) && (local_84[0] == '\0')) {
                            if (param_4 + 5 < 0 == SCARRY4(param_4, 5)) {
                                if (param_4 < 1) {
                                    FUN_0001fa7c(
                                        local_84, 0x18, &DAT_0002f658,
                                        (&PTR_s_debug_00040b04)[-param_4]);
                                } else {
                                    FUN_0001fa7c(local_84, 0x18,
                                                 "%s %d: ", "debug", param_4);
                                }
                            } else {
                                uVar4 = FUN_00021534(isc_msgcat, 10, 0x322,
                                                     "level");
                                FUN_0001fa7c(local_84, 0x18, "%s %d: ", uVar4,
                                             param_4);
                            }
                        }
                        if ((char)param_1[0xe] == '\0') {
                            piVar5 = param_1 + 0xe;
                            FUN_0001f0c4(piVar5, 0x2000, local_194, param_10);
                            if (param_5 != 0) {
                                FUN_00029258(&sStack_f0,
                                             *(undefined4 *)(iVar1 + 0x18), 0);
                                iVar10 = FUN_0002959c(auStack_160);
                                if (iVar10 != 0) {
                                    FUN_00025644(
                                        "./../lib/isc/log.c", 0x61a,
                                        "isc_time_now((&oldest)) == 0");
                                }
                                iVar10 = FUN_00029b78(auStack_160, &sStack_f0,
                                                      auStack_160);
                                if (iVar10 == 0) {
                                    __ptr = (undefined4 *)param_1[0x80e];
                                    while (__ptr != (undefined4 *)0x0) {
                                        iVar10 = FUN_00029948(__ptr + 1,
                                                              auStack_160);
                                        if (iVar10 < 0) {
                                            puVar12 = (undefined4 *)__ptr[4];
                                            if (puVar12 == (undefined4 *)0x0) {
                                                if ((undefined4 *)
                                                        param_1[0x80f] !=
                                                    __ptr) {
                                                    /* WARNING: Subroutine does
                                                     * not return */
                                                    FUN_00020c38(
                                                        "./../lib/isc/log.c",
                                                        0x638, 2,
                                                        "(lctx->messages).tail "
                                                        "== (message)");
                                                }
                                                iVar10 = __ptr[3];
                                                param_1[0x80f] = iVar10;
                                            } else {
                                                puVar12[3] = __ptr[3];
                                                iVar10 = __ptr[3];
                                            }
                                            if (iVar10 == 0) {
                                                if ((undefined4 *)
                                                        param_1[0x80e] !=
                                                    __ptr) {
                                                    /* WARNING: Subroutine does
                                                     * not return */
                                                    FUN_00020c38(
                                                        "./../lib/isc/log.c",
                                                        0x638, 2,
                                                        "(lctx->messages).head "
                                                        "== (message)");
                                                }
                                                param_1[0x80e] = (int)puVar12;
                                            } else {
                                                *(undefined4 **)(iVar10 +
                                                                 0x10) =
                                                    puVar12;
                                            }
                                            free(__ptr);
                                            __ptr = puVar12;
                                        } else {
                                            iVar10 = strcmp((char *)piVar5,
                                                            (char *)*__ptr);
                                            if (iVar10 == 0) {
                                                iVar1 = pthread_mutex_unlock(
                                                    __mutex);
                                                if (iVar1 != 0) {
                                                    FUN_00025644(
                                                        "./../lib/isc/log.c",
                                                        0x64e,
                                                        "((pthread_mutex_"
                                                        "unlock(((&lctx->lock))"
                                                        ") == 0) ? 0 : 34) == "
                                                        "0");
                                                }
                                                goto LAB_00027a4c;
                                            }
                                            __ptr = (undefined4 *)__ptr[4];
                                        }
                                    }
                                }
                                sVar6 = strlen((char *)piVar5);
                                piVar7 =
                                    (int *)FUN_00019a68(0, sVar6 + 0x15, 0);
                                if (piVar7 != (int *)0x0) {
                                    *piVar7 = (int)(piVar7 + 5);
                                    FUN_000208c4(piVar7 + 5, piVar5, sVar6 + 1);
                                    iVar10 = FUN_0002959c(piVar7 + 1);
                                    if (iVar10 != 0) {
                                        FUN_00025644(
                                            "./../lib/isc/log.c", 0x665,
                                            "isc_time_now((&new->time)) == 0");
                                    }
                                    iVar10 = param_1[0x80f];
                                    if (iVar10 == 0) {
                                        param_1[0x80e] = (int)piVar7;
                                    } else {
                                        *(int **)(iVar10 + 0x10) = piVar7;
                                    }
                                    piVar7[3] = iVar10;
                                    piVar7[4] = 0;
                                    param_1[0x80f] = (int)piVar7;
                                }
                            }
                        }
                        uVar14 = *(uint *)(iVar17 + 0xc);
                        uVar9 = uVar14 & 0x10;
                        if ((uVar9 != 0) &&
                            (uVar9 = *(uint *)(iVar1 + 0x20), uVar9 != 0)) {
                            uVar9 = 1;
                        }
                        iVar10 = *(int *)(iVar17 + 4);
                        iVar11 = uVar14 << 0x1d;
                        iVar23 = uVar14 << 0x1c;
                        if (iVar10 == 3) {
                            if (*(int *)(iVar17 + 0x28) == 0) {
                                iVar10 = *(int *)(iVar17 + 0x10);
                                if (iVar10 != 0)
                                    goto LAB_00027b74;
                            } else {
                                if ((*(int *)(iVar17 + 0x18) == -2) &&
                                    (((iVar10 = __xstat64(
                                           3, *(char **)(iVar17 + 0x14),
                                           &sStack_158),
                                       iVar10 == 0 ||
                                           (piVar5 = __errno_location(),
                                            *piVar5 != 2)) &&
                                      (iVar10 = *(int *)(iVar17 + 0x24),
                                       bVar26 = (uint)sStack_158.st_size <
                                                *(uint *)(iVar17 + 0x20),
                                       (int)(sStack_158.st_size._4_4_ -
                                             (iVar10 + (uint)bVar26)) < 0 ==
                                           (SBORROW4(sStack_158.st_size._4_4_,
                                                     iVar10) !=
                                            SBORROW4(sStack_158.st_size._4_4_ -
                                                         iVar10,
                                                     (uint)bVar26))))))
                                    goto LAB_00027b40;
                                fclose(*(FILE **)(iVar17 + 0x10));
                                *(undefined4 *)(iVar17 + 0x10) = 0;
                                *(undefined4 *)(iVar17 + 0x28) = 0;
                                if (*(int *)(iVar17 + 4) != 3) {
                                    /* WARNING: Subroutine does not return */
                                    FUN_00020c38("./../lib/isc/log.c", 0x52e, 0,
                                                 "channel->type == 3");
                                }
                            }
                            pcVar15 = *(char **)(iVar17 + 0x14);
                            if ((pcVar15 == (char *)0x0) ||
                                (*pcVar15 == '\0')) {
                                /* WARNING: Subroutine does not return */
                                FUN_00020c38(
                                    "./../lib/isc/log.c", 0x533, 0,
                                    "path != ((void *)0) && *path != \'\\0\'");
                            }
                            iVar10 = __xstat64(3, pcVar15, &sStack_f0);
                            if (iVar10 != 0)
                                goto LAB_00028284;
                            uVar3 = *(uint *)(iVar17 + 0x20);
                            iVar10 = *(int *)(iVar17 + 0x24);
                            uVar2 =
                                (uint)((sStack_f0.st_mode & 0xf000) == 0x8000);
                            if (uVar3 != 0 || iVar10 != 0) {
                                if (((iVar10 < (int)(uint)(uVar3 == 0)) ||
                                     ((int)(sStack_f0.st_size._4_4_ -
                                            (iVar10 +
                                             (uint)((uint)sStack_f0.st_size <
                                                    uVar3))) < 0 !=
                                      (SBORROW4(sStack_f0.st_size._4_4_,
                                                iVar10) !=
                                       SBORROW4(sStack_f0.st_size._4_4_ -
                                                    iVar10,
                                                (uint)((uint)sStack_f0.st_size <
                                                       uVar3))))) ||
                                    (uVar2 == 0))
                                    goto LAB_00028284;
                                if (*(int *)(iVar17 + 0x18) != -2)
                                    goto LAB_00027edc;
                            LAB_000282e8:
                                uVar9 = 1;
                                goto LAB_000279c4;
                            }
                            if ((*(int *)(iVar17 + 0x18) == -2) ||
                                (uVar2 == 0)) {
                            LAB_00028284:
                                uVar3 = FUN_00028e34(pcVar15, &DAT_0002d9ec,
                                                     iVar17 + 0x10);
                                uVar2 = uVar3;
                                if (uVar3 != 0) {
                                    uVar2 = 1;
                                }
                                if (uVar3 == 0x3a || uVar3 == 0) {
                                    if (uVar2 == 0) {
                                        iVar10 = *(int *)(iVar17 + 0x10);
                                        *(uint *)(iVar17 + 0xc) =
                                            *(uint *)(iVar17 + 0xc) &
                                            0xffff7fff;
                                        goto LAB_00027b74;
                                    }
                                    goto LAB_000282e8;
                                }
                                uVar14 = *(uint *)(iVar17 + 0xc);
                            } else {
                            LAB_00027edc:
                                uVar3 = FUN_000259b4(iVar17);
                                if (uVar3 == 0)
                                    goto LAB_00028284;
                                uVar14 = *(uint *)(iVar17 + 0xc);
                                if ((uVar14 & 0x8000) == 0) {
                                    uVar19 = *(undefined4 *)(iVar17 + 0x14);
                                    uVar4 = FUN_00028c7c();
                                    __syslog_chk(3, 1,
                                                 "isc_log_open: roll_log "
                                                 "\'%s\' failed: %s",
                                                 uVar19, uVar4);
                                    uVar14 = *(uint *)(iVar17 + 0xc) | 0x8000;
                                    *(uint *)(iVar17 + 0xc) = uVar14;
                                }
                                if (uVar3 == 0x3a)
                                    goto LAB_00027b40;
                            }
                            if ((uVar14 & 0x8000) == 0) {
                                uVar19 = *(undefined4 *)(iVar17 + 0x14);
                                uVar4 = FUN_00028c7c(uVar3);
                                __syslog_chk(3, 1,
                                             "isc_log_open \'%s\' failed: %s",
                                             uVar19, uVar4);
                                *(uint *)(iVar17 + 0xc) =
                                    *(uint *)(iVar17 + 0xc) | 0x8000;
                            }
                        } else {
                            if (iVar10 != 4) {
                                if (iVar10 != 2)
                                    goto LAB_00027b40;
                                if (param_4 < 1) {
                                    uVar2 = 2;
                                    if (param_4 + 5 < 0 ==
                                        SCARRY4(param_4, 5)) {
                                        uVar2 = *(uint *)(&DAT_0002ecf4 +
                                                          param_4 * -4);
                                    }
                                } else {
                                    uVar2 = 7;
                                }
                                if ((uVar14 & 1) == 0) {
                                    pcVar16 = "";
                                    pcVar15 = pcVar16;
                                    if (uVar9 == 0)
                                        goto LAB_00028008;
                                LAB_00027dac:
                                    pcVar13 = *(char **)(iVar1 + 0x20);
                                    pcVar24 = ": ";
                                    if (iVar11 < 0)
                                        goto LAB_00027dc4;
                                LAB_00028020:
                                    pcVar8 = "";
                                    pcVar25 = pcVar8;
                                    if (-1 < iVar23)
                                        goto LAB_00028034;
                                LAB_00027ddc:
                                    pcVar18 = (char *)*param_3;
                                    pcVar20 = ": ";
                                } else {
                                    pcVar16 = local_6c;
                                    pcVar15 = " ";
                                    if (uVar9 != 0)
                                        goto LAB_00027dac;
                                LAB_00028008:
                                    pcVar13 = "";
                                    pcVar24 = pcVar13;
                                    if (-1 < iVar11)
                                        goto LAB_00028020;
                                LAB_00027dc4:
                                    pcVar8 = ": ";
                                    pcVar25 = (char *)*param_2;
                                    if (iVar23 < 0)
                                        goto LAB_00027ddc;
                                LAB_00028034:
                                    pcVar18 = "";
                                    pcVar20 = pcVar18;
                                }
                                if ((int)(uVar14 << 0x1e) < 0) {
                                    pcVar21 = local_84;
                                } else {
                                    pcVar21 = "";
                                }
                                __syslog_chk(uVar2 | *(uint *)(iVar17 + 0x10),
                                             1, "%s%s%s%s%s%s%s%s%s%s", pcVar16,
                                             pcVar15, pcVar13, pcVar24, pcVar25,
                                             pcVar8, pcVar18, pcVar20, pcVar21,
                                             param_1 + 0xe);
                                uVar9 = 1;
                                uVar2 = 1;
                                goto LAB_000279c4;
                            }
                            iVar10 = *(int *)(iVar17 + 0x10);
                        LAB_00027b74:
                            if ((uVar14 & 1) == 0) {
                                pcVar15 = "";
                                pcVar16 = pcVar15;
                                if (uVar9 == 0)
                                    goto LAB_00027f94;
                            LAB_00027b90:
                                pcVar24 = *(char **)(iVar1 + 0x20);
                                pcVar13 = ": ";
                            } else {
                                pcVar15 = local_6c;
                                pcVar16 = " ";
                                if (uVar9 != 0)
                                    goto LAB_00027b90;
                            LAB_00027f94:
                                pcVar24 = "";
                                pcVar13 = pcVar24;
                            }
                            pcVar25 = "";
                            pcVar8 = "";
                            if (iVar11 < 0) {
                                pcVar25 = (char *)*param_2;
                                pcVar8 = ": ";
                            }
                            pcVar20 = "";
                            local_190 = "";
                            if (iVar23 < 0) {
                                pcVar20 = ": ";
                                local_190 = (char *)*param_3;
                            }
                            if ((int)(uVar14 << 0x1e) < 0) {
                                pcVar18 = local_84;
                            } else {
                                pcVar18 = "";
                            }
                            __fprintf_chk(iVar10, 1, "%s%s%s%s%s%s%s%s%s%s\n",
                                          pcVar15, pcVar16, pcVar24, pcVar13,
                                          pcVar25, pcVar8, local_190, pcVar20,
                                          pcVar18, param_1 + 0xe);
                            fflush(*(FILE **)(iVar17 + 0x10));
                            if ((int)(uint)(*(int *)(iVar17 + 0x20) == 0) <=
                                *(int *)(iVar17 + 0x24)) {
                                if (*(int *)(iVar17 + 4) != 3) {
                                    /* WARNING: Subroutine does not return */
                                    FUN_00020c38("./../lib/isc/log.c", 0x6bb, 2,
                                                 "channel->type == 3");
                                }
                                iVar10 = fileno(*(FILE **)(iVar17 + 0x10));
                                iVar10 = __fxstat64(3, iVar10, &sStack_158);
                                if ((-1 < iVar10) &&
                                    (iVar10 = *(int *)(iVar17 + 0x24),
                                     bVar26 = *(uint *)(iVar17 + 0x20) <
                                              (uint)sStack_158.st_size,
                                     (int)(iVar10 - (sStack_158.st_size._4_4_ +
                                                     (uint)bVar26)) < 0 !=
                                         (SBORROW4(iVar10,
                                                   sStack_158.st_size._4_4_) !=
                                          SBORROW4(iVar10 -
                                                       sStack_158.st_size._4_4_,
                                                   (uint)bVar26)))) {
                                    *(undefined4 *)(iVar17 + 0x28) = 1;
                                    uVar9 = 1;
                                    uVar2 = 1;
                                    goto LAB_000279c4;
                                }
                            }
                        }
                    }
                LAB_00027b40:
                    uVar9 = 1;
                    uVar2 = uVar9;
                    goto LAB_000279c4;
                }
                uVar9 = 1;
                uVar14 = (uint)(puVar22 == (undefined4 *)0x0);
            } while (puVar22 != (undefined4 *)0x0);
        LAB_00027a3c:
            iVar1 = pthread_mutex_unlock(__mutex);
            if (iVar1 != 0) {
                FUN_00025644("./../lib/isc/log.c", 0x6e6,
                             "((pthread_mutex_unlock(((&lctx->lock))) == 0) ? "
                             "0 : 34) == 0");
            }
        }
    }
LAB_00027a4c:
    if (local_2c == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_00028558(void)

{
    int iVar1;

    iVar1 = __stack_chk_guard;
    FUN_0002783c();
    if (iVar1 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_000285c8(void)

{
    int iVar1;

    iVar1 = __stack_chk_guard;
    FUN_0002783c();
    if (iVar1 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_000288f8(uint param_1, uint param_2, uint param_3, uint param_4,
                  uint param_5)

{
    int iVar1;
    uint *puVar2;
    uint *puVar3;
    int iVar4;
    undefined4 uVar5;

    iVar1 = __stack_chk_guard;
    if ((param_1 & 0xffff) != 0) {
        /* WARNING: Subroutine does not return */
        FUN_00020c38("./../lib/isc/result.c", 0x79, 0, "base % 65536 == 0");
    }
    if (0x10000 < param_2) {
        /* WARNING: Subroutine does not return */
        FUN_00020c38("./../lib/isc/result.c", 0x7a, 0, "nresults <= 65536");
    }
    if (param_3 == 0) {
        /* WARNING: Subroutine does not return */
        FUN_00020c38("./../lib/isc/result.c", 0x7b, 0, "txt != ((void *)0)");
    }
    puVar3 = (uint *)malloc(0x1c);
    if (puVar3 == (uint *)0x0) {
        uVar5 = 1;
    } else {
        *puVar3 = param_1;
        puVar3[3] = param_4;
        puVar3[1] = (param_2 - 1) + param_1;
        puVar3[2] = param_3;
        puVar3[4] = param_5;
        puVar3[5] = 0xffffffff;
        puVar3[6] = 0xffffffff;
        iVar4 = pthread_mutex_lock((pthread_mutex_t *)&DAT_0004338c);
        if (iVar4 != 0) {
            FUN_00025644(
                "./../lib/isc/result.c", 0x8b,
                "((pthread_mutex_lock(((&lock))) == 0) ? 0 : 34) == 0");
        }
        puVar2 = puVar3;
        if (DAT_000433a8 != (uint *)0x0) {
            DAT_000433a8[6] = (uint)puVar3;
            puVar2 = DAT_000433a4;
        }
        DAT_000433a4 = puVar2;
        puVar3[5] = (uint)DAT_000433a8;
        puVar3[6] = 0;
        DAT_000433a8 = puVar3;
        iVar4 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_0004338c);
        uVar5 = 0;
        if (iVar4 != 0) {
            FUN_00025644(
                "./../lib/isc/result.c", 0x8f,
                "((pthread_mutex_unlock(((&lock))) == 0) ? 0 : 34) == 0");
        }
    }
    if (iVar1 != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail(uVar5);
    }
    return;
}

void FUN_00028abc(void)

{
    int iVar1;
    int iVar2;
    undefined4 uVar3;

    iVar1 = __stack_chk_guard;
    iVar2 = FUN_00023048(&DAT_0004338c, "./../lib/isc/result.c", 0x98);
    if (iVar2 != 0) {
        FUN_00025644(
            "./../lib/isc/result.c", 0x98,
            "isc__mutex_init((&lock), \"./../lib/isc/result.c\", 152) == 0");
    }
    DAT_000433a4 = 0;
    DAT_000433a8 = 0;
    iVar2 = FUN_000288f8(0, 0x3e, &PTR_s_success_00041138, isc_msgcat, 2);
    if (iVar2 != 0) {
        uVar3 = FUN_00021534(isc_msgcat, 1, 0x65, "failed");
        FUN_0002557c("./../lib/isc/result.c", 0x9e, "register_table() %s: %u",
                     uVar3, iVar2);
    }
    if (iVar1 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_00028bdc(void)

{
    int iVar1;
    int iVar2;

    iVar1 = __stack_chk_guard;
    FUN_000212b0();
    iVar2 = pthread_once((pthread_once_t *)&DAT_000433ac, FUN_00028abc);
    if (iVar2 == 0) {
        if (iVar1 == __stack_chk_guard) {
            return;
        }
    } else if (iVar1 == __stack_chk_guard) {
        FUN_00025644("./../lib/isc/result.c", 0xa8,
                     "((pthread_once((&once), (initialize_action)) == 0) ? 0 : "
                     "34) == 0");
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_00028c7c(uint param_1)

{
    int iVar1;
    int iVar2;
    int iVar3;
    uint *puVar4;

    iVar1 = __stack_chk_guard;
    FUN_00028bdc();
    iVar2 = pthread_mutex_lock((pthread_mutex_t *)&DAT_0004338c);
    if (iVar2 != 0) {
        FUN_00025644("./../lib/isc/result.c", 0xb3,
                     "((pthread_mutex_lock(((&lock))) == 0) ? 0 : 34) == 0");
    }
    puVar4 = (uint *)&DAT_0004338c;
    do {
        puVar4 = (uint *)puVar4[6];
        if (puVar4 == (uint *)0x0)
            goto LAB_00028d08;
    } while ((param_1 < *puVar4) || (puVar4[1] < param_1));
    iVar2 = param_1 - *puVar4;
    iVar2 = FUN_00021534(puVar4[3], puVar4[4], iVar2 + 1,
                         *(undefined4 *)(puVar4[2] + iVar2 * 4));
    if (iVar2 == 0) {
    LAB_00028d08:
        iVar2 =
            FUN_00021534(isc_msgcat, 3, 1, "(result code text not available)");
    }
    iVar3 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_0004338c);
    if (iVar3 != 0) {
        FUN_00025644("./../lib/isc/result.c", 0xca,
                     "((pthread_mutex_unlock(((&lock))) == 0) ? 0 : 34) == 0");
    }
    if (iVar1 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar2);
}

void FUN_00028e34(char *param_1, char *param_2, undefined4 *param_3)

{
    int iVar1;
    FILE *pFVar2;
    int *piVar3;

    iVar1 = __stack_chk_guard;
    pFVar2 = fopen64(param_1, param_2);
    if (pFVar2 == (FILE *)0x0) {
        piVar3 = __errno_location();
        if (iVar1 == __stack_chk_guard) {
            FUN_0002aa10(*piVar3, "./../lib/isc/unix/stdio.c", 0x24);
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

/* WARNING: Removing unreachable block (ram,0x000292cc) */

void FUN_00029258(undefined4 *param_1, undefined4 param_2, uint param_3)

{
    if (param_1 == (undefined4 *)0x0) {
        /* WARNING: Subroutine does not return */
        FUN_00020c38("./../lib/isc/unix/time.c", 0x5a, 0, "i != ((void *)0)");
    }
    if (999999999 < param_3) {
        /* WARNING: Subroutine does not return */
        FUN_00020c38("./../lib/isc/unix/time.c", 0x5b, 0,
                     "nanoseconds < 1000000000");
    }
    param_1[1] = param_3;
    *param_1 = param_2;
    return;
}

void FUN_0002959c(int *param_1)

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
        FUN_00020c38("./../lib/isc/unix/time.c", 0x96, 0, "t != ((void *)0)");
    }
    iVar1 = gettimeofday(&local_9c, (__timezone_ptr_t)0x0);
    if (iVar1 == -1) {
        piVar3 = __errno_location();
        FUN_00022eac(*piVar3, auStack_94, 0x80);
        FUN_0002557c("./../lib/isc/unix/time.c", 0x9a, "%s", auStack_94);
        uVar2 = 0x22;
        goto LAB_00029654;
    }
    if (local_9c.tv_usec < 0) {
        do {
            local_9c.tv_sec = local_9c.tv_sec + -1;
            local_9c.tv_usec = local_9c.tv_usec + 1000000;
        } while (local_9c.tv_usec < 0);
    LAB_0002961c:
        __syslog_chk(3, 1, "gettimeofday returned bad tv_usec: corrected");
    } else if (999999 < local_9c.tv_usec) {
        do {
            local_9c.tv_sec = local_9c.tv_sec + 1;
            local_9c.tv_usec = local_9c.tv_usec + -1000000;
        } while (999999 < local_9c.tv_usec);
        goto LAB_0002961c;
    }
    if (local_9c.tv_sec < 0) {
        uVar2 = 0x22;
    } else {
        *param_1 = local_9c.tv_sec;
        uVar2 = 0;
        param_1[1] = local_9c.tv_usec * 1000;
    }
LAB_00029654:
    if (local_14 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
}

/* WARNING: Removing unreachable block (ram,0x00029a18) */

void FUN_00029948(int param_1, int param_2)

{
    if (param_1 == 0 || param_2 == 0) {
        /* WARNING: Subroutine does not return */
        FUN_00020c38("./../lib/isc/unix/time.c", 0xf0,
                     param_1 != 0 && param_2 != 0,
                     "t1 != ((void *)0) && t2 != ((void *)0)");
    }
    if ((*(uint *)(param_1 + 4) < 1000000000) &&
        (*(uint *)(param_2 + 4) < 1000000000)) {
        return;
    }
    /* WARNING: Subroutine does not return */
    FUN_00020c38(
        "./../lib/isc/unix/time.c", 0xf1, 2,
        "t1->nanoseconds < 1000000000 && t2->nanoseconds < 1000000000");
}

void FUN_00029b78(uint *param_1, uint *param_2, int *param_3)

{
    int iVar1;
    undefined4 uVar2;
    uint uVar3;
    uint uVar4;
    uint uVar5;
    uint uVar6;
    bool bVar7;

    iVar1 = __stack_chk_guard;
    if (param_1 == (uint *)0x0 ||
        (param_2 == (uint *)0x0 || param_3 == (int *)0x0)) {
        /* WARNING: Subroutine does not return */
        FUN_00020c38(
            "./../lib/isc/unix/time.c", 0x11c, 0,
            "t != ((void *)0) && i != ((void *)0) && result != ((void *)0)");
    }
    uVar6 = param_1[1];
    if ((uVar6 < 1000000000) && (uVar5 = param_2[1], uVar5 < 1000000000)) {
        uVar4 = *param_1;
        uVar3 = *param_2;
        if ((uVar4 < uVar3) || (uVar6 < uVar5 && uVar4 == uVar3)) {
            uVar2 = 0x29;
        } else {
            bVar7 = uVar5 <= uVar6;
            if (bVar7) {
                uVar6 = uVar6 - uVar5;
            }
            *param_3 = uVar4 - uVar3;
            if (!bVar7) {
                uVar6 = (uVar6 + 1000000000) - uVar5;
                *param_3 = (uVar4 - uVar3) + -1;
            }
            param_3[1] = uVar6;
            uVar2 = 0;
        }
        if (iVar1 != __stack_chk_guard) {
            /* WARNING: Subroutine does not return */
            __stack_chk_fail(uVar2);
        }
        return;
    }
    /* WARNING: Subroutine does not return */
    FUN_00020c38("./../lib/isc/unix/time.c", 0x11d, 2,
                 "t->nanoseconds < 1000000000 && i->nanoseconds < 1000000000");
}

void FUN_00029fc8(time_t *param_1, char *param_2, size_t param_3)

{
    tm *__tp;
    size_t sVar1;
    time_t local_20;
    int local_1c;

    local_1c = __stack_chk_guard;
    if (param_3 == 0) {
        /* WARNING: Subroutine does not return */
        FUN_00020c38("./../lib/isc/unix/time.c", 0x182, 0, "len > 0");
    }
    local_20 = *param_1;
    __tp = localtime(&local_20);
    sVar1 = strftime(param_2, param_3, "%d-%b-%Y %X", __tp);
    if (sVar1 < param_3) {
        if (sVar1 == 0) {
            FUN_0001fa7c(param_2, param_3, "99-Bad-9999 99:99:99.999");
        } else {
            FUN_0001fa7c(param_2 + sVar1, param_3 - sVar1, ".%03u",
                         (uint)param_1[1] / 1000000);
        }
        if (local_1c == __stack_chk_guard) {
            return;
        }
        /* WARNING: Subroutine does not return */
        __stack_chk_fail();
    }
    /* WARNING: Subroutine does not return */
    FUN_00020c38("./../lib/isc/unix/time.c", 0x186, 2, "flen < len");
}

/* WARNING: Removing unreachable block (ram,0x0002a31c) */

void FUN_0002a274(undefined4 param_1, int param_2, int param_3)

{
    if (param_3 != 0) {
        param_3 = param_2 + param_3;
        do {
            param_2 = param_2 + 1;
        } while (param_2 != param_3);
    }
    return;
}

/* WARNING: Removing unreachable block (ram,0x0002a3a0) */

void FUN_0002a328(undefined4 *param_1)

{
    if (param_1 != (undefined4 *)0x0) {
        *param_1 = 0x4449522a;
        *(undefined1 *)(param_1 + 0x101) = 0;
        param_1[0x141] = 0;
        param_1[0x142] = 0;
        return;
    }
    /* WARNING: Subroutine does not return */
    FUN_00020c38("./../lib/isc/unix/dir.c", 0x2d, 0, "dir != ((void *)0)");
}

void FUN_0002a3b4(int *param_1, char *param_2)

{
    int iVar1;
    size_t sVar2;
    int *piVar3;
    DIR *pDVar4;
    int *__s;

    iVar1 = __stack_chk_guard;
    if ((param_1 == (int *)0x0) || (*param_1 != 0x4449522a)) {
        /* WARNING: Subroutine does not return */
        FUN_00020c38(
            "./../lib/isc/unix/dir.c", 0x41, 0,
            "(((dir) != ((void *)0)) && (((const isc__magic_t *)(dir))->magic "
            "== (((\'D\') << 24 | (\'I\') << 16 | (\'R\') << 8 | (\'*\')))))");
    }
    if (param_2 == (char *)0x0) {
        /* WARNING: Subroutine does not return */
        FUN_00020c38("./../lib/isc/unix/dir.c", 0x42, 0, 0x30000);
    }
    sVar2 = strlen(param_2);
    if (sVar2 + 3 < 0x401) {
        __s = param_1 + 1;
        FUN_000208c4(__s, param_2, sVar2 + 1);
        sVar2 = strlen((char *)__s);
        piVar3 = (int *)((int)param_1 + sVar2 + 4);
        if ((__s < piVar3) && (*(char *)((int)param_1 + sVar2 + 3) != '/')) {
            piVar3 = (int *)((int)param_1 + sVar2 + 5);
            *(undefined1 *)((int)param_1 + sVar2 + 4) = 0x2f;
        }
        *(undefined1 *)piVar3 = 0x2a;
        *(undefined1 *)((int)piVar3 + 1) = 0;
        pDVar4 = opendir(param_2);
        param_1[0x142] = (int)pDVar4;
        if (pDVar4 == (DIR *)0x0) {
            piVar3 = __errno_location();
            if (iVar1 == __stack_chk_guard) {
                FUN_0002aa10(*piVar3, "./../lib/isc/unix/dir.c", 0x5d);
                return;
            }
            goto LAB_0002a4fc;
        }
        piVar3 = (int *)0x0;
    } else {
        piVar3 = (int *)0x13;
    }
    if (iVar1 == __stack_chk_guard) {
        return;
    }
LAB_0002a4fc:
    /* WARNING: Subroutine does not return */
    __stack_chk_fail(piVar3);
}

void FUN_0002a51c(int *param_1)

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
        FUN_00020c38(
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
            FUN_000208c4(param_1 + 0x101, __s);
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

void FUN_0002a600(int *param_1)

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
    FUN_00020c38("./../lib/isc/unix/dir.c", 0x8e, 0,
                 "(((dir) != ((void *)0)) && (((const isc__magic_t "
                 "*)(dir))->magic == (((\'D\') << 24 | (\'I\') << 16 | (\'R\') "
                 "<< 8 | (\'*\'))))) && dir->handle != ((void *)0)");
}

void FUN_0002aa10(undefined4 param_1, undefined4 param_2, undefined4 param_3)

{
    undefined4 uVar1;
    undefined1 auStack_9c[128];
    int local_1c;

    local_1c = __stack_chk_guard;
    switch (param_1) {
    case 1:
        goto LAB_0002aca4;
    case 2:
        uVar1 = 0x26;
        goto LAB_0002ac14;
    case 3:
        break;
    case 4:
        break;
    case 5:
        uVar1 = 0x1a;
        goto LAB_0002ac14;
    case 6:
        break;
    case 7:
        break;
    case 8:
        break;
    case 9:
        goto LAB_0002ac10;
    case 10:
        break;
    case 0xb:
        break;
    case 0xc:
        uVar1 = 1;
        goto LAB_0002ac14;
    case 0xd:
    LAB_0002aca4:
        uVar1 = 6;
        goto LAB_0002ac14;
    case 0xe:
        break;
    case 0xf:
        break;
    case 0x10:
        break;
    case 0x11:
        uVar1 = 0x27;
        goto LAB_0002ac14;
    case 0x12:
        break;
    case 0x13:
        break;
    case 0x14:
        goto LAB_0002ac10;
    case 0x15:
        break;
    case 0x16:
        goto LAB_0002ac10;
    case 0x17:
        goto LAB_0002ac3c;
    case 0x18:
    LAB_0002ac3c:
        uVar1 = 0x32;
        goto LAB_0002ac14;
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
        goto LAB_0002ac44;
    case 0x21:
        break;
    case 0x22:
        break;
    case 0x23:
        break;
    case 0x24:
        goto LAB_0002ac10;
    case 0x25:
        break;
    case 0x26:
        break;
    case 0x27:
        break;
    case 0x28:
    LAB_0002ac10:
        uVar1 = 0x1e;
        goto LAB_0002ac14;
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
        goto LAB_0002ac14;
    case 0x62:
        uVar1 = 5;
        goto LAB_0002ac14;
    case 99:
        uVar1 = 4;
        goto LAB_0002ac14;
    case 100:
        uVar1 = 10;
        goto LAB_0002ac14;
    case 0x65:
        uVar1 = 8;
        goto LAB_0002ac14;
    case 0x66:
        break;
    case 0x67:
        goto LAB_0002ac44;
    case 0x68:
    LAB_0002ac44:
        uVar1 = 0x36;
        goto LAB_0002ac14;
    case 0x69:
        uVar1 = 0xd;
        goto LAB_0002ac14;
    case 0x6a:
        break;
    case 0x6b:
        uVar1 = 0x28;
        goto LAB_0002ac14;
    case 0x6c:
        break;
    case 0x6d:
        break;
    case 0x6e:
        uVar1 = 2;
        goto LAB_0002ac14;
    case 0x6f:
        uVar1 = 0xc;
        goto LAB_0002ac14;
    case 0x70:
        uVar1 = 0xb;
        goto LAB_0002ac14;
    case 0x71:
        uVar1 = 9;
        goto LAB_0002ac14;
    }
    FUN_00022eac(param_1, auStack_9c, 0x80);
    FUN_0002557c(param_2, param_3,
                 "unable to convert errno to isc_result: %d: %s", param_1,
                 auStack_9c);
    uVar1 = 0x22;
LAB_0002ac14:
    if (local_1c != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail(uVar1);
    }
    return;
}

void FUN_0002b6f0(char *param_1)

{
    int iVar1;
    int iVar2;
    int *piVar3;

    iVar1 = __stack_chk_guard;
    if (param_1 == (char *)0x0) {
        /* WARNING: Subroutine does not return */
        FUN_00020c38("./../lib/isc/unix/file.c", 0x140, 0,
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
            FUN_0002aa10(*piVar3, "./../lib/isc/unix/file.c", 0x146);
            return;
        }
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_0002b79c(char *param_1, char *param_2)

{
    int iVar1;
    int iVar2;
    int *piVar3;

    iVar1 = __stack_chk_guard;
    if (param_1 == (char *)0x0) {
        /* WARNING: Subroutine does not return */
        FUN_00020c38("./../lib/isc/unix/file.c", 0x14d, 0,
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
                FUN_0002aa10(*piVar3, "./../lib/isc/unix/file.c", 0x154);
                return;
            }
        }
        /* WARNING: Subroutine does not return */
        __stack_chk_fail();
    }
    /* WARNING: Subroutine does not return */
    FUN_00020c38("./../lib/isc/unix/file.c", 0x14e, 0,
                 "newname != ((void *)0)");
}

void FUN_0002c178(void)

{
    int iVar1;
    int iVar2;

    iVar1 = __stack_chk_guard;
    iVar2 = pthread_once((pthread_once_t *)&DAT_000433c0,
                         (__init_routine *)&LAB_0002c11c);
    if (iVar2 == 0) {
        if (iVar1 == __stack_chk_guard) {
            return;
        }
    } else if (iVar1 == __stack_chk_guard) {
        FUN_00025644(
            "./../lib/isc/random.c", 0x3c,
            "((pthread_once((&once), (initialize_rand)) == 0) ? 0 : 34) == 0");
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_0002c264(uint *param_1)

{
    int iVar1;
    int iVar2;
    uint uVar3;
    bool bVar4;

    iVar1 = __stack_chk_guard;
    if (param_1 == (uint *)0x0) {
        /* WARNING: Subroutine does not return */
        FUN_00020c38("./../lib/isc/random.c", 0x4e, 0, "val != ((void *)0)");
    }
    FUN_0002c178();
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

ulonglong FUN_0002c398(uint param_1, uint param_2)

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
    /* WARNING: Could not recover jumptable at 0x0002c3c8. Too many branches */
    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(&UNK_0002c3d0 +
                       (0x1f - (LZCOUNT(param_2) - LZCOUNT(param_1))) * 0x10))(
        param_1, param_2, 0);
    return uVar2;
}

void FUN_0002c5f4(undefined4 param_1, int param_2)

{
    if (param_2 != 0) {
        FUN_0002c398();
        return;
    }
    raise(8);
    return;
}

ulonglong FUN_0002c914(uint param_1, uint param_2)

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
    LAB_0002c728:
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
        goto LAB_0002c728;
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
            goto LAB_0002c7a0;
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
LAB_0002c7a0:
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

void FUN_0002c980(undefined4 param_1, undefined4 param_2, int param_3,
                  int param_4)

{
    if ((param_4 == 0) && (param_3 == 0)) {
        raise(8);
        return;
    }
    FUN_0002ca08();
    return;
}

undefined8 FUN_0002c9c0(undefined4 param_1, undefined4 param_2)

{
    uint uVar1;
    double dVar2;

    dVar2 = (double)CONCAT44(param_2, param_1) * 2.3283064365386963e-10;
    uVar1 = (uint)(0.0 < dVar2) * (int)(longlong)dVar2;
    dVar2 = (double)CONCAT44(param_2, param_1) - (double)uVar1 * 4294967296.0;
    return CONCAT44(uVar1, (uint)(0.0 < dVar2) * (int)(longlong)dVar2);
}

undefined8 FUN_0002ca08(uint param_1, uint param_2, uint param_3, uint param_4,
                        uint *param_5)

{
    uint uVar1;
    uint uVar2;
    uint uVar3;
    int iVar4;
    uint uVar5;
    int iVar6;
    uint uVar7;
    uint uVar8;
    uint uVar9;
    bool bVar10;

    bVar10 = param_4 <= param_2;
    if (param_2 == param_4) {
        bVar10 = param_3 <= param_1;
    }
    if (bVar10) {
        iVar6 = LZCOUNT(param_4);
        if (param_4 == 0) {
            iVar6 = LZCOUNT(param_3) + 0x20;
        }
        iVar4 = LZCOUNT(param_2);
        if (param_2 == 0) {
            iVar4 = LZCOUNT(param_1) + 0x20;
        }
        uVar3 = iVar6 - iVar4;
        uVar7 = param_3 << (uVar3 & 0xff);
        uVar8 = param_4 << (uVar3 & 0xff) | param_3 << (uVar3 - 0x20 & 0xff) |
                param_3 >> (0x20 - uVar3 & 0xff);
        bVar10 = uVar8 <= param_2;
        if (param_2 == uVar8) {
            bVar10 = uVar7 <= param_1;
        }
        if (bVar10) {
            bVar10 = param_1 < uVar7;
            param_1 = param_1 - uVar7;
            uVar1 = 1 << (uVar3 & 0xff);
            uVar2 = 1 << (uVar3 - 0x20 & 0xff) | 1U >> (0x20 - uVar3 & 0xff);
            param_2 = (param_2 - uVar8) - (uint)bVar10;
        } else {
            uVar1 = 0;
            uVar2 = 0;
        }
        if (uVar3 != 0) {
            uVar9 = uVar8 >> 1;
            uVar8 = (uint)((uVar8 & 1) != 0) << 0x1f | uVar7 >> 1;
            uVar7 = uVar3;
            do {
                while (true) {
                    bVar10 = uVar9 <= param_2;
                    if (param_2 == uVar9) {
                        bVar10 = uVar8 <= param_1;
                    }
                    if (bVar10)
                        break;
                    bVar10 = CARRY4(param_1, param_1);
                    param_1 = param_1 * 2;
                    param_2 = param_2 * 2 + (uint)bVar10;
                    uVar7 = uVar7 - 1;
                    uVar5 = param_2;
                    if (uVar7 == 0)
                        goto LAB_0002caae;
                }
                bVar10 = param_1 < uVar8;
                uVar5 = param_1 - uVar8;
                param_1 = uVar5 * 2 + 1;
                param_2 = ((param_2 - uVar9) - (uint)bVar10) * 2 +
                          (uint)CARRY4(uVar5, uVar5) +
                          (uint)(0xfffffffe < uVar5 * 2);
                uVar7 = uVar7 - 1;
                uVar5 = param_2;
            } while (uVar7 != 0);
        LAB_0002caae:
            param_2 = uVar5 >> (uVar3 & 0xff);
            bVar10 = CARRY4(uVar1, param_1);
            uVar7 = uVar1 + param_1;
            param_1 = param_1 >> (uVar3 & 0xff) |
                      uVar5 << (0x20 - uVar3 & 0xff) |
                      uVar5 >> (uVar3 - 0x20 & 0xff);
            uVar8 = param_1 << (uVar3 & 0xff);
            uVar1 = uVar7 - uVar8;
            uVar2 =
                ((uVar2 + uVar5 + (uint)bVar10) -
                 (param_2 << (uVar3 & 0xff) | param_1 << (uVar3 - 0x20 & 0xff) |
                  param_1 >> (0x20 - uVar3 & 0xff))) -
                (uint)(uVar7 < uVar8);
        }
    } else {
        uVar1 = 0;
        uVar2 = 0;
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

void __libc_csu_fini(void)

{
    return;
}

void _DT_FINI(void)

{
    return;
}
