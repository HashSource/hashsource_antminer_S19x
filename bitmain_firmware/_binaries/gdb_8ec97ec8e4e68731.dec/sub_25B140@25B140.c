int __fastcall sub_25B140(int a1, const char **a2)
{
  _BOOL4 v2; // r3
  const char *v4; // r0
  size_t v5; // r0
  const char *v6; // r3
  size_t v7; // r4
  const char **v8; // r5
  size_t v9; // r0
  const char *v10; // t1
  void *v11; // r7
  int v12; // r0
  char *v13; // r0
  const char *v14; // r12
  char *v15; // r4
  bool v16; // zf
  const char **v17; // r5
  size_t v18; // r0
  const char *v19; // t1
  const char *v20; // r12
  int v21; // r0
  int v22; // r1
  int v23; // r2
  int v24; // r3
  int v25; // r1
  char v26; // r3

  v2 = a2 == 0;
  if ( a1 != 13 )
    v2 = 1;
  if ( v2 )
    return sub_2A6920(a1);
  v4 = (const char *)sub_2A6920(13);
  v5 = strlen(v4);
  v6 = *a2;
  v7 = v5 + 75;
  if ( *a2 )
  {
    v8 = a2;
    do
    {
      v9 = strlen(v6);
      v10 = v8[1];
      ++v8;
      v6 = v10;
      v7 += 1 + v9;
    }
    while ( v10 );
  }
  v11 = sub_93028(v7 + 1);
  sub_9253C(2458320, (int)v11);
  v12 = sub_2A6920(13);
  v13 = (char *)stpcpy(v11, v12);
  v14 = *a2;
  v15 = v13 + 19;
  v16 = *a2 == 0;
  strcpy(v13, ".\nMatching formats:");
  if ( !v16 )
  {
    v17 = a2;
    do
    {
      sprintf(v15, " %s", v14);
      v18 = strlen(v15);
      v19 = v17[1];
      ++v17;
      v14 = v19;
      v15 += v18;
    }
    while ( v19 );
  }
  free(a2);
  v20 = ".\nUse \"set gnutarget format-name\" to specify the format.";
  do
  {
    v15 += 16;
    v21 = *(_DWORD *)v20;
    v22 = *((_DWORD *)v20 + 1);
    v23 = *((_DWORD *)v20 + 2);
    v24 = *((_DWORD *)v20 + 3);
    v20 += 16;
    *((_DWORD *)v15 - 4) = v21;
    *((_DWORD *)v15 - 3) = v22;
    *((_DWORD *)v15 - 2) = v23;
    *((_DWORD *)v15 - 1) = v24;
  }
  while ( v20 != " format." );
  v25 = *((_DWORD *)v20 + 1);
  v26 = v20[8];
  *(_DWORD *)v15 = *(_DWORD *)v20;
  *((_DWORD *)v15 + 1) = v25;
  v15[8] = v26;
  return (int)v11;
}
