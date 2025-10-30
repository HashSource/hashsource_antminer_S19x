int __fastcall sub_16F750(int a1, int a2)
{
  int result; // r0

  result = sub_16F5D0(*(_DWORD *)(a1 + 4));
  *(_DWORD *)(a1 + 4) = a2;
  return result;
}
