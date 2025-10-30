_BYTE *__fastcall sub_93610(unsigned __int8 *a1)
{
  _BYTE *v1; // r4
  int v2; // r0
  int v3; // t1

  v1 = a1;
  if ( a1 )
  {
    v2 = *a1;
    if ( *v1 )
    {
      do
      {
        if ( isspace(v2) )
          break;
        v3 = (unsigned __int8)*++v1;
        v2 = v3;
      }
      while ( v3 );
    }
  }
  return v1;
}
