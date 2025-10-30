int __fastcall sub_8E86C(int a1)
{
  CRYPTO_free(*(_DWORD *)(a1 + 1388), "ssl/statem/extensions.c", 1033);
  *(_DWORD *)(a1 + 1388) = 0;
  *(_DWORD *)(a1 + 1384) = 0;
  return 1;
}
