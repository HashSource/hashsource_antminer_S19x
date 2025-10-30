int __fastcall sub_5383C(int a1)
{
  int v2; // r5
  unsigned int v3; // r5
  int v5; // r3
  const char *v6; // r0
  char *v7; // r6
  size_t v8; // r0
  char *v9; // r0
  char *v10; // r8
  _DWORD *v11; // r0
  _DWORD *v12; // r7
  unsigned int *v13; // r3
  unsigned int v14; // r2
  unsigned int v15; // r2
  int v16; // r3
  size_t v17; // [sp+8h] [bp-900h] BYREF
  _BYTE v18[252]; // [sp+Ch] [bp-8FCh] BYREF
  char s[2048]; // [sp+108h] [bp-800h] BYREF

  v17 = 0;
  if ( (unsigned int)dword_B308C <= 3
    || (snprintf(s, 0x800u, "submit_result_to_MES_system,p->rule_level:%d", *(_DWORD *)(a1 + 292)),
        sub_3B6AC(3, s, 0, v5),
        (unsigned int)dword_B308C <= 3) )
  {
    v2 = sub_528C8();
    if ( v2 )
      goto LABEL_8;
LABEL_3:
    if ( (unsigned int)dword_B308C > 3 )
    {
      strcpy(s, "conn to mes err.");
      sub_3B6AC(3, s, v2, *(int *)"err.");
      return v2;
    }
    return 0;
  }
  strcpy(s, "submit_result_to_MES_system.");
  sub_3B6AC(3, s, 0, *(int *)"");
  v2 = sub_528C8();
  if ( !v2 )
    goto LABEL_3;
LABEL_8:
  v6 = sub_521A4(a1);
  v7 = (char *)v6;
  if ( !v6 )
  {
    if ( (unsigned int)dword_B308C > 3 )
    {
      v3 = 0;
      strcpy(s, "create mes content err");
      sub_3B6AC(3, s, 0, *(unsigned __int16 *)"");
      return v3;
    }
    return 0;
  }
  v8 = strlen(v6);
  if ( sub_5300C(v7, v8) )
  {
    v9 = sub_53160(&v17);
    v10 = v9;
    if ( v9 )
    {
      if ( (unsigned int)dword_B308C > 3 )
      {
        snprintf(s, 0x800u, "length:%d,submit_result_response:%s", v17, v9);
        sub_3B6AC(3, s, 0, v16);
      }
      v11 = (_DWORD *)sub_74840(v10, v17 - 1, 0, v18);
      v12 = v11;
      if ( v11 )
      {
        if ( *v11 )
        {
          v3 = 0;
          if ( (unsigned int)dword_B308C > 3 )
          {
            strcpy(s, "Don't get all respons after submit result");
            sub_3B6AC(3, s, 0, *(int *)"submit result");
          }
          free(v10);
        }
        else
        {
          v3 = sub_53434((int)v11);
          free(v10);
        }
        if ( v12[1] != -1 )
        {
          v13 = v12 + 1;
          __dmb(0xFu);
          do
          {
            v14 = __ldrex(v13);
            v15 = v14 - 1;
          }
          while ( __strex(v15, v13) );
          if ( !v15 )
            sub_780F0(v12);
        }
      }
      else
      {
        v3 = 0;
        if ( (unsigned int)dword_B308C > 3 )
        {
          strcpy(s, "Don't get all respons after submit result");
          sub_3B6AC(3, s, 0, *(int *)"submit result");
        }
        free(v10);
      }
    }
    else
    {
      if ( (unsigned int)dword_B308C > 3 )
      {
        strcpy(s, "submit result fail");
        sub_3B6AC(3, s, 0, *(int *)"t fail");
      }
      v3 = 0;
    }
    free(v7);
    if ( dword_B3808 != -1 )
    {
      close(dword_B3808);
      dword_B3808 = -1;
      if ( (unsigned int)dword_B308C > 3 )
      {
        strcpy(s, "close socket");
        sub_3B6AC(3, s, 0, *(int *)"");
      }
    }
    return v3;
  }
  if ( (unsigned int)dword_B308C > 3 )
  {
    strcpy(s, "send submit result information fail");
    sub_3B6AC(3, s, 0, *(int *)"on fail");
  }
  free(v7);
  return 0;
}
