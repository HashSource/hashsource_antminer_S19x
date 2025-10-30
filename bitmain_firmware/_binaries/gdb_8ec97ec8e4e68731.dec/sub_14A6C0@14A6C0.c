void __fastcall sub_14A6C0(_DWORD *a1)
{
  _DWORD *v1; // r4
  __int64 v2; // r6
  double v3; // r0
  double v4; // r0
  double v5; // r2
  __int64 v6; // r2
  unsigned int v7; // r1
  int v8; // r1
  int v9; // r2
  unsigned int v10; // r1
  _DWORD *v11; // r8
  _DWORD *v12; // r5
  unsigned __int8 *v13; // r9
  int v14; // r3
  unsigned __int8 *v15; // r9
  int v16; // r0
  int v17; // t1
  _DWORD *v18; // r0
  int v19; // r1
  bool v20; // zf
  _DWORD *v21; // r5
  int v22; // r3
  char *v23; // r1
  char *v24; // r2
  char *v25; // r0
  int v26; // r11
  const char *v27; // r5
  void (__fastcall *v28)(int, const char *); // r3
  int v29; // r2
  int v30; // r8
  unsigned __int8 *v31; // r9
  unsigned __int8 v32; // r0
  int v33; // t1
  __int64 v34; // r0
  int *v35; // r0
  const char *v36; // r9
  int v37; // r9
  int v38; // r8
  int v39; // r6
  int v40; // r7
  int **v41; // r5
  int *v42; // r11
  int v43; // r10
  int *v44; // r5
  _DWORD *v45; // r5
  __int64 v46; // r6
  int v47; // r3
  __int64 v48; // r6
  unsigned int v49; // r3
  char v50; // r10
  __int64 v51; // r2
  __int64 v52; // r6
  unsigned int v53; // r3
  char v54; // r10
  __int64 v55; // r2
  int v56; // r3
  char v57; // r6
  __int64 v58; // r2
  __int64 v59; // r6
  char v60; // r10
  unsigned int v61; // r3
  __int64 v62; // r2
  __int64 v63; // r2
  __int64 v64; // r2
  __int64 v65; // r2
  unsigned int v66; // r3
  char v67; // r8
  int v68; // r2
  unsigned int v69; // r3
  char v70; // r8
  int v71; // r2
  int v72; // r2
  _DWORD *v73; // r0
  int v74; // r3
  int v75; // r2
  _DWORD *v76; // r5
  double v77; // r0
  int v78; // r1
  unsigned int v79; // r8
  _DWORD *v80; // r7
  _DWORD *v81; // r11
  int v82; // r10
  __int64 v83; // r0
  _DWORD *v84; // r3
  _DWORD *v85; // r2
  int v86; // r3
  _DWORD *v87; // r0
  _DWORD *v88; // r3
  int v89; // r3
  int v90; // r10
  int v91; // r8
  int v92; // r9
  const char **v93; // r0
  int v94; // r10
  int v95; // r8
  const char **v96; // r10
  int v97; // r2
  unsigned __int8 v98; // r0
  int v99; // t1
  int v100; // r7
  int *v101; // r0
  size_t v102; // r0
  int v103; // r3
  size_t v104; // r8
  int v105; // r0
  unsigned int v106; // r1
  _BOOL4 v107; // r12
  const char *v108; // r5
  _BYTE *v109; // r3
  char v110; // t1
  int v111; // r3
  _DWORD *v112; // r5
  _DWORD *v113; // r6
  _DWORD *v114; // r0
  _DWORD *v115; // t1
  _DWORD *v116; // r4
  int v117; // r0
  int v118; // r0
  _DWORD *v119; // r4
  _DWORD *v120; // r5
  _DWORD *i; // r0
  _DWORD *v122; // t1
  _DWORD *v123; // r6
  int v124; // r3
  int v125; // r1
  void *v126; // r0
  int *v127; // [sp+8h] [bp-44h]
  int v128; // [sp+8h] [bp-44h]
  _DWORD *v129; // [sp+Ch] [bp-40h]
  void (__fastcall *v130)(int, const char *); // [sp+10h] [bp-3Ch]
  int v131; // [sp+10h] [bp-3Ch]
  void *ptr; // [sp+14h] [bp-38h]
  const char **ptra; // [sp+14h] [bp-38h]
  int v134; // [sp+18h] [bp-34h]
  int v135; // [sp+1Ch] [bp-30h]
  _DWORD *v136; // [sp+20h] [bp-2Ch]
  int v137; // [sp+24h] [bp-28h]
  unsigned int v138; // [sp+2Ch] [bp-20h]
  const char *v139; // [sp+34h] [bp-18h] BYREF
  unsigned int v140; // [sp+38h] [bp-14h]
  void *v141; // [sp+3Ch] [bp-10h] BYREF
  void *v142; // [sp+40h] [bp-Ch]
  int v143; // [sp+44h] [bp-8h]

  if ( a1[60] != a1[61] )
  {
    sub_94700(
      (int)"dwarf2read.c",
      26088,
      "%s: Assertion `%s' failed.",
      "void debug_names::build()",
      "m_abbrev_table.empty ()");
    goto LABEL_160;
  }
  v1 = a1;
  v138 = a1[3];
  v3 = log2();
  v4 = ceil(v3);
  pow(v4, v5);
  v6 = *(_QWORD *)(v1 + 7);
  HIDWORD(v6) = (HIDWORD(v6) - (int)v6) >> 2;
  v7 = (unsigned int)2.0;
  if ( (unsigned int)2.0 > HIDWORD(v6) )
  {
    sub_149440((int)(v1 + 7), v7 - HIDWORD(v6));
  }
  else if ( (unsigned int)2.0 < HIDWORD(v6) )
  {
    v1[8] = v6 + 4 * v7;
  }
  sub_1485BC((int)(v1 + 10), v138);
  (**(void (__fastcall ***)(_DWORD, unsigned int))v1[39])(v1[39], v138);
  (**(void (__fastcall ***)(_DWORD, unsigned int))v1[40])(v1[40], v138);
  v8 = v1[8];
  v9 = v1[7];
  v141 = 0;
  v142 = 0;
  v143 = 0;
  v10 = (v8 - v9) >> 2;
  if ( v10 )
  {
    sub_149564((int)&v141, v10);
    v11 = (_DWORD *)v1[2];
    HIDWORD(v2) = v142;
    v12 = v141;
    if ( !v11 )
      goto LABEL_12;
  }
  else
  {
    v11 = (_DWORD *)v1[2];
    if ( !v11 )
    {
      v124 = v1[10];
      v125 = v1[11];
      goto LABEL_166;
    }
    HIDWORD(v2) = 0;
    v12 = 0;
  }
  do
  {
    v13 = (unsigned __int8 *)v11[1];
    LODWORD(v2) = 5381;
    v14 = *v13;
    v15 = v13 + 1;
    if ( v14 )
    {
      do
      {
        v16 = tolower(v14);
        v17 = *v15++;
        v14 = v17;
        LODWORD(v2) = v16 + 33 * v2;
      }
      while ( v17 );
    }
    HIDWORD(v2) = (unsigned __int64)sub_347674(v2, (HIDWORD(v2) - (int)v12) >> 2) >> 32;
    v18 = sub_9836C(0xCu);
    *v18 = v12[HIDWORD(v2)];
    v18[1] = v2;
    v18[2] = v11;
    v12[HIDWORD(v2)] = v18;
    v11 = (_DWORD *)*v11;
    v12 = v141;
    HIDWORD(v2) = v142;
  }
  while ( v11 );
LABEL_12:
  v124 = v1[10];
  v125 = v1[11];
  if ( (_DWORD *)HIDWORD(v2) != v12 )
  {
    v19 = v125 - v124;
    v137 = 0;
    v136 = v1 + 54;
    while ( 1 )
    {
      v20 = v12[v137] == 0;
      v21 = &v12[v137];
      v22 = v19 >> 2;
      if ( !v20 )
        break;
LABEL_139:
      v12 = v141;
      if ( ++v137 >= (unsigned int)(((_BYTE *)v142 - (_BYTE *)v141) >> 2) )
        goto LABEL_140;
    }
    sub_15C34C(v1[7] + 4 * v137, 4, v1[13], v1[7], (v19 >> 2) + 1, 0);
    v23 = (char *)v1[11];
    v129 = (_DWORD *)*v21;
    if ( !*v21 )
    {
      v19 = (int)&v23[-v1[10]];
      v22 = v19 >> 2;
      goto LABEL_139;
    }
LABEL_16:
    v24 = (char *)v1[12];
    v139 = 0;
    if ( v24 == v23 )
    {
      sub_E4118((char **)v1 + 10, v23, &v139);
      v25 = (char *)v1[11];
    }
    else
    {
      v25 = v23 + 4;
      if ( v23 )
        *(_DWORD *)v23 = 0;
      v1[11] = v25;
    }
    sub_15C34C(v25 - 4, 4, v1[13], v129[1], v129[1], 0);
    LODWORD(v2) = v129[2];
    v26 = v1[39];
    v127 = v1 + 41;
    v27 = *(const char **)(v2 + 4);
    HIDWORD(v2) = v27 + 1;
    v28 = *(void (__fastcall **)(int, const char *))(*(_DWORD *)v26 + 4);
    v139 = v27;
    v29 = *(unsigned __int8 *)v27;
    v130 = v28;
    if ( *v27 )
    {
      v31 = (unsigned __int8 *)(v27 + 1);
      v30 = 0;
      do
      {
        v32 = tolower(v29);
        v33 = *v31++;
        v29 = v33;
        v30 = v32 + 67 * v30 - 113;
      }
      while ( v33 );
    }
    else
    {
      v30 = 0;
    }
    v34 = sub_347674(v30, v1[42]);
    v35 = sub_149BCC(v127, SHIDWORD(v34), &v139, v30);
    if ( v35 && *v35 )
    {
      v36 = *(const char **)(*v35 + 8);
    }
    else
    {
      v90 = v1[49];
      v91 = v1[50];
      v92 = *(_DWORD *)(dword_4872D8 + 148);
      v93 = (const char **)sub_9836C(0x10u);
      v94 = v91 - v90;
      v95 = 0;
      v36 = (const char *)(v94 + v92);
      *v93 = 0;
      v93[1] = v27;
      v93[2] = v36;
      v96 = v93 + 1;
      v97 = *(unsigned __int8 *)v27;
      ptra = v93;
      if ( *v27 )
      {
        do
        {
          v98 = tolower(v97);
          v99 = (unsigned __int8)*(_BYTE *)HIDWORD(v2);
          ++HIDWORD(v2);
          v97 = v99;
          v95 = v98 + 67 * v95 - 113;
        }
        while ( v99 );
      }
      else
      {
        v95 = 0;
      }
      v100 = (unsigned __int64)sub_347674(v95, v1[42]) >> 32;
      v101 = sub_149BCC(v127, v100, v96, v95);
      if ( v101 && *v101 )
        sub_339E64(ptra);
      else
        sub_14A5C8(v127, v100, v95, ptra);
      v102 = strlen(v27);
      v103 = v1[50];
      v104 = v102;
      v105 = v1[49];
      v106 = v104 + 1 + v103 - v105;
      v107 = __CFADD__(v104 + 1, v103 - v105);
      if ( v103 - v105 < v106 )
      {
        sub_AF660((char **)v1 + 49, v104 + 1);
        v103 = v1[50];
      }
      else if ( v107 )
      {
        v103 += v104 + 1;
        v1[50] = v105 + v106;
      }
      v108 = v27 - 1;
      v109 = (_BYTE *)(v103 + ~v104);
      HIDWORD(v2) = &v109[v104 + 1];
      do
      {
        v110 = *++v108;
        *v109++ = v110;
      }
      while ( v109 != (_BYTE *)HIDWORD(v2) );
    }
    v130(v26, v36);
    (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)v1[40] + 4))(v1[40], v1[64] - v1[63]);
    if ( !*(_DWORD *)(v2 + 28) )
    {
      sub_94700(
        (int)"dwarf2read.c",
        26140,
        "%s: Assertion `%s' failed.",
        "void debug_names::build()",
        "!value_set.empty ()");
      v119 = v141;
      v120 = v142;
      while ( v120 != v119 )
      {
        v122 = (_DWORD *)*v119++;
        for ( i = v122; i; i = v123 )
        {
          v123 = (_DWORD *)*i;
          sub_339E64(i);
        }
      }
      v126 = v141;
      if ( v141 )
        sub_339E64(v141);
      sub_338FFC(v126);
    }
    v37 = *(_DWORD *)(v2 + 20);
    v135 = v2 + 12;
    if ( (_DWORD)v2 + 12 == v37 )
      goto LABEL_95;
    while ( 1 )
    {
      v38 = v1[53];
      v128 = *(_DWORD *)(v37 + 16);
      v39 = *(unsigned __int8 *)(v37 + 24) | (2 * v128);
      ptr = *(void **)(v37 + 28);
      v131 = *(unsigned __int8 *)(v37 + 24);
      v40 = (unsigned __int64)sub_347674(v39, v38) >> 32;
      v134 = v40;
      v41 = *(int ***)(v1[52] + 4 * v40);
      if ( v41 )
      {
        v42 = *v41;
        v43 = (*v41)[5];
        while ( v39 != v43 || v128 != v42[1] || *((unsigned __int8 *)v42 + 8) != v131 || ptr != (void *)v42[3] )
        {
          if ( *v42 )
          {
            v43 = *(_DWORD *)(*v42 + 20);
            v41 = (int **)v42;
            v42 = (int *)*v42;
            if ( v40 == (unsigned __int64)sub_347674(v43, v38) >> 32 )
              continue;
          }
          goto LABEL_100;
        }
        v44 = *v41;
        if ( v44 )
        {
          v45 = v44 + 4;
          goto LABEL_40;
        }
      }
LABEL_100:
      v73 = sub_9836C(0x18u);
      v74 = v1[55];
      v75 = v1[53];
      v76 = v73;
      LODWORD(v77) = &v139;
      *v76 = 0;
      v76[1] = v128;
      v76[3] = ptr;
      v76[4] = 0;
      *((_BYTE *)v76 + 8) = v131;
      HIDWORD(v77) = v1 + 56;
      sub_33D44C(v77, v75, v74, 1);
      if ( (_BYTE)v139 )
        break;
      v80 = (_DWORD *)v1[52];
LABEL_116:
      v88 = (_DWORD *)v80[v134];
      v76[5] = v39;
      if ( v88 )
      {
        *v76 = *v88;
        *v88 = v76;
      }
      else
      {
        v89 = v1[54];
        v1[54] = v76;
        *v76 = v89;
        if ( v89 )
          v80[(unsigned __int64)sub_347674(*(_DWORD *)(v89 + 20), v1[53]) >> 32] = v76;
        v80[v134] = v136;
      }
      v45 = v76 + 4;
      ++v1[55];
LABEL_40:
      LODWORD(v46) = *v45;
      if ( !*v45 )
      {
        v47 = v1[59];
        v1[59] = v47 + 1;
        v48 = v47;
        *v45 = v47;
        do
        {
          while ( 1 )
          {
            v49 = v48 >> 7;
            v50 = v48 & 0x7F;
            HIDWORD(v48) >>= 7;
            LODWORD(v48) = v49;
            v20 = __PAIR64__(HIDWORD(v48), v49) == 0;
            v51 = *((_QWORD *)v1 + 30);
            if ( !v20 )
              v50 |= 0x80u;
            if ( HIDWORD(v51) - (_DWORD)v51 == -1 )
              break;
            sub_AF660((char **)v1 + 60, 1u);
            *(_BYTE *)(v1[61] - 1) = v50;
            if ( !v48 )
              goto LABEL_48;
          }
          v1[61] = v51;
          *(_BYTE *)(v51 - 1) = v50;
        }
        while ( v48 );
LABEL_48:
        v52 = *(int *)(v37 + 16);
        do
        {
          while ( 1 )
          {
            v53 = v52 >> 7;
            v54 = v52 & 0x7F;
            HIDWORD(v52) >>= 7;
            LODWORD(v52) = v53;
            v20 = __PAIR64__(HIDWORD(v52), v53) == 0;
            v55 = *((_QWORD *)v1 + 30);
            if ( !v20 )
              v54 |= 0x80u;
            if ( HIDWORD(v55) - (_DWORD)v55 == -1 )
              break;
            sub_AF660((char **)v1 + 60, 1u);
            *(_BYTE *)(v1[61] - 1) = v54;
            if ( !v52 )
              goto LABEL_54;
          }
          v1[61] = v55;
          *(_BYTE *)(v55 - 1) = v54;
        }
        while ( v52 );
LABEL_54:
        v56 = v1[60];
        if ( *(_DWORD *)(v37 + 28) )
          v57 = 2;
        else
          v57 = 1;
        if ( v1[61] - v56 == -1 )
        {
          v1[61] = v56;
        }
        else
        {
          sub_AF660((char **)v1 + 60, 1u);
          v56 = v1[61];
        }
        *(_BYTE *)(v56 - 1) = v57;
        v58 = *((_QWORD *)v1 + 30);
        if ( HIDWORD(v58) - (_DWORD)v58 == -1 )
        {
          v1[61] = v58;
        }
        else
        {
          sub_AF660((char **)v1 + 60, 1u);
          LODWORD(v58) = v1[61];
        }
        HIDWORD(v59) = 0;
        *(_BYTE *)(v58 - 1) = 15;
        if ( *(_BYTE *)(v37 + 24) )
          LODWORD(v59) = 0x2000;
        else
          LODWORD(v59) = 8193;
        do
        {
          while ( 1 )
          {
            v60 = v59;
            v61 = v59 >> 7;
            HIDWORD(v59) >>= 7;
            LODWORD(v59) = v61;
            v20 = __PAIR64__(HIDWORD(v59), v61) == 0;
            v62 = *((_QWORD *)v1 + 30);
            if ( !v20 )
              v60 |= 0x80u;
            if ( HIDWORD(v62) - (_DWORD)v62 == -1 )
              break;
            sub_AF660((char **)v1 + 60, 1u);
            *(_BYTE *)(v1[61] - 1) = v60;
            if ( !v59 )
              goto LABEL_71;
          }
          v1[61] = v62;
          *(_BYTE *)(v62 - 1) = v60;
        }
        while ( v59 );
LABEL_71:
        v63 = *((_QWORD *)v1 + 30);
        if ( HIDWORD(v63) - (_DWORD)v63 == -1 )
        {
          v1[61] = v63;
        }
        else
        {
          sub_AF660((char **)v1 + 60, 1u);
          LODWORD(v63) = v1[61];
        }
        *(_BYTE *)(v63 - 1) = 25;
        v64 = *((_QWORD *)v1 + 30);
        if ( HIDWORD(v64) - (_DWORD)v64 == -1 )
        {
          v1[61] = v64;
        }
        else
        {
          sub_AF660((char **)v1 + 60, 1u);
          LODWORD(v64) = v1[61];
        }
        *(_BYTE *)(v64 - 1) = 0;
        v65 = *((_QWORD *)v1 + 30);
        if ( HIDWORD(v65) - (_DWORD)v65 == -1 )
        {
          v1[61] = v65;
        }
        else
        {
          sub_AF660((char **)v1 + 60, 1u);
          LODWORD(v65) = v1[61];
        }
        *(_BYTE *)(v65 - 1) = 0;
        LODWORD(v46) = *v45;
      }
      v46 = (int)v46;
      do
      {
        while ( 1 )
        {
          v66 = v46 >> 7;
          v67 = v46 & 0x7F;
          HIDWORD(v46) >>= 7;
          v68 = v1[63];
          LODWORD(v46) = v66;
          if ( __PAIR64__(HIDWORD(v46), v66) )
            v67 |= 0x80u;
          if ( v1[64] - v68 == -1 )
            break;
          sub_AF660((char **)v1 + 63, 1u);
          *(_BYTE *)(v1[64] - 1) = v67;
          if ( !v46 )
            goto LABEL_88;
        }
        v1[64] = v68;
        *(_BYTE *)(v68 - 1) = v67;
      }
      while ( v46 );
LABEL_88:
      v2 = *(int *)(v37 + 20);
      do
      {
        while ( 1 )
        {
          v69 = v2 >> 7;
          v70 = v2 & 0x7F;
          HIDWORD(v2) >>= 7;
          v71 = v1[63];
          LODWORD(v2) = v69;
          if ( __PAIR64__(HIDWORD(v2), v69) )
            v70 |= 0x80u;
          if ( v1[64] - v71 == -1 )
            break;
          sub_AF660((char **)v1 + 63, 1u);
          *(_BYTE *)(v1[64] - 1) = v70;
          if ( !v2 )
            goto LABEL_94;
        }
        v1[64] = v71;
        *(_BYTE *)(v71 - 1) = v70;
      }
      while ( v2 );
LABEL_94:
      v37 = sub_33AD50(v37);
      if ( v135 == v37 )
      {
LABEL_95:
        v72 = v1[63];
        if ( v1[64] - v72 == -1 )
        {
          v1[64] = v72;
        }
        else
        {
          sub_AF660((char **)v1 + 63, 1u);
          v72 = v1[64];
        }
        *(_BYTE *)(v72 - 1) = 0;
        v129 = (_DWORD *)*v129;
        if ( !v129 )
        {
          v19 = v1[11] - v1[10];
          v22 = v19 >> 2;
          goto LABEL_139;
        }
        v23 = (char *)v1[11];
        goto LABEL_16;
      }
    }
    v79 = v140;
    if ( v140 == 1 )
    {
      v1[58] = 0;
      v80 = v1 + 58;
    }
    else
    {
      v80 = sub_1243D8(v140, v78);
    }
    v81 = (_DWORD *)v1[54];
    v82 = 0;
    v1[54] = 0;
    if ( !v81 )
    {
LABEL_113:
      v87 = (_DWORD *)v1[52];
      if ( v87 != v1 + 58 )
        sub_339E64(v87);
      v1[53] = v79;
      v1[52] = v80;
      v134 = (unsigned __int64)sub_347674(v39, v79) >> 32;
      goto LABEL_116;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        v83 = sub_347674(v81[5], v79);
        v84 = (_DWORD *)v80[HIDWORD(v83)];
        v85 = (_DWORD *)*v81;
        if ( !v84 )
          break;
        *v81 = *v84;
        *v84 = v81;
LABEL_107:
        v81 = v85;
        if ( !v85 )
          goto LABEL_113;
      }
      v86 = v1[54];
      *v81 = v86;
      if ( !v86 )
        v82 = HIDWORD(v83);
      v1[54] = v81;
      v80[HIDWORD(v83)] = v136;
      if ( !v86 )
        goto LABEL_107;
      v80[v82] = v81;
      v81 = v85;
      v82 = HIDWORD(v83);
      if ( !v85 )
        goto LABEL_113;
    }
  }
LABEL_166:
  v22 = (v125 - v124) >> 2;
LABEL_140:
  if ( v138 != v22 )
  {
LABEL_160:
    v117 = sub_94700(
             (int)"dwarf2read.c",
             26173,
             "%s: Assertion `%s' failed.",
             "void debug_names::build()",
             "m_hash_table.size () == name_count");
    v118 = sub_339E78(v117);
    v1[57] = HIDWORD(v2);
    sub_33A7B8(v118);
  }
  v111 = v1[60];
  if ( v1[61] - v111 == -1 )
  {
    v1[61] = v111;
  }
  else
  {
    sub_AF660((char **)v1 + 60, 1u);
    v111 = v1[61];
  }
  *(_BYTE *)(v111 - 1) = 0;
  v112 = v141;
  v113 = v142;
  if ( v141 != v142 )
  {
    do
    {
      v115 = (_DWORD *)*v112++;
      v114 = v115;
      if ( v115 )
      {
        do
        {
          v116 = (_DWORD *)*v114;
          sub_339E64(v114);
          v114 = v116;
        }
        while ( v116 );
      }
    }
    while ( v113 != v112 );
    v113 = v141;
  }
  if ( v113 )
    sub_339E64(v113);
}
