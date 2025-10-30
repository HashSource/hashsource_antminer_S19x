int __fastcall sub_2DD87C(char *s2, int a2, _DWORD *a3, int a4)
{
  int v4; // r5
  int v8; // r4
  size_t v10; // r8
  size_t v11; // r4
  int v12; // r4
  int v13; // r5
  int v14; // r0

  v4 = a2;
  if ( !a2 )
    return v4;
  v8 = a2;
  do
  {
    if ( !strcmp(*(const char **)v8, s2) )
    {
      *a3 = *(_DWORD *)(v8 + 28);
      return 1;
    }
    v8 = *(_DWORD *)(v8 + 12);
  }
  while ( v8 );
  v10 = strlen(s2);
  while ( 1 )
  {
    v11 = strlen(*(const char **)v4);
    if ( v11 <= v10 && !strncmp(*(const char **)v4, s2, v11) && !strncmp(".end", &s2[v11], 4u) )
      break;
    v4 = *(_DWORD *)(v4 + 12);
    if ( !v4 )
      return v4;
  }
  v12 = *(_DWORD *)(v4 + 28);
  v13 = *(_DWORD *)(v4 + 36);
  v14 = sub_2A6904(a4);
  *a3 = sub_347418(v13, v14) + v12;
  return 1;
}
