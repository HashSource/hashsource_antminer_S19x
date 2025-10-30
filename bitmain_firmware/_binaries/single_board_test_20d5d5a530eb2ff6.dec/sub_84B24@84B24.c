int __fastcall sub_84B24(int a1, int a2, int a3)
{
  int v4; // r7
  int v5; // r6
  int v6; // r4
  int v7; // r0
  int v8; // r0
  int v9; // r0

  v4 = sub_10C010(a1, a2, a3);
  v5 = sub_10BF44(0, v4);
  if ( v5 )
  {
    if ( v4 > 0 )
    {
      v6 = 0;
      while ( 1 )
      {
        v7 = sub_10C01C(a1, v6);
        v8 = sub_115E5C(v7);
        ++v6;
        if ( !v8 )
          break;
        sub_10BD3C(v5, v8);
        if ( v4 == v6 )
          return v5;
      }
      sub_D0048(20, 408, 65, "ssl/ssl_cert.c", 470);
      v9 = v5;
      v5 = 0;
      sub_10BFDC(v9, X509_NAME_free);
    }
  }
  else
  {
    sub_D0048(20, 408, 65, "ssl/ssl_cert.c", 464);
  }
  return v5;
}
