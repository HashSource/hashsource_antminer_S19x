unsigned int __fastcall sub_5125C(int a1)
{
  _DWORD *v1; // r0
  _DWORD *v2; // r5
  unsigned int *v3; // r3
  unsigned int v4; // r4
  unsigned int v5; // r4
  _DWORD *v6; // r7
  _DWORD *v7; // r6
  unsigned int *v8; // r3
  unsigned int v9; // r2
  unsigned int v10; // r2
  _DWORD *v12; // r0
  unsigned int *v13; // r3
  unsigned int v14; // r4
  unsigned int *v15; // r3
  unsigned int v16; // r2
  unsigned int v17; // r2
  const char *v18; // r0
  unsigned int *v19; // r3
  unsigned int v20; // r2
  unsigned int v21; // r2
  _DWORD *v22; // r0
  void *v23; // r3
  const char *v24; // r0
  int v25; // r3
  const char *v26; // r0
  int v27; // r3
  unsigned int *v28; // r3
  unsigned int v29; // r4
  char v30[2048]; // [sp+0h] [bp-800h] BYREF

  v1 = (_DWORD *)sub_72B10(a1, "result");
  v2 = v1;
  if ( !v1 )
  {
    if ( (unsigned int)off_AFC24 > 3 )
    {
      strcpy(v30, "Don't find result in submit result responce");
      sub_3AF5C(3, v30, 0, *(int *)"result responce");
    }
    return 0;
  }
  if ( *v1 )
  {
    if ( (unsigned int)off_AFC24 > 3 )
    {
      strcpy(v30, "Don't find result in submit result responce");
      sub_3AF5C(3, v30, 0, *(int *)"result responce");
    }
    if ( v2[1] != -1 )
    {
      v3 = v2 + 1;
      __dmb(0xBu);
      do
      {
        v4 = __ldrex(v3);
        v5 = v4 - 1;
      }
      while ( __strex(v5, v3) );
      if ( !v5 )
      {
        v6 = 0;
        v7 = 0;
        goto LABEL_11;
      }
    }
    return 0;
  }
  v12 = (_DWORD *)sub_72B10(v1, "code");
  v7 = v12;
  if ( v12 && *v12 == 2 )
  {
    v18 = (const char *)sub_74300(v12);
    if ( !strcmp(v18, "000000") )
    {
      v6 = 0;
      v5 = 1;
      if ( (unsigned int)off_AFC24 > 3 )
      {
        strcpy(v30, "submit result success\n");
        sub_3AF5C(3, v30, 0, *(unsigned __int16 *)"");
      }
LABEL_43:
      if ( v2[1] != -1 )
      {
        v19 = v2 + 1;
        __dmb(0xBu);
        do
        {
          v20 = __ldrex(v19);
          v21 = v20 - 1;
        }
        while ( __strex(v21, v19) );
        if ( !v21 )
        {
LABEL_11:
          sub_74C7C(v2);
          if ( !v7 )
            goto LABEL_13;
        }
      }
LABEL_12:
      if ( v7[1] == -1 )
        goto LABEL_13;
      v15 = v7 + 1;
      __dmb(0xBu);
      do
      {
        v16 = __ldrex(v15);
        v17 = v16 - 1;
      }
      while ( __strex(v17, v15) );
      if ( v17 )
        goto LABEL_13;
      goto LABEL_32;
    }
    if ( (unsigned int)off_AFC24 > 3 )
    {
      v24 = (const char *)sub_74300(v7);
      snprintf(v30, 0x800u, "submit result fail! code: %s\n", v24);
      sub_3AF5C(3, v30, 0, v25);
    }
    v22 = (_DWORD *)sub_72B10(v2, "msg");
    v6 = v22;
    if ( v22 )
    {
      v23 = off_AFC24;
      if ( *v22 == 2 )
      {
        if ( (unsigned int)off_AFC24 > 3 )
        {
          v26 = (const char *)sub_74300(v22);
          snprintf(v30, 0x800u, "submit result fail! msg: %s\n", v26);
          v5 = 0;
          sub_3AF5C(3, v30, 0, v27);
          goto LABEL_43;
        }
LABEL_54:
        v5 = 0;
        goto LABEL_43;
      }
    }
    else
    {
      v23 = off_AFC24;
    }
    if ( (unsigned int)v23 > 3 )
    {
      v5 = 0;
      strcpy(v30, "Don't get msg in result\n");
      sub_3AF5C(3, v30, 0, *(int *)"g in result\n");
      goto LABEL_43;
    }
    goto LABEL_54;
  }
  if ( (unsigned int)off_AFC24 > 3 )
  {
    strcpy(v30, "Don't get code in result\n");
    sub_3AF5C(3, v30, 0, *(int *)"de in result\n");
  }
  if ( v2[1] != -1 )
  {
    v28 = v2 + 1;
    __dmb(0xBu);
    do
    {
      v29 = __ldrex(v28);
      v5 = v29 - 1;
    }
    while ( __strex(v5, v28) );
    if ( !v5 )
    {
      v6 = 0;
      goto LABEL_11;
    }
    if ( !v7 )
      return 0;
    v5 = 0;
    v6 = 0;
    goto LABEL_12;
  }
  if ( !v7 )
    return 0;
  if ( v7[1] == -1 )
    return 0;
  v13 = v7 + 1;
  __dmb(0xBu);
  do
  {
    v14 = __ldrex(v13);
    v5 = v14 - 1;
  }
  while ( __strex(v5, v13) );
  if ( v5 )
    return 0;
  v6 = 0;
LABEL_32:
  sub_74C7C(v7);
LABEL_13:
  if ( v6 && v6[1] != -1 )
  {
    v8 = v6 + 1;
    __dmb(0xBu);
    do
    {
      v9 = __ldrex(v8);
      v10 = v9 - 1;
    }
    while ( __strex(v10, v8) );
    if ( !v10 )
      sub_74C7C(v6);
  }
  return v5;
}
