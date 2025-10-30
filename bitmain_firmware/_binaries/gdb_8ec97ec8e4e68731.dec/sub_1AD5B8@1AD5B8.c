void __fastcall sub_1AD5B8(int a1, int a2)
{
  int v2; // r4
  int v3; // r3
  int v4; // r6
  int v5; // r1
  int *v6; // r2
  int v7; // r1
  int v8; // r0
  _DWORD *v9; // r3
  int v10; // r5
  int v11; // r1
  int v12; // r10
  void (*v13)(void); // r1
  __int64 v14; // r2
  int v15; // r5
  int v16; // r3
  int v17; // r0
  bool v18; // zf
  int v19; // r2
  int v20; // r2
  int v21; // r7
  int v22; // r2
  unsigned int v23; // r11
  int v24; // r8
  char *v25; // r3
  int v26; // r7
  int v27; // r1
  int v28; // r8
  int v29; // r1
  int v30; // r3
  char v31; // r2
  _WORD *v32; // r7
  _WORD *v33; // r3
  int v34; // r0
  bool v35; // zf
  int v36; // r3
  int v37; // r8
  int v38; // r2
  const char *v39; // r1
  int v40; // r0
  const char *v41; // r3
  int v42; // r0
  int v43; // r8
  int v44; // r7
  const char *v45; // r0
  int *v46; // r5
  int v47; // r1
  _DWORD *v48; // r3
  _DWORD *v49; // r3
  int v50; // r0
  int v51; // r3
  int v52; // r2
  int *v53; // r11
  int v54; // r12
  _DWORD *v55; // r2
  int v56; // r3
  int v57; // r7
  _DWORD *v58; // r3
  unsigned int v59; // r7
  unsigned int i; // r8
  int v61; // r0
  int v62; // r9
  int v63; // r8
  void *v64; // r0
  unsigned int v65; // r9
  __int64 v66; // r2
  int v67; // r0
  int v68; // r1
  unsigned int v69; // r9
  bool v70; // zf
  int v71; // r9
  _DWORD *v72; // r9
  int v73; // r2
  int v74; // r3
  int v75; // r12
  int v76; // r2
  int v77; // r2
  unsigned int v78; // r3
  int v79; // r12
  bool v80; // zf
  int v81; // r1
  int v82; // r3
  int v83; // r0
  int v84; // r2
  bool v85; // zf
  int v86; // r12
  int v87; // r0
  _DWORD *v88; // r12
  unsigned int v89; // r3
  int v90; // r2
  int v91; // t1
  unsigned int v92; // r0
  _DWORD *v93; // r0
  _DWORD *v94; // r2
  int v95; // r1
  unsigned int *v96; // r7
  unsigned int v97; // r8
  int v98; // r3
  unsigned int v99; // r9
  unsigned int *v100; // r10
  unsigned int v101; // r6
  int v102; // r0
  int v103; // r9
  _DWORD *v104; // r10
  int v105; // r4
  int v106; // r2
  int v107; // r3
  unsigned __int8 *v108; // r3
  unsigned int v109; // r12
  int v110; // r1
  unsigned int v111; // r1
  int v112; // r1
  int *v113; // r6
  int v114; // r1
  int v115; // lr
  int v116; // r3
  const char *v117; // r2
  unsigned int *v118; // r8
  int *v119; // r0
  int v120; // r3
  int *v121; // r8
  int v122; // r0
  int v123; // r0
  int v124; // r1
  int v125; // r0
  _DWORD *v126; // r0
  int v127; // r0
  _DWORD *v128; // r0
  int v129; // r0
  _DWORD *v130; // r0
  int v131; // r0
  int *v132; // r8
  void *v133; // r10
  int v134; // r3
  unsigned int v135; // r7
  unsigned int v136; // r11
  int *v137; // r6
  unsigned int v138; // r1
  char *v139; // r5
  int *v140; // r0
  int v141; // r1
  __int64 v142; // r0
  int v143; // lr
  __int64 v144; // kr00_8
  int v145; // r0
  _DWORD *v146; // r0
  int v147; // [sp-4h] [bp-60h]
  _DWORD *v148; // [sp+14h] [bp-48h]
  void (*v149)(void); // [sp+18h] [bp-44h]
  int v150; // [sp+18h] [bp-44h]
  int v151; // [sp+18h] [bp-44h]
  int v152; // [sp+1Ch] [bp-40h]
  int v153; // [sp+20h] [bp-3Ch]
  int v154; // [sp+28h] [bp-34h]
  int v155; // [sp+2Ch] [bp-30h]
  unsigned int v156; // [sp+2Ch] [bp-30h]
  int v157; // [sp+30h] [bp-2Ch]
  int v158; // [sp+30h] [bp-2Ch]
  int v159; // [sp+30h] [bp-2Ch]
  char *v160; // [sp+30h] [bp-2Ch]
  void (__fastcall *v161)(int, unsigned int, unsigned int *, int); // [sp+34h] [bp-28h]
  int v162; // [sp+34h] [bp-28h]
  void *v163; // [sp+38h] [bp-24h]
  int v164; // [sp+3Ch] [bp-20h]
  int v165; // [sp+40h] [bp-1Ch]
  int v166; // [sp+44h] [bp-18h]
  int v167; // [sp+4Ch] [bp-10h] BYREF
  unsigned int v168; // [sp+50h] [bp-Ch]
  unsigned int v169; // [sp+54h] [bp-8h]

  v2 = *(unsigned __int8 *)(a2 + 52);
  if ( *(_BYTE *)(a2 + 52) )
    return;
  v3 = *(_DWORD *)(a2 + 32);
  v4 = a2;
  v5 = *(_DWORD *)(a1 + 144);
  v148 = (_DWORD *)a1;
  *(_BYTE *)(v4 + 52) = 1;
  v154 = v5;
  if ( v3 > 0 )
  {
    do
    {
      if ( !*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(v4 + 28) + 4 * v2) + 52) )
      {
        if ( dword_48A514 )
        {
          v126 = (_DWORD *)sub_242F8C(a1);
          sub_25A6BC(&word_3E1F84, *v126);
          v127 = sub_259B58("");
          v128 = (_DWORD *)sub_242F8C(v127);
          sub_25A6BC("and ", *v128);
          sub_259B58("");
          sub_259F10("%s...", *(const char **)(*(_DWORD *)(*(_DWORD *)(v4 + 28) + 4 * v2) + 4));
          v129 = sub_259B58("");
          v130 = (_DWORD *)sub_242F8C(v129);
          sub_25680C(*v130);
        }
        a1 = sub_1AD5B8(v148);
        v3 = *(_DWORD *)(v4 + 32);
      }
      ++v2;
    }
    while ( v3 > v2 );
  }
  if ( !*(_DWORD *)(v4 + 40) && !*(_DWORD *)(v4 + 48) && !*(_DWORD *)(v4 + 16) && !*(_DWORD *)(v4 + 20) )
    return;
  v6 = *(int **)(v4 + 64);
  v7 = v6[4];
  dword_487ABC = (int)v148;
  v8 = v6[1];
  v9 = (_DWORD *)v6[2];
  v10 = *v6;
  dword_487AB8 = v7;
  LODWORD(v14) = v6[3];
  v11 = v9[4];
  v12 = v9[5];
  *(_QWORD *)&dword_487AA4 = v14;
  v155 = v11;
  v13 = (void (*)(void))v9[13];
  HIDWORD(v14) = v9[12];
  dword_487AD4 = v10;
  dword_487AAC = v8;
  v149 = v13;
  v161 = (void (__fastcall *)(int, unsigned int, unsigned int *, int))HIDWORD(v14);
  if ( v10 == -1 )
  {
    dword_487AB4 = 0;
    byte_47898D = 0;
    goto LABEL_111;
  }
  v15 = *(_DWORD *)(v14 + 152) + 72 * v10;
  byte_47898D = 0;
  dword_487AB4 = v15;
  if ( !v15 )
  {
LABEL_111:
    v87 = sub_1A7E4C((int)"unknown", 0, (int)v148);
    v51 = *(_DWORD *)(v87 + 12);
    v15 = 0;
    v152 = v87;
    v153 = 0;
    v52 = *(_DWORD *)(v51 + 24);
    goto LABEL_68;
  }
  if ( *(int *)(v15 + 20) <= 1 )
  {
LABEL_67:
    v153 = 2 * *(_DWORD *)(v15 + 28);
    v50 = sub_1A7E4C(*(_DWORD *)(v4 + 4), v153, (int)v148);
    v51 = *(_DWORD *)(v50 + 12);
    v152 = v50;
    v52 = *(_DWORD *)(*(_DWORD *)(v4 + 64) + 28);
    *(_DWORD *)(v51 + 24) = v52;
LABEL_68:
    dword_487AC0 = v52;
    v53 = *(int **)(v51 + 8);
    sub_1A7554();
    v54 = *(_DWORD *)(v4 + 16);
    v55 = (_DWORD *)dword_487AC4;
    v56 = *(_DWORD *)(v152 + 32);
    v57 = *(_DWORD *)(v152 + 12);
    dword_487ACC = 0;
    v58 = *(_DWORD **)(v56 + 12);
    *(_DWORD *)(dword_487AC4 + 8) = v57;
    v55[3] = v58;
    *v58 = v54;
    v58[1] = 0;
    v55[5] = 0;
    v55[7] = 0;
    v55[8] = 0;
    v55[4] = 11;
    if ( !v15 )
      goto LABEL_73;
    v59 = *(_DWORD *)(dword_487AA4 + 108) + *(_DWORD *)(v15 + 16) * v12;
    for ( i = v59 + *(_DWORD *)(v15 + 20) * v12;
          i > v59;
          v59 += v12
               * sub_1AC028(
                   (int)&v167,
                   *(_DWORD *)(dword_487AA4 + 116) + 4 * *(_DWORD *)(v15 + 44),
                   v59,
                   *(unsigned __int8 *)(v15 + 60) >> 7,
                   v154,
                   v148) )
    {
      ((void (__fastcall *)(int, unsigned int, int *))v149)(dword_487AAC, v59, &v167);
    }
    v61 = *(__int16 *)(v15 + 42);
    if ( v61 <= 0 )
    {
LABEL_72:
      v57 = *(_DWORD *)(v152 + 12);
LABEL_73:
      v62 = *v53;
      v63 = dword_487ABC;
      if ( *v53 > 1 )
        --v62;
      v64 = *(void **)(dword_487ABC + 60);
      v65 = 8 * v62 + 12;
      if ( v65 > *(_DWORD *)(dword_487ABC + 64) - (int)v64 )
      {
        obstack_newchunk((struct obstack *)(dword_487ABC + 48), v65);
        v64 = *(void **)(v63 + 60);
      }
      memcpy(v64, v53, v65);
      v66 = *(_QWORD *)(v63 + 56);
      v67 = *(_DWORD *)(v63 + 72);
      v68 = *(_DWORD *)(v63 + 64);
      v69 = HIDWORD(v66) + v65;
      v70 = v69 == (_DWORD)v66;
      *(_DWORD *)(v63 + 60) = v69;
      if ( v69 == (_DWORD)v66 )
        BYTE4(v66) = *(_BYTE *)(v63 + 88);
      v71 = (v69 + v67) & ~v67;
      *(_DWORD *)(v63 + 60) = v71;
      if ( v70 )
        *(_BYTE *)(v63 + 88) = BYTE4(v66) | 2;
      if ( v71 - *(_DWORD *)(v63 + 52) > (unsigned int)(v68 - *(_DWORD *)(v63 + 52)) )
      {
        v71 = v68;
        *(_DWORD *)(v63 + 60) = v68;
      }
      *(_DWORD *)(v63 + 56) = v71;
      v72 = (_DWORD *)(unsigned __int16)&dword_48A514;
      *(_DWORD *)(v57 + 8) = v66;
      free(v53);
      v73 = *(_DWORD *)(v4 + 64);
      v42 = *(_DWORD *)(v152 + 12);
      v74 = dword_487AC4;
      v75 = *(_DWORD *)(v42 + 4);
      v44 = *(_DWORD *)(v73 + 20);
      v43 = *(_DWORD *)(v73 + 24) - 1;
      *(_DWORD *)(dword_487AC4 + 8) = v42;
      if ( v43 < 0 )
        HIWORD(v72) = (unsigned int)&dword_48A514 >> 16;
      v76 = *(_DWORD *)(*(_DWORD *)(v75 + 32) + 8);
      *(_DWORD *)(v74 + 16) = 11;
      *(_DWORD *)(v74 + 12) = v76;
      if ( v43 >= 0 )
      {
        HIWORD(v72) = 72;
        do
        {
          v77 = *(_DWORD *)(v44 + 4);
          v78 = *(unsigned __int8 *)(v15 + 60);
          v79 = *(_DWORD *)(dword_487AA4 + 152);
          v80 = v77 == -1;
          if ( v77 == -1 )
          {
            v81 = 0;
          }
          else
          {
            v42 = 9 * v77;
            dword_487AD4 = *(_DWORD *)(v44 + 4);
            v81 = *(_DWORD *)(dword_487AA4 + 116);
          }
          if ( v77 == -1 )
            dword_487AB4 = v79;
          else
            v77 = v79 + 8 * v42;
          v82 = v78 >> 7;
          if ( !v80 )
          {
            v83 = *(_DWORD *)(v77 + 44);
            dword_487AB4 = v77;
            v81 += 4 * v83;
          }
          v84 = *(_WORD *)(v44 + 16) & 0x7C0;
          v85 = v84 == 1344;
          if ( v84 != 1344 )
            v85 = v84 == 384;
          v86 = v85;
          v42 = *(_BYTE *)(v44 + 16) & 0x3F;
          if ( (*(_WORD *)(v44 + 16) & 0x7C0) == 0 )
            v86 = 1;
          if ( v86 )
          {
            switch ( *(_BYTE *)(v44 + 16) & 0x3F )
            {
              case 0:
                break;
              case 1:
                v39 = "variable";
                ++dword_487AE4;
                goto LABEL_42;
              case 5:
                v39 = "label";
                ++dword_487AE8;
                goto LABEL_42;
              case 6:
              case 0xE:
                v39 = "procedure";
                ++dword_487AE0;
                goto LABEL_42;
              default:
                v39 = "symbol";
LABEL_42:
                v18 = *v72 == 0;
                ++dword_487AEC;
                if ( !v18 )
                {
                  v40 = *(_DWORD *)(dword_487AB4 + 4);
                  if ( v40 == -1 )
                  {
                    v41 = "<stripped file>";
                  }
                  else if ( v40 )
                  {
                    v41 = (const char *)(*(_DWORD *)(dword_487AA4 + 120) + v40 + *(_DWORD *)(dword_487AB4 + 8));
                  }
                  else
                  {
                    v41 = "<NFY>";
                  }
                  v42 = sub_259F10(
                          "Warning: %s `%s' is undefined (in %s)\n",
                          v39,
                          (const char *)(*(_DWORD *)(dword_487AA4 + 124) + *(_DWORD *)(v44 + 8)),
                          v41);
                }
                break;
            }
          }
          else if ( v42 == 1 || v42 == 5 )
          {
            v42 = (v84 - 1088) & 0xFF80;
            if ( v42 )
              v42 = sub_1AC028(v44 + 8, v81, 0, v82, v154, v148);
          }
          --v43;
          v44 += 20;
        }
        while ( v43 != -1 );
        v42 = *(_DWORD *)(v152 + 12);
      }
      if ( *v72 && dword_487AEC )
      {
        v45 = (const char *)((int (__fastcall *)(int))loc_2043D4)(v42);
        sub_259F10("File %s contains %d unresolved references:", v45, dword_487AEC);
        sub_259F10("\n\t%4d variables\n\t%4d procedures\n\t%4d labels\n", dword_487AE4, dword_487AE0, dword_487AE8);
        v42 = *(_DWORD *)(v152 + 12);
        dword_487AE0 = 0;
        dword_487AE4 = 0;
        dword_487AE8 = 0;
        dword_487AEC = 0;
      }
      if ( dword_487AC4 && *(_DWORD *)dword_487AC4 )
        dword_487AC4 = *(_DWORD *)dword_487AC4;
      v46 = *(int **)(*(_DWORD *)(v42 + 4) + 32);
      v47 = *v46;
      if ( *v46 > 2 )
      {
        if ( v47 == 3 || (qsort(v46 + 4, v47 - 2, 4u, (__compar_fn_t)sub_1A72F4), v47 = *v46, *v46 > 2) )
        {
          v88 = v46 + 3;
          v89 = 0;
          v90 = 2;
          do
          {
            v91 = v88[1];
            ++v88;
            ++v90;
            v92 = *(_DWORD *)(v91 + 4);
            if ( v89 < v92 )
              v89 = v92;
          }
          while ( v47 > v90 );
        }
        else
        {
          v89 = 0;
        }
        v93 = (_DWORD *)v46[2];
        v94 = (_DWORD *)v46[3];
        v95 = *(_DWORD *)v46[4];
        *v93 = v95;
        v93[1] = v89;
        *v94 = v95;
        v94[1] = v89;
      }
      else
      {
        v48 = (_DWORD *)v46[2];
        if ( !v48[1] )
          *v48 = 0;
        v49 = (_DWORD *)v46[3];
        if ( !v49[1] )
          *v49 = 0;
      }
LABEL_61:
      dword_487ABC = 0;
      *(_DWORD *)(v4 + 56) = v152;
      return;
    }
    v96 = (unsigned int *)sub_93028(56 * v61);
    v163 = sub_9253C(1735448, (int)v96);
    v97 = *(_DWORD *)(dword_487AA4 + 104) + v155 * *(unsigned __int16 *)(v15 + 40);
    v98 = v155;
    v99 = v97 + v155 * *(__int16 *)(v15 + 42);
    if ( v97 >= v99 )
    {
      v156 = 0;
    }
    else
    {
      v100 = v96;
      v158 = v4;
      v101 = 0;
      do
      {
        v161(dword_487AAC, v97, v100, v98);
        if ( v96 == v100 )
        {
          v101 = *v96;
        }
        else if ( v101 >= *v100 )
        {
          v101 = *v100;
        }
        v97 += v155;
        v100 += 14;
      }
      while ( v99 > v97 );
      v156 = v101;
      v4 = v158;
    }
    v102 = *v53;
    if ( !*(_DWORD *)(v15 + 68) || (v150 = *(__int16 *)(v15 + 42), v150 <= 0) )
    {
LABEL_165:
      if ( *(_DWORD *)(v15 + 28) > v102 )
        v53 = (int *)sub_93050(v53, 8 * v102 + 4);
      v118 = &v96[14 * *(__int16 *)(v15 + 42)];
      while ( v118 > v96 )
      {
        v119 = (int *)v96;
        v96 += 14;
        sub_1A7C58(v119, 0);
      }
      sub_92620(v163);
      goto LABEL_72;
    }
    v103 = 0;
    v104 = v96 + 14;
    v105 = 0;
    v159 = v4;
    while ( 1 )
    {
      if ( *(v104 - 12) != -1 )
      {
        v106 = *(v104 - 4);
        if ( v106 != -1 && *(v104 - 3) != -1 )
        {
          v162 = dword_487AA4;
          if ( v150 - 1 != v105 )
            v97 = v104[12];
          v107 = *(_DWORD *)(dword_487AA4 + 96) + *(_DWORD *)(v15 + 64);
          if ( v150 - 1 == v105 )
            v97 = *(_DWORD *)(v15 + 68);
          v97 += v107;
          v108 = (unsigned __int8 *)(v107 + *(v104 - 2));
          v109 = (*(_DWORD *)(v159 + 16) - v156 + *(v104 - 14)) >> 2;
          if ( (unsigned int)v108 < v97 )
            break;
        }
      }
LABEL_163:
      ++v105;
      v104 += 14;
      if ( v150 <= v105 )
      {
        v4 = v159;
        goto LABEL_165;
      }
    }
    while ( 1 )
    {
      v114 = *v108;
      v115 = v114 & 0xF;
      v110 = v114 >> 4;
      if ( v110 > 7 && (v110 -= 16, v110 == -8) )
      {
        v111 = *(unsigned __int16 *)(v108 + 1);
        v108 += 3;
        v110 = (unsigned __int16)__rev16(v111);
        if ( (v110 & 0x8000) != 0 )
          v110 = (unsigned __int16)v110 - 0x10000;
      }
      else
      {
        ++v108;
      }
      v106 += v110;
      if ( v153 <= v102 )
      {
        if ( dword_47AC88 > 0 )
        {
          v116 = *(_DWORD *)(v15 + 4);
          if ( v116 == -1 )
          {
            v117 = "<stripped file>";
          }
          else if ( v116 )
          {
            v117 = (const char *)(*(_DWORD *)(v162 + 120) + v116 + *(_DWORD *)(v15 + 8));
          }
          else
          {
            v117 = "<NFY>";
          }
          sub_F43B4(&off_46D334, "guessed size of linetable for %s incorrectly", v117);
          v102 = *v53;
          v150 = *(__int16 *)(v15 + 42);
        }
        goto LABEL_163;
      }
      if ( v106 )
      {
        v112 = v106;
        if ( !v103 )
          v103 = -2;
      }
      else
      {
        v112 = 1;
        if ( !v103 )
        {
LABEL_147:
          v113 = &v53[2 * v102];
          v103 = v112;
          ++v102;
          v113[1] = v112;
          *v53 = v102;
          v113[2] = 4 * v109;
          goto LABEL_148;
        }
      }
      if ( v112 != v103 )
        goto LABEL_147;
LABEL_148:
      v109 += v115 + 1;
      if ( v97 <= (unsigned int)v108 )
        goto LABEL_163;
    }
  }
  v13();
  if ( strcmp((const char *)(*(_DWORD *)(dword_487AA4 + 120) + *(_DWORD *)(v15 + 8) + v167), aStabs) )
  {
    if ( byte_47898D )
      goto LABEL_14;
    goto LABEL_67;
  }
  byte_47898D = 2;
