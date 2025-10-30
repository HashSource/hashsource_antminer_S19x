_BYTE *__fastcall sub_23338(_BYTE *result)
{
  unsigned int v1; // r3
  _BYTE *v2; // r12
  int i; // r1
  unsigned int v4; // r2
  char v5; // r3
  unsigned int v6; // t1

  if ( result )
  {
    v1 = (unsigned __int8)*result;
    if ( *result )
    {
      v2 = result;
      for ( i = 1; ; i = 2 )
      {
        if ( !v1 )
          return (_BYTE *)(&dword_0 + 1);
        v4 = v1 >> 4;
        v5 = 2 * (v1 & 0xF);
        if ( v4 > 7 )
          break;
        v1 = i & (dword_950F8[v4 + 2] >> v5);
        if ( !v1 )
          return (_BYTE *)v1;
        v6 = (unsigned __int8)*++v2;
        v1 = v6;
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
