int __fastcall sub_DC5C(
        int a1,
        unsigned int *a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        int a6,
        int a7,
        int a8,
        unsigned int a9)
{
  const char *v12; // r9
  int v13; // r5
  unsigned __int64 v14; // r0
  char *v15; // r7
  int v16; // r2
  char v17; // r3
  _BOOL4 v18; // r2
  unsigned int v19; // r3
  int v20; // r10
  int v21; // r12
  int v22; // lr
  int v23; // r9
  int v24; // r7
  int v25; // r2
  int v26; // r3
  int v27; // lr
  int v28; // r7
  int v29; // r1
  int v30; // lr
  bool v31; // cf
  bool v32; // cf
  int v33; // r3
  unsigned int v34; // r1
  unsigned int v35; // r2
  int v36; // r3
  bool v37; // cf
  unsigned __int64 v38; // r2
  int v39; // r3
  unsigned int v41; // [sp+0h] [bp-64h]
  int v42; // [sp+0h] [bp-64h]
  int v43; // [sp+8h] [bp-5Ch]
  unsigned int v44; // [sp+Ch] [bp-58h]
  int v45; // [sp+18h] [bp-4Ch]
  int v46; // [sp+1Ch] [bp-48h]
  _BYTE v47[44]; // [sp+30h] [bp-34h] BYREF

  v43 = a7;
  if ( (a9 & 0x80) != 0 )
  {
    v41 = a5;
    v45 = 0;
    v46 = 0;
    v44 = HIDWORD(a5);
  }
  else
  {
    v38 = abs64(a5);
    v44 = HIDWORD(v38);
    v41 = v38;
    if ( a5 < 0 )
    {
      v45 = 1;
      v46 = 45;
    }
    else if ( (a9 & 2) != 0 )
    {
      v45 = 1;
      v46 = 43;
    }
    else
    {
      v39 = a9 & 4;
      v45 = v39;
      if ( (a9 & 4) != 0 )
      {
        v45 = 1;
        v39 = 32;
      }
      v46 = v39;
    }
  }
  if ( (a9 & 0x40) != 0 )
    v12 = "0123456789ABCDEF";
  else
    v12 = "0123456789abcdef";
  v13 = 0;
  v14 = __PAIR64__(v44, v41);
  v15 = v47;
  do
  {
    ++v13;
    LODWORD(v14) = sub_1C3E8(v14, HIDWORD(v14), a6, a6 >> 31);
    v17 = v12[v16];
    v18 = (unsigned int)v13 <= 0x2A;
    if ( !v14 )
      v18 = 0;
    *v15++ = v17;
  }
  while ( v18 );
  v19 = v41;
  v20 = a9 & 0x20;
  v42 = v13;
  v21 = ((v19 | v44) != 0) & (a9 >> 3);
  if ( !v21 )
    goto LABEL_10;
  if ( a6 == 8 )
  {
    v22 = a8;
    v21 = 0;
    if ( a8 > v13 )
      goto LABEL_11;
    v22 = v13 + 1;
    v23 = 1;
  }
  else
  {
    if ( a6 != 16 )
    {
      v21 = 0;
LABEL_10:
      v22 = a8;
LABEL_11:
      v23 = v22 - v13;
      goto LABEL_12;
    }
    v22 = a8;
    v23 = a8 - v13;
    if ( (a9 & 0x40) != 0 )
      v21 = 88;
    else
      v21 = 120;
  }
LABEL_12:
  if ( (a9 & 0x20) != 0 )
  {
    if ( v13 == 3 * (v13 / 3) )
      v24 = v13 - 1;
    else
      v24 = v13;
    LODWORD(v14) = 1431655766 * v24;
    v20 = v24 / 3;
    v23 -= v24 / 3;
    v43 = a7 - v24 / 3;
  }
  v25 = v23 & ~(v23 >> 31);
  if ( v22 < v13 )
    v26 = v43 - v13;
  else
    v26 = v43 - v22;
  v27 = v26 - v45;
  if ( v21 )
    v27 -= 2;
  v28 = a9 & 1;
  v29 = v27 & ~(v27 >> 31);
  if ( (a9 & 1) != 0 )
  {
    v28 = -v29;
  }
  else
  {
    LODWORD(v14) = a8 == -1;
    if ( ((unsigned int)v14 & (a9 >> 4)) != 0 )
    {
      v25 += v29;
    }
    else if ( v27 > 0 )
    {
      LODWORD(v14) = *a2;
      v30 = v27 & ~(v27 >> 31);
      do
      {
        v31 = (int)v14 + 1 >= a3;
        if ( (int)v14 + 1 >= a3 )
          LODWORD(v14) = v14 + 1;
        else
          *(_BYTE *)(a1 + v14) = 32;
        if ( !v31 )
          LODWORD(v14) = *a2 + 1;
        --v30;
        *a2 = v14;
      }
      while ( v30 );
      v42 = v13;
      if ( v29 < 1 )
        v28 = v29 - 1;
      else
        v28 = 0;
    }
    else
    {
      v28 = v27 & ~(v27 >> 31);
    }
  }
  if ( v46 )
  {
    LODWORD(v14) = *a2;
    HIDWORD(v14) = *a2 + 1;
    if ( HIDWORD(v14) < a3 )
    {
      *(_BYTE *)(a1 + v14) = v46;
      HIDWORD(v14) = *a2 + 1;
    }
    *a2 = HIDWORD(v14);
  }
  if ( v21 )
  {
    LODWORD(v14) = *a2;
    HIDWORD(v14) = *a2 + 1;
    if ( HIDWORD(v14) < a3 )
    {
      *(_BYTE *)(a1 + v14) = 48;
      LODWORD(v14) = *a2;
      HIDWORD(v14) = *a2 + 1;
    }
    LODWORD(v14) = v14 + 2;
    *a2 = HIDWORD(v14);
    if ( (unsigned int)v14 < a3 )
    {
      *(_BYTE *)(a1 + HIDWORD(v14)) = v21;
      HIDWORD(v14) = *a2;
    }
    *a2 = HIDWORD(v14) + 1;
  }
  if ( v25 )
  {
    HIDWORD(v14) = *a2;
    do
    {
      LODWORD(v14) = HIDWORD(v14) + 1;
      v32 = HIDWORD(v14) + 1 >= a3;
      if ( HIDWORD(v14) + 1 >= a3 )
        ++HIDWORD(v14);
      else
        *(_BYTE *)(a1 + HIDWORD(v14)) = 48;
      if ( !v32 )
        HIDWORD(v14) = *a2 + 1;
      --v25;
      *a2 = HIDWORD(v14);
    }
    while ( v25 );
  }
  if ( v13 > 0 )
  {
    v33 = v42;
    do
    {
      while ( 1 )
      {
        v34 = *a2;
        --v33;
        v35 = *a2 + 1;
        if ( v35 < a3 )
        {
          *(_BYTE *)(a1 + v34) = v47[v33];
          v34 = *a2;
          v35 = *a2 + 1;
        }
        LODWORD(v14) = v33 > 0 && v20 > 0;
        *a2 = v35;
        if ( !(_DWORD)v14 )
          break;
        if ( v33 == 3 * (v33 / 3u) )
        {
          if ( a3 > v34 + 2 )
          {
            *(_BYTE *)(a1 + v35) = 44;
            v35 = *a2;
          }
          *a2 = v35 + 1;
        }
      }
    }
    while ( v33 );
  }
  if ( v28 )
  {
    v36 = *a2;
    do
    {
      v37 = v36 + 1 >= a3;
      if ( v36 + 1 >= a3 )
        ++v36;
      else
        *(_BYTE *)(a1 + v36) = 32;
      if ( !v37 )
        v36 = *a2 + 1;
      ++v28;
      *a2 = v36;
    }
    while ( v28 );
  }
  return v14;
}
