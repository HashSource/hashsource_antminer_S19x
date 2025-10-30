_DWORD *__fastcall sub_19E13C(int a1, _DWORD *a2)
{
  _DWORD *v4; // r4
  _DWORD *result; // r0
  int v6; // r2
  int v7; // r2

  v4 = (_DWORD *)((int (__fastcall *)(int, int))loc_16EC88)(a1, dword_487A14);
  a2[2] = *v4;
  result = sub_163938(a1, 0x18u);
  v6 = *v4;
  *a2 = result;
  *result = v6;
  result[1] = v4[1];
  result[2] = v4[2];
  result[3] = v4[3];
  result[4] = v4[4];
  v7 = v4[4];
  a2[3] = "BOOLEAN";
  a2[4] = v7;
  return result;
}
