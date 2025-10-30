void sub_25A7C0(int a1, int a2, char *a3, ...)
{
  va_list varg_r3; // [sp+14h] [bp+Ch] BYREF

  va_start(varg_r3, a3);
  sub_25A7A0(a1, a2);
  sub_259E84(a2, a3, varg_r3);
}
