void sub_25A800(int a1, char *a2, ...)
{
  int *v3; // r0
  int *v4; // r0
  va_list varg_r2; // [sp+18h] [bp+Ch] BYREF

  va_start(varg_r2, a2);
  v3 = (int *)sub_242F8C();
  sub_25A7A0(a1, *v3);
  v4 = (int *)sub_242F8C();
  sub_259E84(*v4, a2, varg_r2);
}
