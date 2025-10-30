char *__fastcall sub_EED48(int a1)
{
  int v2; // r10
  const char *v3; // r8
  int v4; // r5
  size_t v5; // r6
  const char *v6; // r4
  int v7; // r3
  const char *v8; // r2
  bool v9; // zf
  const char *v10; // t1
  char *v11; // r4

  v2 = ((int (*)(void))loc_165BB8)();
  if ( a1 != dword_478990 )
  {
    v3 = off_46C100[0];
    dword_478990 = a1;
    dword_478994 = 0;
    dword_478998 = 0;
    if ( !strcmp(off_46C100[0], "auto") )
      v3 = (const char *)((int (__fastcall *)(int))loc_16DC68)(a1);
    v4 = dword_47899C;
    v5 = strlen(v3);
    v6 = *(const char **)dword_47899C;
    if ( *(_DWORD *)dword_47899C )
    {
      do
      {
        if ( !strncmp(v3, v6, v5) )
        {
          v7 = (unsigned __int8)v6[v5];
          v8 = &v6[v5];
          v9 = v7 == 76;
          if ( v7 != 76 )
            v9 = v7 == 66;
          if ( v9 && v8[1] == 69 && !v8[2] )
          {
            if ( v7 == 66 )
              dword_478998 = (int)v6;
            else
              dword_478994 = (int)v6;
          }
        }
        v10 = *(const char **)(v4 + 4);
        v4 += 4;
        v6 = v10;
      }
      while ( v10 );
    }
  }
  if ( v2 )
  {
    v11 = (char *)dword_478994;
    if ( dword_478994 )
      return v11;
  }
  else
  {
    v11 = (char *)dword_478998;
    if ( dword_478998 )
      return v11;
  }
  v11 = off_46C100[0];
  if ( !strcmp(off_46C100[0], "auto") )
    JUMPOUT(0x16DC68);
  return v11;
}
