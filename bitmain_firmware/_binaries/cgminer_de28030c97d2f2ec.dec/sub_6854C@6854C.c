int sub_6854C(int a1, int a2, int a3, int a4, int a5, char *format, ...)
{
  va_list va; // [sp+38h] [bp+Ch] BYREF

  va_start(va, format);
  return sub_685A4(a1, a2, a3, a4, a5, format, va);
}
