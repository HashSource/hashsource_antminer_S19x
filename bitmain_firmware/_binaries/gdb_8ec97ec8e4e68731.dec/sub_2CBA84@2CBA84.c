char *__fastcall sub_2CBA84(unsigned int a1)
{
  if ( a1 == 5 )
    return "SHLIB";
  if ( a1 > 5 )
  {
    if ( a1 == 1685382480 )
      return "EH_FRAME";
    if ( a1 <= 0x6474E550 )
    {
      if ( a1 == 6 )
        return "PHDR";
      if ( a1 == 7 )
        return "TLS";
    }
    else
    {
      if ( a1 == 1685382481 )
        return "STACK";
      if ( a1 == 1685382482 )
        return "RELRO";
    }
    return 0;
  }
  if ( a1 == 2 )
    return "DYNAMIC";
  if ( a1 <= 2 )
  {
    if ( a1 )
      return "LOAD";
    else
      return "NULL";
  }
  else if ( a1 == 3 )
  {
    return "INTERP";
  }
  else
  {
    return "NOTE";
  }
}
