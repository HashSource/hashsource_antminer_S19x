void __noreturn sub_C954(int a1, ...)
{
  va_list varg_r1; // [sp+14h] [bp+8h] BYREF

  va_start(varg_r1, a1);
  sub_64E88(0, a1, (char *)varg_r1);
  exit(1);
}
