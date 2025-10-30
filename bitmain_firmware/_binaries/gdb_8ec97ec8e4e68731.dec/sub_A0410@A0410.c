char *__fastcall sub_A0410(int a1)
{
  int v1; // r3
  const char *v2; // r5
  size_t v3; // r0
  const char *v4; // r7
  const char *v5; // r8
  const char *v6; // r5
  const char *v7; // r4
  const char *v8; // r6
  const char *v9; // r3
  size_t v10; // r4
  unsigned int v11; // r12
  char *v12; // r3
  int v13; // r3
  char *result; // r0
  int v15; // r3

  v1 = *(_DWORD *)(a1 + 24);
  if ( *(_BYTE *)v1 == 1 )
  {
    v15 = *(_DWORD *)(v1 + 20);
    if ( !v15 )
      return "";
    v1 = *(_DWORD *)(v15 + 24);
  }
  v2 = *(const char **)(v1 + 8);
  if ( !v2 )
  {
    v2 = *(const char **)(v1 + 12);
    if ( !v2 )
      return "";
  }
  if ( !*v2 )
    return "";
  v3 = strlen(v2) - 6;
  v4 = &v2[v3];
  if ( &v2[v3] == v2 )
    return "";
  while ( strncmp(v4, "___XVN", 6u) )
  {
    if ( --v4 == v2 )
      return "";
  }
  if ( v4 == v2 )
    return "";
  v5 = v2 + 3;
  if ( v4 != v2 + 3 )
  {
    v6 = v2 + 1;
    if ( v6 != v4 )
    {
      v7 = v4;
      while ( 1 )
      {
        v8 = v7;
        if ( v7 > v5 && !strncmp(v7 - 3, "___", 3u) )
          break;
        v9 = v7 - 1;
        if ( *(v7 - 1) == 46 )
        {
          v10 = v4 - v7;
          v11 = v10 + 1;
          goto LABEL_17;
        }
        --v7;
        if ( v5 == v9 )
        {
          v10 = v4 - v5;
          v8 = v5;
          v11 = v4 - v5 + 1;
          goto LABEL_17;
        }
        if ( v6 == v9 )
          return "";
      }
      v10 = v4 - v7;
      v11 = v10 + 1;
      goto LABEL_17;
    }
    return "";
  }
  v8 = v4;
  v10 = 0;
  v11 = 1;
LABEL_17:
  v12 = (char *)dword_477CA8;
  if ( dword_477CA4 < v11 )
  {
    if ( 2 * dword_477CA4 < v11 )
      v13 = v11;
    else
      v13 = 2 * dword_477CA4;
    dword_477CA4 = v13;
    v12 = (char *)sub_9D470((void *)dword_477CA8, &dword_477CA4, 1);
    dword_477CA8 = (int)v12;
  }
  result = strncpy(v12, v8, v10);
  result[v10] = 0;
  return result;
}
