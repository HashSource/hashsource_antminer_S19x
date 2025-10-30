int __fastcall sub_177448(int a1, int a2, int a3, int a4)
{
  int v7; // r4
  int v8; // r0
  int result; // r0

  v7 = *(_DWORD *)(a4 + 4 * ((int (*)(void))loc_165BB8)());
  v8 = sub_16F904(a2, v7);
  result = ((int (__fastcall *)(int, int, int, int))loc_177328)(a1, 9, v8, a3);
  *(_DWORD *)(*(_DWORD *)(result + 24) + 28) = v7;
  return result;
}
