void *__fastcall sub_557DC(_DWORD *a1, int a2, int a3)
{
  void *result; // r0

  result = memmove((void *)(a2 + 4 * a3), (const void *)(a2 + 4 * (a3 + 1)), 4 * (*a1 - a3));
  --*a1;
  return result;
}
