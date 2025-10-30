int __fastcall sub_1D2350(int a1)
{
  const char *v2; // r6
  _DWORD *v3; // r0
  int v4; // r5
  const char *v5; // r10
  const char *v6; // r9
  const char *v7; // r7
  int v8; // r11
  int v9; // r4
  int v10; // r8
  int v11; // r10
  int v12; // r0
  int v13; // r4
  void *v14; // r4
  _DWORD *v15; // r4
  int v16; // r0
  int v17; // r5
  int v18; // r0
  int v20; // r5
  int v21; // r11
  int v22; // r0
  bool v23; // zf
  int s2; // [sp+8h] [bp-3Ch]
  _BYTE *v25; // [sp+Ch] [bp-38h]
  char *v26; // [sp+10h] [bp-34h]
  int v27; // [sp+14h] [bp-30h]
  _DWORD v28[3]; // [sp+24h] [bp-20h] BYREF
  _BYTE v29[16]; // [sp+30h] [bp-14h] BYREF

  v2 = 0;
  v3 = (_DWORD *)sub_242F8C(a1);
  v25 = (_BYTE *)*v3;
  sub_243C34(v3);
  v28[0] = 0;
  sub_25B0DC(v28, a1);
  v4 = v28[0];
  if ( !v28[0] )
  {
    v2 = 0;
LABEL_69:
    v7 = v2;
    v6 = v2;
    v9 = (int)v2;
    v11 = (int)v2;
    v10 = (int)v2;
    goto LABEL_21;
  }
  v5 = *(const char **)v28[0];
  if ( !*(_DWORD *)v28[0] )
  {
    v2 = *(const char **)v28[0];
    goto LABEL_69;
  }
  v6 = 0;
  v7 = 0;
  v8 = 1;
  while ( 1 )
  {
    v9 = v8 - 1;
    if ( !strcmp(v5, "-pc") )
    {
      v7 = *(const char **)(v4 + 4 * v8);
      if ( !v7 )
        sub_946E0("Missing pc value");
      goto LABEL_5;
    }
    if ( strcmp(v5, "-source") )
      break;
    v6 = *(const char **)(v4 + 4 * v8);
    if ( !v6 )
      sub_946E0("Missing source file");
LABEL_5:
    v9 = v8 + 1;
    v8 += 2;
    v5 = *(const char **)(v4 + 4 * v9);
    if ( !v5 )
      goto LABEL_16;
  }
  if ( !strcmp(v5, "-objfile") )
  {
    v2 = *(const char **)(v4 + 4 * v8);
    if ( !v2 )
      sub_946E0("Missing objfile name");
    goto LABEL_5;
  }
  if ( !strcmp(v5, "--") )
  {
    v9 = v8;
  }
  else if ( *v5 == 45 )
  {
    sub_946E0("Unknown option: %s", v5);
  }
LABEL_16:
  v10 = (int)v7;
  if ( v7 )
    v10 = 1;
  v11 = (int)v6;
  if ( v6 )
    v11 = 1;
  if ( (v10 & v11) != 0 )
    sub_946E0("Must specify at most one of -pc and -source");
LABEL_21:
  v12 = sub_25689C(v29);
  if ( v28[0] )
  {
    v12 = *(_DWORD *)(v28[0] + 4 * v9);
    v13 = 4 * v9;
    if ( v12 )
    {
      if ( *(_DWORD *)(v28[0] + v13 + 4) )
        sub_946E0("Junk at end of command");
      v14 = (void *)sub_29B910(v12);
      v12 = sub_2568D4(v29, v14, "w");
      if ( !v12 )
        sub_258B04(v14);
      v25 = v29;
      if ( v14 )
        free(v14);
    }
  }
  if ( v10 )
  {
    v26 = (char *)sub_14CB9C((int)v7);
    v12 = ((int (*)(void))loc_1B7C78)();
    v27 = v12;
    v15 = *(_DWORD **)(dword_487D2C + 36);
    if ( !v15 )
      goto LABEL_65;
LABEL_29:
    s2 = 0;
    do
    {
      sub_258BD4(v12);
      if ( !v2 || (v16 = sub_1B87A8((int)v15), (v12 = sub_21A6F4(v16, v2)) != 0) )
      {
        if ( v10 )
        {
          v28[1] = 0;
          v28[2] = 0;
          v12 = (int)sub_1D09E4(v15, (unsigned int)v26, v27, 0, 0);
          v17 = v12;
          if ( v12 )
          {
            v18 = sub_1B87A8((int)v15);
            sub_25678C(v25, "\nPartial symtabs for objfile %s\n", v18);
            v12 = sub_1CE978((int)v15, v17, (int)v25);
            if ( *(_BYTE *)(v17 + 53) && v15[7] )
              v12 = sub_1CEF1C((int)v15, v17, (int)v25);
            s2 = 1;
          }
        }
        else
        {
          v12 = (int)sub_1D0878(v15, 1);
          v20 = *(_DWORD *)(v12 + 24);
          if ( v20 )
          {
            v21 = 0;
            do
            {
              while ( 1 )
              {
                sub_258BD4(v12);
                if ( !v11 )
                  break;
                v12 = sub_21A6F4(*(_DWORD *)(v20 + 4), v6) != 0;
                if ( !v6 )
                  v12 = 1;
                s2 = 1;
                if ( v12 )
                  break;
                v20 = *(_DWORD *)v20;
                if ( !v20 )
                  goto LABEL_56;
              }
              if ( !v21 )
              {
                v22 = sub_1B87A8((int)v15);
                sub_25678C(v25, "\nPartial symtabs for objfile %s\n", v22);
              }
              v12 = sub_1CE978((int)v15, v20, (int)v25);
              if ( *(_BYTE *)(v20 + 53) && v15[7] )
                v12 = sub_1CEF1C((int)v15, v20, (int)v25);
              v20 = *(_DWORD *)v20;
              v21 = 1;
            }
            while ( v20 );
          }
LABEL_56:
          v23 = v7 == 0;
          if ( !v7 )
            v23 = v6 == 0;
          if ( v23 )
          {
            if ( v15[7] )
            {
              v12 = (*(int (__fastcall **)(_BYTE *, __int16 *))(*(_DWORD *)v25 + 16))(v25, &word_356638);
              if ( v15[7] )
                v12 = sub_1CEF1C((int)v15, 0, (int)v25);
            }
          }
        }
      }
      v15 = (_DWORD *)*v15;
    }
    while ( v15 );
    if ( !s2 )
    {
      if ( !v10 )
        goto LABEL_41;
LABEL_65:
      sub_946E0("No partial symtab for address: %s", v7);
    }
  }
  else
  {
    v15 = *(_DWORD **)(dword_487D2C + 36);
    if ( v15 )
    {
      v27 = 0;
      v26 = 0;
      goto LABEL_29;
    }
LABEL_41:
    if ( v11 )
      sub_946E0("No partial symtab for source file: %s", v6);
  }
  sub_256514(v29);
  return sub_31DAD0(v28[0]);
}
