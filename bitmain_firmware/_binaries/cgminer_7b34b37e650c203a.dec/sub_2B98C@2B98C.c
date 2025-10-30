const char *__fastcall sub_2B98C(int a1, int a2)
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
  _DWORD *v12; // r0
  const char *v13; // r0
  int v15; // r0
  int v16; // r0
  _DWORD *v17; // r10
  int v18; // r5
  _DWORD *v19; // r0
  int v20; // r0
  int v22; // [sp+10h] [bp-814h]
  char *v23; // [sp+10h] [bp-814h]
  const char *v24; // [sp+14h] [bp-810h]
  char *v25; // [sp+14h] [bp-810h]
  int v26; // [sp+18h] [bp-80Ch]
  const char *v27; // [sp+1Ch] [bp-808h]
  char s[2052]; // [sp+20h] [bp-804h] BYREF

  if ( a2 && !dword_68FC8 )
    dword_68FC8 = 1;
  if ( dword_67FE4 == 16 )
    goto LABEL_28;
  if ( (dword_67FE4 & 8) != 0 )
LABEL_53:
    _assert_fail("!(opt->type & OPT_SUBTABLE)", "cgminer.c", 0x7A4u, "parse_config");
  v3 = &unk_67FFC;
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
      v8 = (_DWORD *)sub_480FC(a1, v7 + 2);
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
        v15 = *(v3 - 2);
        if ( (v9 & 1) == 0 )
        {
          if ( v10 == 5 )
            sub_40068(v15);
          else
            sub_40078(v15);
          goto LABEL_12;
        }
        v11 = (const char *)((int (__fastcall *)(int))*(v3 - 5))(v15);
        goto LABEL_33;
      }
      if ( v10 == 2 )
      {
        v22 = sub_48630(v8);
        v16 = ((int (__fastcall *)(int, _DWORD))*(v3 - 4))(v22, *(v3 - 2));
        v11 = (const char *)v16;
        if ( *(v3 - 6) == 4 )
        {
          v24 = (const char *)v16;
          sub_4014C(v22, *(v3 - 2));
          v11 = v24;
        }
LABEL_33:
        if ( !v11 )
          goto LABEL_12;
        if ( a2 )
          goto LABEL_22;
LABEL_35:
        snprintf(byte_68F00, 0xC8u, "Parsing JSON option %s: %s", v7, v11);
        return byte_68F00;
      }
      if ( v10 != 1 )
        goto LABEL_18;
      v23 = v6;
      v17 = v8;
      v25 = v7;
      v18 = 0;
      if ( !sub_48468(v8) )
      {
LABEL_46:
        v6 = v23;
        goto LABEL_12;
      }
      while ( 1 )
      {
        v19 = (_DWORD *)sub_48484(v17, v18);
        if ( !v19 )
          goto LABEL_46;
        if ( *v19 == 2 )
          break;
        if ( !*v19 )
        {
          v11 = (const char *)sub_2B98C();
          goto LABEL_49;
        }
LABEL_45:
        if ( sub_48468(v17) <= (unsigned int)++v18 )
          goto LABEL_46;
      }
      v26 = sub_48630(v19);
      v20 = ((int (__fastcall *)(int, _DWORD))*(v3 - 4))(v26, *(v3 - 2));
      v11 = (const char *)v20;
      if ( *(v3 - 6) == 4 )
      {
        v27 = (const char *)v20;
        sub_4014C(v26, *(v3 - 2));
        v11 = v27;
      }
LABEL_49:
      if ( !v11 )
        goto LABEL_45;
      v6 = v23;
      v7 = v25;
LABEL_21:
      if ( !a2 )
        goto LABEL_35;
LABEL_22:
      if ( byte_74500 || byte_68BD4 || dword_67DB4 > 2 )
      {
        snprintf(s, 0x800u, "Invalid config option %s: %s", v7, v11);
        sub_20F58(3, s, 0);
      }
      dword_68FC8 = -1;
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
  v12 = (_DWORD *)sub_480FC(a1, "include");
  if ( !v12 || *v12 != 2 )
    return 0;
  v13 = (const char *)sub_48630(v12);
  return sub_2B890(v13);
}
