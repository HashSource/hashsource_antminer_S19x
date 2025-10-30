int __fastcall sub_20C86C(int *a1, int a2, int a3, int a4)
{
  _BOOL4 v4; // r3
  int v7; // r0
  __int64 v8; // r0

  v4 = a4 == 0;
  if ( !a2 )
    v4 = 0;
  if ( a3 )
    v4 = 0;
  if ( !v4 )
    return sub_15DDFC((int)a1) != a3;
  if ( sub_15D6E0(a1) )
  {
    v7 = sub_15D6E0(a1);
    if ( sub_15DA8C(v7) == 2 )
      return 0;
  }
  else
  {
    if ( sub_191058(dword_4878EC, qword_4878F0, SHIDWORD(qword_4878F0)) > 0 )
      return 0;
    sub_94700(
      (int)"stack.c",
      137,
      "%s: Assertion `%s' failed.",
      "int frame_show_address(frame_info*, symtab_and_line)",
      "inline_skipped_frames (inferior_ptid) > 0");
  }
  v8 = sub_94700(
         (int)"stack.c",
         139,
         "%s: Assertion `%s' failed.",
         "int frame_show_address(frame_info*, symtab_and_line)",
         "get_frame_type (get_next_frame (frame)) == INLINE_FRAME");
  return sub_20C94C(v8, HIDWORD(v8));
}
