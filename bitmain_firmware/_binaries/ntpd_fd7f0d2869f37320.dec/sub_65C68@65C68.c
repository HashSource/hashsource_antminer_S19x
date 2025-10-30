int sub_65C68(char *a1, ...)
{
  va_list varg_r1; // [sp+14h] [bp+Ch] BYREF

  va_start(varg_r1, a1);
  return sub_65B84((int)stdout, (unsigned __int8 *)a1, (int)varg_r1);
}
