int __fastcall sub_64BF8(unsigned __int8 a1)
{
  if ( (a1 & 0x80u) == 0 )
    return 1;
  if ( a1 <= 0xBFu )
    return 0;
  if ( a1 == 192 || a1 == 193 )
    return 0;
  if ( a1 > 0xC1u && a1 <= 0xDFu )
    return 2;
  if ( a1 > 0xDFu && a1 <= 0xEFu )
    return 3;
  if ( a1 <= 0xEFu || a1 > 0xF4u )
    return 0;
  return 4;
}
