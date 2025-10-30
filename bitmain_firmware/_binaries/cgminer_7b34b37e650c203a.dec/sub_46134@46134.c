int __fastcall sub_46134(_BYTE *a1)
{
  _BYTE *v1; // r3
  int result; // r0
  _BYTE *v3; // lr
  int v4; // r2
  int v5; // t1
  int v6; // r0
  int v7; // r1

  if ( *a1 != 117 )
    _assert_fail("str[0] == 'u'", "load.c", 0x135u, "decode_unicode_escape");
  v1 = a1;
  result = 0;
  v3 = v1 + 4;
  while ( 1 )
  {
    v5 = (unsigned __int8)*++v1;
    v4 = v5;
    v6 = 16 * result;
    v7 = v5 - 48;
    if ( (unsigned __int8)(v5 - 48) > 9u )
      break;
    result = v7 + v6;
LABEL_10:
    if ( v1 == v3 )
      return result;
  }
  if ( (unsigned int)(v4 - 97) <= 0x19 )
  {
    result = v4 - 87 + v6;
    goto LABEL_10;
  }
  if ( (unsigned int)(v4 - 65) <= 0x19 )
  {
    result = v4 - 55 + v6;
    goto LABEL_10;
  }
  return -1;
}
