_DWORD *__fastcall sub_2A300C(const char *a1, const char *a2)
{
  const char *v4; // r10
  int v5; // r0
  void *v6; // r9
  int v7; // r0
  void *v8; // r8
  const char *v9; // r6
  int v10; // r2
  const char *v11; // r5
  bool v12; // zf
  int v13; // t1
  bool v14; // zf
  int v15; // r1
  const char *v16; // r4
  bool v17; // zf
  int v18; // r3
  int v19; // t1
  bool v20; // zf
  bool v21; // zf
  size_t v22; // r0
  int v23; // r1
  size_t v24; // r3
  int v25; // r4
  const char *v26; // r7
  int v27; // r5
  int v28; // t1
  int v29; // t1
  size_t v30; // r0
  size_t v31; // r3
  _BOOL4 v32; // r10
  _BOOL4 v33; // r1
  _DWORD *v34; // r4
  char *v35; // r0
  int v37; // [sp+4h] [bp-8h]
  size_t v38; // [sp+4h] [bp-8h]
  size_t v39; // [sp+4h] [bp-8h]
  int v40; // [sp+4h] [bp-8h]

  v4 = (const char *)sub_3234D8();
  v5 = sub_3245D0(a1);
  v6 = (void *)v5;
  if ( v5 )
    a1 = (const char *)v5;
  v7 = sub_3245D0(a2);
  v8 = (void *)v7;
  if ( v7 )
    v9 = (const char *)v7;
  else
    v9 = a2;
  while ( 1 )
  {
    v10 = *(unsigned __int8 *)a1;
    v11 = a1;
    v12 = v10 == 0;
    if ( *a1 )
      v12 = v10 == 47;
    if ( !v12 )
    {
      do
      {
        v13 = *(unsigned __int8 *)++v11;
        v10 = v13;
        v14 = v13 == 0;
        if ( v13 )
          v14 = v10 == 47;
      }
      while ( !v14 );
    }
    v15 = *(unsigned __int8 *)v9;
    v16 = v9;
    v17 = v15 == 47;
    if ( v15 != 47 )
      v17 = v15 == 0;
    if ( v17 )
    {
      v18 = *(unsigned __int8 *)v9;
    }
    else
    {
      do
      {
        v19 = *(unsigned __int8 *)++v16;
        v18 = v19;
        v20 = v19 == 0;
        if ( v19 )
          v20 = v18 == 47;
      }
      while ( !v20 );
    }
    v21 = v18 == 0;
    if ( v18 )
      v21 = v10 == 0;
    if ( v21 || v11 - a1 != v16 - v9 )
      break;
    if ( j_strncmp(a1, v9, v11 - a1) )
    {
      v15 = *(unsigned __int8 *)v9;
      break;
    }
    a1 = v11 + 1;
    v9 = v16 + 1;
  }
  v37 = v15;
  v22 = strlen(a1);
  v23 = v37;
  v24 = v22 + 1;
  if ( v37 )
  {
    v25 = 0;
    v26 = a2 + 1;
    v27 = 0;
    while ( 1 )
    {
      while ( v23 != 47 )
      {
LABEL_30:
        v28 = *(unsigned __int8 *)++v9;
        v23 = v28;
        if ( !v28 )
          goto LABEL_35;
      }
      if ( v9 > v26 && *(v9 - 1) == 46 && *(v9 - 2) == 46 )
      {
        ++v25;
        goto LABEL_30;
      }
      v29 = *(unsigned __int8 *)++v9;
      v23 = v29;
      ++v27;
      if ( !v29 )
      {
LABEL_35:
        if ( !v25 )
          v26 = 0;
        v24 += 3 * v27;
        if ( v25 )
        {
          v38 = v24;
          v30 = strlen(v4) - 1;
          v31 = v38;
          v26 = &v4[v30];
          v32 = v4 < &v4[v30];
LABEL_39:
          if ( v25 )
            v33 = v32;
          else
            v33 = 0;
          while ( v33 )
          {
            if ( *v26 == 47 )
            {
              --v25;
              goto LABEL_39;
            }
          }
          if ( v25 )
          {
            sub_2A6BBC("archive.c", 1529);
            v31 = v38;
          }
          v24 = v31 + 1 + strlen(v26);
        }
        v34 = (_DWORD *)dword_48BB9C;
        if ( dword_48BBA0 >= v24 )
        {
LABEL_48:
          if ( v27 )
          {
            v35 = (char *)v34 + 3 * v27;
            do
            {
              *v34 = 3092014;
              v34 = (_DWORD *)((char *)v34 + 3);
            }
            while ( v34 != (_DWORD *)v35 );
          }
          else
          {
            v35 = (char *)v34;
          }
          if ( v26 )
          {
            sprintf(v35, "%s/%s", v26, a1);
            v34 = (_DWORD *)dword_48BB9C;
            goto LABEL_53;
          }
LABEL_65:
          strcpy(v35, a1);
          v34 = (_DWORD *)dword_48BB9C;
          goto LABEL_53;
        }
        goto LABEL_57;
      }
    }
  }
  v34 = (_DWORD *)dword_48BB9C;
  if ( dword_48BBA0 >= v24 )
  {
    v35 = (char *)dword_48BB9C;
    goto LABEL_65;
  }
  v26 = 0;
  v27 = 0;
LABEL_57:
  if ( v34 )
  {
    v39 = v24;
    free(v34);
    v24 = v39;
  }
  v40 = v24;
  dword_48BBA0 = 0;
  v34 = (_DWORD *)sub_2AB368(v24, v23);
  dword_48BB9C = (int)v34;
  if ( v34 )
  {
    dword_48BBA0 = v40;
    goto LABEL_48;
  }
LABEL_53:
  free(v6);
  free(v8);
  return v34;
}
