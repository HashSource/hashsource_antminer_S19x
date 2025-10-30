void __fastcall sub_16C990(void *a1)
{
  if ( a1 )
  {
    if ( (*((_DWORD *)a1 + 4) & 2) != 0 )
      (*(void (__fastcall **)(void *, _DWORD))(*(_DWORD *)a1 + 28))(a1, *((_DWORD *)a1 + 2));
    sub_10BFDC(*((_DWORD *)a1 + 1), (void (__fastcall *)(int))sub_16C6A0);
    sub_DC2BC(0xBu, (int)a1, (_DWORD *)a1 + 3);
    sub_10C574(*((pthread_rwlock_t **)a1 + 5));
    CRYPTO_free(a1);
  }
}
