char *__fastcall sub_6A66C(unsigned int a1)
{
  unsigned int v1; // r6
  char *v2; // r5
  int v3; // r4

  v1 = bswap32(a1);
  v2 = (char *)&lib_stringbuf + 128 * lib_nextbuf;
  v3 = ((_BYTE)lib_nextbuf + 1) & 0xF;
  memset(v2, 0, 0x80u);
  lib_nextbuf = v3;
  sub_6D00C(v2, 128, "%lu.%lu.%lu.%lu", HIBYTE(v1), BYTE2(v1), BYTE1(v1), (unsigned __int8)v1);
  return v2;
}
