int __fastcall sub_585B8(int a1)
{
  double v1; // d0
  double v2; // d8
  int v3; // r4
  double v4; // d27
  double v5; // d28
  double v6; // d26
  double v7; // d25
  double v8; // d24
  double v9; // d31
  double v10; // d23
  double v11; // d7
  double v12; // d22
  double v13; // d30
  double v14; // d21
  double v15; // d29
  double v16; // d2
  double v17; // d19
  double v18; // d16
  double v19; // d4
  double v20; // d5
  double v21; // d1
  double v22; // d10
  double v23; // d20
  double v24; // d18
  double v25; // d0
  double v26; // d12
  double v27; // d9
  double v28; // d11
  double v29; // d17
  int v30; // r12
  int v31; // r0
  int v32; // r11
  double v33; // d19
  double v34; // d30
  double v35; // d7
  double v36; // d16
  double v37; // d19
  double v38; // d28
  double v39; // d5
  double v40; // d19
  double v41; // d8
  double v42; // d5
  double v43; // d16
  double v44; // d19
  int v45; // r0
  int v46; // r3
  double v47; // d20
  int v48; // r9
  double v49; // d12
  double v50; // d18
  double v51; // d16
  double v52; // d12
  double v53; // d17
  int v54; // r6
  int v55; // r11
  double *v56; // lr
  double *v57; // r3
  double v58; // d0
  int v59; // r8
  double v60; // d23
  int v61; // r7
  int v62; // r5
  int v63; // r7
  double *v64; // r1
  double *v65; // r0
  int v66; // r8
  double v67; // d22
  double v68; // d17
  double v69; // d0
  double v70; // d19
  double v71; // d16
  double v72; // d20
  double v73; // d21
  int v74; // r8
  int v75; // r6
  double v76; // d20
  double *v77; // r3
  double v78; // d0
  double v79; // d19
  double v80; // d17
  double *v81; // r11
  int v82; // r9
  double v83; // d23
  double *v84; // r7
  double v85; // d12
  double v86; // d17
  double v87; // d22
  double v88; // d12
  double v89; // d0
  double v90; // d16
  double v91; // d19
  double v92; // d21
  int v93; // r9
  int v94; // r12
  int v95; // r7
  int v96; // r7
  int v97; // r3
  int v98; // r2
  int v99; // r1
  double *v100; // r2
  double v101; // d16
  int v102; // r3
  double v103; // d16
  int v104; // r3
  int v105; // r12
  double v106; // d16
  double *v107; // r3
  double v108; // r0
  double v109; // d0
  bool v110; // fzf
  bool v111; // fnf
  int v112; // r12
  double v113; // d16
  double v114; // d0
  bool v115; // fcf
  bool v116; // fzf
  int v117; // r1
  int *v118; // r5
  int v119; // r4
  double *v120; // r7
  double v121; // d16
  int v122; // r3
  double v123; // d17
  int v124; // r4
  int v125; // r1
  int v126; // r2
  int v127; // r0
  int v128; // r3
  int v129; // r1
  int v130; // r2
  bool v131; // zf
  int v132; // r3
  int v133; // r2
  double v134; // r0
  double v135; // r0
  double v136; // d0
  double v137; // d16
  double v138; // d0
  int v139; // lr
  int v140; // r12
  int v141; // r0
  int v142; // r1
  int v143; // r3
  int v144; // lr
  int v145; // r2
  int v146; // r9
  _DWORD *v147; // r3
  int v148; // r0
  int v149; // r1
  double v150; // d16
  double v151; // d19
  double v152; // d17
  double v153; // d0
  double v154; // d16
  double v155; // d16
  double *v156; // r9
  double v157; // r0
  double v158; // d8
  bool v159; // fcf
  bool v160; // fzf
  double v161; // d0
  int v162; // r3
  int v163; // r3
  double v164; // d0
  double v165; // d16
  double v166; // d18
  double v167; // d16
  int v168; // r2
  int v169; // r1
  int v171; // [sp+30h] [bp-C4h]
  int v172; // [sp+40h] [bp-B4h]
  int v174; // [sp+4Ch] [bp-A8h]
  int v175; // [sp+64h] [bp-90h]
  char v176[128]; // [sp+6Ch] [bp-88h] BYREF

  v2 = v1;
  v3 = **(_DWORD **)(a1 + 84);
  v175 = *(_DWORD *)(a1 + 84);
  if ( dword_C0890 )
  {
    v4 = dbl_C08F0;
    v5 = dbl_C08F8;
    v6 = dbl_C08E8;
    v7 = dbl_C08E0;
    v8 = dbl_C08D8;
    v9 = dbl_C08A8;
    v10 = dbl_C08D0;
    v11 = dbl_C08B0;
    v12 = dbl_C08C8;
    v13 = dbl_C08A0;
    v14 = dbl_C08C0;
    v15 = dbl_C0898;
    v16 = dbl_C08F0 * -2.765914
        + dbl_C08F8 * 0.4897278
        + dbl_C08E8 * 8.110921
        + dbl_C08E0 * -15.17732
        + dbl_C08D8 * 19.75197
        + dbl_C08D0 * -18.14365
        + dbl_C08C8 * 11.59783
        + dbl_C08C0 * -4.73504;
    v17 = dbl_C08A8 * -3.48174 + dbl_C08B0 * 0.8360961 + dbl_C08A0 * 5.452988 + dbl_C0898 * -3.807229;
    v18 = dbl_C0898 * -0.01149947;
    v19 = dbl_C08A0 * 0.01654858;
    v20 = dbl_C08B0 * 0.003281435;
    v21 = dbl_C08C0 * -0.02375732;
    v22 = dbl_C08D8 * 0.04605479;
    v23 = dbl_C08A8 * -0.01149947;
    v24 = dbl_C08F0 * -0.02375732;
    v25 = dbl_C08C8 * 0.03353214;
    v26 = dbl_C08E8 * 0.03353214;
    v27 = dbl_C08D0 * -0.04080258;
    v28 = dbl_C08E0 * -0.04080258;
    v29 = dbl_C08F8 * 0.008203628;
  }
  else
  {
    dword_C0890 = 1;
    memset(&dbl_C08C0, 0, 0x48u);
    memset(&unk_C0908, 0, 0x148u);
    memset(&unk_C0A50, 0, 0x2A80u);
    memset(&unk_C34D0, 0, 0x2A80u);
    memset(&unk_C5F50, 0, 0xC800u);
    memset(&unk_D2750, 0, 0xC800u);
    memset(&unk_DEF50, 0, 0x140u);
    memset(&unk_DF090, 0, 0x140u);
    memset(&unk_DF1D0, 0, 0xC800u);
    memset(&unk_EB9D0, 0, 0xC800u);
    memset(&unk_F81D0, 0, 0x140u);
    memset(&unk_F8310, 0, 0x140u);
    memset(&unk_F8450, 0, 0xFA00u);
    v29 = 0.0;
    v24 = -0.0;
    v26 = 0.0;
    v22 = 0.0;
    v25 = 0.0;
    v16 = 0.0;
    v14 = 0.0;
    v12 = 0.0;
    v10 = 0.0;
    v8 = 0.0;
    v7 = 0.0;
    v6 = 0.0;
    v4 = 0.0;
    v5 = 0.0;
    v20 = 0.0;
    v19 = 0.0;
    v17 = 0.0;
    v15 = 0.0;
    v13 = 0.0;
    v9 = 0.0;
    v11 = 0.0;
    v28 = -0.0;
    v27 = -0.0;
    v21 = -0.0;
    v23 = -0.0;
    v18 = -0.0;
  }
  v30 = *(_DWORD *)(v3 + 2176);
  dbl_C08B0 = v9;
  dbl_C08B8 = v11;
  dbl_C08A8 = v13;
  v31 = dword_107E50;
  dbl_C08A0 = v15;
  v32 = dword_107E50;
  *(_DWORD *)(v3 + 2176) = (v30 + 1) % 80;
  v33 = v2 * 5.0 - v17;
  v34 = *(double *)(v3 + 2160);
  v35 = dbl_C0680[v32 + 122];
  v36 = v18 + v33 * 0.003281435;
  dbl_C0898 = v33;
  dbl_C0900 = v5;
  v37 = sintab[v30];
  dbl_C08D8 = v10;
  v38 = sintab[(v30 + 20) % 80];
  dbl_C08D0 = v12;
  dbl_C08C8 = v14;
  dbl_C08F8 = v4;
  dword_107E50 = (v31 + 1) % 1360;
  dbl_C08F0 = v6;
  dbl_C08E8 = v7;
  dbl_C08E0 = v8;
  v39 = v36 + v19 + v23 + v20;
  v40 = v39 * v37 / 680.0;
  v41 = v2 - v16;
  v42 = v39 * v38 / 680.0;
  *(double *)(v3 + 2160) = v34 - v35;
  dbl_C0680[v32 + 122] = v40;
  v43 = *(double *)(v3 + 2168);
  *(double *)(v3 + 2160) = *(double *)(v3 + 2160) + v40;
  v44 = *(double *)((char *)&unk_C34D8 + v32 * 8 - 8);
  v45 = dword_107E54;
  dbl_C08C0 = v41;
  v46 = dword_107E54 + 20;
  v47 = dbl_107E78;
  v48 = (dword_107E54 + 20) / 80;
  *(double *)(v3 + 2168) = v43 - v44;
  *(double *)((char *)&unk_C34D8 + v32 * 8 - 8) = v42;
  *(double *)(v3 + 2168) = *(double *)(v3 + 2168) + v42;
  v49 = v21 + v41 * 0.008203628 + v25 + v27 + v22 + v28 + v26 + v24;
  v50 = dbl_107E80;
  v51 = sintab[v45];
  v52 = v49 + v29;
  v53 = sintab[v46 - 80 * v48];
  v172 = dword_107E58;
  v54 = *(_DWORD *)(v3 + 2196) + 1;
  dword_107E54 = (v45 + 10) % 80;
  v55 = 8 * dword_107E58;
  v56 = (double *)((char *)&unk_D2638 + 8 * dword_107E58);
  v57 = (double *)((char *)&unk_C5F58 + 8 * dword_107E58);
  v58 = v56[35];
  v59 = dword_107E68;
  v174 = dword_107E68;
  v60 = *(v57 - 1);
  v61 = v54 - (_DWORD)&loc_75300 * (v54 / 480000);
  *(_DWORD *)(v3 + 2196) = v61;
  v62 = v61 % 8000;
  v63 = v59;
  v64 = (double *)((char *)&unk_DF098 + 8 * v59);
  v65 = (double *)((char *)&unk_DEF58 + 8 * v59);
  v66 = *(_DWORD *)(v3 + 3292);
  v67 = *(v64 - 1);
  v68 = v52 * v53 * 0.25;
  v69 = v47 - v58;
  *(v64 - 1) = v68;
  v70 = dbl_107E60;
  v56[35] = v68;
  v71 = v52 * v51 * 0.25;
  v72 = dbl_107E70;
  v73 = *(v65 - 1);
  *(v57 - 1) = v71;
  *(v65 - 1) = v71;
  dbl_107E78 = v68 + v69;
  dbl_107E60 = v71 + v70 - v60;
  dbl_107E80 = v68 + v50 - v67;
  dbl_107E70 = v71 + v72 - v73;
  v74 = 216 * v66;
  v75 = v3 + 4096;
  *(double *)(v3 + v74 + 2248) = sqrt((v68 + v69) * (v68 + v69) + dbl_107E60 * dbl_107E60) / 800.0;
  if ( (*(_DWORD *)(v3 + 4328) & 1) == 0 )
  {
    HIDWORD(v135) = v3 + v74 + 2208;
    LODWORD(v135) = a1;
    sub_56A3C(v135, (int)(*(double *)(v175 + 744) * 8000.0));
    v172 = dword_107E58;
    v55 = 8 * dword_107E58;
    v174 = dword_107E68;
    v63 = dword_107E68;
  }
  v76 = dbl_107E98;
  v77 = (double *)((char *)&unk_EB9D0 + v55);
  v78 = *(double *)((char *)&unk_EB9D0 + v55);
  v79 = v52 * sintab[dword_107E88];
  v80 = sintab[(dword_107E88 + 20) % 80];
  v81 = (double *)((char *)&unk_DF1D8 + v55);
  v82 = *(_DWORD *)(v3 + 3292);
  v83 = *(v81 - 1);
  v84 = &dbl_F85A0[v63];
  dword_107E88 = (dword_107E88 + 12) % 80;
  v85 = v52 * v80;
  v86 = dbl_107E90;
  v87 = *(v84 - 122);
  v88 = v85 * 0.25;
  v89 = dbl_107EA0 - v78;
  *v77 = v88;
  v90 = v79 * 0.25;
  v91 = dbl_107EA8;
  v92 = *(v84 - 82);
  *(v84 - 82) = v88;
  *(v84 - 122) = v90;
  *(v81 - 1) = v90;
  dbl_107EA0 = v88 + v89;
  dbl_107E90 = v90 + v86 - v83;
  dbl_107E98 = v90 + v76 - v87;
  dbl_107EA8 = v88 + v91 - v92;
  v93 = 216 * v82;
  *(double *)(v3 + v93 + 2352) = sqrt((v88 + v89) * (v88 + v89) + dbl_107E90 * dbl_107E90) / 800.0;
  v94 = *(_DWORD *)(v3 + 4328);
  if ( (v94 & 1) != 0 )
  {
    v95 = 1;
  }
  else
  {
    LODWORD(v134) = a1;
    HIDWORD(v134) = v3 + v93 + 2312;
    sub_56A3C(v134, (int)(*(double *)(v175 + 752) * 8000.0));
    v94 = *(_DWORD *)(v3 + 4328);
    v95 = v94 & 1;
    v172 = dword_107E58;
    v174 = dword_107E68;
  }
  v131 = *(_DWORD *)(v3 + 2196) == 0;
  dword_107E58 = (v172 + 1) % 6400;
  dword_107E68 = (v174 + 1) % 40;
  if ( v131 )
  {
    ++*(_DWORD *)(v3 + 56);
    if ( v95 )
    {
      if ( (v94 & 0x1000) != 0 )
        *(_DWORD *)(v3 + 2196) = &loc_733C0;
LABEL_13:
      v96 = **(_DWORD **)(a1 + 84);
      v97 = *(_DWORD *)(v96 + 3292);
      v98 = v96 + 216 * v97;
      v99 = v98 + 2240;
      v100 = (double *)(v98 + 2256);
      v101 = *(double *)(v99 + 8);
      if ( v101 > *v100 )
        *v100 = v101;
      v102 = v96 + 216 * v97;
      v103 = *(double *)(v102 + 2352);
      if ( v103 > *(double *)(v102 + 2360) )
        *(double *)(v102 + 2360) = v103;
      v104 = *(_DWORD *)(v96 + 2192);
      switch ( v104 )
      {
        case 6400:
          *(_DWORD *)(v96 + 2136) = *(_DWORD *)(v96 + 2132);
          break;
        case 120:
          dbl_107EB0 = *(double *)(v96 + 2160);
          dbl_107EB8 = dbl_107EB0;
          dbl_107EC0 = dbl_107EB0;
          break;
        case 1600:
          v164 = *(double *)(v96 + 2168) * *(double *)(v96 + 2168);
          dbl_107EB8 = *(double *)(v96 + 2160);
          v165 = *(double *)(v96 + 2168);
          v166 = (double)*(int *)(v96 + 2128);
          dbl_107EC8 = sqrt(v164 + dbl_107EB8 * dbl_107EB8);
          v167 = v165 / v166;
          *(double *)(v96 + 2184) = v167;
          if ( v167 < 0.0 )
          {
            v169 = *(_DWORD *)(v96 + 2176);
            *(_DWORD *)(v96 + 2176) = v169 - 1;
            if ( v169 - 1 < 0 )
              *(_DWORD *)(v96 + 2176) = v169 + 79;
          }
          else
          {
            v168 = *(_DWORD *)(v96 + 2176);
            *(_DWORD *)(v96 + 2176) = v168 + 1;
            if ( v168 + 1 > 79 )
              *(_DWORD *)(v96 + 2176) = v168 - 79;
          }
          break;
        case 4000:
          dbl_107EB0 = *(double *)(v96 + 2160);
          break;
      }
      v105 = *(_DWORD *)(v96 + 2196);
      *(_DWORD *)(v96 + 2192) = v104 + 1;
      if ( v105 % 8000 != *(_DWORD *)(v96 + 2136) )
        goto LABEL_24;
      v153 = *(double *)(v96 + 2168);
      v154 = *(double *)(v96 + 2160);
      *(_DWORD *)(v96 + 4328) &= 0xFFFFFF9F;
      v155 = sqrt(v153 * v153 + v154 * v154);
      v156 = (double *)(v96 + 4320);
      HIDWORD(v157) = 0;
      v158 = dbl_107EC8;
      dbl_107ED0 = v155;
      v160 = dbl_107EC8 == 0.0;
      v159 = dbl_107EC8 >= 0.0;
      *(double *)(v96 + 4312) = dbl_107EC8;
      if ( v160 || !v159 )
      {
        *v156 = 0.0;
LABEL_129:
        LODWORD(v157) = a1;
        *(_DWORD *)(v96 + 4328) |= 0x20u;
        sub_57748(v157);
        goto LABEL_120;
      }
      if ( v155 > 0.0 && (v157 = log10(0.0), v161 = v158 / v155 * 20.0, v161 <= 40.0) )
      {
        *v156 = v161;
        if ( v158 < 1000.0 || v161 < 10.0 )
          goto LABEL_129;
      }
      else
      {
        *v156 = 40.0;
        if ( v158 < 1000.0 )
          goto LABEL_129;
      }
      LODWORD(v157) = a1;
      dbl_107EB8 = dbl_107EB8 - dbl_107EB0;
      dbl_107EB0 = dbl_107EB0 - dbl_107EC0;
      sub_57748(v157);
LABEL_120:
      v162 = *(_DWORD *)(v96 + 4340);
      if ( (*(_DWORD *)(v96 + 4328) & 0x60) != 0 )
        *(_DWORD *)(v96 + 4340) = ++v162;
      if ( v162 > 40 )
        *(_DWORD *)(v96 + 4332) |= 2u;
      sub_56D1C(*(_DWORD *)(a1 + 84));
      v163 = v96 + 216 * *(_DWORD *)(v96 + 3292);
      *(_QWORD *)(v163 + 2256) = 0;
      *(_QWORD *)(v163 + 2360) = 0;
      *(_DWORD *)(v96 + 2192) = 0;
LABEL_24:
      v94 = *(_DWORD *)(v3 + 4328);
      goto LABEL_25;
    }
    v127 = sub_56E54(a1);
    v94 = *(_DWORD *)(v3 + 4328);
    if ( !v127 )
      *(_DWORD *)(v3 + 56) = 0;
    v95 = v94 & 1;
  }
  if ( v95 )
    goto LABEL_13;
  v128 = *(_DWORD *)(v3 + 3280);
  if ( v128 )
  {
    if ( *(double *)(v128 + 72) >= 50.0 )
    {
      v129 = *(_DWORD *)(v128 + 32);
      if ( v129 % 8000 == v62 )
      {
        v130 = v129 / -8000 + 60;
        v131 = (v94 & 2) == 0;
        v94 |= 1u;
        v132 = 60 * (v130 / 60);
        v133 = v130 % 60;
        if ( !v131 )
          v132 = *(_DWORD *)(v3 + 2132);
        *(_DWORD *)(v3 + 4304) = v133;
        *(_DWORD *)(v3 + 2192) = 0;
        *(_DWORD *)(v3 + 4328) = v94;
        *(_DWORD *)(v3 + 56) = 0;
        if ( v131 )
        {
          *(_DWORD *)(v3 + 2132) = v62;
          *(_DWORD *)(v3 + 2136) = v62;
        }
        else
        {
          *(_DWORD *)(v3 + 2136) = v132;
        }
      }
    }
  }
LABEL_25:
  if ( (v94 & 0x100) != 0 )
  {
    v136 = dbl_107E80;
    v137 = dbl_107E70;
  }
  else
  {
    if ( (v94 & 0x200) == 0 )
    {
      v106 = 0.0;
      goto LABEL_29;
    }
    v136 = dbl_107EA8;
    v137 = dbl_107E98;
  }
  v106 = sqrt(v136 * v136 + v137 * v137) / 5.0;
LABEL_29:
  v107 = &dbl_F85A0[v62];
  HIDWORD(v108) = &unk_108560;
  LODWORD(v108) = &dword_107EE0;
  v109 = *(v107 - 42) + (v106 - *(v107 - 42)) / (double)*(int *)(v3 + 2128);
  v110 = v109 == dbl_107ED8;
  v111 = v109 < dbl_107ED8;
  *(v107 - 42) = v109;
  if ( !v111 && !v110 )
  {
    v112 = v62 - 48;
    if ( v62 - 48 < 0 )
      v112 = v62 + 7952;
    dbl_107ED8 = v109;
    dword_107EE0 = v62;
    dbl_107EE8 = fabs(dbl_F85A0[v112 - 42]);
  }
  if ( !v62 )
  {
    v113 = dbl_107ED8;
    v114 = dbl_107EE8;
    v116 = dbl_107ED8 == 0.0;
    v115 = dbl_107ED8 >= 0.0;
    *(double *)(v3 + 2144) = dbl_107ED8;
    if ( !v116 && v115 )
    {
      if ( v114 > 0.0 )
      {
        v108 = log10(v108);
        v138 = v113 / v114 * 20.0;
        if ( v138 > 40.0 )
          v138 = 40.0;
      }
      else
      {
        v138 = 40.0;
      }
    }
    else
    {
      v138 = 0.0;
    }
    *(double *)(v3 + 2152) = v138;
    v117 = dword_107EE0 - 40;
    if ( dword_107EE0 - 40 < 0 )
      v117 = dword_107EE0 + 7960;
    dword_107EE0 = v117;
    v118 = *(int **)(a1 + 84);
    v119 = *v118;
    if ( !dword_107EF0 )
      dword_107EF4 = 0;
    v120 = (double *)(v119 + 2144);
    if ( !dword_107EF0 )
    {
      dword_107EF8 = 0;
      dword_107EFC = 0;
      LODWORD(v108) = 1;
    }
    v121 = *v120;
    if ( !dword_107EF0 )
      dword_107EF0 = LODWORD(v108);
    v122 = ++dword_107F00;
    if ( v121 < 2500.0 || (v123 = *(double *)(v119 + 2152), v123 < 15.0) )
    {
      v124 = v119 + 4096;
      v125 = *(_DWORD *)(v124 + 232);
      dword_107F04 = 0;
      dword_107F08 = 0;
      *(_DWORD *)(v124 + 232) = v125 & 0xFFFFFFED;
      dword_107F0C = 0;
LABEL_51:
      v126 = *(_DWORD *)(v75 + 232);
      LODWORD(v108) = 0;
      if ( (v126 & 2) == 0 )
        *(_DWORD *)(v75 + 236) |= 8u;
      dbl_107ED8 = 0.0;
      if ( (v126 & 1) == 0 )
        LODWORD(v108) = sub_56D1C(*(_DWORD *)(a1 + 84));
      return LODWORD(v108);
    }
    v139 = *(_DWORD *)(v119 + 4328);
    if ( (v139 & 0x300) == 0 )
      goto LABEL_51;
    v140 = dword_107EF4;
    v141 = dword_107EF8;
    dword_107EF4 = v117;
    dword_107EF8 = v140;
    dword_107EFC = v141;
    if ( v140 < v117 )
    {
      if ( v141 >= v140 )
      {
        if ( v141 <= v117 )
        {
          dword_107F10 = v141;
          v140 = v141;
          goto LABEL_77;
        }
        goto LABEL_76;
      }
    }
    else if ( v141 <= v140 )
    {
      if ( v141 >= v117 )
      {
        dword_107F10 = v141;
        v140 = v141;
LABEL_77:
        v142 = (v140 - dword_107F14) % 8000;
        if ( v142 )
        {
          if ( dword_107F08 >= dword_107F04 )
          {
            dword_107F04 = dword_107F08;
            dword_107F1C = v122;
            dword_107F20 = dword_107F14;
            dword_107F08 = 0;
          }
        }
        else if ( ++dword_107F08 > 10
               && (v139 & 1) != 0
               && ((v139 & 0x10) != 0 || v122 - dword_107F18 <= *(_DWORD *)(v119 + 2128)) )
        {
          *(_DWORD *)(v119 + 4328) = v139 | 2;
          *(_DWORD *)(v119 + 2132) = v140;
        }
        if ( (v118[192] & 8) != 0 )
        {
          v143 = *(_DWORD *)(v119 + 4328);
          if ( (v143 & 1) == 0 )
          {
            sub_6D00C(
              v176,
              128,
              "wwv1 %04x %3d %4d %5.0f %5.1f %5d %4d %4d %4d",
              v143,
              *(_DWORD *)(v119 + 2116),
              v140,
              v121,
              v123,
              v142,
              dword_107F0C,
              dword_107F08,
              dword_107F04);
            sub_42D0C(a1 + 16, v176);
            v140 = dword_107F10;
          }
        }
        v144 = *(_DWORD *)(v119 + 2128);
        if ( ++dword_107F0C >= v144 )
        {
          v145 = dword_107F08;
          v146 = dword_107F04;
          if ( dword_107F08 >= dword_107F04 )
          {
            v146 = dword_107F08;
            dword_107F04 = dword_107F08;
            dword_107F1C = dword_107F00;
            dword_107F20 = dword_107F14;
          }
          v147 = &unk_108560;
          v148 = *(_DWORD *)(v119 + 4328);
          if ( !v146 )
            v145 = dword_107F00;
          dword_107F14 = v140;
          if ( v146 )
          {
            v140 = dword_107F20;
            v147 = (_DWORD *)dword_107F1C;
          }
          else
          {
            dword_107F1C = v145;
          }
          v149 = v140 - dword_107F24;
          if ( v146 )
          {
            v171 = (int)v147;
          }
          else
          {
            v171 = v145;
            *(v147 - 400) = v140;
          }
          v150 = (double)(v149 % 8000);
          if ( (v148 & 0x10) != 0 )
          {
            v151 = fabs(v150);
            if ( v151 >= 12.0 )
            {
              if ( dword_107F28 < -2 )
              {
                if ( v144 > 8 )
                {
                  *(_DWORD *)(v119 + 2128) = v144 >> 1;
                  dword_107F28 = 0;
                }
              }
              else
              {
                --dword_107F28;
              }
            }
            else
            {
              v152 = v150 * 0.5 / (double)(3 * (v171 - dword_107F18)) + *(double *)(v119 + 24);
              if ( v152 <= 1.5 )
              {
                if ( v152 < -1.5 )
                  v152 = -1.5;
                *(double *)(v119 + 24) = v152;
              }
              else
              {
                *(double *)(v119 + 24) = 1.5;
              }
              if ( v151 < 6.0 )
              {
                if ( dword_107F28 > 2 )
                {
                  if ( v144 < 1024 )
                  {
                    *(_DWORD *)(v119 + 2128) = 2 * v144;
                    dword_107F28 = 0;
                  }
                }
                else
                {
                  ++dword_107F28;
                }
              }
            }
          }
          if ( (v118[192] & 8) != 0 )
          {
            sub_6D00C(
              v176,
              128,
              "wwv2 %04x %5.0f %5.1f %5d %4d %4d %4d %4.0f %7.2f",
              v148,
              *v120,
              *(double *)(v119 + 2152),
              v140,
              *(_DWORD *)(v119 + 2128),
              v146,
              v171 - dword_107F18,
              v150,
              *(double *)(v119 + 24) * 1000000.0 / 8000.0);
            sub_42D0C(a1 + 16, v176);
            v140 = dword_107F20;
            v148 = *(_DWORD *)(v119 + 4328);
            v171 = dword_107F1C;
          }
          *(_DWORD *)(v119 + 4328) = v148 | 0x10;
          dword_107F24 = v140;
          dword_107F18 = v171;
          dword_107F04 = 0;
          dword_107F08 = 0;
          dword_107F0C = 0;
        }
        else
        {
          dword_107F14 = v140;
        }
        goto LABEL_51;
      }
LABEL_76:
      v140 = v117;
      dword_107F10 = v117;
      goto LABEL_77;
    }
    dword_107F10 = v140;
    goto LABEL_77;
  }
  return LODWORD(v108);
}
