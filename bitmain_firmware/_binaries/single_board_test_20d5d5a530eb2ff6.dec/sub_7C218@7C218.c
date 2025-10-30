char *__fastcall sub_7C218(char *result, char *s)
{
  if ( result )
  {
    result[92] = 0;
    *((_DWORD *)result + 2) = 0;
    *(_DWORD *)result = -1;
    *((_DWORD *)result + 1) = -1;
    if ( s )
      return sub_7C1C8(result, s);
    else
      result[12] = 0;
  }
  return result;
}
