int __fastcall sub_F14E8(int a1)
{
  void *v2; // r0
  void *v3; // r0
  int result; // r0

  v2 = sub_93094(1u, 0x40u);
  sub_1B6B1C(a1, dword_47B26C, v2);
  v3 = sub_93094(1u, 0x28u);
  result = sub_1B6B1C(a1, dword_4789C4, v3);
  *(_DWORD *)(a1 + 12) |= 1u;
  return result;
}
