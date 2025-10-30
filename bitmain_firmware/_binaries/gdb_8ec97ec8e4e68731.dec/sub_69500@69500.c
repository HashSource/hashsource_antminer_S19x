int *__fastcall sub_69500(int *a1, int a2, _DWORD *a3)
{
  _DWORD *v6; // r0
  const char *v7; // r0
  const char *v8; // r5
  int v9; // r0
  const char *v10; // r3
  void *v11; // r0
  const char *v12; // r7
  int v13; // r0
  _BYTE *v14; // r5
  _DWORD *v15; // r5
  int v16; // r0
  _DWORD *v17; // r3
  _DWORD *v19; // r6
  int v20; // r0
  _DWORD *v21; // r3
  const char *v22; // r2
  int v23; // r5
  int v24; // r0
  int v25; // r3
  const char *v26; // r5
  int v27; // r10
  int v28; // r3
  const char *v29; // r6
  int v30; // r0
  const char *v31; // r5
  int v32; // r3
  int v33; // r10
  int v34; // r0
  int v35; // r10
  int v36; // r0
  int v37; // r5
  int v38; // r0
  int v39; // r3
  int v40; // r8
  int v41; // r3
  _DWORD *v42; // r7
  int v43; // r10
  int v44; // r11
  char *v45; // r6
  int v46; // r0
  char *v47; // r5
  int v48; // r2
  char *v49; // r3
  int v50; // r9
  char *v51; // r5
  size_t v52; // r5
  char *v53; // r9
  int v54; // r0
  char *v55; // r0
  int v56; // r3
  bool v57; // zf
  int v58; // r6
  char v59; // r2
  bool v60; // zf
  char *v61; // r6
  const char *i; // [sp+4h] [bp-20h] BYREF
  char *endptr[2]; // [sp+8h] [bp-1Ch] BYREF
  char v64; // [sp+10h] [bp-14h] BYREF

  v6 = (_DWORD *)sub_9836C(52);
  *a1 = (int)v6;
  *v6 = 0;
  v6[1] = 0;
  v6[2] = 0;
  v6[3] = 0;
  v6[4] = 0;
  v6[5] = 0;
  v6[6] = 0;
  v6[7] = 0;
  v6[8] = 0;
  v6[12] = 0;
  v6[9] = -1;
  v6[10] = -1;
  v6[11] = -1;
  v7 = (const char *)sub_9360C(a2);
  i = v7;
  v8 = v7;
  if ( (unsigned int)*(unsigned __int8 *)v7 - 48 <= 9 )
  {
    v10 = v7;
    do
      i = ++v10;
    while ( (unsigned int)*(unsigned __int8 *)v10 - 48 <= 9 );
    v9 = v10 - v7 + 1;
  }
  else
  {
    v9 = 1;
  }
  v11 = (void *)sub_93028(v9);
  v12 = i;
  *a3 = v11;
  *((_BYTE *)memcpy(v11, v8, v12 - v8) + v12 - v8) = 0;
  v13 = *(unsigned __int8 *)v12;
  if ( v13 != 45 )
  {
    i = (const char *)sub_9360C(v12);
    v15 = (_DWORD *)*a1;
    v16 = sub_327254(i);
    v17 = (_DWORD *)*a1;
    v15[1] = v16;
    *v17 = 1;
    return a1;
  }
  v14 = v12 + 1;
  do
  {
    if ( isspace(v13) )
      break;
    i = ++v12;
    v13 = *(unsigned __int8 *)v12;
  }
  while ( *v12 );
  v19 = (_DWORD *)*a1;
  v20 = sub_93028(v12 - v14 + 1);
  v21 = (_DWORD *)*a1;
  v22 = i;
  v19[1] = v20;
  memcpy((void *)v21[1], v14, v22 - v14);
  *(_BYTE *)(*(_DWORD *)(*a1 + 4) + i - v14) = 0;
  v23 = *a1;
  v24 = sub_5FE9C(*(char **)(*a1 + 4));
  v25 = *a1;
  *(_DWORD *)(v23 + 12) = v24;
  if ( !*(_DWORD *)(v25 + 12) )
  {
    sub_92F64(13, "Undefined MI command: %s", *(const char **)(v25 + 4));
LABEL_82:
    sub_946E0("Duplicate '--frame' option");
  }
  v26 = (const char *)sub_9360C(i);
  for ( i = v26; ; i = v26 )
  {
    if ( !strncmp(v26, "--all ", 6u) )
    {
      v32 = *a1;
      v26 += 6;
      i = v26;
      *(_DWORD *)(v32 + 32) = 1;
    }
    if ( !strcmp(v26, "--all") )
    {
      *(_DWORD *)(*a1 + 32) = 1;
      v26 += strlen(v26);
      i = v26;
    }
    if ( !strncmp(v26, "--thread-group ", 0xFu) )
    {
      v27 = *a1;
      if ( *(_DWORD *)(*a1 + 36) != -1 )
        sub_946E0("Duplicate '--thread-group' option");
      v28 = *((unsigned __int8 *)v26 + 15);
      i = v26 + 15;
      if ( v28 != 105 )
        sub_946E0("Invalid thread group id");
      i = v26 + 16;
      v29 = "--thread-group";
      v30 = strtol(v26 + 16, endptr, 10);
      v31 = endptr[0];
      *(_DWORD *)(v27 + 36) = v30;
      i = v31;
      goto LABEL_16;
    }
    if ( !strncmp(v26, "--thread ", 9u) )
    {
      v33 = *a1;
      if ( *(_DWORD *)(*a1 + 40) != -1 )
        sub_946E0("Duplicate '--thread' option");
      i = v26 + 9;
      v29 = "--thread";
      v34 = strtol(v26 + 9, endptr, 10);
      v31 = endptr[0];
      *(_DWORD *)(v33 + 40) = v34;
      i = v31;
      goto LABEL_16;
    }
    if ( strncmp(v26, "--frame ", 8u) )
      break;
    v35 = *a1;
    if ( *(_DWORD *)(*a1 + 44) != -1 )
      goto LABEL_82;
    i = v26 + 8;
    v29 = "--frame";
    v36 = strtol(v26 + 8, endptr, 10);
    v31 = endptr[0];
    *(_DWORD *)(v35 + 44) = v36;
    i = v31;
LABEL_16:
    if ( *v31 )
    {
      if ( !isspace(*(unsigned __int8 *)v31) )
        sub_946E0("Invalid value for the '%s' option", v29);
    }
    v26 = (const char *)sub_9360C(v31);
  }
  if ( !strncmp(v26, "--language ", 0xBu) )
  {
    i = v26 + 11;
    sub_5B05C((int *)endptr, (int *)&i);
    v37 = *a1;
    v38 = sub_1943DC(endptr[0]);
    v39 = *a1;
    *(_DWORD *)(v37 + 48) = v38;
    if ( *(_DWORD *)(v39 + 48) <= 1u )
      sub_946E0("Invalid --language argument: %s", endptr[0]);
    if ( endptr[0] != &v64 )
      sub_339E64(endptr[0]);
    v29 = "--language";
    v31 = i;
    goto LABEL_16;
  }
  v40 = *a1;
  v41 = *(_DWORD *)(*a1 + 12);
  if ( !*(_DWORD *)(v41 + 12) )
    goto LABEL_51;
  endptr[0] = (char *)v26;
  v42 = (_DWORD *)sub_93028(4);
  v43 = 0;
  v44 = 0;
  *v42 = 0;
  while ( 2 )
  {
    v45 = (char *)sub_9360C(endptr[0]);
    endptr[0] = v45;
    v46 = (unsigned __int8)*v45;
    if ( !*v45 )
    {
      *(_DWORD *)(v40 + 24) = v42;
      *(_DWORD *)(v40 + 28) = v44;
      goto LABEL_49;
    }
    if ( v46 != 34 )
    {
      v51 = v45;
      do
      {
        if ( isspace(v46) )
          break;
        endptr[0] = ++v51;
        v46 = (unsigned __int8)*v51;
      }
      while ( *v51 );
      v52 = v51 - v45;
      v53 = (char *)sub_93028(v52 + 1);
      strncpy(v53, v45, v52);
      v53[v52] = 0;
LABEL_58:
      v54 = sub_93050(v42, v43 + 8);
      ++v44;
      *(_DWORD *)(v54 + v43) = v53;
      v42 = (_DWORD *)v54;
      *(_DWORD *)(v54 + 4 * v44) = 0;
      v43 += 4;
      continue;
    }
    break;
  }
  v47 = v45 + 1;
  endptr[0] = v45 + 1;
  v48 = (unsigned __int8)v45[1];
  if ( v45[1] )
  {
    v49 = v45 + 1;
    v50 = 0;
    while ( v48 != 34 )
    {
      ++v49;
      if ( v48 == 92 )
      {
        endptr[0] = v49;
        if ( sub_69364(endptr) <= 0 )
          goto LABEL_74;
        v49 = endptr[0];
      }
      else
      {
        endptr[0] = v49;
      }
      v48 = (unsigned __int8)*v49;
      ++v50;
      if ( !*v49 )
        goto LABEL_74;
    }
    if ( !v49[1] || isspace((unsigned __int8)v49[1]) )
    {
      v55 = (char *)sub_93028(v50 + 1);
      endptr[0] = v45 + 1;
      v53 = v55;
      v56 = (unsigned __int8)v45[1];
      v57 = v56 == 0;
      if ( v45[1] )
        v57 = v56 == 34;
      if ( v57 )
      {
        v61 = v55;
      }
      else
      {
        v58 = 0;
        do
        {
          endptr[0] = v47 + 1;
          if ( v56 == 92 )
          {
            v53[v58] = sub_69364(endptr);
            v47 = endptr[0];
          }
          else
          {
            v59 = *v47++;
            v53[v58] = v59;
          }
          v56 = (unsigned __int8)*v47;
          ++v58;
          v60 = v56 == 0;
          if ( *v47 )
            v60 = v56 == 34;
        }
        while ( !v60 );
        v61 = &v53[v58];
      }
      *v61 = 0;
      endptr[0] = v47 + 1;
      goto LABEL_58;
    }
  }
LABEL_74:
  sub_31DAD0(v42);
LABEL_49:
  v40 = *a1;
  if ( !*(_DWORD *)(*a1 + 24) )
    sub_946E0("Problem parsing arguments: %s %s", *(const char **)(v40 + 4), i);
  v41 = *(_DWORD *)(v40 + 12);
LABEL_51:
  if ( *(_DWORD *)(v41 + 4) )
  {
    *(_DWORD *)(v40 + 20) = sub_327254(i);
    v40 = *a1;
  }
  *(_DWORD *)v40 = 0;
  return a1;
}
