char *sub_64E00(char *a1, char *a2, ...)
{
  char v4[1024]; // [sp+4h] [bp-408h] BYREF
  va_list varg_r2; // [sp+420h] [bp+14h] BYREF

  va_start(varg_r2, a2);
  sub_64BBC((int)v4, 1024, (unsigned __int8 *)a2, (int)varg_r2);
  return sub_648EC(a1, v4);
}
