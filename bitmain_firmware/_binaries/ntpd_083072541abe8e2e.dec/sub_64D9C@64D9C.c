int sub_64D9C(int a1, int a2, unsigned __int8 *a3, ...)
{
  va_list varg_r3; // [sp+1Ch] [bp+10h] BYREF

  va_start(varg_r3, a3);
  return sub_64BBC(a1, a2, a3, (int)varg_r3);
}
