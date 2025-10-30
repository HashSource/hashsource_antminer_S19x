void __fastcall sub_18C6A8(_DWORD *a1)
{
  int *v1; // r5
  int v2; // r10
  int v4; // r0
  int v5; // r6
  int v6; // r0
  int v7; // r7
  int v8; // r0
  int v9; // r8
  int v10; // r2
  _DWORD *v11; // r3
  int v12; // r2
  int v13; // r1
  int v14; // r0
  int v15; // r3
  int v16; // r0
  int v17; // r6
  int v18; // r0
  int v19; // r0
  int v20; // r0
  int v21; // r0
  int v22; // r0
  int v23; // r0
  int v24; // r3
  _DWORD *v25; // r0
  _DWORD *v26; // r0
  int v27; // r0
  int v28; // r6
  int v29; // r0
  int v30; // r0
  int v31; // r8
  int v32; // r0
  int v33; // r0
  int v34; // r5
  int v35; // r8
  void *v36; // r0
  _DWORD *v37; // r10
  int v38; // r9
  int i; // r0
  int v40; // r8
  int v41; // r0
  _DWORD *v42; // r0
  _DWORD *v43; // r0
  _DWORD *v44; // r0
  _DWORD *v45; // r0
  _DWORD *v46; // r0
  _DWORD *v47; // r0
  _DWORD *v48; // r0
  _DWORD *v49; // r0
  int v50; // r0
  int v51; // r0
  _DWORD *v52; // r3
  int v53; // r1
  int v54; // r2
  int v55; // r3
  int v56; // r1
  int v57; // r0
  _DWORD *v58; // r3
  int v59; // r10
  int v60; // r5
  const char *v61; // r0
  int v62; // r5
  int v63; // r0
  const char *v64; // r0
  int v65; // r0
  int *v66; // r0
  int v67; // r2
  int v68; // r3
  int v69; // r0
  int v70; // r5
  int v71; // r0
  int *v72; // lr
  int *v73; // r5
  int v74; // r7
  const char *v75; // r8
  const char *v76; // r0
  _DWORD *v77; // r0
  int v78; // r0
  int v79; // r8
  int v80; // r5
  int v81; // r0
  int v82; // r11
  void *v83; // r6
  int v84; // r0
  int v85; // r8
  int v86; // r0
  int v87; // r8
  _DWORD *v88; // r0
  int v89; // r0
  int v90; // r0
  int v91; // r5
  _DWORD *v92; // r0
  _DWORD *v93; // r0
  int v94; // r0
  int v95; // r0
  int v96; // r0
  _DWORD *v97; // r12
  int v98; // r1
  int v99; // r5
  int v100; // r0
  int v101; // r0
  _DWORD *v102; // r0
  _DWORD *v103; // r0
  _DWORD *v104; // r0
  int v105; // r0
  int v106; // r1
  int v107; // r0
  _DWORD *v108; // r0
  int v109; // r0
  int v110; // r6
  _DWORD *v111; // r0
  int v112; // r0
  int *v113; // r9
  _DWORD *v114; // r0
  int v115; // r0
  int v116; // r0
  int v117; // r1
  int v118; // r2
  int v119; // r3
  int v120; // r12
  int v121; // r11
  int v122; // r0
  int v123; // r5
  bool v124; // zf
  int v125; // r0
  _DWORD *v126; // r0
  _DWORD *v127; // r0
  int v128; // r3
  int v129; // r0
  int v130; // r5
  int v131; // r6
  int v132; // r0
  int v133; // r0
  int v134; // r5
  int v135; // r0
  int v136; // r1
  int v137; // r0
  __int64 v138; // r0
  _DWORD *v139; // r0
  int v140; // [sp+3Ch] [bp-290h]
  int v141; // [sp+40h] [bp-28Ch]
  int v142; // [sp+44h] [bp-288h]
  _DWORD v143[4]; // [sp+48h] [bp-284h] BYREF
  int v144; // [sp+58h] [bp-274h]
  int v145; // [sp+5Ch] [bp-270h]
  int v146; // [sp+60h] [bp-26Ch]
  int v147; // [sp+64h] [bp-268h]
  int v148; // [sp+68h] [bp-264h]
  int v149; // [sp+6Ch] [bp-260h]
  int v150; // [sp+74h] [bp-258h] BYREF
  int v151; // [sp+78h] [bp-254h] BYREF
  int v152; // [sp+7Ch] [bp-250h]
  int v153; // [sp+80h] [bp-24Ch]
  int v154[5]; // [sp+84h] [bp-248h] BYREF
  int v155[5]; // [sp+98h] [bp-234h] BYREF
  int v156[5]; // [sp+ACh] [bp-220h] BYREF
  int v157[5]; // [sp+C0h] [bp-20Ch] BYREF
  int v158[5]; // [sp+D4h] [bp-1F8h] BYREF
  int v159[40]; // [sp+E8h] [bp-1E4h] BYREF
  int v160; // [sp+188h] [bp-144h]
  int v161; // [sp+18Ch] [bp-140h]
  int v162; // [sp+190h] [bp-13Ch]
  int v163; // [sp+194h] [bp-138h]
  int v164; // [sp+198h] [bp-134h]
  int v165[5]; // [sp+19Ch] [bp-130h] BYREF
  _DWORD v166[3]; // [sp+1B0h] [bp-11Ch] BYREF
  _DWORD v167[7]; // [sp+1BCh] [bp-110h] BYREF
  _DWORD v168[3]; // [sp+1D8h] [bp-F4h] BYREF
  _DWORD v169[7]; // [sp+1E4h] [bp-E8h] BYREF
  _DWORD v170[3]; // [sp+200h] [bp-CCh] BYREF
  _DWORD v171[7]; // [sp+20Ch] [bp-C0h] BYREF
  _DWORD s[10]; // [sp+228h] [bp-A4h] BYREF
  int v173; // [sp+250h] [bp-7Ch] BYREF
  int v174; // [sp+254h] [bp-78h]
  int v175; // [sp+258h] [bp-74h]
  _DWORD v176[2]; // [sp+25Ch] [bp-70h] BYREF
  int v177; // [sp+264h] [bp-68h]
  unsigned int v178; // [sp+268h] [bp-64h]
  int v179; // [sp+26Ch] [bp-60h]
  int v180; // [sp+270h] [bp-5Ch]
  int v181; // [sp+274h] [bp-58h]
  int v182[10]; // [sp+278h] [bp-54h] BYREF
  int v183; // [sp+2A0h] [bp-2Ch] BYREF
  int v184[9]; // [sp+2A4h] [bp-28h] BYREF

  v4 = sub_15F70C((int)a1);
  sub_15ECB4(v4);
  sub_CF020(&v151, *(int **)(a1[3] + 136));
  v5 = v153;
  if ( v152 )
    dword_487910 = v152;
  v6 = sub_CF260(*(_DWORD *)(a1[3] + 136));
  v7 = sub_15F70C(v6);
  v8 = sub_15ECB4(v7);
  v9 = v8;
  switch ( v151 )
  {
    case 1:
      if ( dword_487930 )
      {
        v48 = (_DWORD *)sub_242FC8(v8);
        v8 = sub_2594B0(*v48, "infrun: BPSTAT_WHAT_SINGLE\n");
      }
      v11 = (_DWORD *)a1[3];
      v11[48] = 1;
      goto LABEL_11;
    case 2:
      if ( dword_487930 )
      {
        v49 = (_DWORD *)sub_242FC8(v8);
        sub_2594B0(*v49, "infrun: BPSTAT_WHAT_SET_LONGJMP_RESUME\n");
      }
      *(_DWORD *)(a1[3] + 192) = 1;
      if ( v5 )
      {
        v16 = sub_1CA6D4(v7, 2);
        if ( v16 )
        {
          s[0] = sub_26EBA8(v16);
          v17 = ((int (__fastcall *)(int, _DWORD))loc_169FA0)(v9, s[0]);
          s[0] = v17;
          goto LABEL_28;
        }
        v41 = ((int (__fastcall *)(int))loc_1683C4)(v9);
        if ( v41 )
        {
          v41 = ((int (__fastcall *)(int, int, _DWORD *))loc_168410)(v9, v7, s);
          if ( v41 )
          {
            v17 = s[0];
LABEL_28:
            v18 = ((int (*)(void))loc_23DBE4)();
            if ( *(_DWORD *)(v18 + 52) )
            {
              v138 = sub_94700(
                       (int)"infrun.c",
                       7489,
                       "%s: Assertion `%s' failed.",
                       "void insert_longjmp_resume_breakpoint(gdbarch*, CORE_ADDR)",
                       "inferior_thread ()->control.exception_resume_breakpoint == NULL");
              if ( HIDWORD(v138) != 1 )
              {
                sub_339E78(v138);
                sub_92E60();
              }
              v137 = sub_339E78(v138);
              sub_339EF8(v137);
            }
            else
            {
              if ( dword_487930 )
              {
                v60 = *(_DWORD *)sub_242FC8(v18);
                v61 = (const char *)sub_25AC8C(v9, v17);
                sub_2594B0(v60, "infrun: inserting longjmp-resume breakpoint at %s\n", v61);
              }
              v19 = sub_D8F14((int)&v183, v9, v17, 11);
              v20 = ((int (__fastcall *)(int))loc_23DBE4)(v19);
              *(_DWORD *)(v20 + 52) = v183;
            }
            goto LABEL_19;
          }
        }
        if ( dword_487930 )
        {
          v42 = (_DWORD *)sub_242FC8(v41);
          sub_2594B0(*v42, "infrun: BPSTAT_WHAT_SET_LONGJMP_RESUME (!gdbarch_get_longjmp_target)\n");
        }
      }
      else
      {
        v27 = sub_15DDFC(v7);
        sub_1CA3F8(&v173, v27);
        if ( !v173 )
        {
          v35 = sub_C3410(v7);
          if ( !v35 )
            goto LABEL_19;
          v36 = sub_92E28();
          v37 = *(_DWORD **)(v35 + 8);
          v38 = (int)v36;
          for ( i = sub_C28A8(v37, &v183); ; i = sub_C28E4((int)&v183) )
          {
            v40 = i;
            if ( !i )
              goto LABEL_71;
            if ( (*(_BYTE *)(i + 33) & 2) != 0 )
            {
              if ( v5 )
              {
                v82 = a1[3];
                v83 = sub_92E28();
                v84 = sub_21B7DC(v40);
                sub_21D6E8(v182, v84, v37, 1);
                v85 = ((int (__fastcall *)(int, int, int))loc_15B3A0)(v182[0], v182[1], v7);
                if ( !sub_26ED18(v85) )
                {
                  v86 = sub_26EBA8(v85);
                  v87 = v86;
                  if ( dword_487930 )
                  {
                    v88 = (_DWORD *)sub_242FC8(v86);
                    sub_2594B0(*v88, "infrun: exception resume at %lx\n", v87);
                  }
                  v89 = sub_15ECB4(v7);
                  v90 = sub_D8F14((int)&v150, v89, v87, 14);
                  v91 = v150;
                  *(_DWORD *)(v150 + 112) = *(_DWORD *)(v82 + 20);
                  *(_DWORD *)(((int (__fastcall *)(int))loc_23DBE4)(v90) + 52) = v91;
                }
                sub_92E40((int)v83);
LABEL_71:
                sub_92E40(v38);
                goto LABEL_19;
              }
              v5 = 1;
            }
          }
        }
        v28 = a1[3];
        v29 = sub_1CA6D4(v7, 1);
        if ( v29 )
        {
          v30 = sub_26EBA8(v29);
          v31 = v30;
          if ( dword_487930 )
          {
            v62 = *(_DWORD *)sub_242FC8(v30);
            v63 = sub_1B7250(v174);
            v64 = (const char *)sub_25AC8C(v63, v31);
            sub_2594B0(v62, "infrun: exception resume at %s\n", v64);
          }
          v32 = sub_15ECB4(v7);
          v33 = sub_D8F14((int)&v183, v32, v31, 14);
          v34 = v183;
          *(_DWORD *)(v183 + 112) = *(_DWORD *)(v28 + 20);
          *(_DWORD *)(((int (__fastcall *)(int))loc_23DBE4)(v33) + 52) = v34;
        }
      }
      goto LABEL_19;
    case 3:
      if ( dword_487930 )
      {
        v44 = (_DWORD *)sub_242FC8(v8);
        sub_2594B0(*v44, "infrun: BPSTAT_WHAT_CLEAR_LONGJMP_RESUME\n");
      }
      v21 = a1[3];
      if ( !*(_DWORD *)(v21 + 52) )
      {
        sub_94700(
          (int)"infrun.c",
          6303,
          "%s: Assertion `%s' failed.",
          "void process_event_stop_test(execution_control_state*)",
          "ecs->event_thread->control.exception_resume_breakpoint != NULL");
        goto LABEL_205;
      }
      sub_23DD2C(v21);
      if ( !v5
        || (sub_DB578(a1[3]),
            sub_15CD58(
              *(_DWORD *)(a1[3] + 228),
              *(_DWORD *)(a1[3] + 232),
              *(_DWORD *)(a1[3] + 236),
              *(_DWORD *)(a1[3] + 240),
              *(_DWORD *)(a1[3] + 244))) )
      {
        v22 = sub_15FE8C(
                *(_DWORD *)(a1[3] + 228),
                *(_DWORD *)(a1[3] + 232),
                *(_DWORD *)(a1[3] + 236),
                *(_DWORD *)(a1[3] + 240),
                *(_DWORD *)(a1[3] + 244));
        if ( !v22
          || (v23 = sub_15F70C(v22),
              ((void (__fastcall *)(int *, int))loc_15CFA0)(&v183, v23),
              sub_15D0C4(
                v183,
                v184[0],
                v184[1],
                v184[2],
                v184[3],
                *(_DWORD *)(a1[3] + 228),
                *(_DWORD *)(a1[3] + 232),
                *(_DWORD *)(a1[3] + 236),
                *(_DWORD *)(a1[3] + 240),
                *(_DWORD *)(a1[3] + 244))) )
        {
          sub_23DD04(a1[3]);
          goto LABEL_40;
        }
      }
      goto LABEL_19;
    case 4:
      if ( dword_487930 )
      {
        v45 = (_DWORD *)sub_242FC8(v8);
        sub_2594B0(*v45, "infrun: BPSTAT_WHAT_STEP_RESUME\n");
      }
      v8 = sub_23DD04(a1[3]);
      v11 = (_DWORD *)a1[3];
      if ( v11[30] && dword_48794C == 1 )
      {
        v11[16] = 1;
        v11[15] = 1;
        sub_18C338(a1);
        return;
      }
      if ( !a1[8] )
      {
        v8 = sub_187030(v9, a1);
        v11 = (_DWORD *)a1[3];
      }
      if ( a1[9] == dword_4878F8 && dword_48794C == 1 )
      {
        v11[48] = 1;
        sub_18C338(a1);
        return;
      }
LABEL_11:
      if ( v11[47] )
      {
        v12 = v11[12];
        if ( v12 )
        {
          v13 = *(_DWORD *)(v12 + 28);
          v8 = *(unsigned __int8 *)(v13 + 40);
          if ( *(_BYTE *)(v13 + 40) )
          {
            if ( *(_DWORD *)(v12 + 12) == 16 && *(_DWORD *)(v13 + 52) == v11[46] )
            {
              if ( dword_487930 )
              {
                v93 = (_DWORD *)sub_242FC8(v8);
                sub_2594B0(*v93, "infrun: stepped permanent breakpoint, stopped in handler\n");
                v11 = (_DWORD *)a1[3];
              }
              v8 = sub_23DD04(v11);
              *(_DWORD *)(a1[3] + 200) = 0;
            }
          }
        }
      }
      v14 = sub_232950(v8);
      if ( !v14 )
      {
        v14 = ((int (__fastcall *)(_DWORD *))loc_18C374)(a1);
        if ( v14 )
          return;
      }
      v15 = a1[3];
      if ( *(_DWORD *)(v15 + 48) )
      {
        if ( dword_487930 )
        {
          v26 = (_DWORD *)sub_242FC8(v14);
          sub_2594B0(*v26, "infrun: step-resume breakpoint is inserted\n");
        }
        goto LABEL_19;
      }
      if ( !*(_DWORD *)(v15 + 64) )
      {
        if ( dword_487930 )
        {
          v25 = (_DWORD *)sub_242FC8(v14);
          sub_2594B0(*v25, "infrun: no stepping, continue\n");
        }
        goto LABEL_19;
      }
      v7 = sub_15F70C(v14);
      v50 = sub_15ECB4(v7);
      v2 = v50;
      if ( !a1[8] )
        sub_187030(v50, a1);
      v5 = (int)&dword_4878F8;
      v1 = &dword_487930;
      v51 = sub_23F8BC(dword_4878F8, a1[3]);
      if ( v51 )
      {
        if ( dword_48794C != 1
          || (((void (__fastcall *)(int *, int))loc_15CFA0)(v154, v7),
              (v51 = sub_15D0C4(
                       v154[0],
                       v154[1],
                       v154[2],
                       v154[3],
                       v154[4],
                       *(_DWORD *)(a1[3] + 76),
                       *(_DWORD *)(a1[3] + 80),
                       *(_DWORD *)(a1[3] + 84),
                       *(_DWORD *)(a1[3] + 88),
                       *(_DWORD *)(a1[3] + 92))) != 0) )
        {
          if ( dword_487930 )
          {
            v74 = *(_DWORD *)sub_242FC8(v51);
            v75 = (const char *)sub_25AC8C(v2, *(_DWORD *)(a1[3] + 60));
            v76 = (const char *)sub_25AC8C(v2, *(_DWORD *)(a1[3] + 64));
            sub_2594B0(v74, "infrun: stepping inside range [%s-%s]\n", v75, v76);
          }
          v52 = (_DWORD *)a1[3];
          v53 = dword_4878F8;
          v54 = v52[15];
          v52[18] = 1;
          if ( v54 != v53 || v54 == a1[9] || dword_48794C != 1 )
            goto LABEL_19;
          v52[33] = 1;
          sub_18A654((int)(a1 + 12));
          return;
        }
      }
      v55 = a1[3];
      if ( dword_48794C != 1 && *(_DWORD *)(v55 + 128) == 2 )
      {
        if ( sub_201E28(dword_4878F8) )
        {
          v109 = ((int (__fastcall *)(int, int))loc_16A46C)(v2, dword_4878F8);
          v110 = v109;
          if ( dword_487930 )
          {
            v111 = (_DWORD *)sub_242FC8(v109);
            sub_2594B0(*v111, "infrun: stepped into dynsym resolve code\n");
          }
          if ( !v110 )
            goto LABEL_19;
          memset(v184, 0, sizeof(v184));
          v112 = sub_15DABC(v7);
          v184[4] = v110;
          v183 = v112;
          v166[0] = v112;
          v166[1] = v184[0];
          v166[2] = v184[1];
          v167[0] = v184[2];
          v167[1] = v184[3];
          v167[2] = v110;
          v167[3] = v184[5];
          v167[4] = v184[6];
          v72 = v167;
          v167[5] = v184[7];
          v167[6] = v184[8];
          v73 = v166;
          memset(&v159[5], 0, 20);
          goto LABEL_123;
        }
        v55 = a1[3];
      }
      if ( *(_DWORD *)(v55 + 64) != 1 && (unsigned int)(*(_DWORD *)(v55 + 128) - 1) <= 1 && sub_15DA8C(v7) == 4 )
      {
        if ( dword_487930 )
        {
          v92 = (_DWORD *)sub_242FC8(4);
          sub_2594B0(*v92, "infrun: stepped into signal trampoline\n");
        }
        goto LABEL_19;
      }
      if ( ((int (__fastcall *)(int, int, _DWORD))loc_16A528)(v2, dword_4878F8, a1[11]) && *(_DWORD *)(a1[3] + 128) )
      {
        v78 = ((int (__fastcall *)(int, int, int))loc_16A3AC)(v2, v7, dword_4878F8);
        v79 = v78;
        if ( dword_487930 )
        {
          v104 = (_DWORD *)sub_242FC8(v78);
          sub_2594B0(*v104, "infrun: stepped into solib return tramp\n");
        }
        if ( v79 )
        {
          memset(v184, 0, sizeof(v184));
          v80 = sub_214838(v79);
          v81 = sub_15DABC(v7);
          v184[4] = v79;
          v184[2] = v80;
          v183 = v81;
          v168[0] = v81;
          v168[1] = v184[0];
          v168[2] = v184[1];
          v169[0] = v80;
          v169[1] = v184[3];
          v169[2] = v79;
          v169[3] = v184[5];
          v169[4] = v184[6];
          v72 = v169;
          v169[5] = v184[7];
          v169[6] = v184[8];
          v73 = v168;
          memset(&v159[10], 0, 20);
          goto LABEL_123;
        }
      }
      sub_15F9BC((int)v155, v7);
      if ( !sub_15D0C4(
              v155[0],
              v155[1],
              v155[2],
              v155[3],
              v155[4],
              *(_DWORD *)(a1[3] + 96),
              *(_DWORD *)(a1[3] + 100),
              *(_DWORD *)(a1[3] + 104),
              *(_DWORD *)(a1[3] + 108),
              *(_DWORD *)(a1[3] + 112)) )
      {
        v65 = sub_15F70C(0);
        sub_15FA2C(v156, v65);
        if ( sub_15D0C4(
               v156[0],
               v156[1],
               v156[2],
               v156[3],
               v156[4],
               *(_DWORD *)(a1[3] + 96),
               *(_DWORD *)(a1[3] + 100),
               *(_DWORD *)(a1[3] + 104),
               *(_DWORD *)(a1[3] + 108),
               *(_DWORD *)(a1[3] + 112)) )
        {
          v66 = (int *)sub_15D0C4(
                         *(_DWORD *)(a1[3] + 96),
                         *(_DWORD *)(a1[3] + 100),
                         *(_DWORD *)(a1[3] + 104),
                         *(_DWORD *)(a1[3] + 108),
                         *(_DWORD *)(a1[3] + 112),
                         0,
                         0,
                         0,
                         0x10u,
                         0);
          if ( !v66 || (v113 = *(int **)(a1[3] + 68), v66 = sub_C3460(dword_4878F8), v113 != v66) )
          {
            if ( dword_487930 )
            {
              v114 = (_DWORD *)sub_242FC8(v66);
              sub_2594B0(*v114, "infrun: stepped into subroutine\n");
            }
            v67 = a1[3];
            v68 = *(_DWORD *)(v67 + 128);
            if ( !v68 )
            {
              *(_DWORD *)(v67 + 132) = 1;
              sub_18A654((int)(a1 + 12));
              return;
            }
            if ( dword_48794C == 1 )
            {
              if ( ((int (__fastcall *)(int, int, int))loc_16A3AC)(v2, v7, dword_4878F8)
                || !a1[9] && sub_201E28(dword_4878F8) )
              {
                goto LABEL_19;
              }
              if ( *(_DWORD *)(a1[3] + 128) == 1 )
              {
                if ( dword_48794C == 1 )
                {
                  v123 = a1[9];
                  v124 = dword_4878F8 == v123;
                  if ( dword_4878F8 != v123 )
                    v124 = v123 == 0;
                  if ( v124 )
                    goto LABEL_19;
                  memset(v184, 0, sizeof(v184));
                  v125 = sub_15DABC(v7);
                  v184[4] = v123;
                  v183 = v125;
                  v170[0] = v125;
                  v170[1] = v184[0];
                  v170[2] = v184[1];
                  v171[0] = v184[2];
                  v171[1] = v184[3];
                  v171[2] = v123;
                  v171[3] = v184[5];
                  v171[4] = v184[6];
                  v72 = v171;
                  v171[5] = v184[7];
                  v171[6] = v184[8];
                  v73 = v170;
                  memset(&v159[15], 0, 20);
                  goto LABEL_123;
                }
                goto LABEL_186;
              }
            }
            else if ( v68 == 1 )
            {
              goto LABEL_186;
            }
            v69 = sub_194464(v7, dword_4878F8);
            if ( v69 || (v69 = ((int (__fastcall *)(int, int, int))loc_16A3AC)(v2, v7, dword_4878F8)) != 0 )
            {
              a1[9] = v69;
              if ( sub_201E28(v69) )
              {
                memset(v184, 0, sizeof(v184));
                v134 = a1[9];
                v183 = sub_15DABC(v7);
                v184[4] = v134;
                s[0] = v183;
                s[1] = v184[0];
                s[2] = v184[1];
                s[3] = v184[2];
                s[4] = v184[3];
                s[5] = v134;
                s[6] = v184[5];
                s[7] = v184[6];
                v72 = &s[3];
                s[8] = v184[7];
                s[9] = v184[8];
                v73 = s;
                memset(&v159[20], 0, 20);
                goto LABEL_123;
              }
            }
            memset(s, 0, sizeof(s));
            sub_21DEAC(v143, a1[9]);
            s[0] = v143[0];
            s[1] = v143[1];
            s[2] = v143[2];
            s[3] = v143[3];
            s[4] = v144;
            s[5] = v145;
            s[6] = v146;
            s[7] = v147;
            s[8] = v148;
            s[9] = v149;
            if ( v144 )
            {
LABEL_205:
              if ( !sub_1FFA9C(a1[11], s) )
              {
                v128 = a1[8];
                if ( v1[7] == 1 )
                {
                  if ( !v128 )
                    sub_187030(v2, a1);
                  v135 = sub_21DDAC(*(_DWORD *)v5);
                  if ( v135 && sub_21A6D8(v135) != 9 )
                    a1[9] = sub_B8F00(v2, a1[9]);
                  sub_21DEAC(&v183, *(_DWORD *)v5);
                  v136 = v184[5];
                  v58 = (_DWORD *)a1[3];
                  if ( v184[4] == *(_DWORD *)v5 )
                    goto LABEL_106;
                  v58[15] = v184[4];
                  v58[16] = v136;
                  sub_18C338(a1);
                }
                else
                {
                  if ( !v128 )
                    sub_187030(v2, a1);
                  v129 = sub_21DDAC(*(_DWORD *)v5);
                  if ( v129 && sub_21A6D8(v129) != 9 )
                    a1[9] = sub_B8F00(v2, a1[9]);
                  sub_21DEAC(&v173, a1[9]);
                  if ( v178 && v177 != a1[9] && v178 < a1[10] )
                    a1[9] = v178;
                  if ( ((int (__fastcall *)(int))loc_1693E0)(v2) )
                    a1[9] = ((int (__fastcall *)(int, _DWORD))loc_16942C)(v2, a1[9]);
                  v130 = a1[9];
                  if ( v130 == *(_DWORD *)v5 )
                    goto LABEL_40;
                  memset(&v182[1], 0, 0x24u);
                  v131 = sub_214838(v130);
                  v132 = sub_15F70C(v131);
                  v133 = sub_15DABC(v132);
                  v182[5] = v130;
                  v182[3] = v131;
                  v182[0] = v133;
                  v183 = v133;
                  v184[0] = v182[1];
                  v184[1] = v182[2];
                  v184[2] = v131;
                  v184[3] = v182[4];
                  v184[4] = v130;
                  v184[5] = v182[6];
                  v184[6] = v182[7];
                  v184[7] = v182[8];
                  v184[8] = v182[9];
                  memset(&v159[35], 0, 20);
                  sub_184D5C(
                    v2,
                    v133,
                    v182[1],
                    v182[2],
                    v131,
                    v182[4],
                    v130,
                    v182[6],
                    v182[7],
                    v182[8],
                    v182[9],
                    0,
                    0,
                    0,
                    0,
                    0,
                    15);
                  *(_DWORD *)(a1[3] + 64) = *(_DWORD *)(a1[3] + 60);
                  sub_18C338(a1);
                }
                return;
              }
            }
            v58 = (_DWORD *)a1[3];
            if ( v58[32] == 2 && v1[34] )
            {
LABEL_106:
              v58[33] = 1;
              sub_18A654((int)(a1 + 12));
              return;
            }
            if ( v1[7] == 1 )
            {
              v70 = a1[9];
              if ( v70 == *(_DWORD *)v5 )
              {
LABEL_19:
                sub_18C338(a1);
                return;
              }
              memset(v184, 0, sizeof(v184));
              v71 = sub_15DABC(v7);
              v184[4] = v70;
              v183 = v71;
              v173 = v71;
              v174 = v184[0];
              v175 = v184[1];
              v176[0] = v184[2];
              v176[1] = v184[3];
              v177 = v70;
              v178 = v184[5];
              v179 = v184[6];
              v72 = v176;
              v180 = v184[7];
              v181 = v184[8];
              v73 = &v173;
              memset(&v159[25], 0, 20);
LABEL_123:
              sub_184D5C(
                v2,
                *v73,
                v73[1],
                v73[2],
                *v72,
                v72[1],
                v72[2],
                v72[3],
                v72[4],
                v72[5],
                v72[6],
                0,
                0,
                0,
                0,
                0,
                15);
              goto LABEL_19;
            }
LABEL_186:
            sub_15F8C(v7);
            goto LABEL_19;
          }
        }
      }
      v56 = dword_4878F8;
      if ( dword_48794C == 1 && *(_DWORD *)(a1[3] + 128) )
      {
        if ( ((int (__fastcall *)(int, int, int))loc_16A3AC)(v2, v7, dword_4878F8) || !a1[9] && sub_201E28(dword_4878F8) )
          goto LABEL_19;
        if ( sub_201E28(dword_4878F8) )
        {
          memset(v184, 0, sizeof(v184));
          v99 = a1[9];
          v183 = sub_15DABC(v7);
          v184[4] = v99;
          v182[0] = v183;
          v182[1] = v184[0];
          v182[2] = v184[1];
          v182[3] = v184[2];
          v182[4] = v184[3];
          v182[5] = v99;
          v182[6] = v184[5];
          v182[7] = v184[6];
          v72 = &v182[3];
          v182[8] = v184[7];
          v182[9] = v184[8];
          v73 = v182;
          memset(&v159[30], 0, 20);
          goto LABEL_123;
        }
        v56 = dword_4878F8;
      }
      v57 = sub_21DEAC(v182, v56);
      v58 = (_DWORD *)a1[3];
      v59 = v182[4];
      if ( v58[32] != 2 || a1[11] )
      {
        if ( v58[16] == 1 )
        {
LABEL_132:
          if ( dword_487930 )
          {
            v77 = (_DWORD *)sub_242FC8(v57);
            sub_2594B0(*v77, "infrun: stepi/nexti\n");
            v58 = (_DWORD *)a1[3];
          }
          goto LABEL_106;
        }
        if ( !v182[4] )
        {
          if ( dword_487930 )
          {
            v103 = (_DWORD *)sub_242FC8(v57);
            sub_2594B0(*v103, "infrun: no line number info\n");
            v58 = (_DWORD *)a1[3];
          }
          goto LABEL_106;
        }
      }
      else
      {
        if ( !v182[4] )
        {
          if ( dword_487930 )
          {
            v126 = (_DWORD *)sub_242FC8(v57);
            sub_2594B0(*v126, "infrun: stepped into undebuggable function\n");
          }
          if ( !dword_4879B8 )
          {
            sub_15FA2C(v157, v7);
            if ( sub_15CD58(v157[0], v157[1], v157[2], v157[3], v157[4]) )
            {
              sub_15F8C(v7);
              sub_18C338(a1);
              return;
            }
          }
LABEL_40:
          *(_DWORD *)(a1[3] + 132) = 1;
          sub_18A654((int)(a1 + 12));
          return;
        }
        if ( v58[16] == 1 )
          goto LABEL_132;
      }
      v141 = v182[1];
      v140 = v182[5];
      v142 = v182[6];
      v94 = sub_15F70C(v57);
      ((void (__fastcall *)(int *, int))loc_15CFA0)(v158, v94);
      v95 = sub_15D0C4(
              v158[0],
              v158[1],
              v158[2],
              v158[3],
              v158[4],
              *(_DWORD *)(a1[3] + 76),
              *(_DWORD *)(a1[3] + 80),
              *(_DWORD *)(a1[3] + 84),
              *(_DWORD *)(a1[3] + 88),
              *(_DWORD *)(a1[3] + 92));
      if ( v95 && (v95 = sub_191058(*a1, a1[1], a1[2])) != 0 )
      {
        if ( dword_487930 )
        {
          v127 = (_DWORD *)sub_242FC8(v95);
          v95 = sub_2594B0(*v127, "infrun: stepped into inlined function\n");
        }
        v96 = sub_15F70C(v95);
        ((void (__fastcall *)(int *, int))loc_15E200)(&v183, v96);
        v97 = (_DWORD *)a1[3];
        v98 = v97[44];
        if ( v97[32] == 1 )
        {
          if ( v98 == v184[3] && v97[45] == v184[0] )
            goto LABEL_19;
        }
        else if ( v98 == v184[3] && v97[45] == v184[0] )
        {
          ((void (__fastcall *)(_DWORD, _DWORD, _DWORD, int))loc_190FEC)(*a1, a1[1], a1[2], v184[0]);
          v97 = (_DWORD *)a1[3];
        }
      }
      else
      {
        v100 = sub_15F70C(v95);
        v101 = sub_15DA8C(v100);
        if ( v101 == 2 )
        {
          v115 = sub_15F70C(2);
          ((void (__fastcall *)(int *, int))loc_15CFA0)(v159, v115);
          v101 = sub_15D0C4(
                   v159[0],
                   v159[1],
                   v159[2],
                   v159[3],
                   v159[4],
                   *(_DWORD *)(a1[3] + 76),
                   *(_DWORD *)(a1[3] + 80),
                   *(_DWORD *)(a1[3] + 84),
                   *(_DWORD *)(a1[3] + 88),
                   *(_DWORD *)(a1[3] + 92));
          if ( !v101 )
          {
            v116 = sub_15F70C(0);
            v117 = *(_DWORD *)(a1[3] + 80);
            v118 = *(_DWORD *)(a1[3] + 84);
            v119 = *(_DWORD *)(a1[3] + 88);
            v120 = *(_DWORD *)(a1[3] + 92);
            v160 = *(_DWORD *)(a1[3] + 76);
            v161 = v117;
            v162 = v118;
            v163 = v119;
            v164 = v120;
            v101 = ((int (__fastcall *)(int))loc_15FA88)(v116);
            v121 = v101;
            if ( v101 )
            {
              while ( 1 )
              {
                ((void (__fastcall *)(int *, int))loc_15CFA0)(v165, v121);
                v122 = sub_15D0C4(v165[0], v165[1], v165[2], v165[3], v165[4], v160, v161, v162, v163, v164);
                if ( v122 )
                  break;
                v101 = sub_15DA8C(v121);
                if ( v101 == 2 )
                {
                  v101 = ((int (__fastcall *)(int))loc_15FA88)(v121);
                  v121 = v101;
                  if ( v101 )
                    continue;
                }
                goto LABEL_162;
              }
              if ( dword_487930 )
              {
                v139 = (_DWORD *)sub_242FC8(v122);
                sub_2594B0(*v139, "infrun: stepping through inlined function\n");
              }
              v58 = (_DWORD *)a1[3];
              if ( v58[32] == 1 )
                goto LABEL_19;
              goto LABEL_106;
            }
          }
        }
LABEL_162:
        v97 = (_DWORD *)a1[3];
        if ( dword_4878F8 != v140 || v97[44] == v59 && v141 == v97[45] )
        {
          v105 = v182[3];
          v106 = v182[4];
          v97[15] = v140;
          v97[18] = 1;
          v97[16] = v142;
          v107 = sub_188198(v7, v182[0], v182[1], v182[2], v105, v106);
          if ( dword_487930 )
          {
            v108 = (_DWORD *)sub_242FC8(v107);
            sub_2594B0(*v108, "infrun: keep going\n");
          }
          goto LABEL_19;
        }
        if ( dword_487930 )
        {
          v102 = (_DWORD *)sub_242FC8(v101);
          sub_2594B0(*v102, "infrun: stepped to a different line\n");
          v97 = (_DWORD *)a1[3];
        }
      }
      v97[33] = 1;
      sub_18A654((int)(a1 + 12));
      return;
    case 5:
      if ( dword_487930 )
      {
        v43 = (_DWORD *)sub_242FC8(v8);
        sub_2594B0(*v43, "infrun: BPSTAT_WHAT_STOP_SILENT\n");
      }
      v24 = a1[3];
      dword_4879B0 = 0;
      *(_DWORD *)(v24 + 192) = 1;
      sub_18A654((int)(a1 + 12));
      return;
    case 6:
      if ( dword_487930 )
      {
        v46 = (_DWORD *)sub_242FC8(v8);
        sub_2594B0(*v46, "infrun: BPSTAT_WHAT_STOP_NOISY\n");
      }
      v10 = a1[3];
      dword_4879B0 = 1;
      *(_DWORD *)(v10 + 192) = 1;
      sub_18A654((int)(a1 + 12));
      return;
    case 7:
      if ( dword_487930 )
      {
        v47 = (_DWORD *)sub_242FC8(v8);
        sub_2594B0(*v47, "infrun: BPSTAT_WHAT_HP_STEP_RESUME\n");
      }
      v8 = sub_23DD04(a1[3]);
      v11 = (_DWORD *)a1[3];
      if ( !v11[50] )
        goto LABEL_11;
      v11[50] = 0;
      v11[48] = 1;
      sub_18C338(a1);
      return;
    default:
      v11 = (_DWORD *)a1[3];
      goto LABEL_11;
  }
}
