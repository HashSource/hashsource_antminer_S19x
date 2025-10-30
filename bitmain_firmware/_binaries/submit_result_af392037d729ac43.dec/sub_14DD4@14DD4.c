int sub_14DD4(int a1, int a2, int a3, int a4, int a5, char *format, ...)
{
  va_list __varargs; // [sp+30h] [bp+18h] BYREF

  va_start(__varargs, format);
  return sub_14DA8(a1, a2, a3, a4, a5, format, __varargs);
}
