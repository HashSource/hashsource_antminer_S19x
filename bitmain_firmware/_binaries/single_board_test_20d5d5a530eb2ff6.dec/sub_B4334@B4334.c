int __fastcall sub_B4334(const void **a1, int *a2, size_t *a3, unsigned int *a4, int a5, int a6, char a7, int a8)
{
  double v8; // d0
  int v9; // r6
  int v11; // r11
  unsigned int v12; // r1
  double v13; // d7
  double v14; // d6
  unsigned int v15; // r3
  int v16; // r0
  double v17; // d0
  unsigned int v18; // s15
  unsigned int v19; // r2
  _BYTE *v20; // lr
  int v21; // r4
  unsigned int v22; // r3
  unsigned int v23; // r10
  unsigned int v24; // r4
  signed int i; // lr
  signed int v26; // r9
  _BYTE *v27; // r1
  _BOOL4 v28; // lr
  unsigned int v29; // lr
  int v30; // r5
  int v31; // r10
  int v32; // r5
  int v33; // r5
  int v34; // r5
  bool v35; // zf
  int v36; // r3
  _BYTE *v37; // r4
  int v38; // r6
  char v39; // lr
  char v40; // t1
  int v41; // r5
  int v43; // r3
  _BOOL4 v44; // r3
  double v45; // d7
  int v46; // r3
  int v47; // r7
  int v48; // r4
  double v49; // d7
  int v50; // r7
  bool v51; // zf
  size_t v52; // r2
  unsigned int v53; // r1
  int v54; // r3
  _BYTE *v55; // r3
  int v56; // r3
  int v57; // r3
  int v58; // r0
  unsigned int v59; // r1
  int v60; // r0
  void *v61; // r0
  unsigned int v62; // r3
  signed int v63; // r2
  _BYTE *v64; // r7
  int v65; // r0
  int v66; // r1
  int v67; // r3
  int v68; // r2
  bool v69; // zf
  int v70; // r2
  bool v71; // zf
  int v72; // r4
  _BYTE *v73; // r7
  int v74; // r5
  char v75; // lr
  char v76; // t1
  int v77; // r4
  int v78; // r3
  int v79; // r6
  int v80; // r7
  int v81; // r4
  int v82; // r7
  int v83; // r4
  char v84; // r3
  int v85; // r6
  bool v86; // zf
  int v87; // r3
  char v88; // r2
  _BYTE *v89; // r9
  int v90; // r4
  char v91; // lr
  char v92; // t1
  _BOOL4 v94; // [sp+Ch] [bp-70h]
  int v97; // [sp+18h] [bp-64h]
  int v98; // [sp+1Ch] [bp-60h]
  int v99; // [sp+1Ch] [bp-60h]
  int v100; // [sp+1Ch] [bp-60h]
  int v101; // [sp+1Ch] [bp-60h]
  int v102; // [sp+20h] [bp-5Ch]
  int v103; // [sp+24h] [bp-58h]
  _BYTE v104[20]; // [sp+3Ch] [bp-40h] BYREF
  _BYTE v105[20]; // [sp+50h] [bp-2Ch] BYREF
  _BYTE v106[24]; // [sp+64h] [bp-18h] BYREF

  v9 = a6;
  if ( a6 < 0 )
    v9 = 6;
  if ( v8 < 0.0 )
  {
    v97 = 1;
    v98 = 45;
LABEL_6:
    if ( a8 != 2 )
      goto LABEL_7;
    goto LABEL_81;
  }
  if ( (a7 & 2) != 0 )
  {
    v97 = 1;
    v98 = 43;
    goto LABEL_6;
  }
  v43 = a7 & 4;
  v97 = v43;
  if ( (a7 & 4) != 0 )
  {
    v97 = 1;
    v43 = 32;
  }
  v98 = v43;
  if ( a8 != 2 )
  {
LABEL_7:
    if ( !a8 )
    {
      v11 = 0;
      v94 = 0;
      goto LABEL_9;
    }
    v94 = a8;
    if ( v8 == 0.0 )
    {
      v45 = v8;
      v11 = 0;
      goto LABEL_118;
    }
    goto LABEL_112;
  }
LABEL_81:
  if ( v8 == 0.0 )
  {
    v44 = 0;
    v45 = v8;
    v11 = 0;
    v94 = 0;
    goto LABEL_83;
  }
  if ( v8 >= 0.0001 )
  {
    v49 = 10.0;
    if ( v9 )
    {
      v78 = v9;
      v49 = 1.0;
      do
      {
        --v78;
        v49 = v49 * 10.0;
      }
      while ( v78 );
    }
    v94 = v8 >= v49;
  }
  else
  {
    v94 = 1;
  }
LABEL_112:
  if ( v8 >= 1.0 )
  {
    v45 = v8;
    v11 = 0;
  }
  else
  {
    v11 = 0;
    v45 = v8;
    do
    {
      v45 = v45 * 10.0;
      --v11;
    }
    while ( v45 < 1.0 );
  }
  for ( ; v45 > 10.0; ++v11 )
    v45 = v45 / 10.0;
  if ( a8 != 2 )
    goto LABEL_118;
  v44 = v94;
LABEL_83:
  if ( !v9 )
    v9 = 1;
  if ( v44 )
  {
    --v9;
LABEL_118:
    if ( v94 )
      v8 = v45;
    goto LABEL_9;
  }
  v9 -= v11 + 1;
  if ( v9 < 0 )
    return 0;
LABEL_9:
  if ( v8 < 0.0 )
    v8 = -v8;
  if ( v8 >= 4294967300.0 )
    return 0;
  if ( v9 >= 9 )
    v9 = 9;
  v12 = (unsigned int)v8;
  if ( v9 )
  {
    switch ( v9 )
    {
      case 1:
        v13 = 10.0;
        break;
      case 2:
        v13 = 100.0;
        break;
      case 3:
        v13 = 1000.0;
        break;
      case 4:
        v13 = 10000.0;
        break;
      case 5:
        v13 = 100000.0;
        break;
      case 6:
        v13 = 1000000.0;
        break;
      case 7:
        v13 = 10000000.0;
        break;
      default:
        v13 = 1000000000.0;
        if ( v9 == 8 )
          v13 = 100000000.0;
        break;
    }
    v14 = 10.0;
    v15 = (int)v13;
    if ( v9 != 1 )
    {
      switch ( v9 )
      {
        case 2:
          v14 = 100.0;
          break;
        case 3:
          v14 = 1000.0;
          break;
        case 4:
          v14 = 10000.0;
          break;
        case 5:
          v14 = 100000.0;
          break;
        case 6:
          v14 = 1000000.0;
          break;
        case 7:
          v14 = 10000000.0;
          break;
        default:
          v14 = 1000000000.0;
          if ( v9 == 8 )
            v14 = 100000000.0;
          break;
      }
    }
  }
  else
  {
    v15 = 1;
    v14 = 1.0;
  }
  v16 = 0;
  v17 = (v8 - (double)v12) * v14;
  v18 = (int)v17;
  if ( v17 - (double)(int)v17 >= 0.5 )
    ++v18;
  v19 = v18;
  if ( v18 >= v15 )
  {
    v19 = v18 - v15;
    ++v12;
  }
  v20 = v104;
  while ( 1 )
  {
    v21 = v16 + 1;
    v22 = v12 / 0xA;
    if ( v12 / 0xA )
      v22 = 1;
    v23 = v12 % 0xA;
    v12 /= 0xAu;
    if ( v21 > 19 )
      v22 = 0;
    *v20++ = a0123456789[v23];
    if ( !v22 )
      break;
    ++v16;
  }
  if ( v16 == 19 )
    v21 = 19;
  v104[v21] = 0;
  if ( v9 )
  {
    v102 = v21;
    v24 = v19;
    for ( i = 0; ; i = v26 )
    {
      v26 = i + 1;
      v27 = &v106[i + 20];
      if ( i )
        v28 = 0;
      else
        v28 = a8 == 2;
      if ( v28 )
      {
        v29 = v24 % 0xA;
        if ( v24 == 10 * (v24 / 0xA) )
        {
          --v9;
          v26 = v24 % 0xA;
          v24 /= 0xAu;
          if ( !v9 )
          {
            v21 = v102;
            v26 = 0;
            goto LABEL_55;
          }
          continue;
        }
      }
      else
      {
        v29 = v24 % 0xA;
      }
      *(v27 - 40) = a0123456789[v29];
      v24 /= 0xAu;
      if ( v26 >= v9 )
      {
        v21 = v102;
        goto LABEL_55;
      }
    }
  }
  v26 = 0;
LABEL_55:
  v30 = 0;
  v105[v26] = 0;
  if ( v94 )
  {
    v63 = abs32(v11);
    v64 = v106;
    while ( 1 )
    {
      v65 = 1717986919 * v63;
      v31 = v30 + 1;
      if ( v63 / 10 > 0 )
        v65 = 1;
      v66 = v63 % 10;
      if ( v63 / 10 <= 0 )
        v65 = 0;
      v63 /= 10;
      if ( v31 > 19 )
        v65 = 0;
      *v64++ = a0123456789[v66];
      if ( !v65 )
        break;
      ++v30;
    }
    if ( v63 )
      return 0;
    if ( !v30 )
    {
      v31 = 2;
      v106[1] = 48;
    }
    v67 = a5 - v21 - v9;
    if ( v9 > 0 )
      --v67;
    v33 = v67 - v97 - (v31 + 2);
  }
  else
  {
    v31 = 0;
    v32 = a5 - v21 - v9;
    if ( v9 > 0 )
      --v32;
    v33 = v32 - v97;
  }
  v34 = v33 & ~(v33 >> 31);
  if ( (a7 & 1) != 0 )
  {
    v34 = -v34;
  }
  else if ( (a7 & 0x10) != 0 )
  {
    if ( v34 )
    {
      if ( v98 )
      {
        v68 = (int)a2;
        if ( a2 )
          v68 = 1;
        v69 = a2 == 0;
        if ( !a2 )
          v69 = *a1 == 0;
        v47 = v68;
        if ( v69 || !sub_B3E30(a1, a2, a3, a4, v98) )
          return 0;
        if ( !--v34 )
        {
LABEL_178:
          v34 = 0;
          goto LABEL_67;
        }
      }
      else
      {
        v46 = (int)a2;
        if ( a2 )
          v46 = 1;
        v47 = v46;
      }
      v100 = v21;
      while ( 1 )
      {
        v48 = *a1 ? v47 | 1 : v47;
        if ( !v48 || !sub_B3E30(a1, a2, a3, a4, 48) )
          return 0;
        if ( !--v34 )
        {
          v21 = v100;
          goto LABEL_178;
        }
      }
    }
  }
  else if ( v34 > 0 )
  {
    v50 = (int)a2;
    if ( a2 )
      v50 = 1;
    v51 = a2 == 0;
    if ( !a2 )
      v51 = *a1 == 0;
    if ( v51 )
      return 0;
    v52 = *a3;
    v53 = *a4;
    if ( *a4 < *a3 )
      return 0;
    if ( v52 == v53 )
      v54 = v50 & 1;
    else
      v54 = 0;
    if ( v54 )
      goto LABEL_146;
LABEL_133:
    if ( v52 >= v53 )
      goto LABEL_136;
    v55 = *a1;
    if ( !*a1 )
LABEL_155:
      v55 = (_BYTE *)*a2;
    *a3 = v52 + 1;
    v55[v52] = 32;
LABEL_136:
    while ( --v34 )
    {
      if ( *a1 )
        v56 = v50 | 1;
      else
        v56 = v50;
      if ( !v56 )
        return 0;
      v52 = *a3;
      v53 = *a4;
      if ( *a3 > *a4 )
        return 0;
      if ( v52 == v53 )
        v57 = v50 & 1;
      else
        v57 = 0;
      if ( !v57 )
        goto LABEL_133;
LABEL_146:
      if ( v53 > 0x7FFFFBFF )
        return 0;
      v58 = *a2;
      v59 = v53 + 1024;
      *a4 = v59;
      if ( v58 )
      {
        v60 = CRYPTO_realloc(v58, v59, "crypto/bio/b_print.c", 838);
        if ( !v60 )
          return 0;
        v52 = *a3;
        v53 = *a4;
        *a2 = v60;
        goto LABEL_133;
      }
      v61 = (void *)CRYPTO_malloc(v59, "crypto/bio/b_print.c", 826);
      *a2 = (int)v61;
      if ( !v61 )
      {
        sub_D0048(32, 150, 65, "crypto/bio/b_print.c", 827);
        return 0;
      }
      v52 = *a3;
      if ( *a3 )
      {
        if ( !*a1 )
          return 0;
        memcpy(v61, *a1, v52);
        v52 = *a3;
      }
      v62 = *a4;
      *a1 = 0;
      if ( v62 > v52 )
        goto LABEL_155;
    }
  }
  if ( v98 )
  {
    v35 = a2 == 0;
    if ( !a2 )
      v35 = *a1 == 0;
    if ( v35 || !sub_B3E30(a1, a2, a3, a4, v98) )
      return 0;
  }
LABEL_67:
  if ( v21 )
  {
    v36 = (int)a2;
    if ( a2 )
      v36 = 1;
    v103 = v9;
    v37 = &v104[v21];
    v99 = v34;
    v38 = v36;
    while ( 1 )
    {
      v40 = *--v37;
      v39 = v40;
      v41 = *a1 ? v38 | 1 : v38;
      if ( !v41 || !sub_B3E30(a1, a2, a3, a4, v39) )
        return 0;
      if ( v37 == v104 )
      {
        v34 = v99;
        v9 = v103;
        break;
      }
    }
  }
  if ( v9 || (a7 & 8) != 0 )
  {
    v70 = (int)a2;
    if ( a2 )
      v70 = 1;
    v71 = a2 == 0;
    if ( !a2 )
      v71 = *a1 == 0;
    v72 = v70;
    if ( v71 || !sub_B3E30(a1, a2, a3, a4, 46) )
      return 0;
    if ( v26 )
    {
      v73 = &v105[v26];
      v101 = v34;
      v74 = v72;
      while ( 1 )
      {
        v76 = *--v73;
        v75 = v76;
        v77 = *a1 ? v74 | 1 : v74;
        if ( !v77 || !sub_B3E30(a1, a2, a3, a4, v75) )
          return 0;
        if ( v73 == v105 )
        {
          v34 = v101;
          break;
        }
      }
    }
  }
  v79 = (v9 - v26) & ~((v9 - v26) >> 31);
  if ( v79 )
  {
    v80 = (int)a2;
    if ( a2 )
      v80 = 1;
    do
    {
      v81 = *a1 ? v80 | 1 : v80;
      if ( !v81 || !sub_B3E30(a1, a2, a3, a4, 48) )
        return 0;
    }
    while ( --v79 );
  }
  if ( !v94 )
    goto LABEL_234;
  if ( (a7 & 0x20) != 0 )
    v84 = 69;
  else
    v84 = 101;
  v85 = (int)a2;
  if ( a2 )
    v85 = 1;
  v86 = a2 == 0;
  if ( !a2 )
    v86 = *a1 == 0;
  if ( v86 || !sub_B3E30(a1, a2, a3, a4, v84) )
    return 0;
  if ( *a1 )
    v87 = v85 | 1;
  else
    v87 = v85;
  if ( v11 >= 0 )
  {
    v88 = 43;
    if ( v87 )
      goto LABEL_259;
    return 0;
  }
  v88 = 45;
  if ( !v87 )
    return 0;
LABEL_259:
  if ( !sub_B3E30(a1, a2, a3, a4, v88) )
    return 0;
  v89 = &v106[v31];
  if ( v31 )
  {
    do
    {
      v90 = *a1 ? v85 | 1 : v85;
      v92 = *--v89;
      v91 = v92;
      if ( !v90 || !sub_B3E30(a1, a2, a3, a4, v91) )
        return 0;
    }
    while ( v89 != v106 );
  }
LABEL_234:
  if ( v34 )
  {
    v82 = (int)a2;
    if ( a2 )
      v82 = 1;
    while ( 1 )
    {
      v83 = *a1 ? v82 | 1 : v82;
      if ( !v83 || !sub_B3E30(a1, a2, a3, a4, 32) )
        break;
      if ( !++v34 )
        return 1;
    }
    return 0;
  }
  return 1;
}
