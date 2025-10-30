int sub_152664()
{
  int result; // r0
  __int64 v1; // r0

  result = dword_487330;
  if ( dword_487330 || (result = dword_48732C, (dword_487330 = dword_48732C) != 0) )
  {
    dword_487330 = *(_DWORD *)(result + 24);
    if ( !dword_487330 )
      dword_487330 = dword_48732C;
  }
  else
  {
    v1 = sub_94700(
           (int)"event-loop.c",
           550,
           "%s: Assertion `%s' failed.",
           "file_handler* get_next_file_handler_to_handle_and_advance()",
           "curr_next != NULL");
    return sub_1526D4(v1, HIDWORD(v1));
  }
  return result;
}
