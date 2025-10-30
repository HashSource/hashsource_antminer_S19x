unsigned int __fastcall sub_E8E40(
        unsigned int result,
        unsigned int a2,
        unsigned int a3,
        int a4,
        int a5,
        unsigned int *a6,
        int (__fastcall *a7)(int, int, int))
{
  unsigned int v7; // r6
  unsigned int v9; // r10
  unsigned int v10; // r4
  bool v11; // zf
  char v12; // r3
  char v13; // r2
  char v14; // t1
  int v15; // r3
  unsigned int v16; // r9
  unsigned int v17; // r8
  unsigned int v18; // r11
  unsigned int v19; // lr
  unsigned int v20; // r3
  unsigned int v21; // r3
  int v22; // r2
  int v23; // r8
  _BYTE *v24; // r7
  _BYTE *v25; // r10
  char v26; // t1
  char v27; // r3
  unsigned int v28; // r3
  int v29; // r12
  unsigned int v30; // r2
  _BYTE *v31; // r8
  unsigned int v32; // lr
  char v33; // r9
  char v34; // r2
  char v35; // r2
  char v36; // r2
  int v37; // r2
  unsigned int v38; // r10
  unsigned int v39; // r2
  unsigned int v40; // lr
  unsigned int v41; // r2
  unsigned int v42; // r2
  unsigned int v43; // r2
  unsigned int v44; // r1
  unsigned int v45; // r2
  unsigned int v46; // r1
  unsigned int v47; // r2
  unsigned int v48; // r1
  unsigned int v49; // r2
  unsigned int v50; // r1

  v7 = result;
  v9 = a3;
  v10 = *a6;
  v11 = *a6 == 0;
  if ( *a6 )
    v11 = a3 == 0;
  if ( !v11 )
  {
    do
    {
      result = *(unsigned __int8 *)(a5 + v10);
      v12 = (v10 + 1) & 0xF;
      v14 = *(_BYTE *)v7++;
      v13 = v14;
      if ( ((v10 + 1) & 0xF) != 0 )
        v12 = 1;
      --v9;
      v15 = v12 & 1;
      if ( !v9 )
        v15 = 0;
      v10 = ((_BYTE)v10 + 1) & 0xF;
      *(_BYTE *)a2++ = v13 ^ result;
    }
    while ( v15 );
  }
  if ( (a2 | v7 | a5) << 30 )
  {
    if ( v9 )
    {
      v24 = (_BYTE *)(a2 - 1);
      v25 = (_BYTE *)(v9 + v7);
      if ( !v10 )
        goto LABEL_26;
      while ( 1 )
      {
        v26 = *(_BYTE *)v7++;
        v27 = *(_BYTE *)(a5 + v10);
        v10 = (v10 + 1) & 0xF;
        *++v24 = v27 ^ v26;
        if ( (_BYTE *)v7 == v25 )
          break;
        if ( !v10 )
LABEL_26:
          result = a7(a5, a5, a4);
      }
    }
    goto LABEL_21;
  }
  if ( v9 <= 0xF )
  {
    if ( !v9 )
      goto LABEL_21;
    a7(a5, a5, a4);
    v28 = v9 - 1;
  }
  else
  {
    v16 = a2;
    v17 = v7;
    v18 = v9;
    do
    {
      a7(a5, a5, a4);
      v19 = v10 + 4;
      result = v10 + 8;
      v20 = v10 + 12;
      if ( v10 <= 0xF )
      {
        *(_DWORD *)(v16 + v10) = *(_DWORD *)(a5 + v10) ^ *(_DWORD *)(v17 + v10);
        if ( v19 <= 0xF )
        {
          *(_DWORD *)(v16 + v19) = *(_DWORD *)(a5 + v19) ^ *(_DWORD *)(v17 + v19);
          if ( result <= 0xF )
          {
            *(_DWORD *)(v16 + result) = *(_DWORD *)(a5 + result) ^ *(_DWORD *)(v17 + result);
            if ( v20 <= 0xF )
              *(_DWORD *)(v16 + v20) = *(_DWORD *)(a5 + v20) ^ *(_DWORD *)(v17 + v20);
          }
        }
      }
      v18 -= 16;
      v16 += 16;
      v17 += 16;
      v10 = 0;
    }
    while ( v18 > 0xF );
    v21 = (v9 - 16) >> 4;
    v22 = 16 * (v21 + 1);
    a2 += v22;
    v23 = -16 * v21;
    v7 += v22;
    if ( (v9 & 0xF) == 0 )
    {
      v10 = 0;
LABEL_21:
      *a6 = v10;
      return result;
    }
    a7(a5, a5, a4);
    v28 = v9 - 17 + v23;
  }
  v29 = a5 + v10;
  v30 = a2 + v10 + 4;
  v31 = (_BYTE *)(v7 + v10);
  v32 = a2 + v10;
  v33 = v30 <= a5 + v10;
  v34 = v30 <= v7 + v10;
  if ( a2 + v10 >= v7 + v10 + 4 )
    v34 |= 1u;
  if ( v32 >= a5 + v10 + 4 )
    v33 |= 1u;
  v35 = v33 & v34;
  if ( v28 + 1 > 6 )
    v36 = v35 & 1;
  else
    v36 = 0;
  v37 = v36 & 1;
  if ( (((unsigned __int8)v32 | (unsigned __int8)((unsigned __int8)v31 | v29)) & 3) != 0 )
    v37 = 0;
  if ( v37 )
  {
    result = *(_DWORD *)(a5 + v10);
    v38 = 4 * (((v28 - 3) >> 2) + 1);
    *(_DWORD *)(a2 + v10) = *(_DWORD *)(v7 + v10) ^ result;
    if ( (v28 - 3) >> 2 )
    {
      result = *((_DWORD *)v31 + 1);
      *(_DWORD *)(v32 + 4) = *(_DWORD *)(v29 + 4) ^ result;
      if ( (v28 - 3) >> 2 == 2 )
        *(_DWORD *)(v32 + 8) = *(_DWORD *)(v29 + 8) ^ *((_DWORD *)v31 + 2);
    }
    v39 = v10 + v38;
    v40 = v28 - v38;
    if ( v38 == v28 + 1 )
      goto LABEL_44;
    result = v39 + 1;
    *(_BYTE *)(a2 + v39) = *(_BYTE *)(v7 + v39) ^ *(_BYTE *)(a5 + v39);
    if ( !v40 )
      goto LABEL_44;
    v41 = v39 + 2;
    *(_BYTE *)(a2 + result) = *(_BYTE *)(v7 + result) ^ *(_BYTE *)(a5 + result);
    if ( v40 == 1 )
      goto LABEL_44;
  }
  else
  {
    result = *(unsigned __int8 *)(a5 + v10) ^ *(unsigned __int8 *)(v7 + v10);
    *(_BYTE *)(a2 + v10) = result;
    if ( !v28 )
      goto LABEL_44;
    result = v10 + 2;
    *(_BYTE *)(a2 + v10 + 1) = *(_BYTE *)(v7 + v10 + 1) ^ *(_BYTE *)(a5 + v10 + 1);
    if ( v28 == 1 )
      goto LABEL_44;
    v42 = v10 + 3;
    *(_BYTE *)(a2 + result) = *(_BYTE *)(v7 + result) ^ *(_BYTE *)(a5 + result);
    if ( v28 == 2 )
      goto LABEL_44;
    result = *(unsigned __int8 *)(v7 + v42) ^ *(unsigned __int8 *)(a5 + v42);
    *(_BYTE *)(a2 + v42) = result;
    if ( v28 == 3 )
      goto LABEL_44;
    result = v10 + 5;
    *(_BYTE *)(a2 + v10 + 4) = *(_BYTE *)(v7 + v10 + 4) ^ *(_BYTE *)(a5 + v10 + 4);
    if ( v28 == 4 )
      goto LABEL_44;
    v43 = v10 + 6;
    *(_BYTE *)(a2 + result) = *(_BYTE *)(v7 + result) ^ *(_BYTE *)(a5 + result);
    if ( v28 == 5 )
      goto LABEL_44;
    v44 = v10 + 7;
    result = *(unsigned __int8 *)(v7 + v43) ^ *(unsigned __int8 *)(a5 + v43);
    *(_BYTE *)(a2 + v43) = result;
    if ( v28 == 6 )
      goto LABEL_44;
    v45 = v10 + 8;
    result = *(unsigned __int8 *)(v7 + v44) ^ *(unsigned __int8 *)(a5 + v44);
    *(_BYTE *)(a2 + v44) = result;
    if ( v28 == 7 )
      goto LABEL_44;
    v46 = v10 + 9;
    result = *(unsigned __int8 *)(v7 + v45) ^ *(unsigned __int8 *)(a5 + v45);
    *(_BYTE *)(a2 + v45) = result;
    if ( v28 == 8 )
      goto LABEL_44;
    v47 = v10 + 10;
    result = *(unsigned __int8 *)(v7 + v46) ^ *(unsigned __int8 *)(a5 + v46);
    *(_BYTE *)(a2 + v46) = result;
    if ( v28 == 9 )
      goto LABEL_44;
    v48 = v10 + 11;
    result = *(unsigned __int8 *)(v7 + v47) ^ *(unsigned __int8 *)(a5 + v47);
    *(_BYTE *)(a2 + v47) = result;
    if ( v28 == 10 )
      goto LABEL_44;
    v49 = v10 + 12;
    result = *(unsigned __int8 *)(v7 + v48) ^ *(unsigned __int8 *)(a5 + v48);
    *(_BYTE *)(a2 + v48) = result;
    if ( v28 == 11 )
      goto LABEL_44;
    v50 = v10 + 13;
    result = *(unsigned __int8 *)(v7 + v49) ^ *(unsigned __int8 *)(a5 + v49);
    *(_BYTE *)(a2 + v49) = result;
    if ( v28 == 12 )
      goto LABEL_44;
    v41 = v10 + 14;
    result = *(unsigned __int8 *)(v7 + v50) ^ *(unsigned __int8 *)(a5 + v50);
    *(_BYTE *)(a2 + v50) = result;
    if ( v28 == 13 )
      goto LABEL_44;
  }
  result = *(unsigned __int8 *)(v7 + v41);
  *(_BYTE *)(a2 + v41) = *(_BYTE *)(a5 + v41) ^ result;
LABEL_44:
  *a6 = v10 + v28 + 1;
  return result;
}
