int __fastcall sub_C1A64(int a1, int a2)
{
  bool v2; // zf
  int v5; // r5

  v2 = a2 == 0;
  if ( a2 )
    v2 = a1 == 0;
  if ( v2 )
  {
    sub_D0048(37, 129, 67, "crypto/dso/dso_lib.c", 245);
    return 0;
  }
  else if ( *(_DWORD *)(a1 + 32) )
  {
    sub_D0048(37, 129, 110, "crypto/dso/dso_lib.c", 249);
    return 0;
  }
  else
  {
    v5 = sub_E9E3C(a2, "crypto/dso/dso_lib.c", 253);
    if ( v5 )
    {
      CRYPTO_free(*(_DWORD *)(a1 + 28), "crypto/dso/dso_lib.c", 258);
      *(_DWORD *)(a1 + 28) = v5;
      return 1;
    }
    else
    {
      sub_D0048(37, 129, 65, "crypto/dso/dso_lib.c", 255);
      return 0;
    }
  }
}
