char *__fastcall sub_2F7694(int a1, int a2)
{
  char *v2; // r0
  char *v3; // r4
  int v5; // r2
  int v6; // r1
  const char *v8; // r5
  int v9; // r1
  unsigned int v10; // r3
  const char *v11; // r7
  size_t v12; // r6
  size_t v13; // r0
  signed int v14; // r0
  char *v15; // r0
  int v16; // r2
  unsigned int v17; // r3
  size_t v18; // r9
  size_t v19; // r8
  const char *v20; // r6
  size_t v21; // r0
  char *v22; // r0

  if ( (unsigned int)(a2 - 1) >= *(_DWORD *)(a1 + 4) )
  {
    if ( a2 )
      sub_2A6A5C("Dwarf Error: mangled line number section (bad file number).");
    goto LABEL_4;
  }
  v5 = *(_DWORD *)(a1 + 24);
  v6 = a2 + 0xFFFFFFF;
  v8 = *(const char **)(v5 + 16 * v6);
  v9 = v5 + 16 * v6;
  if ( !v8 )
  {
LABEL_4:
    v2 = (char *)malloc(0xAu);
    if ( !v2 )
      return 0;
    v3 = v2;
    strcpy(v2, "<unknown>");
    return v3;
  }
  if ( *v8 == 47 )
    return _strdup(v8);
  v10 = *(_DWORD *)(v9 + 4);
  if ( !v10
    || v10 > *(_DWORD *)(a1 + 8)
    || (v16 = *(_DWORD *)(a1 + 20)) == 0
    || (v17 = v10 + 0x3FFFFFFF, (v11 = *(const char **)(v16 + 4 * v17)) == 0) )
  {
    v11 = *(const char **)(a1 + 16);
    if ( v11 )
    {
      v12 = strlen(*(const char **)(a1 + 16));
      v13 = strlen(v8);
LABEL_13:
      v14 = v12 + v13 + 2;
      goto LABEL_14;
    }
    return _strdup(v8);
  }
  v18 = strlen(*(const char **)(v16 + 4 * v17));
  v13 = strlen(v8);
  v19 = v13;
  v12 = v18;
  if ( *v11 == 47 )
    goto LABEL_13;
  v20 = *(const char **)(a1 + 16);
  if ( !v20 )
  {
    v14 = v13 + v18 + 2;
LABEL_14:
    v15 = (char *)sub_2AB368(v14);
    v3 = v15;
    if ( v15 )
      sprintf(v15, "%s/%s", v11, v8);
    return v3;
  }
  v21 = strlen(*(const char **)(a1 + 16));
  v22 = (char *)sub_2AB368(v19 + v18 + 3 + v21);
  v3 = v22;
  if ( !v22 )
    return v3;
  sprintf(v22, "%s/%s/%s", v20, v11, v8);
  return v3;
}
