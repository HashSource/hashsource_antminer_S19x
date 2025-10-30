char *__fastcall sub_14D80(char *result, char *s)
{
  if ( result )
  {
    result[92] = 0;
    *((_DWORD *)result + 2) = 0;
    *(_DWORD *)result = -1;
    *((_DWORD *)result + 1) = -1;
    if ( s )
      return sub_14D30(result, s);
    else
      result[12] = 0;
  }
  return result;
}
