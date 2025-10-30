int __fastcall sub_574C4(const char *a1, int a2, int a3, void (__fastcall *a4)(_DWORD, int), int a5)
{
  unsigned __int8 *v5; // r5
  size_t v9; // r0
  char *v10; // r4
  int v11; // r3
  bool v12; // zf
  unsigned __int8 *v13; // r3
  int v14; // r2
  int v15; // t1
  bool v16; // zf
  char *v17; // r9
  int v18; // r10
  _DWORD *v19; // r8
  _DWORD *v20; // r0
  _DWORD *v21; // r3
  int v22; // r4
  int v24; // r3
  bool v25; // zf
  char *v26; // r3
  int v27; // r2
  int v28; // t1
  bool v29; // zf
  int v30; // r8
  unsigned __int8 *v31; // r0
  unsigned __int8 *v32; // r5
  const char *v33; // r4
  int v34; // r5
  unsigned __int8 *v35; // r0
  _BYTE *v36; // r0
  int v37; // r3
  unsigned __int8 *v38; // r0
  _BYTE *v39; // r0
  unsigned __int8 *v40; // r0
  _BYTE *v41; // r0
  int v42; // r0
  bool v43; // zf
  unsigned __int8 *v44; // [sp+4h] [bp-4h] BYREF

  v5 = (unsigned __int8 *)a1;
  if ( !a1 )
    return 1;
  v9 = strlen(a1);
  v10 = (char *)&v5[v9];
  if ( v5 >= &v5[v9] )
    goto LABEL_13;
  v11 = (unsigned __int8)*(v10 - 1);
  v12 = v11 == 32;
  if ( v11 != 32 )
    v12 = v11 == 9;
  if ( v12 )
  {
    v13 = (unsigned __int8 *)(v10 - 1);
    do
    {
      v10 = (char *)v13;
      if ( v5 == v13 )
        goto LABEL_13;
      v15 = *--v13;
      v14 = v15;
      v16 = v15 == 9;
      if ( v15 != 9 )
        v16 = v14 == 32;
    }
    while ( v16 );
  }
  v24 = *v5;
  v25 = v24 == 9;
  if ( v24 != 9 )
    v25 = v24 == 32;
  if ( !v25 )
  {
LABEL_13:
    v17 = (char *)v5;
    goto LABEL_14;
  }
  v26 = (char *)(v5 + 1);
  do
  {
    v17 = v26;
    if ( v26 >= v10 )
      break;
    v28 = (unsigned __int8)*v26++;
    v27 = v28;
    v29 = v28 == 9;
    if ( v28 != 9 )
      v29 = v27 == 32;
  }
  while ( v29 );
LABEL_14:
  v18 = v10 - v17;
  if ( v10 - v17 == 3 && !strncmp(v17, "end", 3u) )
    return 1;
  if ( !a3 )
    goto LABEL_17;
  v44 = v5;
  v30 = sub_5431C(&v44, dword_474744, 0, 1);
  v31 = (unsigned __int8 *)sub_9360C(v44);
  v32 = v31;
  v44 = v31;
  if ( v17 == v10 || *v17 == 35 )
    return 3;
  if ( v18 == 4 )
  {
    if ( !strncmp(v17, "else", 4u) )
      return 2;
    if ( (unsigned int)(v30 - 1) > 0xFFFFFFFD )
      goto LABEL_46;
  }
  else if ( (unsigned int)(v30 - 1) > 0xFFFFFFFD )
  {
    goto LABEL_44;
  }
  v33 = *(const char **)(v30 + 4);
  if ( !strcmp(v33, "while-stepping") )
  {
    v20 = (_DWORD *)sub_571C0(9, v17);
    *(_DWORD *)a2 = v20;
    goto LABEL_18;
  }
  if ( !strcmp(v33, "while") )
  {
    v35 = sub_53FD0((unsigned __int8 *)v17);
    v36 = (_BYTE *)sub_9360C(&v35[(_DWORD)v17]);
    v20 = (_DWORD *)sub_571C0(3, v36);
    *(_DWORD *)a2 = v20;
    goto LABEL_18;
  }
  if ( !strcmp(v33, "if") )
  {
    v38 = sub_53FD0((unsigned __int8 *)v17);
    v39 = (_BYTE *)sub_9360C(&v38[(_DWORD)v17]);
    v20 = (_DWORD *)sub_571C0(4, v39);
    *(_DWORD *)a2 = v20;
    goto LABEL_18;
  }
  if ( !strcmp(v33, "commands") )
  {
    v40 = sub_53FD0((unsigned __int8 *)v17);
    v41 = (_BYTE *)sub_9360C(&v40[(_DWORD)v17]);
    v20 = (_DWORD *)sub_571C0(5, v41);
    *(_DWORD *)a2 = v20;
    goto LABEL_18;
  }
  v34 = *v32;
  if ( !strcmp(v33, "python") )
  {
    if ( !v34 )
    {
      v20 = (_DWORD *)sub_571C0(6, "");
      *(_DWORD *)a2 = v20;
      goto LABEL_18;
    }
  }
  else if ( !strcmp(v33, "compile") )
  {
    if ( !v34 )
    {
      v20 = (_DWORD *)sub_571C0(7, "");
      *(_DWORD *)a2 = v20;
      v20[3] = 0;
      goto LABEL_18;
    }
  }
  else
  {
    v42 = strcmp(v33, "guile");
    v43 = v42 == 0;
    if ( !v42 )
      v43 = v34 == 0;
    if ( v43 )
    {
      v20 = (_DWORD *)sub_571C0(8, "");
      *(_DWORD *)a2 = v20;
      goto LABEL_18;
    }
  }
LABEL_44:
  if ( v18 != 10 )
  {
    if ( v18 != 13 || strncmp(v17, "loop_continue", 0xDu) )
      goto LABEL_46;
    v20 = (_DWORD *)sub_93028(28);
    v37 = 2;
LABEL_60:
    *(_DWORD *)a2 = v20;
    *v20 = 0;
    v20[1] = 0;
    v20[5] = 0;
    v20[6] = 0;
    v20[2] = v37;
    goto LABEL_18;
  }
  if ( !strncmp(v17, "loop_break", 0xAu) )
  {
    v20 = (_DWORD *)sub_93028(28);
    v37 = 1;
    goto LABEL_60;
  }
LABEL_46:
  v5 = (unsigned __int8 *)v17;
LABEL_17:
  v19 = (_DWORD *)sub_93028(28);
  *(_DWORD *)a2 = v19;
  *v19 = 0;
  v20 = (_DWORD *)sub_93330(v5);
  v21 = *(_DWORD **)a2;
  v19[1] = v20;
  v21[2] = 0;
  v21[5] = 0;
  v21[6] = 0;
LABEL_18:
  if ( a4 )
  {
    v22 = sub_92E28(v20);
    a4(*(_DWORD *)(*(_DWORD *)a2 + 4), a5);
    sub_92E40(v22);
  }
  return 0;
}
