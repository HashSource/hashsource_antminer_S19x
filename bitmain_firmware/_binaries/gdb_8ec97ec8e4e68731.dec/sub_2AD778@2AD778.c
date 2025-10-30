void *__fastcall sub_2AD778(int a1)
{
  int v1; // r2
  void *result; // r0

  v1 = *(_DWORD *)(a1 + 84);
  *(_DWORD *)(a1 + 100) = 0;
  *(_DWORD *)(a1 + 104) = 0;
  *(_DWORD *)(a1 + 108) = 0;
  result = memset(*(void **)(a1 + 72), 0, 4 * v1);
  *(_DWORD *)(a1 + 88) = 0;
  return result;
}
