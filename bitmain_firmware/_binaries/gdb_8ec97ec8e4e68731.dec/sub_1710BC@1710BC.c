_DWORD *__fastcall sub_1710BC(int a1, int a2)
{
  _DWORD *v2; // r3

  v2 = *(_DWORD **)(*(_DWORD *)(a2 + 24) + 32);
  if ( !v2 )
    return v2;
  if ( a1 != *v2 )
  {
    while ( 1 )
    {
      v2 = (_DWORD *)v2[6];
      if ( !v2 )
        break;
      if ( *v2 == a1 )
        return v2 + 2;
    }
    return v2;
  }
  return v2 + 2;
}
