char *__fastcall sub_C25A8(int a1)
{
  int v1; // r3
  char **v2; // r2
  char *result; // r0

  v1 = a1;
  if ( !a1 )
    return "";
  while ( 1 )
  {
    v2 = *(char ***)(v1 + 20);
    if ( v2 )
    {
      result = *v2;
      if ( *v2 )
        break;
    }
    v1 = *(_DWORD *)(v1 + 12);
    if ( !v1 )
      return "";
  }
  return result;
}
