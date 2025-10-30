int __fastcall sub_AA8D4(int *a1, char *s, int a3)
{
  char *v3; // r4
  const char *v6; // r7
  size_t v7; // r8
  int v8; // r9
  char **v9; // r0
  int v10; // r0
  unsigned int v12; // r0
  _DWORD *v13; // r2
  int v14; // r1
  int v15; // r3
  int v16; // r3
  int v17; // r3
  int v18; // r3

  v3 = s;
  if ( !s )
  {
    sub_D0048(20, 334, 385, "ssl/ssl_conf.c", 803);
    return 0;
  }
  v6 = (const char *)a1[1];
  if ( v6 )
  {
    v7 = a1[2];
    if ( strlen(s) <= v7 )
      return -2;
    v8 = *a1;
    if ( (*a1 & 1) != 0 )
    {
      if ( strncmp(v3, v6, a1[2]) )
        return -2;
    }
    if ( (v8 & 2) != 0 && strncasecmp(v3, v6, v7) )
      return -2;
    v3 += v7;
  }
  else
  {
    v8 = *a1;
    if ( (*a1 & 1) != 0 )
    {
      if ( *s != 45 )
        return -2;
      v3 = s + 1;
      if ( !s[1] )
        return -2;
    }
  }
  v9 = sub_A9B34(a1, v3);
  if ( !v9 )
  {
    if ( (v8 & 0x10) != 0 )
    {
      sub_D0048(20, 334, 386, "ssl/ssl_conf.c", 832);
      sub_D1240(2, "cmd=", v3);
    }
    return -2;
  }
  if ( *((_WORD *)v9 + 7) == 4 )
  {
    v12 = ((char *)v9 - (char *)&unk_202E1C) >> 4;
    if ( v12 > 0x15 )
      return 0;
    v13 = (_DWORD *)a1[5];
    v14 = dword_1AA3B8[2 * v12];
    if ( !v13 )
      return 1;
    if ( (dword_1AA3B8[2 * v12 + 1] & 1) != 0 )
    {
      v15 = dword_1AA3B8[2 * v12 + 1] & 0xF00;
      if ( v15 != 256 )
      {
        if ( v15 != 512 )
        {
          if ( v15 )
            return 1;
LABEL_40:
          *v13 &= ~v14;
          return 1;
        }
        v17 = 0;
LABEL_39:
        v13 = (_DWORD *)a1[16];
        if ( !v17 )
          goto LABEL_40;
LABEL_36:
        *v13 |= v14;
        return 1;
      }
      v18 = 0;
    }
    else
    {
      v16 = dword_1AA3B8[2 * v12 + 1] & 0xF00;
      if ( v16 != 256 )
      {
        if ( v16 != 512 )
        {
          if ( v16 )
            return 1;
          goto LABEL_36;
        }
        v17 = 1;
        goto LABEL_39;
      }
      v18 = 1;
    }
    v13 = (_DWORD *)a1[15];
    if ( !v18 )
      goto LABEL_40;
    goto LABEL_36;
  }
  if ( a3 )
  {
    v10 = ((int (__fastcall *)(int *, int))*v9)(a1, a3);
    if ( v10 > 0 )
      return 2;
    if ( v10 != -2 )
    {
      if ( (*a1 & 0x10) != 0 )
      {
        sub_D0048(20, 334, 384, "ssl/ssl_conf.c", 825);
        sub_D1240(4, "cmd=", v3);
      }
      return 0;
    }
    return -2;
  }
  return -3;
}
