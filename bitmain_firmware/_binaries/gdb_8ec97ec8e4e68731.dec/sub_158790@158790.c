_DWORD *__fastcall sub_158790(int a1, _DWORD *a2)
{
  _DWORD *v4; // r4
  _DWORD *result; // r0
  int v6; // r2
  int v7; // r2

  v4 = (_DWORD *)((int (__fastcall *)(int, int))loc_16EC88)(a1, dword_4876D4);
  a2[2] = *v4;
  result = (_DWORD *)sub_163938(a1, 0x38u);
  v6 = *v4;
  *a2 = result;
  *result = v6;
  result[1] = v4[3];
  result[2] = v4[4];
  result[3] = v4[5];
  result[4] = v4[6];
  result[7] = v4[7];
  result[8] = v4[8];
  result[9] = v4[9];
  result[10] = v4[10];
  result[11] = v4[11];
  result[12] = v4[13];
  v7 = v4[5];
  a2[3] = "logical";
  a2[4] = v7;
  return result;
}
