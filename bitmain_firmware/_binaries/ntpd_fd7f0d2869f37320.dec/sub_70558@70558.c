void __noreturn sub_70558(const char *a1, int a2, int a3, ...)
{
  va_list varg_r3; // [sp+14h] [bp+8h] BYREF

  va_start(varg_r3, a3);
  off_B8D88(a1, a2, a3, (int)varg_r3);
  abort();
}
