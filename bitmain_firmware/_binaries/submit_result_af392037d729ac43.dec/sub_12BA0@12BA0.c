_DWORD *__fastcall sub_12BA0(_DWORD *result, int a2)
{
  _DWORD *v3; // r5

  v3 = result;
  if ( (unsigned int)(a2 + 2) > 1 )
  {
    sub_12A4C(result, a2);
    result = (_DWORD *)sub_139A4(v3 + 10);
    if ( result != (_DWORD *)a2 )
      _assert_fail("c == d", "load.c", 0xFFu, "lex_unget_unsave");
  }
  return result;
}
