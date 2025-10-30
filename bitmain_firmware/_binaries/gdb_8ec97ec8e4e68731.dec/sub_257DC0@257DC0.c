_DWORD *__fastcall sub_257DC0(int a1, int a2, int a3)
{
  _DWORD *result; // r0
  int *v7; // lr

  result = sub_93028(0x10u);
  *result = a1;
  v7 = off_46DD48;
  result[1] = a2;
  result[2] = a3;
  result[3] = 0;
  *v7 = (int)result;
  off_46DD48 = result + 3;
  return result;
}
