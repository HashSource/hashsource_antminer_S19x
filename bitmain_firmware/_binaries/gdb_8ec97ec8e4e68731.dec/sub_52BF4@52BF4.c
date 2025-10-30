int __fastcall sub_52BF4(_DWORD *a1, _DWORD *a2)
{
  _DWORD *v2; // r4
  _DWORD *v4; // r3
  int result; // r0

  v2 = a2;
  if ( !a2 )
    return (int)v2;
  while ( 1 )
  {
    v4 = (_DWORD *)v2[13];
    if ( v4 )
    {
      if ( v4 == a1 )
        return (int)v2;
      result = sub_52BF4(a1, *v4);
      if ( result )
        break;
    }
    v2 = (_DWORD *)*v2;
    if ( !v2 )
      return (int)v2;
  }
  return result;
}
