_DWORD *__fastcall sub_12A4C(_DWORD *result, int a2)
{
  _DWORD *v3; // r4
  int v4; // r3
  int v5; // r3
  int v6; // r3

  v3 = result;
  if ( (unsigned int)(a2 + 2) > 1 )
  {
    --result[9];
    if ( a2 == 10 )
    {
      v6 = result[8];
      --result[6];
      result[7] = v6;
    }
    else
    {
      result = (_DWORD *)sub_13BAC((unsigned __int8)a2);
      if ( result )
        --v3[7];
    }
    v4 = v3[4];
    if ( !v4 )
      _assert_fail("stream->buffer_pos > 0", "load.c", 0xDDu, "stream_unget");
    v5 = v4 - 1;
    v3[4] = v5;
    if ( *((unsigned __int8 *)v3 + v5 + 8) != a2 )
      _assert_fail("stream->buffer[stream->buffer_pos] == c", "load.c", 0xDFu, "stream_unget");
  }
  return result;
}
