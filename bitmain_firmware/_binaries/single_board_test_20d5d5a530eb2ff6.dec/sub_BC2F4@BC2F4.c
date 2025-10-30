int sub_BC2F4(const char *a1, ...)
{
  va_list varg_r1; // [sp+14h] [bp+8h] BYREF

  va_start(varg_r1, a1);
  return vfprintf((FILE *)stderr, a1, varg_r1);
}
