_BYTE *__fastcall sub_CDB0(unsigned int a1)
{
  unsigned int v1; // r5
  _BYTE *v2; // r8
  int v3; // r4

  v1 = bswap32(a1);
  v2 = &lib_stringbuf[128 * lib_nextbuf];
  v3 = ((_BYTE)lib_nextbuf + 1) & 0xF;
  memset(v2, 0, 0x80u);
  lib_nextbuf = v3;
  sub_F5F4(v2, 128, "%lu.%lu.%lu.%lu", HIBYTE(v1), BYTE2(v1), BYTE1(v1), (unsigned __int8)v1);
  return v2;
}
