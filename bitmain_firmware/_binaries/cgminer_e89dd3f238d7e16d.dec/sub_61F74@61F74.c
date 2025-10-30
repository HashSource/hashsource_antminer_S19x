_DWORD *__fastcall sub_61F74(_DWORD *result, int a2)
{
  _DWORD *v3; // [sp+4h] [bp-8h]

  v3 = result;
  if ( a2 != -1 && a2 != -2 )
  {
    --result[9];
    if ( a2 == 10 )
    {
      --result[6];
      result[7] = result[8];
    }
    else
    {
      result = (_DWORD *)sub_64BF8((unsigned __int8)a2);
      if ( result )
        --v3[7];
    }
    if ( !v3[4] )
      _assert_fail("stream->buffer_pos > 0", "load.c", 0xEEu, "stream_unget");
    if ( a2 != *((unsigned __int8 *)v3 + --v3[4] + 8) )
      _assert_fail("stream->buffer[stream->buffer_pos] == c", "load.c", 0xF0u, "stream_unget");
  }
  return result;
}
