void sub_259F10(char *a1, ...)
{
  int *v1; // r0
  va_list varg_r1; // [sp+14h] [bp+8h] BYREF

  va_start(varg_r1, a1);
  v1 = (int *)sub_242F8C();
  sub_259E84(*v1, a1, varg_r1);
}
