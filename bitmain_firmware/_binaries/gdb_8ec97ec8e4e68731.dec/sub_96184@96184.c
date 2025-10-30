unsigned int __fastcall sub_96184(int *a1, _BYTE *a2)
{
  int v2; // r3
  int v3; // r3
  int v4; // r2
  int v5; // r3
  char v6; // r12
  int v7; // r3
  int v8; // r2
  int v9; // r2
  int v10; // r2
  int v11; // r2
  _BYTE *v12; // lr
  unsigned int v13; // r6
  int v14; // r4
  bool v15; // nf
  char v16; // r5
  int v17; // r2
  _BYTE *v18; // lr
  int v19; // r3
  __int64 v20; // r4
  char v21; // r6
  unsigned int v22; // r2
  unsigned int v23; // r6
  _BYTE *v24; // lr
  int v25; // r4
  int v26; // r3
  char v27; // r5
  int v28; // r2
  int v29; // r3
  int v30; // r3
  unsigned int v31; // r3

  v2 = *a1;
  a2[3] = *a1;
  *a2 = HIBYTE(v2);
  a2[1] = BYTE2(v2);
  a2[2] = BYTE1(v2);
  v3 = a1[24];
  a2[7] = v3;
  a2[4] = HIBYTE(v3);
  a2[6] = BYTE1(v3);
  a2[5] = BYTE2(v3);
  v4 = a1[4];
  v5 = v4 & 0xF000;
  if ( v5 != 0x8000 && v5 != 0x4000 && v5 != 0x2000 )
    LOWORD(v5) = 0;
  if ( (v4 & 0x100) != 0 )
    LOWORD(v5) = v5 | 0x100;
  if ( (v4 & 0x80) != 0 )
    LOWORD(v5) = v5 | 0x80;
  if ( (v4 & 0x40) != 0 )
    LOWORD(v5) = v5 | 0x40;
  if ( (v4 & 0x20) != 0 )
    LOWORD(v5) = v5 | 0x20;
  if ( (v4 & 0x10) != 0 )
    LOWORD(v5) = v5 | 0x10;
  if ( (v4 & 8) != 0 )
    LOWORD(v5) = v5 | 8;
  if ( (v4 & 4) != 0 )
    LOWORD(v5) = v5 | 4;
  if ( (v4 & 2) != 0 )
    LOWORD(v5) = v5 | 2;
  if ( (v4 & 1) != 0 )
    LOWORD(v5) = v5 | 1;
  v6 = BYTE1(v5);
  a2[11] = v5;
  a2[8] = 0;
  v7 = 56;
  a2[10] = v6;
  a2[9] = 0;
  v8 = a1[5];
  a2[15] = v8;
  a2[12] = HIBYTE(v8);
  a2[13] = BYTE2(v8);
  a2[14] = BYTE1(v8);
  v9 = a1[6];
  a2[19] = v9;
  a2[16] = HIBYTE(v9);
  a2[17] = BYTE2(v9);
  a2[18] = BYTE1(v9);
  v10 = a1[7];
  a2[23] = v10;
  a2[20] = HIBYTE(v10);
  a2[21] = BYTE2(v10);
  a2[22] = BYTE1(v10);
  v11 = a1[8];
  a2[24] = HIBYTE(v11);
  a2[25] = BYTE2(v11);
  a2[26] = BYTE1(v11);
  a2[27] = v11;
  v12 = a2 + 27;
  v13 = a1[12];
  v14 = a1[13];
  do
  {
    v16 = v7 - 32;
    v15 = v7 - 32 < 0;
    v17 = (v13 >> v7) | (v14 << (32 - v7));
    v7 -= 8;
    ++v12;
    if ( !v15 )
      v17 |= v14 >> v16;
    *v12 = v17;
  }
  while ( v7 != -8 );
  v18 = a2 + 35;
  v19 = 56;
  v20 = a1[14];
  do
  {
    v21 = v19 - 32;
    v15 = v19 - 32 < 0;
    v22 = ((unsigned int)v20 >> v19) | (HIDWORD(v20) << (32 - v19));
    v19 -= 8;
    ++v18;
    if ( !v15 )
      v22 |= SHIDWORD(v20) >> v21;
    *v18 = v22;
  }
  while ( v19 != -8 );
  v23 = a1[16];
  v24 = a2 + 43;
  v25 = a1[17];
  v26 = 56;
  do
  {
    v27 = v26 - 32;
    v15 = v26 - 32 < 0;
    v28 = (v23 >> v26) | (v25 << (32 - v26));
    v26 -= 8;
    ++v24;
    if ( !v15 )
      v28 |= v25 >> v27;
    *v24 = v28;
  }
  while ( v26 != -8 );
  v29 = a1[18];
  a2[55] = v29;
  a2[52] = HIBYTE(v29);
  a2[53] = BYTE2(v29);
  a2[54] = BYTE1(v29);
  v30 = a1[20];
  a2[59] = v30;
  a2[57] = BYTE2(v30);
  a2[56] = HIBYTE(v30);
  a2[58] = BYTE1(v30);
  v31 = a1[22];
  a2[63] = v31;
  a2[60] = HIBYTE(v31);
  a2[61] = BYTE2(v31);
  a2[62] = BYTE1(v31);
  return HIBYTE(v31);
}
