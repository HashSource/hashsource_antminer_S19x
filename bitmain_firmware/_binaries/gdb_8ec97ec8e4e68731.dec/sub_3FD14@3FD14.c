int sub_3FD14()
{
  int v0; // r0
  _DWORD *v1; // r3
  unsigned int *v3; // r4
  unsigned int v4; // r9
  _DWORD *v5; // r7
  int v6; // r5
  const char *v7; // r4
  const char *v8; // t1
  size_t v9; // r6
  int v10; // r2
  bool v11; // zf
  int v12; // r9
  char *v13; // r6
  _DWORD *v14; // r4
  int v15; // r0
  int v16; // r0
  int v17; // r4
  _DWORD *v18; // r4
  int v19; // r0
  int v20; // r0
  _DWORD *v21; // r0
  void *v22; // r9
  int v23; // r4
  size_t v24; // r0
  int v25; // r0
  _DWORD *v26; // r0
  unsigned int *v27; // [sp+0h] [bp-14h]
  int v28; // [sp+4h] [bp-10h]
  int v29; // [sp+8h] [bp-Ch]

  v0 = ps_getpid_0(&dword_4878EC);
  v1 = (_DWORD *)dword_471BF4;
  if ( dword_471BF4 )
  {
    do
    {
      if ( v0 == v1[1] )
        return 1;
      v1 = (_DWORD *)*v1;
    }
    while ( v1 );
  }
  if ( !sub_22EB0C(v0) || !off_489A98() && !dword_47ACB8 )
    return 0;
  v3 = (unsigned int *)sub_9832C((char *)dword_471BF8);
  v27 = v3;
  v29 = sub_25B314();
  if ( !v3 || (v4 = *v3) == 0 )
  {
LABEL_35:
    v20 = sub_92620(v29);
    if ( dword_471BF0 )
    {
      v21 = (_DWORD *)sub_242FC8(v20);
      sub_2594B0(*v21, "thread_db_load_search returning %d\n", 0);
    }
    v18 = *(_DWORD **)(dword_487D2C + 36);
    if ( v18 )
    {
      while ( 1 )
      {
        v19 = sub_1B87A8(v18);
        if ( sub_201648(v19) )
          break;
        v18 = (_DWORD *)*v18;
        if ( !v18 )
          return 0;
      }
      sub_946B0("Unable to find libthread_db matching inferior's thread library, thread debugging will not be available.");
    }
    return 0;
  }
  v5 = v3 + 1;
  v6 = 0;
  while ( 1 )
  {
    v8 = (const char *)v5[1];
    ++v5;
    v7 = v8;
    v9 = strlen(v8);
    if ( strncmp(v8, "$pdir", 5u) )
      goto LABEL_50;
    v10 = *((unsigned __int8 *)v7 + 5);
    v11 = v10 == 47;
    if ( v10 != 47 )
      v11 = v10 == 0;
    if ( !v11 )
    {
LABEL_50:
      if ( !strcmp(v7, "$sdir") )
      {
        if ( sub_3F4B4("libthread_db.so.1", 0) )
          goto LABEL_44;
      }
      else
      {
        if ( !dword_46AF70 )
          goto LABEL_34;
        v22 = (void *)sub_93028(v9 + 19);
        v28 = sub_9253C(255668, v22);
        memcpy(v22, v7, v9);
        *((_BYTE *)v22 + v9) = 47;
        strcpy((char *)v22 + v9 + 1, "libthread_db.so.1");
        v23 = sub_3F4B4((char *)v22, 1);
        sub_92620(v28);
        if ( v23 )
        {
LABEL_44:
          v17 = 1;
          goto LABEL_46;
        }
      }
      goto LABEL_41;
    }
    v12 = sub_9253C(nullsub_39, 0);
    if ( v7[5] == 47 )
    {
      v24 = strlen(v7);
      v13 = (char *)sub_93028(v24);
      sub_9253C(255668, v13);
      strcpy(v13, v7 + 6);
    }
    else
    {
      v13 = 0;
    }
    if ( dword_46AF70 )
    {
      v14 = *(_DWORD **)(dword_487D2C + 36);
      if ( v14 )
        break;
    }
LABEL_33:
    sub_92620(v12);
    v4 = *v27;
LABEL_34:
    if ( ++v6 >= v4 )
      goto LABEL_35;
  }
  while ( 1 )
  {
    v15 = sub_1B87A8(v14);
    if ( sub_201648(v15) )
      break;
    v14 = (_DWORD *)*v14;
    if ( !v14 )
      goto LABEL_33;
  }
  if ( !((int (__fastcall *)(_DWORD *, char *))loc_3FB88)(v14, v13) )
  {
    v16 = v14[45];
    if ( v16 )
    {
      v17 = ((int (__fastcall *)(int, char *))loc_3FB88)(v16, v13);
      sub_92620(v12);
      if ( v17 )
        goto LABEL_46;
LABEL_41:
      v4 = *v27;
      goto LABEL_34;
    }
    goto LABEL_33;
  }
  v17 = 1;
  sub_92620(v12);
LABEL_46:
  v25 = sub_92620(v29);
  if ( dword_471BF0 )
  {
    v26 = (_DWORD *)sub_242FC8(v25);
    sub_2594B0(*v26, "thread_db_load_search returning %d\n", v17);
  }
  return 1;
}
