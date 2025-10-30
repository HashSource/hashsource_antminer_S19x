_DWORD *__fastcall sub_183BDC(int a1)
{
  _DWORD *v1; // r3

  v1 = (_DWORD *)dword_487918;
  if ( !dword_487918 )
    return v1;
  if ( a1 != *(_DWORD *)(dword_487918 + 12) )
  {
    while ( 1 )
    {
      v1 = (_DWORD *)v1[1];
      if ( !v1 )
        break;
      if ( v1[3] == a1 )
        return (_DWORD *)v1[2];
    }
    return v1;
  }
  return (_DWORD *)v1[2];
}
