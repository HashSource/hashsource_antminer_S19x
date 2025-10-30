int __fastcall sub_7D624(int a1, int a2)
{
  memset((void *)(a1 + 1032), 0, 0x20u);
  *(_BYTE *)(a1 + a2 / 8 + 1032) |= ~(unsigned __int8)(255 << (8 - a2 % 8));
  memset((void *)(a1 + a2 / 8 + 1033), 255, 31 - a2 / 8);
  return 0;
}
