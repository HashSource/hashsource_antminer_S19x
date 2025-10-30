int __fastcall sub_DD8EC(unsigned __int8 *a1, _DWORD *a2)
{
  int v2; // r2
  unsigned int v3; // r2
  __int16 v4; // r9
  int v5; // r3
  unsigned int v6; // r3
  int v7; // r6
  int v8; // r4
  __int16 v9; // r11
  unsigned int v10; // r4
  unsigned int v11; // r3
  int v12; // r2
  unsigned int v13; // r2
  int v14; // r7
  int v15; // r5
  unsigned int v16; // r5
  unsigned int v17; // lr
  int v18; // r4
  unsigned int v19; // r4
  unsigned int v20; // r12
  int v21; // r2
  unsigned int v22; // r2
  int v23; // r8
  int v24; // r5
  int v25; // r0
  unsigned int v26; // r4
  unsigned int v27; // r5
  unsigned int v28; // r9
  int v29; // r0
  unsigned int v30; // r10
  unsigned int v31; // r3
  int v32; // r2
  int v33; // r5
  unsigned int v34; // r11
  int v35; // r12
  unsigned int v36; // r5
  unsigned int v37; // r4
  unsigned int v38; // r5
  int v39; // r9
  unsigned int v40; // lr
  int v41; // r7
  unsigned int v42; // r12
  unsigned int v43; // r11
  unsigned int v44; // r2
  int result; // r0
  int v46; // r5
  unsigned int v47; // [sp+4h] [bp-10h]
  unsigned int v48; // [sp+4h] [bp-10h]
  int v49; // [sp+4h] [bp-10h]
  unsigned int v50; // [sp+Ch] [bp-8h]

  v2 = *a1 << 8;
  *a2 = v2;
  v3 = v2 | a1[1];
  *a2 = v3;
  v4 = v3 >> 7;
  v5 = a1[2] << 8;
  a2[1] = v5;
  v6 = v5 | a1[3];
  a2[1] = v6;
  v7 = (unsigned __int16)((v6 >> 7) | ((_WORD)v3 << 9));
  v8 = a1[4] << 8;
  v9 = (unsigned __int16)((v6 >> 7) | ((_WORD)v3 << 9)) >> 7;
  a2[2] = v8;
  v10 = v8 | a1[5];
  a2[2] = v10;
  v11 = (unsigned __int16)(((_WORD)v6 << 9) | (v10 >> 7));
  v12 = a1[6] << 8;
  a2[3] = v12;
  v50 = (unsigned __int16)((v11 >> 7) | ((_WORD)v7 << 9));
  v13 = a1[7] | v12;
  a2[3] = v13;
  v14 = (unsigned __int16)((v13 >> 7) | ((_WORD)v10 << 9));
  v15 = a1[8] << 8;
  a2[4] = v15;
  v16 = a1[9] | v15;
  a2[4] = v16;
  v47 = (unsigned __int16)(((unsigned __int16)((v13 >> 7) | ((_WORD)v10 << 9)) >> 7) | ((_WORD)v11 << 9));
  v17 = (unsigned __int16)((v16 >> 7) | ((_WORD)v13 << 9));
  v18 = a1[10] << 8;
  a2[5] = v18;
  v19 = a1[11] | v18;
  a2[5] = v19;
  v20 = (unsigned __int16)((v19 >> 7) | ((_WORD)v16 << 9));
  v21 = a1[12] << 8;
  a2[6] = v21;
  v22 = a1[13] | v21;
  a2[6] = v22;
  v23 = (unsigned __int16)((v22 >> 7) | ((_WORD)v19 << 9));
  v24 = a1[14] << 8;
  a2[7] = v24;
  v25 = a1[15];
  a2[8] = v11;
  a2[10] = v17;
  v26 = (unsigned __int16)(((unsigned __int16)((v22 >> 7) | ((_WORD)v19 << 9)) >> 7) | ((_WORD)v20 << 9));
  v27 = v24 | v25;
  a2[7] = v27;
  v28 = (unsigned __int16)(v4 | ((_WORD)v27 << 9));
  v29 = (unsigned __int16)((v20 >> 7) | ((_WORD)v17 << 9));
  v30 = (unsigned __int16)((v27 >> 7) | ((_WORD)v22 << 9));
  v31 = (unsigned __int16)((v17 >> 7) | ((_WORD)v14 << 9));
  a2[12] = v23;
  a2[9] = v14;
  v32 = (unsigned __int16)((v28 >> 7) | ((_WORD)v30 << 9));
  a2[15] = v7;
  LOWORD(v14) = ((unsigned __int16)((v20 >> 7) | ((_WORD)v17 << 9)) >> 7) | ((_WORD)v31 << 9);
  v33 = (unsigned __int16)((v30 >> 7) | ((_WORD)v23 << 9));
  a2[11] = v20;
  a2[19] = v33;
  LOWORD(v17) = ((unsigned __int16)((v28 >> 7) | ((_WORD)v30 << 9)) >> 7) | ((_WORD)v33 << 9);
  a2[18] = v26;
  LOWORD(v23) = ((unsigned __int16)((v30 >> 7) | ((_WORD)v23 << 9)) >> 7) | ((_WORD)v26 << 9);
  v34 = (unsigned __int16)(v9 | ((_WORD)v28 << 9));
  v35 = (unsigned __int16)((v26 >> 7) | ((_WORD)v29 << 9));
  a2[23] = v47;
  v36 = v47 >> 7;
  v48 = (unsigned __int16)((v31 >> 7) | ((_WORD)v47 << 9));
  a2[16] = v31;
  a2[13] = v30;
  LOWORD(v31) = ((unsigned __int16)((v26 >> 7) | ((_WORD)v29 << 9)) >> 7) | ((_WORD)v14 << 9);
  v37 = (unsigned __int16)((v34 >> 7) | ((_WORD)v32 << 9));
  a2[17] = v29;
  a2[20] = v32;
  v38 = (unsigned __int16)(v36 | ((_WORD)v50 << 9));
  a2[14] = v28;
  LOWORD(v29) = (v50 >> 7) | ((_WORD)v34 << 9);
  a2[25] = (unsigned __int16)v23;
  LOWORD(v32) = ((unsigned __int16)v17 >> 7) | ((_WORD)v23 << 9);
  a2[21] = v34;
  LOWORD(v30) = ((unsigned __int16)v14 >> 7) | ((_WORD)v48 << 9);
  a2[22] = v50;
  a2[26] = (unsigned __int16)v17;
  v39 = (unsigned __int16)(((unsigned __int16)v23 >> 7) | ((_WORD)v35 << 9));
  a2[24] = v35;
  v40 = (unsigned __int16)((v37 >> 7) | ((_WORD)v17 << 9));
  a2[31] = (unsigned __int16)v14;
  a2[30] = v48;
  v41 = (unsigned __int16)((v38 >> 7) | ((_WORD)v29 << 9));
  a2[27] = v37;
  a2[28] = (unsigned __int16)v29;
  LOWORD(v23) = (unsigned __int16)(((unsigned __int16)v23 >> 7) | ((_WORD)v35 << 9)) >> 7;
  LOWORD(v7) = ((unsigned __int16)v32 >> 7) | ((_WORD)v39 << 9);
  a2[39] = v39;
  v42 = (unsigned __int16)(((unsigned __int16)v29 >> 7) | ((_WORD)v37 << 9));
  a2[32] = (unsigned __int16)v32;
  v43 = (unsigned __int16)((v48 >> 7) | ((_WORD)v38 << 9));
  LOWORD(v23) = v23 | ((_WORD)v31 << 9);
  a2[38] = (unsigned __int16)v31;
  v44 = (unsigned __int16)((v40 >> 7) | ((_WORD)v32 << 9));
  a2[29] = v38;
  a2[33] = v40;
  a2[36] = v43;
  v49 = (unsigned __int16)(((unsigned __int16)((v38 >> 7) | ((_WORD)v29 << 9)) >> 7) | ((_WORD)v42 << 9));
  LOWORD(v37) = ((unsigned __int16)v31 >> 7) | ((_WORD)v30 << 9);
  a2[40] = (unsigned __int16)((v42 >> 7) | ((_WORD)v40 << 9));
  result = (unsigned __int16)(((unsigned __int16)v30 >> 7) | ((_WORD)v43 << 9));
  v46 = (unsigned __int16)((v43 >> 7) | ((_WORD)v41 << 9));
  a2[53] = (unsigned __int16)(((_WORD)v7 << 9) | (v44 >> 7));
  a2[37] = (unsigned __int16)v30;
  a2[34] = v42;
  a2[35] = v41;
  a2[41] = v49;
  a2[45] = (unsigned __int16)v23;
  a2[46] = (unsigned __int16)v7;
  a2[47] = v44;
  a2[42] = v46;
  a2[44] = (unsigned __int16)v37;
  a2[43] = (unsigned __int16)result;
  a2[51] = (unsigned __int16)(((unsigned __int16)v23 >> 7) | ((_WORD)v37 << 9));
  a2[52] = (unsigned __int16)(((unsigned __int16)v7 >> 7) | ((_WORD)v23 << 9));
  a2[50] = (unsigned __int16)(((unsigned __int16)v37 >> 7) | ((_WORD)result << 9));
  a2[48] = (unsigned __int16)(((unsigned __int16)((v43 >> 7) | ((_WORD)v41 << 9)) >> 7) | ((_WORD)v49 << 9));
  a2[49] = (unsigned __int16)(((unsigned __int16)result >> 7) | ((_WORD)v46 << 9));
  return result;
}
