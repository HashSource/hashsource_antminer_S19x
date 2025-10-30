void __noreturn sub_52B50(const char *a1, ...)
{
  va_list varg_r1; // [sp+14h] [bp+8h] BYREF

  va_start(varg_r1, a1);
  vsnprintf(byte_1AEEBC, 0x200u, a1, varg_r1);
  sub_47AB4(3, byte_1AEEBC, 1);
  exit(1);
}
