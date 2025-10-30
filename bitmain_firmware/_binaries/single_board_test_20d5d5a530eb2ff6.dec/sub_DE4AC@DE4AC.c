int __fastcall sub_DE4AC(int a1)
{
  _DWORD *v2; // r4
  int v4; // r2

  v2 = (_DWORD *)CRYPTO_malloc(8, "crypto/init.c", 807);
  if ( v2 )
  {
    *v2 = a1;
    v4 = dword_6E1A20;
    dword_6E1A20 = (int)v2;
    v2[1] = v4;
    return 1;
  }
  else
  {
    sub_D0048(15, 114, 65, (int)"crypto/init.c", 808);
    return 0;
  }
}
