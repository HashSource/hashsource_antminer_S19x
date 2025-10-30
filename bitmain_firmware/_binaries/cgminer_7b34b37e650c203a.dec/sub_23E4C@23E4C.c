char *__fastcall sub_23E4C(char *s1, int a2)
{
  const char *v2; // r4
  int v4; // r5
  size_t v5; // r6
  char *v7; // r0
  char *v8; // r8
  char *v9; // r0
  const char *v10; // r1

  v2 = "http:";
  v4 = 0;
  v5 = 5;
  *(_DWORD *)(a2 + 184) = 0;
  while ( strncmp(s1, v2, v5) )
  {
    ++v4;
    v2 = (&off_4CCE8)[2 * v4];
    if ( !v2 )
      return s1;
    v5 = strlen((&off_4CCE8)[2 * v4]);
  }
  v7 = strchr(s1, 124);
  v8 = v7;
  if ( v7 )
  {
    *v7 = 0;
    v9 = (char *)sub_229BC(1 - v5 + v7 - s1, "util.c", "get_proxy", 750);
    v10 = &s1[v5];
    *(_DWORD *)(a2 + 184) = v9;
    s1 = v8 + 1;
    strcpy(v9, v10);
    sub_23CD8(*(const char **)(a2 + 184), (_DWORD *)(a2 + 604), (char **)(a2 + 608));
    *(_DWORD *)(a2 + 180) = dword_4C8CC[2 * v4 + 264];
  }
  return s1;
}
