_BYTE *__fastcall sub_6DC90(int a1, const char *a2, int *a3, int a4)
{
  _BYTE *v7; // r11
  char v8; // r5
  int v9; // r7
  const char **v10; // r4
  int v11; // r6
  const char *v12; // r3
  const char *v13; // r2
  unsigned int v14; // r0
  const char *v16; // r3
  _BYTE *v18; // [sp+Ch] [bp-20h]
  int *v19; // [sp+14h] [bp-18h]
  int v20; // [sp+18h] [bp-14h]

  v19 = _errno_location();
  v20 = *v19;
  v18 = &lib_stringbuf[128 * lib_nextbuf];
  v7 = v18 + 128;
  v8 = lib_nextbuf + 1;
  v9 = (int)v18;
  memset(v18, 0, 0x80u);
  lib_nextbuf = v8 & 0xF;
  if ( !a4 )
    return v18;
  v10 = (const char **)(a3 + 1);
  v11 = 0;
  v12 = byte_99528;
  while ( 1 )
  {
    v13 = *v10;
    if ( (a1 & (unsigned int)*(v10 - 1)) == 0 )
      v13 = v10[1];
    if ( !v13 )
      goto LABEL_8;
    v14 = sub_6D00C(v9, (unsigned int)&v7[-v9], "%s%s", v12, v13);
    if ( (unsigned int)&v7[-v9] <= v14 )
      break;
    v12 = a2;
    v9 += v14;
LABEL_8:
    ++v11;
    v10 += 3;
    if ( v11 == a4 )
      return v18;
  }
  if ( a3 == &off_B5C48 )
  {
    v16 = "peer_st";
  }
  else if ( a3 == (int *)&unk_B5C84 )
  {
    v16 = "kern_st";
  }
  else
  {
    v16 = byte_99528;
  }
  sub_6D00C((int)v18, 0x80u, "decode_bitflags(%s) can't decode 0x%x in %d bytes", v16, a1, 128);
  *v19 = v20;
  return v18;
}
