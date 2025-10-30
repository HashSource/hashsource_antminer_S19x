int __fastcall sub_6E558(_BYTE *a1, char *s, int a3)
{
  int v3; // r4
  unsigned __int8 *v4; // r12
  _BYTE *v6; // r3
  int v7; // r12
  int v8; // lr
  char *v9; // lr
  int v10; // t1

  if ( !a3 )
  {
    v3 = 0;
    return strlen(s) + v3;
  }
  v3 = (unsigned __int8)*a1;
  if ( *a1 )
  {
    v4 = a1 + 1;
    do
    {
      v6 = v4;
      if ( v4 == &a1[a3] )
      {
        v3 = a3;
        return strlen(s) + v3;
      }
    }
    while ( *v4++ );
    v3 = v6 - a1;
    a3 -= v6 - a1;
    if ( !a3 )
      return strlen(s) + v3;
  }
  else
  {
    v6 = a1;
  }
  LOBYTE(v7) = *s;
  if ( *s )
  {
    v9 = s;
    do
    {
      if ( a3 != 1 )
        *v6 = v7;
      v10 = (unsigned __int8)*++v9;
      v7 = v10;
      if ( a3 != 1 )
      {
        --a3;
        ++v6;
      }
    }
    while ( v7 );
    v8 = v9 - s;
  }
  else
  {
    v8 = (unsigned __int8)*s;
  }
  *v6 = 0;
  return v8 + v3;
}
