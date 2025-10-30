int __fastcall sub_88494(int a1, int a2)
{
  int v4; // r0
  int v5; // r4
  int v6; // r0
  int v7; // r0
  int v8; // r4

  v4 = sub_882E4(a1);
  if ( v4 && (v5 = v4, sub_B6738() == 1285) && sub_B6ECC(v5, 105, 0, 0) == a2 )
  {
    sub_B66E0(v5);
    sub_882A8(a1, v5);
    return 1;
  }
  else
  {
    v6 = sub_B7F6C();
    v7 = sub_B655C(v6);
    v8 = v7;
    if ( v7 )
    {
      sub_B6FB4(v7, 104, 0, a2);
      sub_882A8(a1, v8);
      return 1;
    }
    else
    {
      sub_D0048(20, 194, 7, "ssl/ssl_lib.c", 1399);
      return 0;
    }
  }
}
