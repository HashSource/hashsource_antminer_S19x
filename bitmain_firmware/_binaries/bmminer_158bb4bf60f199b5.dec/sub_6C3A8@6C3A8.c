_DWORD *__fastcall sub_6C3A8(_DWORD *result, int a2)
{
  _DWORD *v2; // r5

  if ( (unsigned int)(a2 + 2) > 1 )
  {
    v2 = result;
    sub_6C134(result, a2);
    result = (_DWORD *)sub_6D728(v2 + 10);
    if ( result != (_DWORD *)a2 )
      _assert_fail("c == d", "3rdparty/jansson-2.6/src/load.c", 0x10Cu, "lex_unget_unsave");
  }
  return result;
}
