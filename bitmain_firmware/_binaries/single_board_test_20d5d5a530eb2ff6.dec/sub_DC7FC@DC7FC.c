int __fastcall sub_DC7FC(int a1, int a2)
{
  int v4; // r0
  int v5; // r4
  int v6; // r0
  _DWORD *v7; // r4
  _DWORD *v8; // r6
  int v9; // r1
  int v10; // r0
  char *v11; // r1
  int v12; // r0
  int v13; // r4

  v4 = sub_E0740(24, "crypto/hmac/hm_pmeth.c", 31);
  if ( v4 )
  {
    v5 = v4;
    *(_DWORD *)(v4 + 8) = 4;
    v6 = sub_DCB64();
    *(_DWORD *)(v5 + 20) = v6;
    if ( v6 )
    {
      *(_DWORD *)(a1 + 20) = v5;
      *(_DWORD *)(a1 + 36) = 0;
      v7 = (_DWORD *)sub_DB984(a2);
      v8 = (_DWORD *)sub_DB984(a1);
      v9 = v7[5];
      v10 = v8[5];
      *v8 = *v7;
      if ( sub_DCB90(v10, v9) )
      {
        v11 = (char *)v7[3];
        if ( !v11 || sub_1280A4((int)(v8 + 1), v11, v7[1]) )
          return 1;
      }
      v12 = sub_DB984(a1);
      v13 = v12;
      if ( v12 )
      {
        sub_DCA8C(*(_DWORD *)(v12 + 20));
        sub_E0758(*(_DWORD *)(v13 + 12), *(_DWORD *)(v13 + 4), (size_t)"crypto/hmac/hm_pmeth.c");
        CRYPTO_free(v13, "crypto/hmac/hm_pmeth.c", 81);
        sub_DB980(a1, 0);
        return 0;
      }
    }
    else
    {
      CRYPTO_free(v5, "crypto/hmac/hm_pmeth.c", 38);
    }
    return 0;
  }
  else
  {
    sub_D0048(15, 123, 65, (int)"crypto/hmac/hm_pmeth.c", 32);
    return 0;
  }
}
