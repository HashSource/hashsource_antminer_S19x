int __fastcall sub_87C80(int a1, int a2)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 524);
  *(_DWORD *)(a1 + 524) = result & ~a2;
  return result;
}
