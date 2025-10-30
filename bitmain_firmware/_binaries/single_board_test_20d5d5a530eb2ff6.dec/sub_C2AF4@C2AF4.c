int __fastcall sub_C2AF4(int a1, int a2, int a3)
{
  int v4; // r0
  int v5; // r3

  v4 = d2i_ECPrivateKey(0, a2, a3);
  if ( v4 )
  {
    sub_D9F44(a1, 408, v4, v5);
    return 1;
  }
  else
  {
    sub_D0048(16, 222, 142, "crypto/ec/ec_ameth.c", 464);
    return 0;
  }
}
