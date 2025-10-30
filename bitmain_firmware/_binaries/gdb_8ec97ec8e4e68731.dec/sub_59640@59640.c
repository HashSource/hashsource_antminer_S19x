_DWORD *sub_59640(_DWORD *a1, int (__fastcall *a2)(_BYTE *, int, const char *, char *), int a3, const char *a4, ...)
{
  int v5; // r0
  _BYTE v7[4]; // [sp+0h] [bp-18h] BYREF
  va_list v8; // [sp+4h] [bp-14h]
  va_list va; // [sp+20h] [bp+8h] BYREF

  va_start(va, a4);
  va_copy(v8, va);
  v5 = a2(v7, a3, a4, (char *)va);
  *a1 = a1 + 2;
  sub_57278(a1, v7, (int)&v7[v5]);
  return a1;
}
