int __fastcall sub_C2B34(int a1, int a2, int a3)
{
  int v4; // r0
  int v5; // r3

  v4 = sub_C4754(0, a2, a3);
  if ( v4 )
  {
    sub_D9F44(a1, 408, v4, v5);
    return 1;
  }
  else
  {
    sub_D0048(16, 212, 16, "crypto/ec/ec_ameth.c", 428);
    return 0;
  }
}
