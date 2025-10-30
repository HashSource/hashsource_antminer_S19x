_BYTE *__fastcall sub_F7EC(unsigned __int16 *a1)
{
  int *v2; // r7
  int v3; // r10
  _BYTE *v4; // r11
  _BYTE *v5; // r5
  int v6; // r4
  int v7; // r3
  char *v8; // r2

  v2 = _errno_location();
  v3 = *v2;
  v4 = sub_F658(a1);
  v5 = &lib_stringbuf[128 * lib_nextbuf];
  v6 = ((_BYTE)lib_nextbuf + 1) & 0xF;
  memset(v5, 0, 0x80u);
  v7 = *a1;
  lib_nextbuf = v6;
  if ( v7 == 10 )
    v8 = "[%s]:%hu";
  else
    v8 = "%s:%hu";
  sub_F5F4((int)v5, 0x80u, v8, v4, (unsigned __int16)__rev16(a1[1]));
  *v2 = v3;
  return v5;
}
