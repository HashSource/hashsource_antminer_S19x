int __fastcall sub_599B0(const char *a1)
{
  size_t v2; // r0
  int v3; // r3
  const char *v4; // r2
  bool v5; // zf
  int v6; // r3
  int v7; // t1
  bool v8; // zf
  int result; // r0
  size_t v10; // r4

  v2 = strlen(a1);
  v3 = (unsigned __int8)a1[v2 - 1];
  v4 = &a1[v2 - 1];
  v5 = v3 == 9;
  if ( v3 != 9 )
    v5 = v3 == 32;
  if ( v5 )
  {
    do
    {
      v7 = *(unsigned __int8 *)--v4;
      v6 = v7;
      v10 = --v2;
      v8 = v7 == 9;
      if ( v7 != 9 )
        v8 = v6 == 32;
    }
    while ( v8 );
  }
  else
  {
    v10 = v2;
  }
  if ( !strncmp(a1, "on", v10) || !strncmp(a1, "1", v10) || !strncmp(a1, "yes", v10) || !strncmp(a1, "enable", v10) )
    return 1;
  result = strncmp(a1, "off", v10);
  if ( result )
  {
    result = strncmp(a1, "0", v10);
    if ( result )
    {
      result = strncmp(a1, "no", v10);
      if ( result )
        return -(strncmp(a1, "disable", v10) != 0);
    }
  }
  return result;
}
