int __fastcall sub_C05B4(int a1)
{
  int v2; // r0
  int v3; // r3

  v2 = d2i_DSAPrivateKey(0);
  if ( v2 )
  {
    sub_D9F44(a1, 116, v2, v3);
    return 1;
  }
  else
  {
    sub_D0048(10, 122, 10, "crypto/dsa/dsa_ameth.c", 417);
    return 0;
  }
}
