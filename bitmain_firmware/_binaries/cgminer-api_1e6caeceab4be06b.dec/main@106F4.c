int __fastcall main(int a1, char **a2, char **a3)
{
  char *v3; // r5
  int v6; // r5
  const char *v7; // r0
  const char *v8; // r7
  char **v9; // r4
  int v10; // r8
  char *v11; // r5
  char *v12; // r0
  const char *v13; // r0
  int v14; // r7

  if ( a1 <= 1 )
    goto LABEL_20;
  v3 = a2[1];
  if ( *v3 == 45 )
  {
    v14 = (unsigned __int8)v3[1];
    if ( v14 == 63 )
    {
      if ( !v3[2] )
        goto LABEL_24;
    }
    else if ( v14 == 104 )
    {
      if ( !v3[2] )
        goto LABEL_24;
      goto LABEL_3;
    }
    if ( !strcmp(v3, "--help") )
      goto LABEL_24;
    if ( v14 != 111 || v3[2] )
      goto LABEL_4;
    dword_22078 = 1;
    if ( a1 != 2 )
    {
      v6 = 2;
      goto LABEL_5;
    }
LABEL_20:
    v11 = "127.0.0.1";
    v8 = "summary";
    return sub_10B4C((int)v8, v11);
  }
LABEL_3:
  if ( strcmp(v3, "--help") )
  {
LABEL_4:
    v6 = 1;
LABEL_5:
    v7 = (const char *)sub_10948(a2[v6]);
    v8 = "summary";
    if ( *v7 )
      v8 = v7;
    if ( a1 <= v6 + 1 )
    {
      v11 = "127.0.0.1";
    }
    else
    {
      v9 = &a2[v6];
      v10 = v6 + 2;
      v11 = "127.0.0.1";
      v12 = (char *)sub_10948(v9[1]);
      if ( *v12 )
        v11 = v12;
      if ( a1 > v10 )
      {
        v13 = (const char *)sub_10948(v9[2]);
        if ( *v13 )
          strtol(v13, 0, 10);
      }
    }
    return sub_10B4C((int)v8, v11);
  }
LABEL_24:
  fprintf((FILE *)stderr, "usAge: %s [command [ip/host [port]]]\n", *a2);
  return 1;
}
