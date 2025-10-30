int __fastcall sub_31D5C(_DWORD *a1, int a2)
{
  int v4; // r4
  int v5; // r6
  void *v7; // r0
  void *ptr; // [sp+Ch] [bp-4h] BYREF

  if ( a2 && !off_489C6C() )
  {
    sub_94700(
      "solib-svr4.c",
      1272,
      "%s: Assertion `%s' failed.",
      "int svr4_current_sos_via_xfer_libraries(svr4_library_list*, const char*)",
      "annex == NULL || target_augmented_libraries_svr4_read ()");
    v7 = ptr;
    if ( ptr )
      free(ptr);
    sub_338FFC(v7);
  }
  sub_230590(&ptr, &dword_4899A0, 13, a2);
  v4 = (int)ptr;
  if ( ptr )
  {
    v5 = sub_9253C(sub_2FD74, a1);
    a1[1] = a1;
    *a1 = 0;
    a1[2] = 0;
    if ( sub_274C9C("target library list", "library-list-svr4.dtd", &off_34C3CC, v4, a1) )
    {
      sub_92620(v5);
      v4 = 0;
    }
    else
    {
      sub_92640(v5);
      v4 = 1;
    }
    if ( ptr )
      free(ptr);
  }
  return v4;
}