LABEL_14:
  v164 = sub_1B7250(v148);
  if ( *(int *)(v15 + 20) <= 2 )
  {
    dword_487ABC = 0;
    return;
  }
  v152 = 0;
  v16 = 2;
  v157 = 0;
  dword_487AB0 = 2;
  while ( 1 )
  {
    ((void (__fastcall *)(int, int, int *))v149)(
      dword_487AAC,
      *(_DWORD *)(dword_487AA4 + 108) + v12 * (v16 + *(_DWORD *)(v15 + 16)),
      &v167);
    v21 = v169 >> 12;
    v22 = *(_DWORD *)(dword_487AA4 + 120);
    v23 = v168;
    v24 = *(_DWORD *)(v15 + 8) + v167;
    v25 = (char *)(v22 + v24);
    if ( (int (*)())((v169 >> 12) & (unsigned int)&loc_FFF00) == sub_8F300 )
    {
      v26 = v21 - 586496;
      v27 = *(_DWORD *)(*(_DWORD *)(v4 + 64) + 28);
      if ( (v26 & 0xE0) == 0 )
      {
        if ( *(_BYTE *)(v22 + v24) == 35 )
LABEL_156:
          sub_107954(68, 0, v168, v25, v154, v148, v27);
LABEL_31:
        if ( v26 == 36 )
        {
          v28 = dword_487ABC;
          v29 = *(_DWORD *)(dword_487ABC + 64);
          v30 = *(_DWORD *)(dword_487ABC + 60);
          v31 = v29 - v30;
          if ( (unsigned int)(v29 - v30) <= 0x3B )
          {
            obstack_newchunk((struct obstack *)(dword_487ABC + 48), 60);
            v30 = *(_DWORD *)(v28 + 60);
            v29 = *(_DWORD *)(v28 + 64);
          }
          v32 = *(_WORD **)(v28 + 56);
          v33 = (_WORD *)(v30 + 60);
          v34 = *(_DWORD *)(v28 + 72);
          *(_DWORD *)(v28 + 60) = v33;
          v35 = v33 == v32;
          if ( v33 == v32 )
            v31 = *(_BYTE *)(v28 + 88);
          v36 = ((unsigned int)v33 + v34) & ~v34;
          *(_DWORD *)(v28 + 60) = v36;
          if ( v35 )
            *(_BYTE *)(v28 + 88) = v31 | 2;
          if ( v36 - *(_DWORD *)(v28 + 52) > (unsigned int)(v29 - *(_DWORD *)(v28 + 52)) )
          {
            v36 = v29;
            *(_DWORD *)(v28 + 60) = v29;
          }
          *(_DWORD *)(v28 + 56) = v36;
          v37 = sub_1A74F4("__GDB_EFI_INFO__");
          memset(v32, 0, 0x3Cu);
          *(_BYTE *)(v37 + 32) = 12;
          v38 = *(_DWORD *)sub_1780C4((int)v148);
          *(_DWORD *)(v37 + 8) = v32;
          *(_DWORD *)(v37 + 24) = v38;
          v32[20] = -1;
          sub_E5AA8((_DWORD *)v37, (_DWORD **)&dword_4788E8);
        }
        goto LABEL_27;
      }
    }
    else
    {
      if ( *(_BYTE *)(v22 + v24) != 35 )
      {
        v17 = v169 & 0x3F;
        if ( v17 == 5 )
        {
          if ( (v169 & 0xFFFFF000) != 0xFFFFF000 )
          {
            v120 = v148[38];
            if ( v120 == -1 )
              goto LABEL_198;
            v121 = (int *)dword_4788E0;
            v122 = ((int (__fastcall *)(int, unsigned int))loc_169FA0)(v164, v168 + *(_DWORD *)(v154 + 4 * v120));
            sub_E6044(v121, v21, v122);
          }
        }
        else
        {
          v18 = v17 == 14;
          if ( v17 != 14 )
            v18 = (v169 & 0x3B) == 2;
          v19 = v18;
          if ( v17 == 8 )
            v19 |= 1u;
          if ( !v19 && dword_47AC88 > 0 )
            sub_F43B4(&off_46D334, "unknown stabs symbol %s", v25);
        }
        goto LABEL_27;
      }
      v26 = v21 - 586496;
      v27 = *(_DWORD *)(*(_DWORD *)(v4 + 64) + 28);
      if ( (v26 & 0xE0) == 0 )
        goto LABEL_156;
    }
    if ( v26 != 100
      || (v165 = v27,
          v160 = (char *)(v22 + v24),
          v166 = *(_DWORD *)(dword_487AA4 + 120),
          v123 = sub_E6824(),
          v25 = v160,
          v27 = v165,
          !v123)
      || dword_489668 == 100
      || *(_BYTE *)(v166 + v24) )
    {
      v157 = 0;
      sub_107954(v26, 0, v23, v25, v154, v148, v27);
      goto LABEL_31;
    }
    v124 = v148[38];
    if ( v124 == -1 )
      break;
    v125 = *(_DWORD *)(v154 + 4 * v124);
    dword_489668 = 100;
    v157 = 1;
    v152 = sub_E7454(v23 + v125, v124);
    sub_20C194(v152);
LABEL_27:
    v20 = *(_DWORD *)(v15 + 20);
    v16 = dword_487AB0 + 1;
    dword_487AB0 = v16;
    if ( v20 <= v16 )
    {
      if ( !v157 )
      {
        v141 = v148[38];
        if ( v141 == -1 )
          goto LABEL_199;
        v152 = sub_E7454(*(_DWORD *)(v4 + 20), v141);
        sub_20C194(v152);
      }
      v131 = *(__int16 *)(v15 + 42);
      if ( v131 > 0 )
      {
        v132 = (int *)sub_93028(56 * v131);
        v133 = sub_9253C(1735448, (int)v132);
        v134 = *(__int16 *)(v15 + 42);
        v135 = *(_DWORD *)(dword_487AA4 + 104) + v155 * *(unsigned __int16 *)(v15 + 40);
        if ( v135 < v135 + v134 * v155 )
        {
          v136 = v135 + v134 * v155;
          v151 = v4;
          v137 = v132;
          do
          {
            v138 = v135;
            v135 += v155;
            ((void (__fastcall *)(int, unsigned int, int *))v161)(dword_487AAC, v138, v137);
            v137 += 14;
          }
          while ( v136 > v135 );
          v4 = v151;
          v134 = *(__int16 *)(v15 + 42);
        }
        v139 = (char *)&v132[14 * v134];
        while ( v139 > (char *)v132 )
        {
          v140 = v132;
          v132 += 14;
          sub_1A7C58(v140, v152);
        }
        sub_92620(v133);
      }
      goto LABEL_61;
    }
  }
  sub_94700((int)"mdebugread.c", 4044, "sect_index_text not initialized");
LABEL_198:
  sub_94700((int)"mdebugread.c", 4094, "sect_index_text not initialized");
LABEL_199:
  v142 = sub_94700((int)"mdebugread.c", 4110, "sect_index_text not initialized");
  v147 = v143;
  v144 = v142;
  if ( dword_48A514 )
  {
    v145 = sub_259F10("Reading in symbols for %s...", *(const char **)(v142 + 4));
    v146 = (_DWORD *)sub_242F8C(v145);
    sub_25680C(*v146);
  }
  off_478984 = sub_1A7288;
  sub_1AD5B8(HIDWORD(v144));
  ((void (__fastcall *)(_DWORD))loc_20BE64)(HIDWORD(v144));
  if ( !dword_48A514 )
    __asm { POPEQ           {R4-R6,PC} }
  sub_259F10("done.\n");
}
