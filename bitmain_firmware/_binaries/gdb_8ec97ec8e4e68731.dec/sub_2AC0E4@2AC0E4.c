char *__fastcall sub_2AC0E4(
        const char **a1,
        const char *a2,
        int a3,
        int (__fastcall *a4)(_DWORD, _DWORD),
        int (__fastcall *a5)(char *, int),
        int a6)
{
  char *v9; // r9
  _BYTE *v10; // r0
  void *v11; // r6
  size_t v12; // r0
  size_t v13; // r2
  size_t v14; // r9
  const char *v15; // r3
  signed int v16; // r0
  int v17; // t1
  char *v18; // r0
  char *v19; // r7
  char *v20; // r4
  size_t v21; // r0
  char *v22; // r3
  int v23; // t1
  size_t v24; // r1
  char *v25; // r2
  size_t v26; // r10
  size_t v27; // r0
  char *v28; // r0
  const char *v30; // r11
  _WORD *v31; // r11
  size_t v32; // r0
  void *v33; // r0
  int (__fastcall *v34)(_DWORD, _DWORD); // [sp+Ch] [bp-8h]

  if ( !a1 )
  {
    v34 = a4;
    sub_2A6BBC("opncls.c", 1412);
    a4 = v34;
  }
  v9 = (char *)*a1;
  if ( !a2 )
    a2 = ".";
  if ( !v9 )
  {
    ((void (__fastcall *)(int))loc_2A6C48)(5);
    return v9;
  }
  v10 = (_BYTE *)a4(a1, a6);
  v11 = v10;
  if ( !v10 )
    return 0;
  v9 = (char *)(unsigned __int8)*v10;
  if ( !*v10 )
  {
    free(v10);
    ((void (__fastcall *)(int))loc_2A6C48)(16);
    return v9;
  }
  if ( !a3 )
  {
    v14 = 0;
    v19 = (char *)sub_2AB368(1);
    *v19 = 0;
    goto LABEL_19;
  }
  v12 = strlen(*a1);
  v13 = v12;
  if ( !v12 )
  {
    v14 = 0;
LABEL_16:
    v16 = 1;
    goto LABEL_17;
  }
  v14 = v12 - 1;
  v15 = &(*a1)[v12 - 1];
  if ( *v15 != 47 )
  {
    while ( v14 )
    {
      v17 = *(unsigned __int8 *)--v15;
      if ( v17 == 47 )
      {
        v16 = v14 + 1;
        goto LABEL_17;
      }
      --v14;
    }
    goto LABEL_16;
  }
  v16 = v12 + 1;
  v14 = v13;
LABEL_17:
  v18 = (char *)sub_2AB368(v16);
  v19 = v18;
  if ( !v18 )
  {
    v9 = 0;
    free(v11);
    return v9;
  }
  memcpy(v18, *a1, v14);
  v19[v14] = 0;
LABEL_19:
  v20 = (char *)sub_3245D0(*a1);
  v21 = strlen(v20);
  if ( v21 )
  {
    v22 = &v20[v21 - 1];
    if ( *v22 == 47 )
    {
      v25 = &v20[v21];
      if ( v14 < v21 )
        v14 = v21;
      goto LABEL_25;
    }
    while ( 1 )
    {
      v24 = v22 - v20;
      if ( v22 == v20 )
        break;
      v23 = (unsigned __int8)*--v22;
      if ( v23 == 47 )
      {
        v25 = &v20[v24];
        if ( v14 < v24 )
          v14 = v24;
        goto LABEL_25;
      }
    }
  }
  v25 = v20;
LABEL_25:
  *v25 = 0;
  v26 = strlen(a2);
  v27 = strlen((const char *)v11);
  v28 = (char *)sub_2AB368(v26 + v14 + 41 + v27);
  v9 = v28;
  if ( v28 )
  {
    sprintf(v28, "%s%s", v19, (const char *)v11);
    if ( !a5(v9, a6) )
    {
      sprintf(v9, "%s.debug/%s", v19, (const char *)v11);
      if ( !a5(v9, a6) )
      {
        v30 = a3 ? v20 : (const char *)&word_398974;
        sprintf(v9, "%s%s%s", "/usr/lib/debug", v30, (const char *)v11);
        if ( !a5(v9, a6) )
        {
          sprintf(v9, "%s%s%s", "/usr/lib/debug/usr", v30, (const char *)v11);
          if ( !a5(v9, a6) )
          {
            v31 = (_WORD *)stpcpy(v9, a2);
            v32 = strlen(a2) - 1;
            if ( a3 )
            {
              if ( v32 && a2[v32] != 47 && *v20 != 47 )
                *v31 = 47;
              strcat(v9, v20);
            }
            else if ( v32 && a2[v32] != 47 )
            {
              *v31 = 47;
            }
            strcat(v9, (const char *)v11);
            if ( !a5(v9, a6) )
            {
              v33 = v9;
              v9 = 0;
              free(v33);
            }
          }
        }
      }
    }
  }
  free(v11);
  free(v19);
  free(v20);
  return v9;
}
