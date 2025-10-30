int sub_153BC4()
{
  int result; // r0

  if ( dword_487668 != dword_48768C )
  {
    sub_94700(
      (int)"event-top.c",
      296,
      "%s: Assertion `%s' failed.",
      "void gdb_rl_callback_handler_remove()",
      "current_ui == main_ui");
    JUMPOUT(0x153C24);
  }
  result = sub_293A40();
  dword_487694 = 0;
  return result;
}
