void __fastcall ASN1_OBJECT_free(int a1)
{
  int v2; // r3

  if ( a1 )
  {
    v2 = *(_DWORD *)(a1 + 20);
    if ( (v2 & 4) != 0 )
    {
      CRYPTO_free(*(void **)a1);
      CRYPTO_free(*(void **)(a1 + 4));
      v2 = *(_DWORD *)(a1 + 20);
      *(_DWORD *)(a1 + 4) = 0;
      *(_DWORD *)a1 = 0;
    }
    if ( (v2 & 8) != 0 )
    {
      CRYPTO_free(*(void **)(a1 + 16));
      v2 = *(_DWORD *)(a1 + 20);
      *(_DWORD *)(a1 + 16) = 0;
      *(_DWORD *)(a1 + 12) = 0;
    }
    if ( (v2 & 1) != 0 )
      CRYPTO_free((void *)a1);
  }
}
