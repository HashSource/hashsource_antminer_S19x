int __fastcall sub_D8938(int a1, int a2)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 96);
  *(_DWORD *)(a1 + 96) = a2;
  return result;
}
