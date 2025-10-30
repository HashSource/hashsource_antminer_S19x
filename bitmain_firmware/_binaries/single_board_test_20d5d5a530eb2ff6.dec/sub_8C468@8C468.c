int __fastcall sub_8C468(int a1, int a2)
{
  int result; // r0

  result = sub_BC4D4(*(_DWORD *)(a1 + 264));
  *(_DWORD *)(a1 + 264) = a2;
  return result;
}
