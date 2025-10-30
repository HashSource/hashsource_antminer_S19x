int __fastcall sub_10474(unsigned __int8 *a1, char *s, int a3)
{
  unsigned __int8 *v3; // r4
  unsigned __int8 *v4; // r3
  unsigned __int8 *v5; // lr
  int v7; // r4
  int v8; // r3
  char *v9; // r12
  bool v10; // zf
  int v11; // t1

  if ( !a3 )
  {
    v7 = 0;
    goto LABEL_17;
  }
  v3 = a1;
  if ( *a1 )
  {
    v4 = a1 + 1;
    v5 = &a1[a3];
    do
    {
      a1 = v4;
      if ( v5 == v4 )
        break;
    }
    while ( *v4++ );
    v7 = a1 - v3;
    a3 -= v7;
    if ( a3 )
      goto LABEL_7;
LABEL_17:
    v7 += strlen(s);
    return v7;
  }
  v7 = *a1;
LABEL_7:
  LOBYTE(v8) = *s;
  v9 = s;
  if ( *s )
  {
    do
    {
      v10 = a3 == 1;
      if ( a3 != 1 )
      {
        *a1 = v8;
        --a3;
      }
      v11 = (unsigned __int8)*++s;
      v8 = v11;
      if ( !v10 )
        ++a1;
    }
    while ( v8 );
    v7 += s - v9;
  }
  *a1 = 0;
  return v7;
}
