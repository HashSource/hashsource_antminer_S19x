int sub_8AB14()
{
  unsigned int v0; // r7
  int *v1; // r10
  int v2; // r3
  unsigned __int8 **v3; // r9
  int v4; // r5
  unsigned int v5; // r4
  const char *v6; // r8
  int v7; // r1
  unsigned int v8; // r6
  signed int v9; // r0
  int v10; // r3
  bool v11; // cc
  unsigned int v12; // r6
  unsigned int v13; // r5
  int v14; // r6
  int v15; // r2
  bool v16; // zf
  int v17; // r7
  int *v18; // lr
  unsigned __int8 *v19; // r0
  int v20; // r1
  int v21; // r2
  int v22; // r3
  int v23; // r0
  int v24; // r1
  unsigned __int8 *v25; // r1
  unsigned int v26; // r3
  const char *v27; // r6
  int v28; // r5
  unsigned __int8 **v29; // r9
  int v30; // r5
  unsigned __int8 *v31; // r1
  unsigned __int8 *v32; // r2
  unsigned __int8 *v33; // r3
  int v34; // r7
  unsigned __int8 *v35; // r1
  int v36; // r2
  unsigned int v37; // r0
  int v38; // r3
  __int16 *v39; // r9
  int v40; // r6
  unsigned int v41; // r2
  int v42; // r3
  size_t v43; // r8
  int v44; // r4
  size_t v45; // r6
  void *v46; // r0
  __int16 *v47; // r3
  __int16 *v48; // r0
  const char *v49; // r9
  int v50; // r6
  _BOOL4 v51; // r5
  unsigned int v52; // r3
  __int16 *v53; // r8
  int v54; // t1
  int v56; // r1
  int v57; // r3
  int v58; // r0
  int v59; // r0
  int *v60; // r7
  const char *v61; // r5
  int v62; // r8
  int *v63; // r6
  int v64; // r1
  int v65; // r2
  int v66; // r3
  unsigned __int8 *v67; // r1
  unsigned __int8 *v68; // r5
  int *v69; // r3
  int v70; // r0
  int v71; // r1
  int v72; // r5
  const char **v73; // r2
  unsigned __int8 *v74; // r3
  int v75; // r0
  int v76; // r0
  int v77; // r5
  int v78; // r3
  int v79; // r3
  unsigned __int8 *v80; // r5
  unsigned __int8 *v81; // r8
  int v82; // r4
  int v83; // r0
  int v84; // t1
  int v85; // r1
  int v86; // r5
  int v87; // r0
  int v88; // r1
  int v89; // r1
  int v90; // r1
  int v91; // r0
  int v92; // r5
  int v93; // r0
  const char *v94; // r0
  int v95; // r5
  int v96; // r0
  int v97; // r3
  int v98; // r0
  __int64 v99; // r0
  int v100; // r2
  int v101; // r5
  int v102; // r0
  int v103; // r0
  int v104; // r0
  int v105; // r1
  __int64 v106; // r2
  int v107; // r1
  unsigned __int8 *v108; // r1
  int v109; // r3
  int v110; // r0
  int v111; // r3
  int v112; // r0
  int v113; // r5
  __int64 v114; // r0
  int v115; // r3
  int *v116; // r0
  int v117; // r1
  int v118; // r5
  unsigned __int8 **v119; // r3
  int v120; // r0
  int v121; // r3
  int v122; // r3
  int *v123; // r3
  int *v124; // r3
  int v125; // r0
  int v126; // r0
  int v127; // r5
  int v128; // r0
  const void **v129; // r5
  int v130; // r0
  int v131; // r0
  int v132; // r0
  int v133; // r0
  int v134; // r0
  int v135; // r0
  int v136; // r5
  int v137; // r0
  int v138; // r3
  int v139; // r0
  const char *v140; // r0
  const char *v141; // r0
  const char *v142; // r0
  char dest[4]; // [sp+8h] [bp-14E4h] BYREF
  const char *v144; // [sp+Ch] [bp-14E0h]
  int *v145; // [sp+10h] [bp-14DCh]
  unsigned __int8 **v146; // [sp+14h] [bp-14D8h]
  int v147; // [sp+18h] [bp-14D4h]
  char *v148; // [sp+1Ch] [bp-14D0h]
  int v149; // [sp+20h] [bp-14CCh]
  __int16 *v150; // [sp+24h] [bp-14C8h]
  int v151; // [sp+28h] [bp-14C4h] BYREF
  int v152; // [sp+2Ch] [bp-14C0h]
  unsigned __int64 v153; // [sp+30h] [bp-14BCh]
  int *v154; // [sp+38h] [bp-14B4h]
  __int16 *v155; // [sp+3Ch] [bp-14B0h]
  const void *v156[2]; // [sp+40h] [bp-14ACh] BYREF
  unsigned __int8 *v157; // [sp+48h] [bp-14A4h]
  unsigned __int8 *v158; // [sp+4Ch] [bp-14A0h]
  unsigned __int8 *v159; // [sp+50h] [bp-149Ch]
  unsigned __int8 *v160; // [sp+54h] [bp-1498h]
  int v161; // [sp+58h] [bp-1494h]
  unsigned __int8 *v162; // [sp+5Ch] [bp-1490h]
  __int64 v163; // [sp+60h] [bp-148Ch] BYREF
  int v164; // [sp+68h] [bp-1484h]
  _WORD v165[26]; // [sp+78h] [bp-1474h] BYREF
  _BYTE v166[36]; // [sp+208h] [bp-12E4h] BYREF

  v1 = &dword_475158;
  v2 = dword_47518C;
  if ( dword_47518C )
  {
    sub_1C4D40(stderr, "Starting parse\n");
    v2 = dword_47518C;
  }
  v3 = (unsigned __int8 **)v166;
  v165[0] = 0;
  v4 = 0;
  dword_475190 = 0;
  v150 = (__int16 *)v166;
  v154 = &stderr;
  v144 = "Entering state %d\n";
  LOWORD(v5) = -21845;
  dword_475194 = -2;
  v6 = (const char *)v165;
  v149 = -1431655765;
  v7 = (int)&v151;
  v155 = v165;
  v151 = 200;
  if ( v2 )
    goto LABEL_41;
LABEL_4:
  if ( v4 == 3 )
  {
LABEL_42:
    v49 = v6;
    v50 = 0;
    v51 = v155 != v165;
    goto LABEL_43;
  }
  while ( 1 )
  {
    v5 = (unsigned int)word_36B924;
    v8 = word_36B924[v4];
    if ( v8 == -44 )
    {
      v5 = (unsigned int)&off_36B740;
LABEL_21:
      v13 = v5 + v4;
      v14 = *(unsigned __int8 *)(v13 + 1792);
      if ( !*(_BYTE *)(v13 + 1792) )
      {
        ++v1[14];
        sub_8AAD0("syntax error");
      }
      v15 = v1[13];
      goto LABEL_23;
    }
    v9 = v1[15];
    v10 = v1[13];
    if ( v9 == -2 )
    {
      if ( v10 )
        sub_1C4D40(*v154, "Reading a token: ");
      v9 = sub_89988();
      v10 = v1[13];
      v1[15] = v9;
    }
    if ( v9 <= 0 )
    {
      v0 = 0;
      if ( !v10 )
        LOWORD(v5) = -18624;
      v1[15] = 0;
      if ( v10 )
      {
        v5 = (unsigned int)&off_36B740;
        sub_1C4D40(*v154, "Now at end of input.\n");
      }
      else
      {
        HIWORD(v5) = 54;
        v0 = 0;
      }
    }
    else
    {
      v11 = v9 <= 292;
      v5 = 46912;
      if ( v9 > 292 )
        v0 = 2;
      else
        HIWORD(v5) = 54;
      if ( v9 > 292 )
        HIWORD(v5) = 54;
      else
        v9 += v5;
      if ( v11 )
        v0 = *(unsigned __int8 *)(v9 + 736);
      v8 += v0;
      if ( v10 )
      {
        sub_1C4D40(*v154, "%s ", "Next token is");
        sub_8AA24(*v154, v0);
        sub_1C4D40(*v154, (const char *)&word_356638);
      }
    }
    if ( v8 > 0x179 )
      goto LABEL_21;
    v12 = v5 + v8;
    if ( *(char *)(v12 + 1032) != v0 )
      goto LABEL_21;
    v15 = v1[13];
    v4 = *(char *)(v12 + 1412);
    if ( v4 > 0 )
    {
      if ( v15 )
      {
        v5 = (unsigned int)v154;
        sub_1C4D40(*v154, "%s ", "Shifting");
        sub_8AA24(*(_DWORD *)v5, v0);
        sub_1C4D40(*(_DWORD *)v5, (const char *)&word_356638);
      }
      v1[15] = -2;
      v3 += 6;
      v27 = v6;
      v64 = dword_475164;
      v65 = dword_475168;
      v66 = dword_47516C;
      *v3 = (unsigned __int8 *)dword_475160;
      v3[1] = (unsigned __int8 *)v64;
      v3[2] = (unsigned __int8 *)v65;
      v3[3] = (unsigned __int8 *)v66;
      v67 = *(unsigned __int8 **)algn_475174;
      v3[4] = (unsigned __int8 *)dword_475170;
      v3[5] = v67;
      goto LABEL_31;
    }
    v14 = -v4;
LABEL_23:
    v16 = v15 == 0;
    v17 = *(unsigned __int8 *)(v5 + v14 + 1920);
    v18 = (int *)&v3[6 * (1 - v17)];
    LODWORD(v153) = *v18;
    v19 = (unsigned __int8 *)*v18;
    v20 = v18[1];
    v21 = v18[2];
    v22 = v18[3];
    v18 += 4;
    v157 = v19;
    v158 = (unsigned __int8 *)v20;
    v159 = (unsigned __int8 *)v21;
    v160 = (unsigned __int8 *)v22;
    v23 = *v18;
    v24 = v18[1];
    v161 = *v18;
    v162 = (unsigned __int8 *)v24;
    if ( !v16 )
    {
      v23 = sub_1C4D40(*v154, "Reducing stack by rule %d (line %lu):\n", v14 - 1, word_36BF10[v14]);
      if ( v17 )
      {
        v152 = -2 * v17;
        v61 = &v6[-2 * v17];
        v148 = (char *)v6;
        v62 = 0;
        v147 = v14;
        v146 = v3;
        v145 = v1;
        v63 = v154;
        do
        {
          sub_1C4D40(*v63, "   $%d = ", ++v62);
          v61 += 2;
          sub_8AA24(*v63, *(unsigned __int8 *)(v5 + *(__int16 *)&v61[2 * (__int16)v17 + v152] + 2156));
          v23 = sub_1C4D40(*v63, (const char *)&word_356638);
        }
        while ( v17 != v62 );
        v6 = v148;
        v14 = v147;
        v3 = v146;
        v1 = v145;
      }
    }
    switch ( v14 )
    {
      case 2:
        v1[1] = 0;
        v1[12] = 0;
        v1[8] = 0;
        v1[16] = 0;
        goto LABEL_27;
      case 6:
        sub_1C37BC(v1[9], 88);
        sub_1C38F4(v1[9], *v3);
        sub_1C37BC(v1[9], 88);
        v1[1] = (int)*v3;
        goto LABEL_27;
      case 8:
        sub_1C37BC(v1[9], 22);
        goto LABEL_27;
      case 9:
        v117 = 61;
        goto LABEL_155;
      case 10:
        sub_1C37BC(v1[9], 62);
        v123 = (int *)v1[1];
        if ( v123 )
          v1[1] = *v123;
        goto LABEL_27;
      case 11:
        sub_1C37BC(v1[9], 58);
        goto LABEL_27;
      case 12:
        sub_1C37BC(v1[9], 59);
        goto LABEL_27;
      case 13:
        sub_1C37BC(v1[9], 63);
        goto LABEL_27;
      case 14:
        sub_1C37BC(v1[9], 65);
        goto LABEL_27;
      case 15:
        v1[8] = 1;
        goto LABEL_27;
      case 16:
        sub_1C37BC(v1[9], 81);
        sub_1C4F0C(v1[9], *v3, v3[1]);
        sub_1C37BC(v1[9], 81);
        v120 = v1[1];
        v1[8] = 0;
        if ( !v120 )
          goto LABEL_27;
        v122 = *(_DWORD *)(v120 + 24);
        if ( *(_BYTE *)v122 != 1 )
          goto LABEL_167;
        do
        {
          v120 = *(_DWORD *)(v122 + 20);
          v122 = *(_DWORD *)(v120 + 24);
        }
        while ( *(_BYTE *)v122 == 1 );
        goto LABEL_166;
      case 17:
        sub_1C37BC(v1[9], 81);
        sub_1C4F0C(v1[9], *v3, v3[1]);
        sub_1C37BC(v1[9], 81);
        v120 = v1[1];
        v1[8] = 0;
        if ( !v120 )
          goto LABEL_27;
        v121 = *(_DWORD *)(v120 + 24);
        if ( *(_BYTE *)v121 != 1 )
          goto LABEL_167;
        do
        {
          v120 = *(_DWORD *)(v121 + 20);
          v121 = *(_DWORD *)(v120 + 24);
        }
        while ( *(_BYTE *)v121 == 1 );
LABEL_166:
        v1[1] = v120;
LABEL_167:
        v1[1] = sub_172888(v120, *v3, 0);
        goto LABEL_27;
      case 18:
        ((void (__fastcall *)(int))loc_1C3BBC)(v1[9]);
        sub_1C37BC(v1[9], 81);
        v119 = v3 - 6;
        goto LABEL_161;
      case 19:
        ((void (__fastcall *)(int))loc_1C3BBC)(v1[9]);
        sub_1C37BC(v1[9], 81);
        LODWORD(v163) = "";
        v119 = (unsigned __int8 **)&v163;
        HIDWORD(v163) = 0;
LABEL_161:
        sub_1C4F0C(v1[9], *v119, v119[1]);
        sub_1C37BC(v1[9], 81);
        goto LABEL_27;
      case 20:
        v118 = sub_1BFC3C(v1[1], 0, 0, 0, 0, v156);
        if ( v118 )
        {
          v152 = (int)v156[0];
          HIDWORD(v163) = strlen((const char *)v156[0]);
          LODWORD(v163) = dest;
          memcpy(dest, v156[0], HIDWORD(v163) + 1);
          v132 = v1[9];
          v1[1] = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v1[1] + 24) + 24) + 24 * v118 - 12);
          sub_1C37BC(v132, 81);
          sub_1C4F0C(v1[9], v163, HIDWORD(v163));
          sub_1C37BC(v1[9], 81);
        }
        sub_8940C();
        goto LABEL_27;
      case 21:
        sub_8943C();
        v117 = 23;
