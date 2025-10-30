_BYTE *__fastcall sub_2305C(_BYTE *result)
{
  unsigned int v1; // r3
  int i; // r1
  unsigned int v3; // r2
  char v4; // r3
  unsigned int v5; // t1

  if ( result )
  {
    v1 = (unsigned __int8)*result;
    if ( *result )
    {
      for ( i = 1; ; i = 2 )
      {
        if ( !v1 )
          return (_BYTE *)(&dword_0 + 1);
        v3 = v1 >> 4;
        v4 = (2 * v1) & 0x1E;
        if ( v3 > 7 )
          break;
        v1 = i & (dword_93B9C[v3 + 2] >> v4);
        if ( !v1 )
          return (_BYTE *)v1;
        v5 = (unsigned __int8)*++result;
        v1 = v5;
      }
      return 0;
    }
    else
    {
      return (_BYTE *)v1;
    }
  }
  return result;
}
