_DWORD *__fastcall sub_DF7A0(int *a1, _DWORD *a2)
{
  int v3; // r0
  int v5; // r5
  int v6; // r8
  unsigned int v7; // r6
  int v8; // r10
  int v9; // r2
  int v10; // r3
  int v11; // r5
  int v12; // r6
  _DWORD *v13; // r6
  int v14; // r4
  int *v15; // r5
  int v16; // r1
  int v17; // r3
  int v18; // r0
  unsigned int *v19; // r3
  int v20; // r11
  unsigned int v21; // r2
  unsigned int v22; // r1
  int (__fastcall *v23)(_DWORD, _DWORD *); // r10
  _DWORD *v24; // r4
  _DWORD ***v25; // r6
  unsigned int *v26; // r5
  unsigned int *v27; // r8
  unsigned int v28; // r3
  unsigned int v29; // r3
  _DWORD **v30; // r2
  int v31; // r3
  _DWORD *result; // r0
  int v33; // r3
  int v34; // r1
  int v35; // r2

  v3 = a1[9];
  v5 = a1[3];
  a1[23] = 0;
  if ( a1[7] <= (unsigned int)sub_189090(v3 << 8, v5) )
  {
    v6 = a1[5];
    v7 = a1[6];
    v8 = a1[4];
    if ( v7 <= v6 + 1 )
    {
      result = (_DWORD *)CRYPTO_realloc(*a1, 8 * v8, "crypto/lhash/lhash.c", 225);
      if ( !result )
      {
        ++a1[23];
        return result;
      }
      *a1 = (int)result;
      memset(&result[v8], 0, 4 * v8);
      v33 = a1[11];
      a1[4] = 2 * v8;
      a1[6] = v8;
      a1[5] = 0;
      a1[11] = v33 + 1;
      v5 = a1[3];
    }
    else
    {
      a1[5] = v6 + 1;
    }
    v9 = a1[10];
    v10 = v5 + 1;
    v11 = *a1;
    v12 = v7 + v6;
    a1[3] = v10;
    a1[10] = v9 + 1;
    *(_DWORD *)(v11 + 4 * v12) = 0;
    v13 = (_DWORD *)(v11 + 4 * v12);
    v14 = *(_DWORD *)(v11 + 4 * v6);
    v15 = (int *)(v11 + 4 * v6);
    if ( v14 )
    {
      do
      {
        sub_1892EC(*(_DWORD *)(v14 + 8), v8);
        if ( v6 == v16 )
          v15 = (int *)(v14 + 4);
        else
          v17 = *(_DWORD *)(v14 + 4);
        if ( v6 != v16 )
        {
          *v15 = v17;
          *(_DWORD *)(v14 + 4) = *v13;
          *v13 = v14;
        }
        v14 = *v15;
      }
      while ( *v15 );
    }
  }
  v18 = ((int (__fastcall *)(_DWORD *))a1[2])(a2);
  v19 = (unsigned int *)(a1 + 14);
  v20 = v18;
  do
    v21 = __ldrex(v19);
  while ( __strex(v21 + 1, v19) );
  sub_1892EC(v18, a1[6]);
  if ( v22 < a1[5] )
    sub_1892EC(v20, a1[4]);
  v23 = (int (__fastcall *)(_DWORD, _DWORD *))a1[1];
  v24 = *(_DWORD **)(*a1 + 4 * v22);
  v25 = (_DWORD ***)(*a1 + 4 * v22);
  if ( !v24 )
    goto LABEL_27;
  v26 = (unsigned int *)(a1 + 22);
  v27 = (unsigned int *)(a1 + 15);
  while ( 1 )
  {
    do
      v28 = __ldrex(v26);
    while ( __strex(v28 + 1, v26) );
    if ( v20 == v24[2] )
    {
      do
        v29 = __ldrex(v27);
      while ( __strex(v29 + 1, v27) );
      if ( !v23(*v24, a2) )
        break;
    }
    v25 = (_DWORD ***)(v24 + 1);
    v24 = (_DWORD *)v24[1];
    if ( !v24 )
      goto LABEL_27;
  }
  v30 = *v25;
  if ( *v25 )
  {
    v31 = a1[17];
    result = *v30;
    *v30 = a2;
    a1[17] = v31 + 1;
  }
  else
  {
LABEL_27:
    result = (_DWORD *)CRYPTO_malloc(12, "crypto/lhash/lhash.c", 109);
    if ( result )
    {
      v34 = a1[16];
      v35 = a1[9];
      *result = a2;
      result[2] = v20;
      result[1] = 0;
      *v25 = (_DWORD **)result;
      a1[16] = v34 + 1;
      a1[9] = v35 + 1;
      return 0;
    }
    else
    {
      ++a1[23];
    }
  }
  return result;
}
