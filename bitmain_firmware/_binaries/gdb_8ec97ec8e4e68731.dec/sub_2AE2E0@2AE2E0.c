const char **__fastcall sub_2AE2E0(char *name)
{
  char ***v2; // r5
  const char **v3; // r4
  const char **v4; // t1
  const char *v6; // r4
  const char *v7; // r0
  const char *v8; // t1
  const char *v9; // r5

  v2 = off_470AA0;
  v3 = (const char **)*off_470AA0;
  if ( *off_470AA0 )
  {
    while ( strcmp(name, *v3) )
    {
      v4 = (const char **)v2[1];
      ++v2;
      v3 = v4;
      if ( !v4 )
        goto LABEL_6;
    }
    return v3;
  }
  else
  {
LABEL_6:
    v6 = "t#A";
    v7 = "arm-*-fuchsia*";
    while ( 1 )
    {
      v9 = v6;
      if ( !fnmatch(v7, name, 0) )
        break;
      v8 = (const char *)*((_DWORD *)v6 + 2);
      v6 += 8;
      v7 = v8;
      if ( !v8 )
      {
        ((void (__fastcall *)(int))loc_2A6C48)(2);
        return 0;
      }
    }
    v3 = (const char **)*((_DWORD *)v6 + 1);
    if ( v3 )
      return v3;
    do
      v9 += 8;
    while ( !*((_DWORD *)v9 + 1) );
    return (const char **)*((_DWORD *)v9 + 1);
  }
}
