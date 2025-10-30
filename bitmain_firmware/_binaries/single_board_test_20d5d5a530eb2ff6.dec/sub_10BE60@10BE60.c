int *__fastcall sub_10BE60(int *a1, int (__fastcall *a2)(int), void (__fastcall *a3)(int))
{
  int *result; // r0
  int *v7; // r5
  int v8; // r1
  int v9; // r2
  int v10; // r3
  int v11; // r3
  void *v12; // r4
  int v13; // r2
  int v14; // r4
  int v15; // r0
  int v16; // r9
  int v17; // r0
  int v18; // r4
  int v19; // r6
  bool v20; // nf
  int v21; // r3

  result = (int *)CRYPTO_malloc((void *)0x14);
  v7 = result;
  if ( !result )
  {
    sub_D0048(15, 127, 65, (int)"crypto/stack/stack.c", 81);
    return 0;
  }
  v8 = a1[1];
  v9 = a1[2];
  v10 = a1[3];
  *result = *a1;
  result[1] = v8;
  result[2] = v9;
  result[3] = v10;
  v11 = *a1;
  result[4] = a1[4];
  if ( !v11 )
  {
    result[1] = 0;
    result[3] = 0;
    return result;
  }
  if ( v11 < 4 )
    v11 = 4;
  result[3] = v11;
  v12 = sub_E0740((void *)(4 * v11));
  v7[1] = (int)v12;
  if ( !v12 )
  {
    CRYPTO_free(v7);
    return 0;
  }
  v13 = *v7;
  if ( *v7 <= 0 )
    return v7;
  v14 = 0;
  while ( 1 )
  {
    v15 = *(_DWORD *)(a1[1] + 4 * v14);
    if ( v15 )
      break;
LABEL_12:
    if ( ++v14 >= v13 )
      return v7;
  }
  v16 = v7[1];
  v17 = a2(v15);
  *(_DWORD *)(v16 + 4 * v14) = v17;
  if ( v17 )
  {
    v13 = *v7;
    goto LABEL_12;
  }
  v18 = v14 - 1;
  v19 = 4 * v18;
  while ( 1 )
  {
    v20 = v18-- < 0;
    if ( v20 )
      break;
    while ( 1 )
    {
      v21 = *(_DWORD *)(v7[1] + v19);
      v19 -= 4;
      if ( !v21 )
        break;
      a3(v21);
      v20 = v18-- < 0;
      if ( v20 )
        goto LABEL_20;
    }
  }
LABEL_20:
  sub_10BDB4((void **)v7);
  return 0;
}
