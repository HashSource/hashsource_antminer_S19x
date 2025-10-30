int sub_6F554(const char *a1, int a2, int a3, ...)
{
  va_list varg_r3; // [sp+1Ch] [bp+10h] BYREF

  va_start(varg_r3, a3);
  return ((int (__fastcall *)(const char *, int, int, int))off_B7D84[0])(a1, a2, a3, (int)varg_r3);
}
