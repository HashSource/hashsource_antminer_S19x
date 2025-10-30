int __fastcall sub_DEA14(int a1)
{
  int v2; // r4

  v2 = sub_E0740(1052, "crypto/kdf/hkdf.c", 51);
  if ( v2 )
  {
    *(_DWORD *)(a1 + 20) = v2;
    return 1;
  }
  else
  {
    sub_D0048(52, 108, 65, (int)"crypto/kdf/hkdf.c", 52);
    return 0;
  }
}
