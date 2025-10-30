int sub_92F84(int a1, ...)
{
  int v1; // r0
  va_list varg_r1; // [sp+14h] [bp+8h] BYREF

  va_start(varg_r1, a1);
  v1 = sub_92F4C(a1, (int)varg_r1);
  return sub_92FA4(v1);
}
