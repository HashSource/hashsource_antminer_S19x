_BYTE *__fastcall sub_141BC4(_BYTE *result, _DWORD *a2)
{
  int v2; // r3
  int v3; // r7
  int v4; // r10
  int v5; // lr
  int v6; // r9
  int v7; // r5
  int v8; // r6
  int v9; // r4
  int v10; // r2
  int v11; // r8
  int v12; // r12
  int v13; // lr
  int v14; // r7
  int v15; // r1
  int v16; // r5
  int v17; // r11
  int v18; // r6
  int v19; // r1
  int v20; // r2
  int v21; // r4

  v2 = a2[9];
  v3 = a2[3];
  v4 = a2[1];
  v5 = a2[2];
  v6 = a2[4];
  v7 = a2[5];
  v8 = a2[6];
  v9 = a2[7];
  v10 = a2[8];
  v11 = *a2
      + 19
      * ((v2
        + ((v10
          + ((v9
            + ((v8
              + ((v7
                + ((v6 + ((v3 + ((v5 + ((v4 + ((*a2 + ((19 * v2 + 0x1000000) >> 25)) >> 26)) >> 25)) >> 26)) >> 25)) >> 26)) >> 25)) >> 26)) >> 25)) >> 26)) >> 25);
  v12 = v4 + (v11 >> 26);
  v11 &= 0x3FFFFFFu;
  v13 = v5 + (v12 >> 25);
  *result = v11;
  result[2] = BYTE2(v11);
  v12 &= 0x1FFFFFFu;
  v14 = v3 + (v13 >> 26);
  result[1] = BYTE1(v11);
  v15 = v6 + (v14 >> 25);
  v14 &= 0x1FFFFFFu;
  v16 = v7 + (v15 >> 26);
  v13 &= 0x3FFFFFFu;
  result[3] = (4 * v12) | HIBYTE(v11);
  v17 = v8 + (v16 >> 25);
  v18 = v15 & 0x3FFFFFF;
  v19 = v9 + (v17 >> 26);
  v20 = v10 + (v19 >> 25);
  result[6] = (8 * v13) | ((unsigned int)v12 >> 22);
  result[16] = v16;
  v21 = (v2 + (v20 >> 26)) & 0x1FFFFFF;
  v19 &= 0x1FFFFFFu;
  v20 &= 0x3FFFFFFu;
  result[7] = v13 >> 5;
  result[4] = v12 >> 6;
  result[5] = v12 >> 14;
  result[8] = v13 >> 13;
  result[9] = (32 * v14) | ((unsigned int)v13 >> 21);
  result[10] = v14 >> 3;
  result[11] = v14 >> 11;
  result[13] = v18 >> 2;
  result[12] = ((_BYTE)v18 << 6) | ((unsigned int)v14 >> 19);
  result[14] = v18 >> 10;
  result[15] = v18 >> 18;
  result[17] = BYTE1(v16);
  result[18] = (v16 & 0x1FFFFFFu) >> 16;
  result[19] = (2 * v17) | ((v16 & 0x1FFFFFFu) >> 24);
  result[20] = (v17 & 0x3FFFFFF) >> 7;
  result[21] = (v17 & 0x3FFFFFF) >> 15;
  result[22] = (8 * v19) | ((v17 & 0x3FFFFFFu) >> 23);
  result[23] = v19 >> 5;
  result[24] = v19 >> 13;
  result[25] = (16 * v20) | ((unsigned int)v19 >> 21);
  result[26] = v20 >> 4;
  result[27] = v20 >> 12;
  result[28] = ((_BYTE)v21 << 6) | ((unsigned int)v20 >> 20);
  result[29] = v21 >> 2;
  result[30] = v21 >> 10;
  result[31] = v21 >> 18;
  return result;
}
