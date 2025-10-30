int __fastcall sub_21404C(int a1, int a2)
{
  int v4; // r5
  const char **v5; // r7
  const char *v6; // r8
  int v7; // r0
  const char *v8; // r1
  unsigned int v9; // r7
  _DWORD *v10; // r4
  const char *v11; // r0
  __int64 v12; // r0
  void *v14; // r7
  const char *v15; // r0
  const char **v16; // [sp+Ch] [bp-4h] BYREF

  v4 = dword_487D2C;
  sub_243C34(a1);
  if ( !a1 )
    sub_946E0("remove-symbol-file: no symbol file provided");
  v16 = 0;
  sub_25B0DC(&v16, a1);
  v5 = v16;
  if ( !v16 )
  {
    v12 = sub_94700(
            (int)"utils.h",
            203,
            "%s: Assertion `%s' failed.",
            "char* gdb_argv::operator[](int)",
            "m_argv != NULL");
    goto LABEL_29;
  }
  v6 = *v16;
  v7 = strcmp(*v16, "-a");
  v8 = v5[1];
  if ( v7 )
  {
    if ( v8 )
      sub_946E0("Junk after %s", v6);
    v14 = (void *)sub_29B910(v6);
    v10 = *(_DWORD **)(dword_487D2C + 36);
    if ( !v10 )
    {
LABEL_17:
      if ( v14 )
        free(v14);
LABEL_19:
      sub_946E0("No symbol file found");
    }
    while ( 1 )
    {
      if ( (v10[3] & 0xA) == 0xA && v10[4] == v4 )
      {
        v15 = (const char *)sub_1B87A8((int)v10);
        if ( !j_strcmp((const char *)v14, v15) )
          break;
      }
      v10 = (_DWORD *)*v10;
      if ( !v10 )
        goto LABEL_17;
    }
    if ( v14 )
      free(v14);
  }
  else
  {
    if ( !v8 )
      sub_946E0("Missing address argument");
    if ( v5[2] )
      sub_946E0("Junk after %s", v8);
    v9 = sub_14CB9C((int)v5[1]);
    v10 = *(_DWORD **)(dword_487D2C + 36);
    if ( !v10 )
      goto LABEL_19;
    while ( (v10[3] & 0xA) != 0xA || v10[4] != v4 || !sub_1B8630(v9, (int)v10) )
    {
      v10 = (_DWORD *)*v10;
      if ( !v10 )
        goto LABEL_19;
    }
  }
  if ( a2 )
  {
    v11 = (const char *)sub_1B87A8((int)v10);
    if ( !sub_25A3E4("Remove symbol table from file \"%s\"? ", v11) )
LABEL_29:
      sub_946E0("Not confirmed.", HIDWORD(v12));
  }
  ((void (__fastcall *)(_DWORD *))loc_1B7600)(v10);
  sub_33AC04(v10);
  sub_213188(0);
  return sub_31DAD0(v16);
}
