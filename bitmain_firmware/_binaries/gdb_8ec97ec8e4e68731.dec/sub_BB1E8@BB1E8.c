void __fastcall sub_BB1E8(const char *a1, int a2, int a3)
{
  int v4; // r6
  int *v5; // r5
  int v6; // r0
  char *v7; // r4
  const char ***v8; // r11
  int v9; // r7
  const char ***v10; // r10
  const char **v11; // r7
  const char ***i; // r4
  const char ***v13; // r9
  const char **v14; // t1
  int v15; // r0
  char *v16; // r4
  const char ***v17; // r10
  int v18; // r7
  int v19; // r5
  const char ***v20; // r9
  const char **v21; // r5
  const char ***j; // r4
  const char ***v23; // r7
  const char **v24; // t1
  void *v25; // r2
  void *v26; // r3
  _BOOL4 v27; // r1
  const char ***v28; // r4
  const char ***v29; // r7
  _DWORD *v30; // t1
  const char ***v31; // r4
  const char ***v32; // r7
  _DWORD *v33; // t1
  const char *v34; // r1
  void *v36; // [sp+10h] [bp-4Ch] BYREF
  const char ***v37; // [sp+14h] [bp-48h]
  int v38; // [sp+18h] [bp-44h]
  void *v39; // [sp+1Ch] [bp-40h] BYREF
  const char ***v40; // [sp+20h] [bp-3Ch]
  int v41; // [sp+24h] [bp-38h]
  void *v42; // [sp+28h] [bp-34h] BYREF
  int v43; // [sp+2Ch] [bp-30h]
  char v44[16]; // [sp+30h] [bp-2Ch] BYREF
  void *ptr; // [sp+40h] [bp-1Ch] BYREF
  int v46; // [sp+44h] [bp-18h]
  char v47[16]; // [sp+48h] [bp-14h] BYREF

  v4 = *(_DWORD *)sub_242FDC(a1);
  sub_243C34();
  v5 = (int *)sub_B9784(dword_487D2C);
  if ( a1 && *a1 )
  {
    v34 = (const char *)re_comp(a1);
    if ( v34 )
      sub_946E0("Invalid regexp: %s", v34);
  }
  else
  {
    re_comp("");
  }
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  v41 = 0;
  if ( v5 )
  {
    v6 = *v5;
    if ( *v5 )
    {
      ptr = &v36;
      v46 = a3;
      sub_324138(v6, sub_BB174, &ptr);
      v7 = (char *)v36;
      v8 = v37;
      if ( v36 != v37 )
      {
        v9 = (char *)v37 - (_BYTE *)v36;
        sub_BBAB0(v36, v37, 2 * (31 - __clz(((char *)v37 - (_BYTE *)v36) >> 2)), sub_B9558);
        if ( v9 <= 64 )
        {
          sub_BB894(v7, v8, sub_B9558);
          v15 = v5[1];
          if ( v15 )
            goto LABEL_14;
          goto LABEL_22;
        }
        v10 = (const char ***)(v7 + 64);
        sub_BB894(v7, v7 + 64, sub_B9558);
        if ( v8 != (const char ***)(v7 + 64) )
        {
          do
          {
            v11 = *v10;
            for ( i = v10; ; i[1] = *i )
            {
              v13 = i;
              v14 = *--i;
              if ( !sub_B9558(v11, v14) )
                break;
            }
            ++v10;
            *v13 = v11;
          }
          while ( v8 != v10 );
        }
      }
    }
    v15 = v5[1];
    if ( v15 )
    {
LABEL_14:
      ptr = &v39;
      v46 = a3;
      sub_324138(v15, sub_BB174, &ptr);
      v16 = (char *)v39;
      v17 = v40;
      v18 = (char *)v40 - (_BYTE *)v39;
      v19 = ((char *)v40 - (_BYTE *)v39) >> 2;
      if ( v39 != v40 )
      {
        sub_BBAB0(v39, v40, 2 * (31 - __clz(((char *)v40 - (_BYTE *)v39) >> 2)), sub_B9558);
        if ( v18 <= 64 )
        {
          sub_BB894(v16, v17, sub_B9558);
        }
        else
        {
          v20 = (const char ***)(v16 + 64);
          sub_BB894(v16, v16 + 64, sub_B9558);
          while ( v17 != v20 )
          {
            v21 = *v20;
            for ( j = v20; ; j[1] = *j )
            {
              v23 = j;
              v24 = *--j;
              if ( !sub_B9558(v21, v24) )
                break;
            }
            ++v20;
            *v23 = v21;
          }
        }
        v19 = ((char *)v40 - (_BYTE *)v39) >> 2;
      }
      v26 = &unk_478244;
      v25 = (void *)((char *)v37 - (_BYTE *)v36);
      v5 = (int *)(v19 + (((char *)v37 - (_BYTE *)v36) >> 2));
      v27 = a1 == (const char *)&unk_478244;
      if ( (int)v5 <= 0 )
        v27 = 0;
LABEL_24:
      if ( v27 )
        sub_257380(v4, &word_356638, v25, v26);
      goto LABEL_26;
    }
LABEL_22:
    v25 = &unk_478244;
    v26 = (void *)((char *)v37 - (_BYTE *)v36);
    v5 = (int *)((((char *)v40 - (_BYTE *)v39) >> 2) + (((char *)v37 - (_BYTE *)v36) >> 2));
    v27 = (int)v5 > 0;
    if ( a1 != (const char *)&unk_478244 )
      v27 = 0;
    goto LABEL_24;
  }
LABEL_26:
  v42 = (void *)22;
  ptr = v47;
  ptr = (void *)sub_33B2BC(&ptr, &v42, 0);
  *(_DWORD *)v47 = v42;
  qmemcpy(ptr, "AutoLoadedScriptsTable", 22);
  v46 = (int)v42;
  *((_BYTE *)v42 + (_DWORD)ptr) = 0;
  sub_25704C(v4, 2, v5, &ptr);
  if ( ptr != v47 )
    sub_339E64(ptr);
  strcpy(v44, "loaded");
  ptr = v47;
  v42 = v44;
  strcpy(v47, "Loaded");
  v43 = 6;
  v46 = 6;
  sub_2571B8(v4, 7, -1, &v42, &ptr);
  if ( ptr != v47 )
    sub_339E64(ptr);
  if ( v42 != v44 )
    sub_339E64(v42);
  strcpy(v44, "script");
  v42 = v44;
  ptr = v47;
  strcpy(v47, "Script");
  v43 = 6;
  v46 = 6;
  sub_2571B8(v4, 70, -1, &v42, &ptr);
  if ( ptr != v47 )
    sub_339E64(ptr);
  if ( v42 != v44 )
    sub_339E64(v42);
  sub_25722C(v4);
  v28 = (const char ***)v36;
  v29 = v37;
  if ( v36 != v37 )
  {
    do
    {
      v30 = *v28++;
      sub_B9570(v30);
    }
    while ( v29 != v28 );
  }
  v31 = (const char ***)v39;
  v32 = v40;
  if ( v39 != v40 )
  {
    do
    {
      v33 = *v31++;
      sub_B9570(v33);
    }
    while ( v32 != v31 );
  }
  sub_257270(v4);
  if ( !v5 )
  {
    if ( a1 && *a1 )
      sub_25738C(v4, "No auto-load scripts matching %s.\n", a1);
    else
      sub_25738C(v4, "No auto-load scripts.\n");
  }
  if ( v39 )
    sub_339E64(v39);
  if ( v36 )
    sub_339E64(v36);
}
