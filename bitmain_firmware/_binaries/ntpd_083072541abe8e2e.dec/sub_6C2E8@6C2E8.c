_BYTE *__fastcall sub_6C2E8(unsigned __int16 *a1)
{
  int *v2; // r6
  int v3; // r8
  _BYTE *v4; // r4
  int v5; // r9
  int v6; // r3
  int v8; // r9
  _BYTE *v9; // r11
  char v10; // [sp+Ch] [bp-10h]

  v2 = _errno_location();
  v3 = *v2;
  v4 = &lib_stringbuf[128 * lib_nextbuf];
  v5 = ((_BYTE)lib_nextbuf + 1) & 0xF;
  memset(v4, 0, 0x80u);
  lib_nextbuf = v5;
  if ( !a1 )
  {
    sub_6D4DC(v4);
    goto LABEL_6;
  }
  v6 = *a1;
  if ( v6 == 2 )
    goto LABEL_10;
  if ( v6 != 10 )
  {
    if ( *a1 )
    {
      sub_6C054((int)v4, 0x80u, "(socktoa unknown family %d)", v6);
      goto LABEL_6;
    }
LABEL_10:
    inet_ntop(2, a1 + 2, v4, 0x80u);
    goto LABEL_6;
  }
  inet_ntop(10, a1 + 4, v4, 0x80u);
  v8 = *((_DWORD *)a1 + 6);
  if ( v8 && !strchr(v4, 37) )
  {
    v10 = lib_nextbuf;
    v9 = &lib_stringbuf[128 * lib_nextbuf];
    memset(v9, 0, 0x80u);
    lib_nextbuf = (v10 + 1) & 0xF;
    sub_6C054((int)v9, 0x80u, "%s%%%lu", v4, v8);
    v4 = v9;
    v9[127] = 0;
  }
LABEL_6:
  *v2 = v3;
  return v4;
}
