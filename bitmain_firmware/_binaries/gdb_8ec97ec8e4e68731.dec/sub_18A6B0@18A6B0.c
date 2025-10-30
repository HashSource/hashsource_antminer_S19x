int __fastcall sub_18A6B0(unsigned int a1)
{
  int *v1; // r6
  void *v3; // r11
  int v4; // r9
  _DWORD *v5; // r4
  unsigned int v6; // r10
  int v7; // r8
  char *v9; // r5
  const char *v10; // r0
  int v11; // r0
  int v12; // r6
  const char *v13; // r7
  const char *v14; // r8
  _BOOL4 v15; // r0
  _BOOL4 v16; // r7
  int v17; // r0
  int v18; // r3
  _DWORD *v19; // r0
  int v20; // r0
  int v21; // r3
  int v22; // r0
  bool v23; // zf
  int v24; // r0
  bool v25; // zf
  const char *v26; // r0
  int v27; // r0
  int v28; // r1
  int v29; // r3
  int v30; // r2
  _DWORD *v31; // r0
  int v32; // r0
  _DWORD *v33; // r7
  _DWORD *v34; // r0
  int v35; // r3
  _BOOL4 v36; // r0
  int v37; // r0
  int v38; // r0
  int v39; // r0
  int v40; // r1
  int v41; // r2
  int v42; // r0
  int v43; // r0
  int v44; // r0
  int v45; // r1
  int v46; // r2
  int v47; // r6
  int v48; // r9
  unsigned int v49; // r6
  int v50; // r8
  const char *v51; // r0
  int v52; // r0
  int *v53; // r0
  _DWORD *v54; // r0
  _DWORD *v55; // r0
  int v56; // r0
  __int64 v57; // r4
  int *v58; // r4
  int v59; // r0
  int v60; // r0
  int v61; // r8
  const char *v62; // r0
  int v63; // r0
  int v64; // r0
  _DWORD *i; // r3
  int v66; // r0
  int v67; // r0
  int v68; // r7
  int v69; // r0
  int v70; // r2
  int v71; // r1
  int v72; // r2
  int v73; // r7
  const char *v74; // r0
  int v75; // r0
  _DWORD *v76; // r0
  _DWORD *v77; // r0
  const char *v78; // r0
  int v79; // r0
  int *v80; // r0
  int v81; // r3
  int v82; // r1
  int v83; // r2
  int v84; // r0
  const char *v85; // r0
  int *v86; // r0
  int v87; // r3
  int *v88; // r7
  bool v89; // zf
  int v90; // r0
  _DWORD *j; // r3
  _DWORD *v92; // r0
  int v93; // r0
  int v94; // r0
  __int64 v95; // kr00_8
  const char *v96; // r7
  char *v97; // r0
  int v98; // r7
  const char *v99; // r0
  int v100; // [sp+10h] [bp-84h]
  int v101; // [sp+14h] [bp-80h]
  int v102; // [sp+18h] [bp-7Ch]
  int v103; // [sp+18h] [bp-7Ch]
  int v104; // [sp+18h] [bp-7Ch]
  int v105; // [sp+18h] [bp-7Ch]
  int v106; // [sp+18h] [bp-7Ch]
  const char *v107; // [sp+1Ch] [bp-78h]
  int v108; // [sp+1Ch] [bp-78h]
  _DWORD *v109; // [sp+20h] [bp-74h]
  int v110; // [sp+20h] [bp-74h]
  const char *v111; // [sp+24h] [bp-70h]
  int v112; // [sp+24h] [bp-70h]
  int v113; // [sp+24h] [bp-70h]
  int v114; // [sp+28h] [bp-6Ch]
  void *v115; // [sp+2Ch] [bp-68h]
  int v116; // [sp+30h] [bp-64h]
  int v117; // [sp+34h] [bp-60h]
  _DWORD *v118; // [sp+34h] [bp-60h]
  int v119; // [sp+38h] [bp-5Ch]
  int v120; // [sp+38h] [bp-5Ch]
  _BYTE v121[4]; // [sp+40h] [bp-54h] BYREF
  __int64 v122; // [sp+44h] [bp-50h] BYREF
  int v123; // [sp+4Ch] [bp-48h]
  __int64 v124; // [sp+50h] [bp-44h] BYREF
  int v125; // [sp+58h] [bp-3Ch]
  __int64 v126; // [sp+5Ch] [bp-38h] BYREF
  int v127; // [sp+64h] [bp-30h]
  __int64 v128; // [sp+6Ch] [bp-28h]
  int v129; // [sp+74h] [bp-20h]
  void *ptr; // [sp+78h] [bp-1Ch] BYREF
  char v131; // [sp+80h] [bp-14h] BYREF

  v3 = sub_92E28();
  v4 = sub_1DDBBC(v3);
  v100 = sub_1DD58C(v4);
  v5 = (_DWORD *)((int (*)(void))loc_23DBE4)();
  v6 = sub_1DFB3C(v4);
  v7 = *(_DWORD *)(v4 + 4);
  v101 = v5[35];
  if ( v5[56] )
  {
    sub_94700((int)"infrun.c", 2380, "%s: Assertion `%s' failed.", "void resume_1(gdb_signal)", "!tp->stop_requested");
    goto LABEL_102;
  }
  if ( sub_23E2CC(v5) )
  {
LABEL_102:
    v75 = sub_94700(
            (int)"infrun.c",
            2381,
            "%s: Assertion `%s' failed.",
            "void resume_1(gdb_signal)",
            "!thread_is_in_step_over_chain (tp)");
    goto LABEL_103;
  }
  if ( !v5[42] )
  {
    v5[47] = 0;
    v16 = sub_184CAC(v5);
    v17 = sub_183688();
    v1 = &dword_487930;
    v18 = dword_487930;
    if ( *(_BYTE *)(v17 + 133) )
    {
      if ( !dword_487930 )
      {
        v16 = 0;
        goto LABEL_19;
      }
      v19 = (_DWORD *)sub_242FC8(v17);
      v17 = sub_2594B0(*v19, "infrun: resume : clear step\n");
      v18 = dword_487930;
      v16 = 0;
    }
    if ( v18 )
    {
      v103 = *(_DWORD *)sub_242FC8(v17);
      v107 = (const char *)sub_999D4(a1);
      v110 = v5[29];
      v111 = (const char *)sub_23095C(unk_4878EC, qword_4878F0, HIDWORD(qword_4878F0));
      v26 = (const char *)sub_25AC8C(v100, v6);
      sub_2594B0(
        v103,
        "infrun: resume (step=%d, signal=%s), trap_expected=%d, current thread [%s] at %s\n",
        v16,
        v107,
        v110,
        v111,
        v26);
    }
LABEL_19:
    v20 = sub_CF484(v7, v6);
    if ( v20 == 2 )
    {
      if ( a1 )
      {
        if ( dword_487930 )
        {
          v55 = (_DWORD *)sub_242FC8(2);
          v20 = sub_2594B0(*v55, "infrun: resume: skipping permanent breakpoint, deliver signal first\n");
        }
        v27 = sub_184B80(v20);
        v29 = v5[12];
        v30 = 0;
        v5[29] = 0;
        if ( !v29 )
        {
          v56 = sub_15F70C(v27);
          v27 = ((int (__fastcall *)(int))loc_184E68)(v56);
          if ( !*(_BYTE *)(*(_DWORD *)(v5[12] + 28) + 40) )
          {
            sub_94700(
              (int)"infrun.c",
              2484,
              "%s: Assertion `%s' failed.",
              "void resume_1(gdb_signal)",
              "tp->control.step_resume_breakpoint->loc->permanent");
            goto LABEL_94;
          }
          v5[50] = v16;
        }
        sub_D8084(v27, v28, v30);
      }
      else
      {
        if ( dword_487930 )
        {
          v54 = (_DWORD *)sub_242FC8(2);
          sub_2594B0(*v54, "infrun: resume: skipping permanent breakpoint\n");
        }
        ((void (__fastcall *)(int, int))loc_16BC20)(v100, v4);
        v43 = sub_1DFB3C(v4);
        v6 = v43;
        if ( v16 )
        {
          if ( dword_487934 || dword_48793C )
          {
            v93 = sub_94700(
                    (int)"infrun.c",
                    2514,
                    "%s: Assertion `%s' failed.",
                    "void resume_1(gdb_signal)",
                    "!step_over_info_valid_p ()");
            v94 = sub_339EF8(v93);
            sub_338FFC(v94);
          }
          sub_DC8EC(v100, v7, v43);
          sub_D8084(v44, v45, v46);
          sub_187D1C(&v122, v101);
          ((void (__fastcall *)(_DWORD, _DWORD, int, _DWORD, _DWORD))loc_1873D0)(v122, HIDWORD(v122), v123, 0, 0);
          goto LABEL_42;
        }
      }
    }
    v21 = v5[29];
    if ( v21 || (v31 = sub_CF310(), v21 = v5[29], v31) )
      v5[18] = 0;
    if ( !v21 || !sub_184F48(v5) || dword_487934 || a1 | dword_48793C || *(_BYTE *)(sub_183688() + 133) )
    {
      if ( !v16 )
        goto LABEL_24;
      v37 = sub_186F44(v100);
      goto LABEL_71;
    }
    v109 = &unk_4878EC;
    v124 = unk_4878EC;
    v125 = HIDWORD(qword_4878F0);
    v115 = sub_92E28();
    v126 = v124;
    v127 = v125;
    v112 = sub_23E408(v124, HIDWORD(v124), v125);
    v114 = sub_1DDB40(v124, HIDWORD(v124), v125);
    v108 = sub_1DD58C(v114);
    v117 = *(_DWORD *)(v114 + 4);
    if ( ((int (*)(void))loc_16BDE4)() )
    {
      if ( *(_DWORD *)(v112 + 116) )
      {
        *(_DWORD *)(v112 + 72) = 0;
        v32 = ps_getpid_0((int)&v126);
        v33 = (_DWORD *)dword_487944;
        v104 = v32;
        if ( dword_487944 )
        {
          if ( v32 == *(_DWORD *)(dword_487944 + 4) )
          {
LABEL_62:
            v36 = sub_98F78(v33 + 3, &dword_475848);
            v102 = v36;
            if ( !v36 )
            {
              if ( dword_487978 )
              {
                v73 = *(_DWORD *)sub_242FC8(0);
                v74 = (const char *)sub_23095C(v126, HIDWORD(v126), v127);
                sub_2594B0(v73, "displaced: deferring step of %s\n", v74);
              }
              ((void (__fastcall *)(int))loc_23E2DC)(v112);
LABEL_66:
              v75 = sub_92E40((int)v115);
              if ( !v102 )
              {
                if ( !dword_487930 )
                {
LABEL_68:
                  v5[29] = 0;
                  return sub_92E40((int)v3);
                }
LABEL_119:
                v76 = (_DWORD *)sub_242FC8(v75);
                sub_2594B0(*v76, "Got placed in step-over queue\n");
                goto LABEL_68;
              }
LABEL_103:
              if ( v102 != -1 )
              {
                v63 = sub_1DDB40(*v109, v109[1], v109[2]);
                v6 = sub_1DFB3C(v63);
                v64 = ps_getpid_0((int)&unk_4878EC);
                for ( i = (_DWORD *)v1[5]; i; i = (_DWORD *)*i )
                {
                  if ( v64 == i[1] )
                    break;
                }
                v37 = ((int (__fastcall *)(int, _DWORD))loc_16BF00)(v100, i[7]);
LABEL_71:
                v16 = v37;
                goto LABEL_24;
              }
LABEL_117:
              v67 = sub_232950(v75);
              if ( !v67 )
              {
LABEL_118:
                v68 = *(_DWORD *)(v4 + 4);
                v69 = sub_1DFB3C(v4);
                v70 = v5[5];
                v1[2] = v69;
                v1[1] = v68;
                v1[4] = v70;
                v1[3] = 0;
                v16 = sub_186F44(v100);
                sub_D8084(v16, v71, v72);
LABEL_24:
                v22 = sub_23DD7C(v5);
                v23 = a1 == 0;
                if ( a1 )
                  v23 = v22 == 0;
                if ( !v23 && (v1[1] || v1[3]) )
                {
                  if ( !v5[12] )
                  {
                    v60 = sub_15F70C(v22);
                    ((void (__fastcall *)(int))loc_184E68)(v60);
                    v5[50] = 1;
                  }
                  v38 = sub_23DD54(v5);
                  v39 = sub_184B80(v38);
                  v5[29] = 0;
                  sub_D8084(v39, v40, v41);
                }
                v24 = sub_23DD7C(v5);
                v25 = !v16;
                if ( v16 )
                  v25 = v24 == 0;
                if ( !v25 )
                {
                  v75 = sub_94700(
                          (int)"infrun.c",
                          2641,
                          "%s: Assertion `%s' failed.",
                          "void resume_1(gdb_signal)",
                          "!(thread_has_single_step_breakpoints_set (tp) && step)");
                  goto LABEL_119;
                }
                if ( v5[29] )
                {
                  v122 = unk_4878EC;
                  v123 = HIDWORD(qword_4878F0);
                }
                else
                {
                  sub_187D1C(&v122, v101);
                }
                if ( v1[7] != 1 )
                {
                  if ( !v16 )
                    goto LABEL_36;
                  v42 = sub_CF680(v7, v6);
                  if ( v42 )
                  {
                    if ( *v1 )
                    {
                      v61 = *(_DWORD *)sub_242FC8(v42);
                      v62 = (const char *)sub_23095C(v5[2], v5[3], v5[4]);
                      sub_2594B0(v61, "infrun: resume: [%s] stepped breakpoint\n", v62);
                    }
                    v5[47] = 1;
                    if ( ((int (__fastcall *)(int))loc_16AAB0)(v100) )
LABEL_36:
                      v16 = 0;
                  }
                }
                if ( v1[18] && v5[29] && sub_184F48(v5) && !v1[1] && !v1[3] )
                {
                  v47 = sub_1DDB40(v5[2], v5[3], v5[4]);
                  v48 = sub_1DD58C(v47);
                  v49 = sub_1DFB3C(v47);
                  v50 = *(_DWORD *)sub_242FC8(v49);
                  v51 = (const char *)sub_25AC8C(v48, v49);
                  sub_2594B0(v50, "displaced: run %s: ", v51);
                  v52 = sub_FA844(v49, (int)v121, 4);
                  v53 = (int *)sub_242FC8(v52);
                  sub_187BF0(*v53, (int)v121, 4);
                }
                if ( !v5[18] || sub_23F8BC(v6, v5) )
                {
                  ((void (__fastcall *)(_DWORD, _DWORD, int, _BOOL4, unsigned int))loc_1873D0)(
                    v122,
                    HIDWORD(v122),
                    v123,
                    v16,
                    a1);
LABEL_42:
                  v5[10] = 1;
                  return sub_92E40((int)v3);
                }
LABEL_94:
                v57 = sub_94700(
                        (int)"infrun.c",
                        2728,
                        "%s: Assertion `%s' failed.",
                        "void resume_1(gdb_signal)",
                        "pc_in_thread_step_range (pc, tp)");
                sub_92E40((int)v3);
                if ( HIDWORD(v57) == 1 )
                {
                  v58 = (int *)sub_339E78(v57);
                  if ( unk_4878EC != dword_475848 || qword_4878F0 != qword_47584C )
                  {
                    v59 = ((int (*)(void))loc_23DBE4)();
                    sub_23DD54(v59);
                  }
                  sub_92F1C(*v58, v58[1], v58[2]);
                }
                sub_339E78(v57);
                sub_92E60();
              }
LABEL_145:
              sub_18A0C0(v67);
              goto LABEL_118;
            }
            if ( dword_487978 )
            {
              v106 = *(_DWORD *)sub_242FC8(v36);
              v85 = (const char *)sub_23095C(v126, HIDWORD(v126), v127);
              sub_2594B0(v106, "displaced: stepping %s now\n", v85);
            }
            sub_184B18(v33);
            v128 = unk_4878EC;
            v129 = HIDWORD(qword_4878F0);
            unk_4878EC = v126;
            HIDWORD(qword_4878F0) = v127;
            v116 = sub_1DFB3C(v114);
            v105 = ((int (__fastcall *)(int))loc_16C0E0)(v108);
            v113 = ((int (__fastcall *)(int))loc_16BD30)(v108);
            v66 = sub_CDD84(v117, v105, v113);
            if ( v66 )
            {
              if ( dword_487978 )
              {
                v77 = (_DWORD *)sub_242FC8(v66);
                sub_2594B0(
                  *v77,
                  "displaced: breakpoint set in scratch pad.  Stepping over breakpoint in-line instead.\n");
              }
            }
            else
            {
              v33[10] = sub_93028(v113);
              v118 = sub_9253C(2460088, (int)(v33 + 10));
              v119 = sub_230020(v105, v33[10], v113);
              if ( v119 )
              {
                v96 = (const char *)sub_25AC8C(v108, v105);
                v97 = sub_6FF98(v119);
                v67 = sub_92F64(
                        8,
                        "Error accessing memory address %s (%s) for displaced-stepping scratch space.",
                        v96,
                        v97);
                goto LABEL_145;
              }
              if ( dword_487978 )
              {
                v120 = *(_DWORD *)sub_242FC8(0);
                v78 = (const char *)sub_25AC8C(v108, v105);
                v79 = sub_2594B0(v120, "displaced: saved %s: ", v78);
                v80 = (int *)sub_242FC8(v79);
                sub_187BF0(*v80, v33[10], v113);
              }
              v81 = ((int (__fastcall *)(int, int, int, int))loc_16BE30)(v108, v116, v105, v114);
              if ( v81 )
              {
                v82 = HIDWORD(v126);
                v83 = v127;
                v33[3] = v126;
                v33[4] = v82;
                v33[5] = v83;
                v33[7] = v81;
                v33[8] = v116;
                v33[6] = v108;
                v33[9] = v105;
                sub_9253C((int)sub_184B5C, (int)v33);
                sub_1DFC60(v114, v105);
                sub_92640(v118);
                if ( dword_487978 )
                {
                  v98 = *(_DWORD *)sub_242FC8(v84);
                  v99 = (const char *)sub_25AC8C(v108, v105);
                  sub_2594B0(v98, "displaced: displaced pc to %s\n", v99);
                }
                v102 = 1;
                goto LABEL_115;
              }
              sub_92620(v118);
            }
            v102 = -1;
LABEL_115:
            unk_4878EC = v128;
            HIDWORD(qword_4878F0) = v129;
            goto LABEL_66;
          }
          while ( 1 )
          {
            v33 = (_DWORD *)*v33;
            if ( !v33 )
              break;
            if ( v32 == v33[1] )
              goto LABEL_62;
          }
        }
        v34 = sub_93094(1u, 0x2Cu);
        v35 = dword_487944;
        v33 = v34;
        dword_487944 = (int)v34;
        *v34 = v35;
        v34[1] = v104;
        goto LABEL_62;
      }
      sub_94700(
        (int)"infrun.c",
        1767,
        "%s: Assertion `%s' failed.",
        "int displaced_step_prepare_throw(ptid_t)",
        "tp->control.trap_expected");
    }
    v95 = sub_94700(
            (int)"infrun.c",
            1764,
            "%s: Assertion `%s' failed.",
            "int displaced_step_prepare_throw(ptid_t)",
            "gdbarch_displaced_step_copy_insn_p (gdbarch)");
    sub_92E40((int)v115);
    if ( HIDWORD(v95) != 3 )
    {
      sub_339E78(v95);
      sub_92E60();
    }
    v86 = (int *)sub_339E78(v95);
    v87 = v86[1];
    v88 = v86;
    v89 = v87 == 14;
    if ( v87 != 14 )
      v89 = v87 == 8;
    if ( !v89 )
      sub_92F1C(*v86, v86[1], v86[2]);
    if ( dword_487930 )
    {
      v92 = (_DWORD *)sub_242FC8(v86);
      sub_2594B0(*v92, "infrun: disabling displaced stepping: %s\n", (const char *)v88[2]);
    }
    if ( !dword_46D584 )
      sub_946B0("disabling displaced stepping: %s", (const char *)v88[2]);
    v90 = ps_getpid_0((int)&v124);
    for ( j = (_DWORD *)dword_487944; ; j = (_DWORD *)*j )
    {
      if ( !j )
      {
        MEMORY[8] = 0;
        __und(0);
      }
      if ( v90 == j[1] )
        break;
    }
    j[2] = 1;
    v75 = sub_339EF8(v90);
    goto LABEL_117;
  }
  if ( !dword_487930
    || (v11 = sub_277578(&ptr, v5 + 38),
        v12 = *(_DWORD *)sub_242FC8(v11),
        v13 = (const char *)sub_23095C(v5[2], v5[3], v5[4]),
        v14 = (const char *)ptr,
        v15 = sub_184CAC(v5),
        sub_2594B0(
          v12,
          "infrun: resume: thread %s has pending wait status %s (currently_stepping=%d).\n",
          v13,
          v14,
          v15),
        ptr == &v131) )
  {
    v5[10] = 1;
    if ( !a1 )
      goto LABEL_6;
    goto LABEL_9;
  }
  sub_339E64(ptr);
  v5[10] = 1;
  if ( a1 )
  {
LABEL_9:
    v9 = sub_99A4C(a1);
    v10 = (const char *)sub_23095C(v5[2], v5[3], v5[4]);
    sub_946B0("Couldn't deliver signal %s to %s.", v9, v10);
  }
LABEL_6:
  v5[36] = 0;
  if ( off_489AF8(&dword_4899A0) )
    sub_232914(1);
  return sub_92E40((int)v3);
}
