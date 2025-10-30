int __fastcall sub_ABFF4(int a1, int a2, int a3)
{
  int v4; // r0
  int v5; // r4
  int v6; // r5
  int v8; // [sp+Ch] [bp-8h] BYREF

  v8 = a3;
  v4 = sub_AE3A8(a1, 0, &v8);
  v5 = v4;
  if ( v4 )
  {
    v6 = sub_ABE10(a2, v4);
    sub_DA240(v5);
    return v6;
  }
  else
  {
    sub_D0048(20, 175, 13, "ssl/ssl_rsa.c", 556);
    return 0;
  }
}
