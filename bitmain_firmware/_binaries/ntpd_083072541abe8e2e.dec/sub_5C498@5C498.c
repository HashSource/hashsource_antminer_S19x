int __fastcall sub_5C498(_BYTE *a1, char *s)
{
  signed int v4; // r0
  int v5; // r2
  int v7; // lr
  bool v8; // zf
  char *v9; // r1
  _BYTE *v10; // r12
  int v11; // t1
  _BOOL4 v12; // r3

  v4 = strlen(s);
  if ( a1[31] )
  {
    v5 = 0;
  }
  else if ( a1[30] )
  {
    v5 = 1;
  }
  else if ( a1[29] )
  {
    v5 = 2;
  }
  else if ( a1[28] )
  {
    v5 = 3;
  }
  else
  {
    v5 = 4;
  }
  if ( v4 > v5 )
    return 0;
  v7 = (unsigned __int8)*s;
  v8 = v7 == 0;
  if ( *s )
    v8 = v5 == 0;
  if ( !v8 )
  {
    v9 = s;
    v10 = &a1[32 - v5];
    do
    {
      *v10++ = v7;
      --v5;
      v11 = (unsigned __int8)*++v9;
      LOBYTE(v7) = v11;
      v12 = v5 != 0;
      if ( !v11 )
        v12 = 0;
    }
    while ( v12 );
  }
  return 1;
}
