int __fastcall sub_17974C(int a1, _DWORD *a2, _DWORD *a3)
{
  int *v4; // r5
  int result; // r0
  void **v7; // r0
  void **v8; // r4

  v4 = (int *)a2[2];
  *a3 = *a2;
  result = sub_10BD3C(v4, (int)a3);
  if ( result )
  {
    v7 = (void **)sub_DF7A0(*(int **)(a1 + 8), a3);
    v8 = v7;
    if ( v7 )
    {
      sub_10BB98(v4, (int)v7);
      CRYPTO_free(v8[1]);
      CRYPTO_free(v8[2]);
      CRYPTO_free(v8);
    }
    return 1;
  }
  return result;
}
