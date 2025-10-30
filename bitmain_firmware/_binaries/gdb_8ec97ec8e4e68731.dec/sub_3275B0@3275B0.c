int __fastcall sub_3275B0(unsigned __int16 *a1, int a2, unsigned __int16 *a3, int a4, int a5, signed int a6, int a7)
{
  unsigned __int16 v7; // r6
  _WORD *v8; // r8
  _WORD *v9; // r12
  _WORD *v10; // r3
  bool v11; // zf
  int v12; // r4
  __int16 v13; // r1
  unsigned int v14; // r0
  __int16 v15; // r4
  unsigned __int16 *v16; // lr
  unsigned int v17; // r5
  unsigned int v18; // r1
  bool v19; // cc
  unsigned int v20; // r0
  unsigned __int16 *v21; // r4
  unsigned int v22; // lr
  _WORD *v23; // r12
  unsigned __int16 *v24; // r7
  unsigned __int16 *v25; // r6
  signed int v26; // r3
  unsigned int v27; // r1
  int v28; // r1
  int v29; // t1
  int v30; // t1
  int v31; // r1
  unsigned int v32; // r1
  unsigned int v33; // r5
  unsigned int v34; // r1
  unsigned int v35; // lr
  unsigned int v36; // lr
  unsigned int v37; // r1
  bool v38; // cc
  int v39; // r1
  int v40; // t1
  int v41; // t1
  int v42; // r1
  unsigned int v43; // r1
  unsigned int v44; // r3
  int v46; // r12
  _WORD *v47; // r0
  unsigned int v48; // lr
  int v49; // t1
  int v50; // r2
  int v51; // r2
  unsigned int v52; // [sp+0h] [bp-14h]
  int v54; // [sp+8h] [bp-Ch]

  v8 = (_WORD *)a6;
  v54 = a2;
  v9 = (_WORD *)(a6 + 2 * a2);
  v10 = (_WORD *)(a6 + 2 * a4);
  if ( !a5 )
    goto LABEL_17;
  v11 = a2 == a5;
  if ( a2 >= a5 )
    v11 = a1 == (unsigned __int16 *)a6;
  v12 = 2 * a5;
  v13 = v11;
  v10 = (_WORD *)((char *)v10 + v12);
  v14 = a6 + v12;
  if ( v11 )
  {
    v21 = &a1[v12 / 2u];
    goto LABEL_18;
  }
  if ( v14 <= a6 )
  {
LABEL_17:
    v21 = a1;
    v14 = a6;
    goto LABEL_18;
  }
  v15 = v13;
  v16 = a1;
  v17 = (unsigned int)&a1[v54];
  v18 = a6;
  do
  {
    v19 = v17 > (unsigned int)v16;
    v18 += 2;
    if ( v17 > (unsigned int)v16 )
      v7 = *v16;
    ++v16;
    if ( v19 )
      *(_WORD *)(v18 - 2) = v7;
    else
      *(_WORD *)(v18 - 2) = v15;
  }
  while ( v14 > v18 );
  v20 = ((~a6 + v14) & 0xFFFFFFFE) + 2;
  v21 = (unsigned __int16 *)((char *)a1 + v20);
  v14 = a6 + v20;
LABEL_18:
  if ( v10 > v9 )
    v22 = (unsigned int)v9;
  else
    v22 = (unsigned int)v10;
  if ( v10 <= v9 )
    v10 = v9;
  v52 = (unsigned int)v10;
  if ( v14 >= v22 )
  {
    if ( v14 >= (unsigned int)v10 )
      return (int)(v14 - a6) >> 1;
    v26 = 0;
LABEL_39:
    v36 = (unsigned int)&a1[v54];
    while ( 1 )
    {
      v38 = v36 > (unsigned int)v21;
      if ( v36 > (unsigned int)v21 )
      {
        v41 = *v21++;
        v39 = v41;
      }
      else
      {
        v40 = *a3++;
        v39 = v40;
      }
      if ( v38 )
        v42 = v39 + v26;
      else
        v42 = v26 + a7 * v39;
      if ( (unsigned int)v42 < 0x3E8 )
      {
        *(_WORD *)v14 = v42;
        v26 = 0;
        goto LABEL_42;
      }
      if ( v42 >= 0 )
      {
        v26 = (16777 * ((unsigned int)v42 >> 3)) >> 21;
        v37 = (unsigned __int16)(v42 - 1000 * v26);
        if ( v37 < 0x3E8 )
          goto LABEL_55;
        ++v26;
        *(_WORD *)v14 = v37 - 1000;
LABEL_42:
        v14 += 2;
        if ( v14 >= v52 )
          goto LABEL_56;
      }
      else
      {
        v43 = v42 + 1000000;
        v44 = (16777 * (v43 >> 3)) >> 21;
        v37 = (unsigned __int16)(v43 - 1000 * v44);
        if ( v37 < 0x3E8 )
        {
          *(_WORD *)v14 = v37;
          v26 = v44 - 1000;
          goto LABEL_42;
        }
        LOWORD(v37) = v37 - 1000;
        v26 = v44 - 999;
LABEL_55:
        *(_WORD *)v14 = v37;
        v14 += 2;
        if ( v14 >= v52 )
          goto LABEL_56;
      }
    }
  }
  v23 = (_WORD *)v14;
  v24 = a3;
  v25 = v21;
  v26 = 0;
  do
  {
    while ( 1 )
    {
      v29 = *v25++;
      v28 = v29;
      v30 = *v24++;
      v31 = v28 + v26 + a7 * v30;
      if ( (unsigned int)v31 >= 0x3E8 )
        break;
      *v23 = v31;
      v26 = 0;
LABEL_30:
      if ( (unsigned int)++v23 >= v22 )
        goto LABEL_38;
    }
    if ( v31 >= 0 )
    {
      v26 = (16777 * ((unsigned int)v31 >> 3)) >> 21;
      v27 = (unsigned __int16)(v31 - 1000 * v26);
      if ( v27 < 0x3E8 )
        *v23 = v27;
      else
        ++v26;
      if ( v27 >= 0x3E8 )
        *v23 = v27 - 1000;
      goto LABEL_30;
    }
    ++v23;
    v32 = v31 + 1000000;
    v33 = (16777 * (v32 >> 3)) >> 21;
    v26 = v33 - 999;
    v34 = (unsigned __int16)(v32 - 1000 * v33);
    if ( v34 >= 0x3E8 )
    {
      *(v23 - 1) = v34 - 1000;
    }
    else
    {
      *(v23 - 1) = v34;
      v26 = v33 - 1000;
    }
  }
  while ( (unsigned int)v23 < v22 );
LABEL_38:
  v35 = ((v22 + ~v14) & 0xFFFFFFFE) + 2;
  v14 += v35;
  v21 = (unsigned __int16 *)((char *)v21 + v35);
  a3 = (unsigned __int16 *)((char *)a3 + v35);
  if ( v14 < v52 )
    goto LABEL_39;
LABEL_56:
  if ( !v26 )
    return (int)(v14 - a6) >> 1;
  if ( v26 > 0 )
  {
    *(_WORD *)v14 = v26;
    v14 += 2;
    return (int)(v14 - a6) >> 1;
  }
  if ( a6 < v52 )
  {
    v47 = (_WORD *)(a6 - 2);
    v46 = 1;
    v48 = v52 + ~a6;
    do
    {
      v49 = (unsigned __int16)v47[1];
      ++v47;
      v50 = v46 + 999;
      v46 = 1;
      v51 = v50 - v49;
      if ( v51 == 1000 )
      {
        *v47 = 0;
      }
      else
      {
        *v47 = v51;
        v46 = 0;
      }
    }
    while ( v47 != (_WORD *)(a6 + (v48 & 0xFFFFFFFE)) );
    v8 = (_WORD *)(a6 + (v48 & 0xFFFFFFFE) + 2);
  }
  else
  {
    v46 = 1;
  }
  if ( v46 - v26 != 1 )
    *v8++ = ~(_WORD)v26 + v46;
  return (a6 - (int)v8) >> 1;
}
