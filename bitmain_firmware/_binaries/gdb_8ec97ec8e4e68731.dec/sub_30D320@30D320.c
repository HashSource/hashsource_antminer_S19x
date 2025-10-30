void *__fastcall sub_30D320(__int64 a1, size_t a2)
{
  int v2; // r4
  const void *v4; // r6
  void *result; // r0

  v2 = a1;
  v4 = (const void *)HIDWORD(a1);
  HIDWORD(a1) = a2;
  sub_30D298(a1);
  result = memcpy(*(void **)(v2 + 4), v4, a2);
  *(_DWORD *)(v2 + 4) += a2;
  return result;
}
