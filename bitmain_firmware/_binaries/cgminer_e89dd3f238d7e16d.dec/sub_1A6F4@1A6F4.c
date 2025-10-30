const char *__fastcall sub_1A6F4(char *a1, int a2)
{
  const char *result; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  _DWORD v9[5]; // [sp+Ch] [bp-138h]
  char s[256]; // [sp+20h] [bp-124h] BYREF
  const char *v11; // [sp+120h] [bp-24h]
  int v12; // [sp+124h] [bp-20h]
  _DWORD *v13; // [sp+128h] [bp-1Ch]
  const char *v14; // [sp+12Ch] [bp-18h]
  char *src; // [sp+130h] [bp-14h]
  const char *j; // [sp+134h] [bp-10h]
  int i; // [sp+138h] [bp-Ch]
  const char *v18; // [sp+13Ch] [bp-8h]

  v18 = 0;
  v14 = 0;
  v13 = 0;
  memset(s, 0, sizeof(s));
  j = 0;
  result = "SUMMARY";
  v9[0] = "SUMMARY";
  v9[1] = "POOLS";
  v9[2] = "STATS";
  v9[3] = "DEVS";
  v9[4] = "VERSION";
  src = 0;
  v11 = 0;
  v12 = 5;
  for ( i = 0; i < v12; ++i )
  {
    result = (const char *)sub_652F0(a2, v9[i]);
    v18 = result;
    if ( result )
    {
      if ( *(_DWORD *)v18 == 1 )
        break;
    }
  }
  if ( i < v12 )
  {
    if ( !i || i == 4 )
    {
      snprintf(s, 0x100u, "%s,", (const char *)v9[i]);
      strcat(a1, s);
    }
    result = (const char *)sub_65E3C(v18);
    v11 = result;
    for ( j = 0; (int)j < (int)v11; ++j )
    {
      result = (const char *)sub_65E88(v18, j);
      v14 = result;
      if ( result && !*(_DWORD *)v14 )
      {
        v3 = sub_65860(v14);
        for ( src = (char *)sub_6599C(v3); src; src = (char *)sub_6599C(v5) )
        {
          v6 = sub_65A8C(src);
          v13 = (_DWORD *)sub_659D8(v6);
          if ( !v13 )
            break;
          strcat(a1, src);
          *(_WORD *)&a1[strlen(a1)] = 61;
          sub_1A550(a1, v13);
          *(_WORD *)&a1[strlen(a1)] = 44;
          v4 = sub_65A8C(src);
          v5 = sub_6592C(v14, v4);
        }
        result = (const char *)strlen(a1);
        result[(_DWORD)a1 - 1] = 124;
        if ( j != v11 - 1 )
        {
          result = (const char *)strlen(a1);
          result[(_DWORD)a1] = 44;
        }
      }
    }
  }
  return result;
}
