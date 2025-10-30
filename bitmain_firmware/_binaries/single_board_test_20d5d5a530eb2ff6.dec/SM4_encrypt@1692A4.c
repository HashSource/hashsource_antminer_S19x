unsigned int __fastcall SM4_encrypt(unsigned int *a1, _BYTE *a2, _DWORD *a3)
{
  unsigned int v3; // r4
  unsigned int v4; // r7
  unsigned int v5; // r12
  unsigned int v6; // r5
  int v7; // lr
  unsigned int v8; // r6
  unsigned int v9; // r10
  int v10; // lr
  int v11; // r5
  unsigned int v12; // r8
  int v13; // r0
  int v14; // r4
  unsigned int v15; // r0
  int v16; // r10
  int v17; // r0
  unsigned int v18; // lr
  int v19; // r12
  unsigned int v20; // lr
  int v21; // r10
  unsigned int v22; // r8
  int v23; // r9
  unsigned int v24; // r6
  int v25; // r0
  unsigned int v26; // r5
  int v27; // r12
  unsigned int v28; // r4
  int v29; // r8
  unsigned int v30; // r10
  int v31; // lr
  unsigned int v32; // r4
  int v33; // r10
  unsigned int v34; // r6
  int v35; // r12
  unsigned int v36; // r5
  int v37; // r8
  unsigned int v38; // r4
  int v39; // lr
  unsigned int v40; // r0
  int v41; // r7
  unsigned int v42; // r4
  int v43; // r10
  unsigned int v44; // r9
  int v45; // r11
  unsigned int v46; // r5
  int v47; // r4
  unsigned int v48; // r6
  int v49; // r7
  unsigned int v50; // lr
  int v51; // r10
  unsigned int v52; // r0
  int v53; // r12
  unsigned int v54; // r5
  int v55; // lr
  unsigned int v56; // r0
  int v57; // r7
  unsigned int v58; // r6
  int v59; // r11
  unsigned int v60; // r5
  int v61; // r12
  unsigned int v62; // r8
  int v63; // lr
  unsigned int v64; // r0
  int v65; // r7
  unsigned int v66; // r4
  int v67; // r9
  int v68; // r6
  int v69; // r0
  int v70; // r4
  int v71; // r5
  int v72; // r0
  int v73; // r8
  int v74; // r2
  unsigned int v75; // r8
  int v76; // r11
  int v77; // r0
  int v78; // r9
  int v79; // r6
  int v80; // r6
  int v81; // r0
  int v82; // r2
  unsigned int v83; // r5
  int v84; // r10
  int v85; // r6
  int v86; // r9
  int v87; // r5
  int v88; // r2
  int v89; // r4
  int v90; // r0
  unsigned int v91; // r2
  int v92; // r8
  int v93; // r4
  int v94; // r5
  int v95; // r2
  int v96; // r2
  unsigned int v97; // r3

  v3 = _byteswap_ulong(a1[1]);
  v4 = _byteswap_ulong(a1[2]);
  v5 = _byteswap_ulong(a1[3]);
  v6 = v4 ^ v3 ^ *a3 ^ v5;
  v7 = byte_1DFAEC[(unsigned __int8)v6 + 128]
     | (byte_1DFAEC[HIBYTE(v6) + 128] << 24)
     | (byte_1DFAEC[BYTE2(v6) + 128] << 16)
     | (byte_1DFAEC[BYTE1(v6) + 128] << 8);
  v8 = _byteswap_ulong(*a1) ^ v7 ^ __ROR4__(v7, 30) ^ __ROR4__(v7, 22) ^ __ROR4__(v7, 14) ^ __ROR4__(v7, 8);
  v9 = v5 ^ v4 ^ a3[1] ^ v8;
  v10 = byte_1DFAEC[(unsigned __int8)v9 + 128]
      | (byte_1DFAEC[HIBYTE(v9) + 128] << 24)
      | (byte_1DFAEC[BYTE2(v9) + 128] << 16)
      | (byte_1DFAEC[BYTE1(v9) + 128] << 8);
  v11 = v3 ^ v10 ^ __ROR4__(v10, 30) ^ __ROR4__(v10, 22) ^ __ROR4__(v10, 14) ^ __ROR4__(v10, 8);
  v12 = v5 ^ a3[2] ^ v8 ^ v11;
  v13 = byte_1DFAEC[(unsigned __int8)v12 + 128]
      | (byte_1DFAEC[HIBYTE(v12) + 128] << 24)
      | (byte_1DFAEC[BYTE2(v12) + 128] << 16)
      | (byte_1DFAEC[BYTE1(v12) + 128] << 8);
  v14 = v4 ^ v13 ^ __ROR4__(v13, 30) ^ __ROR4__(v13, 22) ^ __ROR4__(v13, 14) ^ __ROR4__(v13, 8);
  v15 = v8 ^ v11 ^ a3[3] ^ v14;
  v16 = byte_1DFAEC[(unsigned __int8)v15 + 128]
      | (byte_1DFAEC[HIBYTE(v15) + 128] << 24)
      | (byte_1DFAEC[BYTE2(v15) + 128] << 16)
      | (byte_1DFAEC[BYTE1(v15) + 128] << 8);
  v17 = v5 ^ v16 ^ __ROR4__(v16, 30) ^ __ROR4__(v16, 22) ^ __ROR4__(v16, 14) ^ __ROR4__(v16, 8);
  v18 = v11 ^ a3[4] ^ v14 ^ v17;
  v19 = v8
      ^ *(_DWORD *)&byte_1DFAEC[4 * HIBYTE(v18) + 384]
      ^ __ROR4__(*(_DWORD *)&byte_1DFAEC[4 * (unsigned __int8)v18 + 384], 24)
      ^ __ROR4__(*(_DWORD *)&byte_1DFAEC[4 * BYTE2(v18) + 384], 8)
      ^ __ROR4__(*(_DWORD *)&byte_1DFAEC[4 * BYTE1(v18) + 384], 16);
  v20 = v14 ^ a3[5] ^ v17 ^ v19;
  v21 = v11
      ^ *(_DWORD *)&byte_1DFAEC[4 * HIBYTE(v20) + 384]
      ^ __ROR4__(*(_DWORD *)&byte_1DFAEC[4 * (unsigned __int8)v20 + 384], 24)
      ^ __ROR4__(*(_DWORD *)&byte_1DFAEC[4 * BYTE2(v20) + 384], 8)
      ^ __ROR4__(*(_DWORD *)&byte_1DFAEC[4 * BYTE1(v20) + 384], 16);
  v22 = v17 ^ a3[6] ^ v19 ^ v21;
  v23 = v14
      ^ *(_DWORD *)&byte_1DFAEC[4 * HIBYTE(v22) + 384]
      ^ __ROR4__(*(_DWORD *)&byte_1DFAEC[4 * (unsigned __int8)v22 + 384], 24)
      ^ __ROR4__(*(_DWORD *)&byte_1DFAEC[4 * BYTE2(v22) + 384], 8)
      ^ __ROR4__(*(_DWORD *)&byte_1DFAEC[4 * BYTE1(v22) + 384], 16);
  v24 = v19 ^ v21 ^ a3[7] ^ v23;
  v25 = v17
      ^ *(_DWORD *)&byte_1DFAEC[4 * HIBYTE(v24) + 384]
      ^ __ROR4__(*(_DWORD *)&byte_1DFAEC[4 * (unsigned __int8)v24 + 384], 24)
      ^ __ROR4__(*(_DWORD *)&byte_1DFAEC[4 * BYTE2(v24) + 384], 8)
      ^ __ROR4__(*(_DWORD *)&byte_1DFAEC[4 * BYTE1(v24) + 384], 16);
  v26 = v21 ^ a3[8] ^ v23 ^ v25;
  v27 = v19
      ^ *(_DWORD *)&byte_1DFAEC[4 * HIBYTE(v26) + 384]
      ^ __ROR4__(*(_DWORD *)&byte_1DFAEC[4 * (unsigned __int8)v26 + 384], 24)
      ^ __ROR4__(*(_DWORD *)&byte_1DFAEC[4 * BYTE2(v26) + 384], 8)
      ^ __ROR4__(*(_DWORD *)&byte_1DFAEC[4 * BYTE1(v26) + 384], 16);
  v28 = v23 ^ a3[9] ^ v25 ^ v27;
  v29 = v21
      ^ *(_DWORD *)&byte_1DFAEC[4 * HIBYTE(v28) + 384]
      ^ __ROR4__(*(_DWORD *)&byte_1DFAEC[4 * (unsigned __int8)v28 + 384], 24)
      ^ __ROR4__(*(_DWORD *)&byte_1DFAEC[4 * BYTE2(v28) + 384], 8)
      ^ __ROR4__(*(_DWORD *)&byte_1DFAEC[4 * BYTE1(v28) + 384], 16);
  v30 = v25 ^ a3[10] ^ v27 ^ v29;
  v31 = v23
      ^ *(_DWORD *)&byte_1DFAEC[4 * HIBYTE(v30) + 384]
      ^ __ROR4__(*(_DWORD *)&byte_1DFAEC[4 * (unsigned __int8)v30 + 384], 24)
      ^ __ROR4__(*(_DWORD *)&byte_1DFAEC[4 * BYTE2(v30) + 384], 8)
      ^ __ROR4__(*(_DWORD *)&byte_1DFAEC[4 * BYTE1(v30) + 384], 16);
  v32 = v27 ^ v29 ^ a3[11] ^ v31;
  v33 = *(_DWORD *)&byte_1DFAEC[4 * HIBYTE(v32) + 384]
      ^ v25
      ^ __ROR4__(*(_DWORD *)&byte_1DFAEC[4 * (unsigned __int8)v32 + 384], 24)
      ^ __ROR4__(*(_DWORD *)&byte_1DFAEC[4 * BYTE2(v32) + 384], 8)
      ^ __ROR4__(*(_DWORD *)&byte_1DFAEC[4 * BYTE1(v32) + 384], 16);
  v34 = v29 ^ a3[12] ^ v31 ^ v33;
  v35 = v27
      ^ *(_DWORD *)&byte_1DFAEC[4 * HIBYTE(v34) + 384]
      ^ __ROR4__(*(_DWORD *)&byte_1DFAEC[4 * (unsigned __int8)v34 + 384], 24)
      ^ __ROR4__(*(_DWORD *)&byte_1DFAEC[4 * BYTE2(v34) + 384], 8)
      ^ __ROR4__(*(_DWORD *)&byte_1DFAEC[4 * BYTE1(v34) + 384], 16);
  v36 = v31 ^ a3[13] ^ v33 ^ v35;
  v37 = v29
      ^ *(_DWORD *)&byte_1DFAEC[4 * HIBYTE(v36) + 384]
      ^ __ROR4__(*(_DWORD *)&byte_1DFAEC[4 * (unsigned __int8)v36 + 384], 24)
      ^ __ROR4__(*(_DWORD *)&byte_1DFAEC[4 * BYTE2(v36) + 384], 8)
      ^ __ROR4__(*(_DWORD *)&byte_1DFAEC[4 * BYTE1(v36) + 384], 16);
  v38 = v33 ^ a3[14] ^ v35 ^ v37;
  v39 = v31
      ^ *(_DWORD *)&byte_1DFAEC[4 * HIBYTE(v38) + 384]
      ^ __ROR4__(*(_DWORD *)&byte_1DFAEC[4 * (unsigned __int8)v38 + 384], 24)
      ^ __ROR4__(*(_DWORD *)&byte_1DFAEC[4 * BYTE2(v38) + 384], 8)
      ^ __ROR4__(*(_DWORD *)&byte_1DFAEC[4 * BYTE1(v38) + 384], 16);
  v40 = v35 ^ v37 ^ a3[15] ^ v39;
  v41 = v33
      ^ *(_DWORD *)&byte_1DFAEC[4 * HIBYTE(v40) + 384]
      ^ __ROR4__(*(_DWORD *)&byte_1DFAEC[4 * (unsigned __int8)v40 + 384], 24)
      ^ __ROR4__(*(_DWORD *)&byte_1DFAEC[4 * BYTE2(v40) + 384], 8)
      ^ __ROR4__(*(_DWORD *)&byte_1DFAEC[4 * BYTE1(v40) + 384], 16);
  v42 = v37 ^ a3[16] ^ v39 ^ v41;
  v43 = v35
      ^ *(_DWORD *)&byte_1DFAEC[4 * HIBYTE(v42) + 384]
      ^ __ROR4__(*(_DWORD *)&byte_1DFAEC[4 * (unsigned __int8)v42 + 384], 24)
      ^ __ROR4__(*(_DWORD *)&byte_1DFAEC[4 * BYTE2(v42) + 384], 8)
      ^ __ROR4__(*(_DWORD *)&byte_1DFAEC[4 * BYTE1(v42) + 384], 16);
  v44 = v39 ^ a3[17] ^ v41 ^ v43;
  v45 = v37
      ^ *(_DWORD *)&byte_1DFAEC[4 * HIBYTE(v44) + 384]
      ^ __ROR4__(*(_DWORD *)&byte_1DFAEC[4 * (unsigned __int8)v44 + 384], 24)
      ^ __ROR4__(*(_DWORD *)&byte_1DFAEC[4 * BYTE2(v44) + 384], 8)
      ^ __ROR4__(*(_DWORD *)&byte_1DFAEC[4 * BYTE1(v44) + 384], 16);
  v46 = a3[18] ^ v41 ^ v43 ^ v45;
  v47 = v39
      ^ *(_DWORD *)&byte_1DFAEC[4 * HIBYTE(v46) + 384]
      ^ __ROR4__(*(_DWORD *)&byte_1DFAEC[4 * (unsigned __int8)v46 + 384], 24)
      ^ __ROR4__(*(_DWORD *)&byte_1DFAEC[4 * BYTE2(v46) + 384], 8)
      ^ __ROR4__(*(_DWORD *)&byte_1DFAEC[4 * BYTE1(v46) + 384], 16);
  v48 = a3[19] ^ v43 ^ v45 ^ v47;
  v49 = v41
      ^ *(_DWORD *)&byte_1DFAEC[4 * HIBYTE(v48) + 384]
      ^ __ROR4__(*(_DWORD *)&byte_1DFAEC[4 * (unsigned __int8)v48 + 384], 24)
      ^ __ROR4__(*(_DWORD *)&byte_1DFAEC[4 * BYTE2(v48) + 384], 8)
      ^ __ROR4__(*(_DWORD *)&byte_1DFAEC[4 * BYTE1(v48) + 384], 16);
  v50 = v45 ^ a3[20] ^ v47 ^ v49;
  v51 = v43
      ^ *(_DWORD *)&byte_1DFAEC[4 * HIBYTE(v50) + 384]
      ^ __ROR4__(*(_DWORD *)&byte_1DFAEC[4 * (unsigned __int8)v50 + 384], 24)
      ^ __ROR4__(*(_DWORD *)&byte_1DFAEC[4 * BYTE2(v50) + 384], 8)
      ^ __ROR4__(*(_DWORD *)&byte_1DFAEC[4 * BYTE1(v50) + 384], 16);
  v52 = a3[21] ^ v47 ^ v49 ^ v51;
  v53 = v45
      ^ *(_DWORD *)&byte_1DFAEC[4 * HIBYTE(v52) + 384]
      ^ __ROR4__(*(_DWORD *)&byte_1DFAEC[4 * (unsigned __int8)v52 + 384], 24)
      ^ __ROR4__(*(_DWORD *)&byte_1DFAEC[4 * BYTE2(v52) + 384], 8)
      ^ __ROR4__(*(_DWORD *)&byte_1DFAEC[4 * BYTE1(v52) + 384], 16);
  v54 = a3[22] ^ v49 ^ v51 ^ v53;
  v55 = v47
      ^ *(_DWORD *)&byte_1DFAEC[4 * HIBYTE(v54) + 384]
      ^ __ROR4__(*(_DWORD *)&byte_1DFAEC[4 * (unsigned __int8)v54 + 384], 24)
      ^ __ROR4__(*(_DWORD *)&byte_1DFAEC[4 * BYTE2(v54) + 384], 8)
      ^ __ROR4__(*(_DWORD *)&byte_1DFAEC[4 * BYTE1(v54) + 384], 16);
  v56 = v51 ^ v53 ^ a3[23] ^ v55;
  v57 = *(_DWORD *)&byte_1DFAEC[4 * HIBYTE(v56) + 384]
      ^ v49
      ^ __ROR4__(*(_DWORD *)&byte_1DFAEC[4 * (unsigned __int8)v56 + 384], 24)
      ^ __ROR4__(*(_DWORD *)&byte_1DFAEC[4 * BYTE2(v56) + 384], 8)
      ^ __ROR4__(*(_DWORD *)&byte_1DFAEC[4 * BYTE1(v56) + 384], 16);
  v58 = v53 ^ a3[24] ^ v55 ^ v57;
  v59 = v51
      ^ *(_DWORD *)&byte_1DFAEC[4 * HIBYTE(v58) + 384]
      ^ __ROR4__(*(_DWORD *)&byte_1DFAEC[4 * (unsigned __int8)v58 + 384], 24)
      ^ __ROR4__(*(_DWORD *)&byte_1DFAEC[4 * BYTE2(v58) + 384], 8)
      ^ __ROR4__(*(_DWORD *)&byte_1DFAEC[4 * BYTE1(v58) + 384], 16);
  v60 = v55 ^ a3[25] ^ v57 ^ v59;
  v61 = v53
      ^ *(_DWORD *)&byte_1DFAEC[4 * HIBYTE(v60) + 384]
      ^ __ROR4__(*(_DWORD *)&byte_1DFAEC[4 * (unsigned __int8)v60 + 384], 24)
      ^ __ROR4__(*(_DWORD *)&byte_1DFAEC[4 * BYTE2(v60) + 384], 8)
      ^ __ROR4__(*(_DWORD *)&byte_1DFAEC[4 * BYTE1(v60) + 384], 16);
  v62 = v57 ^ a3[26] ^ v59 ^ v61;
  v63 = v55
      ^ *(_DWORD *)&byte_1DFAEC[4 * HIBYTE(v62) + 384]
      ^ __ROR4__(*(_DWORD *)&byte_1DFAEC[4 * (unsigned __int8)v62 + 384], 24)
      ^ __ROR4__(*(_DWORD *)&byte_1DFAEC[4 * BYTE2(v62) + 384], 8)
      ^ __ROR4__(*(_DWORD *)&byte_1DFAEC[4 * BYTE1(v62) + 384], 16);
  v64 = v59 ^ v61 ^ a3[27] ^ v63;
  v65 = v57
      ^ *(_DWORD *)&byte_1DFAEC[4 * HIBYTE(v64) + 384]
      ^ __ROR4__(*(_DWORD *)&byte_1DFAEC[4 * (unsigned __int8)v64 + 384], 24)
      ^ __ROR4__(*(_DWORD *)&byte_1DFAEC[4 * BYTE2(v64) + 384], 8)
      ^ __ROR4__(*(_DWORD *)&byte_1DFAEC[4 * BYTE1(v64) + 384], 16);
  v66 = v61 ^ a3[28] ^ v63 ^ v65;
  v67 = byte_1DFAEC[BYTE2(v66) + 128];
  v68 = byte_1DFAEC[BYTE1(v66) + 128];
  v69 = byte_1DFAEC[(unsigned __int8)v66 + 128] | (byte_1DFAEC[HIBYTE(v66) + 128] << 24);
  v70 = a3[31];
  v71 = a3[30];
  v72 = v69 | (v67 << 16) | (v68 << 8);
  v73 = v63 ^ a3[29] ^ v65;
  v74 = v59 ^ v72 ^ __ROR4__(v72, 30) ^ __ROR4__(v72, 22) ^ __ROR4__(v72, 14) ^ __ROR4__(v72, 8);
  v75 = v73 ^ v74;
  a2[15] = v74;
  v76 = byte_1DFAEC[HIBYTE(v75) + 128];
  v77 = byte_1DFAEC[(unsigned __int8)v75 + 128];
  v78 = byte_1DFAEC[BYTE2(v75) + 128];
  v79 = byte_1DFAEC[BYTE1(v75) + 128];
  a2[12] = HIBYTE(v74);
  a2[14] = BYTE1(v74);
  a2[13] = BYTE2(v74);
  v80 = v77 | (v76 << 24) | (v78 << 16) | (v79 << 8);
  v81 = v61 ^ v80 ^ __ROR4__(v80, 30) ^ __ROR4__(v80, 22) ^ __ROR4__(v80, 14) ^ __ROR4__(v80, 8);
  v82 = v74 ^ v81;
  v83 = v71 ^ v65 ^ v82;
  a2[11] = v81;
  v84 = byte_1DFAEC[HIBYTE(v83) + 128];
  v85 = byte_1DFAEC[(unsigned __int8)v83 + 128];
  v86 = byte_1DFAEC[BYTE2(v83) + 128];
  v87 = byte_1DFAEC[BYTE1(v83) + 128];
  v88 = v82 ^ v70;
  a2[10] = BYTE1(v81);
  a2[9] = BYTE2(v81);
  a2[8] = HIBYTE(v81);
  v89 = v85 | (v84 << 24) | (v86 << 16) | (v87 << 8);
  v90 = v63 ^ v89 ^ __ROR4__(v89, 30) ^ __ROR4__(v89, 22) ^ __ROR4__(v89, 14) ^ __ROR4__(v89, 8);
  v91 = v88 ^ v90;
  v92 = byte_1DFAEC[HIBYTE(v91) + 128];
  v93 = byte_1DFAEC[(unsigned __int8)v91 + 128];
  v94 = byte_1DFAEC[BYTE2(v91) + 128];
  a2[7] = v90;
  v95 = byte_1DFAEC[BYTE1(v91) + 128];
  a2[4] = HIBYTE(v90);
  a2[5] = BYTE2(v90);
  a2[6] = BYTE1(v90);
  v96 = v93 | (v92 << 24) | (v94 << 16) | (v95 << 8);
  v97 = v65 ^ v96 ^ __ROR4__(v96, 30) ^ __ROR4__(v96, 22) ^ __ROR4__(v96, 14) ^ __ROR4__(v96, 8);
  a2[3] = v97;
  *a2 = HIBYTE(v97);
  a2[1] = BYTE2(v97);
  a2[2] = BYTE1(v97);
  return HIWORD(v97);
}
