int __fastcall sub_6C6BC(const char *a1, const char **a2, const char **a3)
{
  const char *v3; // r4
  const char **i; // r5
  const char *v7; // t1
  size_t v8; // r0

  v3 = *a3;
  if ( !*a3 )
    return (int)v3;
  for ( i = a3; ; ++i )
  {
    v8 = strlen(v3);
    if ( !strncasecmp(a1, v3, v8) )
      break;
    v7 = i[1];
    v3 = v7;
    if ( !v7 )
      return (int)v3;
  }
  if ( a2 )
    *a2 = v3;
  return 1;
}
