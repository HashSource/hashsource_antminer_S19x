int sub_37F50()
{
  int i; // r4
  int result; // r0

  for ( i = 0; i != 16; ++i )
  {
    while ( *(_DWORD *)(dword_A0D68 + 4 * i + 4) != 1 )
    {
      if ( ++i == 16 )
        return 0;
    }
    result = sub_37D44(i);
    if ( result == 1 )
      return result;
  }
  return 0;
}
