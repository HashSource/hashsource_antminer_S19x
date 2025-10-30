_DWORD *__fastcall sub_C1DF0(int a1, int a2)
{
  int v4; // r0
  int v5; // r4
  int v6; // r5
  _DWORD *v7; // r4

  v4 = sub_C1DA0(a1);
  v5 = v4;
  if ( v4 < 0 )
    return 0;
  v6 = CRYPTO_malloc(v4, "crypto/dso/dso_lib.c", 331);
  if ( v6 && v5 == sub_C1DA0(a1) )
    v7 = sub_C1AF4(0, v6, 0, a2);
  else
    v7 = 0;
  CRYPTO_free(v6, "crypto/dso/dso_lib.c", 336);
  return v7;
}
