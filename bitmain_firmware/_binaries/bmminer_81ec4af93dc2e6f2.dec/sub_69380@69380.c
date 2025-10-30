int __fastcall sub_69380(unsigned __int16 a1)
{
  if ( a1 == 113 )
    return 64;
  if ( a1 > 0x71u )
  {
    if ( a1 > 0x78u )
    {
      if ( a1 == 193 )
        return 0;
      return (unsigned __int8)-1;
    }
    if ( a1 < 0x75u && a1 != 115 )
      return (unsigned __int8)-1;
    return 64;
  }
  if ( a1 != 98 )
  {
    if ( a1 <= 0x62u )
    {
      if ( a1 != 65 )
        return (unsigned __int8)-1;
      return 64;
    }
    if ( (unsigned int)a1 - 100 > 2 )
      return (unsigned __int8)-1;
  }
  return 0;
}
