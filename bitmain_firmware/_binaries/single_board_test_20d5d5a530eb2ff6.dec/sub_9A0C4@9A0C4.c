int __fastcall sub_9A0C4(int a1, int a2)
{
  int v4; // r4
  int v5; // r6

  v4 = CRYPTO_malloc(52, "ssl/statem/statem_dtls.c", 62);
  if ( v4 )
  {
    v5 = a1;
    if ( !a1 || (v5 = CRYPTO_malloc(a1, "ssl/statem/statem_dtls.c", 68)) != 0 )
    {
      *(_DWORD *)(v4 + 44) = v5;
      if ( !a2 || (a2 = sub_E0740((unsigned int)(a1 + 7) >> 3, "ssl/statem/statem_dtls.c", 80)) != 0 )
      {
        *(_DWORD *)(v4 + 48) = a2;
        return v4;
      }
      else
      {
        sub_D0048(20, 623, 65, "ssl/statem/statem_dtls.c", 82);
        CRYPTO_free(v5, "ssl/statem/statem_dtls.c", 83);
        CRYPTO_free(v4, "ssl/statem/statem_dtls.c", 84);
        return 0;
      }
    }
    else
    {
      sub_D0048(20, 623, 65, "ssl/statem/statem_dtls.c", 69);
      CRYPTO_free(v4, "ssl/statem/statem_dtls.c", 70);
      return 0;
    }
  }
  else
  {
    sub_D0048(20, 623, 65, "ssl/statem/statem_dtls.c", 63);
    return 0;
  }
}
