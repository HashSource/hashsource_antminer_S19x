int sub_1864D4()
{
  int result; // r0

  if ( *(_DWORD *)(dword_487668 + 36) && *(_DWORD *)(dword_487668 + 28) && *(_DWORD *)(dword_487668 + 68) )
  {
    if ( dword_487668 != dword_48768C )
    {
      sub_94700(
        (int)"event-top.c",
        325,
        "%s: Assertion `%s' failed.",
        "void gdb_rl_callback_handler_reinstall()",
        "current_ui == main_ui");
      JUMPOUT(0x153DDC);
    }
    result = dword_487694;
    if ( !dword_487694 )
      JUMPOUT(0x153CE8);
  }
  return result;
}