LABEL_155:
        sub_1C37BC(v1[9], v117);
        v115 = v1[1];
        if ( !v115 )
          goto LABEL_27;
        goto LABEL_152;
      case 22:
        v116 = sub_8940C();
        sub_1C547C(v116);
        goto LABEL_27;
      case 23:
        v112 = sub_1C37BC(v1[9], 46);
        v113 = v1[9];
        v114 = sub_1C36FC(v112);
        sub_1C3898(v113, HIDWORD(v114), v114, (int)v114 >> 31);
        sub_1C37BC(v1[9], 46);
        sub_8943C();
        v115 = v1[1];
        if ( v115 )
LABEL_152:
          v1[1] = *(_DWORD *)(*(_DWORD *)(v115 + 24) + 20);
        goto LABEL_27;
      case 25:
        dword_487CA4 = 1;
        goto LABEL_27;
      case 26:
        ++dword_487CA4;
        goto LABEL_27;
      case 27:
        v109 = v1[1];
        v110 = v1[9];
        if ( v109 )
        {
          v111 = *(_DWORD *)(v109 + 24);
          if ( *(_BYTE *)v111 == 1
            && **(_BYTE **)(*(_DWORD *)(v111 + 20) + 24) == 3
            && **((_BYTE **)*(v3 - 18) + 6) == 3 )
          {
            sub_1C37BC(v110, 61);
            v110 = v1[9];
          }
        }
        sub_1C37BC(v110, 52);
        sub_1C38F4(v1[9], *(v3 - 18));
        sub_1C37BC(v1[9], 52);
        v1[1] = (int)*(v3 - 18);
        goto LABEL_27;
      case 29:
        sub_1C37BC(v1[9], 3);
        goto LABEL_27;
      case 30:
        if ( v1[1] && sub_1736DC() )
          v1[16] = 1;
        goto LABEL_27;
      case 31:
        if ( v1[16] && v1[1] && sub_1736DC() )
        {
          sub_1C37BC(v1[9], 52);
          v136 = v1[9];
          v137 = sub_1780B4(*(_DWORD *)(*(_DWORD *)(v136 + 4) + 4));
          sub_1C38F4(v136, *(_DWORD *)(v137 + 48));
          v138 = *(_DWORD *)(sub_1780B4(*(_DWORD *)(*(_DWORD *)(v1[9] + 4) + 4)) + 48);
          v139 = v1[9];
          v1[1] = v138;
          sub_1C37BC(v139, 52);
          v1[16] = 0;
        }
        sub_1C37BC(v1[9], 4);
        goto LABEL_27;
      case 32:
        sub_1C37BC(v1[9], 30);
        goto LABEL_27;
      case 33:
        sub_1C37BC(v1[9], 5);
        goto LABEL_27;
      case 34:
        sub_1C37BC(v1[9], 1);
        goto LABEL_27;
      case 35:
        sub_1C37BC(v1[9], 2);
        goto LABEL_27;
      case 36:
        sub_1C37BC(v1[9], 7);
        goto LABEL_27;
      case 37:
        sub_1C37BC(v1[9], 8);
        goto LABEL_27;
      case 38:
        v107 = 14;
        goto LABEL_123;
      case 39:
        v107 = 15;
        goto LABEL_123;
      case 40:
        v107 = 18;
        goto LABEL_123;
      case 41:
        v107 = 19;
        goto LABEL_123;
      case 42:
        v107 = 16;
        goto LABEL_123;
      case 43:
        v107 = 17;
