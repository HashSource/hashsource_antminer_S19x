int sub_10B864(int a1, int a2, ...)
{
  va_list varg_r2; // [sp+10h] [bp+8h] BYREF

  va_start(varg_r2, a2);
  sub_25A4C0(a1, a2, (char *)varg_r2);
  return 0;
}
