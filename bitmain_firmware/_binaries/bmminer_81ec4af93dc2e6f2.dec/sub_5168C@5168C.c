unsigned int __fastcall sub_5168C(int a1)
{
  unsigned int v2; // r5
  const char *v4; // r0
  char *v5; // r6
  size_t v6; // r0
  int v7; // r3
  char *v8; // r0
  char *v9; // r7
  size_t v10; // r3
  _DWORD *v11; // r0
  _DWORD *v12; // r8
  unsigned int *v13; // r3
  unsigned int v14; // r2
  unsigned int v15; // r2
  int v16; // r3
  size_t v17; // [sp+8h] [bp-900h] BYREF
  _BYTE v18[252]; // [sp+Ch] [bp-8FCh] BYREF
  char s[2048]; // [sp+108h] [bp-800h] BYREF

  v17 = 0;
  if ( (unsigned int)off_AFC24 > 3 )
  {
    snprintf(s, 0x800u, "submit_result_to_MES_system,p->rule_level:%d", *(_DWORD *)(a1 + 292));
    sub_3AF5C(3, s, 0, v7);
    if ( (unsigned int)off_AFC24 > 3 )
    {
      strcpy(s, "submit_result_to_MES_system.");
      sub_3AF5C(3, s, 0, *(int *)"");
    }
  }
  if ( sub_50718() )
  {
    v4 = sub_5000C(a1);
    v5 = (char *)v4;
    if ( !v4 )
    {
      if ( (unsigned int)off_AFC24 > 3 )
      {
        v2 = 0;
        strcpy(s, "create mes content err");
        sub_3AF5C(3, s, 0, *(unsigned __int16 *)"");
        return v2;
      }
      return 0;
    }
    v6 = strlen(v4);
    if ( !sub_50E10(v5, v6) )
    {
      if ( (unsigned int)off_AFC24 > 3 )
      {
        strcpy(s, "send submit result information fail");
        sub_3AF5C(3, s, 0, *(int *)"on fail");
      }
      free(v5);
      return 0;
    }
    v8 = sub_50F6C(&v17);
    v9 = v8;
    if ( v8 )
    {
      v10 = v17;
      if ( (unsigned int)off_AFC24 > 3 )
      {
        snprintf(s, 0x800u, "length:%d,submit_result_response:%s", v17, v8);
        sub_3AF5C(3, s, 0, v16);
        v10 = v17;
      }
      v11 = (_DWORD *)sub_7132C(v9, v10 - 1, 0, v18);
      v12 = v11;
      if ( v11 )
      {
        if ( *v11 )
        {
          v2 = 0;
          if ( (unsigned int)off_AFC24 > 3 )
          {
            strcpy(s, "Don't get all respons after submit result");
            sub_3AF5C(3, s, 0, *(int *)"submit result");
          }
          free(v9);
        }
        else
        {
          v2 = sub_5125C((int)v11);
          free(v9);
        }
        if ( v12[1] != -1 )
        {
          v13 = v12 + 1;
          __dmb(0xBu);
          do
          {
            v14 = __ldrex(v13);
            v15 = v14 - 1;
          }
          while ( __strex(v15, v13) );
          if ( !v15 )
            sub_74C7C(v12);
        }
        goto LABEL_29;
      }
      if ( (unsigned int)off_AFC24 <= 3 )
      {
        v2 = 0;
        free(v9);
        goto LABEL_29;
      }
      strcpy(s, "Don't get all respons after submit result");
      sub_3AF5C(3, s, 0, *(int *)"submit result");
      free(v9);
    }
    else if ( (unsigned int)off_AFC24 > 3 )
    {
      v2 = 0;
      strcpy(s, "submit result fail");
      sub_3AF5C(3, s, 0, *(unsigned __int16 *)"");
      goto LABEL_29;
    }
    v2 = 0;
LABEL_29:
    free(v5);
    if ( dword_B03A0 != -1 )
    {
      close(dword_B03A0);
      dword_B03A0 = -1;
      if ( (unsigned int)off_AFC24 > 3 )
      {
        strcpy(s, "close socket");
        sub_3AF5C(3, s, 0, *(int *)"");
      }
    }
    return v2;
  }
  if ( (unsigned int)off_AFC24 <= 3 )
    return 0;
  strcpy(s, "conn to mes err.");
  sub_3AF5C(3, s, 0, *(int *)"err.");
  return 0;
}
