_DWORD *__fastcall sub_313ED8(_DWORD *result, int a2)
{
  if ( result )
  {
    if ( *result != 47 )
      return 0;
    if ( a2 <= 0 )
    {
      if ( !a2 )
        return (_DWORD *)result[2];
      return 0;
    }
    while ( 1 )
    {
      result = (_DWORD *)result[3];
      --a2;
      if ( !result )
        break;
      if ( *result != 47 )
        return 0;
      if ( !a2 )
        return (_DWORD *)result[2];
    }
  }
  return result;
}
