int __fastcall sub_3E5C4(struct sockaddr *a1, int a2, int a3)
{
  unsigned int v3; // r6
  int v4; // r4
  int v5; // r5
  int v6; // r12
  unsigned int v7; // r2
  _BOOL4 v8; // r3
  int v13; // [sp+48h] [bp-CCh] BYREF
  unsigned int v14; // [sp+4Ch] [bp-C8h]
  unsigned int v15; // [sp+50h] [bp-C4h]
  unsigned int v16; // [sp+54h] [bp-C0h]
  unsigned int v17; // [sp+58h] [bp-BCh]
  unsigned int v18; // [sp+5Ch] [bp-B8h]
  int v19; // [sp+60h] [bp-B4h]
  unsigned int s[42]; // [sp+64h] [bp-B0h] BYREF

  v3 = (HIBYTE(*(_WORD *)(a3 + 6)) | (unsigned __int16)(*(_WORD *)(a3 + 6) << 8)) & 0xFFF;
  if ( v3 > 0xA8 )
    return sub_3B5D8(a1, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 3);
  LOWORD(v4) = (HIBYTE(*(_WORD *)(a3 + 4)) | (*(_WORD *)(a3 + 4) << 8)) & 0xFFF;
  if ( !(_WORD)v4 )
    return sub_3B5D8(a1, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 0);
  v5 = a3 + 8;
  while ( 1 )
  {
    memset(s, 0, sizeof(s));
    _memcpy_chk(s, v5, v3, 168);
    v13 = 0;
    v14 = 0;
    v15 = 0;
    v16 = 0;
    v17 = 0;
    if ( (s[2] & 2) != 0 )
      v6 = 32;
    else
      v6 = 0;
    v18 = 0;
    v19 = 0;
    if ( (s[2] & 4) != 0 )
      v6 |= 0x40u;
    if ( (s[2] & 8) != 0 )
      v6 |= 0x100u;
    if ( (s[2] & 0x20) != 0 )
      v6 |= 0x800u;
    if ( dword_BDB40 && s[36] )
    {
      LOWORD(v13) = 10;
      v15 = s[38];
      v16 = s[39];
      v17 = s[40];
      v18 = s[41];
    }
    else
    {
      LOWORD(v13) = 2;
      v7 = bswap32(s[0]);
      v14 = s[0];
      if ( HIWORD(v7) << 16 != 2139029504 )
      {
        v8 = (v7 & 0xFF000000) == 2130706432;
        if ( v7 == 2130706433 )
          v8 = 0;
        if ( v8 )
          return sub_3B5D8(a1, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 3);
      }
    }
    HIWORD(v13) = 31488;
    if ( LOBYTE(s[1]) > 6u )
      return sub_3B5D8(a1, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 3);
    if ( !sub_32DB8(
            (unsigned __int16 *)&v13,
            0,
            0,
            -1,
            s[1],
            SBYTE1(s[1]),
            BYTE2(s[1]),
            HIBYTE(s[1]),
            v6,
            BYTE1(s[2]),
            s[3],
            0) )
      break;
    v5 += v3;
    v4 = (unsigned __int16)(v4 - 1);
    if ( !v4 )
      return sub_3B5D8(a1, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 0);
  }
  return sub_3B5D8(a1, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 4);
}
