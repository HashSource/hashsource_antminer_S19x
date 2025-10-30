unsigned int __fastcall sub_176CE0(int a1, unsigned __int8 *a2, _DWORD *a3, _BYTE *a4)
{
  _DWORD *v4; // r8
  int v5; // r10
  int v6; // r5
  int v7; // r6
  int v8; // r1
  _DWORD *v9; // lr
  int v10; // r3
  unsigned int v11; // r2
  unsigned int v12; // r3
  int v13; // r11
  int v14; // r4
  int v15; // r9
  int v16; // r0
  int v17; // r4
  int v18; // r12
  int v19; // r11
  int v20; // r2
  int v21; // r4
  int v22; // r3
  int v23; // r0
  int v24; // r4
  int v25; // r2
  int v26; // r6
  int v27; // r1
  unsigned int v28; // r3
  unsigned int v29; // r0
  int v30; // r11
  int v31; // t2
  int v32; // r11
  int v33; // r10
  unsigned int v34; // r2
  int v35; // r5
  unsigned int v36; // r3
  int v37; // r4
  int v38; // r2
  int v39; // r12
  int v40; // r2
  unsigned int v41; // r4
  int v42; // r1
  unsigned int v43; // r3
  int v44; // r11
  int v45; // r3
  int v46; // r10
  unsigned int v47; // r4
  int v48; // r3
  unsigned int v49; // r0
  int v50; // r4
  int v51; // r6
  int v52; // r2
  unsigned int v53; // r5
  int v54; // r1
  unsigned int v55; // r0
  int v56; // r5
  int v57; // t2
  int v58; // r5
  int v59; // r10
  int v60; // r5
  int v61; // r6
  unsigned int v62; // r0
  int v63; // r1
  int v64; // r10
  unsigned int v65; // r2
  unsigned int v66; // r3
  unsigned int result; // r0
  _DWORD *v68; // [sp+4h] [bp-10h]
  _DWORD *v69; // [sp+8h] [bp-Ch]

  v4 = a3 + 20;
  v69 = &a3[16 * a1];
  v5 = (((a2[1] << 16) | (*a2 << 24)) ^ a2[3] | (a2[2] << 8)) ^ *a3;
  v6 = a3[1] ^ (a2[7] ^ ((a2[5] << 16) | (a2[4] << 24)) | (a2[6] << 8));
  v7 = a3[2] ^ (a2[11] ^ ((a2[9] << 16) | (a2[8] << 24)) | (a2[10] << 8));
  v8 = (((a2[13] << 16) | (a2[12] << 24)) ^ a2[15] | (a2[14] << 8)) ^ a3[3];
  while ( 1 )
  {
    v68 = v4 - 4;
    v9 = v4 + 16;
    v10 = *(v4 - 15);
    v11 = v5 ^ *(v4 - 16);
    __pld(v4);
    __pld(v4 + 1);
    v12 = v10 ^ v6;
    v13 = dword_1E6500[HIBYTE(v11)];
    v14 = dword_1E6500[(unsigned __int8)v11 + 256];
    __pld(v4 + 2);
    v15 = dword_1E6500[HIBYTE(v12) + 512];
    v16 = dword_1E6500[(unsigned __int8)v12];
    v17 = v14 ^ v13;
    v18 = BYTE1(v11) + 768;
    v19 = BYTE1(v12) + 256;
    v20 = dword_1E6500[BYTE2(v11) + 512];
    v21 = v17 ^ dword_1E6500[v18];
    v22 = dword_1E6500[BYTE2(v12) + 768];
    v23 = v16 ^ v15 ^ dword_1E6500[v19];
    __pld(v4 + 3);
    v24 = v21 ^ v20;
    v25 = v23 ^ v22 ^ v24;
    v26 = v7 ^ v25;
    v27 = v8 ^ v25 ^ __ROR4__(v24, 8);
    v28 = *(v4 - 13) ^ v27;
    v29 = v26 ^ *(v4 - 14);
    v30 = dword_1E6500[(unsigned __int8)v29 + 256]
        ^ dword_1E6500[HIBYTE(v29)]
        ^ dword_1E6500[BYTE1(v29) + 768]
        ^ dword_1E6500[BYTE2(v29) + 512];
    v31 = __ROR4__(v30, 8);
    v32 = v30
        ^ dword_1E6500[(unsigned __int8)v28]
        ^ dword_1E6500[HIBYTE(v28) + 512]
        ^ dword_1E6500[BYTE1(v28) + 256]
        ^ dword_1E6500[BYTE2(v28) + 768];
    v33 = v5 ^ v32;
    v34 = v33 ^ *(v4 - 12);
    v35 = v6 ^ v31 ^ v32;
    v36 = *(v4 - 11) ^ v35;
    v37 = dword_1E6500[(unsigned __int8)v34 + 256]
        ^ dword_1E6500[HIBYTE(v34)]
        ^ dword_1E6500[BYTE1(v34) + 768]
        ^ dword_1E6500[BYTE2(v34) + 512];
    v38 = dword_1E6500[(unsigned __int8)v36]
        ^ dword_1E6500[HIBYTE(v36) + 512]
        ^ dword_1E6500[BYTE1(v36) + 256]
        ^ dword_1E6500[BYTE2(v36) + 768]
        ^ v37;
    v39 = v38 ^ __ROR4__(v37, 8);
    v40 = v38 ^ v26;
    v41 = v40 ^ *(v4 - 10);
    v42 = v39 ^ v27;
    v43 = *(v4 - 9) ^ v42;
    v44 = dword_1E6500[(unsigned __int8)v41 + 256]
        ^ dword_1E6500[HIBYTE(v41)]
        ^ dword_1E6500[BYTE1(v41) + 768]
        ^ dword_1E6500[BYTE2(v41) + 512];
    v45 = v44
        ^ dword_1E6500[(unsigned __int8)v43]
        ^ dword_1E6500[HIBYTE(v43) + 512]
        ^ dword_1E6500[BYTE1(v43) + 256]
        ^ dword_1E6500[BYTE2(v43) + 768];
    v46 = v33 ^ v45;
    v47 = v46 ^ *(v4 - 8);
    v48 = v45 ^ v35 ^ __ROR4__(v44, 8);
    v49 = *(v4 - 7) ^ v48;
    v50 = dword_1E6500[BYTE2(v47) + 512]
        ^ dword_1E6500[(unsigned __int8)v47 + 256]
        ^ dword_1E6500[HIBYTE(v47)]
        ^ dword_1E6500[BYTE1(v47) + 768];
    v51 = dword_1E6500[(unsigned __int8)v49]
        ^ dword_1E6500[HIBYTE(v49) + 512]
        ^ dword_1E6500[BYTE1(v49) + 256]
        ^ dword_1E6500[BYTE2(v49) + 768]
        ^ v50;
    v52 = v40 ^ v51;
    v53 = *(v4 - 6) ^ v52;
    v54 = v42 ^ v51 ^ __ROR4__(v50, 8);
    v55 = *(v4 - 5) ^ v54;
    v56 = dword_1E6500[BYTE2(v53) + 512]
        ^ dword_1E6500[(unsigned __int8)v53 + 256]
        ^ dword_1E6500[HIBYTE(v53)]
        ^ dword_1E6500[BYTE1(v53) + 768];
    v57 = __ROR4__(v56, 8);
    v58 = v56
        ^ dword_1E6500[(unsigned __int8)v55]
        ^ dword_1E6500[HIBYTE(v55) + 512]
        ^ dword_1E6500[BYTE1(v55) + 256]
        ^ dword_1E6500[BYTE2(v55) + 768];
    v59 = v46 ^ v58;
    v60 = v58 ^ v48 ^ v57;
    if ( v69 == v68 )
      break;
    v4 += 16;
    v6 = v60 ^ __ROR4__(v59 & *(v9 - 20), 31);
    v7 = (*(v9 - 17) | v54) ^ v52;
    v8 = v54 ^ __ROR4__(*(v9 - 18) & v7, 31);
    v5 = (v6 | *(v9 - 19)) ^ v59;
  }
  v61 = v52 ^ *v69;
  v62 = v60 ^ v69[3];
  v63 = v54 ^ v69[1];
  v64 = v59 ^ v69[2];
  *a4 = HIBYTE(v61);
  a4[3] = v61;
  a4[7] = v63;
  a4[11] = v64;
  a4[15] = v62;
  a4[2] = BYTE1(v61);
  v65 = HIBYTE(v62);
  a4[4] = HIBYTE(v63);
  v66 = HIWORD(v62);
  result = v62 >> 8;
  a4[1] = BYTE2(v61);
  a4[5] = BYTE2(v63);
  a4[6] = BYTE1(v63);
  a4[8] = HIBYTE(v64);
  a4[9] = BYTE2(v64);
  a4[10] = BYTE1(v64);
  a4[12] = v65;
  a4[13] = v66;
  a4[14] = result;
  return result;
}
