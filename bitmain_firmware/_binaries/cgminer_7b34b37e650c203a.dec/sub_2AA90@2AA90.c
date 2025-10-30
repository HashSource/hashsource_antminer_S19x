void __noreturn sub_2AA90(const char *a1, ...)
{
  va_list varg_r1; // [sp+14h] [bp+8h] BYREF

  va_start(varg_r1, a1);
  vsnprintf(byte_68BD8, 0x200u, a1, varg_r1);
  sub_20F58(3, byte_68BD8, 1);
  exit(1);
}
