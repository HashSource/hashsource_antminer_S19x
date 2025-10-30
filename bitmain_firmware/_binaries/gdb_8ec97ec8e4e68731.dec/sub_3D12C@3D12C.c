int sub_3D12C()
{
  int v0; // r0

  v0 = sub_17FB94();
  if ( dword_471BA8 )
  {
    sub_94700("fork-child.c", 66, "%s: Assertion `%s' failed.", "void prefork_hook(const char*)", "saved_ui == NULL");
    JUMPOUT(0x3D194);
  }
  dword_471BA8 = dword_487668;
  return sub_27E884(v0);
}
