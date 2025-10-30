_DWORD *__fastcall sub_10F258(_DWORD *result)
{
  if ( result )
  {
    if ( *result == 1 )
      return (_DWORD *)result[1];
    else
      return 0;
  }
  return result;
}
