int sub_37EF8()
{
  int i; // r4

  for ( i = 0; i != 16; ++i )
  {
    if ( *(_DWORD *)(dword_A0D68 + 4 * i + 4) == 1 && !sub_37D44(i) )
      return 1;
  }
  return 0;
}
