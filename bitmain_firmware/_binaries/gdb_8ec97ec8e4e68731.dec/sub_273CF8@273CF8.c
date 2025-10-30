int sub_273CF8(int a1, const char *a2, ...)
{
  int v2; // r0
  va_list varg_r2; // [sp+10h] [bp+8h] BYREF

  va_start(varg_r2, a2);
  v2 = sub_273CCC(a1, (int)a2, (int)varg_r2);
  return sub_273D18(v2);
}
