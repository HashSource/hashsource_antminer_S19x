int __fastcall sub_87C90(int a1, int a2)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 180);
  *(_DWORD *)(a1 + 180) = a2 | result;
  return result;
}
