int __fastcall sub_296D0(_DWORD *a1)
{
  int v2; // r2
  size_t v3; // r0
  int v4; // r7
  char *v5; // r5
  _BOOL4 v6; // r6
  int v8; // r8
  _DWORD *v9; // r7
  _DWORD *v10; // r0
  _DWORD *v11; // r5
  const char *v12; // r7
  char *v13; // r5
  unsigned int *v14; // r3
  unsigned int v15; // r2
  unsigned int v16; // r2
  _BYTE v17[252]; // [sp+Ch] [bp-28FCh] BYREF
  char s[2040]; // [sp+108h] [bp-2800h] BYREF
  char v19[8192]; // [sp+908h] [bp-2000h] BYREF

  v2 = dword_7448C++;
  sprintf(v19, "{\"id\": %d, \"method\": \"mining.extranonce.subscribe\", \"params\": []}", v2);
  v3 = strlen(v19);
  v4 = sub_244A4((int)a1, v19, v3);
  if ( v4 )
  {
    while ( 1 )
    {
      v6 = sub_22428(a1[147], 2);
      if ( !v6 )
      {
        if ( byte_68BD5 )
        {
          if ( byte_74500 || byte_68BD4 || dword_67DB4 > 6 )
          {
            v4 = (unsigned __int8)byte_68BD5;
            strcpy(s, "Timed out waiting for response extranonce.subscribe");
            sub_20F58(7, s, 0);
          }
          else
          {
            return (unsigned __int8)byte_68BD5;
          }
        }
        return v4;
      }
      v5 = sub_24858((int)a1);
      if ( !v5 )
        return 0;
      if ( !sub_28AE0(a1, (int)v5) )
        break;
      free(v5);
    }
    v8 = sub_47258(v5, 0, v17);
    free(v5);
    v9 = (_DWORD *)sub_480FC(v8, "result");
    v10 = (_DWORD *)sub_480FC(v8, "error");
    v11 = v10;
    if ( !v9 || *v9 == 6 )
    {
      if ( !v10 )
      {
        v13 = (char *)malloc(0x11u);
        if ( v13 )
          strcpy(v13, "(unknown reason)");
        goto LABEL_30;
      }
    }
    else if ( !v10 || *v10 == 7 )
    {
      if ( byte_74500 || byte_68BD4 || dword_67DB4 > 5 )
      {
        v4 = v6;
        snprintf(s, 0x800u, "Stratum extranonce subscribe for pool %d", *a1);
        sub_20F58(6, s, 0);
        goto LABEL_35;
      }
LABEL_26:
      v4 = v6;
LABEL_35:
      if ( v8 )
      {
        if ( *(_DWORD *)(v8 + 4) != -1 )
        {
          v14 = (unsigned int *)(v8 + 4);
          __dmb(0xBu);
          do
          {
            v15 = __ldrex(v14);
            v16 = v15 - 1;
          }
          while ( __strex(v16, v14) );
          if ( !v16 )
            sub_48A34(v8);
        }
      }
      return v4;
    }
    v12 = (const char *)sub_224BC(v10, 1u);
    if ( !v12 && (v12 = (const char *)sub_48630(v11)) == 0
      || strcmp(v12, "Method 'subscribe' not found for service 'mining.extranonce'")
      && strcmp(v12, "Unrecognized request provided") )
    {
      v13 = (char *)sub_45074(v11, 3);
LABEL_30:
      if ( byte_74500 || byte_68BD4 || dword_67DB4 > 5 )
      {
        snprintf(s, 0x800u, "Pool %d JSON extranonce subscribe failed: %s", *a1, v13);
        sub_20F58(6, s, 0);
      }
      v4 = 0;
      free(v13);
      goto LABEL_35;
    }
    if ( byte_74500 || byte_68BD4 || dword_67DB4 > 5 )
    {
      v4 = v6;
      snprintf(s, 0x800u, "Cannot subscribe to mining.extranonce for pool %d", *a1);
      sub_20F58(6, s, 0);
      goto LABEL_35;
    }
    goto LABEL_26;
  }
  return v4;
}
