_BYTE *__fastcall sub_64648(unsigned int a1)
{
  _BYTE *v2; // r4
  int v4; // r7

  if ( a1 <= 8 )
    return *(&off_B4BD8 + a1);
  v2 = &lib_stringbuf[128 * lib_nextbuf];
  v4 = ((_BYTE)lib_nextbuf + 1) & 0xF;
  memset(v2, 0, 0x80u);
  lib_nextbuf = v4;
  sub_6C054(v2, 128, "mode#%zu", a1);
  return v2;
}
