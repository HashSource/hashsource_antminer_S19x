char *__fastcall sub_28B204(int a1)
{
  int *v1; // r3
  const char *v2; // r5
  const char *v3; // r12
  char **i; // r4
  int v6; // r3
  const char *v7; // r1
  char *v8; // r3
  char **v9; // r6
  const char *v10; // r5
  const char *v11; // r4
  char *result; // r0
  char *v13; // r3
  const char *v14; // r1

  v1 = &dword_46DEE8;
  v2 = "blink-matching-paren";
  v3 = "bind-tty-special-chars";
  for ( i = &off_3FD318; ; v2 = i[3] )
  {
    v6 = *v1;
    v7 = "set %s %s\n";
    if ( !a1 )
      v7 = "%s is set to `%s'\n";
    v8 = v6 ? "on" : "off";
    fprintf((FILE *)dword_48AAB0, v7, v3, v8);
    i += 3;
    v3 = v2;
    if ( !v2 )
      break;
    v1 = (int *)i[1];
  }
  v9 = &off_3FD498;
  v10 = "comment-begin";
  v11 = "bell-style";
  while ( 1 )
  {
    result = sub_288930(v11);
    v13 = result;
    v14 = "set %s %s\n";
    if ( result )
    {
      if ( !a1 )
      {
        v13 = result;
        v14 = "%s is set to `%s'\n";
      }
      result = (char *)fprintf((FILE *)dword_48AAB0, v14, v11, v13);
    }
    v9 += 3;
    v11 = v10;
    if ( !v10 )
      break;
    v10 = *(v9 - 3);
  }
  return result;
}
