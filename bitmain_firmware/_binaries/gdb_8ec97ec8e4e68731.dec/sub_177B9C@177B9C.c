int __fastcall sub_177B9C(int a1, int a2, int a3)
{
  int result; // r0

  result = ((int (__fastcall *)(int, int, int, int))loc_177328)(a1, 22, 16 * *(_DWORD *)(a3 + 20), a2);
  *(_DWORD *)(*(_DWORD *)(result + 24) + 20) = a3;
  return result;
}