LABEL_123:
        sub_1C37BC(v1[9], v107);
        v1[1] = *(_DWORD *)(sub_1780B4(*(_DWORD *)(*(_DWORD *)(v1[9] + 4) + 4)) + 64);
        goto LABEL_27;
      case 44:
        sub_1C37BC(v1[9], 11);
        goto LABEL_27;
      case 45:
        sub_1C37BC(v1[9], 13);
        goto LABEL_27;
      case 46:
        sub_1C37BC(v1[9], 12);
        goto LABEL_27;
      case 47:
        sub_1C37BC(v1[9], 21);
        goto LABEL_27;
      case 48:
      case 49:
        sub_1C37BC(v1[9], 79);
        sub_1C3898(v1[9], v56, *v3, v3[1]);
        v57 = *(_DWORD *)(sub_1780B4(*(_DWORD *)(*(_DWORD *)(v1[9] + 4) + 4)) + 64);
        v58 = v1[9];
        v1[1] = v57;
        sub_1C37BC(v58, 79);
        goto LABEL_27;
      case 50:
        sub_1C37BC(v1[9], 38);
        sub_1C38F4(v1[9], v3[2]);
        v105 = (int)v3[2];
        v106 = *(_QWORD *)v3;
        v104 = v1[9];
        goto LABEL_116;
      case 51:
        sub_89468(v1[9], *v3, (int)v3[1], 0, (int)&v163);
        sub_1C37BC(v1[9], 38);
        sub_1C38F4(v1[9], v164);
        v104 = v1[9];
        v105 = v164;
        v106 = v163;
