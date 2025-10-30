int __fastcall sub_BA20C(int a1, const char *a2, char *a3)
{
  const char *v5; // r8
  size_t v6; // r7
  size_t v7; // r0
  void *v8; // r4
  FILE **v9; // r0
  const char *v10; // r5
  const char *v11; // r0
  char *v12; // r5
  int *v13; // r0
  int v14; // r4
  void (__fastcall *v16)(char *, int, FILE *, void *); // r5
  int *v17; // r0
  const char *v18; // r3
  int v19; // r0
  _DWORD *v20; // r11
  int v21; // r0
  _DWORD *v22; // r10
  int v23; // r9
  const char *v24; // t1
  size_t v25; // r7
  size_t v26; // r0
  void *v27; // r7
  char *v28; // r0
  FILE *v29; // r0
  FILE *v30; // r3
  bool v31; // zf
  int *v32; // r0
  const char *v33; // r3
  int v34; // r0
  _DWORD *v35; // r0
  FILE *v36; // r0
  void *v37; // [sp+Ch] [bp-20h]
  FILE *stream; // [sp+20h] [bp-Ch] BYREF
  FILE *v40; // [sp+24h] [bp-8h] BYREF

  v5 = (const char *)sub_157950(a3);
  v6 = strlen(a2);
  v7 = strlen(v5);
  v8 = sub_93028(v6 + v7 + 1);
  memcpy(v8, a2, v6);
  strcpy((char *)v8 + v6, v5);
  v37 = sub_9253C((int)sub_B9168, (int)v8);
  v9 = sub_967F0(&stream, (int)v8, "r");
  if ( dword_478228 )
  {
    v17 = (int *)sub_242FC8(v9);
    v18 = "exists";
    v19 = *v17;
    if ( !stream )
      v18 = "does not exist";
    sub_2594B0(v19, "auto-load: Attempted file \"%s\" %s.\n", v8, v18);
    if ( stream )
      goto LABEL_3;
  }
  else if ( stream )
  {
    goto LABEL_3;
  }
  v20 = (_DWORD *)sub_B9070((const char *)dword_47822C);
  v21 = sub_25B314();
  if ( dword_478228 )
  {
    v35 = (_DWORD *)sub_242FC8(v21);
    sub_2594B0(
      *v35,
      "auto-load: Searching 'set auto-load scripts-directory' path \"%s\".\n",
      (const char *)dword_47822C);
  }
  if ( v20 && *v20 )
  {
    v22 = v20 + 1;
    v23 = 0;
    while ( 1 )
    {
      v24 = (const char *)v22[1];
      ++v22;
      v25 = strlen(v24);
      v26 = strlen((const char *)v8);
      v27 = sub_93028(v25 + v26 + 1);
      v28 = (char *)stpcpy(v27, v24);
      strcpy(v28, (const char *)v8);
      sub_9253C((int)sub_B9168, (int)v27);
      sub_967F0(&v40, (int)v27, "r");
      v29 = stream;
      v30 = v40;
      v40 = 0;
      v31 = stream == 0;
      stream = v30;
      if ( !v31 )
      {
        fclose(v29);
        v29 = v40;
        if ( v40 )
          v29 = (FILE *)fclose(v40);
      }
      if ( dword_478228 )
      {
        v32 = (int *)sub_242FC8(v29);
        v33 = "does not exist";
        v34 = *v32;
        if ( stream )
          v33 = "exists";
        sub_2594B0(v34, "auto-load: Attempted file \"%s\" %s.\n", v27, v33);
      }
      if ( stream )
        break;
      if ( (unsigned int)++v23 >= *v20 )
        goto LABEL_28;
    }
    v8 = v27;
  }
  else if ( !stream )
  {
LABEL_28:
    v14 = 0;
    goto LABEL_5;
  }
LABEL_3:
  v10 = (const char *)sub_157938(a3);
  v11 = (const char *)sub_1B87A8(a1);
  v12 = (char *)sub_BA030(
                  (char *)v8,
                  (int)"auto-load: Loading %s script \"%s\" by extension for objfile \"%s\".\n",
                  v10,
                  (const char *)v8,
                  v11);
  v13 = sub_BA198(dword_487D2C);
  sub_B97D4(*v13, v12, (const char *)v8, (const char *)v8, a3);
  if ( v12 )
  {
    v16 = (void (__fastcall *)(char *, int, FILE *, void *))((int (__fastcall *)(char *))loc_1579A4)(a3);
    if ( !v16 )
    {
      sub_94700(
        (int)"auto-load.c",
        863,
        "%s: Assertion `%s' failed.",
        "int auto_load_objfile_script_1(objfile*, const char*, const extension_language_defn*)",
        "sourcer != NULL");
      v36 = stream;
      if ( stream )
        v36 = (FILE *)fclose(stream);
      sub_338FFC(v36);
    }
    v16(a3, a1, stream, v8);
  }
  v14 = 1;
LABEL_5:
  sub_92620(v37);
  if ( stream )
    fclose(stream);
  return v14;
}
