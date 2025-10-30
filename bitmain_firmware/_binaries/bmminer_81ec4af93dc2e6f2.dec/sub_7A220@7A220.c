int __fastcall sub_7A220(int a1, int a2)
{
  int v2; // r3

  memset((void *)(a1 + 1032), 0, 0x20u);
  LOBYTE(v2) = a2 & 7;
  if ( a2 <= 0 )
    v2 = -(-a2 & 7);
  *(_BYTE *)(a1 + a2 / 8 + 1032) |= ~(unsigned __int8)(255 << (8 - v2));
  memset((void *)(a1 + 1032 + a2 / 8 + 1), 255, 31 - a2 / 8);
  return 0;
}
