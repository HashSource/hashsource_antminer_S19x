int __fastcall sub_EFD78(int result, int a2, int a3)
{
  if ( a3 )
  {
    if ( !*(_BYTE *)(result + 36) )
      return result;
    result = sub_94700(
               (int)"cli-out.c",
               41,
               "%s: Assertion `%s' failed.",
               "virtual void cli_ui_out::do_table_begin(int, int, const char*)",
               "!m_suppress_output");
  }
  *(_BYTE *)(result + 36) = 1;
  return result;
}
