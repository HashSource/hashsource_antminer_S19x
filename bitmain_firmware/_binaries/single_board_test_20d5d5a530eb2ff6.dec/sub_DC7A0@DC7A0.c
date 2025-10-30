int __fastcall sub_DC7A0(int a1)
{
  int v2; // r0
  int v3; // r4
  int v4; // r5

  v2 = sub_E0740(24, "crypto/hmac/hm_pmeth.c", 31);
  v3 = v2;
  if ( v2 )
  {
    *(_DWORD *)(v2 + 8) = 4;
    v4 = sub_DCB64();
    *(_DWORD *)(v3 + 20) = v4;
    if ( v4 )
    {
      *(_DWORD *)(a1 + 20) = v3;
      *(_DWORD *)(a1 + 36) = 0;
      return 1;
    }
    else
    {
      CRYPTO_free(v3, "crypto/hmac/hm_pmeth.c", 38);
      return 0;
    }
  }
  else
  {
    sub_D0048(15, 123, 65, (int)"crypto/hmac/hm_pmeth.c", 32);
    return 0;
  }
}
