void __fastcall sub_213B10(int a1, int a2)
{
  int v4; // r3
  char *v5; // r5
  const char **v6; // r7
  const char *v7; // r10
  void *v8; // r4
  char *v9; // r11
  int v10; // r8
  int v11; // r9
  int v12; // r6
  __int64 v13; // r0
  char *v14; // r7
  char *v15; // r6
  int v16; // r9
  const char *v17; // r8
  int v18; // r0
  const char *v19; // r0
  char *v20; // r0
  int v21; // r3
  const char *v22; // r2
  int v23; // r3
  const char *v24; // r10
  size_t v25; // r6
  unsigned int v26; // r3
  size_t v27; // r7
  char *v28; // r3
  int v29; // r0
  int v30; // [sp+Ch] [bp-38h]
  int v31; // [sp+10h] [bp-34h]
  char *s2; // [sp+14h] [bp-30h]
  void *v33; // [sp+20h] [bp-24h]
  unsigned int v34; // [sp+24h] [bp-20h]
  char *v36; // [sp+2Ch] [bp-18h]
  char *v37; // [sp+2Ch] [bp-18h]
  const char *v38; // [sp+30h] [bp-14h]
  int v39; // [sp+34h] [bp-10h]
  const char **v40; // [sp+3Ch] [bp-8h] BYREF

  v31 = sub_B894C(a1);
  if ( a2 )
    v4 = 2;
  else
    v4 = 0;
  v34 = v4;
  v5 = (char *)sub_9836C(8u);
  *(_DWORD *)v5 = ".text";
  *((_DWORD *)v5 + 1) = 0;
  v33 = sub_9253C((int)nullsub_39, 0);
  sub_243C34(v33);
  if ( !a1 )
    sub_946E0("add-symbol-file takes a file name and an address");
  v40 = 0;
  sub_25B0DC(&v40, a1);
  v6 = v40;
  if ( !v40 )
  {
    sub_94700((int)"utils.h", 203, "%s: Assertion `%s' failed.", "char* gdb_argv::operator[](int)", "m_argv != NULL");
    v8 = 0;
    goto LABEL_61;
  }
  v7 = *v40;
  if ( !*v40 )
    goto LABEL_68;
  v8 = 0;
  v9 = v5 + 8;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v36 = v5 + 8;
  v30 = 10;
  do
  {
    if ( v11 || *v7 != 45 )
    {
      if ( v8 )
      {
        if ( v10 )
          sub_946E0("Unrecognized argument \"%s\"", v7);
        v10 = 1;
        *((_DWORD *)v5 + 1) = v7;
      }
      else
      {
        v8 = (void *)sub_29B910(v7);
        v6 = v40;
      }
      goto LABEL_11;
    }
    if ( !strcmp(v7, "-readnow") )
    {
      v30 |= 4u;
      goto LABEL_11;
    }
    if ( !strcmp(v7, "-readnever") )
    {
      v30 |= 0x80u;
      goto LABEL_11;
    }
    if ( strcmp(v7, "-s") )
    {
      if ( strcmp(v7, "--") )
        sub_946E0("Unrecognized argument \"%s\"", v7);
      v11 = 1;
      goto LABEL_11;
    }
    v21 = v12 + 1;
    if ( !v6 )
    {
      v13 = sub_94700(
              (int)"utils.h",
              203,
              "%s: Assertion `%s' failed.",
              "char* gdb_argv::operator[](int)",
              "m_argv != NULL");
LABEL_74:
      sub_946E0("Missing section name after \"-s\"", HIDWORD(v13));
    }
    v22 = v6[v21];
    v23 = v21;
    v38 = v22;
    if ( !v22 )
      goto LABEL_74;
    v24 = v6[v23 + 1];
    v39 = v12 + 2;
    if ( !v24 )
      sub_946E0("Missing section address after \"-s\"");
    if ( v36 == v9 )
    {
      v25 = v36 - v5;
      v26 = (v36 - v5) >> 3;
      if ( !v26 )
      {
        v27 = 8;
        goto LABEL_46;
      }
      v27 = 2 * v26;
      if ( v26 > 2 * v26 || v27 > 0x1FFFFFFF )
      {
        v27 = -8;
        goto LABEL_46;
      }
      if ( v27 )
      {
        v27 = 16 * v26;
LABEL_46:
        v28 = (char *)sub_9836C(v27);
      }
      else
      {
        v28 = 0;
      }
      if ( &v28[v25] )
      {
        *(_DWORD *)&v28[v25] = v38;
        *(_DWORD *)&v28[v25 + 4] = v24;
      }
      v9 = &v28[v25 + 8];
      if ( v36 != v5 )
      {
        v28 = (char *)memmove(v28, v5, v25);
        goto LABEL_51;
      }
      if ( v5 )
      {
LABEL_51:
        v37 = v28;
        sub_339E64(v5);
        v28 = v37;
      }
      v5 = v28;
      v36 = &v28[v27];
      v12 = v39;
      v6 = v40;
LABEL_11:
      ++v12;
      if ( v6 )
        goto LABEL_12;
      sub_94700((int)"utils.h", 203, "%s: Assertion `%s' failed.", "char* gdb_argv::operator[](int)", "m_argv != NULL");
LABEL_61:
      v29 = sub_31DAD0(v40);
      if ( v5 )
        sub_339E64(v5);
      if ( v8 )
        free(v8);
      sub_338FFC(v29);
    }
    v12 += 3;
    if ( v9 )
    {
      *(_DWORD *)v9 = v22;
      *((_DWORD *)v9 + 1) = v24;
    }
    v9 += 8;
LABEL_12:
    v7 = v6[v12];
  }
  while ( v7 );
  if ( !v8 )
LABEL_68:
    sub_946E0("You must provide a filename to be loaded.");
  if ( (v30 & 0x84) == 0x84 )
    sub_946E0("-readnow and -readnever cannot be used simultaneously");
  if ( !v10 )
    sub_946E0("The address where %s has been loaded is missing", (const char *)v8);
  sub_259858("add symbol table from file \"%s\" at\n", (const char *)v8);
  v14 = (char *)sub_211DBC((v9 - v5) >> 3);
  s2 = v14;
  sub_9253C((int)sub_210BE8, (int)v14);
  if ( v5 == v9 )
  {
    v16 = 0;
  }
  else
  {
    v15 = v5;
    v16 = 0;
    do
    {
      v17 = *(const char **)v15;
      v18 = sub_14CB9C(*((_DWORD *)v15 + 1));
      *((_DWORD *)v14 + 1) = v18;
      *((_DWORD *)v14 + 2) = v17;
      v19 = (const char *)sub_25AC8C(v31, v18);
      sub_259858("\t%s_addr = %s\n", v17, v19);
      v15 += 8;
      ++v16;
      v14 += 12;
    }
    while ( v15 != v9 );
  }
  *(_DWORD *)s2 = v16;
  if ( a2 && !sub_25A3E4("%s", "") )
    sub_946E0("Not confirmed.");
  v20 = sub_213898((const char *)v8, v34, s2, v30);
  ((void (__fastcall *)(char *))loc_949D8)(v20);
  sub_15D778();
  sub_92620(v33);
  sub_31DAD0(v40);
  if ( v5 )
    sub_339E64(v5);
  free(v8);
}
