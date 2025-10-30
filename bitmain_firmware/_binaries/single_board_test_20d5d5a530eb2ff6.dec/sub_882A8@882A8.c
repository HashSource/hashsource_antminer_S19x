int __fastcall sub_882A8(int a1, int a2)
{
  int result; // r0

  result = sub_B717C(*(_DWORD *)(a1 + 8));
  *(_DWORD *)(a1 + 8) = a2;
  return result;
}
