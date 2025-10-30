int sub_73300(int a1, int a2, int a3, int a4, char *a5, ...)
{
  va_list va; // [sp+34h] [bp+14h] BYREF

  va_start(va, a5);
  return sub_72648(a1, a2, a3, a4, 0, 0, 0, 0, (unsigned __int8 *)a5, (int *)va);
}
