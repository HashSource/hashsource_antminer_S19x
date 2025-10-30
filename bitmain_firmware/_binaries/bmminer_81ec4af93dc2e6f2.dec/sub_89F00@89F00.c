int __fastcall sub_89F00(char *a1, int a2)
{
  char *v3; // r0
  int *v4; // r0
  size_t v5; // r0
  int v9; // [sp+14h] [bp-3030h] BYREF
  char v10[4100]; // [sp+18h] [bp-302Ch] BYREF
  char v11[4100]; // [sp+101Ch] [bp-2028h] BYREF
  char v12[4100]; // [sp+2020h] [bp-1024h] BYREF
  size_t n; // [sp+3024h] [bp-20h]
  int v14; // [sp+3028h] [bp-1Ch]
  void *dest; // [sp+302Ch] [bp-18h]
  size_t v16; // [sp+3030h] [bp-14h]
  char *s; // [sp+3034h] [bp-10h]

  v16 = strlen(a1);
  s = a1;
  while ( 1 )
  {
    dest = strchr(s, 37);
    if ( !dest )
      break;
    memset(v12, 0, 0x1001u);
    memset(v11, 0, 0x1001u);
    memset(v10, 0, 0x1001u);
    v9 = 0;
    v14 = _isoc99_sscanf((char *)dest + 1, "%[.0-9-]%n", &v12[1], &v9);
    if ( v14 == 1 )
    {
      v12[0] = 37;
      v12[v9 + 1] = 115;
    }
    else
    {
      v9 = 0;
      strcpy(v12, "%s");
    }
    s = (char *)dest + v9 + 1;
    v14 = _isoc99_sscanf(s, "E(%[^)])%n", v11, &v9);
    if ( v14 )
    {
      s += v9;
      if ( *(s - 1) != 41 )
      {
        sub_89984(2, "src/zc_util.c", 124, "in string[%s] can't find match )", (const char *)dest);
        return -1;
      }
      v3 = getenv(v11);
      n = snprintf(v10, 0x1001u, v12, v3);
      if ( n > 0x1000 )
      {
        v4 = _errno_location();
        sub_89984(2, "src/zc_util.c", 131, "snprintf fail, errno[%d], evn_value_len[%d]", *v4, n);
        return -1;
      }
      v16 = n + v16 - (s - (_BYTE *)dest);
      if ( a2 - 1 < v16 )
      {
        sub_89984(2, "src/zc_util.c", 137, "repalce env_value[%s] cause overlap", v10);
        return -1;
      }
      v5 = strlen(s);
      memmove((char *)dest + n, s, v5 + 1);
      memcpy(dest, v10, n);
    }
  }
  return 0;
}
