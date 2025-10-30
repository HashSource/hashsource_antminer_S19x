void __fastcall sub_12A788(void *a1)
{
  if ( (*((_DWORD *)a1 + 4) & 1) != 0 )
    CRYPTO_free(a1);
}
