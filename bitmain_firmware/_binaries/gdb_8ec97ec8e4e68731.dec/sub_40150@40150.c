int __fastcall sub_40150(char *a1)
{
  int v2; // r2
  char *v3; // r0
  int v4; // r0
  _DWORD *v5; // r3
  int v6; // r0
  int v7; // r2
  int v8; // r0
  _DWORD *v9; // r5
  size_t v10; // r11
  unsigned int v11; // r8
  int v12; // r7
  char *v13; // r10
  int v14; // r12
  int v15; // t1
  int v16; // r2
  int i; // r4
  int v18; // r4
  const char *v19; // r9
  char *v20; // r5
  size_t v21; // r0
  size_t v22; // r3
  char *v23; // r10
  int v24; // r7
  _BYTE *v25; // r7
  size_t v26; // r5
  size_t v27; // r4
  char *v28; // r8
  _BYTE *v29; // r10
  _BYTE *v30; // r4
  int v31; // r9
  int v32; // t1
  int v33; // r2
  int v34; // r3
  size_t v36; // r0
  size_t v37; // r3
  int v38; // r0
  size_t v39; // [sp+8h] [bp-54h]
  int v40; // [sp+8h] [bp-54h]
  int v41; // [sp+Ch] [bp-50h]
  unsigned int v42; // [sp+Ch] [bp-50h]
  int v44; // [sp+14h] [bp-48h]
  char *base; // [sp+18h] [bp-44h]
  int v46; // [sp+24h] [bp-38h]
  void *v47; // [sp+28h] [bp-34h] BYREF
  int v48; // [sp+2Ch] [bp-30h]
  char v49[16]; // [sp+30h] [bp-2Ch] BYREF
  void *ptr; // [sp+40h] [bp-1Ch] BYREF
  int v51; // [sp+44h] [bp-18h]
  char v52[16]; // [sp+48h] [bp-14h] BYREF

  v2 = *(_DWORD *)sub_242FDC();
  v3 = a1;
  if ( !a1 )
    v3 = "";
  v44 = v2;
  v4 = *(unsigned __int8 *)sub_9360C(v3);
  if ( v4 )
    sub_946E0("'info auto-load libthread-db' does not accept any parameters");
  v5 = (_DWORD *)dword_471BF4;
  if ( dword_471BF4 )
  {
    do
    {
      v7 = v5[3];
      v5 = (_DWORD *)*v5;
      if ( v7 )
        ++v4;
    }
    while ( v5 );
    v6 = 4 * v4;
  }
  else
  {
    v6 = 0;
  }
  base = (char *)sub_93028(v6);
  v8 = sub_9253C(255668, base);
  v9 = (_DWORD *)dword_471BF4;
  v46 = v8;
  if ( !dword_471BF4 )
  {
    qsort(base, 0, 4u, (__compar_fn_t)sub_3E678);
LABEL_65:
    v24 = 0;
    v10 = 0;
    v23 = 0;
    v39 = 0;
    v11 = 0;
    goto LABEL_36;
  }
  v10 = 0;
  do
  {
    if ( v9[3] )
      *(_DWORD *)&base[4 * v10++] = v9;
    v9 = (_DWORD *)*v9;
  }
  while ( v9 );
  qsort(base, v10, 4u, (__compar_fn_t)sub_3E678);
  if ( !v10 )
    goto LABEL_65;
  v11 = 0;
  v12 = 0;
  v13 = base - 4;
  v39 = 0;
  v41 = 0;
  do
  {
    v15 = *((_DWORD *)v13 + 1);
    v13 += 4;
    v14 = v15;
    v16 = *(_DWORD *)(v15 + 4);
    if ( v16 )
    {
      for ( i = 0; ; ++i )
      {
        v16 /= 10;
        if ( !v16 )
          break;
      }
      v18 = i + 3;
      v19 = *(const char **)(v14 + 12);
      if ( !v12 )
      {
LABEL_59:
        ++v41;
        v36 = strlen(v19);
        v37 = v39;
        if ( v39 < v36 )
          v37 = v36;
        v39 = v37;
        goto LABEL_30;
      }
    }
    else
    {
      v18 = 2;
      v19 = *(const char **)(v14 + 12);
      if ( !v12 )
        goto LABEL_59;
    }
    if ( !strcmp(*(const char **)(*((_DWORD *)v13 - 1) + 12), v19) )
    {
      v9 = (_DWORD *)((char *)v9 + v18);
      goto LABEL_31;
    }
    v20 = (char *)v9 - 2;
    ++v41;
    v21 = strlen(v19);
    v22 = v39;
    if ( v39 < v21 )
      v22 = v21;
    if ( v11 < (unsigned int)v20 )
      v11 = (unsigned int)v20;
    v39 = v22;
LABEL_30:
    v9 = (_DWORD *)v18;
LABEL_31:
    ++v12;
  }
  while ( v10 != v12 );
  v23 = (char *)v9 - 2;
  if ( (unsigned int)v9 - 2 >= v11 )
    v11 = (unsigned int)v9 - 2;
  v24 = v41;
  if ( a1 == (char *)&unk_478244 )
    sub_257380(v44, &word_356638, a1, &unk_478244);
LABEL_36:
  v47 = (void *)18;
  ptr = v52;
  ptr = (void *)sub_33B2BC(&ptr, &v47, 0);
  *(_DWORD *)v52 = v47;
  qmemcpy(ptr, "LinuxThreadDbTable", 18);
  v51 = (int)v47;
  *((_BYTE *)v47 + (_DWORD)ptr) = 0;
  sub_25704C(v44, 2, v24, &ptr);
  if ( ptr != v52 )
    sub_339E64(ptr);
  ptr = v52;
  strcpy(v49, "filename");
  v47 = v49;
  v48 = 8;
  strcpy(v52, "Filename");
  v51 = 8;
  sub_2571B8(v44, v39, -1, &v47, &ptr);
  if ( ptr != v52 )
    sub_339E64(ptr);
  if ( v47 != v49 )
    sub_339E64(v47);
  strcpy(v49, "PIDs");
  strcpy(v52, "Pids");
  v47 = v49;
  ptr = v52;
  v48 = 4;
  v51 = 4;
  sub_2571B8(v44, v23, -1, &v47, &ptr);
  if ( ptr != v52 )
    sub_339E64(ptr);
  if ( v47 != v49 )
    sub_339E64(v47);
  sub_25722C(v44);
  v42 = v11 + 1;
  v25 = (_BYTE *)sub_93028(v11 + 1);
  sub_9253C(255668, v25);
  if ( v10 )
  {
    v26 = 0;
    v27 = 0;
    do
    {
      sub_2578AC(v44, 0);
      v40 = *(_DWORD *)&base[4 * v27];
      sub_2575E8(v44, "filename", *(_DWORD *)(v40 + 12));
      if ( v26 >= v10 )
      {
        v29 = v25;
      }
      else
      {
        v28 = &base[4 * v26];
        v29 = v25;
        do
        {
          v32 = *(_DWORD *)v28;
          v28 += 4;
          v31 = v32;
          if ( strcmp(*(const char **)(v40 + 12), *(const char **)(v32 + 12)) )
            break;
          if ( v25 == v29 )
          {
            v30 = v25;
          }
          else
          {
            *v29 = 44;
            v30 = v29 + 2;
            v29[1] = 32;
          }
          v29 = &v30[sub_93170(v30, &v25[v42] - v30, "%u", *(_DWORD *)(v31 + 4))];
          if ( &v25[v42] <= v29 )
          {
            sub_94700(
              "linux-thread-db.c",
              1690,
              "%s: Assertion `%s' failed.",
              "void info_auto_load_libthread_db(const char*, int)",
              "pids_end < &pids[max_pids_len + 1]");
            sub_25734C(v44, 0);
            v38 = sub_257270(v44);
            sub_338FFC(v38);
          }
          ++v26;
        }
        while ( v26 < v10 );
      }
      *v29 = 0;
      sub_2575E8(v44, "pids", v25);
      sub_257380(v44, &word_356638, v33, v34);
      sub_25734C(v44, 0);
      v27 = v26;
    }
    while ( v26 < v10 );
    sub_257270(v44);
    return sub_92620(v46);
  }
  else
  {
    sub_257270(v44);
    sub_92620(v46);
    return sub_25738C(v44, "No auto-loaded libthread-db.\n");
  }
}
