bool __fastcall sub_6C614(int a1, const char *a2, const char **a3)
{
  const char **v5; // r0
  const char **v6; // r5
  const char *v7; // r4
  const char *v8; // t1
  size_t v9; // r2
  _BOOL4 result; // r0

  v5 = (const char **)((int (*)(void))loc_16CE88)();
  v6 = v5;
  if ( v5 )
  {
    v7 = *v5;
    if ( !*v5 )
      return (bool)v7;
    while ( 1 )
    {
      v9 = strlen(v7);
      if ( v9 )
      {
        if ( !strncasecmp(a2, v7, v9) )
        {
LABEL_8:
          result = 1;
          if ( a3 )
            *a3 = v7;
          return result;
        }
      }
      else if ( (unsigned int)*(unsigned __int8 *)a2 - 48 <= 9 )
      {
        goto LABEL_8;
      }
      v8 = v6[1];
      ++v6;
      v7 = v8;
      if ( !v8 )
        return (bool)v7;
    }
  }
  if ( a3 )
    *a3 = "";
  return (unsigned int)*(unsigned __int8 *)a2 - 48 <= 9;
}
