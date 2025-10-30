_DWORD *__fastcall sub_2FBFF0(_DWORD *result, _DWORD *a2)
{
  unsigned int v2; // r2
  unsigned int v3; // r3

  if ( result[3] != a2[3] )
    return 0;
  v2 = result[4];
  v3 = a2[4];
  if ( v2 == v3 )
    return result;
  if ( !result[8] )
  {
    if ( a2[8] )
      return result;
    if ( v2 >= v3 )
    {
      if ( v2 > v3 )
        return result;
      return 0;
    }
  }
  return a2;
}
