char *__fastcall sub_29B760(int a1)
{
  int v2; // r3
  bool v3; // zf
  size_t v4; // r0
  char *v5; // r0
  char *v6; // r1
  int v7; // r3
  char *v8; // r6
  bool v9; // zf
  int v10; // r2
  int v11; // r5
  int v12; // t1
  bool v13; // zf
  char *v14; // r3
  const char *v15; // r0
  char *v16; // r8
  struct passwd *v17; // r0
  char *v18; // r5
  const char *v20; // r0
  size_t v21; // r0
  char *v22; // r0
  char *v23; // r5
  const char *v24; // r0
  char *v25; // r7
  size_t v26; // r0
  char *v27; // r0

  if ( !a1 )
    return 0;
  if ( *(_BYTE *)a1 == 126 )
  {
    v2 = *(unsigned __int8 *)(a1 + 1);
    v3 = v2 == 47;
    if ( v2 != 47 )
      v3 = v2 == 0;
    if ( v3 )
    {
      v20 = j_getenv("HOME");
      if ( !v20 )
        v20 = (const char *)sub_29B19C();
      return sub_29B6E0(v20, a1, 1);
    }
    else
    {
      v4 = strlen((const char *)a1);
      v5 = (char *)sub_93028(v4);
      v7 = *(unsigned __int8 *)(a1 + 1);
      v8 = v5;
      v9 = v7 == 47;
      if ( v7 != 47 )
        v9 = v7 == 0;
      if ( v9 )
      {
        v14 = v5;
        v11 = 1;
      }
      else
      {
        v6 = v5 - 1;
        v10 = a1 + 1;
        v11 = 1;
        do
        {
          *++v6 = v7;
          ++v11;
          v12 = *(unsigned __int8 *)++v10;
          v7 = v12;
          v13 = v12 == 0;
          if ( v12 )
            v13 = v7 == 47;
        }
        while ( !v13 );
        v14 = &v5[v11 - 1];
      }
      *v14 = 0;
      if ( !off_48BB64 || (v15 = (const char *)off_48BB64(v5, v6), (v16 = (char *)v15) == 0) )
      {
        v17 = getpwnam(v8);
        if ( v17 )
        {
          v18 = sub_29B6E0(v17->pw_dir, a1, v11);
        }
        else if ( !off_48BB68
               || (v24 = (const char *)((int (__fastcall *)(char *))off_48BB68)(v8), (v25 = (char *)v24) == 0)
               || (v18 = sub_29B6E0(v24, a1, v11), sub_297758(v25), !v18) )
        {
          v26 = strlen((const char *)a1);
          v27 = (char *)sub_93028(v26 + 1);
          v18 = strcpy(v27, (const char *)a1);
        }
        sub_297758(v8);
        endpwent();
        return v18;
      }
      v23 = sub_29B6E0(v15, a1, v11);
      sub_297758(v8);
      sub_297758(v16);
      return v23;
    }
  }
  else
  {
    v21 = strlen((const char *)a1);
    v22 = (char *)sub_93028(v21 + 1);
    return strcpy(v22, (const char *)a1);
  }
}
