_DWORD *__fastcall sub_8F138(const char *a1)
{
  int *v2; // r0
  int v3; // r0
  char v6[4100]; // [sp+10h] [bp-201Ch] BYREF
  unsigned int v7; // [sp+1014h] [bp-1018h] BYREF
  char v8[4100]; // [sp+1018h] [bp-1014h] BYREF
  int v9; // [sp+201Ch] [bp-10h]
  _DWORD *v10; // [sp+2020h] [bp-Ch]
  unsigned int i; // [sp+2024h] [bp-8h]

  v10 = 0;
  v7 = 0;
  if ( a1 )
  {
    memset(v8, 0, 0x1001u);
    memset(v6, 0, 0x1001u);
    v9 = _isoc99_sscanf(a1, " %[^= \t] = %d ,%s", v8, &v7, v6);
    if ( v9 <= 1 )
    {
      sub_8CD10(2, "src/level.c", 84, "level[%s], syntax wrong", a1);
      return 0;
    }
    if ( v7 >= 0x100 )
    {
      sub_8CD10(2, "src/level.c", 90, "l[%d] not in [0,255], wrong", v7);
      return 0;
    }
    if ( !v8[0] )
    {
      sub_8CD10(2, "src/level.c", 95, "str[0] = 0");
      return 0;
    }
    v10 = calloc(1u, 0x810u);
    if ( !v10 )
    {
      v2 = _errno_location();
      sub_8CD10(2, "src/level.c", 101, "calloc fail, errno[%d]", *v2);
      return 0;
    }
    *v10 = v7;
    if ( v6[0] )
    {
      v3 = sub_8EFA4(v6);
      v10[515] = v3;
      if ( v10[515] == -187 )
      {
        sub_8CD10(2, "src/level.c", 113, "syslog_level_atoi fail");
        goto LABEL_22;
      }
    }
    else
    {
      v10[515] = 7;
    }
    for ( i = 0; i < 0x400 && v8[i]; ++i )
    {
      *((_BYTE *)v10 + i + 4) = toupper((unsigned __int8)v8[i]);
      *((_BYTE *)v10 + i + 1029) = tolower((unsigned __int8)v8[i]);
    }
    if ( !v8[i] )
    {
      *((_BYTE *)v10 + i + 4) = 0;
      *((_BYTE *)v10 + i + 1029) = 0;
      v10[514] = i;
      return v10;
    }
    sub_8CD10(2, "src/level.c", 126, "not enough space for str, str[%s] > %d", v8, i);
LABEL_22:
    sub_8CD10(2, "src/level.c", 138, "line[%s]", a1);
    sub_8EF30(v10);
    return 0;
  }
  sub_8CD10(2, "src/level.c", 77, "line is null or 0");
  return 0;
}
