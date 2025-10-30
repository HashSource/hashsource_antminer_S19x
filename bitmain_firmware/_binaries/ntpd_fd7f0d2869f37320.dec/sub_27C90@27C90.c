_DWORD *__fastcall sub_27C90(int a1, int a2, unsigned int a3, const char *a4)
{
  unsigned int v7; // r9
  size_t v8; // r0
  unsigned int v9; // r6
  int v10; // r4
  _DWORD *v11; // r0
  _DWORD *v12; // r3
  _DWORD *v14; // [sp+4h] [bp-10h]

  v7 = sub_268FC();
  if ( a4 )
  {
    v8 = strlen(a4);
    v9 = v8;
    if ( v8 > 0xFFE6 )
      sub_6FC54("ntp_crypto.c", 1725, 2, "slen < (65535 - (6 * 4))");
    v10 = v8 + 24;
  }
  else
  {
    v9 = 0;
    v10 = 24;
  }
  v11 = (_DWORD *)sub_64B04(0, v10, 0, 1);
  v12 = v11;
  if ( a2 )
  {
    if ( (_WORD)a2 )
      sub_6FC54("ntp_crypto.c", 1733, 0, "0 == (opcode & ~0xffff0000)");
    *v11 = bswap32(v10 + a2);
    v11[1] = bswap32(a3);
    v11[2] = bswap32(v7);
    if ( !a4 )
      v11[4] = 0;
    v11[3] = hostval;
    if ( a4 )
    {
      v11[4] = bswap32(v9);
      v14 = v11;
      memcpy(v11 + 5, a4, v9);
      return v14;
    }
  }
  return v12;
}
