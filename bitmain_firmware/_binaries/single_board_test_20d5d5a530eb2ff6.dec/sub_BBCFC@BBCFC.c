int __fastcall sub_BBCFC(int a1, int a2, int a3)
{
  _DWORD *v6; // r4
  int v7; // r0

  if ( dword_6DF3E0 || (dword_6DF3E0 = sub_10BFCC(a1)) != 0 )
  {
    v6 = (_DWORD *)sub_E0740(24, "crypto/conf/conf_mod.c", 238);
    if ( v6 )
    {
      *v6 = 0;
      v7 = sub_E9E3C(a1, "crypto/conf/conf_mod.c", 244);
      v6[2] = a2;
      v6[1] = v7;
      v6[3] = a3;
      if ( v7 )
      {
        if ( sub_10BD3C(dword_6DF3E0, v6) )
          return 1;
        CRYPTO_free(v6[1], "crypto/conf/conf_mod.c", 253);
        CRYPTO_free(v6, "crypto/conf/conf_mod.c", 254);
      }
      else
      {
        CRYPTO_free(v6, "crypto/conf/conf_mod.c", 248);
      }
    }
    else
    {
      sub_D0048(14, 122, 65, "crypto/conf/conf_mod.c", 239);
    }
  }
  return 0;
}
