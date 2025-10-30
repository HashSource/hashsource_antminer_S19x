void __fastcall sub_B9928(char *a1, int a2)
{
  size_t v4; // r0
  size_t v5; // r4
  int v6; // r3
  char *v7; // r2
  bool v8; // zf
  int v9; // r3
  int v10; // t1
  bool v11; // zf
  int v12; // r4
  __int64 v13; // r0

  if ( !a1 )
    goto LABEL_22;
  v4 = strlen(a1);
  if ( !v4 )
    goto LABEL_22;
  v5 = v4 - 1;
  v6 = (unsigned __int8)a1[v4 - 1];
  v7 = &a1[v4 - 1];
  v8 = v6 == 32;
  if ( v6 != 32 )
    v8 = v6 == 9;
  if ( v8 )
  {
    while ( v5 )
    {
      v10 = (unsigned __int8)*--v7;
      v9 = v10;
      v11 = v10 == 32;
      if ( v10 != 32 )
        v11 = v9 == 9;
      if ( !v11 )
        goto LABEL_12;
      --v5;
    }
LABEL_22:
    sub_946E0("Valid is only global 'set auto-load no'; otherwise check the auto-load sub-commands.");
  }
  v5 = v4;
LABEL_12:
  if ( strncmp(a1, "off", v5) && strncmp(a1, "0", v5) && strncmp(a1, "no", v5) && strncmp(a1, "disable", v5) )
    goto LABEL_22;
  v12 = dword_478238;
  if ( dword_478238 || (sub_B98CC(), (v12 = dword_478238) != 0) )
  {
    do
    {
      if ( (*(_BYTE *)(v12 + 13) & 0x1E) == 0 )
      {
        if ( (*(_WORD *)(v12 + 12) & 0x180) != 0x80 )
        {
          v13 = sub_94700(
                  (int)"auto-load.c",
                  1467,
                  "%s: Assertion `%s' failed.",
                  "void set_auto_load_cmd(const char*, int)",
                  "list->type == set_cmd");
          sub_B9A9C(v13, HIDWORD(v13));
          return;
        }
        sub_59B84(a1, a2, v12);
      }
      v12 = *(_DWORD *)v12;
    }
    while ( v12 );
  }
}