LABEL_116:
        v1[1] = v105;
        sub_1C3898(v104, v105, v106, HIDWORD(v106));
        sub_1C37BC(v1[9], 38);
        goto LABEL_27;
      case 52:
        sub_1C37BC(v1[9], 39);
        sub_1C38F4(v1[9], v3[4]);
        v103 = v1[9];
        v1[1] = (int)v3[4];
        sub_1C38C0(v103, v3);
        sub_1C37BC(v1[9], 39);
        goto LABEL_27;
      case 54:
        if ( v1[12] )
        {
          v101 = sub_26C1E0(v23);
          v102 = sub_26EF68(*(_DWORD *)(*(_DWORD *)(v1[9] + 4) + 4), v1[12]);
          v1[1] = sub_26BC70(v102);
          sub_26C464(v101);
        }
        goto LABEL_27;
      case 55:
        sub_1C37BC(v1[9], 38);
        v95 = v1[9];
        v96 = sub_1780B4(*(_DWORD *)(*(_DWORD *)(v95 + 4) + 4));
        sub_1C38F4(v95, *(_DWORD *)(v96 + 12));
        v97 = *(_DWORD *)(sub_1780B4(*(_DWORD *)(*(_DWORD *)(v1[9] + 4) + 4)) + 12);
        v98 = (int)*(v3 - 6);
        v1[1] = v97;
        v99 = sub_171258(v98);
        v100 = v99;
        LODWORD(v99) = v1[9];
        *(v3 - 6) = (unsigned __int8 *)v100;
        sub_1C3898(v99, HIDWORD(v99), *(_DWORD *)(v100 + 20), 0);
        sub_1C37BC(v1[9], 38);
        goto LABEL_27;
      case 56:
        sub_1C37BC(v1[9], 67);
        v1[1] = *(_DWORD *)(sub_1780B4(*(_DWORD *)(*(_DWORD *)(v1[9] + 4) + 4)) + 12);
        goto LABEL_27;
      case 57:
        v79 = (int)v3[1];
        v80 = *v3;
        if ( v79 > 0 )
        {
          v152 = (int)v6;
          v81 = &v80[v79];
          v148 = (char *)v5;
          do
          {
            sub_1C37BC(v1[9], 38);
            v82 = v1[9];
            v83 = sub_1780B4(*(_DWORD *)(*(_DWORD *)(v82 + 4) + 4));
            sub_1C38F4(v82, *(_DWORD *)(v83 + 4));
            v84 = *v80++;
            sub_1C3898(v1[9], v85, v84, 0);
            sub_1C37BC(v1[9], 38);
          }
          while ( v80 != v81 );
          v6 = (const char *)v152;
          v5 = (unsigned int)v148;
        }
        sub_1C37BC(v1[9], 38);
        v86 = v1[9];
        v87 = sub_1780B4(*(_DWORD *)(*(_DWORD *)(v86 + 4) + 4));
        sub_1C38F4(v86, *(_DWORD *)(v87 + 4));
        sub_1C3898(v1[9], v88, 0, 0);
        sub_1C37BC(v1[9], 38);
        sub_1C37BC(v1[9], 51);
        sub_1C3898(v1[9], v89, 0, 0);
        sub_1C3898(v1[9], v90, v3[1], (int)v3[1] >> 31);
        sub_1C37BC(v1[9], 51);
        goto LABEL_27;
      case 58:
        sub_1C37BC(v1[9], 84);
        sub_1C37BC(v1[9], 84);
        v75 = sub_263ACC(**(_DWORD **)(v1[9] + 4));
        if ( v75 && (v76 = sub_26BC70(v75), (v77 = v76) != 0) )
        {
          v78 = *(_DWORD *)(v76 + 24);
          if ( *(_BYTE *)v78 == 1 )
          {
            v77 = *(_DWORD *)(v78 + 20);
            sub_1C37BC(v1[9], 61);
          }
        }
        else
        {
          v77 = 0;
        }
        v1[1] = v77;
        goto LABEL_27;
      case 59:
        v74 = v3[2];
        if ( v74 )
          goto LABEL_95;
        v134 = sub_1C3E58(*v3, v3[1]);
        v135 = sub_21AB84(v134);
        if ( !v135 )
        {
          v140 = (const char *)sub_1C3E58(*v3, v3[1]);
          sub_946E0("No file or function \"%s\".", v140);
        }
        LODWORD(v153) = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v135 + 4) + 32) + 12);
        goto LABEL_27;
      case 60:
        v93 = sub_1C3E58(*v3, v3[1]);
        sub_21D6B0(&v163, v93, *(v3 - 12), 1, 0);
        v74 = (unsigned __int8 *)v163;
        if ( !(_DWORD)v163 || *((_DWORD *)off_46DBB8 + 4 * (*(unsigned __int8 *)(v163 + 32) >> 3)) != 10 )
        {
          v94 = (const char *)sub_1C3E58(*v3, v3[1]);
          sub_946E0("No function \"%s\" in specified context.", v94);
        }
