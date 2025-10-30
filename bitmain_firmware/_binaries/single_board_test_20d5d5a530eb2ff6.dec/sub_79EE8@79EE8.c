_DWORD *__fastcall sub_79EE8(_DWORD *result, int a2, int a3)
{
  _DWORD *v4; // r4
  int v5; // r3
  int v6; // r3
  int v7; // r3
  int v8; // r3

  v4 = result;
  if ( (unsigned int)(a2 + 2) > 1 )
  {
    v5 = result[9] - 1;
    result[9] = v5;
    if ( a2 == 10 )
    {
      v8 = result[8];
      --result[6];
      result[7] = v8;
    }
    else
    {
      result = (_DWORD *)sub_7B044((unsigned __int8)a2, a2, a3, v5);
      if ( result )
        --v4[7];
    }
    v6 = v4[4];
    if ( !v6 )
      _assert_fail("stream->buffer_pos > 0", "load.c", 0xDDu, "stream_unget");
    v7 = v6 - 1;
    v4[4] = v7;
    if ( *((unsigned __int8 *)v4 + v7 + 8) != a2 )
      _assert_fail("stream->buffer[stream->buffer_pos] == c", "load.c", 0xDFu, "stream_unget");
  }
  return result;
}
