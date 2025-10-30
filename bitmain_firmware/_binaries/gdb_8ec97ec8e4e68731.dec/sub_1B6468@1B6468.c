int __fastcall sub_1B6468(int a1, int a2, int a3)
{
  int v4; // r4
  int result; // r0
  int v7; // r3

  v4 = *(_DWORD *)(a3 + 168);
  result = 12 * sub_162FDC(a1, a2);
  v7 = v4 + result;
  *(_DWORD *)(v7 + 4) = a3;
  *(_DWORD *)(v4 + result) = a2;
  *(_DWORD *)(v7 + 8) = 0;
  return result;
}
