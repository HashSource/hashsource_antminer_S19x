void __fastcall sub_115594(void *a1)
{
  if ( a1 )
  {
    if ( (*(_DWORD *)a1 & 1) != 0 )
      CRYPTO_free(a1);
  }
}
