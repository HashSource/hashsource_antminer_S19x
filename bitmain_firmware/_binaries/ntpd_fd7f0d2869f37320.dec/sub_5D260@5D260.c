int __fastcall sub_5D260(int a1, char *s)
{
  signed int v4; // r0
  int v5; // r2
  signed int i; // r3
  int v9; // r2
  bool v10; // cc
  char *v11; // r1
  int v12; // r0
  int v13; // t1
  bool v14; // cc

  v4 = strlen(s);
  v5 = a1 + 32;
  for ( i = 0; i != 4; ++i )
  {
    if ( *(unsigned __int8 *)--v5 )
      break;
  }
  if ( v4 > i )
    return 0;
  v9 = (unsigned __int8)*s;
  v10 = v9 == 0;
  if ( *s )
    v10 = i <= 0;
  if ( !v10 )
  {
    v11 = s;
    v12 = a1 + 31 - i;
    do
    {
      *(_BYTE *)++v12 = v9;
      --i;
      v13 = (unsigned __int8)*++v11;
      LOBYTE(v9) = v13;
      v14 = v13 == 0;
      if ( v13 )
        v14 = i <= 0;
    }
    while ( !v14 );
  }
  return 1;
}
