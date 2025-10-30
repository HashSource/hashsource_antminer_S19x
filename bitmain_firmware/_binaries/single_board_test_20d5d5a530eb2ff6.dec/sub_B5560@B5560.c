int sub_B5560(const void *a1, unsigned int a2, char *a3, ...)
{
  va_list varg_r3; // [sp+14h] [bp+Ch] BYREF

  va_start(varg_r3, a3);
  return sub_B552C(a1, a2, (unsigned __int8 *)a3, (int *)varg_r3);
}
