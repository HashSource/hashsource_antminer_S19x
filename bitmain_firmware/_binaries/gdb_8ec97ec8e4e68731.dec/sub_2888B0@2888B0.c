int sub_2888B0()
{
  int v0; // r3
  int v1; // t1

  if ( dword_48ADA0 )
  {
    if ( dword_48ADA0 > 0 )
    {
      v0 = dword_48ADA8;
      if ( *(_BYTE *)dword_48ADA8 == 1 )
        return 0;
      while ( v0 != dword_48ADA8 + dword_48ADA0 - 1 )
      {
        v1 = *(unsigned __int8 *)++v0;
        if ( v1 == 1 )
          return 0;
      }
    }
    byte_48AAFC = byte_48AAFC == 0;
    return 0;
  }
  sub_288824((int)"$else found without matching $if");
  return 0;
}
