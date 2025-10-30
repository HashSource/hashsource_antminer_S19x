int sub_2914C8(const char *a1, ...)
{
  va_list varg_r1; // [sp+14h] [bp+Ch] BYREF

  va_start(varg_r1, a1);
  fwrite("readline: ", 1u, 0xAu, (FILE *)stderr);
  vfprintf((FILE *)stderr, a1, varg_r1);
  fputc(10, (FILE *)stderr);
  fflush((FILE *)stderr);
  return sub_28CC28();
}
