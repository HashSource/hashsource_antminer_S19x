_DWORD *__fastcall sub_4644C(_DWORD *result, int a2)
{
  _DWORD *v2; // r5

  if ( (unsigned int)(a2 + 2) > 1 )
  {
    v2 = result;
    sub_461C8(result, a2);
    result = (_DWORD *)sub_479A0(v2 + 10);
    if ( result != (_DWORD *)a2 )
      _assert_fail("c == d", "load.c", 0x11Au, "lex_unget_unsave");
  }
  return result;
}
