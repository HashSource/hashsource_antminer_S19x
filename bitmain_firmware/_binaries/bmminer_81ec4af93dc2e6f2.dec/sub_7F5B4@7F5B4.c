void *__fastcall sub_7F5B4(const char *a1, int a2)
{
  int *v3; // r0
  int v4; // r0
  _BYTE *v8; // [sp+10h] [bp-24h] BYREF
  int v9; // [sp+14h] [bp-20h] BYREF
  int v10; // [sp+18h] [bp-1Ch]
  char *v11; // [sp+1Ch] [bp-18h]
  char *v12; // [sp+20h] [bp-14h]
  void *s; // [sp+24h] [bp-10h]
  int v14; // [sp+28h] [bp-Ch]
  _BYTE *i; // [sp+2Ch] [bp-8h]

  v14 = 0;
  s = 0;
  v9 = 0;
  if ( !a1 )
  {
    sub_89984(2, "src/format.c", 65, "line is null or 0");
    return 0;
  }
  s = calloc(1u, 0x2008u);
  if ( !s )
  {
    v3 = _errno_location();
    sub_89984(2, "src/format.c", 69, "calloc fail, errno[%d]", *v3);
    return 0;
  }
  memset(s, 0, 0x1001u);
  v9 = 0;
  v14 = _isoc99_sscanf(a1, " %[^= \t] = %n", s, &v9);
  if ( v14 != 1 )
  {
    sub_89984(2, "src/format.c", 81, "format[%s], syntax wrong", a1);
LABEL_31:
    sub_7F518(s);
    return 0;
  }
  if ( a1[v9] != 34 )
  {
    sub_89984(2, "src/format.c", 86, "the 1st char of pattern is not \", line+nread[%s]", &a1[v9]);
    goto LABEL_31;
  }
  for ( i = s; *i; ++i )
  {
    if ( ((*_ctype_b_loc())[(unsigned __int8)*i] & 8) == 0 && *i != 95 )
    {
      sub_89984(2, "src/format.c", 92, "a_format->name[%s] character is not in [a-Z][0-9][_]", (const char *)s);
      goto LABEL_31;
    }
  }
  v12 = (char *)&a1[v9 + 1];
  v11 = strrchr(v12, 34);
  if ( !v11 )
  {
    sub_89984(2, "src/format.c", 100, "there is no \" at end of pattern, line[%s]", a1);
    goto LABEL_31;
  }
  if ( (unsigned int)(v11 - v12) > 0x1000 )
  {
    sub_89984(2, "src/format.c", 105, "pattern is too long");
    goto LABEL_31;
  }
  memset((char *)s + 4097, 0, 0x1001u);
  memcpy((char *)s + 4097, v12, v11 - v12);
  if ( sub_89F00((char *)s + 4097, 4097) )
  {
    sub_89984(2, "src/format.c", 112, "zc_str_replace_env fail");
    goto LABEL_31;
  }
  v4 = sub_884DC(sub_87238);
  *((_DWORD *)s + 2049) = v4;
  if ( !*((_DWORD *)s + 2049) )
  {
    sub_89984(2, "src/format.c", 119, "zc_arraylist_new fail");
    goto LABEL_31;
  }
  for ( i = (char *)s + 4097; *i; i = v8 )
  {
    v10 = sub_872A8(i, &v8, a2);
    if ( !v10 )
    {
      sub_89984(2, "src/format.c", 126, "zlog_spec_new fail");
      goto LABEL_31;
    }
    if ( sub_888DC(*((_DWORD *)s + 2049), v10) )
    {
      sub_87238(v10);
      sub_89984(2, "src/format.c", 132, "zc_arraylist_add fail");
      goto LABEL_31;
    }
  }
  sub_7F480((int)s, 0);
  return s;
}
