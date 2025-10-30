void __noreturn sub_2EE70(const char *a1, ...)
{
  va_list varg_r1; // [sp+14h] [bp+8h] BYREF

  va_start(varg_r1, a1);
  vsnprintf(byte_8814C, 0x200u, a1, varg_r1);
  sub_1E4EC(3, byte_8814C, 1);
  exit(1);
}
