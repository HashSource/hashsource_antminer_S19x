int sub_2F930()
{
  int i; // r5
  int j; // r4
  int v2; // r1
  int result; // r0

  for ( i = 0; i != 16; ++i )
  {
    if ( *(_DWORD *)(dword_A0D68 + 4 * i + 4) == 1 )
    {
      for ( j = 0; j != 78; ++j )
      {
        v2 = j;
        result = sub_2F7EC(i, v2);
      }
    }
  }
  return result;
}
