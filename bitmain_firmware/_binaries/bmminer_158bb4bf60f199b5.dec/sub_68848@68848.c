int __fastcall sub_68848(unsigned int a1)
{
  if ( a1 == 2 )
  {
    if ( sub_69B70() < 0 )
      return 0;
    return sub_69B70();
  }
  else if ( a1 <= 2 )
  {
    if ( a1 != 1 )
      return 0;
    return sub_68828();
  }
  else
  {
    if ( a1 != 256 )
    {
      if ( a1 == 257 && sub_69BA8() >= 0 )
        return sub_69BA8();
      return 0;
    }
    if ( sub_69B8C() < 0 )
      return 0;
    return sub_69B8C();
  }
}
