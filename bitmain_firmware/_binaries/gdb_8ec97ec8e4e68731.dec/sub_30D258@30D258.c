void *__fastcall sub_30D258(int *a1, const void *a2, size_t a3, int a4)
{
  void *v8; // r5
  void *result; // r0
  int v10; // r2

  v8 = sub_93028(a3 + 1);
  result = memcpy(v8, a2, a3);
  v10 = *a1;
  *((_BYTE *)v8 + a3) = 0;
  *(_DWORD *)(v10 + 4 * a4) = v8;
  return result;
}
