int __fastcall sub_B742C(int a1, int a2)
{
  *(_DWORD *)(a1 + 12) = a2;
  *(_DWORD *)(a1 + 8) = bwrite_conv;
  return 1;
}
