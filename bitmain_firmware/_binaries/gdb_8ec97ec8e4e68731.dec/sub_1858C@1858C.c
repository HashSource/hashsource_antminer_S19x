int __fastcall sub_1858C(int a1, unsigned int a2)
{
  int result; // r0
  bool v3; // zf
  unsigned int v4; // r1
  unsigned int v5; // r1

  if ( (a1 & 0xF800) == 0xF000 && (a2 & 0x8000) != 0 )
  {
    if ( (a2 & 0x1000) == 0 && (a2 & 0xFFFFD001) != 0xC000 )
    {
      if ( (a2 & 0xD000) == 0x8000 )
        return (a1 & 0x380) != 896;
      return 0;
    }
    return 1;
  }
  if ( (a1 & 0xFFFFFE50) == 0xE810 )
  {
    result = a1 & 0x180;
    if ( ((result - 128) & 0xFF00) != 0 )
    {
      v3 = result == 0;
      v4 = __clz(result - 384);
      if ( !result )
        result = 1;
      v5 = v4 >> 5;
      if ( !v3 )
        return v5;
    }
    else
    {
      return a2 >> 15;
    }
  }
  else
  {
    if ( (a1 & 0xFFEF) == 0xEA4F && (a2 & 0xFFF0) == 0xF00 )
      return 1;
    if ( (a1 & 0xFF70) == 0xF850 && (a2 & 0xF000) == 0xF000 )
    {
      if ( (a1 & 0xF) == 0xF || (a1 & 0x80) != 0 || (a2 & 0x800) != 0 )
        return 1;
      return (a2 & 0xFC0) == 0;
    }
    else
    {
      if ( (a1 & 0xFFF0) != 0xE8D0 )
        return 0;
      return (a2 & 0xFFE0) == 61440;
    }
  }
  return result;
}
