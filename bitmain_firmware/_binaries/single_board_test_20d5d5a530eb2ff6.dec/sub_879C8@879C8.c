int __fastcall sub_879C8(int *a1, int a2)
{
  int v3; // r0
  int v4; // r1
  int v5; // r2

  *a1 = a2;
  if ( sub_86528(a1, "TLS_AES_256_GCM_SHA384:TLS_CHACHA20_POLY1305_SHA256:TLS_AES_128_GCM_SHA256") )
  {
    v3 = sub_8661C(*a1, a1[3], a1 + 1, a1 + 2, "ALL:!COMPLEMENTOFDEFAULT:!eNULL", a1[48]);
    if ( v3 && sub_10C010(v3, v4, v5) > 0 )
    {
      return 1;
    }
    else
    {
      sub_D0048(20, 170, 230, "ssl/ssl_lib.c", 672);
      return 0;
    }
  }
  else
  {
    sub_D0048(20, 170, 230, "ssl/ssl_lib.c", 663);
    return 0;
  }
}
