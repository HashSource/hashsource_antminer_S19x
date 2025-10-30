_DWORD *__fastcall sub_48630(_DWORD *result)
{
  if ( result )
  {
    if ( *result == 2 )
      return (_DWORD *)result[2];
    else
      return 0;
  }
  return result;
}
