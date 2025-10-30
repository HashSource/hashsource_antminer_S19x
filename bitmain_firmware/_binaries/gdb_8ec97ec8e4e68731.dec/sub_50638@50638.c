void __fastcall sub_50638(char *a1)
{
  char *v2; // r4
  const char **v3; // r5
  const char *v4; // r4
  int v5; // r7
  const char *v6; // t1
  const char **v7; // r6
  int v8; // r4
  const char *v9; // t1
  const char *v10; // r1
  int v11; // r4
  int v12; // r6
  const char *v13; // r9
  const char *v14; // r10
  __int64 v15; // r0
  int v16; // r10
  int v17; // r0
  int v18; // r6
  __int64 v19; // r0
  int v20; // r0
  int v21; // r0
  void *v22; // r0
  const char **v23; // [sp+8h] [bp-88h] BYREF
  _DWORD *v24; // [sp+Ch] [bp-84h] BYREF
  void *v25; // [sp+10h] [bp-80h] BYREF
  void *v26; // [sp+14h] [bp-7Ch] BYREF
  void *v27; // [sp+18h] [bp-78h] BYREF
  _BYTE v28[16]; // [sp+20h] [bp-70h] BYREF
  void *v29; // [sp+30h] [bp-60h] BYREF
  _BYTE v30[16]; // [sp+38h] [bp-58h] BYREF
  void *v31; // [sp+48h] [bp-48h] BYREF
  char v32; // [sp+50h] [bp-40h] BYREF
  void *v33; // [sp+60h] [bp-30h] BYREF
  char v34; // [sp+68h] [bp-28h] BYREF
  void *ptr; // [sp+78h] [bp-18h] BYREF
  char v36; // [sp+80h] [bp-10h] BYREF

  if ( !a1 || (v2 = strchr(a1, 61)) == 0 )
    sub_946E0("Usage: alias [-a] [--] ALIAS = COMMAND");
  v27 = v28;
  sub_4FEDC(&v27, a1, (int)v2);
  v23 = 0;
  sub_25B0DC(&v23, v27);
  v24 = 0;
  sub_25B0DC(&v24, v2 + 1);
  v3 = v23;
  v4 = *v23;
  if ( !*v23 )
    goto LABEL_44;
  v5 = 0;
  while ( !strcmp(v4, "-a") )
  {
    v6 = v3[1];
    ++v3;
    v4 = v6;
    v5 = 1;
    if ( !v6 )
      goto LABEL_44;
  }
  if ( !strcmp(v4, "--") )
    ++v3;
  if ( !*v3 )
    goto LABEL_44;
  if ( !v24 )
  {
    v15 = sub_94700("./utils.h", 203, "%s: Assertion `%s' failed.", "char* gdb_argv::operator[](int)", "m_argv != NULL");
    goto LABEL_47;
  }
  if ( !*v24 || !**v3 || !*(_BYTE *)*v24 )
LABEL_44:
    sub_946E0("Usage: alias [-a] [--] ALIAS = COMMAND");
  v7 = v3;
  v8 = 0;
  do
  {
    if ( !sub_53FE8() )
    {
      v10 = *v7;
      if ( !v8 )
        sub_946E0("Invalid command name: %s", v10);
      sub_946E0("Invalid command element name: %s", v10);
    }
    v9 = v7[1];
    ++v7;
    ++v8;
  }
  while ( v9 );
  v11 = sub_31E100(v3);
  v12 = sub_31E100(v24);
  sub_504F0((int)&v29, (int)v24, v12);
  v13 = (const char *)v29;
  if ( !sub_4F34C((unsigned __int8 *)v29) )
    sub_946E0("Invalid command to alias to: %s", v13);
  sub_504F0((int)&v31, (int)v3, v11);
  v14 = (const char *)v31;
  if ( sub_4F34C((unsigned __int8 *)v31) )
    sub_946E0("Alias already exists: %s", v14);
  if ( v11 == 1 )
  {
    v21 = sub_327254(*v3);
    sub_547B0(v21, v13, 8, v5);
    goto LABEL_32;
  }
  if ( v11 != v12 )
LABEL_47:
    sub_946E0("Mismatched command length between ALIAS and COMMAND.", HIDWORD(v15));
  sub_504F0((int)&v33, (int)v3, v11 - 1);
  v16 = v12 - 1;
  sub_504F0((int)&ptr, (int)v3, v12 - 1);
  v26 = ptr;
  v25 = v33;
  v17 = sub_5431C(&v26, dword_474744, 0, 1);
  v18 = v17;
  if ( (unsigned int)(v17 - 1) > 0xFFFFFFFD )
  {
    sub_94700(
      "cli/cli-cmds.c",
      1481,
      "%s: Assertion `%s' failed.",
      "void alias_command(const char*, int)",
      "c_command != NULL && c_command != (struct cmd_list_element *) -1");
    goto LABEL_49;
  }
  if ( !*(_DWORD *)(v17 + 52) )
  {
LABEL_49:
    v19 = sub_94700(
            "cli/cli-cmds.c",
            1482,
            "%s: Assertion `%s' failed.",
            "void alias_command(const char*, int)",
            "c_command->prefixlist != NULL");
LABEL_50:
    sub_946E0("ALIAS and COMMAND prefixes do not match.", HIDWORD(v19));
  }
  if ( v17 != sub_5431C(&v25, dword_474744, 0, 1) )
    goto LABEL_50;
  v20 = sub_327254((&v3[v11])[-1]);
  if ( !v24 )
  {
    sub_94700("./utils.h", 203, "%s: Assertion `%s' failed.", "char* gdb_argv::operator[](int)", "m_argv != NULL");
    if ( v29 != v30 )
      sub_339E64(v29);
    sub_31DAD0(v24);
    sub_31DAD0(v23);
    v22 = v27;
    if ( v27 != v28 )
      sub_339E64(v27);
    sub_338FFC(v22);
  }
  sub_54724(v20, v24[v16], 8, v5, *(_DWORD *)(v18 + 52));
  if ( ptr != &v36 )
    sub_339E64(ptr);
  if ( v33 != &v34 )
    sub_339E64(v33);
LABEL_32:
  if ( v31 != &v32 )
    sub_339E64(v31);
  if ( v29 != v30 )
    sub_339E64(v29);
  sub_31DAD0(v24);
  sub_31DAD0(v23);
  if ( v27 != v28 )
    sub_339E64(v27);
}
