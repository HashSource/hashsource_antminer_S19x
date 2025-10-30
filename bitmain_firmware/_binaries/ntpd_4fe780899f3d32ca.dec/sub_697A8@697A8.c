_BYTE *__fastcall sub_697A8(unsigned int a1, int a2)
{
  int v4; // r11
  _BYTE *v5; // r5
  size_t v6; // r0
  _BYTE *v7; // r3

  if ( a2 > 1 )
    return sub_696EC(a1);
  v4 = lib_nextbuf;
  v5 = &lib_stringbuf[128 * lib_nextbuf];
  memset(v5, 0, 0x80u);
  lib_stringbuf[128 * v4] = 46;
  *(_DWORD *)(v5 + 1) = a1;
  v5[5] = 0;
  lib_nextbuf = ((_BYTE)v4 + 1) & 0xF;
  v6 = strlen(v5);
  v5[v6] = 46;
  v7 = &v5[v6];
  v7[1] = 0;
  return v5;
}
