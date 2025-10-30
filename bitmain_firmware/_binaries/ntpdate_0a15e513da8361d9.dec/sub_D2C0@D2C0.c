char *__fastcall sub_D2C0(unsigned int a1, int a2)
{
  char *v2; // r3
  int v4; // r9
  char *v5; // r4
  size_t v6; // r0

  if ( a2 > 1 )
    return sub_D200(a1);
  v4 = lib_nextbuf;
  v5 = &lib_stringbuf[128 * lib_nextbuf];
  memset(v5, 0, 0x80u);
  lib_stringbuf[128 * v4] = 46;
  v5[5] = 0;
  *(_DWORD *)(v5 + 1) = a1;
  lib_nextbuf = ((_BYTE)v4 + 1) & 0xF;
  v6 = strlen(v5);
  v2 = v5;
  v5[v6] = 46;
  v5[v6 + 1] = 0;
  return v2;
}
