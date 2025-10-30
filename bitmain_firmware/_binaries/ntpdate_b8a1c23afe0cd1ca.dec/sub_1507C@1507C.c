void __noreturn sub_1507C(const char *a1, int a2, int a3, ...)
{
  va_list varg_r3; // [sp+14h] [bp+8h] BYREF

  va_start(varg_r3, a3);
  off_310EC(a1, a2, a3, (int)varg_r3);
  abort();
}
