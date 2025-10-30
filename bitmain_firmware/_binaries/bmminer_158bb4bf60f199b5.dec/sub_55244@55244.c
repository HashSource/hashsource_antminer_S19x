int __fastcall sub_55244(_DWORD *a1)
{
  int v2; // r7
  int v3; // r2
  int v4; // r3
  const char *v5; // r0
  int v7; // r6
  int *v8; // r12
  int v9; // r0
  int v10; // r1
  int v11; // r2
  int v12; // r3
  int *v13; // r12
  int v14; // r0
  int v15; // r1
  int v16; // r2
  int v17; // r3
  int v18; // r12
  const char *v19; // r1
  size_t v20; // r2
  int v21; // r3
  struct timeval v22; // [sp+8h] [bp-810h] BYREF
  struct timeval v23; // [sp+10h] [bp-808h] BYREF
  char s[2048]; // [sp+18h] [bp-800h] BYREF

  if ( *((_BYTE *)a1 + 736) )
  {
    if ( byte_1AECC5 && (byte_244080 || byte_1AECC4 || dword_9E320 > 6) )
    {
      snprintf(s, 0x800u, "Retrieving block template from pool %s", (const char *)a1[41]);
      sub_47AB4(7, s, 0);
    }
  }
  else if ( byte_244080 || byte_1AECC4 || dword_9E320 > 5 )
  {
    snprintf(s, 0x800u, "Testing pool %s", (const char *)a1[41]);
    sub_47AB4(6, s, 0);
  }
  v2 = *((unsigned __int8 *)a1 + 640);
  if ( *((_BYTE *)a1 + 640) )
  {
LABEL_38:
    v2 = sub_55170((int)a1, (_BYTE *)a1 + 642);
    if ( v2 )
      return *((unsigned __int8 *)a1 + 641);
    if ( !sub_4D754(a1) || *((_BYTE *)a1 + 580) && !sub_50338(a1) || (v7 = sub_50730(a1)) == 0 )
    {
      sub_551DC((int)a1, (_BYTE *)a1 + 642);
      return v2;
    }
    byte_244082 = 1;
    if ( pthread_create(a1 + 174, 0, (void *(*)(void *))sub_5C898, a1) )
    {
      v8 = (int *)&unk_86EC4;
    }
    else
    {
      if ( !pthread_create(a1 + 175, 0, (void *(*)(void *))sub_5FAA0, a1) )
        return v7;
      v8 = (int *)&unk_86EE8;
    }
    v9 = *v8;
    v10 = v8[1];
    v11 = v8[2];
    v12 = v8[3];
    v13 = v8 + 4;
    *(_DWORD *)s = v9;
    *(_DWORD *)&s[4] = v10;
    *(_DWORD *)&s[8] = v11;
    *(_DWORD *)&s[12] = v12;
    v14 = *v13;
    v15 = v13[1];
    v16 = v13[2];
    v17 = v13[3];
    v18 = v13[4];
    *(_DWORD *)&s[16] = v14;
    *(_DWORD *)&s[20] = v15;
    *(_DWORD *)&s[24] = v16;
    *(_DWORD *)&s[28] = v17;
    s[32] = v18;
    sub_47AB4(3, s, 1);
    sub_54CCC(1, 1);
  }
  if ( off_9ED7C )
  {
    if ( *((_BYTE *)a1 + 99) )
      goto LABEL_15;
    if ( !byte_1AECC5 )
    {
      *((_BYTE *)a1 + 99) = v2;
      goto LABEL_15;
    }
    if ( byte_244080 || byte_1AECC4 || dword_9E320 > 6 )
    {
      strcpy(s, "Probing for GBT support");
      sub_47AB4(7, s, 0);
      v3 = *((unsigned __int8 *)a1 + 736);
      v4 = (unsigned __int8)byte_1AECC5;
      *((_BYTE *)a1 + 99) = 0;
      if ( !v3 )
      {
        if ( *((_BYTE *)a1 + 900) )
        {
          if ( !v4 )
            goto LABEL_15;
          goto LABEL_54;
        }
        if ( v4 )
        {
          if ( !byte_244080 )
            goto LABEL_63;
          goto LABEL_65;
        }
LABEL_15:
        sub_4A60C(&v22);
        sub_4A60C(&v23);
        v5 = (const char *)a1[144];
        if ( v5 && !byte_1AF0E0 )
        {
          if ( byte_244080 || byte_1AECC4 || dword_9E320 > 5 )
          {
            snprintf(s, 0x800u, "Testing pool %d stratum %s", *a1, (const char *)a1[144]);
            sub_47AB4(6, s, 0);
            v5 = (const char *)a1[144];
          }
          if ( sub_4A940(v5, a1 + 150, (char **)a1 + 146) && sub_4D754(a1) )
          {
            if ( byte_244080 || byte_1AECC4 || dword_9E320 > 4 )
            {
              snprintf(s, 0x800u, "Switching pool %d %s to %s", *a1, (const char *)a1[41], (const char *)a1[144]);
              sub_47AB4(5, s, 0);
            }
            if ( !a1[41] )
              a1[41] = _strdup((const char *)a1[144]);
            *((_BYTE *)a1 + 640) = 1;
            goto LABEL_38;
          }
        }
        if ( !*((_BYTE *)a1 + 640) && !*((_BYTE *)a1 + 900) && !*((_BYTE *)a1 + 736) )
        {
          if ( byte_244080 || byte_1AECC4 || dword_9E320 > 3 )
          {
            v2 = 0;
            snprintf(
              s,
              0x800u,
              "No Stratum, GBT or Solo support in pool %d %s unable to use",
              *a1,
              (const char *)a1[41]);
            sub_47AB4(4, s, 0);
          }
          return v2;
        }
        if ( byte_1AECC5 )
        {
          if ( !byte_244080 && !byte_1AECC4 && dword_9E320 <= 6 )
          {
            if ( *((_BYTE *)a1 + 97) )
              return v2;
LABEL_75:
            if ( dword_9E320 <= 3 )
              return v2;
LABEL_81:
            snprintf(s, 0x800u, "Pool %u slow/down or URL or credentials invalid", *a1);
            sub_47AB4(4, s, 0);
            return v2;
          }
          snprintf(s, 0x800u, "FAILED to retrieve work from pool %u %s", *a1, (const char *)a1[41]);
          sub_47AB4(7, s, 0);
        }
        if ( *((_BYTE *)a1 + 97) )
          return v2;
        if ( byte_244080 || byte_1AECC4 )
          goto LABEL_81;
        goto LABEL_75;
      }
      if ( !v4 )
        goto LABEL_15;
    }
    else
    {
      v21 = *((unsigned __int8 *)a1 + 736);
      *((_BYTE *)a1 + 99) = v2;
      if ( !v21 )
      {
        if ( !*((_BYTE *)a1 + 900) )
        {
          if ( !byte_244080 )
          {
LABEL_63:
            if ( !byte_1AECC4 && dword_9E320 <= 6 )
              goto LABEL_15;
          }
LABEL_65:
          v19 = "No GBT coinbase + append support found, pool unusable if it has no stratum";
          v20 = 75;
LABEL_58:
          memcpy(s, v19, v20);
          sub_47AB4(7, s, 0);
          goto LABEL_15;
        }
LABEL_54:
        if ( !byte_244080 && !byte_1AECC4 && dword_9E320 <= 6 )
          goto LABEL_15;
        v19 = "GBT coinbase without append found, switching to GBT solo protocol";
        v20 = 66;
        goto LABEL_58;
      }
    }
    if ( byte_244080 || byte_1AECC4 || dword_9E320 > 6 )
    {
      strcpy(s, "GBT coinbase + append support found, switching to GBT protocol");
      sub_47AB4(7, s, 0);
    }
    goto LABEL_15;
  }
  if ( !byte_244080 && !byte_1AECC4 && dword_9E320 <= 2 )
    return v2;
  strcpy(s, "CURL initialisation failed");
  sub_47AB4(3, s, 0);
  return v2;
}
