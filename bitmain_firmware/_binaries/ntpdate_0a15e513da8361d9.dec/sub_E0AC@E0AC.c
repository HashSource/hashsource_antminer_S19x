int __fastcall sub_E0AC(
        int a1,
        unsigned int *a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        unsigned int a6,
        int a7,
        int a8,
        unsigned int a9)
{
  const char *v12; // r11
  int v13; // r8
  _BYTE *v14; // r9
  __int64 v15; // d8
  unsigned __int64 v16; // kr00_8
  int v17; // r2
  __int64 v18; // r0
  unsigned int v19; // r5
  bool v20; // r1
  int v22; // r2
  int v23; // r3
  int v24; // r12
  int v25; // lr
  int v26; // r1
  int v27; // r0
  int v28; // r12
  int v29; // r0
  int v30; // r12
  int v31; // r1
  int result; // r0
  int v33; // r12
  unsigned int v34; // r1
  bool v35; // cf
  unsigned int v36; // r1
  unsigned int v37; // lr
  unsigned int v38; // r1
  unsigned int v39; // r2
  bool v40; // cc
  unsigned int v41; // r1
  unsigned int v42; // r2
  unsigned int v43; // r3
  bool v44; // cc
  int v45; // [sp+Ch] [bp-60h]
  unsigned __int64 v46; // [sp+10h] [bp-5Ch]
  int v47; // [sp+20h] [bp-4Ch]
  int v48; // [sp+2Ch] [bp-40h]
  char v49; // [sp+30h] [bp-3Ch]
  _BYTE v50[44]; // [sp+38h] [bp-34h] BYREF

  v45 = a9 & 0x20;
  if ( (a9 & 0x80) != 0 )
  {
    v46 = a5;
    v47 = 0;
    v48 = 0;
    v49 = 0;
  }
  else
  {
    v46 = abs64(a5);
    if ( a5 < 0 )
    {
      v47 = 1;
      v49 = 45;
      v48 = 1;
    }
    else if ( (a9 & 2) != 0 )
    {
      v47 = 1;
      v49 = 43;
      v48 = 1;
    }
    else
    {
      v47 = a9 & 4;
      if ( (a9 & 4) != 0 )
      {
        v47 = 1;
        v49 = 32;
        v48 = 1;
      }
      else
      {
        v48 = 0;
        v49 = 0;
      }
    }
  }
  if ( (a9 & 0x40) != 0 )
    v12 = "0123456789ABCDEF";
  else
    v12 = "0123456789abcdef";
  v13 = 0;
  v14 = v50;
  v15 = vshrd_n_s64(vdup_n_s32(a6).n64_i64[0], 0x20u);
  v16 = v46;
  do
  {
    ++v13;
    sub_1C980(v16, HIDWORD(v16), v15, HIDWORD(v15));
    *v14++ = v12[v17];
    v18 = sub_1C980(v16, HIDWORD(v16), v15, HIDWORD(v15));
    v19 = HIDWORD(v18);
    v20 = v18 != 0;
    v16 = __PAIR64__(v19, v18);
  }
  while ( (unsigned int)v13 <= 0x2A && v20 );
  v22 = (a9 >> 3) & 1;
  if ( !v46 )
    v22 = 0;
  v23 = v13;
  if ( !v22 )
  {
LABEL_20:
    v24 = a8;
    goto LABEL_21;
  }
  if ( a6 == 8 )
  {
    v22 = 0;
    if ( a8 <= v13 )
    {
      v24 = v13 + 1;
      goto LABEL_21;
    }
    goto LABEL_20;
  }
  if ( a6 == 16 )
  {
    v24 = a8;
    if ( (a9 & 0x40) != 0 )
      v22 = 88;
    else
      v22 = 120;
  }
  else
  {
    v22 = 0;
    v24 = a8;
  }
LABEL_21:
  if ( (a9 & 0x20) != 0 )
  {
    if ( v13 == 3 * (v13 / 3) )
      v25 = v13 - 1;
    else
      v25 = v13;
    v45 = v25 / 3;
  }
  v26 = a7 - v45;
  v27 = v24 - v13;
  if ( v24 < v13 )
    v28 = v26 - v13;
  else
    v28 = v26 - v24;
  v29 = v27 - v45;
  v30 = v28 - v47;
  if ( v22 )
    v31 = 2;
  else
    v31 = 0;
  result = v29 & ~(v29 >> 31);
  v33 = (v30 - v31) & ~((v30 - v31) >> 31);
  if ( (a9 & 1) != 0 )
  {
    v33 = -v33;
  }
  else if ( ((a8 == -1) & (a9 >> 4)) != 0 )
  {
    result += v33;
    v33 = a9 & 1;
  }
  else if ( v33 > 0 )
  {
    v34 = *a2;
    do
    {
      v35 = v34 + 1 >= a3;
      if ( v34 + 1 >= a3 )
      {
        ++v34;
      }
      else
      {
        *(_BYTE *)(a1 + v34) = 32;
        v34 = *a2;
      }
      if ( !v35 )
        ++v34;
      --v33;
      *a2 = v34;
    }
    while ( v33 );
  }
  if ( v48 )
  {
    v36 = *a2 + 1;
    if ( a3 > v36 )
    {
      *(_BYTE *)(a1 + *a2) = v49;
      v36 = *a2 + 1;
    }
    *a2 = v36;
  }
  if ( v22 )
  {
    v37 = *a2;
    v38 = *a2 + 1;
    if ( a3 > v38 )
    {
      *(_BYTE *)(a1 + v37) = 48;
      v37 = *a2;
      v38 = *a2 + 1;
    }
    *a2 = v38;
    if ( a3 > v37 + 2 )
    {
      *(_BYTE *)(a1 + v38) = v22;
      v38 = *a2;
    }
    *a2 = v38 + 1;
  }
  if ( result )
  {
    v39 = *a2;
    do
    {
      v40 = a3 > v39 + 1;
      if ( a3 <= v39 + 1 )
      {
        ++v39;
      }
      else
      {
        *(_BYTE *)(a1 + v39) = 48;
        v39 = *a2;
      }
      if ( v40 )
        ++v39;
      --result;
      *a2 = v39;
    }
    while ( result );
  }
  if ( v13 > 0 )
  {
    do
    {
      while ( 1 )
      {
        v41 = *a2;
        --v23;
        v42 = *a2 + 1;
        if ( a3 > v42 )
        {
          *(_BYTE *)(a1 + v41) = v50[v23];
          v41 = *a2;
          v42 = *a2 + 1;
        }
        *a2 = v42;
        result = v23 > 0;
        if ( ((unsigned __int8)result & (v45 > 0)) == 0 )
          break;
        if ( v23 == 3 * (v23 / 3) )
        {
          if ( a3 > v41 + 2 )
          {
            *(_BYTE *)(a1 + v42) = 44;
            v42 = *a2;
          }
          *a2 = v42 + 1;
        }
      }
    }
    while ( v23 > 0 );
  }
  if ( v33 )
  {
    v43 = *a2;
    do
    {
      v44 = a3 > v43 + 1;
      if ( a3 <= v43 + 1 )
      {
        ++v43;
      }
      else
      {
        *(_BYTE *)(a1 + v43) = 32;
        v43 = *a2;
      }
      if ( v44 )
        ++v43;
      ++v33;
      *a2 = v43;
    }
    while ( v33 );
  }
  return result;
}
