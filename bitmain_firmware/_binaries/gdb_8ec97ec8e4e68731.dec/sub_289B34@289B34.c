char *__fastcall sub_289B34(char *s1)
{
  const char *v1; // r1
  char **v2; // r5
  int v4; // r4
  const char *v5; // t1
  char *result; // r0
  char **v7; // r5
  int v8; // r4
  char *v9; // t1

  v1 = "bind-tty-special-chars";
  v2 = &off_3FD318;
  v4 = 0;
  do
  {
    if ( !strcasecmp(s1, v1) )
    {
      result = "on";
      if ( !*(_DWORD *)(&off_3FD2D0)[3 * v4 + 19] )
        return "off";
      return result;
    }
    v5 = v2[3];
    v2 += 3;
    v1 = v5;
    ++v4;
  }
  while ( v5 );
  result = "bell-style";
  v7 = &off_3FD480;
  v8 = 0;
  while ( strcasecmp(s1, result) )
  {
    v9 = v7[3];
    v7 += 3;
    result = v9;
    ++v8;
    if ( !v9 )
      return result;
  }
  return sub_288930((&off_3FD2D0)[3 * v8 + 108]);
}
