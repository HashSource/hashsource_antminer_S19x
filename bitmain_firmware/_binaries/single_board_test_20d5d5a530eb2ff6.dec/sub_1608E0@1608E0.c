void __fastcall sub_1608E0(int a1)
{
  if ( a1 )
  {
    BIO_vfree_0(*(_DWORD *)(a1 + 16));
    CRYPTO_free(*(void **)(a1 + 4));
    CRYPTO_free((void *)a1);
  }
}
