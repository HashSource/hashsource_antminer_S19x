const char *__fastcall sub_29159C(const char *a1, char *s)
{
  signed int v4; // r6
  signed int v5; // r0
  signed int v6; // r4
  const char *v7; // r0
  const char *v8; // r5
  bool v9; // zf

  v4 = strlen(s);
  v5 = strlen(a1);
  if ( v4 > v5 )
    return 0;
  v6 = v5;
  v7 = a1;
  while ( 1 )
  {
    v8 = v7;
    --v6;
    v9 = strncasecmp(v7, s, v4) == 0;
    v7 = v8 + 1;
    if ( v9 )
      break;
    if ( v4 > v6 )
      return 0;
  }
  return v8;
}
