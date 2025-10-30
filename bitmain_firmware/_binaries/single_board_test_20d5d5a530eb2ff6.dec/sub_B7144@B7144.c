_DWORD *__fastcall sub_B7144(_DWORD *result, int a2)
{
  if ( result )
  {
    if ( (_BYTE)a2 )
    {
      do
      {
        if ( *result && a2 == *(_DWORD *)*result )
          break;
        result = (_DWORD *)result[10];
      }
      while ( result );
    }
    else
    {
      do
      {
        if ( *result && (a2 & *(_DWORD *)*result) != 0 )
          break;
        result = (_DWORD *)result[10];
      }
      while ( result );
    }
  }
  return result;
}
