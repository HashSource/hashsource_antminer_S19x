unsigned int __fastcall AES_decrypt(unsigned __int8 *a1, _BYTE *a2, _DWORD *a3)
{
  _DWORD *v3; // r9
  int v4; // r7
  int v5; // r1
  unsigned int v6; // r11
  unsigned int v7; // r2
  unsigned int v8; // r6
  unsigned int v9; // r0
  int v10; // r10
  int v11; // r8
  int v12; // r5
  int v13; // r4
  int v14; // r7
  _DWORD *v15; // r1
  int v16; // r2
  int v17; // r1
  int v18; // r7
  int v19; // lr
  int v20; // r5
  int v21; // r12
  int v22; // r10
  int v23; // r2
  int v24; // r0
  unsigned int v25; // r12
  unsigned int v26; // r8
  int v27; // r5
  int v28; // r6
  bool v29; // zf
  int v30; // r1
  unsigned int v31; // r4
  unsigned int v32; // r2
  unsigned __int8 v33; // r11^2
  int v34; // r0
  int v35; // lr
  char *v36; // r9
  int v37; // r5
  int v38; // r0
  int v39; // r8
  int v40; // r6
  int v41; // r4
  int v42; // r1
  int v43; // r6
  int v44; // r0
  int v45; // r1
  unsigned int v46; // r3
  int v48; // [sp+0h] [bp-1Ch]
  _DWORD *v49; // [sp+0h] [bp-1Ch]
  int v50; // [sp+8h] [bp-14h]
  int v53; // [sp+14h] [bp-8h]

  v3 = a3 + 20;
  v4 = a3[1];
  v5 = a3[2];
  v53 = (int)a3[60] >> 1;
  v6 = (((a1[1] << 16) | (*a1 << 24)) ^ a1[3] | (a1[2] << 8)) ^ *a3;
  v48 = v53;
  v7 = (((a1[13] << 16) | (a1[12] << 24)) ^ a1[15] | (a1[14] << 8)) ^ a3[3];
  v8 = (((a1[5] << 16) | (a1[4] << 24)) ^ a1[7] | (a1[6] << 8)) ^ v4;
  v9 = (a1[11] ^ ((a1[9] << 16) | (a1[8] << 24)) | (a1[10] << 8)) ^ v5;
  while ( 1 )
  {
    v10 = dword_1C858C[HIBYTE(v6) - 52] ^ dword_1C858C[(unsigned __int8)v8 + 204];
    v11 = dword_1C858C[HIBYTE(v8) - 52] ^ dword_1C858C[(unsigned __int8)v9 + 204];
    v12 = dword_1C858C[HIBYTE(v7) - 52];
    v13 = dword_1C858C[(unsigned __int8)v6 + 204];
    v14 = dword_1C858C[(unsigned __int8)v7 + 204];
    v15 = &dword_1C858C[BYTE1(v7)];
    v16 = dword_1C858C[BYTE2(v7) + 460];
    v17 = v15[716];
    v18 = dword_1C858C[HIBYTE(v9) - 52] ^ v14;
    __pld(v3);
    v19 = v12 ^ v13;
    v20 = BYTE2(v9);
    v50 = dword_1C858C[BYTE1(v6) + 716];
    v21 = dword_1C858C[BYTE1(v9) + 716];
    v22 = v10 ^ *(v3 - 16) ^ v16;
    v23 = dword_1C858C[BYTE1(v8) + 716];
    v24 = dword_1C858C[BYTE2(v8) + 460] ^ v18 ^ *(v3 - 14);
    v25 = v22 ^ v21;
    v26 = v11 ^ *(v3 - 15) ^ dword_1C858C[BYTE2(v6) + 460] ^ v17;
    v27 = dword_1C858C[v20 + 460];
    v28 = v19 ^ *(v3 - 13);
    v30 = v48 - 1;
    v29 = v48 == 1;
    __pld(v3 + 1);
    v3 += 8;
    v31 = v50 ^ v24;
    v32 = v23 ^ v27 ^ v28;
    v48 = v30;
    if ( v29 )
      break;
    v6 = dword_1C858C[HIBYTE(v25) - 52]
       ^ dword_1C858C[(unsigned __int8)v26 + 204]
       ^ *(v3 - 20)
       ^ dword_1C858C[BYTE2(v32) + 460]
       ^ dword_1C858C[BYTE1(v31) + 716];
    v8 = dword_1C858C[BYTE1(v32) + 716]
       ^ dword_1C858C[HIBYTE(v26) - 52]
       ^ dword_1C858C[(unsigned __int8)v31 + 204]
       ^ *(v3 - 19)
       ^ dword_1C858C[BYTE2(v25) + 460];
    v9 = dword_1C858C[BYTE1(v25) + 716]
       ^ dword_1C858C[HIBYTE(v31) - 52]
       ^ dword_1C858C[(unsigned __int8)v32 + 204]
       ^ *(v3 - 18)
       ^ dword_1C858C[BYTE2(v26) + 460];
    v7 = dword_1C858C[BYTE2(v31) + 460]
       ^ dword_1C858C[HIBYTE(v32) - 52]
       ^ dword_1C858C[(unsigned __int8)v25 + 204]
       ^ *(v3 - 17)
       ^ dword_1C858C[BYTE1(v26) + 716];
  }
  v33 = BYTE2(v26);
  v49 = &a3[8 * v53];
  v34 = *v49
      ^ *((unsigned __int8 *)&dword_1C858C[972] + (unsigned __int8)v26)
      ^ (*((unsigned __int8 *)&dword_1C858C[972] + HIBYTE(v25)) << 24)
      ^ (*((unsigned __int8 *)&dword_1C858C[972] + BYTE2(v32)) << 16)
      ^ (*((unsigned __int8 *)&dword_1C858C[972] + BYTE1(v31)) << 8);
  v35 = *((unsigned __int8 *)&dword_1C858C[972] + (unsigned __int8)v31);
  v36 = (char *)dword_1C858C + BYTE1(v26);
  a2[3] = *(_BYTE *)v49 ^ *((_BYTE *)&dword_1C858C[972] + (unsigned __int8)v26);
  a2[1] = BYTE2(v34);
  a2[2] = BYTE1(v34);
  *a2 = HIBYTE(v34);
  v37 = *((unsigned __int8 *)&dword_1C858C[972] + HIBYTE(v32));
  v38 = v35
      ^ v49[1]
      ^ (*((unsigned __int8 *)&dword_1C858C[972] + HIBYTE(v26)) << 24)
      ^ (*((unsigned __int8 *)&dword_1C858C[972] + BYTE2(v25)) << 16)
      ^ (*((unsigned __int8 *)&dword_1C858C[972] + BYTE1(v32)) << 8);
  v39 = *((unsigned __int8 *)&dword_1C858C[972] + (unsigned __int8)v32);
  v40 = *((unsigned __int8 *)&dword_1C858C[972] + HIBYTE(v31));
  a2[7] = v38;
  a2[4] = HIBYTE(v38);
  a2[5] = BYTE2(v38);
  a2[6] = BYTE1(v38);
  v41 = *((unsigned __int8 *)&dword_1C858C[972] + BYTE2(v31));
  v42 = v39 ^ v49[2] ^ (v40 << 24);
  v43 = *((unsigned __int8 *)&dword_1C858C[972] + (unsigned __int8)v25);
  v44 = (unsigned __int8)v36[3888];
  v45 = v42
      ^ (*((unsigned __int8 *)&dword_1C858C[972] + v33) << 16)
      ^ (*((unsigned __int8 *)&dword_1C858C[972] + BYTE1(v25)) << 8);
  a2[11] = v45;
  a2[10] = BYTE1(v45);
  a2[9] = BYTE2(v45);
  a2[8] = HIBYTE(v45);
  v46 = v49[3] ^ v43 ^ (v37 << 24) ^ (v41 << 16) ^ (v44 << 8);
  a2[15] = v46;
  a2[12] = HIBYTE(v46);
  a2[13] = BYTE2(v46);
  a2[14] = BYTE1(v46);
  return HIBYTE(v46);
}
