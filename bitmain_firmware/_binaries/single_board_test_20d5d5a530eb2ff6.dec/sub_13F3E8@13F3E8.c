int __fastcall sub_13F3E8(_DWORD *a1, int a2)
{
  unsigned int v2; // r3
  char *v3; // r9
  int v4; // r2
  int v5; // r3
  _DWORD *v6; // r10
  unsigned int v7; // r2
  unsigned int v8; // r3
  int v9; // r1
  int v10; // r3
  unsigned int v11; // r2
  int v12; // r1
  int v13; // r2
  unsigned int v14; // r1
  int v15; // r3
  int v16; // r1
  int v17; // r3
  unsigned int v18; // r2
  unsigned int v19; // r3
  unsigned int v20; // r2
  int v21; // t1
  int v22; // r0
  int v23; // r3
  int v24; // r1
  int v25; // r2
  unsigned int v26; // r4
  int result; // r0
  int v28; // r7
  char *v29; // [sp+0h] [bp-Ch]

  v2 = a1[1];
  v3 = (char *)(a2 + 24);
  v29 = (char *)(a2 + 152);
  v4 = (*a1 ^ (v2 >> 4)) & 0xF0F0F0F;
  v5 = v2 ^ (16 * v4);
  v6 = &unk_1CDDEC;
  v7 = v4 ^ *a1 ^ (v4 ^ *a1 ^ ((v4 ^ *a1) << 18)) & 0xCCCC0000 ^ (((v4 ^ *a1 ^ ((v4 ^ *a1) << 18)) & 0xCCCC0000) >> 18);
  v8 = v5 ^ (v5 ^ (v5 << 18)) & 0xCCCC0000 ^ (((v5 ^ (v5 << 18)) & 0xCCCC0000) >> 18);
  v9 = (v7 ^ (v8 >> 1)) & 0x55555555;
  v10 = v8 ^ (2 * v9);
  v11 = v7 ^ v9;
  v12 = (v10 ^ (v11 >> 8)) & 0xFF00FF;
  v13 = v11 ^ (v12 << 8);
  v14 = v12 ^ v10;
  v15 = (v13 ^ (v14 >> 1)) & 0x55555555;
  v16 = v14 ^ (2 * v15);
  v17 = v15 ^ v13;
  v18 = v17 & 0xF0000000;
  v19 = v17 & 0xFFFFFFF;
  v20 = BYTE2(v16) | v16 & 0xFF00 | (v18 >> 4) | ((unsigned __int8)v16 << 16);
  do
  {
    v21 = v6[1];
    ++v6;
    v22 = (v19 << 26) | (v19 >> 2);
    v23 = (v19 << 27) | (v19 >> 1);
    v24 = (v20 << 26) | (v20 >> 2);
    v25 = (v20 << 27) | (v20 >> 1);
    __pld(v3);
    if ( !v21 )
    {
      v22 = v23;
      v24 = v25;
    }
    v19 = v22 & 0xFFFFFFF;
    v20 = v24 & 0xFFFFFFF;
    v3 += 8;
    v26 = *(_DWORD *)&byte_1CDC70[4 * (((unsigned __int8)v22 >> 6) | ((v22 & 0xFFFFFFFu) >> 7) & 0x3C) + 704]
        | *(_DWORD *)&byte_1CDC70[4 * (((v22 & 0xFFFFFFFu) >> 14) & 0x30 | ((v22 & 0xFFFFFFFu) >> 13) & 0xF) + 960]
        | *(_DWORD *)&byte_1CDC70[4 * (v22 & 0x3F) + 448]
        | *(_DWORD *)&byte_1CDC70[4
                                * (((v22 & 0xFFFFFFFu) >> 20) & 1
                                 | ((v22 & 0xFFFFFFFu) >> 21) & 6
                                 | ((v22 & 0xFFFFFFFu) >> 22) & 0x38)
                                + 1216];
    result = (unsigned __int16)v26;
    v28 = *(_DWORD *)&byte_1CDC70[4 * (((v24 & 0xFFFFFFFu) >> 21) & 0xF | ((v24 & 0xFFFFFFFu) >> 22) & 0x30) + 2240]
        | *(_DWORD *)&byte_1CDC70[4 * (((v24 & 0xFFFFFFFu) >> 8) & 0x3C | ((v24 & 0xFFFFFFFu) >> 7) & 3) + 1728]
        | *(_DWORD *)&byte_1CDC70[4 * (v24 & 0x3F) + 1472]
        | *(_DWORD *)&byte_1CDC70[4 * (((v24 & 0xFFFFFFFu) >> 15) & 0x3F) + 1984];
    *((_DWORD *)v3 - 8) = __ROR4__((unsigned __int16)v26 | (v28 << 16), 30);
    *((_DWORD *)v3 - 7) = __ROR4__(v28 & 0xFFFF0000 | HIWORD(v26), 26);
  }
  while ( v29 != v3 );
  return result;
}
