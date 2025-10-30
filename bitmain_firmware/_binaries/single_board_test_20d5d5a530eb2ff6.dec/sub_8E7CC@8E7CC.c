int __fastcall sub_8E7CC(int a1)
{
  int v2; // r3

  CRYPTO_free(*(_DWORD *)(*(_DWORD *)(a1 + 124) + 616), "ssl/statem/extensions.c", 1151);
  v2 = *(_DWORD *)(a1 + 124);
  *(_DWORD *)(v2 + 616) = 0;
  *(_DWORD *)(v2 + 624) = 0;
  return 1;
}
