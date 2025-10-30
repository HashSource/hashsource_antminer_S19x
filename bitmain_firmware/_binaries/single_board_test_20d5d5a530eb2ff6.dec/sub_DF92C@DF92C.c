int __fastcall sub_DF92C(int *a1, int a2)
{
  int (__fastcall *v2)(int); // r3
  int v5; // r0
  unsigned int *v6; // r3
  int v7; // r11
  unsigned int v8; // r2
  unsigned int v9; // r1
  int (__fastcall *v10)(_DWORD, int); // r10
  unsigned int *v11; // r5
  unsigned int *v12; // r8
  _DWORD *v13; // r4
  int **v14; // r6
  unsigned int v15; // r3
  unsigned int v16; // r3
  int *v17; // r4
  int *v18; // r0
  int v19; // r4
  unsigned int v20; // r6
  int v21; // r0
  int v23; // r2
  int v24; // lr
  int v25; // r0
  int v26; // r8
  int v27; // r5
  int v28; // r3
  int v29; // r1
  int v30; // r2
  int v31; // r0
  unsigned int v32; // r3
  unsigned int v33; // r1
  int v34; // r2

  v2 = (int (__fastcall *)(int))a1[2];
  a1[23] = 0;
  v5 = v2(a2);
  v6 = (unsigned int *)(a1 + 14);
  v7 = v5;
  do
    v8 = __ldrex(v6);
  while ( __strex(v8 + 1, v6) );
  sub_1892EC(v5, a1[6]);
  if ( v9 < a1[5] )
    sub_1892EC(v7, a1[4]);
  v10 = (int (__fastcall *)(_DWORD, int))a1[1];
  v11 = (unsigned int *)(a1 + 22);
  v12 = (unsigned int *)(a1 + 15);
  v13 = *(_DWORD **)(*a1 + 4 * v9);
  v14 = (int **)(*a1 + 4 * v9);
  if ( !v13 )
    goto LABEL_25;
  while ( 1 )
  {
    do
      v15 = __ldrex(v11);
    while ( __strex(v15 + 1, v11) );
    if ( v7 == v13[2] )
    {
      do
        v16 = __ldrex(v12);
      while ( __strex(v16 + 1, v12) );
      if ( !v10(*v13, a2) )
        break;
    }
    v14 = (int **)(v13 + 1);
    v13 = (_DWORD *)v13[1];
    if ( !v13 )
      goto LABEL_25;
  }
  v17 = *v14;
  if ( !*v14 )
  {
LABEL_25:
    ++a1[19];
    return 0;
  }
  v18 = *v14;
  *v14 = (int *)v17[1];
  v19 = *v17;
  CRYPTO_free(v18, "crypto/lhash/lhash.c", 144);
  v20 = a1[3];
  v21 = a1[9] - 1;
  ++a1[18];
  a1[9] = v21;
  if ( v20 <= 0x10 || a1[8] < (unsigned int)sub_189090(v21 << 8, v20) )
    return v19;
  v23 = a1[5];
  v24 = a1[6];
  v25 = v23 + v24 + 0x3FFFFFFF;
  v26 = *(_DWORD *)(*a1 + 4 * v25);
  *(_DWORD *)(*a1 + 4 * v25) = 0;
  if ( v23 )
  {
    v27 = *a1;
    v28 = v23 - 1;
    a1[5] = v23 - 1;
  }
  else
  {
    v31 = CRYPTO_realloc(*a1, 4 * v24, "crypto/lhash/lhash.c", 268);
    if ( !v31 )
    {
      ++a1[23];
      return v19;
    }
    v32 = a1[6];
    v27 = v31;
    v33 = a1[4];
    v34 = a1[13];
    *a1 = v31;
    v32 >>= 1;
    v20 = a1[3];
    a1[6] = v32;
    v28 = v32 - 1;
    a1[5] = v28;
    a1[4] = v33 >> 1;
    a1[13] = v34 + 1;
  }
  v29 = a1[12];
  v30 = *(_DWORD *)(v27 + 4 * v28);
  a1[3] = v20 - 1;
  a1[12] = v29 + 1;
  if ( v30 )
  {
    while ( *(_DWORD *)(v30 + 4) )
      v30 = *(_DWORD *)(v30 + 4);
    *(_DWORD *)(v30 + 4) = v26;
    return v19;
  }
  else
  {
    *(_DWORD *)(v27 + 4 * v28) = v26;
    return v19;
  }
}
