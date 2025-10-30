void *__fastcall sub_1A17B0(_DWORD *a1, void *src, size_t a3)
{
  int v3; // r3
  size_t v5; // r5
  void *result; // r0
  size_t n; // [sp+4h] [bp-4h]

  v3 = a1[1];
  v5 = v3 + a3;
  if ( a1[2] < (signed int)(v3 + a3) )
  {
    n = a3;
    ((void (*)(void))loc_1A15D8)();
    v3 = a1[1];
    a3 = n;
  }
  result = memcpy((void *)(*a1 + v3), src, a3);
  a1[1] = v5;
  return result;
}
