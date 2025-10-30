int __fastcall sub_18EF44(int *a1)
{
  int v2; // r0
  int v3; // r12
  int v4; // r7
  _DWORD *v5; // r6
  int v6; // r1
  int v7; // r2
  int v8; // r3
  int v9; // r0
  int *v10; // r10
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r3
  _DWORD *v16; // r0
  _DWORD *v17; // r0
  int v18; // r3
  int v19; // r0
  int v20; // r2
  unsigned int v21; // r3
  bool v22; // zf
  int v23; // r0
  int v24; // r5
  unsigned int v25; // r0
  int v26; // r0
  int *v27; // r3
  _DWORD *v28; // r0
  int v29; // r0
  _DWORD *v30; // r3
  int v31; // r5
  int v32; // r1
  int v33; // r2
  int v34; // r3
  _DWORD *v35; // r0
  int v36; // r1
  int v37; // r2
  int v38; // r0
  int v39; // r0
  int v40; // r0
  int v41; // r0
  int v42; // r2
  _DWORD *v43; // r0
  int v44; // r0
  int v45; // r3
  int v46; // r11
  int v47; // r10
  int v48; // r0
  int v49; // r8
  _DWORD *v50; // r9
  _DWORD *v51; // r0
  int v52; // r11
  int v53; // r9
  int v54; // r1
  int v55; // r2
  int v56; // r0
  _DWORD *v57; // r3
  int v58; // r1
  int v59; // r2
  int v60; // r3
  _DWORD *v61; // r12
  int v62; // r0
  int v63; // r0
  int v64; // r5
  int v65; // r0
  int v66; // r3
  char *v67; // r11
  int v68; // r0
  int v69; // r1
  int v70; // r2
  int v71; // r0
  int v72; // r2
  __int64 v73; // r0
  unsigned int v74; // r3
  _DWORD *v75; // r5
  _DWORD *v76; // r0
  _DWORD *v77; // r0
  _DWORD *v78; // r0
  int v79; // r1
  int v80; // r2
  int v81; // r0
  int v82; // r0
  int v83; // r0
  __int64 v84; // r0
  int v85; // r0
  int v86; // r5
  int v87; // r0
  int v88; // r1
  int v89; // r0
  _DWORD *v90; // r0
  _DWORD *v91; // r0
  __int64 v92; // r0
  const char *v93; // r0
  int v94; // r0
  _DWORD *v95; // r0
  const char *v96; // r5
  int v97; // r0
  int v98; // r0
  int v99; // r0
  int v100; // r1
  int v101; // r2
  int v102; // r0
  int v103; // r0
  int v104; // r0
  int v105; // r5
  int v106; // r0
  void *v107; // r3
  int v108; // r3
  int v109; // r5
  int v110; // r0
  int v111; // r5
  int v112; // r0
  int v113; // r11
  int v114; // r0
  const char *v115; // r0
  int v116; // r0
  int v117; // r5
  _DWORD *v118; // r0
  _DWORD *v119; // r0
  _DWORD *v120; // r0
  _DWORD *v121; // r0
  _DWORD *v122; // r0
  int v123; // r5
  int *v124; // r0
  int v125; // r5
  int v126; // r0
  int v127; // r3
  int v128; // r1
  int v129; // r2
  _DWORD *v130; // r0
  _DWORD *v131; // r0
  _DWORD *v132; // r0
  _DWORD *v133; // r0
  _DWORD *v134; // r0
  int v135; // r0
  _DWORD *v136; // r0
  _DWORD *v137; // r0
  int v138; // r0
  int v139; // r1
  int v140; // r2
  _DWORD *v141; // r0
  int v142; // r6
  __int64 v143; // r0
  _DWORD *v144; // r0
  int v145; // r0
  _DWORD *v146; // r3
  __int64 v147; // r0
  int v148; // [sp+Ch] [bp-50h]
  const char *v149; // [sp+10h] [bp-4Ch]
  int v150; // [sp+10h] [bp-4Ch]
  const char *v151; // [sp+10h] [bp-4Ch]
  void *v152; // [sp+14h] [bp-48h]
  int v153; // [sp+18h] [bp-44h]
  int v154; // [sp+18h] [bp-44h]
  int v155; // [sp+1Ch] [bp-40h]
  int v156; // [sp+1Ch] [bp-40h]
  int v157; // [sp+20h] [bp-3Ch]
  int v158; // [sp+20h] [bp-3Ch]
  int v159; // [sp+24h] [bp-38h]
  int v160; // [sp+28h] [bp-34h]
  int v161; // [sp+2Ch] [bp-30h]
  __int64 v162; // [sp+30h] [bp-2Ch] BYREF
  int v163; // [sp+38h] [bp-24h]
  int v164; // [sp+3Ch] [bp-20h] BYREF
  int v165; // [sp+40h] [bp-1Ch]
  int v166; // [sp+44h] [bp-18h]
  int v167; // [sp+48h] [bp-14h]
  int v168; // [sp+4Ch] [bp-10h]
  int v169; // [sp+50h] [bp-Ch]
  int v170; // [sp+54h] [bp-8h]

  v2 = sub_26C1E0(a1);
  v3 = a1[4];
  v4 = v2;
  if ( v3 == 11 )
  {
    if ( dword_487930 )
    {
      v16 = (_DWORD *)sub_242FC8(v2);
      sub_2594B0(*v16, "infrun: TARGET_WAITKIND_IGNORE\n");
    }
    goto LABEL_13;
  }
  if ( v3 == 15 )
  {
    if ( dword_487930 )
    {
      v17 = (_DWORD *)sub_242FC8(v2);
      sub_2594B0(*v17, "infrun: TARGET_WAITKIND_THREAD_EXITED\n");
    }
LABEL_13:
    sub_187370(a1 + 12);
    return sub_26C300(v4);
  }
  if ( v3 != 13 )
  {
    v5 = a1 + 4;
    v153 = *a1;
    v155 = a1[1];
    v157 = a1[2];
    v6 = a1[5];
    v7 = a1[6];
    v8 = a1[7];
    v167 = a1[4];
    v168 = v6;
    v169 = v7;
    v170 = v8;
    dword_487910 = 0;
    dword_487954[0] = v153;
    dword_487954[1] = v155;
    dword_487954[2] = v157;
    dword_487960 = v167;
    *(_DWORD *)algn_487964 = v6;
    *(_DWORD *)&algn_487964[4] = v7;
    *(_DWORD *)&algn_487964[8] = v8;
    goto LABEL_5;
  }
  v26 = off_489AF8(&dword_4899A0);
  if ( v26 )
  {
    v27 = &dword_48769C;
    while ( 1 )
    {
      v27 = (int *)*v27;
      if ( !v27 )
        break;
      if ( !v27[17] )
        goto LABEL_36;
    }
    if ( dword_487930 )
    {
      v28 = (_DWORD *)sub_242FC8(v26);
      sub_2594B0(*v28, "infrun: TARGET_WAITKIND_NO_RESUMED (ignoring: bg)\n");
    }
    goto LABEL_13;
  }
LABEL_36:
  v29 = sub_240794(v26);
  v30 = (_DWORD *)dword_48A4D4;
  if ( dword_48A4D4 )
  {
    while ( v30[11] == 2 || !v30[9] && !v30[42] )
    {
      v30 = (_DWORD *)v30[1];
      if ( !v30 )
        goto LABEL_41;
    }
    if ( dword_487930 )
    {
      v91 = (_DWORD *)sub_242FC8(v29);
      sub_2594B0(*v91, "infrun: TARGET_WAITKIND_NO_RESUMED (ignoring: found resumed)\n");
    }
    goto LABEL_13;
  }
LABEL_41:
  v31 = dword_487918;
  if ( dword_487918 )
  {
    while ( !*(_DWORD *)(v31 + 12) || ((int (*)(void))loc_23E7D8)() )
    {
      v31 = *(_DWORD *)(v31 + 4);
      if ( !v31 )
        goto LABEL_45;
    }
    if ( dword_487930 )
    {
      v119 = (_DWORD *)sub_242FC8(0);
      sub_2594B0(*v119, "infrun: TARGET_WAITKIND_NO_RESUMED (expect process exit)\n");
    }
    goto LABEL_13;
  }
LABEL_45:
  v5 = a1 + 4;
  v154 = *a1;
  v156 = a1[1];
  v158 = a1[2];
  v32 = a1[5];
  v33 = a1[6];
  v34 = a1[7];
  v167 = a1[4];
  v3 = v167;
  v168 = v32;
  v169 = v33;
  v170 = v34;
  dword_487910 = 0;
  dword_487954[0] = v154;
  dword_487954[1] = v156;
  dword_487954[2] = v158;
  dword_487960 = v167;
  *(_DWORD *)algn_487964 = v32;
  *(_DWORD *)&algn_487964[4] = v33;
  *(_DWORD *)&algn_487964[8] = v34;
  if ( v167 != 13 )
  {
LABEL_5:
    if ( (v3 & 0xFFFFFFFD) != 0 )
    {
      v9 = sub_23E408(*a1, a1[1], a1[2]);
      a1[3] = v9;
      if ( !v9 )
      {
        v9 = sub_23FC70(*a1, a1[1], a1[2], v18);
        a1[3] = v9;
      }
      v3 = a1[4];
      *(_DWORD *)(v9 + 72) = 0;
    }
    else
    {
      v9 = a1[3];
    }
    v10 = a1 + 5;
    sub_189C68(v9, v3, a1 + 5);
    v11 = sub_15D778();
    v12 = ((int (__fastcall *)(int))loc_D0E28)(v11);
    if ( a1[4] == 1 )
    {
      v20 = a1[5];
      v21 = (v20 - 7) & 0xFFFFFFFB;
      v22 = v21 == 0;
      if ( v21 )
        v22 = v20 == 4;
      if ( v22 )
      {
        v23 = sub_1DDB40(*a1, a1[1], a1[2]);
        v24 = *(_DWORD *)(v23 + 4);
        v25 = sub_1DFB3C(v23);
        v12 = sub_CF680(v24, v25);
        if ( v12 )
        {
          if ( dword_487930 )
          {
            v118 = (_DWORD *)sub_242FC8(v12);
            v12 = sub_2594B0(*v118, "infrun: Treating signal as SIGTRAP\n");
          }
          a1[5] = 5;
        }
      }
    }
    if ( sub_232950(v12) )
    {
      if ( (a1[4] & 0xFFFFFFFD) != 0 )
      {
        v36 = a1[1];
        v37 = a1[2];
        v164 = *a1;
        v165 = v36;
        v166 = v37;
      }
      else
      {
        v19 = ps_getpid_0((int)a1);
        sub_98F50(&v164, v19);
      }
    }
    else
    {
      v164 = dword_46BBCC;
      v165 = dword_46BBD0;
      v166 = dword_46BBD4;
    }
    sub_23F298(v164, v165, v166, 0);
    v13 = sub_23EE80(v164, v165, v166, 0);
    v14 = a1[4];
    switch ( v14 )
    {
      case 0:
      case 2:
        if ( dword_487930 )
        {
          if ( v14 )
          {
            v137 = (_DWORD *)sub_242FC8(v13);
            sub_2594B0(*v137, "infrun: TARGET_WAITKIND_SIGNALLED\n");
          }
          else
          {
            v78 = (_DWORD *)sub_242FC8(v13);
            sub_2594B0(*v78, "infrun: TARGET_WAITKIND_EXITED\n");
          }
        }
        v79 = a1[1];
        v80 = a1[2];
        LODWORD(qword_4878EC) = *a1;
        HIDWORD(qword_4878EC) = v79;
        unk_4878F4 = v80;
        v81 = sub_183A88(*a1, a1[1], a1[2]);
        ((void (__fastcall *)(int))loc_183698)(v81);
        v82 = sub_183688();
        ((void (__fastcall *)(_DWORD))loc_1CD290)(*(_DWORD *)(v82 + 36));
        v83 = sub_187570(0);
        sub_22EFF4(v83);
        sub_18955C();
        if ( a1[4] )
        {
          v116 = sub_1DDB40(*a1, a1[1], a1[2]);
          v117 = sub_1DD58C(v116);
          if ( ((int (*)(void))loc_16C96C)() )
          {
            v142 = sub_26CBF4("_exitsignal");
            v143 = ((__int64 (__fastcall *)(int, int))loc_16C9B8)(v117, a1[5]);
            sub_26CC80(v142, HIDWORD(v143), v143, (int)v143 >> 31);
          }
          else if ( dword_487930 )
          {
            v144 = (_DWORD *)sub_242FC8(0);
            sub_25A418(*v144, "Cannot fill $_exitsignal with the correct signal number.\n");
          }
          v89 = sub_1B8E5C(a1[5]);
        }
        else
        {
          v84 = sub_26CBF4("_exitcode");
          sub_26CC80(v84, HIDWORD(v84), a1[5], a1[5] >> 31);
          v85 = sub_183688();
          v86 = a1[5];
          *(_BYTE *)(v85 + 148) = 1;
          v87 = sub_183688();
          v88 = a1[5];
          *(_QWORD *)(v87 + 152) = v86;
          dword_46D9B0 = v88;
          v89 = sub_1B8F18(v88);
        }
        v90 = (_DWORD *)sub_242F8C(v89);
        sub_25680C(*v90);
        ((void (__fastcall *)(_DWORD, _DWORD, _DWORD))loc_230B18)(qword_4878EC, HIDWORD(qword_4878EC), unk_4878F4);
        goto LABEL_138;
      case 1:
        if ( dword_487930 )
        {
          v77 = (_DWORD *)sub_242FC8(v13);
          sub_2594B0(*v77, "infrun: TARGET_WAITKIND_STOPPED\n");
        }
        ((void (__fastcall *)(int *))loc_18DDF4)(a1);
        return sub_26C300(v4);
      case 3:
        if ( dword_487930 )
        {
          v130 = (_DWORD *)sub_242FC8(v13);
          sub_2594B0(*v130, "infrun: TARGET_WAITKIND_LOADED\n");
        }
        if ( !sub_98F78(a1, &qword_4878EC) )
          sub_1851CC(*a1, a1[1], a1[2]);
        LODWORD(v73) = sub_183A88(*a1, a1[1], a1[2]);
        if ( !(_DWORD)v73 )
          goto LABEL_198;
        v74 = *(_DWORD *)(v73 + 24);
        if ( v74 )
        {
          if ( v74 <= 1 )
          {
            v75 = a1 + 12;
LABEL_170:
            sub_18A6B0(0);
            sub_187370(v75);
            return sub_26C300(v4);
          }
          if ( v74 - 2 > 1 )
            goto LABEL_197;
          if ( dword_487930 )
          {
            v76 = (_DWORD *)sub_242FC8(v73);
            sub_2594B0(*v76, "infrun: quietly stopped\n");
          }
LABEL_65:
          sub_18A654((int)(a1 + 12));
        }
        else
        {
          v123 = sub_1DDB40(*a1, a1[1], a1[2]);
          sub_201E88();
          v124 = *(int **)(v123 + 4);
          v125 = a1[3];
          v126 = sub_D80E0(v124, dword_4878F8, *a1, a1[1], a1[2], (int)v5);
          v127 = a1[3];
          *(_DWORD *)(v125 + 136) = v126;
          if ( *(_DWORD *)(v127 + 224) )
            goto LABEL_83;
          if ( sub_CF360(*(_DWORD *)(v127 + 136)) )
          {
LABEL_75:
            sub_18C6A8(a1);
          }
          else
          {
            v129 = dword_4879B4;
            v75 = a1 + 12;
            *(_DWORD *)(a1[3] + 144) = 0;
            if ( !v129 )
            {
              sub_D8084(0, v128, 0);
              goto LABEL_170;
            }
            dword_4879B0 = 1;
            sub_18A654((int)(a1 + 12));
          }
        }
        break;
      case 4:
      case 5:
        if ( dword_487930 )
        {
          if ( v14 == 4 )
          {
            v141 = (_DWORD *)sub_242FC8(v13);
            sub_2594B0(*v141, "infrun: TARGET_WAITKIND_FORKED\n");
          }
          else
          {
            v51 = (_DWORD *)sub_242FC8(v13);
            sub_2594B0(*v51, "infrun: TARGET_WAITKIND_VFORKED\n");
          }
        }
        v52 = sub_1DDB40(*a1, a1[1], a1[2]);
        v53 = sub_1DD58C(v52);
        v54 = a1[1];
        v55 = a1[2];
        v164 = *a1;
        v165 = v54;
        v166 = v55;
        if ( sub_98F78(&v164, &dword_475848) )
          goto LABEL_199;
        v56 = ps_getpid_0((int)&v164);
        v57 = (_DWORD *)dword_487944;
        if ( !dword_487944 )
          goto LABEL_103;
        if ( *(_DWORD *)(dword_487944 + 4) == v56 )
          goto LABEL_154;
        while ( 1 )
        {
          v57 = (_DWORD *)*v57;
          if ( !v57 )
            break;
          if ( v56 == v57[1] )
          {
LABEL_154:
            if ( sub_98F78(v57 + 3, &v164) )
            {
              v109 = sub_183A88(*a1, a1[1], a1[2]);
              v110 = sub_186264(*a1, a1[1], a1[2], 5);
              if ( !dword_487934 && !dword_48793C )
                ((void (__fastcall *)(int))loc_18B7C0)(v110);
              if ( a1[4] == 4 )
              {
                v145 = ps_getpid_0((int)a1);
                v146 = (_DWORD *)dword_487944;
                if ( dword_487944 )
                {
                  do
                  {
                    if ( v145 == v146[1] )
                      break;
                    v146 = (_DWORD *)*v146;
                  }
                  while ( v146 );
                }
                sub_186194(v146, *v10, a1[6], a1[7]);
              }
              v111 = sub_1DDA34(*v10, a1[6], a1[7], v53, *(_DWORD *)(v109 + 32));
              v112 = sub_1DFB3C(v52);
              v113 = v112;
              if ( dword_487978 )
              {
                v148 = *(_DWORD *)sub_242FC8(v112);
                v114 = sub_1DFB3C(v111);
                v151 = (const char *)sub_25AC8C(v53, v114);
                v115 = (const char *)sub_25AC8C(v53, v113);
                sub_2594B0(v148, "displaced: write child pc from %s to %s\n", v151, v115);
              }
              sub_1DFC60(v111, v113);
            }
            break;
          }
        }
LABEL_103:
        if ( !sub_98F78(a1, &qword_4878EC) )
          sub_1851CC(*a1, a1[1], a1[2]);
        if ( a1[4] != 5 )
          sub_CDC0C(*v10, a1[6], a1[7]);
        sub_18709C(sub_23DD54);
        v58 = v5[1];
        v59 = v5[2];
        v60 = v5[3];
        v61 = (_DWORD *)(a1[3] + 208);
        *v61 = *v5;
        v61[1] = v58;
        v61[2] = v59;
        v61[3] = v60;
        v62 = sub_1DDB40(*a1, a1[1], a1[2]);
        dword_4878F8 = sub_1DFB3C(v62);
        v63 = sub_1DDBBC(dword_4878F8);
        v64 = a1[3];
        v65 = sub_D80E0(*(int **)(v63 + 4), dword_4878F8, *a1, a1[1], a1[2], (int)v5);
        v66 = a1[3];
        *(_DWORD *)(v64 + 136) = v65;
        if ( *(_DWORD *)(v66 + 224) )
        {
LABEL_83:
          a1[4] = 1;
          a1[5] = 0;
          ((void (__fastcall *)(int *))loc_18DDF4)(a1);
          return sub_26C300(v4);
        }
        if ( sub_CF360(*(_DWORD *)(v66 + 136)) )
          goto LABEL_75;
        v67 = off_46D588;
        *(_DWORD *)(a1[3] + 144) = 0;
        v150 = ((int (*)(void))loc_18539C)();
        v159 = *a1;
        v160 = a1[1];
        v161 = a1[2];
        v68 = *v10;
        v69 = a1[6];
        v70 = a1[7];
        LODWORD(v162) = *v10;
        HIDWORD(v162) = v69;
        v163 = v70;
        if ( v67 == "child" )
        {
          if ( !dword_46D58C && !dword_487950 && !dword_487970 )
            ((void (__fastcall *)(int, int, int))loc_23EFC0)(v159, v160, v161);
        }
        else
        {
          if ( dword_46D58C )
            goto LABEL_172;
          if ( !dword_487950 && !dword_487970 )
            goto LABEL_113;
        }
        v68 = ((int (__fastcall *)(_DWORD, _DWORD, int, int))loc_23EFC0)(v162, HIDWORD(v162), v163, 1);
        if ( dword_46D58C )
          goto LABEL_114;
        if ( dword_487950 )
          goto LABEL_180;
LABEL_113:
        if ( !dword_487970 || !sub_232950(v68) )
          goto LABEL_114;
LABEL_180:
        if ( v67 == "child" )
          v138 = sub_23F9F0(v159, v160, v161);
        else
          v138 = sub_23F9F0(v162, HIDWORD(v162), v163);
        a1[3] = ((int (__fastcall *)(int))loc_23DBE4)(v138);
        v139 = HIDWORD(qword_4878EC);
        v140 = unk_4878F4;
        *a1 = qword_4878EC;
        a1[1] = v139;
        a1[2] = v140;
        sub_18C338(a1);
LABEL_114:
        if ( v67 == "child" )
        {
          v71 = sub_23F9F0(v162, HIDWORD(v162), v163);
          goto LABEL_116;
        }
LABEL_172:
        v71 = sub_23F9F0(v159, v160, v161);
LABEL_116:
        a1[3] = ((int (__fastcall *)(int))loc_23DBE4)(v71);
        v72 = unk_4878F4;
        *(_QWORD *)a1 = qword_4878EC;
        a1[2] = v72;
        if ( v150 )
        {
LABEL_56:
          sub_18C338(a1);
          return sub_26C300(v4);
        }
        goto LABEL_65;
      case 6:
        if ( dword_487930 )
        {
          v121 = (_DWORD *)sub_242FC8(v13);
          sub_2594B0(*v121, "infrun: TARGET_WAITKIND_EXECD\n");
        }
        if ( !sub_98F78(a1, &qword_4878EC) )
          sub_23F8E4(a1[3]);
        sub_187570(1);
        v149 = (const char *)a1[5];
        v162 = qword_4878EC;
        v163 = unk_4878F4;
        v46 = sub_183688();
        v47 = ps_getpid_0((int)&v162);
        v48 = sub_CDD18();
        v49 = dword_48A4D4;
        while ( v49 )
        {
          v50 = (_DWORD *)(v49 + 8);
          v49 = *(_DWORD *)(v49 + 4);
          v48 = ps_getpid_0((int)v50);
          if ( v47 == v48 )
          {
            v48 = sub_98F78(v50, &v162);
            if ( !v48 )
              v48 = sub_23E38C(*v50, v50[1], v50[2]);
          }
        }
        v92 = ((__int64 (__fastcall *)(int))loc_23DBE4)(v48);
        *(_DWORD *)(v92 + 48) = 0;
        *(_DWORD *)(v92 + 52) = 0;
        *(_DWORD *)(v92 + 56) = 0;
        *(_DWORD *)(v92 + 60) = 0;
        *(_DWORD *)(v92 + 64) = 0;
        *(_DWORD *)(v92 + 224) = 0;
        sub_DB208(v92);
        sub_98F50(&v164, v47);
        v93 = (const char *)sub_23095C(v164, v165, v166);
        v94 = sub_259858("%s is executing new program: %s\n", v93, v149);
        v95 = (_DWORD *)sub_242F8C(v94);
        sub_25680C(*v95);
        sub_DB35C(3);
        v96 = (const char *)sub_200658(v149, 0);
        v152 = sub_9253C(1598424, (int)v96);
        if ( !v96 )
          sub_946B0("Could not load symbols for executable %s.\nDo you need \"set sysroot\"?", v149);
        v97 = sub_201A40(0, 0);
        if ( off_46D59C == "new" )
        {
          v135 = sub_183688();
          v136 = sub_183900(*(_DWORD *)(v135 + 8));
          v46 = ((int (__fastcall *)(_DWORD *))loc_184054)(v136);
          *(_DWORD *)(v46 + 12) = v47;
          sub_230AF0();
          ((void (__fastcall *)(int))loc_183698)(v46);
          ((void (__fastcall *)(_DWORD))loc_1CD290)(*(_DWORD *)(v46 + 36));
        }
        else
        {
          sub_235DE8(v97);
        }
        if ( *(_DWORD *)(v46 + 36) != dword_487D2C )
        {
          sub_94700(
            (int)"infrun.c",
            1212,
            "%s: Assertion `%s' failed.",
            "void follow_exec(ptid_t, char*)",
            "current_program_space == inf->pspace");
LABEL_197:
          v73 = sub_94700((int)"infrun.c", 5016, "unhandled stop_soon: %d", v74);
LABEL_198:
          ((void (__fastcall *)(_DWORD, _DWORD))loc_160D0)(v73, HIDWORD(v73));
LABEL_199:
          v147 = sub_94700(
                   (int)"infrun.c",
                   1559,
                   "%s: Assertion `%s' failed.",
                   "int displaced_step_in_progress_thread(ptid_t)",
                   "!ptid_equal (ptid, null_ptid)");
          return sub_1900AC(v147, HIDWORD(v147));
        }
        sub_950E8(v96, v46, 8);
        sub_92620(v152);
        ((void (*)(void))loc_2359FC)();
        if ( off_46D59C == "new" )
          sub_23FC70(v162, HIDWORD(v162), v163, &v162);
        v98 = sub_201A50(0);
        sub_19376C(v98);
        sub_DC424();
        sub_D8084(v99, v100, v101);
        v102 = sub_1DDB40(*a1, a1[1], a1[2]);
        dword_4878F8 = sub_1DFB3C(v102);
        v103 = ((int (*)(void))loc_23DBE4)();
        a1[3] = v103;
        v104 = sub_1DDBBC(v103);
        v105 = a1[3];
        v106 = sub_D80E0(*(int **)(v104 + 4), dword_4878F8, *a1, a1[1], a1[2], (int)v5);
        v107 = (void *)a1[5];
        *(_DWORD *)(v105 + 136) = v106;
        if ( v107 )
          free(v107);
        v108 = a1[3];
        a1[5] = 0;
        if ( *(_DWORD *)(v108 + 224) )
        {
          a1[4] = 1;
          ((void (__fastcall *)(int *))loc_18DDF4)(a1);
          return sub_26C300(v4);
        }
        if ( !sub_CF360(*(_DWORD *)(v108 + 136)) )
        {
          *(_DWORD *)(a1[3] + 144) = 0;
          sub_18C338(a1);
          return sub_26C300(v4);
        }
        goto LABEL_75;
      case 7:
        if ( dword_487930 )
        {
          v122 = (_DWORD *)sub_242FC8(v13);
          sub_2594B0(*v122, "infrun: TARGET_WAITKIND_VFORK_DONE\n");
        }
        if ( !sub_98F78(a1, &qword_4878EC) )
          sub_1851CC(*a1, a1[1], a1[2]);
        *(_BYTE *)(sub_183688() + 133) = 0;
        v44 = sub_183688();
        v45 = *(_DWORD *)(a1[3] + 224);
        *(_DWORD *)(*(_DWORD *)(v44 + 36) + 28) = 0;
        if ( v45 )
          goto LABEL_83;
        goto LABEL_56;
      case 8:
        if ( dword_487930 )
        {
          v43 = (_DWORD *)sub_242FC8(v13);
          sub_2594B0(*v43, "infrun: TARGET_WAITKIND_SYSCALL_ENTRY\n");
        }
        goto LABEL_74;
      case 9:
        if ( dword_487930 )
        {
          v120 = (_DWORD *)sub_242FC8(v13);
          sub_2594B0(*v120, "infrun: TARGET_WAITKIND_SYSCALL_RETURN\n");
        }
LABEL_74:
        if ( !sub_18EE0C(a1) )
          goto LABEL_75;
        return sub_26C300(v4);
      case 10:
        if ( dword_487930 )
        {
          v131 = (_DWORD *)sub_242FC8(v13);
          sub_2594B0(*v131, "infrun: TARGET_WAITKIND_SPURIOUS\n");
        }
        if ( *(_DWORD *)(a1[3] + 224) )
          goto LABEL_83;
        if ( !sub_98F78(a1, &qword_4878EC) )
          sub_1851CC(*a1, a1[1], a1[2]);
        sub_18A6B0(0);
        goto LABEL_13;
      case 12:
        if ( dword_487930 )
        {
          v133 = (_DWORD *)sub_242FC8(v13);
          sub_2594B0(*v133, "infrun: TARGET_WAITKIND_NO_HISTORY\n");
        }
        v39 = sub_98F78(a1, &qword_4878EC);
        if ( !v39 )
          v39 = sub_1851CC(*a1, a1[1], a1[2]);
        if ( dword_487930 )
        {
          v132 = (_DWORD *)sub_242FC8(v39);
          sub_2594B0(*v132, "infrun: stopped\n");
        }
        sub_18709C(sub_23DD54);
        v40 = sub_1DDB40(qword_4878EC, HIDWORD(qword_4878EC), unk_4878F4);
        v41 = sub_1DFB3C(v40);
        v42 = a1[3];
        dword_4878F8 = v41;
        if ( *(_DWORD *)(v42 + 224) )
          goto LABEL_83;
        sub_1B8FD4();
        goto LABEL_65;
      case 14:
        if ( dword_487930 )
        {
          v134 = (_DWORD *)sub_242FC8(v13);
          sub_2594B0(*v134, "infrun: TARGET_WAITKIND_THREAD_CREATED\n");
        }
        if ( *(_DWORD *)(a1[3] + 224) )
          goto LABEL_83;
        v38 = sub_98F78(a1, &qword_4878EC);
        if ( !v38 )
          v38 = sub_1851CC(*a1, a1[1], a1[2]);
        if ( sub_232950(v38) || !((int (__fastcall *)(int *))loc_18C374)(a1) )
          goto LABEL_56;
        return sub_26C300(v4);
      default:
        return sub_26C300(v4);
    }
    return sub_26C300(v4);
  }
  if ( dword_487930 )
  {
    v35 = (_DWORD *)sub_242FC8(13);
    sub_2594B0(*v35, "infrun: TARGET_WAITKIND_NO_RESUMED\n");
  }
LABEL_138:
  dword_4879B0 = 0;
  sub_18A654((int)(a1 + 12));
  return sub_26C300(v4);
}
