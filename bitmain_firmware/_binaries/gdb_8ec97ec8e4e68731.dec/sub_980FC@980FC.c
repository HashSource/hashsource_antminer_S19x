_DWORD *__fastcall sub_980FC(_DWORD *a1, const char *a2)
{
  int v4; // r0
  int v5; // r1
  __int64 v7; // r0
  int v8; // r0
  _DWORD v9[10]; // [sp+Ch] [bp-28h] BYREF

  v4 = sub_337248(a2, 0x4000, 0, v9);
  if ( v4 )
  {
    if ( v4 != 3 )
      sub_946E0("glob could not process pattern '%s'.", a2);
    sub_946E0("Could not find a match for '%s'.", a2);
  }
  if ( v9[0] <= 0 )
  {
    v7 = sub_94700(
           (int)"common/gdb_tilde_expand.c",
           91,
           "%s: Assertion `%s' failed.",
           "gdb::unique_xmalloc_ptr<char> gdb_tilde_expand_up(const char*)",
           "glob.pathc () > 0");
    v8 = sub_336BA8(v9, HIDWORD(v7));
    sub_338FFC(v8);
  }
  *a1 = sub_327254(*(_DWORD *)v9[1]);
  sub_336BA8(v9, v5);
  return a1;
}
