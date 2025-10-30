_DWORD *__fastcall sub_292374(int a1, int a2, int a3, int a4)
{
  _DWORD *result; // r0
  int v9; // r1

  result = sub_93028(0x14u);
  result[4] = a1;
  result[1] = a2;
  v9 = dword_48B6E0;
  result[2] = a3;
  result[3] = a4;
  *result = v9;
  dword_48B6E0 = (int)result;
  return result;
}
