bool __fastcall sub_2AA048(int a1, const char **a2)
{
  bool v2; // zf
  const char *v5; // r0
  const char *v6; // r5
  const char *v7; // r4
  char *v8; // r0
  char *v9; // r0

  v2 = a1 == 0;
  if ( a1 )
    v2 = a2 == 0;
  if ( v2 )
    return 1;
  v5 = (const char *)sub_2A9F78(a1);
  v6 = v5;
  if ( !v5 )
    return 1;
  v7 = *a2;
  if ( !v7 )
    return 1;
  v8 = strrchr(v5, 47);
  if ( v8 )
    v6 = v8 + 1;
  v9 = strrchr(v7, 47);
  if ( v9 )
    v7 = v9 + 1;
  return j_strcmp(v7, v6) == 0;
}
