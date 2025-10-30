void __fastcall sub_10D0AC(int a1)
{
  int v1; // r4

  v1 = *(_DWORD *)(a1 + 12);
  sub_10BFDC(*(_DWORD *)(v1 + 4), sub_10D078);
  sub_BAE3C(*(_DWORD *)v1);
  sub_10C574(*(pthread_rwlock_t **)(v1 + 8));
  CRYPTO_free((void *)v1);
}
