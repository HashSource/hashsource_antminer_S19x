int *__fastcall sub_97FB0(int *a1, const char *a2)
{
  int v4; // r0
  void *v5; // r6
  const char *v6; // r8
  size_t v7; // r0
  int v8; // r1
  size_t v9; // r5
  int v11; // r0
  size_t v12; // r3
  __int64 v13; // r0
  int v14; // r0
  size_t v15; // [sp+8h] [bp-28h] BYREF
  _DWORD v16[9]; // [sp+Ch] [bp-24h] BYREF

  v4 = sub_337248(a2, 0x4000, 0, v16);
  if ( v4 )
  {
    if ( v4 != 3 )
      sub_946E0("glob could not process pattern '%s'.", a2);
    sub_946E0("Could not find a match for '%s'.", a2);
  }
  if ( v16[0] <= 0 )
  {
    v13 = sub_94700(
            (int)"common/gdb_tilde_expand.c",
            76,
            "%s: Assertion `%s' failed.",
            "std::__cxx11::string gdb_tilde_expand(const char*)",
            "glob.pathc () > 0");
    v14 = sub_336BA8(v16, HIDWORD(v13));
    sub_338FFC(v14);
  }
  v5 = a1 + 2;
  v6 = *(const char **)v16[1];
  *a1 = (int)(a1 + 2);
  if ( !v6 )
    sub_33D0B8("basic_string::_M_construct null not valid");
  v7 = strlen(v6);
  v9 = v7;
  v15 = v7;
  if ( v7 > 0xF )
  {
    v11 = sub_33B2BC(a1, &v15, 0);
    v12 = v15;
    v5 = (void *)v11;
    *a1 = v11;
    a1[2] = v12;
LABEL_12:
    memcpy(v5, v6, v9);
    v9 = v15;
    v5 = (void *)*a1;
    goto LABEL_9;
  }
  if ( v7 != 1 )
  {
    if ( !v7 )
      goto LABEL_9;
    goto LABEL_12;
  }
  *((_BYTE *)a1 + 8) = *v6;
LABEL_9:
  a1[1] = v9;
  *((_BYTE *)v5 + v9) = 0;
  sub_336BA8(v16, v8);
  return a1;
}
