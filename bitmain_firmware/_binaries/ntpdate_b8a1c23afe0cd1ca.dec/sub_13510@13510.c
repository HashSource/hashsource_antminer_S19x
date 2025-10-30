void *__fastcall sub_13510(int a1, void *dest, size_t a3)
{
  size_t v5; // r2
  void *result; // r0

  v5 = *(_DWORD *)(a1 + 8);
  if ( v5 > a3 )
    sub_1073C();
  if ( !dest )
    sub_1073C();
  result = memmove(dest, *(const void **)(a1 + 4), v5);
  *(_DWORD *)(a1 + 4) = dest;
  *(_DWORD *)(a1 + 8) = a3;
  return result;
}
