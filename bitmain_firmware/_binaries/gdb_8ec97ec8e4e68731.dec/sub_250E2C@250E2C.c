int __fastcall sub_250E2C(int a1, _DWORD *a2)
{
  _DWORD *v2; // lr
  int result; // r0
  int v5; // r1
  int v6; // r2
  int v7; // r3

  v2 = (_DWORD *)(a1 + 12);
  result = *(_DWORD *)(a1 + 12);
  v5 = v2[1];
  v6 = v2[2];
  v7 = v2[3];
  *a2 = result;
  a2[1] = v5;
  a2[2] = v6;
  a2[3] = v7;
  a2[4] = v2[4];
  return result;
}
