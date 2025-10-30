__int16 *__fastcall sub_15420(unsigned int a1, int a2)
{
  _DWORD *v4; // r0

  v4 = (_DWORD *)sub_63BA4(0, 12, 0, 0);
  v4[1] = a1;
  v4[2] = a2;
  *v4 = fd_list;
  fd_list = (int)v4;
  return sub_15274(a1, 0);
}
