int __fastcall sub_E0C0(double a1, unsigned int a2, int a3, int a4, unsigned int a5, _DWORD *a6)
{
  double v6; // d0
  int *v7; // r8
  int v8; // r10
  double v9; // d9
  double v10; // d7
  int i; // r6
  int v12; // r9
  int v13; // r3
  double v14; // d7
  int v15; // r7
  double v16; // d8
  __int64 v17; // r4
  int v18; // r3
  double v19; // d7
  unsigned __int64 v20; // r10
  double v21; // d8
  double v22; // d8
  double v23; // d7
  unsigned __int64 v24; // r2
  _BOOL4 v25; // r1
  int v26; // r3
  const char *v27; // r1
  int v28; // r0
  const char *v29; // r3
  _BYTE *v30; // r2
  int v31; // t1
  bool v32; // zf
  _BOOL4 v33; // r3
  _BYTE *v34; // r6
  int v35; // r11
  int v36; // r2
  __int64 v37; // r0
  int v38; // r3
  int v39; // r4
  int v40; // r2
  __int64 v41; // r0
  int v42; // r10
  int v43; // r6
  int v44; // r6
  int v45; // r12
  int v46; // r1
  int v47; // r12
  bool v48; // cc
  bool v49; // cf
  bool v50; // cf
  bool v51; // r6
  int v52; // r5
  _BOOL4 v53; // r3
  bool v54; // cf
  int v55; // r2
  char v56; // r1
  bool v57; // cf
  int v58; // r3
  char v59; // r2
  bool v60; // cf
  int v61; // r3
  bool v62; // cf
  unsigned __int8 *v63; // r10
  unsigned __int64 v64; // r4
  _BYTE *v65; // r6
  unsigned int v66; // r7
  int v67; // r2
  int v68; // r3
  int v69; // r5
  int v70; // t1
  char v71; // r3
  int v72; // r7
  int v73; // r10
  unsigned int v74; // r11
  int v75; // r2
  __int64 v76; // r0
  _BOOL4 v77; // r3
  char v78; // r3
  int v79; // r3
  int v82; // [sp+1Ch] [bp-98h]
  const char *v83; // [sp+20h] [bp-94h]
  __int64 v84; // [sp+20h] [bp-94h]
  __int64 v85; // [sp+20h] [bp-94h]
  char v86; // [sp+20h] [bp-94h]
  int v88; // [sp+30h] [bp-84h]
  int v89; // [sp+38h] [bp-7Ch]
  int v90; // [sp+3Ch] [bp-78h]
  unsigned __int64 v91; // [sp+40h] [bp-74h]
  int v92; // [sp+4Ch] [bp-68h]
  _BYTE v93[4]; // [sp+50h] [bp-64h] BYREF
  _BYTE v94[44]; // [sp+54h] [bp-60h] BYREF
  _BYTE v95[44]; // [sp+80h] [bp-34h] BYREF

  v7 = (int *)HIDWORD(a1);
  v82 = LODWORD(a1);
  LODWORD(a1) = 768;
  v8 = a4;
  if ( a4 == -1 )
    v8 = 6;
  if ( v6 < 0.0 )
  {
    v89 = 45;
  }
  else
  {
    if ( (a5 & 2) != 0 )
    {
      v89 = 43;
    }
    else
    {
      v26 = a5 & 4;
      if ( (a5 & 4) != 0 )
        v26 = 32;
      v89 = v26;
    }
    if ( v6 == 0.0 )
      goto LABEL_7;
  }
  if ( v6 + v6 == v6 )
  {
    if ( (a5 & 0x40) != 0 )
      v27 = "INF";
    else
      v27 = "inf";
    v28 = v89;
    v29 = (const char *)*(unsigned __int8 *)v27;
    if ( !v89 )
      goto LABEL_67;
    v32 = v29 == 0;
    if ( !*v27 )
      v29 = v94;
    v28 = 1;
    if ( v32 )
      v83 = v29;
    v94[0] = v89;
    if ( !v32 )
    {
LABEL_67:
      v30 = &v94[v28 - 1];
      v83 = v94;
      do
      {
        *++v30 = (_BYTE)v29;
        ++v28;
        v31 = *(unsigned __int8 *)++v27;
        LOBYTE(v29) = v31;
      }
      while ( v31 );
    }
    LODWORD(a1) = sub_DAC0(v82, v7, a2, v83, a3, v28, a5);
    return LODWORD(a1);
  }
LABEL_7:
  v9 = -v6;
  if ( (a5 & 0x300) == 0 )
  {
    if ( v6 >= 0.0 )
      v9 = v6;
    if ( v8 >= 19 )
      v12 = 19;
    else
      v12 = v8;
    v15 = a5 & 0x200;
    if ( (a5 & 0x200) == 0 )
    {
      v90 = 0;
      i = 0;
      v16 = v9;
      goto LABEL_35;
    }
    v90 = a5 & 0x300;
    i = v90;
    v14 = 1.0;
    goto LABEL_34;
  }
  v90 = a5 & 0x100;
  if ( (a5 & 0x100) != 0 )
  {
    --v8;
    v90 = (a5 & 8) == 0;
  }
  if ( v6 >= 0.0 )
    v10 = v6;
  else
    v10 = -v6;
  if ( v10 >= 1.0 || v10 <= 0.0 )
  {
    i = 0;
  }
  else
  {
    for ( i = -1; i != -99; --i )
    {
      v10 = v10 * 10.0;
      if ( v10 >= 1.0 )
        break;
      if ( v10 <= 0.0 )
        break;
    }
  }
  if ( v10 < 10.0 )
  {
    if ( v6 >= 0.0 )
      v9 = v6;
    if ( v8 >= 19 )
      v12 = 19;
    else
      v12 = v8;
  }
  else
  {
    ++i;
    do
    {
      v10 = v10 / 10.0;
      if ( v10 < 10.0 )
        break;
      ++i;
    }
    while ( i <= 98 );
    if ( v6 >= 0.0 )
      v9 = v6;
    if ( v8 >= 19 )
      v12 = 19;
    else
      v12 = v8;
    if ( i > 0 )
    {
      v13 = i;
      v14 = 1.0;
      do
      {
        --v13;
        v14 = v14 * 10.0;
      }
      while ( v13 );
      goto LABEL_33;
    }
  }
  if ( !i )
  {
    v15 = 1;
    v14 = 1.0;
    goto LABEL_34;
  }
  v79 = i;
  v14 = 1.0;
  do
  {
    ++v79;
    v14 = v14 / 10.0;
  }
  while ( v79 );
LABEL_33:
  v15 = 1;
LABEL_34:
  v16 = v9 / v14;
  while ( 1 )
  {
LABEL_35:
    if ( v16 >= 1.84467441e19 )
      goto LABEL_94;
    v17 = sub_1C428(LODWORD(v16), HIDWORD(v16));
    a1 = sub_1C2DC(v17, HIDWORD(v17));
    if ( v16 < a1 )
      --v17;
    if ( v17 == -1 )
    {
LABEL_94:
      *a6 = 1;
      return LODWORD(a1);
    }
    v18 = v12;
    v19 = 1.0;
    if ( v8 > 0 )
    {
      do
      {
        --v18;
        v19 = v19 * 10.0;
      }
      while ( v18 );
      if ( v12 < 1 )
        v18 = v12 - 1;
      else
        v18 = 0;
    }
    for ( ; v18; v19 = v19 / 10.0 )
      ++v18;
    v20 = sub_1C428(LODWORD(v19), HIDWORD(v19));
    v21 = v16 - sub_1C2DC(v17, HIDWORD(v17));
    a1 = sub_1C2DC(v20, HIDWORD(v20));
    v22 = v21 * a1;
    if ( v22 < 1.84467441e19 )
    {
      v84 = sub_1C428(LODWORD(v22), HIDWORD(v22));
      a1 = sub_1C2DC(v84, HIDWORD(v84));
      v23 = a1;
      v24 = v84;
      if ( v22 < a1 )
      {
        v85 = v84 - 1;
        a1 = sub_1C2DC(v85, HIDWORD(v85));
        v24 = v85;
        v23 = a1;
      }
      if ( v22 - v23 >= 0.5 )
        ++v24;
LABEL_51:
      if ( v20 > v24 )
        goto LABEL_52;
      goto LABEL_80;
    }
    if ( v22 - 1.84467441e19 >= 0.5 )
    {
      v24 = 0;
      goto LABEL_51;
    }
LABEL_80:
    v33 = ++v17 == 10;
    if ( !v15 )
      v33 = 0;
    if ( v33 )
    {
      ++i;
      v24 = 0;
      v17 = 1;
    }
    else
    {
      v24 = 0;
    }
LABEL_52:
    if ( (a5 & 0x100) == 0 )
      break;
    v25 = i <= v12;
    if ( !v15 )
      v25 = 0;
    if ( !v25 )
      break;
    if ( i < -4 )
    {
      v91 = v24;
      goto LABEL_211;
    }
    v8 = v12 - i;
    v16 = v9;
    v15 = 0;
    if ( v12 - i >= 19 )
      v12 = 19;
    else
      v12 -= i;
  }
  v91 = v24;
  if ( !v15 )
    goto LABEL_96;
LABEL_211:
  if ( i >= 0 )
    v71 = 43;
  else
    v71 = 45;
  v86 = v71;
  if ( i < 0 )
    i = -i;
  v72 = i >> 31;
  v73 = 0;
  do
  {
    v74 = v73 + 1;
    sub_1C3E8(i, v72, 10, 0);
    v93[v73] = a0123456789abcd_1[v75];
    v73 = 1;
    v76 = sub_1C3E8(i, v72, 10, 0);
    v77 = v74 <= 1;
    i = v76;
    if ( !v76 )
      v77 = 0;
    v72 = HIDWORD(v76);
  }
  while ( v77 );
  if ( v74 == 1 )
    v93[1] = 48;
  v15 = 4;
  v93[2] = v86;
  if ( (a5 & 0x40) != 0 )
    v78 = 69;
  else
    v78 = 101;
  v93[3] = v78;
LABEL_96:
  v34 = v94;
  v35 = 0;
  do
  {
    sub_1C3E8(v17, HIDWORD(v17), 10, 0);
    ++v35;
    *v34++ = a0123456789abcd_1[v36];
    LODWORD(v37) = sub_1C3E8(v17, HIDWORD(v17), 10, 0);
    v38 = (unsigned int)v35 <= 0x2A;
    LODWORD(v17) = v37;
    if ( !v37 )
      v38 = 0;
    HIDWORD(v17) = HIDWORD(v37);
  }
  while ( v38 );
  v39 = v35;
  if ( v91 )
  {
    v63 = v95;
    v64 = v91;
    v65 = v95;
    v88 = v15;
    v66 = 0;
    v92 = v35;
    do
    {
      sub_1C3E8(v64, HIDWORD(v64), 10, 0);
      ++v66;
      *v65++ = a0123456789abcd_1[v67];
      v41 = sub_1C3E8(v64, HIDWORD(v64), 10, 0);
      v68 = v41 | HIDWORD(v41);
      HIDWORD(v64) = HIDWORD(v41);
      HIDWORD(v41) = v66 <= 0x2A;
      if ( !v68 )
        HIDWORD(v41) = 0;
      LODWORD(v64) = v41;
    }
    while ( HIDWORD(v41) );
    v69 = v66;
    v39 = v92;
    v15 = v88;
    v38 = v69;
    v40 = v12 - v69;
    if ( v90 )
    {
      if ( v69 <= 0 )
      {
        v40 = 0;
        goto LABEL_104;
      }
      do
      {
        v70 = *v63++;
        if ( v70 != 48 )
        {
          v12 -= HIDWORD(v41);
          v90 = HIDWORD(v41);
          goto LABEL_197;
        }
        ++HIDWORD(v41);
      }
      while ( HIDWORD(v41) != v69 );
      v90 = HIDWORD(v41);
      v12 -= HIDWORD(v41);
      v38 = HIDWORD(v41);
    }
LABEL_197:
    if ( v12 <= 0 )
    {
      HIDWORD(v41) = v12;
      v12 = v90;
      goto LABEL_104;
    }
    v42 = 1;
  }
  else
  {
    if ( !v90 )
    {
      v38 = 0;
      v40 = v12;
      goto LABEL_197;
    }
    v40 = 0;
    HIDWORD(v41) = 0;
LABEL_104:
    v90 = v12;
    v12 = HIDWORD(v41);
    v42 = (a5 >> 3) & 1;
  }
  v43 = a5 & 0x20;
  if ( (a5 & 0x20) != 0 )
  {
    if ( v35 == 3 * (v35 / 3) )
      v44 = v35 - 1;
    else
      v44 = v35;
    v43 = v44 / 3;
  }
  v45 = a5 & 1;
  LODWORD(a1) = a3 - v35 - v15 - v12 - v43 - v42;
  if ( v89 )
    --LODWORD(a1);
  if ( SLODWORD(a1) < 0 )
  {
    v45 = 0;
    goto LABEL_141;
  }
  if ( (a5 & 1) != 0 )
  {
    v45 = -LODWORD(a1);
    goto LABEL_141;
  }
  if ( (a5 & 0x10) != 0 )
  {
    if ( !LODWORD(a1) )
      goto LABEL_141;
    v46 = *v7;
    if ( v89 )
    {
      v47 = v46 + 1;
      v48 = a2 > v46 + 1;
      if ( a2 <= v46 + 1 )
        ++v46;
      else
        v47 = v82;
      if ( v48 )
      {
        *(_BYTE *)(v47 + v46) = v89;
        v46 = *v7 + 1;
      }
      *v7 = v46;
    }
    v45 = LODWORD(a1);
    LODWORD(a1) = a2;
    do
    {
      v49 = v46 + 1 >= a2;
      if ( v46 + 1 >= a2 )
        ++v46;
      else
        *(_BYTE *)(v82 + v46) = 48;
      if ( !v49 )
        v46 = *v7 + 1;
      --v45;
      *v7 = v46;
    }
    while ( v45 );
  }
  else
  {
    if ( LODWORD(a1) )
    {
      v45 = LODWORD(a1);
      HIDWORD(a1) = *v7;
      LODWORD(a1) = a2;
      do
      {
        v50 = HIDWORD(a1) + 1 >= a2;
        if ( HIDWORD(a1) + 1 >= a2 )
          ++HIDWORD(a1);
        else
          *(_BYTE *)(v82 + HIDWORD(a1)) = 32;
        if ( !v50 )
          HIDWORD(a1) = *v7 + 1;
        --v45;
        *v7 = HIDWORD(a1);
      }
      while ( v45 );
    }
LABEL_141:
    if ( v89 )
    {
      LODWORD(a1) = *v7;
      HIDWORD(a1) = *v7 + 1;
      if ( HIDWORD(a1) < a2 )
      {
        *(_BYTE *)(v82 + LODWORD(a1)) = v89;
        HIDWORD(a1) = *v7 + 1;
      }
      *v7 = HIDWORD(a1);
    }
  }
  if ( v35 > 0 )
  {
    v51 = v43 > 0;
    v52 = v38;
    do
    {
      while ( 1 )
      {
        LODWORD(a1) = *v7;
        --v39;
        HIDWORD(a1) = *v7 + 1;
        if ( HIDWORD(a1) < a2 )
        {
          *(_BYTE *)(v82 + LODWORD(a1)) = v94[v39];
          LODWORD(a1) = *v7;
          HIDWORD(a1) = *v7 + 1;
        }
        v53 = v39 > 0 && v51;
        *v7 = HIDWORD(a1);
        if ( !v53 )
          break;
        if ( v39 == 3 * (v39 / 3u) )
        {
          if ( a2 > LODWORD(a1) + 2 )
          {
            *(_BYTE *)(v82 + HIDWORD(a1)) = 44;
            HIDWORD(a1) = *v7;
          }
          *v7 = HIDWORD(a1) + 1;
        }
      }
    }
    while ( v39 );
    v38 = v52;
  }
  if ( v42 )
  {
    LODWORD(a1) = *v7;
    HIDWORD(a1) = *v7 + 1;
    if ( HIDWORD(a1) < a2 )
    {
      *(_BYTE *)(v82 + LODWORD(a1)) = 46;
      HIDWORD(a1) = *v7 + 1;
    }
    *v7 = HIDWORD(a1);
  }
  if ( v40 > 0 )
  {
    HIDWORD(a1) = *v7;
    do
    {
      LODWORD(a1) = HIDWORD(a1) + 1;
      v54 = HIDWORD(a1) + 1 >= a2;
      if ( HIDWORD(a1) + 1 >= a2 )
        ++HIDWORD(a1);
      else
        *(_BYTE *)(v82 + HIDWORD(a1)) = 48;
      if ( !v54 )
        HIDWORD(a1) = *v7 + 1;
      --v40;
      *v7 = HIDWORD(a1);
    }
    while ( v40 );
  }
  if ( v90 < v38 )
  {
    v55 = *v7;
    LODWORD(a1) = v95;
    do
    {
      v56 = v55 + 1;
      --v38;
      v57 = v55 + 1 >= a2;
      if ( v55 + 1 >= a2 )
        ++v55;
      else
        v56 = v95[v38];
      if ( !v57 )
      {
        *(_BYTE *)(v82 + v55) = v56;
        v55 = *v7 + 1;
      }
      *v7 = v55;
    }
    while ( v90 != v38 );
  }
  if ( v15 )
  {
    v58 = *v7;
    LODWORD(a1) = a2;
    do
    {
      v59 = v58 + 1;
      --v15;
      v60 = v58 + 1 >= a2;
      if ( v58 + 1 >= a2 )
        ++v58;
      else
        v59 = v93[v15];
      if ( !v60 )
      {
        *(_BYTE *)(v82 + v58) = v59;
        v58 = *v7 + 1;
      }
      *v7 = v58;
    }
    while ( v15 );
  }
  if ( v45 )
  {
    v61 = *v7;
    LODWORD(a1) = a2;
    do
    {
      v62 = v61 + 1 >= a2;
      if ( v61 + 1 >= a2 )
        ++v61;
      else
        *(_BYTE *)(v82 + v61) = 32;
      if ( !v62 )
        v61 = *v7 + 1;
      ++v45;
      *v7 = v61;
    }
    while ( v45 );
  }
  return LODWORD(a1);
}
