void __fastcall sub_1156A4(int *a1)
{
  int v1; // r5

  if ( a1 )
  {
    v1 = *a1;
    if ( *a1 )
    {
      sub_BAE3C(*(_DWORD *)(v1 + 8));
      sub_10BFDC(*(_DWORD *)v1, (void (__fastcall *)(int))X509_NAME_ENTRY_free);
      CRYPTO_free(*(void **)(v1 + 12));
      CRYPTO_free((void *)v1);
      *a1 = 0;
    }
  }
}
