int sub_1A850()
{
  int i; // r4
  int result; // r0

  for ( i = 0; i != 16; ++i )
  {
    if ( *(_DWORD *)(dword_A0D68 + 4 * i + 4) == 1 )
      result = sub_754BC((unsigned __int8)i, 0);
  }
  return result;
}
