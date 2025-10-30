void __fastcall X509_VERIFY_PARAM_free(int a1)
{
  if ( a1 )
  {
    sub_10BFDC(*(_DWORD *)(a1 + 32), (void (__fastcall *)(int))ASN1_OBJECT_free);
    sub_10BFDC(*(_DWORD *)(a1 + 36), (void (__fastcall *)(int))sub_113300);
    CRYPTO_free(*(void **)(a1 + 44));
    CRYPTO_free(*(void **)(a1 + 48));
    CRYPTO_free(*(void **)(a1 + 56));
    CRYPTO_free((void *)a1);
  }
}
