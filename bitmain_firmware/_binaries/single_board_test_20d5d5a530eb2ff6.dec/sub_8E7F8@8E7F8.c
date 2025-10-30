int __fastcall sub_8E7F8(int a1)
{
  int v2; // r3

  CRYPTO_free(*(_DWORD *)(*(_DWORD *)(a1 + 124) + 620), "ssl/statem/extensions.c", 1161);
  v2 = *(_DWORD *)(a1 + 124);
  *(_DWORD *)(v2 + 620) = 0;
  *(_DWORD *)(v2 + 628) = 0;
  return 1;
}
