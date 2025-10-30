unsigned int __fastcall sub_14DF0(unsigned int result, unsigned int a2)
{
  if ( a2 != 1 )
  {
    if ( a2 )
    {
      if ( result <= a2 )
      {
        return result == a2;
      }
      else if ( (a2 & (a2 - 1)) != 0 )
      {
        return ((int (*)(void))((char *)&loc_14E28 + 16 * (31 - (__clz(a2) - __clz(result)))))();
      }
      else
      {
        result >>= 31 - __clz(a2);
      }
    }
    else
    {
      if ( result )
        result = -1;
      return sub_153E0(result);
    }
  }
  return result;
}
