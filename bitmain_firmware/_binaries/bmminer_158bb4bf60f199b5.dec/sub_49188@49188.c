char *__fastcall sub_49188(_DWORD *a1, unsigned int a2)
{
  char *result; // r0

  result = (char *)sub_49124(a1, a2);
  if ( result )
    return _strdup(result);
  return result;
}
