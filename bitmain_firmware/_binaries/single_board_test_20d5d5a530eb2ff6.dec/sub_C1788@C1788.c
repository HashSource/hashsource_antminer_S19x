int __fastcall sub_C1788(_DWORD *a1)
{
  unsigned int *v1; // r2
  unsigned int v2; // r3
  int v3; // r3
  int v4; // r5
  int v7; // r3
  int (*v8)(void); // r2
  int (__fastcall *v9)(_DWORD *); // r3

  v1 = a1 + 2;
  if ( !a1 )
    return 1;
  do
    v2 = __ldrex(v1);
  while ( __strex(v2 - 1, v1) );
  v3 = v2 - 1;
  if ( v3 )
  {
    if ( v3 > 0 )
      return 1;
  }
  else
  {
    __dmb(0xBu);
  }
  v7 = *a1;
  if ( (a1[3] & 4) == 0 )
  {
    v8 = *(int (**)(void))(v7 + 8);
    if ( v8 )
    {
      v4 = v8();
      if ( !v4 )
      {
        sub_D0048(37, 111, 107, "crypto/dso/dso_lib.c", 79);
        return v4;
      }
      v7 = *a1;
    }
  }
  v9 = *(int (__fastcall **)(_DWORD *))(v7 + 32);
  if ( v9 )
  {
    v4 = v9(a1);
    if ( !v4 )
    {
      sub_D0048(37, 111, 102, "crypto/dso/dso_lib.c", 85);
      return v4;
    }
  }
  sub_10BDB4(a1[1]);
  CRYPTO_free(a1[7], "crypto/dso/dso_lib.c", 90);
  CRYPTO_free(a1[8], "crypto/dso/dso_lib.c", 91);
  sub_10C574(a1[9]);
  CRYPTO_free(a1, "crypto/dso/dso_lib.c", 93);
  return 1;
}
