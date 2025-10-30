_DWORD *__fastcall sub_2803C8(int a1, int a2)
{
  _DWORD *result; // r0
  int v5; // r4
  int v6; // lr

  result = sub_93028(0x24u);
  v5 = dword_4900D8;
  v6 = dword_4900DC;
  *result = a1;
  result[7] = a2;
  result[5] = v5;
  result[6] = v6;
  result[2] = 0;
  result[1] = 0;
  result[3] = 0;
  result[4] = -1;
  result[8] = -1;
  return result;
}
