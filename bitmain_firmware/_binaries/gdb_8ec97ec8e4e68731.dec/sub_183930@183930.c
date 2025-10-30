_DWORD *__fastcall sub_183930(int a1)
{
  _DWORD *v2; // r0
  _DWORD *result; // r0
  int v4; // r0
  int v5; // r1

  if ( a1 )
  {
    v2 = (_DWORD *)dword_487918;
    if ( dword_487918 )
    {
      do
      {
        if ( a1 == v2[3] )
          break;
        v2 = (_DWORD *)v2[1];
      }
      while ( v2 );
    }
    result = sub_1830AC(v2, 0);
    if ( dword_487924 )
      return (_DWORD *)sub_259858("[Inferior %d detached]\n", a1);
  }
  else
  {
    v4 = sub_15F58();
    return (_DWORD *)sub_183998(v4, v5);
  }
  return result;
}
