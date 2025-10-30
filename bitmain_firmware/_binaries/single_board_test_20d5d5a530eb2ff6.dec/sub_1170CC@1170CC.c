void __fastcall sub_1170CC(void *a1)
{
  if ( *(_DWORD *)a1 )
  {
    if ( (**(_DWORD **)a1 & 8) != 0 )
      CRYPTO_free(a1);
  }
}
