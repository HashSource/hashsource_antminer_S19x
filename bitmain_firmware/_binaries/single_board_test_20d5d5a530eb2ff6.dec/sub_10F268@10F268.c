_DWORD *__fastcall sub_10F268(_DWORD *result)
{
  if ( result )
  {
    if ( *result == 2 )
      return (_DWORD *)result[1];
    else
      return 0;
  }
  return result;
}
