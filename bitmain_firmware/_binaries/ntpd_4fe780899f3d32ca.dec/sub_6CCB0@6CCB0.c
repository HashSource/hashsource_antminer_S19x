_BYTE *__fastcall sub_6CCB0(int a1, const char *a2, int *a3, int a4)
{
  int *v5; // r4
  int *v6; // r7
  _BYTE *v7; // r9
  int v8; // r6
  _BYTE *v9; // r10
  int v10; // r6
  const char *v11; // r3
  const char *v12; // r2
  unsigned int v13; // r0
  const char *v15; // r3
  int *v17; // [sp+14h] [bp-18h]
  int v18; // [sp+18h] [bp-14h]

  v5 = a3;
  v6 = &a3[3 * a4];
  v17 = _errno_location();
  v18 = *v17;
  v7 = &lib_stringbuf[128 * lib_nextbuf];
  v8 = ((_BYTE)lib_nextbuf + 1) & 0xF;
  v9 = v7 + 128;
  memset(v7, 0, 0x80u);
  lib_nextbuf = v8;
  v10 = (int)v7;
  v11 = byte_97F7C;
  while ( 1 )
  {
    v12 = (const char *)v5[1];
    if ( (a1 & *v5) == 0 )
      v12 = (const char *)v5[2];
    if ( !v12 )
      goto LABEL_7;
    v13 = sub_6C054(v10, (unsigned int)&v9[-v10], "%s%s", v11, v12);
    if ( v13 >= (unsigned int)&v9[-v10] )
      break;
    v10 += v13;
    v11 = a2;
LABEL_7:
    v5 += 3;
    if ( v6 == v5 )
      return v7;
  }
  if ( a3 == &off_B4C48 )
  {
    v15 = "peer_st";
  }
  else if ( a3 == (int *)&unk_B4C84 )
  {
    v15 = "kern_st";
  }
  else
  {
    v15 = byte_97F7C;
  }
  sub_6C054((int)v7, 0x80u, "decode_bitflags(%s) can't decode 0x%x in %d bytes", v15, a1, 128);
  *v17 = v18;
  return v7;
}
