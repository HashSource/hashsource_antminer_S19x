const char *__fastcall sub_2AE39C(char *needle, const char **a2, const char **a3)
{
  const char *v3; // r4
  const char **i; // r6
  const char *v7; // t1
  char *v8; // r5
  size_t v9; // r0

  v3 = *a2;
  if ( !*a2 )
    return v3;
  for ( i = a2; ; ++i )
  {
    v8 = strstr(v3, needle);
    if ( v8 )
    {
      v9 = strlen(needle);
      if ( (v8 == v3 || *(v8 - 1) == 58) && !v8[v9] )
        break;
    }
    v7 = i[1];
    v3 = v7;
    if ( !v7 )
      return v3;
  }
  *a3 = v3;
  return (const char *)1;
}
