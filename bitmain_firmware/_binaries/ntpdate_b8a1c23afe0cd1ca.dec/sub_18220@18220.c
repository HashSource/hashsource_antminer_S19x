int sub_18220(int a1, int a2, int a3, int a4, _DWORD *a5, int a6, int a7, int a8, ...)
{
  va_list va; // [sp+40h] [bp+20h] BYREF

  va_start(va, a8);
  return sub_172B8(a1, a2, a3, a4, 1, a5, a6, a7, a8, (int *)va);
}
