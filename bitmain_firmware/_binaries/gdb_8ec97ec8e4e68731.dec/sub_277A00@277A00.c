void __fastcall sub_277A00(const char *a1)
{
  char *v2; // r5
  int v3; // r0
  __int64 v4; // r0

  if ( !strncmp(a1, "/tmp/gdbobj-", 0xCu) )
  {
    v2 = (char *)sub_31E27C("rm -rf ", a1, 0);
    v3 = system(v2);
    if ( v3 == -1 || (v3 & 0x7F) != 0 || (v3 & 0xFF00) != 0 )
    {
      sub_946B0("Could not remove temporary directory %s", a1);
      free(v2);
    }
    else
    {
      free(v2);
    }
  }
  else
  {
    v4 = sub_94700(
           (int)"compile/compile.c",
           207,
           "%s: Assertion `%s' failed.",
           "void do_rmdir(void*)",
           "startswith (dir, TMP_PREFIX)");
    sub_277AB0(v4, (unsigned __int8 *)HIDWORD(v4));
  }
}
