const char *__fastcall sub_35620(int a1, int a2)
{
  _DWORD *v4; // r7
  const char *v5; // r0
  char *v6; // r4
  _DWORD *v7; // r0
  _DWORD *v8; // r6
  int v9; // r2
  int v10; // r3
  const char *v11; // r3
  int v12; // r3
  int v13; // r3
  int v14; // r0
  unsigned int v15; // r5
  _DWORD *v16; // r0
  int v18; // r4
  int v19; // r0
  int v20; // r5
  int v21; // r0
  _DWORD *v22; // r0
  const char *v23; // r0
  char *ptr; // [sp+Ch] [bp-810h]
  char *v25; // [sp+10h] [bp-80Ch]
  const char *v26; // [sp+10h] [bp-80Ch]
  const char *v27; // [sp+14h] [bp-808h]
  char s[2052]; // [sp+18h] [bp-804h] BYREF

  if ( a2 && !dword_B6ADC )
    dword_B6ADC = 1;
  if ( dword_B2AD4 == 16 )
    goto LABEL_49;
  if ( (dword_B2AD4 & 8) != 0 )
    goto LABEL_28;
  v4 = &unk_B2AEC;
  while ( 2 )
  {
    v5 = (const char *)*(v4 - 7);
    if ( !v5 )
      goto LABEL_26;
    ptr = _strdup(v5);
    v6 = strtok(ptr, "|");
    if ( !v6 )
      goto LABEL_25;
    while ( 2 )
    {
      if ( v6[1] != 45 )
        goto LABEL_10;
      v7 = (_DWORD *)sub_75FEC(a1, v6 + 2);
      v8 = v7;
      if ( !v7 )
        goto LABEL_10;
      v9 = *(v4 - 6);
      v10 = *v7;
      if ( (v9 & 6) == 0 )
        goto LABEL_16;
      if ( v10 == 2 )
      {
        v20 = sub_777D0(v7);
        v21 = ((int (__fastcall *)(int, _DWORD))*(v4 - 4))(v20, *(v4 - 2));
        v11 = (const char *)v21;
        if ( *(v4 - 6) == 4 )
        {
          v26 = (const char *)v21;
          sub_50468(v20, *(v4 - 2));
          v11 = v26;
        }
        goto LABEL_46;
      }
      if ( v10 != 1 )
      {
LABEL_16:
        if ( (unsigned int)(v10 - 5) > 1 )
        {
          v11 = "Invalid value";
          goto LABEL_19;
        }
        if ( (v9 & 1) == 0 )
        {
          v14 = *(v4 - 2);
          if ( v10 == 5 )
            sub_5037C(v14);
          else
            sub_5038C(v14);
          goto LABEL_10;
        }
        v11 = (const char *)((int (__fastcall *)(_DWORD))*(v4 - 5))(*(v4 - 2));
LABEL_46:
        if ( !v11 )
          goto LABEL_10;
LABEL_19:
        if ( !a2 )
          goto LABEL_41;
        goto LABEL_20;
      }
      v15 = 0;
      v25 = v6;
      while ( 1 )
      {
        if ( v15 >= sub_76B34(v8) )
          goto LABEL_10;
        v16 = (_DWORD *)sub_76B80(v8, v15);
        if ( !v16 )
          goto LABEL_10;
        if ( *v16 == 2 )
        {
          v18 = sub_777D0(v16);
          v19 = ((int (__fastcall *)(int, _DWORD))*(v4 - 4))(v18, *(v4 - 2));
          v11 = (const char *)v19;
          if ( *(v4 - 6) == 4 )
          {
            v27 = (const char *)v19;
            sub_50468(v18, *(v4 - 2));
            v11 = v27;
          }
        }
        else
        {
          if ( *v16 )
            goto LABEL_33;
          v11 = (const char *)sub_35620();
        }
        if ( v11 )
          break;
LABEL_33:
        ++v15;
      }
      v6 = v25;
      if ( !a2 )
      {
LABEL_41:
        snprintf(byte_B6A14, 0xC8u, "Parsing JSON option %s: %s", v6, v11);
        return byte_B6A14;
      }
LABEL_20:
      if ( byte_5C0EFC || byte_4B9A21 || dword_B3094 > 2 )
      {
        snprintf(s, 0x800u, "Invalid config option %s: %s", v6, v11);
        sub_3B6AC(3, s, 0, v12);
      }
      dword_B6ADC = -1;
LABEL_10:
      v6 = strtok(0, "|");
      if ( v6 )
        continue;
      break;
    }
LABEL_25:
    free(ptr);
LABEL_26:
    v13 = v4[1];
    if ( v13 != 16 )
    {
      v4 += 7;
      if ( (v13 & 8) != 0 )
LABEL_28:
        _assert_fail("!(opt->type & OPT_SUBTABLE)", "bmminer.c", 0x2F3u, "parse_config");
      continue;
    }
    break;
  }
LABEL_49:
  v22 = (_DWORD *)sub_75FEC(a1, "include");
  if ( !v22 )
    return 0;
  if ( *v22 != 2 )
    return 0;
  v23 = (const char *)sub_777D0(v22);
  return sub_3552C(v23);
}
