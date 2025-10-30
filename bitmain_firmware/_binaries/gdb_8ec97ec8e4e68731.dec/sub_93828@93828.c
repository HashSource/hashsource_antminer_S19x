const char *__fastcall sub_93828(const char ***a1, char *s)
{
  size_t v4; // r0
  const char **v5; // r5
  const char **v6; // r8
  size_t v7; // r6
  const char *v8; // r4
  const char *v9; // t1
  const char *v10; // r0

  v4 = strlen(s);
  v5 = *a1;
  v6 = a1[1];
  if ( *a1 == v6 )
    return 0;
  v7 = v4;
  while ( 1 )
  {
    v9 = *v5++;
    v8 = v9;
    v10 = v9;
    if ( v9 )
    {
      if ( !strncmp(v10, s, v7) && v8[v7] == 61 )
        break;
    }
    if ( v6 == v5 )
      return 0;
  }
  return &v8[v7 + 1];
}
