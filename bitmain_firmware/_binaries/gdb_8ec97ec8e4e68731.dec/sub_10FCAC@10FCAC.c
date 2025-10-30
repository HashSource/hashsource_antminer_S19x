int __fastcall sub_10FCAC(int a1, int a2)
{
  int result; // r0

  result = ((int (__fastcall *)(int, int))loc_16EC88)(a1, dword_4872C4);
  *(_DWORD *)(result + 8) = a2;
  return result;
}
