int __fastcall sub_56644(unsigned int a1)
{
  int v6; // [sp+Ch] [bp-8h]

  v6 = 0;
  if ( a1 == 2 )
  {
    if ( sub_57E70() < 0 )
      return 0;
    else
      return sub_57E70();
  }
  else if ( a1 > 2 )
  {
    if ( a1 == 256 )
    {
      if ( sub_57EB0() < 0 )
        return 0;
      else
        return sub_57EB0();
    }
    else if ( a1 == 257 )
    {
      if ( sub_57EF0() < 0 )
        return 0;
      else
        return sub_57EF0();
    }
  }
  else if ( a1 == 1 )
  {
    if ( sub_57E30() < 0 )
      return 0;
    else
      return sub_57E30();
  }
  return v6;
}
