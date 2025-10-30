_BYTE *__fastcall sub_6D454(unsigned __int16 *a1)
{
  int *v2; // r7
  int v3; // r10
  _BYTE *v4; // r11
  _BYTE *v5; // r5
  int v6; // r4

  v2 = _errno_location();
  v3 = *v2;
  v4 = sub_6D2C0(a1);
  v5 = &lib_stringbuf[128 * lib_nextbuf];
  v6 = ((_BYTE)lib_nextbuf + 1) & 0xF;
  memset(v5, 0, 0x80u);
  lib_nextbuf = v6;
  if ( *a1 == 10 )
    sub_6D00C((int)v5, 0x80u, "[%s]:%hu", v4, HIBYTE(a1[1]) | (unsigned __int16)(a1[1] << 8));
  else
    sub_6D00C((int)v5, 0x80u, "%s:%hu", v4, HIBYTE(a1[1]) | (unsigned __int16)(a1[1] << 8));
  *v2 = v3;
  return v5;
}
