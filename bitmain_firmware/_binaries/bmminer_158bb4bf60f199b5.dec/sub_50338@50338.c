int __fastcall sub_50338(_DWORD *a1)
{
  size_t v2; // r0
  int v3; // r7
  char *v4; // r5
  _BOOL4 v5; // r6
  int v7; // r8
  _DWORD *v8; // r7
  _DWORD *v9; // r0
  _DWORD *v10; // r5
  const char *v11; // r7
  char *v12; // r5
  unsigned int *v13; // r3
  unsigned int v14; // r2
  unsigned int v15; // r2
  _BYTE v16[252]; // [sp+Ch] [bp-28FCh] BYREF
  char s[2040]; // [sp+108h] [bp-2800h] BYREF
  char v18[8192]; // [sp+908h] [bp-2000h] BYREF

  ++dword_24400C;
  sprintf(v18, aIdDMethodMinin_5);
  v2 = strlen(v18);
  v3 = sub_4B10C((int)a1, v18, v2);
  if ( v3 )
  {
    while ( 1 )
    {
      v5 = sub_49090(a1[147], 2);
      if ( !v5 )
      {
        if ( byte_1AECC5 )
        {
          if ( byte_244080 || byte_1AECC4 || dword_9E320 > 6 )
          {
            v3 = (unsigned __int8)byte_1AECC5;
            strcpy(s, "Timed out waiting for response extranonce.subscribe");
            sub_47AB4(7, s, 0);
          }
          else
          {
            return (unsigned __int8)byte_1AECC5;
          }
        }
        return v3;
      }
      v4 = sub_4B4C0((int)a1);
      if ( !v4 )
        return 0;
      if ( !sub_4F748(a1, (int)v4) )
        break;
      free(v4);
    }
    v7 = sub_6D110(v4, 0, v16);
    free(v4);
    v8 = (_DWORD *)sub_6DFCC(v7, "result");
    v9 = (_DWORD *)sub_6DFCC(v7, "error");
    v10 = v9;
    if ( !v8 || *v8 == 6 )
    {
      if ( !v9 )
      {
        v12 = (char *)malloc(0x11u);
        if ( v12 )
          strcpy(v12, "(unknown reason)");
        goto LABEL_30;
      }
    }
    else if ( !v9 || *v9 == 7 )
    {
      if ( byte_244080 || byte_1AECC4 || dword_9E320 > 5 )
      {
        v3 = v5;
        snprintf(s, 0x800u, "Stratum extranonce subscribe for pool %d", *a1);
        sub_47AB4(6, s, 0);
        goto LABEL_35;
      }
LABEL_26:
      v3 = v5;
LABEL_35:
      if ( v7 )
      {
        if ( *(_DWORD *)(v7 + 4) != -1 )
        {
          v13 = (unsigned int *)(v7 + 4);
          __dmb(0xBu);
          do
          {
            v14 = __ldrex(v13);
            v15 = v14 - 1;
          }
          while ( __strex(v15, v13) );
          if ( !v15 )
            sub_6E5DC(v7);
        }
      }
      return v3;
    }
    v11 = (const char *)sub_49124(v9, 1u);
    if ( !v11 && (v11 = (const char *)sub_6E350(v10)) == 0
      || strcmp(v11, "Method 'subscribe' not found for service 'mining.extranonce'")
      && strcmp(v11, "Unrecognized request provided") )
    {
      v12 = (char *)sub_6B6E8(v10, 3);
LABEL_30:
      if ( byte_244080 || byte_1AECC4 || dword_9E320 > 5 )
      {
        snprintf(s, 0x800u, "Pool %d JSON extranonce subscribe failed: %s", *a1, v12);
        sub_47AB4(6, s, 0);
      }
      v3 = 0;
      free(v12);
      goto LABEL_35;
    }
    if ( byte_244080 || byte_1AECC4 || dword_9E320 > 5 )
    {
      v3 = v5;
      snprintf(s, 0x800u, "Cannot subscribe to mining.extranonce for pool %d", *a1);
      sub_47AB4(6, s, 0);
      goto LABEL_35;
    }
    goto LABEL_26;
  }
  return v3;
}
