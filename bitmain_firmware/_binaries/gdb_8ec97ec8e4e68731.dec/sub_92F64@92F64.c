int sub_92F64(int a1, const char *a2, ...)
{
  int v2; // r0
  va_list varg_r2; // [sp+10h] [bp+8h] BYREF

  va_start(varg_r2, a2);
  v2 = sub_92F34(a1, (int)a2, (int)varg_r2);
  return sub_92F84(v2);
}
