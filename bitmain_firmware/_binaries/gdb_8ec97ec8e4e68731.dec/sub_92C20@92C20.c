void __fastcall __noreturn sub_92C20(int a1, int a2, int a3)
{
  void *v4; // r0
  _DWORD *v5; // r0
  _DWORD *v6; // r0

  v4 = sub_92614();
  sub_92620(v4);
  if ( a1 != -2 )
  {
    if ( a1 != -1 )
      sub_94700(
        "common/common-exceptions.c",
        306,
        "%s: %s",
        "void throw_exception_cxx(gdb_exception)",
        "invalid return reason");
    v5 = (_DWORD *)sub_33AB64(12);
    *v5 = a1;
    v5[1] = a2;
    v5[2] = a3;
    sub_33A780(v5, &`typeinfo for'gdb_exception_RETURN_MASK_ERROR, 0);
  }
  v6 = (_DWORD *)sub_33AB64(12);
  *v6 = -2;
  v6[1] = a2;
  v6[2] = a3;
  sub_33A780(v6, &`typeinfo for'gdb_exception_RETURN_MASK_QUIT, 0);
}
