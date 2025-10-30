void __fastcall sub_12EE50(int a1)
{
  if ( a1 )
  {
    X509_ALGOR_free(*(_DWORD *)(a1 + 4));
    j_ASN1_STRING_free(*(_DWORD *)(a1 + 8));
    sub_DA240(*(_DWORD *)(a1 + 12));
    if ( *(_DWORD *)(a1 + 24) )
      CRYPTO_free(*(void **)(a1 + 20));
    CRYPTO_free((void *)a1);
  }
}
