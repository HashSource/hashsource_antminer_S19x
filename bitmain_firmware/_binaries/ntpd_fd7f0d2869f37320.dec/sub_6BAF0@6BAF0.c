int __fastcall sub_6BAF0(double a1, unsigned int a2, int a3, int a4, unsigned int a5, _DWORD *a6)
{
  double v6; // d0
  double v7; // kr00_8
  int v9; // r4
  char v10; // r3
  const char *v11; // r2
  int v12; // t1
  int v13; // r3
  double v14; // d11
  int v15; // r10
  signed int v16; // r8
  double v17; // d8
  int v18; // r5
  double v19; // d16
  double v20; // d17
  signed int v21; // r2
  __int64 v22; // r10
  double v23; // d16
  int v24; // r3
  double v25; // d9
  double v26; // d9
  unsigned __int64 v27; // r6
  double v28; // d16
  _BOOL4 v29; // r3
  _BOOL4 v30; // r3
  int v31; // r3
  __int64 v32; // r6
  int v33; // r10
  bool v34; // zf
  unsigned int *v35; // r5
  unsigned int v36; // r11
  int v37; // r10
  char *v38; // r8
  int v39; // r2
  int v41; // r7
  _BYTE *v42; // r8
  int v43; // r6
  unsigned int *v44; // r10
  double v45; // r4
  int v46; // r2
  int v48; // lr
  int v49; // r8
  int v50; // r12
  int v51; // r1
  int v52; // r2
  int v53; // r3
  unsigned int v54; // r2
  bool v55; // cc
  unsigned int v56; // r2
  bool v57; // r4
  unsigned int v58; // r12
  unsigned int v59; // r2
  char v60; // r10
  char *v61; // r3
  int v62; // t1
  __int64 v63; // d8
  int v64; // r2
  __int64 v65; // r0
  int v66; // r2
  char v67; // r3
  signed int v68; // r2
  unsigned int v69; // r2
  unsigned int v70; // r2
  bool v71; // cc
  int v72; // r2
  bool v73; // cc
  int v74; // r2
  bool v75; // cc
  unsigned int v76; // r2
  bool v77; // cc
  unsigned int v78; // r2
  bool v79; // cc
  double v80; // d8
  unsigned __int64 v82; // [sp+10h] [bp-9Ch]
  int v83; // [sp+1Ch] [bp-90h]
  int v85; // [sp+28h] [bp-84h]
  int v86; // [sp+2Ch] [bp-80h]
  int v87; // [sp+2Ch] [bp-80h]
  unsigned __int64 v88; // [sp+30h] [bp-7Ch]
  int v89; // [sp+30h] [bp-7Ch]
  int v90; // [sp+38h] [bp-74h]
  unsigned int *v91; // [sp+3Ch] [bp-70h]
  int v92; // [sp+3Ch] [bp-70h]
  unsigned int v93; // [sp+40h] [bp-6Ch]
  int v94; // [sp+40h] [bp-6Ch]
  int v95; // [sp+44h] [bp-68h]
  char v96; // [sp+48h] [bp-64h] BYREF
  char v97; // [sp+49h] [bp-63h]
  char v98; // [sp+4Ah] [bp-62h]
  char v99; // [sp+4Bh] [bp-61h]
  char v100[43]; // [sp+4Ch] [bp-60h] BYREF
  char v101; // [sp+77h] [bp-35h] BYREF
  _BYTE v102[44]; // [sp+78h] [bp-34h] BYREF

  v7 = a1;
  LODWORD(a1) = &GLOBAL_OFFSET_TABLE_;
  v9 = a4;
  if ( a4 == -1 )
    v9 = 6;
  if ( v6 < 0.0 )
  {
    v83 = 45;
  }
  else
  {
    if ( (a5 & 2) != 0 )
    {
      v83 = 43;
    }
    else
    {
      if ( (a5 & 4) != 0 )
        v13 = 32;
      else
        v13 = 0;
      v83 = v13;
    }
    if ( v6 == 0.0 )
      goto LABEL_23;
  }
  if ( v6 + v6 == v6 )
  {
    if ( (a5 & 0x40) != 0 )
      v11 = "INF";
    else
      v11 = "inf";
    if ( v83 )
    {
      LODWORD(a1) = 1;
      v100[0] = v83;
    }
    else
    {
      LODWORD(a1) = 0;
    }
    v10 = *v11;
    if ( !*v11 )
      return sub_6B490(SLODWORD(v7), (unsigned int *)HIDWORD(a1), a2, v100, a3, SLODWORD(a1), a5);
    HIDWORD(a1) = &v100[LODWORD(a1) - 1];
    do
    {
      *(_BYTE *)++HIDWORD(a1) = v10;
      ++LODWORD(a1);
      v12 = *(unsigned __int8 *)++v11;
      v10 = v12;
    }
    while ( v12 );
    LODWORD(a1) = sub_6B490(SLODWORD(v7), (unsigned int *)HIDWORD(v7), a2, v100, a3, SLODWORD(a1), a5);
    return LODWORD(a1);
  }
LABEL_23:
  if ( (a5 & 0x300) != 0 )
  {
    if ( (a5 & 0x100) != 0 )
    {
      --v9;
      v86 = (a5 & 8) == 0;
    }
    else
    {
      v86 = a5 & 0x100;
    }
    v14 = -v6;
    if ( v6 >= 0.0 )
      v19 = v6;
    else
      v19 = -v6;
    if ( v19 >= 1.0 || v19 <= 0.0 )
    {
      v16 = 0;
LABEL_229:
      if ( v19 < 10.0 )
        goto LABEL_54;
      ++v16;
      v20 = v19;
    }
    else
    {
      v16 = -1;
      while ( 1 )
      {
        v19 = v19 * 10.0;
        if ( v19 >= 1.0 || v19 <= 0.0 )
          break;
        if ( --v16 == -99 )
          goto LABEL_229;
      }
      v20 = v19;
      if ( v19 < 10.0 )
        goto LABEL_54;
      ++v16;
    }
    do
    {
      v20 = v20 / 10.0;
      if ( v20 < 10.0 )
        break;
      ++v16;
    }
    while ( v16 <= 98 );
LABEL_54:
    v15 = 1;
    if ( v6 >= 0.0 )
      v14 = v6;
    if ( v9 >= 19 )
      v9 = 19;
    if ( v16 > 0 )
    {
      v17 = 1.0;
      v21 = v16;
      do
      {
        --v21;
        v17 = v17 * 10.0;
      }
      while ( v21 );
      goto LABEL_32;
    }
    if ( v16 )
    {
      v17 = 1.0;
      v68 = v16;
      do
      {
        ++v68;
        v17 = v17 / 10.0;
      }
      while ( v68 );
      goto LABEL_32;
    }
LABEL_31:
    v17 = 1.0;
LABEL_32:
    v80 = v14 / v17;
    goto LABEL_33;
  }
  v14 = -v6;
  if ( v6 >= 0.0 )
    v14 = v6;
  if ( v9 >= 19 )
    v9 = 19;
  v15 = a5 & 0x200;
  if ( (a5 & 0x200) != 0 )
  {
    v16 = a5 & 0x300;
    v86 = v16;
    goto LABEL_31;
  }
  v80 = v14;
  v86 = a5 & 0x200;
  v16 = v86;
LABEL_33:
  v91 = (unsigned int *)HIDWORD(a1);
  v18 = v15;
  v93 = a2;
  while ( 1 )
  {
    if ( v80 >= 1.84467441e19 )
      goto LABEL_35;
    v22 = sub_8D558(LODWORD(v80), HIDWORD(v80));
    a1 = COERCE_DOUBLE(sub_8D40C(v22, HIDWORD(v22)));
    if ( v80 < a1 )
      --v22;
    if ( v22 == -1 )
    {
LABEL_35:
      *a6 = 1;
      return LODWORD(a1);
    }
    if ( v9 <= 0 )
    {
      v23 = 1.0;
      if ( v9 )
      {
        v31 = v9;
        do
        {
          ++v31;
          v23 = v23 / 10.0;
        }
        while ( v31 );
      }
    }
    else
    {
      v23 = 1.0;
      v24 = v9;
      do
      {
        --v24;
        v23 = v23 * 10.0;
      }
      while ( v24 );
    }
    v82 = sub_8D558(LODWORD(v23), HIDWORD(v23));
    v25 = COERCE_DOUBLE(sub_8D40C(v82, HIDWORD(v82)));
    a1 = COERCE_DOUBLE(sub_8D40C(v22, HIDWORD(v22)));
    v26 = v25 * (v80 - a1);
    if ( v26 >= 1.84467441e19 )
    {
      if ( v26 - 1.84467441e19 < 0.5 )
      {
LABEL_74:
        ++v22;
        if ( v18 )
          v29 = v22 == 10;
        else
          v29 = 0;
        if ( v29 )
        {
          ++v16;
          v27 = 0;
          v22 = 1;
        }
        else
        {
          v27 = 0;
        }
        goto LABEL_80;
      }
      v27 = 0;
    }
    else
    {
      v27 = sub_8D558(LODWORD(v26), HIDWORD(v26));
      a1 = COERCE_DOUBLE(sub_8D40C(v27, HIDWORD(v27)));
      v28 = a1;
      if ( v26 < a1 )
      {
        --v27;
        a1 = COERCE_DOUBLE(sub_8D40C(v27, HIDWORD(v27)));
        v28 = a1;
      }
      if ( v26 - v28 >= 0.5 )
        ++v27;
    }
    if ( v82 <= v27 )
      goto LABEL_74;
LABEL_80:
    if ( (a5 & 0x100) == 0 )
      break;
    v30 = v16 <= v9;
    if ( !v18 )
      v30 = 0;
    if ( !v30 )
      break;
    if ( v16 < -4 )
    {
      v88 = v27;
      v32 = v22;
      v35 = v91;
      v36 = v93;
      goto LABEL_160;
    }
    v9 -= v16;
    v18 = 0;
    v80 = v14;
    if ( v9 >= 19 )
      v9 = 19;
  }
  v88 = v27;
  v32 = v22;
  v33 = v18;
  v34 = v18 == 0;
  v35 = v91;
  v36 = v93;
  if ( v34 )
  {
    v90 = v33;
    v85 = v9;
    goto LABEL_98;
  }
  if ( v16 >= 0 )
  {
    v60 = 43;
    goto LABEL_161;
  }
LABEL_160:
  v16 = -v16;
  v60 = 45;
LABEL_161:
  v63 = vshrd_n_s64(vdup_n_s32(v16).n64_i64[0], 0x20u);
  sub_8D518(v63, HIDWORD(v63), 10, 0);
  v96 = a0123456789abcd_2[v64];
  v65 = sub_8D518(v63, HIDWORD(v63), 10, 0);
  if ( v65 )
  {
    sub_8D518(v65, HIDWORD(v65), 10, 0);
    v97 = a0123456789abcd_2[v66];
  }
  else
  {
    v97 = 48;
  }
  v98 = v60;
  v85 = v9;
  v90 = 4;
  if ( (a5 & 0x40) != 0 )
    v67 = 69;
  else
    v67 = 101;
  v99 = v67;
LABEL_98:
  v37 = 0;
  v38 = v100;
  do
  {
    sub_8D518(v32, HIDWORD(v32), 10, 0);
    ++v37;
    *v38++ = a0123456789abcd_2[v39];
    v32 = sub_8D518(v32, HIDWORD(v32), 10, 0);
  }
  while ( (unsigned int)v37 <= 0x2A && v32 != 0 );
  LODWORD(a1) = v88;
  v41 = v37;
  if ( !v88 )
  {
    if ( !v86 )
    {
      v89 = 0;
      v48 = v9;
      v49 = 0;
      goto LABEL_111;
    }
    v89 = 0;
    goto LABEL_174;
  }
  v42 = v102;
  v92 = v37;
  v43 = 0;
  v94 = v37;
  v95 = v9;
  v44 = v35;
  v45 = *(double *)&v88;
  do
  {
    sub_8D518(LODWORD(v45), HIDWORD(v45), 10, 0);
    ++v43;
    *v42++ = a0123456789abcd_2[v46];
    a1 = COERCE_DOUBLE(sub_8D518(LODWORD(v45), HIDWORD(v45), 10, 0));
    v45 = a1;
  }
  while ( (unsigned int)v43 <= 0x2A && *(_QWORD *)&a1 != 0 );
  v35 = v44;
  v9 = v95;
  v41 = v94;
  v37 = v92;
  v48 = v95 - v43;
  v89 = v43;
  if ( !v86 )
  {
    v49 = 0;
    goto LABEL_111;
  }
  if ( v43 <= 0 )
  {
LABEL_174:
    v49 = v9;
    v48 = 0;
    v85 = 0;
    goto LABEL_175;
  }
  v49 = 0;
  v61 = &v101;
  while ( 1 )
  {
    v62 = (unsigned __int8)*++v61;
    if ( v62 != 48 )
      break;
    if ( ++v49 == v43 )
    {
      v85 = v95 - v43;
      goto LABEL_111;
    }
  }
  v85 = v95 - v49;
LABEL_111:
  if ( v85 > 0 )
  {
    v87 = 1;
    goto LABEL_114;
  }
LABEL_175:
  v87 = (a5 >> 3) & 1;
LABEL_114:
  v50 = a5 & 0x20;
  if ( (a5 & 0x20) != 0 )
  {
    LODWORD(a1) = 1431655766 * v37;
    if ( v37 == 3 * (v37 / 3) )
      v51 = v37 - 1;
    else
      v51 = v37;
    v50 = v51 / 3;
  }
  v52 = v83;
  if ( v83 )
    v52 = 1;
  v53 = (a3 - v37 - v90 - v85 - v50 - v87 - v52) & ~((a3 - v37 - v90 - v85 - v50 - v87 - v52) >> 31);
  if ( (a5 & 1) != 0 )
  {
    v53 = -v53;
  }
  else if ( (a5 & 0x10) != 0 )
  {
    if ( v53 )
    {
      if ( v52 )
      {
        v54 = *v35 + 1;
        if ( v54 < v36 )
        {
          *(_BYTE *)(LODWORD(v7) + *(_DWORD *)HIDWORD(v7)) = v83;
          v54 = *(_DWORD *)HIDWORD(v7) + 1;
        }
        *v35 = v54;
      }
      else
      {
        v54 = *v35;
      }
      LODWORD(a1) = 48;
      do
      {
        v55 = v36 > v54 + 1;
        if ( v36 <= v54 + 1 )
        {
          ++v54;
        }
        else
        {
          *(_BYTE *)(LODWORD(v7) + v54) = 48;
          v54 = *(_DWORD *)HIDWORD(v7);
        }
        if ( v55 )
          ++v54;
        --v53;
        *v35 = v54;
      }
      while ( v53 );
      v83 = 0;
    }
    v53 = 0;
  }
  else if ( v53 > 0 )
  {
    v78 = *v35;
    LODWORD(a1) = 32;
    do
    {
      v79 = v36 > v78 + 1;
      if ( v36 <= v78 + 1 )
      {
        ++v78;
      }
      else
      {
        *(_BYTE *)(LODWORD(v7) + v78) = 32;
        v78 = *(_DWORD *)HIDWORD(v7);
      }
      if ( v79 )
        ++v78;
      --v53;
      *v35 = v78;
    }
    while ( v53 );
  }
  if ( v83 )
  {
    v56 = *v35 + 1;
    if ( v36 > v56 )
    {
      *(_BYTE *)(LODWORD(v7) + *(_DWORD *)HIDWORD(v7)) = v83;
      v56 = *(_DWORD *)HIDWORD(v7) + 1;
    }
    *v35 = v56;
  }
  if ( v37 > 0 )
  {
    v57 = v50 > 0;
    do
    {
      while ( 1 )
      {
        v58 = *v35;
        --v41;
        v59 = *v35 + 1;
        if ( v36 > v59 )
        {
          *(_BYTE *)(LODWORD(v7) + v58) = v100[v41];
          v58 = *(_DWORD *)HIDWORD(v7);
          v59 = *(_DWORD *)HIDWORD(v7) + 1;
        }
        *v35 = v59;
        if ( v41 <= 0 || !v57 )
          break;
        LODWORD(a1) = 1431655766 * v41;
        if ( v41 == 3 * (v41 / 3) )
        {
          if ( v36 > v58 + 2 )
          {
            *(_BYTE *)(LODWORD(v7) + v59) = 44;
            v59 = *(_DWORD *)HIDWORD(v7);
          }
          *v35 = v59 + 1;
        }
      }
    }
    while ( v41 > 0 );
  }
  if ( v87 )
  {
    v69 = *v35 + 1;
    if ( v36 > v69 )
    {
      *(_BYTE *)(LODWORD(v7) + *(_DWORD *)HIDWORD(v7)) = 46;
      v69 = *(_DWORD *)HIDWORD(v7) + 1;
    }
    *v35 = v69;
  }
  if ( v48 > 0 )
  {
    v70 = *v35;
    LODWORD(a1) = 48;
    do
    {
      v71 = v36 > v70 + 1;
      if ( v36 <= v70 + 1 )
      {
        ++v70;
      }
      else
      {
        *(_BYTE *)(LODWORD(v7) + v70) = 48;
        v70 = *(_DWORD *)HIDWORD(v7);
      }
      if ( v71 )
        ++v70;
      --v48;
      *v35 = v70;
    }
    while ( v48 );
  }
  if ( v49 < v89 )
  {
    v72 = *v35;
    HIDWORD(a1) = &v102[v89 - 1];
    do
    {
      LODWORD(a1) = v72 + 1;
      --HIDWORD(a1);
      v73 = v36 > v72 + 1;
      if ( v36 <= v72 + 1 )
        ++v72;
      else
        LODWORD(a1) = *(unsigned __int8 *)(HIDWORD(a1) + 1);
      if ( v73 )
      {
        *(_BYTE *)(LODWORD(v7) + v72) = LOBYTE(a1);
        v72 = *(_DWORD *)HIDWORD(v7) + 1;
      }
      *v35 = v72;
    }
    while ( (_BYTE *)HIDWORD(a1) != &v102[v49 - 1] );
  }
  if ( v90 )
  {
    v74 = *v35;
    HIDWORD(a1) = v90;
    do
    {
      LODWORD(a1) = v74 + 1;
      --HIDWORD(a1);
      v75 = v36 > v74 + 1;
      if ( v36 <= v74 + 1 )
        ++v74;
      else
        LODWORD(a1) = &v96;
      if ( v75 )
      {
        LODWORD(a1) = *(unsigned __int8 *)(HIDWORD(a1) + LODWORD(a1));
        *(_BYTE *)(LODWORD(v7) + v74) = LOBYTE(a1);
        v74 = *(_DWORD *)HIDWORD(v7) + 1;
      }
      *v35 = v74;
    }
    while ( HIDWORD(a1) );
  }
  if ( v53 )
  {
    v76 = *v35;
    LODWORD(a1) = 32;
    do
    {
      v77 = v36 > v76 + 1;
      if ( v36 <= v76 + 1 )
      {
        ++v76;
      }
      else
      {
        *(_BYTE *)(LODWORD(v7) + v76) = 32;
        v76 = *(_DWORD *)HIDWORD(v7);
      }
      if ( v77 )
        ++v76;
      ++v53;
      *v35 = v76;
    }
    while ( v53 );
  }
  return LODWORD(a1);
}
