char *__fastcall sub_3E3C0(char *s1, int a2)
{
  const char *v2; // r4
  int v5; // r5
  size_t v6; // r6
  char *v7; // r0
  char *v8; // r8
  char *v9; // r0
  const char *v10; // r1

  v2 = "http:";
  v5 = 0;
  v6 = 5;
  *(_DWORD *)(a2 + 184) = 0;
  while ( strncmp(s1, v2, v6) )
  {
    ++v5;
    v2 = (&off_971F0)[2 * v5];
    if ( !v2 )
      return s1;
    v6 = strlen((&off_971F0)[2 * v5]);
  }
  v7 = strchr(s1, 124);
  v8 = v7;
  if ( v7 )
  {
    *v7 = 0;
    v9 = (char *)sub_3D10C(1 - v6 + v7 - s1, "util.c", "get_proxy", 750);
    v10 = &s1[v6];
    s1 = v8 + 1;
    *(_DWORD *)(a2 + 184) = v9;
    strcpy(v9, v10);
    sub_3E228(*(const char **)(a2 + 184), (_DWORD *)(a2 + 620), (char **)(a2 + 624));
    *(_DWORD *)(a2 + 180) = *(_DWORD *)&aTqFreezethaw[8 * v5 + 20];
  }
  return s1;
}
