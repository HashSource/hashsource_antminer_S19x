_DWORD *__fastcall sub_621A8(_DWORD *result, int a2)
{
  _DWORD *v3; // [sp+4h] [bp-10h]

  v3 = result;
  if ( a2 != -1 && a2 != -2 )
  {
    sub_61F74(result, a2);
    result = (_DWORD *)sub_64578(v3 + 10);
    if ( a2 != (unsigned __int8)result )
      _assert_fail("c == d", "load.c", 0x11Au, "lex_unget_unsave");
  }
  return result;
}
