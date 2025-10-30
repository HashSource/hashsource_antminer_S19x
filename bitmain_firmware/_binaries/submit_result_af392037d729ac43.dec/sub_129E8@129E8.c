int __fastcall sub_129E8(_BYTE *a1)
{
  int v1; // r1
  int v2; // r3
  int v3; // r2
  int v4; // r1

  if ( *a1 != 117 )
    _assert_fail("str[0] == 'u'", "load.c", 0x116u, "decode_unicode_escape");
  v1 = 0;
  v2 = 1;
  while ( 1 )
  {
    v3 = (unsigned __int8)a1[v2];
    v4 = 16 * v1;
    if ( (unsigned __int8)(v3 - 48) > 9u )
      break;
    v1 = v3 - 48 + v4;
LABEL_10:
    if ( ++v2 == 5 )
      return v1;
  }
  if ( (unsigned int)(v3 - 97) <= 0x19 )
  {
    v1 = v3 - 87 + v4;
    goto LABEL_10;
  }
  if ( (unsigned int)(v3 - 65) <= 0x19 )
  {
    v1 = v3 - 55 + v4;
    goto LABEL_10;
  }
  return -1;
}
