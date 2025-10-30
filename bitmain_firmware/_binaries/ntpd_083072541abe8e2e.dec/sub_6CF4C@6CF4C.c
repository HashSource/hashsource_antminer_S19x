_BYTE *__fastcall sub_6CF4C(int a1)
{
  _BYTE *v2; // r5
  int v3; // r4
  const char *v4; // r3

  v2 = &lib_stringbuf[128 * lib_nextbuf];
  v3 = ((_BYTE)lib_nextbuf + 1) & 0xF;
  memset(v2, 0, 0x80u);
  lib_nextbuf = v3;
  if ( a1 == 1 )
    v4 = byte_97F7C;
  else
    v4 = "s";
  sub_6C054((int)v2, 0x80u, "%d event%s", a1, v4);
  return v2;
}
