void __noreturn sub_2DE64(const char *a1, ...)
{
  va_list varg_r1; // [sp+14h] [bp+8h] BYREF

  va_start(varg_r1, a1);
  vsnprintf(byte_86FB4, 0x200u, a1, varg_r1);
  sub_1DB6C(3, byte_86FB4, 1);
  exit(1);
}
