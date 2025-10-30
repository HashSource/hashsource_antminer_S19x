bool __fastcall sub_9DF20(const char *a1, char *s)
{
  size_t v4; // r4
  int v5; // r6
  size_t v6; // r0

  v4 = strlen(s);
  v5 = strncmp(a1, s, v4);
  if ( v5 )
    return 0;
  if ( !a1[v4] )
    return 1;
  if ( !strncmp(&a1[v4], "___", 3u) )
  {
    v6 = strlen(a1);
    return strcmp(&a1[v6 - 6], "___XVN") != 0;
  }
  return v5;
}
