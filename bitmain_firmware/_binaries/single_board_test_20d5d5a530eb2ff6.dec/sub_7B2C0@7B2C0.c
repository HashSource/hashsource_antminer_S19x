_DWORD *__fastcall sub_7B2C0(_DWORD *result)
{
  if ( result )
  {
    if ( *result )
      return 0;
    else
      return (_DWORD *)result[2];
  }
  return result;
}
