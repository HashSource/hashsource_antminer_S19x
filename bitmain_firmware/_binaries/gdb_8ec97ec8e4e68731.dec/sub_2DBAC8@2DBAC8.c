int __fastcall sub_2DBAC8(int a1, int a2)
{
  int result; // r0

  if ( (*(_WORD *)(a2 + 24) & 0x380) != 0x100 )
    result = sub_2A6BBC("elflink.c", 7257);
  *(_WORD *)(a2 + 24) &= 0xFC7Fu;
  return result;
}
