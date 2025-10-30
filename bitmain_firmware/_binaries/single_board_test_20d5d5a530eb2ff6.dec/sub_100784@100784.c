int __fastcall sub_100784(_BYTE *a1, int *a2)
{
  int v2; // r3
  char *v4; // r7
  int v6; // r0
  size_t v7; // r2
  int v8; // r6
  int v9; // r3
  unsigned int v10; // r3
  int v11; // r3
  int v12; // r3
  int v13; // r3
  int v14; // r3
  int v15; // r3
  int v16; // r3
  int v17; // r3
  int v18; // r3
  int v20; // r3
  int v21; // r3
  int v22; // r3
  int v23; // r3
  int v24; // r3
  int v25; // r3
  int v26; // r3
  int v27; // r3
  int v28; // r3
  int v29; // r3
  int v30; // r3
  int v31; // r3
  int v32; // r3
  int v33; // r3

  v2 = a2[26];
  v4 = (char *)(a2 + 10);
  v6 = v2 + 1;
  *((_BYTE *)a2 + v2 + 40) = 0x80;
  if ( (unsigned int)(v2 + 1) > 0x38 )
  {
    memset(&v4[v6], 0, 63 - v2);
    sub_FF66C(a2, (int)v4, 1);
    v7 = 56;
    v6 = 0;
  }
  else
  {
    v7 = 55 - v2;
  }
  memset(&v4[v6], 0, v7);
  v8 = a2[9];
  v9 = a2[8];
  *((_BYTE *)a2 + 99) = v8;
  *((_BYTE *)a2 + 103) = v9;
  *((_BYTE *)a2 + 96) = HIBYTE(v8);
  *((_BYTE *)a2 + 97) = BYTE2(v8);
  *((_BYTE *)a2 + 100) = HIBYTE(v9);
  *((_BYTE *)a2 + 101) = BYTE2(v9);
  *((_BYTE *)a2 + 102) = BYTE1(v9);
  *((_BYTE *)a2 + 98) = BYTE1(v8);
  sub_FF66C(a2, (int)v4, 1);
  a2[26] = 0;
  sub_E07F8(v4, 0x40u);
  v10 = a2[27];
  if ( v10 == 28 )
  {
    v27 = *a2;
    a1[3] = *a2;
    *a1 = HIBYTE(v27);
    a1[1] = BYTE2(v27);
    a1[2] = BYTE1(v27);
    v28 = a2[1];
    a1[7] = v28;
    a1[4] = HIBYTE(v28);
    a1[5] = BYTE2(v28);
    a1[6] = BYTE1(v28);
    v29 = a2[2];
    a1[11] = v29;
    a1[8] = HIBYTE(v29);
    a1[9] = BYTE2(v29);
    a1[10] = BYTE1(v29);
    v30 = a2[3];
    a1[15] = v30;
    a1[12] = HIBYTE(v30);
    a1[13] = BYTE2(v30);
    a1[14] = BYTE1(v30);
    v31 = a2[4];
    a1[19] = v31;
    a1[16] = HIBYTE(v31);
    a1[17] = BYTE2(v31);
    a1[18] = BYTE1(v31);
    v32 = a2[5];
    a1[23] = v32;
    a1[20] = HIBYTE(v32);
    a1[21] = BYTE2(v32);
    a1[22] = BYTE1(v32);
    v33 = a2[6];
    a1[24] = HIBYTE(v33);
    a1[25] = BYTE2(v33);
    a1[27] = v33;
    a1[26] = BYTE1(v33);
    return 1;
  }
  else
  {
    if ( v10 == 32 )
    {
      v11 = *a2;
      a1[3] = *a2;
      *a1 = HIBYTE(v11);
      a1[1] = BYTE2(v11);
      a1[2] = BYTE1(v11);
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
      a1[27] = v17;
      a1[26] = BYTE1(v17);
LABEL_7:
      v18 = a2[7];
      a1[31] = v18;
      a1[28] = HIBYTE(v18);
      a1[29] = BYTE2(v18);
      a1[30] = BYTE1(v18);
      return 1;
    }
    if ( v10 <= 0x20 )
    {
      if ( !(v10 >> 2) )
        return 1;
      v20 = *a2;
      a1[3] = *a2;
      *a1 = HIBYTE(v20);
      a1[1] = BYTE2(v20);
      a1[2] = BYTE1(v20);
      if ( (unsigned int)a2[27] <= 7 )
        return 1;
      v21 = a2[1];
      a1[7] = v21;
      a1[4] = HIBYTE(v21);
      a1[5] = BYTE2(v21);
      a1[6] = BYTE1(v21);
      if ( (unsigned int)a2[27] <= 0xB )
        return 1;
      v22 = a2[2];
      a1[11] = v22;
      a1[8] = HIBYTE(v22);
      a1[9] = BYTE2(v22);
      a1[10] = BYTE1(v22);
      if ( (unsigned int)a2[27] <= 0xF )
        return 1;
      v23 = a2[3];
      a1[15] = v23;
      a1[12] = HIBYTE(v23);
      a1[13] = BYTE2(v23);
      a1[14] = BYTE1(v23);
      if ( (unsigned int)a2[27] <= 0x13 )
        return 1;
      v24 = a2[4];
      a1[19] = v24;
      a1[16] = HIBYTE(v24);
      a1[17] = BYTE2(v24);
      a1[18] = BYTE1(v24);
      if ( (unsigned int)a2[27] <= 0x17 )
        return 1;
      v25 = a2[5];
      a1[23] = v25;
      a1[20] = HIBYTE(v25);
      a1[21] = BYTE2(v25);
      a1[22] = BYTE1(v25);
      if ( (unsigned int)a2[27] <= 0x1B )
        return 1;
      v26 = a2[6];
      a1[27] = v26;
      a1[24] = HIBYTE(v26);
      a1[25] = BYTE2(v26);
      a1[26] = BYTE1(v26);
      if ( (unsigned int)a2[27] <= 0x1F )
        return 1;
      goto LABEL_7;
    }
    return 0;
  }
}
