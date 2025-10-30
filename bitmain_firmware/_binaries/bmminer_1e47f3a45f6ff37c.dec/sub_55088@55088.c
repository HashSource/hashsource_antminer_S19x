int __fastcall sub_55088(unsigned int a1)
{
  int v6; // [sp+Ch] [bp-8h]

  v6 = 0;
  if ( a1 == 2 )
  {
    if ( sub_58E58() < 0 )
      return 0;
    else
      return sub_58E58();
  }
  else if ( a1 > 2 )
  {
    if ( a1 == 256 )
    {
      if ( sub_58E98() < 0 )
        return 0;
      else
        return sub_58E98();
    }
    else if ( a1 == 257 )
    {
      if ( sub_58ED8() < 0 )
        return 0;
      else
        return sub_58ED8();
    }
  }
  else if ( a1 == 1 )
  {
    if ( sub_58E18() < 0 )
      return 0;
    else
      return sub_58E18();
  }
  return v6;
}
