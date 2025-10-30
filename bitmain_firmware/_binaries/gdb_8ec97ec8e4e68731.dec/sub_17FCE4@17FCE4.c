const char *__fastcall sub_17FCE4(int a1, const char **a2)
{
  int v4; // r9
  const char **v5; // r9
  const char **v6; // r5
  size_t v7; // r4
  const char *v8; // t1
  size_t v9; // r4
  int v10; // r0
  const char **v11; // r6
  int v12; // r10
  const char *v13; // r8
  char *v14; // r4
  _BYTE *v15; // r0
  const char *v16; // r5
  const char *v17; // t1
  int v18; // r1
  char *v19; // r0
  char *v20; // r1
  bool v21; // zf
  int v22; // t1
  int v23; // t1
  const char **v24; // r6
  size_t v25; // r4
  const char **v26; // r8
  int v27; // r5
  const char *v28; // r11
  const char *v29; // t1
  size_t v30; // r0
  const char *v31; // t1
  _WORD *v32; // r0

  v4 = dword_46D538;
  if ( dword_46D538 )
  {
    if ( a1 > 0 )
    {
      v5 = &a2[a1];
      v6 = a2;
      v7 = 0;
      do
      {
        v8 = *v6++;
        v9 = v7 + 1 + 3 * strlen(v8);
        if ( *v8 )
          v10 = 0;
        else
          v10 = 2;
        v7 = v9 + v10;
      }
      while ( v5 != v6 );
      v11 = a2 - 1;
      v12 = 0;
      v13 = (const char *)sub_93028(v7);
      v14 = (char *)v13;
      while ( 1 )
      {
        v17 = v11[1];
        ++v11;
        v16 = v17;
        v18 = *(unsigned __int8 *)v17;
        if ( !*v17 )
        {
          ++v12;
          *v14 = 39;
          v15 = v14 + 2;
          v14[1] = 39;
          if ( a1 == v12 )
            goto LABEL_22;
          goto LABEL_10;
        }
        if ( v18 == 10 )
          goto LABEL_20;
        while ( 1 )
        {
          v19 = strchr("\"!#$&*()\\|[]{}<>?'`~^; \t\n", v18);
          v20 = v14 + 1;
          v21 = v19 == 0;
          if ( v19 )
          {
            *v14 = 92;
            v14 += 2;
          }
          else
          {
            v19 = v14 + 1;
          }
          if ( v21 )
          {
            v20 = v14;
            v14 = v19;
          }
          *v20 = *v16;
          v22 = *(unsigned __int8 *)++v16;
          v18 = v22;
          if ( !v22 )
            break;
          while ( v18 == 10 )
          {
LABEL_20:
            *v14 = 39;
            v14 += 3;
            *(v14 - 2) = v18;
            *(v14 - 1) = 39;
            v23 = *(unsigned __int8 *)++v16;
            v18 = v23;
            if ( !v23 )
              goto LABEL_21;
          }
        }
LABEL_21:
        ++v12;
        v15 = v14;
        if ( a1 == v12 )
          goto LABEL_22;
LABEL_10:
        v14 = v15 + 1;
        *v15 = 32;
      }
    }
    v15 = sub_93028(0);
    v13 = v15;
LABEL_22:
    *v15 = 0;
  }
  else if ( a1 <= 0 )
  {
    v13 = (const char *)sub_93028(dword_46D538);
    *v13 = 0;
  }
  else
  {
    v24 = a2 - 1;
    v25 = dword_46D538;
    v26 = a2 - 1;
    v27 = dword_46D538;
    do
    {
      v29 = v26[1];
      ++v26;
      v28 = v29;
      if ( strchr(v29, 32) || strchr(v28, 9) || strchr(v28, 10) )
        sub_946E0("can't handle command-line argument containing whitespace");
      ++v27;
      v25 += 1 + strlen(v28);
    }
    while ( a1 != v27 );
    v13 = (const char *)sub_93028(v25);
    *v13 = 0;
    while ( 1 )
    {
      ++v4;
      v30 = strlen(v13);
      v31 = v24[1];
      ++v24;
      v32 = (_WORD *)stpcpy(&v13[v30], v31);
      if ( v27 == v4 )
        break;
      *v32 = 32;
    }
  }
  return v13;
}
