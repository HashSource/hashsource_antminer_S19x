void __fastcall sub_171570(int a1)
{
  int v2; // r0

  if ( a1 )
  {
    CRYPTO_free(*(void **)a1);
    CRYPTO_free(*(void **)(a1 + 4));
    v2 = *(_DWORD *)(a1 + 8);
    if ( v2 )
      sub_10BFDC(v2, (void (__fastcall *)(int))sub_1714F4);
    CRYPTO_free((void *)a1);
  }
}
