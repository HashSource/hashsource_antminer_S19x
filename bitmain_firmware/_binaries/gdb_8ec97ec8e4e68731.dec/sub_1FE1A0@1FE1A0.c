int __fastcall sub_1FE1A0(int a1, int a2)
{
  int result; // r0

  result = a1 + 0x2000;
  *(_DWORD *)(result + 36) = a2;
  return result;
}
