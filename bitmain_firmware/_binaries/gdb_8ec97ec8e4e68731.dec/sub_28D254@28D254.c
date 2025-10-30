int __fastcall sub_28D254(int a1, int a2)
{
  if ( (a1 & 0x80) == 0 )
  {
    if ( (unsigned __int8)a1 == 9 )
      return (a2 | 7) + 1 - a2;
    if ( a1 > 31 )
    {
      if ( a1 != 127 )
      {
LABEL_5:
        if ( ((*_ctype_b_loc())[(unsigned __int8)a1] & 0x4000) != 0 )
          return 1;
        else
          return 2;
      }
    }
    else if ( (a1 & 0x80) != 0 )
    {
      goto LABEL_5;
    }
    return 2;
  }
  if ( dword_48AB04 )
    return 1;
  else
    return 4;
}
