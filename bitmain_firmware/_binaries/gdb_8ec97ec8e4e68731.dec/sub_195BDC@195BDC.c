const char *__fastcall sub_195BDC(char *s1)
{
  const char *v1; // r4
  size_t v3; // r5
  int v4; // r6
  char *v6; // r0
  const char *v7; // r5
  char **v8; // r7
  size_t v9; // r6
  const char *v10; // r8
  const char *v11; // t1
  const char *v12; // r0

  v1 = "if";
  v3 = 2;
  v4 = 0;
  while ( strncmp(s1, v1, v3) || !isspace((unsigned __int8)s1[v3]) )
  {
    ++v4;
    v1 = (const char *)*(&off_3C1C7C + v4);
    if ( !v1 )
      return 0;
    v3 = strlen((const char *)*(&off_3C1C7C + v4));
  }
  if ( v4 )
  {
    v6 = &s1[v3];
    v7 = "if";
    v8 = off_3C1C80;
    v9 = 2;
    v10 = (const char *)sub_9360C(v6);
    while ( strncmp(v10, v7, v9) || !isspace((unsigned __int8)v10[v9]) )
    {
      v11 = *v8++;
      v7 = v11;
      v12 = v11;
      if ( !v11 )
        return v1;
      v9 = strlen(v12);
    }
    return 0;
  }
  return v1;
}
