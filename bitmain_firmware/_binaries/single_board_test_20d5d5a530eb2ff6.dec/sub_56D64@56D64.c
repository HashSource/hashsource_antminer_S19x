int __fastcall sub_56D64(int a1, int a2)
{
  int result; // r0

  result = a1 + 0x40000;
  *(_DWORD *)(result + 28) = a2;
  return result;
}
