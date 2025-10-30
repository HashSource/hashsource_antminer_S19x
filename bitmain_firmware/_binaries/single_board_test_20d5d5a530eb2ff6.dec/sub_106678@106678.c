int __fastcall sub_106678(_BYTE *a1, int *a2)
{
  int v3; // r3
  int v4; // r7
  int v6; // r0
  size_t v7; // r2
  int v8; // r6
  int v9; // r1
  int v10; // r0
  int v11; // r3
  int v12; // r7
  int v13; // r3
  int v14; // r2
  int v15; // r3
  int v16; // r2
  int v17; // r3
  int v18; // r2
  int v19; // r2
  int v20; // r3
  int v21; // r3
  int v22; // r2
  int v23; // r3
  int v24; // r2
  int result; // r0
  int v26; // r3
  int v27; // r2
  int v28; // r3
  int v29; // r2
  int v30; // r3
  int v31; // r2
  int v32; // r2
  int v33; // r3
  int v34; // r3
  int v35; // r2
  int v36; // r3
  int v37; // r2
  int v38; // r2
  int v39; // r3
  int v40; // r3
  int v41; // r2
  int v42; // r3
  int v43; // r2
  int v44; // r3
  int v45; // r2
  int v46; // r3
  int v47; // r2
  int v48; // r3
  int v49; // r3
  int v50; // r2
  int v51; // r3
  int v52; // r2
  int v53; // r3
  int v54; // r2
  int v55; // r2
  int v56; // r3

  v3 = a2[52];
  v4 = (int)(a2 + 20);
  v6 = v3 + 1;
  *((_BYTE *)a2 + v3 + 80) = 0x80;
  if ( (unsigned int)(v3 + 1) > 0x70 )
  {
    memset((void *)(v6 + v4), 0, 127 - v3);
    sub_100A48((__int64 *)a2, v4, 1);
    v7 = 112;
    v6 = 0;
  }
  else
  {
    v7 = 111 - v3;
  }
  memset((void *)(v6 + v4), 0, v7);
  v8 = a2[16];
  v9 = v4;
  v10 = a2[17];
  v11 = a2[18];
  *((_BYTE *)a2 + 207) = v8;
  v12 = a2[19];
  *((_BYTE *)a2 + 203) = v10;
  *((_BYTE *)a2 + 205) = BYTE2(v8);
  *((_BYTE *)a2 + 204) = HIBYTE(v8);
  *((_BYTE *)a2 + 199) = v11;
  *((_BYTE *)a2 + 201) = BYTE2(v10);
  *((_BYTE *)a2 + 200) = HIBYTE(v10);
  *((_BYTE *)a2 + 202) = BYTE1(v10);
  *((_BYTE *)a2 + 198) = BYTE1(v11);
  *((_BYTE *)a2 + 196) = HIBYTE(v11);
  *((_BYTE *)a2 + 197) = BYTE2(v11);
  *((_BYTE *)a2 + 206) = BYTE1(v8);
  *((_BYTE *)a2 + 195) = v12;
  *((_BYTE *)a2 + 194) = BYTE1(v12);
  *((_BYTE *)a2 + 193) = BYTE2(v12);
  *((_BYTE *)a2 + 192) = HIBYTE(v12);
  sub_100A48((__int64 *)a2, v9, 1);
  if ( !a1 )
    return 0;
  switch ( a2[53] )
  {
    case 28:
      v42 = *a2;
      v43 = a2[1];
      a1[7] = *a2;
      a1[3] = v43;
      a1[4] = HIBYTE(v42);
      *a1 = HIBYTE(v43);
      a1[1] = BYTE2(v43);
      a1[5] = BYTE2(v42);
      a1[2] = BYTE1(v43);
      a1[6] = BYTE1(v42);
      v44 = a2[2];
      v45 = a2[3];
      a1[15] = v44;
      a1[11] = v45;
      a1[12] = HIBYTE(v44);
      a1[8] = HIBYTE(v45);
      a1[9] = BYTE2(v45);
      a1[13] = BYTE2(v44);
      a1[10] = BYTE1(v45);
      a1[14] = BYTE1(v44);
      v46 = a2[4];
      v47 = a2[5];
      a1[23] = v46;
      a1[19] = v47;
      a1[20] = HIBYTE(v46);
      a1[21] = BYTE2(v46);
      a1[18] = BYTE1(v47);
      a1[16] = HIBYTE(v47);
      a1[17] = BYTE2(v47);
      a1[22] = BYTE1(v46);
      v48 = a2[7];
      a1[24] = HIBYTE(v48);
      a1[25] = BYTE2(v48);
      a1[27] = v48;
      a1[26] = BYTE1(v48);
      result = 1;
      break;
    case 32:
      v49 = *a2;
      v50 = a2[1];
      a1[7] = *a2;
      a1[4] = HIBYTE(v49);
      *a1 = HIBYTE(v50);
      a1[1] = BYTE2(v50);
      a1[2] = BYTE1(v50);
      a1[5] = BYTE2(v49);
      a1[3] = v50;
      a1[6] = BYTE1(v49);
      v51 = a2[2];
      v52 = a2[3];
      a1[15] = v51;
      a1[12] = HIBYTE(v51);
      a1[8] = HIBYTE(v52);
      a1[9] = BYTE2(v52);
      a1[10] = BYTE1(v52);
      a1[13] = BYTE2(v51);
      a1[11] = v52;
      a1[14] = BYTE1(v51);
      v53 = a2[4];
      v54 = a2[5];
      a1[23] = v53;
      a1[20] = HIBYTE(v53);
      a1[16] = HIBYTE(v54);
      a1[17] = BYTE2(v54);
      a1[18] = BYTE1(v54);
      a1[21] = BYTE2(v53);
      a1[19] = v54;
      a1[22] = BYTE1(v53);
      v55 = a2[7];
      v56 = a2[6];
      a1[24] = HIBYTE(v55);
      a1[29] = BYTE2(v56);
      a1[27] = v55;
      a1[31] = v56;
      a1[25] = BYTE2(v55);
      a1[26] = BYTE1(v55);
      a1[28] = HIBYTE(v56);
      a1[30] = BYTE1(v56);
      result = 1;
      break;
    case 48:
      v13 = *a2;
      v14 = a2[1];
      a1[7] = *a2;
      a1[4] = HIBYTE(v13);
      *a1 = HIBYTE(v14);
      a1[1] = BYTE2(v14);
      a1[2] = BYTE1(v14);
      a1[5] = BYTE2(v13);
      a1[3] = v14;
      a1[6] = BYTE1(v13);
      v15 = a2[2];
      v16 = a2[3];
      a1[15] = v15;
      a1[12] = HIBYTE(v15);
      a1[8] = HIBYTE(v16);
      a1[9] = BYTE2(v16);
      a1[10] = BYTE1(v16);
      a1[13] = BYTE2(v15);
      a1[11] = v16;
      a1[14] = BYTE1(v15);
      v17 = a2[4];
      v18 = a2[5];
      a1[23] = v17;
      a1[20] = HIBYTE(v17);
      a1[16] = HIBYTE(v18);
      a1[17] = BYTE2(v18);
      a1[18] = BYTE1(v18);
      a1[21] = BYTE2(v17);
      a1[19] = v18;
      a1[22] = BYTE1(v17);
      v19 = a2[7];
      v20 = a2[6];
      a1[24] = HIBYTE(v19);
      a1[27] = v19;
      a1[25] = BYTE2(v19);
      a1[26] = BYTE1(v19);
      a1[28] = HIBYTE(v20);
      a1[29] = BYTE2(v20);
      a1[31] = v20;
      a1[30] = BYTE1(v20);
      v21 = a2[8];
      v22 = a2[9];
      a1[39] = v21;
      a1[36] = HIBYTE(v21);
      a1[32] = HIBYTE(v22);
      a1[33] = BYTE2(v22);
      a1[34] = BYTE1(v22);
      a1[37] = BYTE2(v21);
      a1[35] = v22;
      a1[38] = BYTE1(v21);
      v23 = a2[10];
      v24 = a2[11];
      a1[47] = v23;
      a1[44] = HIBYTE(v23);
      a1[43] = v24;
      a1[40] = HIBYTE(v24);
      a1[41] = BYTE2(v24);
      a1[42] = BYTE1(v24);
      a1[45] = BYTE2(v23);
      a1[46] = BYTE1(v23);
      result = 1;
      break;
    case 64:
      v26 = *a2;
      v27 = a2[1];
      a1[7] = *a2;
      a1[4] = HIBYTE(v26);
      *a1 = HIBYTE(v27);
      a1[1] = BYTE2(v27);
      a1[2] = BYTE1(v27);
      a1[5] = BYTE2(v26);
      a1[3] = v27;
      a1[6] = BYTE1(v26);
      v28 = a2[2];
      v29 = a2[3];
      a1[15] = v28;
      a1[12] = HIBYTE(v28);
      a1[8] = HIBYTE(v29);
      a1[9] = BYTE2(v29);
      a1[10] = BYTE1(v29);
      a1[13] = BYTE2(v28);
      a1[11] = v29;
      a1[14] = BYTE1(v28);
      v30 = a2[4];
      v31 = a2[5];
      a1[23] = v30;
      a1[20] = HIBYTE(v30);
      a1[16] = HIBYTE(v31);
      a1[17] = BYTE2(v31);
      a1[18] = BYTE1(v31);
      a1[21] = BYTE2(v30);
      a1[19] = v31;
      a1[22] = BYTE1(v30);
      v32 = a2[7];
      v33 = a2[6];
      a1[24] = HIBYTE(v32);
      a1[27] = v32;
      a1[25] = BYTE2(v32);
      a1[26] = BYTE1(v32);
      a1[28] = HIBYTE(v33);
      a1[29] = BYTE2(v33);
      a1[31] = v33;
      a1[30] = BYTE1(v33);
      v34 = a2[8];
      v35 = a2[9];
      a1[39] = v34;
      a1[36] = HIBYTE(v34);
      a1[32] = HIBYTE(v35);
      a1[33] = BYTE2(v35);
      a1[34] = BYTE1(v35);
      a1[37] = BYTE2(v34);
      a1[35] = v35;
      a1[38] = BYTE1(v34);
      v36 = a2[10];
      v37 = a2[11];
      a1[47] = v36;
      a1[44] = HIBYTE(v36);
      a1[40] = HIBYTE(v37);
      a1[41] = BYTE2(v37);
      a1[42] = BYTE1(v37);
      a1[45] = BYTE2(v36);
      a1[43] = v37;
      a1[46] = BYTE1(v36);
      v38 = a2[13];
      v39 = a2[12];
      a1[48] = HIBYTE(v38);
      a1[49] = BYTE2(v38);
      a1[50] = BYTE1(v38);
      a1[51] = v38;
      a1[52] = HIBYTE(v39);
      a1[53] = BYTE2(v39);
      a1[54] = BYTE1(v39);
      a1[55] = v39;
      v40 = a2[14];
      v41 = a2[15];
      a1[63] = v40;
      a1[60] = HIBYTE(v40);
      a1[59] = v41;
      a1[56] = HIBYTE(v41);
      a1[57] = BYTE2(v41);
      a1[58] = BYTE1(v41);
      a1[61] = BYTE2(v40);
      a1[62] = BYTE1(v40);
      result = 1;
      break;
    default:
      return 0;
  }
  return result;
}
