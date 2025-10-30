int sub_65C04(int a1, char *a2, ...)
{
  va_list varg_r2; // [sp+18h] [bp+Ch] BYREF

  va_start(varg_r2, a2);
  return sub_65B84(a1, (unsigned __int8 *)a2, (int)varg_r2);
}