LABEL_95:
        LODWORD(v153) = *((_DWORD *)v74 + 2);
        goto LABEL_27;
      case 61:
        v91 = sub_1C3E58(*v3, v3[1]);
        sub_21D6B0(&v163, v91, *(v3 - 12), 1, 0);
        v92 = v163;
        if ( !(_DWORD)v163 )
        {
          v141 = (const char *)sub_1C3E58(*v3, v3[1]);
          sub_946E0("No symbol \"%s\" in specified context.", v141);
        }
        sub_1C37BC(v1[9], 40);
        sub_1C3840(v1[9], HIDWORD(v163));
        v71 = v92;
        goto LABEL_91;
      case 62:
        v72 = (int)*(v3 - 12);
        v73 = *(const char ***)(v72 + 24);
        if ( (unsigned int)*(unsigned __int8 *)v73 - 3 > 1 )
          sub_946E0("`%s' is not defined as an aggregate type.", v73[2]);
        sub_1C37BC(v1[9], 86);
        sub_1C38F4(v1[9], v72);
        sub_1C4F0C(v1[9], *v3, v3[1]);
        sub_1C37BC(v1[9], 86);
        goto LABEL_27;
      case 64:
        v148 = (char *)sub_1C3E58(*v3, v3[1]);
        sub_21D6B0(&v163, v148, 0, 1, 0);
        v152 = v163;
        if ( (_DWORD)v163 )
        {
          sub_1C37BC(v1[9], 40);
          sub_1C3840(v1[9], 0);
          v71 = v152;
LABEL_91:
          sub_1C37E8(v1[9], v71);
          sub_1C37BC(v1[9], 40);
          goto LABEL_27;
        }
        v129 = v156;
        v133 = sub_1B1BE8(v156, v148);
        if ( !v156[0] )
        {
          if ( sub_1B7B9C(v133) || sub_1B7B24() )
            sub_946E0("No symbol \"%s\" in current context.", v148);
          goto LABEL_213;
        }
        goto LABEL_193;
      case 65:
        v68 = v3[2];
        v152 = (int)v3[3];
        if ( v68 )
        {
          if ( sub_15B388(v68) )
          {
            v69 = &dword_487CE0;
            if ( !dword_487CE0 || (v148 = (char *)&dword_487CE0, v70 = sub_C2360(v152), v69 = (int *)v148, v70) )
              *v69 = v152;
          }
          sub_1C37BC(v1[9], 40);
          sub_1C3840(v1[9], v152);
          sub_1C37E8(v1[9], v68);
          sub_1C37BC(v1[9], 40);
          v1[1] = *((_DWORD *)v68 + 6);
        }
        else if ( v3[4] )
        {
          v124 = &dword_487CE0;
          if ( !dword_487CE0 || (v148 = (char *)&dword_487CE0, v125 = sub_C2360(v152), v124 = (int *)v148, v125) )
            *v124 = v152;
          sub_1C37BC(v1[9], 84);
          sub_1C37BC(v1[9], 84);
          sub_1C37BC(v1[9], 82);
          sub_1C4F0C(v1[9], *v3, v3[1]);
          sub_1C37BC(v1[9], 82);
          v126 = sub_263ACC(**(_DWORD **)(v1[9] + 4));
          if ( v126 && (v127 = sub_26BC70(v126)) != 0 )
          {
            v128 = sub_1C3E58(*v3, v3[1]);
            v1[1] = sub_172888(v127, v128, 0);
          }
          else
          {
            v1[1] = 0;
          }
        }
        else
        {
          v129 = (const void **)&v163;
          v130 = sub_1C3E58(*v3, v3[1]);
          v131 = sub_1B1BE8(&v163, v130);
          if ( !(_DWORD)v163 )
          {
            if ( sub_1B7B9C(v131) || sub_1B7B24() )
            {
              v142 = (const char *)sub_1C3E58(*v3, v3[1]);
              sub_946E0("No symbol \"%s\" in current context.", v142);
            }
LABEL_213:
            sub_946E0("No symbol table is loaded.  Use the \"file\" command.");
          }
LABEL_193:
          sub_1C3B74(v1[9], *v129, v129[1]);
        }
