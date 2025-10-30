int __fastcall sub_3DAD4(struct sockaddr *a1, int a2, int a3)
{
  unsigned int v4; // r7
  bool v5; // zf
  unsigned int v6; // r6
  int v7; // r8
  int v8; // r12
  unsigned int v9; // r2
  _BOOL4 v10; // r3
  char v11; // r3
  int v12; // r12
  int v16; // [sp+30h] [bp-CCh] BYREF
  unsigned int v17; // [sp+34h] [bp-C8h]
  unsigned int v18; // [sp+38h] [bp-C4h]
  unsigned int v19; // [sp+3Ch] [bp-C0h]
  unsigned int v20; // [sp+40h] [bp-BCh]
  unsigned int v21; // [sp+44h] [bp-B8h]
  int v22; // [sp+48h] [bp-B4h]
  unsigned int s[42]; // [sp+4Ch] [bp-B0h] BYREF

  v4 = __rev16(*(unsigned __int16 *)(a3 + 6)) & 0xFFF;
  if ( v4 > 0xA8 )
    return sub_3AD58(a1, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 3);
  v6 = __rev16(*(unsigned __int16 *)(a3 + 4)) & 0xFFF;
  v5 = v6 == 0;
  LOWORD(v6) = v6 - 1;
  if ( v5 )
  {
LABEL_26:
    v11 = *(_BYTE *)(a3 + 3);
    v12 = 0;
  }
  else
  {
    v7 = a3 + 8;
    while ( 1 )
    {
      memset(s, 0, sizeof(s));
      _memcpy_chk(s, v7);
      v16 = 0;
      v17 = 0;
      v18 = 0;
      if ( (s[2] & 2) != 0 )
        v8 = 32;
      else
        v8 = 0;
      v19 = 0;
      if ( (s[2] & 4) != 0 )
        v8 |= 0x40u;
      if ( (s[2] & 8) != 0 )
        v8 |= 0x100u;
      if ( (s[2] & 0x20) != 0 )
        v8 |= 0x800u;
      v20 = 0;
      v21 = 0;
      v22 = 0;
      if ( dword_BCB2C && s[36] )
      {
        LOWORD(v16) = 10;
        v18 = s[38];
        v19 = s[39];
        v20 = s[40];
        v21 = s[41];
      }
      else
      {
        LOWORD(v16) = 2;
        v9 = bswap32(s[0]);
        v17 = s[0];
        if ( HIWORD(v9) << 16 != 2139029504 )
        {
          v10 = (v9 & 0xFF000000) == 2130706432;
          if ( v9 == 2130706433 )
            v10 = 0;
          if ( v10 )
          {
LABEL_23:
            v11 = *(_BYTE *)(a3 + 3);
            v12 = 3;
            return sub_3AD58(a1, a2, *(_BYTE *)(a3 + 2), v11, v12);
          }
        }
      }
      HIWORD(v16) = 31488;
      if ( LOBYTE(s[1]) > 6u )
        goto LABEL_23;
      if ( !sub_32898(&v16, 0, 0, -1, s[1], SBYTE1(s[1]), BYTE2(s[1]), HIBYTE(s[1]), v8, BYTE1(s[2]), s[3], 0) )
        break;
      v6 = (unsigned __int16)(v6 - 1);
      v7 += v4;
      if ( v6 == 0xFFFF )
        goto LABEL_26;
    }
    v11 = *(_BYTE *)(a3 + 3);
    v12 = 4;
  }
  return sub_3AD58(a1, a2, *(_BYTE *)(a3 + 2), v11, v12);
}
