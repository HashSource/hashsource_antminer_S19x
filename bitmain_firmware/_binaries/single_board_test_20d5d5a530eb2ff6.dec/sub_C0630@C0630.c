int __fastcall sub_C0630(int a1, int a2, int a3)
{
  int v4; // r0
  int v5; // r3

  v4 = d2i_DSAparams(0, a2, a3);
  if ( v4 )
  {
    sub_D9F44(a1, 116, v4, v5);
    return 1;
  }
  else
  {
    sub_D0048(10, 119, 10, "crypto/dsa/dsa_ameth.c", 381);
    return 0;
  }
}
