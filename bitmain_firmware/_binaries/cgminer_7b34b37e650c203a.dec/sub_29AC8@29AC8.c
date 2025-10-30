int __fastcall sub_29AC8(_DWORD *a1)
{
  const char *v1; // r3
  int v3; // r2
  size_t v4; // r0
  int v5; // r9
  int v6; // r6
  char *v7; // r5
  int v9; // r8
  _DWORD *v10; // r5
  _DWORD *v11; // r0
  char *v12; // r5
  unsigned int *v13; // r3
  unsigned int v14; // r2
  unsigned int v15; // r2
  int v16; // r3
  int v17; // r2
  size_t v18; // r0
  int v19; // r2
  size_t v20; // r0
  const char *v21; // [sp+0h] [bp-290Ch]
  _BYTE v22[252]; // [sp+Ch] [bp-2900h] BYREF
  char s[2040]; // [sp+108h] [bp-2804h] BYREF
  char v24[8196]; // [sp+908h] [bp-2004h] BYREF

  v1 = (const char *)a1[43];
  v3 = dword_7448C;
  v21 = (const char *)a1[44];
  ++dword_7448C;
  sprintf(v24, "{\"id\": %d, \"method\": \"mining.authorize\", \"params\": [\"%s\", \"%s\"]}", v3, v1, v21);
  v4 = strlen(v24);
  v5 = sub_244A4((int)a1, v24, v4);
  if ( v5 )
  {
    while ( 1 )
    {
      v7 = sub_24858((int)a1);
      if ( !v7 )
        return 0;
      v6 = sub_28AE0(a1, (int)v7);
      if ( !v6 )
        break;
      free(v7);
    }
    v9 = sub_47258(v7, 0, v22);
    free(v7);
    v10 = (_DWORD *)sub_480FC(v9, "result");
    v11 = (_DWORD *)sub_480FC(v9, "error");
    if ( !v10 || *v10 == 6 )
    {
      if ( !v11 )
      {
        v12 = (char *)malloc(0x11u);
        if ( v12 )
          strcpy(v12, "(unknown reason)");
        goto LABEL_13;
      }
    }
    else if ( !v11 || *v11 == 7 )
    {
      if ( byte_74500 || byte_68BD4 || dword_67DB4 > 5 )
      {
        snprintf(s, 0x800u, "Stratum authorisation success for pool %d", *a1);
        sub_20F58(6, s, 0);
      }
      v16 = dword_73480;
      byte_68BD6 = 1;
      *((_BYTE *)a1 + 99) = 1;
      if ( v16 )
      {
        v19 = dword_7448C++;
        sprintf(v24, "{\"id\": %d, \"method\": \"mining.suggest_difficulty\", \"params\": [%d]}", v19, v16);
        v20 = strlen(v24);
        sub_244A4((int)a1, v24, v20);
      }
      v6 = (unsigned __int8)byte_68820;
      if ( byte_68820 )
      {
        if ( byte_74500 || byte_68BD4 || dword_67DB4 > 4 )
        {
          strcpy(s, "LOW POWER MODE!");
          sub_20F58(5, s, 0);
        }
        v17 = dword_7448C++;
        sprintf(
          v24,
          "{\"id\":%d, \"method\":\"mining.configure\", \"params\":[[\"version-rolling\"],{\"version-rolling.mask\":\"%08"
          "x\",\"version-rolling.min-bit-count\":%d}]}",
          v17,
          14680064,
          3);
        v18 = strlen(v24);
        sub_244A4((int)a1, v24, v18);
        a1[162] = 8;
      }
      else
      {
        v6 = v5;
      }
      goto LABEL_17;
    }
    v12 = (char *)sub_45074(v11, 3);
LABEL_13:
    if ( byte_74500 || byte_68BD4 || dword_67DB4 > 5 )
    {
      snprintf(s, 0x800u, "pool %d JSON stratum auth failed: %s", *a1, v12);
      sub_20F58(6, s, 0);
    }
    free(v12);
    sub_24340((int)a1);
LABEL_17:
    if ( v9 )
    {
      if ( *(_DWORD *)(v9 + 4) != -1 )
      {
        v13 = (unsigned int *)(v9 + 4);
        __dmb(0xBu);
        do
        {
          v14 = __ldrex(v13);
          v15 = v14 - 1;
        }
        while ( __strex(v15, v13) );
        if ( !v15 )
          sub_48A34(v9);
      }
    }
    return v6;
  }
  return 0;
}
