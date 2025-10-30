int __fastcall sub_87CA0(int a1, int a2)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 180);
  *(_DWORD *)(a1 + 180) = result & ~a2;
  return result;
}
