int __fastcall sub_AB848(int a1, int a2)
{
  int v3; // r0
  int v4; // r4
  int v5; // r5
  int v7; // [sp+Ch] [bp-8h] BYREF

  v7 = a2;
  v3 = d2i_RSAPrivateKey(0, &v7);
  v4 = v3;
  if ( v3 )
  {
    v5 = sub_AB6D8(a1, v3);
    sub_F8154(v4);
    return v5;
  }
  else
  {
    sub_D0048(20, 205, 13, "ssl/ssl_rsa.c", 213);
    return 0;
  }
}
