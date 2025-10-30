int __fastcall sub_26DA4(int a1)
{
  unsigned __int16 *i; // r3
  int v2; // t1

  if ( dword_5BA9A8 <= 0 )
    return 0;
  if ( *(unsigned __int16 *)dword_5BA9AC != a1 )
  {
    for ( i = (unsigned __int16 *)(dword_5BA9AC + 2); i != (unsigned __int16 *)(dword_5BA9AC + 2 * dword_5BA9A8); ++i )
    {
      v2 = *i;
      if ( v2 == a1 )
        return 1;
    }
    return 0;
  }
  return 1;
}
