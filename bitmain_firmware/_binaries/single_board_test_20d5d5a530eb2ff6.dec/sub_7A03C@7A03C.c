_DWORD *__fastcall sub_7A03C(_DWORD *result, int a2, int a3)
{
  _DWORD *v4; // r5

  v4 = result;
  if ( (unsigned int)(a2 + 2) > 1 )
  {
    sub_79EE8(result, a2, a3);
    result = (_DWORD *)sub_7AE40(v4 + 10);
    if ( result != (_DWORD *)a2 )
      _assert_fail("c == d", "load.c", 0xFFu, "lex_unget_unsave");
  }
  return result;
}
