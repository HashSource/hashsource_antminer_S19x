int sub_AABC(int a1, unsigned __int8 *a2, ...)
{
  va_list varg_r2; // [sp+18h] [bp+Ch] BYREF

  va_start(varg_r2, a2);
  return sub_AA3C(a1, a2, (int)varg_r2);
}
