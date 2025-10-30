void __fastcall sub_11DE40(void *a1)
{
  if ( (*((_DWORD *)a1 + 1) & 1) != 0 )
    CRYPTO_free(a1);
}
