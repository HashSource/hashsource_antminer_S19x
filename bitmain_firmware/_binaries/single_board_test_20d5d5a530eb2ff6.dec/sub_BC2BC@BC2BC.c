int __fastcall sub_BC2BC(int a1, int a2, _DWORD *a3, _DWORD *a4)
{
  int v4; // r4
  int result; // r0

  v4 = *(_DWORD *)(a1 + 8 * a2);
  result = a1 + 8 * a2;
  *a3 = v4;
  *a4 = *(_DWORD *)(result + 4);
  return result;
}
