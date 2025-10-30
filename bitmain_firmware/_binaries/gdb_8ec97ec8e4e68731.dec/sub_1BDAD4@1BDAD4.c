_DWORD *__fastcall sub_1BDAD4(int a1, int a2, int a3)
{
  _DWORD *result; // r0
  int v7; // r1

  result = sub_93028(0x10u);
  result[1] = a1;
  result[2] = a2;
  v7 = dword_487C3C;
  result[3] = a3;
  dword_487C3C = (int)result;
  *result = v7;
  return result;
}
