char *__fastcall sub_22520(_DWORD *a1, unsigned int a2)
{
  char *result; // r0

  result = (char *)sub_224BC(a1, a2);
  if ( result )
    return _strdup(result);
  return result;
}
