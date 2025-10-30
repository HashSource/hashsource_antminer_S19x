int __fastcall sub_BBBC8(__int64 a1, int a2)
{
  int *v2; // r4
  int v3; // r3
  void (*v4)(void); // r2
  int v5; // r0
  int result; // r0

  while ( sub_10C010(dword_6DF3E4, HIDWORD(a1), a2) > 0 )
  {
    a1 = sub_10BD80(dword_6DF3E4);
    v2 = (int *)a1;
    if ( (_DWORD)a1 )
    {
      v3 = *(_DWORD *)a1;
      v4 = *(void (**)(void))(*(_DWORD *)a1 + 12);
      if ( v4 )
      {
        v4();
        v3 = *v2;
      }
      v5 = v2[1];
      --*(_DWORD *)(v3 + 16);
      CRYPTO_free(v5, "crypto/conf/conf_mod.c", 410);
      CRYPTO_free(v2[2], "crypto/conf/conf_mod.c", 411);
      CRYPTO_free(v2, "crypto/conf/conf_mod.c", 412);
    }
  }
  result = sub_10BDB4(dword_6DF3E4);
  dword_6DF3E4 = 0;
  return result;
}
