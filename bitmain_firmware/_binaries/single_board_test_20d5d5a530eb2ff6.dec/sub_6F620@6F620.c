int __fastcall sub_6F620(unsigned int a1)
{
  if ( a1 != 2 )
  {
    if ( a1 > 2 )
    {
      if ( a1 == 256 )
      {
        if ( sub_6FEE0() >= 0 )
          return sub_6FEE0();
      }
      else if ( a1 == 257 && sub_6FEE8() >= 0 )
      {
        return sub_6FEE8();
      }
      return 0;
    }
    if ( a1 == 1 )
      return sub_6F608();
    return 0;
  }
  if ( sub_6FED8() < 0 )
    return 0;
  return sub_6FED8();
}
