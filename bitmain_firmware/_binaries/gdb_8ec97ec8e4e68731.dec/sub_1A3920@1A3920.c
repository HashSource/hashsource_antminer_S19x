int __fastcall sub_1A3920(int *a1, int a2, const char *a3, int a4, int a5, int a6, char *s1)
{
  int *v11; // r0
  int v12; // r4
  int v13; // r9
  int v14; // r5
  int v16; // r10
  char *v17; // r5
  const char *v18; // r0
  char *v19; // r6
  int v20; // r11
  int v21; // r9
  int v22; // r10
  int v23; // r11
  const char *v24; // r0
  const char *v25; // t1
  const char *v26; // t1

  v11 = sub_1A2F40(a3, (int)a1, a2);
  if ( !v11 )
    return 0;
  v12 = *v11;
  v13 = v11[1];
  v14 = *(_BYTE *)(v13 + 4) & 1;
  if ( v14 == a4 && !strcmp(s1, *(const char **)(v13 + 12)) )
  {
    if ( v14 != 1 )
      return v12;
    v16 = (2 * *(_DWORD *)(v13 + 4)) >> 2;
    if ( v16 == a5 )
    {
      if ( v16 <= 0 )
        return v12;
      v20 = *(_DWORD *)(v13 + 8);
      v21 = a6 - 4;
      v22 = a6 - 4 + 4 * v16;
      v23 = v20 - 4;
      do
      {
        v25 = *(const char **)(v21 + 4);
        v21 += 4;
        v24 = v25;
        v26 = *(const char **)(v23 + 4);
        v23 += 4;
        if ( strcmp(v24, v26) )
          v14 = 0;
      }
      while ( v21 != v22 );
      if ( v14 )
        return v12;
    }
  }
  v17 = (char *)sub_1A37A0(a1);
  v18 = (const char *)sub_1A37A0(*(int **)(v12 + 8));
  v19 = (char *)v18;
  if ( dword_47AC88 <= 0 )
  {
    if ( !v18 )
      goto LABEL_10;
    goto LABEL_9;
  }
  sub_F43B4(
    &off_46D334,
    "macro `%s' redefined at %s:%d; original definition at %s:%d",
    a3,
    v17,
    a2,
    v18,
    *(_DWORD *)(v12 + 12));
  if ( v19 )
LABEL_9:
    free(v19);
LABEL_10:
  if ( !v17 )
    return v12;
  free(v17);
  return v12;
}
