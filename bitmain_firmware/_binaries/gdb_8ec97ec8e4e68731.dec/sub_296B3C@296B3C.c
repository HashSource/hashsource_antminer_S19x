void *sub_296B3C()
{
  int v0; // r2
  void *result; // r0

  v0 = dword_4900DC;
  if ( !dword_48BB20 || dword_4707A8 == -1 )
  {
    dword_4900D8 = dword_4900DC;
  }
  else if ( dword_4707A8 > dword_4900DC )
  {
    dword_4900D8 = dword_4900DC;
  }
  else
  {
    dword_4900D8 = dword_4707A8;
  }
  if ( dword_46DED4 )
  {
    if ( dword_46DED4 == 1 )
    {
      if ( dword_4900D8 == dword_4900DC )
        v0 = 0;
      dword_4900D4 = v0;
    }
  }
  else
  {
    result = off_46DED0;
    if ( off_46DED0 != (_UNKNOWN *)&dword_46DF10 )
      dword_4900D8 = dword_46DED4;
  }
  return result;
}
