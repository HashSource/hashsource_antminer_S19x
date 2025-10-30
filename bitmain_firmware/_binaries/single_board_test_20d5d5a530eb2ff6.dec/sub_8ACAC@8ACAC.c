int __fastcall sub_8ACAC(int a1, int a2)
{
  int result; // r0

  result = sub_10F0FC(*(_DWORD *)(a1 + 16));
  *(_DWORD *)(a1 + 16) = a2;
  return result;
}
