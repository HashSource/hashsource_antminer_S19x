void *__fastcall sub_1DE1A0(_DWORD *a1, int a2, void *src)
{
  void *result; // r0

  result = memcpy(
             (void *)(a1[2] + *(_DWORD *)(*(_DWORD *)(*a1 + 16) + 4 * a2)),
             src,
             *(_DWORD *)(*(_DWORD *)(*a1 + 20) + 4 * a2));
  *(_BYTE *)(a1[3] + a2) = 1;
  return result;
}
