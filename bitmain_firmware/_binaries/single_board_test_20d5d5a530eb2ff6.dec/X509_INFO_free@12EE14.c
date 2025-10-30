void __fastcall X509_INFO_free(int a1)
{
  if ( a1 )
  {
    X509_free(*(_DWORD *)a1);
    X509_CRL_free(*(_DWORD *)(a1 + 4));
    sub_12EE50(*(_DWORD *)(a1 + 8));
    CRYPTO_free(*(void **)(a1 + 36));
    CRYPTO_free((void *)a1);
  }
}
