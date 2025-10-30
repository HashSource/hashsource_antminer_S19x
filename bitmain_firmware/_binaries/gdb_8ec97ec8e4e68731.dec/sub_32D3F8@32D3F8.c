int __fastcall sub_32D3F8(int a1, int a2, unsigned __int64 a3, unsigned __int8 a4, int *a5)
{
  int v5; // r6
  int v6; // r11
  int v7; // r12
  int v8; // lr
  int *v9; // r4
  int v10; // r2
  int v12; // r8
  int v13; // r9
  int v14; // r4
  int v15; // r10
  int v16; // r3
  unsigned __int64 v17; // r2
  bool v18; // cc
  int v19; // r6
  __int64 v20; // r2
  unsigned int v21; // r11
  unsigned __int16 *v22; // r5
  int v23; // r1
  bool v24; // cf
  int v25; // r3
  int v26; // r0
  char *v27; // r0
  __int16 v28; // t1
  unsigned __int16 *v29; // r7
  int v30; // r3
  unsigned int v31; // r1
  int v32; // r0
  unsigned int v33; // t1
  int *v34; // r2
  int v35; // r0
  unsigned int v36; // t1
  unsigned __int64 v37; // r2
  int v38; // r2
  int v39; // r3
  int v40; // r3
  int v41; // r3
  _WORD *v42; // r3
  int v43; // r9
  int v44; // r10
  int v45; // r2
  signed int v46; // r8
  unsigned int v47; // r4
  int v48; // r0
  __int16 v49; // r3
  bool v50; // zf
  int v51; // r3
  void *v52; // r0
  unsigned int v53; // r12
  unsigned int v54; // r2
  unsigned __int16 *i; // r1
  unsigned int v56; // t1
  unsigned int v57; // r0
  int v58; // r3
  bool v59; // zf
  bool v60; // zf
  bool v61; // zf
  bool v62; // zf
  int v63; // r5
  int v64; // r4
  int v65; // r2
  int v66; // r9
  int v67; // r0
  int v68; // r2
  int v69; // r6
  int v70; // r3
  unsigned __int64 v71; // r2
  int v72; // r3
  int v73; // r2
  int *v74; // r3
  unsigned int v75; // t1
  bool v76; // zf
  unsigned __int16 *v77; // r1
  int v78; // r2
  int v79; // r0
  int v80; // t1
  int v81; // r3
  int v82; // r4
  unsigned int v83; // r2
  _BOOL4 v84; // r3
  int v85; // r4
  unsigned int v86; // r0
  int v87; // r9
  int j; // r2
  int v89; // r0
  int v90; // r5
  int v91; // r1
  int v92; // r4
  int v93; // r3
  unsigned int v94; // r2
  unsigned __int64 v95; // r2
  int v96; // r3
  signed int v97; // r0
  unsigned int v98; // r4
  _WORD *v99; // r2
  unsigned int v100; // t1
  int v101; // r3
  int v102; // r2
  int v103; // r0
  int v104; // r12
  int v105; // r2
  unsigned __int64 v106; // r0
  int v107; // r0
  int v108; // [sp+10h] [bp-BCh]
  unsigned __int16 *v109; // [sp+18h] [bp-B4h]
  int v110; // [sp+20h] [bp-ACh]
  int v111; // [sp+24h] [bp-A8h]
  int v112; // [sp+24h] [bp-A8h]
  int v113; // [sp+28h] [bp-A4h]
  char *v114; // [sp+2Ch] [bp-A0h]
  unsigned __int16 *v115; // [sp+2Ch] [bp-A0h]
  int v116; // [sp+34h] [bp-98h]
  _DWORD *v119; // [sp+44h] [bp-88h]
  void *ptr; // [sp+48h] [bp-84h]
  void *ptra; // [sp+48h] [bp-84h]
  char *v122; // [sp+4Ch] [bp-80h]
  char v123; // [sp+50h] [bp-7Ch]
  int *v124; // [sp+54h] [bp-78h]
  int v125; // [sp+5Ch] [bp-70h]
  int v126; // [sp+64h] [bp-68h]
  int v127; // [sp+6Ch] [bp-60h] BYREF
  char v128; // [sp+70h] [bp-5Ch] BYREF
  char v129; // [sp+94h] [bp-38h] BYREF

  v7 = *(unsigned __int8 *)(a2 + 8);
  v8 = *(unsigned __int8 *)(a3 + 8);
  v116 = *(_DWORD *)HIDWORD(a3);
  v119 = (_DWORD *)a3;
  v9 = (int *)(v7 | v8);
  v124 = (int *)HIDWORD(a3);
  v123 = (v7 ^ v8) & 0x80;
  if ( ((v7 | v8) & 0x70) != 0 )
  {
    if ( ((unsigned __int8)v9 & 0x30) != 0 )
    {
      sub_32AC0C(a1, a2, a3, (int *)HIDWORD(a3), a5);
      v122 = 0;
      free(0);
      goto LABEL_11;
    }
    if ( (v7 & 0x40) == 0 )
    {
      v127 = 0;
      v10 = a4 & 0x50;
      if ( (a4 & 0x50) != 0 )
      {
        v9 = &v127;
        *(_BYTE *)(a1 + 8) = v7;
        v81 = *(_DWORD *)a2;
        *(_DWORD *)(a1 + 4) = *(_DWORD *)(a2 + 4);
        sub_328A00(a1, v124, (unsigned __int16 *)(a2 + 10), v81, &v127, a5);
      }
      else
      {
        *(_DWORD *)(a1 + 4) = v10;
        *(_WORD *)(a1 + 10) = v10;
        if ( (a4 & 0x80) == 0 )
          v9 = &v127;
        *(_DWORD *)a1 = 1;
        *(_BYTE *)(a1 + 8) = v123;
        if ( (a4 & 0x80) != 0 )
        {
          v9 = &v127;
          *(_DWORD *)(a1 + 4) = *(_DWORD *)(HIDWORD(a3) + 8) - v116 + 1;
          *a5 |= 0x400u;
        }
      }
      ptr = 0;
      sub_329598((_DWORD *)a1, v124, v9, a5);
      v122 = 0;
      goto LABEL_10;
    }
    if ( (v8 & 0x40) == 0 )
    {
      v51 = a4 & 0x50;
      if ( (a4 & 0x50) == 0 )
      {
        *(_BYTE *)(a1 + 8) = v123 | 0x40;
        *(_DWORD *)(a1 + 4) = v51;
        v122 = (char *)(a4 & 0x50);
        *(_WORD *)(a1 + 10) = v51;
        *(_DWORD *)a1 = 1;
        free(v122);
        goto LABEL_11;
      }
    }
    goto LABEL_219;
  }
  if ( !*(_WORD *)(a3 + 10) && *(_DWORD *)a3 == 1 && (v8 & 0x70) == 0 )
  {
    if ( !*(_WORD *)(a2 + 10) && *(_DWORD *)a2 == 1 && (v7 & 0x70) == 0 )
    {
      v122 = 0;
      *(_DWORD *)a1 = 1;
      *(_BYTE *)(a1 + 8) = 0;
      *(_DWORD *)(a1 + 4) = 0;
      v16 = *a5;
      *(_WORD *)(a1 + 10) = 0;
      *a5 = v16 | 8;
      free(0);
      goto LABEL_11;
    }
    *(_BYTE *)(a1 + 8) = 0;
    *(_DWORD *)(a1 + 4) = 0;
    *(_WORD *)(a1 + 10) = 0;
    *(_DWORD *)a1 = 1;
    if ( (a4 & 0x50) == 0 )
    {
      v122 = (char *)(a4 & 0x50);
      *a5 |= 2u;
      *(_BYTE *)(a1 + 8) = v123 | 0x40;
      free(v122);
      goto LABEL_11;
    }
LABEL_219:
    v122 = 0;
    *a5 |= 0x80u;
    free(0);
    goto LABEL_11;
  }
  v12 = *(_DWORD *)a2;
  if ( !*(_WORD *)(a2 + 10) && v12 == 1 && (v7 & 0x70) == 0 )
  {
    if ( (a4 & 0x80) != 0 )
    {
      v127 = *(unsigned __int16 *)(a2 + 10);
      v122 = 0;
      v82 = *(_DWORD *)(a2 + 4) - *(_DWORD *)(a3 + 4);
      sub_32AB6C(a1, a2);
      *(_DWORD *)(a1 + 4) = v82;
      *(_BYTE *)(a1 + 8) = v123;
      sub_329598((_DWORD *)a1, v124, &v127, a5);
      free(0);
    }
    else if ( (a4 & 0x20) != 0 )
    {
      ptra = (void *)*(unsigned __int16 *)(a2 + 10);
      *(_DWORD *)(a1 + 4) = 0;
      *(_DWORD *)a1 = 1;
      v122 = 0;
      *(_WORD *)(a1 + 10) = 0;
      *(_BYTE *)(a1 + 8) = v123;
      free(ptra);
    }
    else
    {
      v90 = *(_DWORD *)(a3 + 4);
      sub_32AB6C(a1, a2);
      if ( *(_DWORD *)(a1 + 4) > v90 )
        *(_DWORD *)(a1 + 4) = v90;
      v122 = 0;
      free(0);
    }
    goto LABEL_11;
  }
  v13 = *(_DWORD *)(a2 + 4);
  v14 = *(_DWORD *)a3;
  v15 = *(_DWORD *)(a3 + 4);
  v110 = v13 + v12 - (v15 + *(_DWORD *)a3);
  if ( ((a4 != 128) & ((unsigned int)v110 >> 31)) != 0 )
  {
    if ( (a4 & 0x20) != 0 )
    {
      *(_DWORD *)(a1 + 4) = 0;
      *(_BYTE *)(a1 + 8) = v123;
      v122 = 0;
      *(_WORD *)(a1 + 10) = 0;
      *(_DWORD *)a1 = 1;
      free(0);
      goto LABEL_11;
    }
    if ( v13 <= v15 && (v110 != -1) | (a4 >> 6) & 1 )
    {
      *(_BYTE *)(a1 + 8) = v7;
      *(_DWORD *)(a1 + 4) = v13;
      v127 = 0;
      sub_328A00(a1, (int *)HIDWORD(a3), (unsigned __int16 *)(a2 + 10), v12, &v127, a5);
      sub_329598((_DWORD *)a1, v124, &v127, a5);
      v122 = (char *)(a4 & 0x20);
      free(0);
      goto LABEL_11;
    }
  }
  LODWORD(a3) = *(_DWORD *)HIDWORD(a3);
  if ( v116 <= 46 )
  {
    HIDWORD(a3) = dword_438B18;
  }
  else
  {
    LODWORD(a3) = *(_DWORD *)HIDWORD(a3);
    HIDWORD(a3) = -1431655765;
  }
  if ( v116 <= 46 )
    HIDWORD(a3) += a3;
  else
    LODWORD(a3) = a3 + 5;
  if ( v116 <= 46 )
    v6 = *(unsigned __int8 *)(HIDWORD(a3) + 23);
  else
    a3 = (unsigned int)a3 * (unsigned __int64)HIDWORD(a3);
  if ( v116 > 46 )
    v6 = HIDWORD(a3) >> 1;
  v111 = 2 * v6;
  if ( (unsigned int)(2 * v6) > 0x22 )
  {
    v114 = (char *)malloc(2 * v6);
    if ( !v114 )
    {
      v122 = 0;
      *a5 |= 0x10u;
      free(0);
      goto LABEL_11;
    }
    v122 = v114;
  }
  else
  {
    v122 = 0;
    v114 = &v128;
  }
  HIDWORD(v17) = v14 + v116 - 1;
  if ( SHIDWORD(v17) < v12 )
    HIDWORD(v17) = v12;
  v18 = SHIDWORD(v17) <= 49;
  if ( SHIDWORD(v17) <= 49 )
  {
    LODWORD(v17) = 35608;
  }
  else
  {
    LODWORD(v17) = -1431655765;
    HIDWORD(v17) += 2;
  }
  if ( v18 )
  {
    WORD1(v17) = 67;
    HIDWORD(v17) += v17;
    v5 = *(unsigned __int8 *)(HIDWORD(v17) + 20);
  }
  else
  {
    v17 = HIDWORD(v17) * (unsigned __int64)(unsigned int)v17;
  }
  if ( !v18 )
    v5 = HIDWORD(v17) >> 1;
  v19 = v5 + 2;
  LODWORD(v20) = (char)a4;
  HIDWORD(v20) = v19 + 1;
  if ( (a4 & 0x80u) == 0 )
  {
    LODWORD(v20) = v19 + 2;
    ++v19;
    HIDWORD(v20) = v20;
  }
  if ( (unsigned int)(2 * HIDWORD(v20)) > 0x32 )
  {
    v52 = malloc(2 * HIDWORD(v20));
    v21 = (unsigned int)v52;
    if ( !v52 )
    {
      *a5 |= 0x10u;
      free(0);
      goto LABEL_11;
    }
    ptr = v52;
  }
  else
  {
    v21 = (unsigned int)&v129;
    ptr = 0;
  }
  v22 = (unsigned __int16 *)(v21 + 2 * (v19 + 0x7FFFFFFF));
  v23 = a2 + 10;
  if ( v12 <= 49 )
  {
    HIDWORD(v20) = 2 * (*((unsigned __int8 *)&dword_438B18[5] + v12) + 0x7FFFFFFF);
  }
  else
  {
    v20 = 2863311531LL * (unsigned int)(v12 + 2);
    HIDWORD(v20) = (HIDWORD(v20) & 0xFFFFFFFE) - 2;
  }
  v24 = __CFADD__(v23, HIDWORD(v20));
  v25 = v23 + HIDWORD(v20);
  if ( v24 )
  {
    HIDWORD(v20) = v21 + 2 * (v19 + 0x7FFFFFFF);
  }
  else
  {
    LODWORD(v20) = v25 + 2;
    v26 = v25 - a2 - 10;
    HIDWORD(v20) = v21 + 2 * (v19 + 0x7FFFFFFF);
    v27 = (char *)v22 + (~v26 & 0xFFFFFFFE);
    do
    {
      v28 = *(_WORD *)(v20 - 2);
      LODWORD(v20) = v20 - 2;
      *(_WORD *)HIDWORD(v20) = v28;
      HIDWORD(v20) -= 2;
    }
    while ( v27 != (char *)HIDWORD(v20) );
  }
  if ( v21 <= HIDWORD(v20) )
  {
    LODWORD(v20) = 0;
    do
    {
      *(_WORD *)HIDWORD(v20) = 0;
      HIDWORD(v20) -= 2;
    }
    while ( v21 <= HIDWORD(v20) );
  }
  if ( v14 <= 49 )
  {
    HIDWORD(v20) = 35608;
  }
  else
  {
    HIDWORD(v20) = -1431655765;
    LODWORD(v20) = v14 + 2;
  }
  if ( v14 <= 49 )
  {
    HIWORD(v20) = 67;
    HIDWORD(v20) += v14;
  }
  else
  {
    v20 = (unsigned int)v20 * (unsigned __int64)HIDWORD(v20);
  }
  if ( v14 <= 49 )
    HIDWORD(v20) = *(unsigned __int8 *)(HIDWORD(v20) + 20);
  v29 = (unsigned __int16 *)v119 + 5;
  if ( v14 > 49 )
    HIDWORD(v20) >>= 1;
  v108 = HIDWORD(v20);
  v30 = HIDWORD(v20) + 0x7FFFFFFF;
  v31 = v29[v30];
  v109 = &v29[v30];
  HIDWORD(v20) = *v22;
  if ( HIDWORD(v20) >= 0xA )
  {
    v32 = v110;
    LODWORD(v20) = &dword_438D04;
    do
    {
      v33 = *(_DWORD *)(v20 + 4);
      LODWORD(v20) = v20 + 4;
      --v32;
    }
    while ( v33 <= HIDWORD(v20) );
    v110 = v32;
  }
  if ( v31 >= 0xA )
  {
    v34 = &dword_438D04;
    v35 = v110;
    do
    {
      v36 = v34[1];
      ++v34;
      ++v35;
    }
    while ( v36 <= v31 );
    v110 = v35;
  }
  LODWORD(v37) = (char)a4;
  if ( (a4 & 0x80u) != 0 )
  {
    LODWORD(v20) = v13 - v15;
    v125 = v13 - v15;
    if ( v31 <= HIDWORD(v20) )
    {
      v43 = v19;
    }
    else
    {
      v43 = v19 - 1;
      LODWORD(v20) = v110;
    }
    if ( v31 > HIDWORD(v20) )
      v110 = v20 - 3;
    v126 = 0;
  }
  else
  {
    if ( v12 <= 49 )
    {
      HIDWORD(v37) = 35608;
    }
    else
    {
      HIDWORD(v37) = -1431655765;
      LODWORD(v37) = v12 + 2;
    }
    if ( v12 <= 49 )
      HIWORD(v37) = 67;
    else
      v37 = (unsigned int)v37 * (unsigned __int64)HIDWORD(v37);
    v38 = v110;
    if ( v12 > 49 )
      v39 = HIDWORD(v37) >> 1;
    else
      v39 = *(unsigned __int8 *)(HIDWORD(v37) + v12 + 20);
    if ( v110 < 0 )
      v14 = -v110;
    v40 = v19 - v39;
    if ( v110 < 0 )
      v38 = 0;
    v41 = 3 * v40;
    if ( v110 >= 0 )
    {
      v14 = 3 - v110 % 3;
      v110 += v14;
    }
    else
    {
      v110 = v38;
    }
    v126 = v41 - v14;
    sub_328630((_WORD *)v21, v19, v14);
    if ( v14 > 2 )
    {
      v42 = (_WORD *)(v21 + 2 * (v19 + 0x7FFFFFFF));
      do
      {
        v14 -= 3;
        *v42-- = 0;
      }
      while ( v14 > 2 );
    }
    HIDWORD(v20) = *v22;
    v43 = v19;
    v125 = 0;
  }
  v113 = 0;
  v44 = v43 - v108;
  v45 = v111;
  v46 = v21 + 2 * (v43 - v108);
  v112 = 0;
  v115 = (unsigned __int16 *)&v114[v45 - 2];
  while ( 2 )
  {
    v47 = 0;
    while ( 1 )
    {
      LODWORD(v20) = v21 < (unsigned int)v22;
      if ( HIDWORD(v20) )
        LODWORD(v20) = 0;
      if ( (_DWORD)v20 )
      {
        --v19;
        --v22;
        goto LABEL_114;
      }
      if ( v19 < v43 )
        break;
      if ( v19 == v43 )
      {
        v53 = HIDWORD(v20);
        v54 = (unsigned int)v109;
        for ( i = v22; ; --i )
        {
          v24 = v54 >= (unsigned int)v29;
          v54 -= 2;
          v57 = v24 ? *(unsigned __int16 *)(v54 + 2) : 0;
          if ( v57 != v53 )
            break;
          if ( (unsigned __int16 *)v21 == i )
          {
            v19 = 1;
            v47 = (unsigned __int16)(v47 + 1);
            *(_WORD *)v21 = 0;
            goto LABEL_142;
          }
          v56 = *(i - 1);
          v53 = v56;
        }
        if ( v57 > v53 )
          break;
      }
      v48 = sub_347690(*(v22 - 1) + 1000 * HIDWORD(v20));
      v50 = v48 == 0;
      if ( v48 )
        v49 = v48;
      else
        v48 = -1;
      if ( v50 )
        v49 = 1;
      else
        v48 = -v48;
      v47 = (unsigned __int16)(v47 + v49);
      sub_3275B0((unsigned __int16 *)v46, v19 - v44, v29, v108, 0, v46, v48);
LABEL_114:
      HIDWORD(v20) = *v22;
    }
LABEL_142:
    v58 = v47;
    if ( v47 )
      v58 = 1;
    if ( v112 )
      v58 = 1;
    if ( v58 )
    {
      *v115 = v47;
      if ( v112 )
      {
        v113 += 3;
      }
      else
      {
        v73 = ++v113;
        if ( v47 >= 0xA )
        {
          v74 = &dword_438D04;
          do
          {
            v75 = v74[1];
            ++v74;
            ++v73;
          }
          while ( v75 <= v47 );
          v113 = v73;
        }
      }
      ++v112;
      --v115;
      if ( v113 <= v116 )
      {
        v59 = *(unsigned __int16 *)v21 == 0;
        if ( !*(_WORD *)v21 )
          v59 = v19 == 1;
        if ( !v59 )
          goto LABEL_153;
LABEL_161:
        if ( (a4 & 0x50) == 0 && ((v110 <= v125) & ((unsigned int)(char)a4 >> 31)) == 0 )
          goto LABEL_153;
        v19 = 1;
        goto LABEL_164;
      }
      goto LABEL_196;
    }
    v112 = 0;
    v61 = *(unsigned __int16 *)v21 == 0;
    if ( !*(_WORD *)v21 )
      v61 = v19 == 1;
    if ( v61 )
      goto LABEL_161;
LABEL_153:
    v46 -= 2;
    v60 = a4 == 0;
    if ( (a4 & 0x80u) == 0 )
      v60 = v110 == 0;
    if ( !v60 )
    {
      --v43;
      v110 -= 3;
      v44 = v43 - v108;
      HIDWORD(v20) = *v22;
      continue;
    }
    break;
  }
  v110 = 0;
LABEL_164:
  if ( v112 )
  {
LABEL_196:
    ++v115;
  }
  else
  {
    *v115 = 0;
    v112 = 1;
    v113 = 1;
  }
  v127 = 0;
  if ( (a4 & 0x80u) != 0 )
  {
    v76 = v19 == 1;
    if ( v19 <= 1 )
      v76 = *(unsigned __int16 *)v21 == 0;
    if ( v76 )
    {
      v83 = *v115;
      if ( *v115 )
        v84 = (v83 & 1) == 0;
      else
        v84 = 0;
      if ( v84 )
      {
        v85 = v110;
        if ( v125 > v110 )
        {
          v86 = 10 * ((26215 * (v83 >> 1)) >> 17);
          if ( v86 == v83 )
          {
            v87 = v125 - v110;
            for ( j = 1; ; ++j )
            {
              v110 = j + v85;
              if ( j == v87 || dword_438D00[j + 1] * ((dword_438B18[j + 1] * (v86 >> (j + 1))) >> 17) != v86 )
                break;
            }
            v89 = sub_328630(v115, v112, j);
            v113 = sub_327CA8((int)v115, v89);
          }
        }
      }
    }
    else
    {
      v127 = 1;
    }
    goto LABEL_189;
  }
  if ( v113 + v110 > v116 )
    goto LABEL_216;
  if ( (a4 & 0x50) == 0 )
    goto LABEL_189;
  v62 = *(unsigned __int16 *)v21 == 0;
  if ( !*(_WORD *)v21 )
    v62 = v19 == 1;
  v63 = *(_DWORD *)(a2 + 4);
  v64 = v119[1];
  v123 = *(_BYTE *)(a2 + 8);
  if ( v62 )
  {
    if ( v64 >= v63 )
      v64 = *(_DWORD *)(a2 + 4);
    *(_BYTE *)(a1 + 8) = *(_BYTE *)(a2 + 8) & 0x80;
    *(_WORD *)(a1 + 10) = 0;
    *(_DWORD *)a1 = 1;
    *(_DWORD *)(a1 + 4) = v64;
    sub_329598((_DWORD *)a1, v124, &v127, a5);
  }
  else
  {
    v65 = v126 + v110 - v63 + v64;
    if ( v126 < v65 )
      v65 = v126;
    v66 = *v115 & 1;
    if ( v65 )
    {
      v19 = sub_328630((_WORD *)v21, v19, v65);
      v63 = *(_DWORD *)(a2 + 4);
      v64 = v119[1];
    }
    v67 = sub_327CA8(v21, v19);
    v69 = v67;
    if ( v67 <= 49 )
    {
      v70 = 35608;
    }
    else
    {
      v70 = -1431655765;
      v68 = v67 + 2;
    }
    if ( v67 <= 49 )
    {
      HIWORD(v70) = 67;
      HIDWORD(v71) = v70 + v67;
      v46 = *(unsigned __int8 *)(HIDWORD(v71) + 20);
    }
    else
    {
      v71 = (unsigned int)v68 * (unsigned __int64)(unsigned int)v70;
    }
    if ( v67 > 49 )
      v46 = HIDWORD(v71) >> 1;
    if ( v63 >= v64 )
      v72 = v64;
    else
      v72 = v63;
    v110 = v72;
    if ( (a4 & 0x10) == 0 )
    {
LABEL_188:
      v113 = v69;
      v115 = (unsigned __int16 *)v21;
      goto LABEL_189;
    }
    v91 = sub_3275B0((unsigned __int16 *)v21, v46, (unsigned __int16 *)v21, v46, 0, v21, 1);
    v92 = v91;
    v93 = *v119;
    if ( (int)*v119 > 49 )
      LOWORD(v94) = -21845;
    else
      LOWORD(v94) = -29928;
    if ( (int)*v119 > 49 )
    {
      v93 += 2;
      HIWORD(v94) = -21846;
    }
    else
    {
      HIWORD(v94) = 67;
    }
    if ( (int)*v119 > 49 )
      v95 = (unsigned int)v93 * (unsigned __int64)v94;
    else
      HIDWORD(v95) = v94 + v93;
    if ( (int)*v119 > 49 )
      v96 = HIDWORD(v95) >> 1;
    else
      v96 = *(unsigned __int8 *)(HIDWORD(v95) + 20);
    v97 = sub_328CF4((unsigned __int16 *)v21, v91, v29, v96, v119[1] - v110);
    if ( v97 != 0x80000000 )
    {
      v98 = v21 + 2 * v92;
      if ( v21 < v98 )
      {
        v99 = (_WORD *)(v21 - 2);
        do
        {
          v100 = (unsigned __int16)v99[1];
          *++v99 = v100 >> 1;
          if ( (v100 & 1) != 0 )
            *(v99 - 1) += 500;
        }
        while ( (_WORD *)(v21 + ((v98 + ~v21) & 0xFFFFFFFE)) != v99 );
      }
      if ( v97 <= 0 )
      {
        if ( v97 )
          v66 = 0;
        if ( !v66 )
          goto LABEL_188;
      }
      if ( v113 == v116 )
      {
        v77 = v115;
        if ( v116 > 3 )
        {
          if ( *v115 != 999 )
            goto LABEL_260;
          v78 = v116;
          while ( 1 )
          {
            v78 -= 3;
            v80 = v77[1];
            ++v77;
            v79 = v80;
            if ( v78 <= 3 )
              break;
            if ( v79 != 999 )
              goto LABEL_260;
          }
          v115 = v77;
          v116 = v78;
        }
        if ( *v115 == dword_438D00[v116] - 1 )
        {
LABEL_216:
          *a5 |= 4u;
          goto LABEL_10;
        }
      }
LABEL_260:
      v101 = *v119;
      v102 = v119[1] - v110;
      v103 = 1431655766 * v102;
      if ( (int)*v119 > 49 )
      {
        v103 = 43691;
        v101 += 2;
      }
      v104 = v102 / 3;
      if ( (int)*v119 > 49 )
        HIWORD(v103) = -21846;
      v105 = v102 % 3;
      if ( (int)*v119 <= 49 )
      {
        HIDWORD(v106) = dword_438B18;
        v101 = *((unsigned __int8 *)&dword_438B18[5] + v101);
      }
      else
      {
        v106 = (unsigned int)v101 * (unsigned __int64)(unsigned int)v103;
      }
      if ( (int)*v119 > 49 )
        v101 = HIDWORD(v106) >> 1;
      v123 ^= 0x80u;
      v107 = sub_3275B0((unsigned __int16 *)v21, v46, v29, v101, v104, v21, -dword_438D00[v105]);
      v115 = (unsigned __int16 *)v21;
      v113 = sub_327CA8(v21, -v107);
LABEL_189:
      *(_BYTE *)(a1 + 8) = v123 & 0x80;
      *(_DWORD *)(a1 + 4) = v110;
      sub_328A00(a1, v124, v115, v113, &v127, a5);
      sub_329598((_DWORD *)a1, v124, &v127, a5);
      goto LABEL_10;
    }
    *a5 |= 0x10u;
  }
LABEL_10:
  free(ptr);
LABEL_11:
  free(v122);
  return a1;
}
