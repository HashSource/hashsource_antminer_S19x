int __fastcall sub_289C00(char *s1, const char *a2)
{
  const char *v2; // r3
  char **v3; // r5
  int v6; // r4
  const char *v7; // t1
  int v8; // r8
  char *v9; // r9
  int v10; // r10
  char **v11; // r4
  const char *v13; // r4
  int v14; // r2
  const char *v15; // r1
  char **v16; // r5
  int v17; // r4
  const char *v18; // t1
  char *v19; // r3

  v2 = "bind-tty-special-chars";
  v3 = &off_3FD318;
  v6 = 0;
  do
  {
    v8 = strcasecmp(s1, v2);
    if ( !v8 )
    {
      v9 = (&off_3FD2D0)[3 * v6 + 19];
      if ( a2 && (v10 = *(unsigned __int8 *)a2, *a2) && strcasecmp(a2, "on") )
      {
        if ( v10 == 49 )
          v8 = *((unsigned __int8 *)a2 + 1) == 0;
      }
      else
      {
        v8 = 1;
      }
      *(_DWORD *)v9 = v8;
      v11 = &(&off_3FD2D0)[3 * v6];
      if ( ((unsigned int)v11[20] & 1) != 0 )
      {
        v13 = v11[18];
        if ( !strcasecmp(v13, "blink-matching-paren") )
        {
          sub_29BE80(dword_4707DC);
        }
        else if ( !strcasecmp(v13, "prefer-visible-bell") )
        {
          if ( dword_470774 )
            v14 = 2;
          else
            v14 = 1;
          dword_46DEF4 = v14;
        }
      }
      return 0;
    }
    v7 = v3[3];
    v3 += 3;
    v2 = v7;
    ++v6;
  }
  while ( v7 );
  v15 = "bell-style";
  v16 = &off_3FD480;
  v17 = 0;
  while ( strcasecmp(s1, v15) )
  {
    v18 = v16[3];
    v16 += 3;
    v15 = v18;
    ++v17;
    if ( !v18 )
      return 0;
  }
  v19 = (&off_3FD2D0)[3 * v17 + 110];
  if ( !v19 )
    return 0;
  return ((int (__fastcall *)(const char *))v19)(a2);
}
