void __fastcall sub_10D078(int a1)
{
  CRYPTO_free(*(void **)a1);
  sub_10BFDC(*(_DWORD *)(a1 + 8), (void (__fastcall *)(int))sub_10CC78);
  CRYPTO_free((void *)a1);
}