LABEL_27:
        v26 = v5 + v14;
        v27 = &v6[-2 * v17];
        v28 = *(unsigned __int8 *)(v26 + 2284);
        v29 = &v3[-6 * v17];
        if ( v1[13] )
        {
          v60 = v154;
          sub_1C4D40(*v154, "%s ", "-> $$ =");
          sub_8AA24(*v60, v28);
          sub_1C4D40(*v60, (const char *)&word_356638);
          if ( v1[13] )
            sub_89330(v155, (unsigned int)v27);
        }
        v3 = v29 + 6;
        v30 = v28 - 53;
        v157 = (unsigned __int8 *)v153;
        v31 = v158;
        v32 = v159;
        v33 = v160;
        v34 = *(char *)(v5 + v30 + 2364);
        *v3 = (unsigned __int8 *)v153;
        v3[1] = v31;
        v3[2] = v32;
        v3[3] = v33;
        v35 = v162;
        v3[4] = (unsigned __int8 *)v161;
        v3[5] = v35;
        v36 = *(__int16 *)v27;
        v0 = v34 + v36;
        if ( v0 <= 0x179 && (v0 += v5, v36 == *(char *)(v0 + 1032)) )
          v4 = *(char *)(v0 + 1412);
        else
          v4 = *(char *)(v5 + v30 + 2384);
        break;
      case 68:
        LODWORD(v153) = sub_1700C0(*v3);
        goto LABEL_27;
      case 69:
        LODWORD(v153) = v3[2];
        goto LABEL_27;
      case 70:
      case 71:
        v59 = sub_1C3E58(*v3, v3[1]);
        LODWORD(v153) = sub_170E7C(v59, dword_487CD0);
        goto LABEL_27;
      case 72:
      case 73:
      case 74:
        v25 = v3[1];
        v157 = *v3;
        v158 = v25;
        LODWORD(v153) = v157;
        goto LABEL_27;
      case 75:
        v108 = v3[1];
        LODWORD(v153) = *v3;
        v157 = (unsigned __int8 *)v153;
        v158 = v108;
        goto LABEL_27;
      default:
        goto LABEL_27;
    }
