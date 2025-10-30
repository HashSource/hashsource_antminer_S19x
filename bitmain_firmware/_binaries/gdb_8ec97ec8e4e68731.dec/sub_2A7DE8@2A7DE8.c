const char *__fastcall sub_2A7DE8(int a1, char *s, int a3)
{
  int v3; // r7
  const char *v5; // r6
  int v6; // r2
  bool v7; // zf
  const char *v8; // r4
  int v9; // r3
  int v10; // t1
  bool v11; // zf
  char *v12; // r0
  int v13; // r1
  const char *v14; // r10
  size_t v15; // r9
  _BYTE *v16; // r0
  _BYTE *v17; // r11
  char *v18; // r8
  size_t v19; // r7
  size_t v20; // r11
  int v21; // r1
  char *v22; // r0
  char *v23; // r4
  size_t v25; // r5
  int v26; // r1
  char *v27; // r0
  const char *v28; // r4
  const char *v29; // r0
  size_t v30; // r5
  char *v31; // r9

  v3 = a1;
  v5 = s;
  v6 = (unsigned __int8)*s;
  if ( a1 )
  {
    if ( !*s )
    {
      v30 = 0;
      v31 = s;
      v3 = 0;
      v8 = s;
      goto LABEL_15;
    }
    if ( *(unsigned __int8 *)(*(_DWORD *)(a1 + 4) + 24) == v6 )
    {
      v6 = (unsigned __int8)s[1];
      v3 = 1;
      v5 = s + 1;
    }
    else
    {
      v3 = 0;
    }
  }
  v7 = v6 == 46;
  if ( v6 != 46 )
    v7 = v6 == 36;
  if ( v7 )
  {
    v8 = v5;
    do
    {
      v10 = *(unsigned __int8 *)++v8;
      v9 = v10;
      v11 = v10 == 36;
      if ( v10 != 36 )
        v11 = v9 == 46;
    }
    while ( v11 );
    v31 = (char *)v8;
    v30 = v8 - v5;
  }
  else
  {
    v30 = 0;
    v31 = (char *)v5;
    v8 = v5;
  }
LABEL_15:
  v12 = strchr(v8, 64);
  v14 = v12;
  if ( !v12 )
  {
    v29 = (const char *)sub_30DFAC(v8, a3);
    v28 = v29;
    if ( v29 )
    {
      if ( v30 )
      {
        v18 = (char *)v29;
        v19 = strlen(v29);
        v14 = &v28[v19];
        goto LABEL_19;
      }
      return v28;
    }
    goto LABEL_23;
  }
  v15 = v12 - v31;
  v16 = (_BYTE *)sub_2AB368(v15 + 1, v13);
  v17 = v16;
  if ( !v16 )
    return 0;
  memcpy(v16, v8, v15);
  v17[v15] = 0;
  v18 = (char *)sub_30DFAC(v17, a3);
  free(v17);
  if ( !v18 )
  {
LABEL_23:
    if ( v3 )
    {
      v25 = strlen(v5) + 1;
      v27 = (char *)sub_2AB368(v25, v26);
      v28 = v27;
      if ( v27 )
        memcpy(v27, v5, v25);
      return v28;
    }
    return 0;
  }
  v19 = strlen(v18);
LABEL_19:
  v20 = strlen(v14) + 1;
  v22 = (char *)sub_2AB368(v19 + v30 + v20, v21);
  v23 = v22;
  if ( v22 )
  {
    memcpy(v22, v5, v30);
    memcpy(&v23[v30], v18, v19);
    memcpy(&v23[v19 + v30], v14, v20);
  }
  free(v18);
  return v23;
}
