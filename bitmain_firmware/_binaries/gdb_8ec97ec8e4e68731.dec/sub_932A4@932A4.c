int __fastcall sub_932A4(_DWORD *a1, char *format, __gnuc_va_list arg)
{
  int v6; // r0
  int v7; // r6

  v6 = vsnprintf(0, 0, format, arg);
  v7 = a1[1];
  sub_33BB34((int)a1, v6 + v7, 0);
  return vsprintf((char *)(*a1 + v7), format, arg);
}
