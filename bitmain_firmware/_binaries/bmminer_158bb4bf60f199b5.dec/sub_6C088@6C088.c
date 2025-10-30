int __fastcall sub_6C088(_BYTE *a1)
{
  _BYTE *v1; // r3
  int result; // r0
  _BYTE *v3; // lr
  int v4; // r2
  int v5; // t1
  int v6; // r0
  int v7; // r1

  if ( *a1 != 117 )
    _assert_fail("str[0] == 'u'", "3rdparty/jansson-2.6/src/load.c", 0x120u, "decode_unicode_escape");
  v1 = a1;
  result = 0;
  v3 = v1 + 4;
  do
  {
    v5 = (unsigned __int8)*++v1;
    v4 = v5;
    v6 = 16 * result;
    v7 = v5 - 48;
    if ( (unsigned __int8)(v5 - 48) > 9u )
    {
      if ( (unsigned int)(v4 - 97) > 0x19 )
      {
        if ( (unsigned int)(v4 - 65) > 0x19 )
          _assert_fail("0", "3rdparty/jansson-2.6/src/load.c", 0x12Cu, "decode_unicode_escape");
        result = v4 - 55 + v6;
      }
      else
      {
        result = v4 - 87 + v6;
      }
    }
    else
    {
      result = v7 + v6;
    }
  }
  while ( v1 != v3 );
  return result;
}
