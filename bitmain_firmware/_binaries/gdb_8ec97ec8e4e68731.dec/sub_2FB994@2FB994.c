int sub_2FB994(int a1, const char *a2, ...)
{
  va_list varg_r2; // [sp+18h] [bp+Ch] BYREF

  va_start(varg_r2, a2);
  printf("bfd plugin: ");
  vfprintf((FILE *)stdout, a2, varg_r2);
  IO_putc(10, (_IO_FILE *)stdout);
  return 0;
}
