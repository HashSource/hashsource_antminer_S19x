int __fastcall sub_BB0F8(_DWORD *a1)
{
  int v2; // r5
  int result; // r0

  v2 = (int)(a1 + 17);
  sub_D7A10(*a1);
  sub_E07F8(v2, 0x20u);
  sub_E07F8((int)(a1 + 1), 0x20u);
  sub_E07F8((int)(a1 + 9), 0x20u);
  result = sub_E07F8((int)(a1 + 25), 0x20u);
  a1[33] = -1;
  return result;
}
