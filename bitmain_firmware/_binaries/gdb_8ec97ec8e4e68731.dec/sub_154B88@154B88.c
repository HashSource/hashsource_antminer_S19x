int sub_154B88(int result, unsigned int a2, int a3, const char *a4, const char *a5, ...)
{
  int v7; // r6
  va_list va; // [sp+2Ch] [bp+14h] BYREF

  va_start(va, a5);
  if ( ((a4 != 0) & (a2 >> 31)) != 0 )
  {
    v7 = result;
    sub_154A1C(result);
    sub_25A4C0(v7, a5, (char *)va);
    return sub_154980(v7, a2, a4);
  }
  return result;
}
