int __fastcall sub_ABBFC(int a1, int a2, int a3)
{
  int v4; // r0
  int v5; // r4
  int v6; // r5
  int v7; // r1
  int v8; // r2
  int v10; // [sp+Ch] [bp-8h] BYREF

  v10 = a3;
  v4 = d2i_X509(0, &v10, a2);
  v5 = v4;
  if ( v4 )
  {
    v6 = sub_ABAC0(a1, v4);
    X509_free(v5, v7, v8);
    return v6;
  }
  else
  {
    sub_D0048(20, 172, 13, "ssl/ssl_rsa.c", 405);
    return 0;
  }
}
