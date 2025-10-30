_BYTE *__fastcall sub_287B80(_BYTE *a1, int a2)
{
  size_t v3; // r0
  char *v4; // r0
  struct passwd *v5; // r0
  const char *pw_name; // r4
  size_t v7; // r0
  _BYTE *v8; // r0
  const char **v9; // r3
  _BYTE *v10; // r4
  int v11; // r0

  if ( !a2 )
  {
    if ( dword_48AD8C )
      free((void *)dword_48AD8C);
    dword_48AD90 = (unsigned __int8)*a1;
    dword_48AD94 = dword_48AD90 == 126;
    v3 = strlen(&a1[dword_48AD90 == 126]);
    v4 = (char *)sub_93028(v3 + 1);
    dword_48AD8C = (int)strcpy(v4, &a1[dword_48AD94]);
    dword_48AD98 = strlen((const char *)dword_48AD8C);
    setpwent();
  }
  do
  {
    v5 = getpwent();
    dword_48AD9C = (int)v5;
    if ( !v5 )
    {
      endpwent();
      return 0;
    }
    pw_name = v5->pw_name;
  }
  while ( dword_48AD98
       && (*(unsigned __int8 *)dword_48AD8C != *(unsigned __int8 *)pw_name
        || strncmp((const char *)dword_48AD8C, pw_name, dword_48AD98)) );
  v7 = strlen(pw_name);
  v8 = sub_93028(v7 + 2);
  v9 = (const char **)dword_48AD9C;
  v10 = v8;
  v11 = dword_48AD94;
  *v10 = *a1;
  strcpy(&v10[v11], *v9);
  if ( dword_48AD90 == 126 )
    dword_48ACC0 = 1;
  return v10;
}
