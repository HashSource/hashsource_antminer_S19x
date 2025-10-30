char **sub_931D8(char **a1, const char *a2, ...)
{
  size_t v3; // r0
  va_list varg_r2; // [sp+18h] [bp+10h] BYREF

  va_start(varg_r2, a2);
  v3 = vsnprintf(0, 0, a2, varg_r2);
  *a1 = (char *)(a1 + 2);
  sub_33B318((int)a1, v3, 0);
  vsprintf(*a1, a2, varg_r2);
  return a1;
}