LABEL_31:
    v37 = v151;
    v7 = (int)v155;
    v6 = v27 + 2;
    *((_WORD *)v27 + 1) = v4;
    v38 = 2 * (v37 + 0x7FFFFFFF);
    if ( (unsigned int)(v27 + 2) >= v7 + v38 )
      break;
LABEL_40:
    if ( !v1[13] )
      goto LABEL_4;
LABEL_41:
    sub_1C4D40(*v154, v144, v4);
    if ( v4 == 3 )
      goto LABEL_42;
  }
  v39 = (__int16 *)v7;
  v40 = ((int)&v6[-v7] >> 1) + 1;
  if ( v37 > 0x270F )
    sub_8AAD0("memory exhausted");
  v41 = v38 + 2;
  v42 = 10000;
  if ( v41 < 0x2710 )
    v42 = v41;
  v43 = 2 * v40;
  v151 = v42;
  v44 = 2 * v42;
  v45 = 12 * v40;
  v46 = (void *)sub_93028(26 * v42 + 23);
  v155 = v39;
  v0 = (unsigned int)v46;
  memcpy(v46, v39, v43);
  v153 = (unsigned int)(v44 + 23) * (unsigned __int64)(unsigned int)v149;
  v47 = (__int16 *)memcpy((void *)(v0 + 24 * (HIDWORD(v153) >> 4)), v150, v45 * 2);
  v48 = v155;
  if ( v155 != v165 )
  {
    v155 = v47;
    free(v48);
    v47 = v155;
  }
  v6 = (const char *)(v0 + v43 - 2);
  v3 = (unsigned __int8 **)&v47[v45 - 12];
  if ( !v1[13] )
  {
    v5 = v0 + v44 - 2;
    if ( (unsigned int)v6 >= v5 )
      goto LABEL_74;
    goto LABEL_39;
  }
  v155 = v47;
  v5 = v0 + v44 - 2;
  sub_1C4D40(*v154, "Stack size increased to %lu\n", v151);
  v47 = v155;
  if ( (unsigned int)v6 < v5 )
  {
LABEL_39:
    v155 = (__int16 *)v0;
    v150 = v47;
    goto LABEL_40;
  }
LABEL_74:
  v51 = 1;
  v49 = v6;
  v155 = (__int16 *)v0;
  v50 = 1;
LABEL_43:
  v52 = v1[15];
  if ( v52 != -2 )
  {
    if ( v52 > 0x124 )
      v7 = 2;
    else
      LOWORD(v5) = -18624;
    if ( v52 <= 0x124 )
    {
      HIWORD(v5) = 54;
      v7 = *(unsigned __int8 *)(v5 + v52 + 736);
    }
    sub_8AA78("Cleanup: discarding lookahead", v7);
  }
  if ( v1[13] )
    sub_89330(v155, (unsigned int)v49);
  v53 = v155;
  while ( v49 != (const char *)v53 )
  {
    v54 = *(__int16 *)v49;
    v49 -= 2;
    sub_8AA78("Cleanup: popping", *((unsigned __int8 *)&off_36B740 + v54 + 2156));
  }
  if ( v51 )
    free(v155);
  return v50;
}
