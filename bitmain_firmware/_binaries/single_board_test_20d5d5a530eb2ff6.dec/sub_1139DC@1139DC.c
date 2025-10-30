bool __fastcall sub_1139DC(_DWORD *a1, int a2)
{
  int v3; // r5
  _BOOL4 result; // r0

  v3 = a1[2];
  a1[2] = v3 | 1;
  result = sub_1137F0(a1, a2);
  a1[2] = v3;
  return result;
}
