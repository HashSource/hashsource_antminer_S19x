int sub_6EC04(int *a1, int a2, char *a3, ...)
{
  va_list varg_r3; // [sp+1Ch] [bp+10h] BYREF

  va_start(varg_r3, a3);
  return sub_6EB58(a1, a2, (unsigned __int8 *)a3, (int *)varg_r3);
}
