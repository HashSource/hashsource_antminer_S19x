_DWORD *__fastcall sub_2787C(int a1, int a2, unsigned int a3, char *s)
{
  unsigned int v6; // r4
  size_t v8; // r0
  unsigned int v9; // r8
  int v10; // r5
  _DWORD *v11; // r0
  _DWORD *v12; // r3
  _DWORD *v14; // [sp+4h] [bp-18h]
  _DWORD v15[2]; // [sp+Ch] [bp-10h] BYREF

  v6 = 0;
  v15[1] = 0;
  v15[0] = 0;
  if ( sys_leap != 3 )
  {
    sub_5F724(v15);
    v6 = v15[0];
  }
  if ( s )
  {
    v8 = strlen(s);
    v9 = v8;
    if ( v8 > 0xFFE6 )
      sub_6ECC0("ntp_crypto.c", 1725, 2, "slen < (65535 - (6 * 4))");
    v10 = v8 + 24;
  }
  else
  {
    v9 = 0;
    v10 = 24;
  }
  v11 = (_DWORD *)sub_63BA4(0, v10, 0, 1);
  v12 = v11;
  if ( a2 )
  {
    if ( (_WORD)a2 )
      sub_6ECC0("ntp_crypto.c", 1733, 0, "0 == (opcode & ~0xffff0000)");
    *v11 = bswap32(v10 + a2);
    v11[1] = bswap32(a3);
    v11[2] = bswap32(v6);
    if ( !s )
      v11[4] = 0;
    v11[3] = hostval;
    if ( s )
    {
      v11[4] = bswap32(v9);
      v14 = v11;
      memcpy(v11 + 5, s, v9);
      return v14;
    }
  }
  return v12;
}
