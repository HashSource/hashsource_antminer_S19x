void __fastcall sub_130600(int a1)
{
  if ( a1 )
  {
    sub_B895C(*(_DWORD *)a1);
    sub_B895C(*(_DWORD *)(a1 + 4));
    sub_B895C(*(_DWORD *)(a1 + 8));
    sub_B895C(*(_DWORD *)(a1 + 12));
    sub_10C574(*(pthread_rwlock_t **)(a1 + 36));
    CRYPTO_free((void *)a1);
  }
}
