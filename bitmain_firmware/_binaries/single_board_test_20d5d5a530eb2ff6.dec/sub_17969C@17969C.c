void __fastcall sub_17969C(int a1)
{
  void **v2; // r8
  signed int v3; // r4
  void **v4; // r5

  if ( !*(_DWORD *)(a1 + 4) )
  {
    v2 = *(void ***)(a1 + 8);
    v3 = sub_10C010((int)v2) - 1;
    if ( v3 >= 0 )
    {
      do
      {
        v4 = (void **)sub_10C01C(v2, v3);
        CRYPTO_free(v4[2]);
        --v3;
        CRYPTO_free(v4[1]);
        CRYPTO_free(v4);
      }
      while ( v3 != -1 );
    }
    sub_10BDB4(v2);
    CRYPTO_free(*(void **)a1);
    CRYPTO_free((void *)a1);
  }
}
