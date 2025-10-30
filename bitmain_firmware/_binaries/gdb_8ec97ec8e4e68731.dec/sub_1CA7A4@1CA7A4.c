int __fastcall sub_1CA7A4(const char **a1, const char **a2)
{
  const char *v2; // r4
  const char *v3; // r7
  const char **i; // r6
  size_t v6; // r5
  const char *v7; // t1

  v2 = *a2;
  v3 = *a1;
  if ( !*a2 )
    return (int)v2;
  for ( i = a2; ; ++i )
  {
    v6 = strlen(v2);
    if ( !strncmp(v3, v2, v6) )
    {
      if ( isspace((unsigned __int8)v3[v6]) )
        break;
    }
    v7 = i[1];
    v2 = v7;
    if ( !v7 )
      return (int)v2;
  }
  *a1 = &v3[v6 + 1];
  return 1;
}
