int sub_64D6C(const char *a1, ...)
{
  va_list varg_r1; // [sp+14h] [bp+Ch] BYREF

  va_start(varg_r1, a1);
  vfprintf((FILE *)stderr, a1, varg_r1);
  return fputc(10, (FILE *)stderr);
}
