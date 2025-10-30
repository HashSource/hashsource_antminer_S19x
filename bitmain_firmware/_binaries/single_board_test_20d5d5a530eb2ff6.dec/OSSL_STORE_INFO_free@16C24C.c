void __fastcall OSSL_STORE_INFO_free(void *a1)
{
  if ( a1 )
  {
    switch ( *(_DWORD *)a1 )
    {
      case 0xFFFFFFFF:
        sub_BAE3C(*((_DWORD *)a1 + 1));
        CRYPTO_free(*((void **)a1 + 2));
        break;
      case 1:
        CRYPTO_free(*((void **)a1 + 1));
        CRYPTO_free(*((void **)a1 + 2));
        break;
      case 2:
      case 3:
        sub_DA240(*((_DWORD *)a1 + 1));
        break;
      case 4:
        X509_free(*((_DWORD *)a1 + 1));
        break;
      case 5:
        X509_CRL_free(*((_DWORD *)a1 + 1));
        break;
      default:
        break;
    }
    CRYPTO_free(a1);
  }
}
