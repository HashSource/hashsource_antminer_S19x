_DWORD *__fastcall sub_6C134(_DWORD *result, int a2)
{
  _DWORD *v2; // r4
  int v4; // r2
  int v5; // r3
  int v6; // r3

  if ( (unsigned int)(a2 + 2) > 1 )
  {
    v2 = result;
    --result[9];
    if ( a2 == 10 )
    {
      v4 = result[8];
      --result[6];
      result[7] = v4;
    }
    else
    {
      result = (_DWORD *)sub_6DA38((unsigned __int8)a2);
      if ( result )
        --v2[7];
    }
    v5 = v2[4];
    if ( !v5 )
      _assert_fail("stream->buffer_pos > 0", "3rdparty/jansson-2.6/src/load.c", 0xE0u, "stream_unget");
    v6 = v5 - 1;
    v2[4] = v6;
    if ( *((unsigned __int8 *)v2 + v6 + 8) != a2 )
      _assert_fail("stream->buffer[stream->buffer_pos] == c", "3rdparty/jansson-2.6/src/load.c", 0xE2u, "stream_unget");
  }
  return result;
}
