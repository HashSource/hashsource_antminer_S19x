int __fastcall sub_F63C4(int a1, int a2)
{
  int v3; // r0

  v3 = d2i_RSAPrivateKey(0, a2);
  if ( v3 )
  {
    sub_D9F44((_DWORD *)a1, **(_DWORD **)(a1 + 12), v3);
    return 1;
  }
  else
  {
    sub_D0048(4, 147, 4, (int)"crypto/rsa/rsa_ameth.c", 142);
    return 0;
  }
}
