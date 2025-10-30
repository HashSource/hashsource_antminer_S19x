int __fastcall sub_C6610(_DWORD *a1, int a2)
{
  int v5; // r2
  int v6; // r3
  int *v7; // r0
  int *v8; // r1
  _DWORD *v9; // r0
  _DWORD *v10; // r1
  int v11; // r6
  int v12; // r2
  int v13; // r3
  void *v14; // r0

  if ( !*(_DWORD *)(*a1 + 20) )
  {
    sub_D0048(16, 106, 66, "crypto/ec/ec_lib.c", 133);
    return 0;
  }
  if ( *a1 != *(_DWORD *)a2 )
  {
    sub_D0048(16, 106, 101, "crypto/ec/ec_lib.c", 137);
    return 0;
  }
  if ( a1 == (_DWORD *)a2 )
    return 1;
  v5 = *(_DWORD *)(a2 + 16);
  a1[24] = *(_DWORD *)(a2 + 96);
  v6 = *(_DWORD *)(a2 + 96);
  a1[4] = v5;
  if ( v6 )
  {
    if ( v6 == 5 )
      a1[25] = sub_C7448(*(_DWORD *)(a2 + 100));
  }
  else
  {
    a1[25] = 0;
  }
  v7 = (int *)a1[23];
  if ( *(_DWORD *)(a2 + 92) )
  {
    v8 = *(int **)(a2 + 92);
    if ( !v7 )
    {
      v7 = sub_B9478();
      a1[23] = v7;
      if ( !v7 )
        return 0;
      v8 = *(int **)(a2 + 92);
    }
    if ( !sub_B9690(v7, v8) )
      return 0;
  }
  else
  {
    sub_B94B4(v7);
    a1[23] = 0;
  }
  v9 = (_DWORD *)a1[1];
  if ( *(_DWORD *)(a2 + 4) )
  {
    v10 = *(_DWORD **)(a2 + 4);
    if ( !v9 )
    {
      v9 = sub_C63F4(a1);
      a1[1] = v9;
      if ( !v9 )
        return 0;
      v10 = *(_DWORD **)(a2 + 4);
    }
    if ( sub_C6594(v9, v10) )
      goto LABEL_14;
    return 0;
  }
  sub_C6508((int)v9);
  a1[1] = 0;
LABEL_14:
  if ( (**(_DWORD **)a2 & 2) == 0 && (!sub_B89E4(a1[2], *(_DWORD *)(a2 + 8)) || !sub_B89E4(a1[3], *(_DWORD *)(a2 + 12))) )
    return 0;
  v11 = *(_DWORD *)(a2 + 32);
  v12 = *(_DWORD *)(a2 + 28);
  v13 = *(_DWORD *)(a2 + 24);
  a1[5] = *(_DWORD *)(a2 + 20);
  a1[7] = v12;
  a1[6] = v13;
  if ( !v11 )
  {
    CRYPTO_free(a1[8], "crypto/ec/ec_lib.c", 226);
    a1[8] = 0;
    a1[9] = 0;
    return (*(int (__fastcall **)(_DWORD *, int))(*a1 + 20))(a1, a2);
  }
  CRYPTO_free(a1[8], "crypto/ec/ec_lib.c", 217);
  v14 = (void *)CRYPTO_malloc(*(_DWORD *)(a2 + 36), "crypto/ec/ec_lib.c", 218);
  a1[8] = v14;
  if ( v14 )
  {
    if ( memcpy(v14, *(const void **)(a2 + 32), *(_DWORD *)(a2 + 36)) )
    {
      a1[9] = *(_DWORD *)(a2 + 36);
      return (*(int (__fastcall **)(_DWORD *, int))(*a1 + 20))(a1, a2);
    }
    return 0;
  }
  sub_D0048(16, 106, 65, "crypto/ec/ec_lib.c", 219);
  return 0;
}
