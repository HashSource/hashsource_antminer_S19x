bool __fastcall sub_92744(unsigned int a1)
{
  if ( a1 > 0x17 )
  {
    if ( a1 == 47 )
      return 1;
    if ( a1 <= 0x2F )
    {
      if ( a1 == 35 || a1 >= 0x23 && a1 - 41 <= 4 )
        return 1;
    }
    else
    {
      if ( a1 == 51 )
        return 1;
      if ( a1 > 0x33 )
        return a1 == 13172 || a1 == 65281;
      if ( a1 == 49 )
        return 1;
    }
    return 0;
  }
  if ( a1 >= 0x15 )
    return 1;
  if ( a1 <= 0xE )
    return a1 >= 0xA || a1 <= 1 || a1 == 5;
  return a1 == 16 || a1 == 18;
}
