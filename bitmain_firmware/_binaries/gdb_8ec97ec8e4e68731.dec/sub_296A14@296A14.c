int sub_296A14()
{
  char *v0; // r0
  const char *v1; // r1
  char *v2; // r0
  unsigned __int8 *v3; // r2
  int v4; // r3
  int result; // r0
  char *v6; // r0
  char *v7; // r0
  char *v8; // r0
  const char *v9; // r1

  v0 = j_getenv("LC_ALL");
  v1 = v0;
  if ( v0 && *v0 || (v6 = j_getenv("LC_CTYPE"), (v1 = v6) != 0) && *v6 || (v7 = j_getenv("LANG"), (v1 = v7) != 0) && *v7 )
  {
    v2 = setlocale(0, v1);
    v3 = (unsigned __int8 *)v2;
    if ( !v2 )
      return (int)v3;
  }
  else
  {
    v8 = setlocale(0, 0);
    v9 = "";
    if ( v8 )
      v9 = v8;
    v2 = setlocale(0, v9);
    v3 = (unsigned __int8 *)v2;
    if ( !v2 )
      return (int)v3;
  }
  v4 = *v3;
  if ( !*v3 )
    return *v3;
  if ( v4 == 67 )
  {
    result = v3[1];
    if ( !v3[1] )
      return result;
LABEL_7:
    dword_48AB00 = 1;
    dword_48AB04 = 1;
    dword_46DED8 = 0;
    return 1;
  }
  if ( v4 != 80 )
    goto LABEL_7;
  result = strcmp(v2, "POSIX");
  if ( result )
    goto LABEL_7;
  return result;
}
