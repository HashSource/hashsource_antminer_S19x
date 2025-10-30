int __fastcall sub_2D08B0(_DWORD *a1, int a2)
{
  int v3; // r11
  _DWORD *v4; // r5
  int *v5; // r10
  _DWORD *v6; // r9
  int *v7; // r4
  int v8; // r2
  int *v9; // r7
  int v10; // r8
  int v11; // r1
  int *v12; // r12
  int v13; // r3
  int v14; // r0
  int v15; // t1
  int v16; // lr
  int v17; // r2
  int *v18; // r3
  int v19; // r2
  bool v20; // zf
  int (__fastcall *v21)(_DWORD *, int); // r3
  int result; // r0
  int v23; // r1
  _DWORD *v24; // r3
  int v25; // r2
  unsigned int v26; // r0
  _DWORD *v27; // r11
  unsigned int v28; // r8
  char v29; // r0
  _DWORD *v30; // r3
  size_t v31; // r10
  int v32; // r7
  int v33; // r2
  int v34; // r12
  unsigned int v35; // r1
  unsigned int v36; // r2
  char *v37; // r0
  int v38; // r3
  int v39; // r0
  unsigned int v40; // r11
  unsigned int v41; // r7
  int v42; // r3
  unsigned int v43; // r11
  int v44; // r1
  _DWORD *v45; // r3
  unsigned int i; // r8
  int (__fastcall *v47)(int, _DWORD *, _DWORD *); // r4
  int v48; // r12
  _DWORD *v49; // r7
  unsigned int v50; // r12
  unsigned int v51; // lr
  bool v52; // cf
  unsigned int v53; // r1
  _BOOL4 v54; // r2
  unsigned int v55; // r2
  _BOOL4 v56; // r0
  int v57; // r2
  _DWORD *v58; // r0
  _DWORD *v59; // r3
  int v60; // r7
  _DWORD *v61; // r10
  int v62; // r11
  unsigned int v63; // r9
  int v64; // r4
  _BYTE *v65; // r0
  _DWORD *v66; // r3
  char v67; // r0
  _DWORD *v68; // r0
  _DWORD *v69; // r0
  _DWORD *v70; // r3
  _DWORD *v71; // r5
  unsigned int v72; // r0
  int v73; // r2
  _DWORD *v74; // r3
  _DWORD *v75; // r0
  _DWORD *v76; // r3
  unsigned int v77; // r8
  _BYTE *v78; // r0
  char v79; // r2
  int v80; // r1
  char *v81; // r12
  int v82; // r3
  unsigned int v83; // r4
  double v84; // r2
  int v85; // r5
  _DWORD *v86; // r3
  int v87; // r3
  int v88; // r2
  int v89; // r7
  _BYTE *v90; // r0
  _DWORD *v91; // r3
  int v92; // r1
  char v93; // r2
  int v94; // r3
  int v95; // r7
  _DWORD *v96; // r3
  int v97; // r2
  unsigned int v98; // r1
  int v99; // r1
  int v100; // t1
  _QWORD *v101; // r0
  _DWORD *v102; // r3
  int v103; // r8
  int v104; // r5
  unsigned int v105; // r4
  int v106; // r3
  int v107; // r1
  unsigned int v108; // r0
  int v109; // r2
  unsigned int v110; // r8
  _BYTE *v111; // r0
  int v112; // r1
  char v113; // r3
  int v114; // r12
  char v115; // r2
  int v116; // r12
  int v117; // r2
  char v118; // r3
  _DWORD *v119; // r3
  _DWORD *v120; // r0
  int v121; // r1
  _DWORD *v122; // [sp+8h] [bp-2Ch]
  char *v123; // [sp+8h] [bp-2Ch]
  int s2; // [sp+Ch] [bp-28h]
  int v125; // [sp+10h] [bp-24h]
  unsigned int v126; // [sp+10h] [bp-24h]
  int v127; // [sp+10h] [bp-24h]
  _DWORD *v128; // [sp+10h] [bp-24h]
  _DWORD *base; // [sp+14h] [bp-20h]
  int v130; // [sp+18h] [bp-1Ch]
  int *v131; // [sp+18h] [bp-1Ch]
  char *v132; // [sp+1Ch] [bp-18h]
  _DWORD *v133; // [sp+1Ch] [bp-18h]
  _DWORD v134[2]; // [sp+2Ch] [bp-8h] BYREF

  v3 = a1[1];
  v4 = a1;
  v5 = *(int **)(a1[40] + 2348);
  v6 = *(_DWORD **)(v3 + 444);
  v7 = (int *)*v5;
  if ( a2 )
  {
    v8 = *v5;
    if ( v7 )
      LOBYTE(v8) = 1;
    *(_BYTE *)(a2 + 6) = *(_BYTE *)(a2 + 6) & 0xFB | (4 * (v8 & 1));
  }
  if ( v7 || (v26 = a1[27]) == 0 )
  {
    v9 = (int *)*v5;
LABEL_7:
    if ( v9 )
    {
      do
      {
        v10 = v9[9];
        if ( v10 )
        {
          v11 = 0;
          v12 = v9 + 9;
          v13 = 0;
          do
          {
            v15 = v12[1];
            ++v12;
            v14 = v15;
            ++v13;
            v16 = v11 + 10;
            v17 = *(_DWORD *)(v15 + 20);
            if ( (v17 & 0x8000) == 0 && ((v17 & 1) != 0 || v9[1] != 1) )
            {
              ++v11;
              v9[v16] = v14;
            }
          }
          while ( v13 != v10 );
        }
        else
        {
          v11 = 0;
        }
        v9[9] = v11;
        v18 = (int *)*v9;
        if ( v7 )
          goto LABEL_20;
        v19 = v9[1];
        v20 = v19 == 1;
        if ( v19 == 1 )
          v20 = v11 == 0;
        if ( !v20 || (v9[8] & 0x20) != 0 )
LABEL_20:
          v5 = v9;
        else
          *v5 = (int)v18;
        v9 = v18;
      }
      while ( v18 );
    }
    v21 = *(int (__fastcall **)(_DWORD *, int))(*(_DWORD *)(v3 + 444) + 172);
    if ( !v21 || (result = v21(v4, a2)) != 0 )
    {
      v23 = *(_DWORD *)(v4[40] + 2348);
      v24 = *(_DWORD **)v23;
      if ( *(_DWORD *)v23 )
      {
        v25 = 0;
        do
        {
          v24 = (_DWORD *)*v24;
          ++v25;
        }
        while ( v24 );
      }
      else
      {
        v25 = 0;
      }
      result = 1;
      *(_DWORD *)(v23 + 28) = v25 * *(unsigned __int8 *)(v6[98] + 1);
    }
    return result;
  }
  v27 = sub_2AB3B4(v26, 4u);
  base = v27;
  if ( !v27 )
    return 0;
  v28 = 0;
  v29 = sub_2A67A4((int)v4);
  v30 = (_DWORD *)v4[25];
  v31 = 0;
  v32 = 2 * ~(-1 << (v29 - 1)) + 1;
  if ( v30 )
  {
    do
    {
      if ( (v30[5] & 1) != 0 )
      {
        v33 = v30[8];
        v34 = v30[9];
        v27[v31++] = v30;
        v35 = v33 & v32;
        v36 = (v33 + v34) & v32;
        if ( v36 < v35 )
          v28 = v36;
      }
      v30 = (_DWORD *)v30[3];
    }
    while ( v30 );
    if ( v4[27] < v31 )
      sub_2A6BBC("elf.c", 4602);
  }
  qsort(v27, v31, 4u, (__compar_fn_t)sub_2CBB8C);
  v134[0] = 0;
  v37 = sub_2AD7AC((int)v4, ".interp");
  if ( v37 )
  {
    if ( (*((_DWORD *)v37 + 5) & 2) != 0 )
    {
      v123 = v37;
      v65 = sub_2AD09C((int)v4, 0x2Cu);
      v66 = v65;
      if ( !v65 )
        goto LABEL_93;
      v67 = v65[32];
      v66[1] = 6;
      *v66 = 0;
      v66[2] = 4;
      *((_BYTE *)v66 + 32) = v67 | 0x21;
      v134[0] = v66;
      v128 = v66;
      v68 = sub_2AD09C((int)v4, 0x2Cu);
      if ( !v68 )
        goto LABEL_93;
      *v68 = 0;
      v68[10] = v123;
      v68[1] = 3;
      v68[9] = 1;
      s2 = 1;
      v122 = v68;
      *v128 = v68;
    }
    else
    {
      s2 = 0;
      v122 = v134;
    }
  }
  else
  {
    s2 = 0;
    v122 = v134;
  }
  v38 = v6[4];
  if ( !v38 )
    v38 = 1;
  v130 = v38;
  v132 = sub_2AD7AC((int)v4, ".dynamic");
  if ( v132 )
  {
    if ( (*((_DWORD *)v132 + 5) & 2) != 0 )
    {
      if ( !v31 )
      {
LABEL_96:
        v58 = sub_2AD09C((int)v4, 0x2Cu);
        if ( !v58 )
          goto LABEL_93;
        *v58 = 0;
        v58[9] = 1;
        v59 = v122;
        v58[10] = v132;
        v58[1] = 2;
        v122 = v58;
        *v59 = v58;
        goto LABEL_98;
      }
    }
    else
    {
      if ( !v31 )
        goto LABEL_98;
      v132 = (char *)(*((_DWORD *)v132 + 5) & 2);
    }
  }
  else if ( !v31 )
  {
    goto LABEL_98;
  }
  v39 = *(_DWORD *)(*(_DWORD *)(v4[40] + 2348) + 28);
  if ( v39 == -1 )
    v39 = sub_2CBE24(v4, a2);
  if ( ((v4[10] >> 5) & 0x100) != 0 )
  {
    v40 = *(unsigned __int8 *)v6[98] + v39;
    v41 = v32 & *(_DWORD *)(*base + 32);
    if ( v41 >= v40 )
    {
      v125 = (unsigned __int64)sub_347674(v41, v130) >> 32;
      if ( v125 >= (unsigned __int64)sub_347674(v40, v130) >> 32 )
      {
        v42 = s2;
        if ( (v41 & -v130) >= v28 )
          v42 = 1;
        s2 = v42;
      }
    }
  }
  else
  {
    s2 = 0;
  }
  v43 = 0;
  v126 = 0;
  v44 = 0;
  v45 = 0;
  for ( i = 0; i != v31; ++i )
  {
    v49 = (_DWORD *)base[i];
    if ( !v45 )
    {
LABEL_62:
      v48 = v49[5];
      if ( (v48 & 8) == 0 )
        v43 = 1;
      goto LABEL_64;
    }
    v50 = v45[8];
    v51 = v49[8];
    if ( v50 - v45[7] != v51 - v49[7] )
      goto LABEL_59;
    v52 = __CFADD__(v44, v50);
    v53 = v44 + v50;
    v54 = v52;
    if ( v51 < v53 || v54 )
      goto LABEL_59;
    v55 = v130 - 1;
    if ( !__CFADD__(v53, v130 - 1) )
      v55 = (-v130 & (v53 + v130 - 1)) + v130;
    v56 = v51 >= v55;
    if ( v50 >= v55 )
      v56 = 0;
    if ( v56 )
    {
LABEL_59:
      if ( !a2 )
        goto LABEL_113;
      v47 = *(int (__fastcall **)(int, _DWORD *, _DWORD *))(*(_DWORD *)(a2 + 24) + 56);
      if ( !v47 )
        goto LABEL_113;
      goto LABEL_61;
    }
    v57 = (v4[10] >> 5) & 0x100;
    if ( (v45[5] & 0x402) != 0 || (v49[5] & 0x402) == 0 )
    {
      if ( !v57 )
      {
LABEL_180:
        if ( !a2 )
          goto LABEL_62;
        v47 = *(int (__fastcall **)(int, _DWORD *, _DWORD *))(*(_DWORD *)(a2 + 24) + 56);
        if ( !v47 )
          goto LABEL_62;
        goto LABEL_61;
      }
    }
    else if ( !v57 || (((v53 - 1) ^ v51) & -v130) != 0 )
    {
      goto LABEL_59;
    }
    if ( v43 )
      goto LABEL_180;
    v48 = v49[5];
    if ( (v48 & 8) != 0 )
    {
      if ( !a2 )
        goto LABEL_64;
      v47 = *(int (__fastcall **)(int, _DWORD *, _DWORD *))(*(_DWORD *)(a2 + 24) + 56);
      if ( !v47 )
        goto LABEL_64;
    }
    else
    {
      if ( ((v51 ^ (v53 - 1)) & -v130) != 0 )
        goto LABEL_59;
      if ( !a2 || (v47 = *(int (__fastcall **)(int, _DWORD *, _DWORD *))(*(_DWORD *)(a2 + 24) + 56)) == 0 )
      {
        v43 = 1;
LABEL_64:
        if ( (v48 & 0x402) == 0x400 )
          v44 = 0;
        else
          v44 = v49[9];
        goto LABEL_67;
      }
    }
LABEL_61:
    if ( !v47(a2, v4, v49) )
      goto LABEL_62;
LABEL_113:
    v69 = sub_2CBC74((int)v4, (int)base, v126, i, s2);
    if ( !v69 )
      goto LABEL_93;
    v70 = v122;
    v48 = v49[5];
    v122 = v69;
    *v70 = v69;
    v43 = ((v48 ^ 8u) >> 3) & 1;
    if ( (v48 & 0x402) == 0x400 )
    {
      v44 = 0;
    }
    else
    {
      v44 = v49[9];
      v126 = i;
      s2 = 0;
    }
    if ( (v48 & 0x402) == 0x400 )
    {
      s2 = 0;
      v126 = i;
    }
LABEL_67:
    v45 = v49;
  }
  v7 = 0;
  if ( v49 && (i - v126 != 1 || (v48 & 0x402) != 0x400) )
  {
    v75 = sub_2CBC74((int)v4, (int)base, v126, i, s2);
    if ( !v75 )
      goto LABEL_93;
    v76 = v122;
    v122 = v75;
    *v76 = v75;
  }
  if ( v132 )
    goto LABEL_96;
LABEL_98:
  v60 = v4[25];
  if ( !v60 )
    goto LABEL_158;
  v61 = 0;
  v133 = v6;
  v62 = 0;
  v131 = v7;
  v63 = 0;
  v127 = (int)v4;
  while ( 2 )
  {
    v64 = *(_DWORD *)(v60 + 20);
    if ( (v64 & 2) != 0 && !strncmp(*(const char **)v60, ".note", 5u) )
    {
      if ( *(_DWORD *)(v60 + 64) == 2
        && (v103 = *(_DWORD *)(v60 + 12)) != 0
        && *(_DWORD *)(v103 + 64) == 2
        && (*(_DWORD *)(v103 + 20) & 2) != 0 )
      {
        v104 = v60;
        v105 = 1;
        do
        {
          if ( strncmp(*(const char **)v103, ".note", 5u) )
            break;
          v106 = *(_DWORD *)(v104 + 32);
          v107 = *(_DWORD *)(v104 + 36);
          v104 = v103;
          if ( ((v106 + v107 + 3) & 0xFFFFFFFC) != *(_DWORD *)(v103 + 32) )
            break;
          ++v105;
          v103 = *(_DWORD *)(v103 + 12);
          if ( !v103 )
            break;
        }
        while ( *(_DWORD *)(v103 + 64) == 2 && (*(_DWORD *)(v103 + 20) & 2) != 0 );
        v72 = (unsigned int)sub_2AD09C(v127, 4 * v105 + 40);
        v71 = (_DWORD *)v72;
        if ( !v72 )
          goto LABEL_93;
        *(_DWORD *)(v72 + 36) = v105;
        *(_DWORD *)v72 = 0;
        if ( v105 <= 1 )
          v72 = v105 - 1;
        v71[1] = 4;
        if ( v105 > 1 )
        {
          v108 = v105;
          do
          {
            v109 = *(_DWORD *)(v60 + 20);
            v110 = v105 - 1;
            v71[v108 - v105-- + 10] = v60;
            if ( (v109 & 0x400) != 0 )
            {
              sub_2A6BBC("elf.c", 4889);
              v108 = v71[9];
            }
            v60 = *(_DWORD *)(v60 + 12);
          }
          while ( v110 != 1 );
          v72 = v108 - 1;
        }
      }
      else
      {
        v71 = sub_2AD09C(v127, 0x2Cu);
        if ( !v71 )
          goto LABEL_93;
        v72 = 0;
        *v71 = 0;
        v71[1] = 4;
        v71[9] = 1;
      }
      v73 = *(_DWORD *)(v60 + 20);
      v71[v72 + 10] = v60;
      if ( (v73 & 0x400) != 0 )
      {
        sub_2A6BBC("elf.c", 4893);
        v102 = v122;
        v64 = *(_DWORD *)(v60 + 20);
        v122 = v71;
        *v102 = v71;
        goto LABEL_103;
      }
      v74 = v122;
      v122 = v71;
      *v74 = v71;
    }
    else
    {
LABEL_103:
      if ( (v64 & 0x400) != 0 )
      {
        v20 = v63++ == 0;
        if ( v20 )
          v62 = v60;
      }
    }
    if ( !v61 && (*(_DWORD *)(*(_DWORD *)(v60 + 140) + 8) & 0x1000000) != 0 )
      v61 = (_DWORD *)v60;
    v60 = *(_DWORD *)(v60 + 12);
    if ( v60 )
      continue;
    break;
  }
  v77 = v63;
  v7 = v131;
  v20 = v63 == 0;
  v6 = v133;
  v4 = (_DWORD *)v127;
  if ( v20 )
  {
LABEL_146:
    if ( v61 && (*(_DWORD *)(v127 + 40) & 0x2000) != 0 )
    {
      do
      {
        v87 = v61[35];
        if ( (*(_DWORD *)(v87 + 8) & 0x1000000) != 0 && *(_DWORD *)(v87 + 32) <= 0x1000u )
        {
          v88 = v61[5];
          if ( (v88 & 8) != 0 )
            v89 = 4;
          else
            v89 = 6;
          if ( (v88 & 0x10) != 0 )
            v89 |= 1u;
          v90 = sub_2AD09C(v127, 0x30u);
          if ( !v90 )
            goto LABEL_93;
          v91 = v122;
          v92 = *(_DWORD *)(v61[35] + 32);
          v93 = v90[32] | 1;
          *(_DWORD *)v90 = 0;
          *((_DWORD *)v90 + 9) = 1;
          *((_DWORD *)v90 + 10) = v61;
          *((_DWORD *)v90 + 1) = v92 + 1685382485;
          *((_DWORD *)v90 + 2) = v89;
          v90[32] = v93;
          v122 = v90;
          *v91 = v90;
        }
        v61 = (_DWORD *)v61[3];
      }
      while ( v61 );
    }
LABEL_158:
    v94 = *(_DWORD *)(v4[40] + 2348);
    v95 = *(_DWORD *)(v94 + 12);
    if ( v95 && (*(_DWORD *)(*(_DWORD *)(v95 + 60) + 20) & 2) != 0 )
    {
      v120 = sub_2AD09C((int)v4, 0x2Cu);
      if ( !v120 )
        goto LABEL_93;
      v121 = *(_DWORD *)(v95 + 60);
      v120[1] = 1685382480;
      v120[9] = 1;
      v120[10] = v121;
      *v120 = 0;
      *v122 = v120;
      v122 = v120;
      v94 = *(_DWORD *)(v4[40] + 2348);
    }
    if ( *(_DWORD *)(v94 + 52) )
    {
      v111 = sub_2AD09C((int)v4, 0x2Cu);
      if ( !v111 )
        goto LABEL_93;
      v112 = v6[114];
      v113 = v111[32];
      v114 = *(_DWORD *)(v4[40] + 2348);
      *((_DWORD *)v111 + 1) = 1685382481;
      v115 = v112;
      if ( v112 )
        v115 = 1;
      v116 = *(_DWORD *)(v114 + 52);
      v111[32] = v113 & 0xFA | 1 | (4 * (v115 & 1));
      v117 = *(_DWORD *)(a2 + 16);
      *(_DWORD *)v111 = 0;
      *((_DWORD *)v111 + 2) = v116;
      *((_DWORD *)v111 + 5) = v112;
      if ( v117 > 0 )
      {
        v118 = v111[32];
        *((_DWORD *)v111 + 6) = v117;
        v111[32] = v118 | 8;
      }
      v119 = v122;
      v122 = v111;
      *v119 = v111;
      v9 = (int *)v134[0];
    }
    else
    {
      v9 = (int *)v134[0];
      if ( !a2 )
      {
LABEL_177:
        free(base);
        v3 = v4[1];
        v5 = *(int **)(v4[40] + 2348);
        *v5 = (int)v9;
        goto LABEL_7;
      }
    }
    if ( (*(_BYTE *)(a2 + 3) & 0x10) != 0 && v9 )
    {
      v96 = v9;
      do
      {
        if ( v96[1] == 1 )
        {
          v97 = v96[9];
          if ( v97 )
          {
            v98 = *(_DWORD *)(v96[10] + 28);
            if ( v98 >= *(_DWORD *)(a2 + 120) && v98 < *(_DWORD *)(a2 + 124) )
            {
              v99 = (int)&v96[v97 + 10];
              while ( 1 )
              {
                v52 = v97-- != 0;
                if ( !v52 )
                  break;
                v100 = *(_DWORD *)(v99 - 4);
                v99 -= 4;
                if ( (~*(_DWORD *)(v100 + 20) & 0x102) == 0 )
                {
                  v101 = sub_2AD09C((int)v4, 0x2Cu);
                  if ( !v101 )
                    goto LABEL_93;
                  *v101 = 0x6474E55200000000LL;
                  *v122 = v101;
                  v9 = (int *)v134[0];
                  goto LABEL_177;
                }
              }
            }
          }
        }
        v96 = (_DWORD *)*v96;
      }
      while ( v96 );
    }
    goto LABEL_177;
  }
  v78 = sub_2AD09C(v127, 4 * v77 + 40);
  if ( v78 )
  {
    v79 = v78[32];
    v80 = 0;
    v81 = v78 + 36;
    *(_DWORD *)v78 = 0;
    v82 = v62;
    *((_DWORD *)v78 + 9) = v77;
    v78[32] = v79 | 1;
    *((_DWORD *)v78 + 1) = 7;
    *((_DWORD *)v78 + 2) = 4;
    while ( 1 )
    {
      ++v80;
      if ( (*(_DWORD *)(v82 + 20) & 0x400) == 0 )
        break;
      *((_DWORD *)v81 + 1) = v82;
      v81 += 4;
      v82 = *(_DWORD *)(v82 + 12);
      if ( v77 == v80 )
      {
        v86 = v122;
        v122 = v78;
        *v86 = v78;
        goto LABEL_146;
      }
    }
    v83 = 0;
    sub_2A6A5C("%B: TLS sections are not adjacent:", v127);
    v85 = v62;
    do
    {
      HIDWORD(v84) = *(_DWORD *)(v85 + 20);
      if ( (WORD2(v84) & 0x400) != 0 )
      {
        ++v83;
        sub_2A6A5C("\t    TLS: %A", v84);
      }
      else
      {
        sub_2A6A5C("\tnon-TLS: %A", v84);
      }
      v85 = *(_DWORD *)(v85 + 12);
    }
    while ( v77 > v83 );
    ((void (__fastcall *)(int))loc_2A6C48)(17);
  }
LABEL_93:
  free(base);
  return 0;
}
