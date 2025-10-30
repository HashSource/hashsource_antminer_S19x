void __fastcall X509_OBJECT_free(_DWORD *a1, int a2, int a3)
{
  if ( a1 )
  {
    if ( *a1 == 1 )
    {
      X509_free(a1[1], a2, a3);
    }
    else if ( *a1 == 2 )
    {
      X509_CRL_free(a1[1]);
    }
  }
  CRYPTO_free(a1);
}
