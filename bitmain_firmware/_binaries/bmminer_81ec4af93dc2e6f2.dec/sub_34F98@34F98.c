const char *__fastcall sub_34F98(int a1, int a2)
{
  _DWORD *v3; // r4
  int v4; // r3
  const char *v5; // r0
  char *v6; // r10
  char *v7; // r5
  _DWORD *v8; // r0
  int v9; // r1
  int v10; // r3
  const char *v11; // r3
  int v12; // r3
  _DWORD *v13; // r0
  const char *v14; // r0
  int v16; // r0
  int v17; // r0
  _DWORD *v18; // r10
  int v19; // r5
  _DWORD *v20; // r0
  int v21; // r0
  int v23; // [sp+10h] [bp-814h]
  char *v24; // [sp+10h] [bp-814h]
  const char *v25; // [sp+14h] [bp-810h]
  char *v26; // [sp+14h] [bp-810h]
  int v27; // [sp+18h] [bp-80Ch]
  const char *v28; // [sp+1Ch] [bp-808h]
  char s[2052]; // [sp+20h] [bp-804h] BYREF

  if ( a2 && !dword_B3D68 )
    dword_B3D68 = 1;
  if ( dword_AF66C == 16 )
    goto LABEL_28;
  if ( (dword_AF66C & 8) != 0 )
LABEL_53:
    _assert_fail("!(opt->type & OPT_SUBTABLE)", "bmminer.c", 0x2F3u, "parse_config");
  v3 = &unk_AF684;
  while ( 1 )
  {
    v5 = (const char *)*(v3 - 7);
    if ( !v5 )
    {
      v4 = v3[1];
      if ( v4 == 16 )
        break;
      goto LABEL_8;
    }
    v6 = _strdup(v5);
    v7 = strtok(v6, "|");
    if ( !v7 )
      goto LABEL_27;
    while ( 2 )
    {
      if ( v7[1] != 45 )
        goto LABEL_12;
      v8 = (_DWORD *)sub_72B10(a1, v7 + 2);
      if ( !v8 )
        goto LABEL_12;
      v9 = *(v3 - 6);
      v10 = *v8;
      if ( (v9 & 6) == 0 )
      {
LABEL_18:
        if ( (unsigned int)(v10 - 5) > 1 )
        {
          v11 = "Invalid value";
          goto LABEL_21;
        }
        v16 = *(v3 - 2);
        if ( (v9 & 1) == 0 )
        {
          if ( v10 == 5 )
            sub_4E2E8(v16);
          else
            sub_4E2F8(v16);
          goto LABEL_12;
        }
        v11 = (const char *)((int (__fastcall *)(int))*(v3 - 5))(v16);
        goto LABEL_33;
      }
      if ( v10 == 2 )
      {
        v23 = sub_74300(v8);
        v17 = ((int (__fastcall *)(int, _DWORD))*(v3 - 4))(v23, *(v3 - 2));
        v11 = (const char *)v17;
        if ( *(v3 - 6) == 4 )
        {
          v25 = (const char *)v17;
          sub_4E3CC(v23, *(v3 - 2));
          v11 = v25;
        }
LABEL_33:
        if ( !v11 )
          goto LABEL_12;
        if ( a2 )
          goto LABEL_22;
LABEL_35:
        snprintf(byte_B3CA0, 0xC8u, "Parsing JSON option %s: %s", v7, v11);
        return byte_B3CA0;
      }
      if ( v10 != 1 )
        goto LABEL_18;
      v24 = v6;
      v18 = v8;
      v26 = v7;
      v19 = 0;
      if ( !sub_7365C(v8) )
      {
LABEL_46:
        v6 = v24;
        goto LABEL_12;
      }
      while ( 1 )
      {
        v20 = (_DWORD *)sub_736A8(v18, v19);
        if ( !v20 )
          goto LABEL_46;
        if ( *v20 == 2 )
          break;
        if ( !*v20 )
        {
          v11 = (const char *)sub_34F98();
          goto LABEL_49;
        }
LABEL_45:
        if ( sub_7365C(v18) <= (unsigned int)++v19 )
          goto LABEL_46;
      }
      v27 = sub_74300(v20);
      v21 = ((int (__fastcall *)(int, _DWORD))*(v3 - 4))(v27, *(v3 - 2));
      v11 = (const char *)v21;
      if ( *(v3 - 6) == 4 )
      {
        v28 = (const char *)v21;
        sub_4E3CC(v27, *(v3 - 2));
        v11 = v28;
      }
LABEL_49:
      if ( !v11 )
        goto LABEL_45;
      v6 = v24;
      v7 = v26;
LABEL_21:
      if ( !a2 )
        goto LABEL_35;
LABEL_22:
      if ( byte_5BC044 || byte_4B6CA5 || dword_AFC2C > 2 )
      {
        snprintf(s, 0x800u, "Invalid config option %s: %s", v7, v11);
        sub_3AF5C(3, s, 0, v12);
      }
      dword_B3D68 = -1;
LABEL_12:
      v7 = strtok(0, "|");
      if ( v7 )
        continue;
      break;
    }
LABEL_27:
    free(v6);
    v4 = v3[1];
    if ( v4 == 16 )
      break;
LABEL_8:
    v3 += 7;
    if ( (v4 & 8) != 0 )
      goto LABEL_53;
  }
LABEL_28:
  v13 = (_DWORD *)sub_72B10(a1, "include");
  if ( !v13 || *v13 != 2 )
    return 0;
  v14 = (const char *)sub_74300(v13);
  return sub_34EA4(v14);
}
