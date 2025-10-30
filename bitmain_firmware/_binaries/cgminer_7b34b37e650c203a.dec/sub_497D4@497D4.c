char *__fastcall sub_497D4(char *result, char *a2)
{
  if ( result )
  {
    result[92] = 0;
    *((_DWORD *)result + 2) = 0;
    *(_DWORD *)result = -1;
    *((_DWORD *)result + 1) = -1;
    if ( a2 )
      return sub_49770(result, a2);
    else
      result[12] = 0;
  }
  return result;
}
