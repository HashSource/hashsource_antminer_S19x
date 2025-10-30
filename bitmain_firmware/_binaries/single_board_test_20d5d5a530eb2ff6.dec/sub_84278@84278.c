_DWORD *sub_84278()
{
  _DWORD *v0; // r0
  _DWORD *v1; // r4
  int v2; // r5
  _DWORD *result; // r0

  v0 = (_DWORD *)sub_E0740(272, "ssl/ssl_cert.c", 52);
  v1 = v0;
  if ( v0 )
  {
    *v0 = v0 + 5;
    __dmb(0xBu);
    v0[66] = 1;
    __dmb(0xBu);
    v0[63] = 1;
    v0[62] = sub_853D4;
    v0[64] = 0;
    v2 = sub_10C510();
    v1[67] = v2;
    result = v1;
    if ( !v2 )
    {
      sub_D0048(20, 162, 65, "ssl/ssl_cert.c", 66);
      CRYPTO_free(v1, "ssl/ssl_cert.c", 67);
      return 0;
    }
  }
  else
  {
    sub_D0048(20, 162, 65, "ssl/ssl_cert.c", 55);
    return 0;
  }
  return result;
}
