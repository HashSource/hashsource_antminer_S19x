int __fastcall sub_1829C(__int16 a1)
{
  if ( (a1 & 0xE000) != 0xE000 )
    return 2;
  if ( (a1 & 0x1800) != 0 )
    return 4;
  return 2;
}
