unsigned int __fastcall sub_53434(int a1)
{
  _DWORD *v1; // r0
  _DWORD *v2; // r4
  unsigned int v3; // r5
  unsigned int *v4; // r3
  _DWORD *v5; // r6
  _DWORD *v6; // r7
  unsigned int v7; // r2
  unsigned int v8; // r2
  _DWORD *v10; // r0
  unsigned int *v11; // r3
  unsigned int v12; // r2
  unsigned int v13; // r2
  unsigned int *v14; // r3
  unsigned int v15; // r2
  unsigned int v16; // r2
  unsigned int *v17; // r3
  unsigned int v18; // r2
  unsigned int v19; // r2
  unsigned int *v20; // r3
  unsigned int v21; // r5
  const char *v22; // r0
  _DWORD *v23; // r0
  const char *v24; // r0
  int v25; // r3
  const char *v26; // r0
  int v27; // r3
  char v28[2048]; // [sp+0h] [bp-800h] BYREF

  v1 = (_DWORD *)sub_75FEC(a1, "result");
  v2 = v1;
  if ( v1 )
  {
    if ( *v1 )
    {
      if ( (unsigned int)dword_B308C <= 3 )
      {
        v3 = 0;
        if ( v1[1] == -1 )
          return v3;
        v4 = v1 + 1;
        v5 = 0;
        v6 = 0;
        __dmb(0xFu);
        do
        {
          v7 = __ldrex(v4);
          v8 = v7 - 1;
        }
        while ( __strex(v8, v4) );
        if ( v8 )
          return 0;
        goto LABEL_38;
      }
      strcpy(v28, "Don't find result in submit result responce");
      sub_3B6AC(3, v28, 0, *(int *)"result responce");
      if ( v2[1] != -1 )
      {
        v20 = v2 + 1;
        __dmb(0xFu);
        do
        {
          v21 = __ldrex(v20);
          v3 = v21 - 1;
        }
        while ( __strex(v3, v20) );
        if ( !v3 )
        {
          v5 = 0;
          v6 = 0;
          goto LABEL_38;
        }
      }
      return 0;
    }
    v10 = (_DWORD *)sub_75FEC(v1, "code");
    v6 = v10;
    if ( v10 && *v10 == 2 )
    {
      v22 = (const char *)sub_777D0(v10);
      if ( !strcmp(v22, "000000") )
      {
        v5 = 0;
        v3 = 1;
        if ( (unsigned int)dword_B308C > 3 )
        {
          strcpy(v28, "submit result success\n");
          sub_3B6AC(3, v28, 0, *(unsigned __int16 *)"");
        }
      }
      else
      {
        if ( (unsigned int)dword_B308C > 3 )
        {
          v24 = (const char *)sub_777D0(v6);
          snprintf(v28, 0x800u, "submit result fail! code: %s\n", v24);
          sub_3B6AC(3, v28, 0, v25);
        }
        v23 = (_DWORD *)sub_75FEC(v2, "msg");
        v5 = v23;
        if ( v23 && *v23 == 2 )
        {
          if ( (unsigned int)dword_B308C > 3 )
          {
            v26 = (const char *)sub_777D0(v23);
            v3 = 0;
            snprintf(v28, 0x800u, "submit result fail! msg: %s\n", v26);
            sub_3B6AC(3, v28, 0, v27);
            goto LABEL_16;
          }
        }
        else if ( (unsigned int)dword_B308C > 3 )
        {
          v3 = 0;
          strcpy(v28, "Don't get msg in result\n");
          sub_3B6AC(3, v28, 0, *(int *)"g in result\n");
          goto LABEL_16;
        }
        v3 = 0;
      }
    }
    else
    {
      v3 = 0;
      v5 = 0;
      if ( (unsigned int)dword_B308C > 3 )
      {
        strcpy(v28, "Don't get code in result\n");
        sub_3B6AC(3, v28, 0, *(int *)"de in result\n");
      }
    }
LABEL_16:
    if ( v2[1] == -1 )
      goto LABEL_20;
    v11 = v2 + 1;
    __dmb(0xFu);
    do
    {
      v12 = __ldrex(v11);
      v13 = v12 - 1;
    }
    while ( __strex(v13, v11) );
    if ( v13 )
    {
LABEL_20:
      if ( v6 )
      {
        if ( v6[1] != -1 )
        {
          v14 = v6 + 1;
          __dmb(0xFu);
          do
          {
            v15 = __ldrex(v14);
            v16 = v15 - 1;
          }
          while ( __strex(v16, v14) );
          if ( !v16 )
            sub_780F0(v6);
        }
      }
      if ( v5 )
      {
        if ( v5[1] != -1 )
        {
          v17 = v5 + 1;
          __dmb(0xFu);
          do
          {
            v18 = __ldrex(v17);
            v19 = v18 - 1;
          }
          while ( __strex(v19, v17) );
          if ( !v19 )
          {
            sub_780F0(v5);
            return v3;
          }
        }
      }
      return v3;
    }
LABEL_38:
    sub_780F0(v2);
    goto LABEL_20;
  }
  if ( (unsigned int)dword_B308C <= 3 )
    return 0;
  strcpy(v28, "Don't find result in submit result responce");
  sub_3B6AC(3, v28, 0, *(int *)"result responce");
  return 0;
}
