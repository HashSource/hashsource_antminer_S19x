unsigned int __fastcall sub_1C398(unsigned int result, unsigned int a2)
{
  if ( a2 != 1 )
  {
    if ( !a2 )
      JUMPOUT(0x1C9B0);
    if ( result <= a2 )
    {
      return result == a2;
    }
    else if ( (a2 & (a2 - 1)) != 0 )
    {
      return ((int (*)(void))((char *)&loc_1C3D0 + 16 * (31 - (__clz(a2) - __clz(result)))))();
    }
    else
    {
      result >>= 31 - __clz(a2);
    }
  }
  return result;
}
