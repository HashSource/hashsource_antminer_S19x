_DWORD *__fastcall sub_6F9C4(_DWORD *result, int a2)
{
  _DWORD *v3; // [sp+4h] [bp-10h]

  v3 = result;
  if ( a2 != -1 && a2 != -2 )
  {
    sub_6F790(result, a2);
    result = (_DWORD *)sub_71D94(v3 + 10);
    if ( a2 != (unsigned __int8)result )
      _assert_fail("c == d", "load.c", 0x11Au, "lex_unget_unsave");
  }
  return result;
}
