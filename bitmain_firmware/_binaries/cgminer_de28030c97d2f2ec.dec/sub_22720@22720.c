int __fastcall sub_22720(char *a1, char **a2, char **a3)
{
  char v8[8]; // [sp+18h] [bp-12Ch] BYREF
  char v9[256]; // [sp+20h] [bp-124h] BYREF
  char *v10; // [sp+120h] [bp-24h]
  char *v11; // [sp+124h] [bp-20h]
  char *v12; // [sp+128h] [bp-1Ch]
  int v13; // [sp+12Ch] [bp-18h]
  int v14; // [sp+130h] [bp-14h]
  const char *v15; // [sp+134h] [bp-10h]
  char *v16; // [sp+138h] [bp-Ch]
  char *s; // [sp+13Ch] [bp-8h]

  v15 = 0;
  v13 = 0;
  *a2 = a1;
  s = strstr(a1, "//");
  if ( s )
    s += 2;
  else
    s = a1;
  v12 = strchr(s, 91);
  v11 = strchr(s, 93);
  if ( v12 && v11 && v11 > v12 )
    v16 = strchr(v11, 58);
  else
    v16 = strchr(s, 58);
  if ( v16 )
  {
    v14 = v16 - s;
    v13 = strlen(s) - (v16 - s) - 1;
    if ( v13 <= 0 )
      return 0;
    v15 = v16 + 1;
  }
  else
  {
    v14 = strlen(s);
  }
  if ( v14 <= 0 )
    return 0;
  if ( v12 && v11 && v11 > v12 )
  {
    v14 -= 2;
    ++s;
  }
  snprintf(v9, 0xFEu, "%.*s", v14, s);
  if ( v13 )
  {
    snprintf(v8, 6u, "%.*s", v13, v15);
    v10 = strpbrk(v8, "/#");
    if ( v10 )
      *v10 = 0;
  }
  else
  {
    strcpy(v8, "80");
  }
  *a3 = strdup(v8);
  *a2 = strdup(v9);
  return 1;
}
