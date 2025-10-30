int __fastcall sub_3E228(const char *a1, _DWORD *a2, char **a3)
{
  const char *v4; // r4
  char *v6; // r0
  char *v7; // r5
  char *v8; // r0
  bool v9; // zf
  char v10; // r9
  int v11; // r9
  char *v12; // r5
  signed int v13; // r10
  signed int v14; // r6
  int v15; // r3
  char *v16; // r2
  int v17; // t1
  bool v18; // zf
  char v20[8]; // [sp+8h] [bp-108h] BYREF
  char s[256]; // [sp+10h] [bp-100h] BYREF

  *a2 = a1;
  v4 = a1;
  v6 = strstr(a1, "//");
  if ( v6 )
    v4 = v6 + 2;
  v7 = strchr(v4, 91);
  v8 = strchr(v4, 93);
  v9 = v8 == 0;
  if ( v8 )
    v9 = v7 == 0;
  v10 = !v9;
  if ( v7 < v8 )
    v11 = v10 & 1;
  else
    v11 = 0;
  if ( !v11 )
    v8 = (char *)v4;
  v12 = strchr(v8, 58);
  if ( v12 )
  {
    v13 = v12 - v4;
    v14 = ~(v12 - v4) + strlen(v4);
    if ( v14 <= 0 )
      return 0;
    ++v12;
  }
  else
  {
    v14 = 0;
    v13 = strlen(v4);
  }
  if ( v13 <= 0 )
    return 0;
  if ( v11 )
  {
    v13 -= 2;
    ++v4;
  }
  snprintf(s, 0xFEu, "%.*s", v13, v4);
  if ( v14 )
  {
    snprintf(v20, 6u, "%.*s", v14, v12);
    v15 = (unsigned __int8)v20[0];
    if ( v20[0] )
    {
      v16 = v20;
      while ( 1 )
      {
        v18 = v15 == 47;
        if ( v15 != 47 )
          v18 = v15 == 35;
        if ( v18 )
          break;
        v17 = (unsigned __int8)*++v16;
        v15 = v17;
        if ( !v17 )
          goto LABEL_30;
      }
      *v16 = 0;
    }
  }
  else
  {
    strcpy(v20, "80");
  }
LABEL_30:
  *a3 = _strdup(v20);
  *a2 = _strdup(s);
  return 1;
}
