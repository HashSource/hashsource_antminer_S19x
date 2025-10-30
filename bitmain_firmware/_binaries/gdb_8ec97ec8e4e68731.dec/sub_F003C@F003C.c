int __fastcall sub_F003C(int a1, int a2)
{
  int v2; // r3
  int result; // r0

  v2 = *(_DWORD *)(a1 + 28);
  result = *(_DWORD *)(v2 - 4);
  *(_DWORD *)(v2 - 4) = a2;
  return result;
}
