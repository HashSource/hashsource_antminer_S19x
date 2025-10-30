_DWORD *__fastcall sub_72EE4(_DWORD *result, unsigned int a2)
{
  _DWORD *v3; // [sp+4h] [bp-10h]

  v3 = result;
  if ( a2 != -1 && a2 != -2 )
  {
    sub_72CB8(result, a2);
    result = (_DWORD *)sub_75294(v3 + 10);
    if ( (unsigned __int8)result != a2 )
      _assert_fail("c == d", "load.c", 0x11Au, "lex_unget_unsave");
  }
  return result;
}
