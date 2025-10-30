int __fastcall sub_B25A0(int *a1, int a2, int a3)
{
  int v3; // r3
  int v4; // r4
  int result; // r0

  v3 = *(_DWORD *)(a3 + 4);
  v4 = *a1;
  result = *(_DWORD *)(*a1 + v3);
  *(_DWORD *)(v4 + v3) = a2;
  return result;
}
