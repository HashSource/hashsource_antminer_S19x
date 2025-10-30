int __fastcall sub_AAED8(int a1, int a2)
{
  int v3; // r4
  const char *v4; // r0

  if ( a2 )
  {
    v3 = sub_E9E3C(a2, "ssl/ssl_conf.c", 951);
    if ( v3 )
    {
      CRYPTO_free(*(_DWORD *)(a1 + 4), "ssl/ssl_conf.c", 955);
      *(_DWORD *)(a1 + 4) = v3;
      v4 = (const char *)v3;
      v3 = 1;
      *(_DWORD *)(a1 + 8) = strlen(v4);
    }
    return v3;
  }
  else
  {
    CRYPTO_free(*(_DWORD *)(a1 + 4), "ssl/ssl_conf.c", 955);
    *(_DWORD *)(a1 + 4) = 0;
    *(_DWORD *)(a1 + 8) = 0;
    return 1;
  }
}
