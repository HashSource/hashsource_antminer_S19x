int __fastcall sub_272F4(int a1)
{
  unsigned __int16 *i; // r3
  int v2; // t1

  if ( dword_5BF860 <= 0 )
    return 0;
  if ( *(unsigned __int16 *)dword_5BF864 != a1 )
  {
    for ( i = (unsigned __int16 *)(dword_5BF864 + 2); i != (unsigned __int16 *)(dword_5BF864 + 2 * dword_5BF860); ++i )
    {
      v2 = *i;
      if ( v2 == a1 )
        return 1;
    }
    return 0;
  }
  return 1;
}
