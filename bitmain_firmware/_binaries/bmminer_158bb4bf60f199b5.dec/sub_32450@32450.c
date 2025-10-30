bool sub_32450()
{
  int i; // r4
  _BOOL4 result; // r0

  for ( i = 0; i != 16; ++i )
  {
    while ( *(_DWORD *)(dword_A0D68 + 4 * i + 4) != 1 )
    {
      if ( ++i == 16 )
        return 1;
    }
    result = sub_323A0(i);
    if ( !result )
      return result;
  }
  return 1;
}
