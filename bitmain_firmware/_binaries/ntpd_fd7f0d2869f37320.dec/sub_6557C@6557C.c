char *__fastcall sub_6557C(unsigned int a1)
{
  char *v3; // r4
  int v4; // r7

  if ( a1 <= 8 )
    return (char *)*(&off_B5BD8 + a1);
  v3 = (char *)&lib_stringbuf + 128 * lib_nextbuf;
  v4 = ((_BYTE)lib_nextbuf + 1) & 0xF;
  memset(v3, 0, 0x80u);
  lib_nextbuf = v4;
  sub_6D00C(v3, 128, "mode#%zu", a1);
  return v3;
}
