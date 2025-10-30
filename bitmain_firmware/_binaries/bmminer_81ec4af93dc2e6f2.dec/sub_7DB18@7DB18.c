int __fastcall sub_7DB18(int a1)
{
  int *v1; // r0
  int v5; // [sp+14h] [bp-10C8h] BYREF
  char v6[4100]; // [sp+18h] [bp-10C4h] BYREF
  struct tm tp; // [sp+101Ch] [bp-C0h] BYREF
  _BYTE v8[80]; // [sp+1048h] [bp-94h] BYREF
  time_t v9; // [sp+1098h] [bp-44h] BYREF
  size_t v10; // [sp+10B0h] [bp-2Ch]
  FILE *stream; // [sp+10B4h] [bp-28h]
  int v12; // [sp+10B8h] [bp-24h]
  int j; // [sp+10BCh] [bp-20h]
  int v14; // [sp+10C0h] [bp-1Ch]
  char *i; // [sp+10C4h] [bp-18h]
  char *s; // [sp+10C8h] [bp-14h]
  int v17; // [sp+10CCh] [bp-10h]

  v17 = 0;
  stream = 0;
  s = 0;
  i = 0;
  v14 = 0;
  j = 0;
  v12 = 0;
  v5 = 0;
  if ( !sub_8CCF0(a1, v8) )
  {
    localtime_r(&v9, &tp);
    strftime((char *)(a1 + 1025), 0x15u, "%F %T", &tp);
    stream = (FILE *)fopen64(a1, "r");
    if ( !stream )
    {
      sub_89984(2, "src/conf.c", 245, "open configure file[%s] fail", (const char *)a1);
      return -1;
    }
    s = v6;
    memset(v6, 0, 0x1001u);
    while ( 1 )
    {
      do
      {
        if ( !fgets(s, 4097 - (s - v6), stream) )
        {
LABEL_41:
          fclose(stream);
          return v17;
        }
        ++v14;
        v10 = strlen(s);
        if ( s[v10 - 1] == 10 )
          s[v10 - 1] = 0;
        for ( i = s; *i && ((*_ctype_b_loc())[(unsigned __int8)*i] & 0x2000) != 0; ++i )
          ;
      }
      while ( !*i || *i == 35 );
      for ( j = 0; i[j]; ++j )
        s[j] = i[j];
      s[j] = 0;
      for ( i = &s[strlen(s) - 1]; ((*_ctype_b_loc())[(unsigned __int8)*i] & 0x2000) != 0; --i )
        ;
      if ( *i != 92 )
        break;
      if ( i - v6 <= 4066 )
      {
        --i;
        while ( ((*_ctype_b_loc())[(unsigned __int8)*i] & 0x2000) != 0 )
          --i;
        *++i = 0;
        s = i;
      }
      else
      {
        s = v6;
LABEL_28:
        *++i = 0;
        v12 = 0;
        for ( i = v6; *i; ++i )
        {
          if ( *i == 34 )
          {
            v12 ^= 1u;
          }
          else if ( *i == 35 && !v12 )
          {
            *i = 0;
            break;
          }
        }
        v17 = sub_7E124(a1, v6, &v5);
        if ( v17 < 0 )
        {
          sub_89984(2, "src/conf.c", 314, "parse configure file[%s]line_no[%ld] fail", (const char *)a1, v14);
          sub_89984(2, "src/conf.c", 315, "line[%s]", v6);
          goto LABEL_41;
        }
        if ( v17 > 0 )
        {
          sub_89984(1, "src/conf.c", 318, "parse configure file[%s]line_no[%ld] fail", (const char *)a1, v14);
          sub_89984(1, "src/conf.c", 319, "line[%s]", v6);
          sub_89984(1, "src/conf.c", 320, "as strict init is set to false, ignore and go on");
          v17 = 0;
        }
      }
    }
    s = v6;
    goto LABEL_28;
  }
  v1 = _errno_location();
  sub_89984(2, "src/conf.c", 238, "lstat conf file[%s] fail, errno[%d]", (const char *)a1, *v1);
  return -1;
}
