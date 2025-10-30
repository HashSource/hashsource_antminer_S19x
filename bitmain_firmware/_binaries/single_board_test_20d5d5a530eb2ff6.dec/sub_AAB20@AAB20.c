char **__fastcall sub_AAB20(int *a1, char *s)
{
  char *v2; // r4
  const char *v4; // r6
  size_t v5; // r7
  int v6; // r8
  char **result; // r0

  v2 = s;
  if ( !s )
    return 0;
  v4 = (const char *)a1[1];
  if ( v4 )
  {
    v5 = a1[2];
    if ( strlen(s) <= v5 )
      return 0;
    v6 = *a1;
    if ( (*a1 & 1) != 0 )
    {
      if ( strncmp(v2, v4, a1[2]) )
        return 0;
    }
    if ( (v6 & 2) != 0 && strncasecmp(v2, v4, v5) )
      return 0;
    v2 += v5;
LABEL_9:
    result = sub_A9B34(a1, v2);
    if ( result )
      return (char **)*((unsigned __int16 *)result + 7);
    return result;
  }
  if ( (*a1 & 1) == 0 )
    goto LABEL_9;
  if ( *s != 45 )
    return (char **)a1[1];
  result = (char **)(unsigned __int8)s[1];
  v2 = s + 1;
  if ( s[1] )
    goto LABEL_9;
  return result;
}
