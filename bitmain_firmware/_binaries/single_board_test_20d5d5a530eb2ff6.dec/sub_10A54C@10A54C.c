int __fastcall sub_10A54C(_BYTE *a1, int *a2)
{
  int v3; // r3
  char *v4; // r6
  int v6; // r0
  size_t v7; // r2
  int v8; // r0
  int v9; // r3
  int v10; // r3
  int v12; // r3
  int v13; // r3
  int v14; // r3
  int v15; // r3
  int v16; // r3
  int v17; // r3
  int v18; // r3

  v3 = a2[26];
  v4 = (char *)(a2 + 10);
  v6 = v3 + 1;
  *((_BYTE *)a2 + v3 + 40) = 0x80;
  if ( (unsigned int)(v3 + 1) > 0x38 )
  {
    memset(&v4[v6], 0, 63 - v3);
    sub_108130(a2, (int)v4, 1);
    v7 = 56;
    v6 = 0;
  }
  else
  {
    v7 = 55 - v3;
  }
  memset(&v4[v6], 0, v7);
  v8 = a2[9];
  v9 = a2[8];
  *((_BYTE *)a2 + 99) = v8;
  *((_BYTE *)a2 + 103) = v9;
  *((_BYTE *)a2 + 96) = HIBYTE(v8);
  *((_BYTE *)a2 + 97) = BYTE2(v8);
  *((_BYTE *)a2 + 98) = BYTE1(v8);
  *((_BYTE *)a2 + 100) = HIBYTE(v9);
  *((_BYTE *)a2 + 102) = BYTE1(v9);
  *((_BYTE *)a2 + 101) = BYTE2(v9);
  sub_108130(a2, (int)v4, 1);
  a2[26] = 0;
  sub_E07F8(v4, 0x40u);
  v10 = *a2;
  a1[3] = *a2;
  *a1 = HIBYTE(v10);
  a1[1] = BYTE2(v10);
  a1[2] = BYTE1(v10);
  v12 = a2[1];
  a1[7] = v12;
  a1[4] = HIBYTE(v12);
  a1[5] = BYTE2(v12);
  a1[6] = BYTE1(v12);
  v13 = a2[2];
  a1[11] = v13;
  a1[8] = HIBYTE(v13);
  a1[9] = BYTE2(v13);
  a1[10] = BYTE1(v13);
  v14 = a2[3];
  a1[15] = v14;
  a1[12] = HIBYTE(v14);
  a1[13] = BYTE2(v14);
  a1[14] = BYTE1(v14);
  v15 = a2[4];
  a1[19] = v15;
  a1[16] = HIBYTE(v15);
  a1[17] = BYTE2(v15);
  a1[18] = BYTE1(v15);
  v16 = a2[5];
  a1[23] = v16;
  a1[20] = HIBYTE(v16);
  a1[21] = BYTE2(v16);
  a1[22] = BYTE1(v16);
  v17 = a2[6];
  a1[24] = HIBYTE(v17);
  a1[25] = BYTE2(v17);
  a1[26] = BYTE1(v17);
  a1[27] = v17;
  v18 = a2[7];
  a1[31] = v18;
  a1[28] = HIBYTE(v18);
  a1[29] = BYTE2(v18);
  a1[30] = BYTE1(v18);
  return 1;
}
