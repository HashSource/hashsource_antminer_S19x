int __fastcall sub_883C8(int a1, int a2)
{
  int v4; // r0
  int v5; // r0
  int v6; // r4

  v4 = sub_B7F6C();
  v5 = sub_B655C(v4);
  v6 = v5;
  if ( v5 )
  {
    sub_B6FB4(v5, 104, 0, a2);
    sub_882F4(a1, v6, v6);
    return 1;
  }
  else
  {
    sub_D0048(20, 192, 7, "ssl/ssl_lib.c", 1359);
    return 0;
  }
}
