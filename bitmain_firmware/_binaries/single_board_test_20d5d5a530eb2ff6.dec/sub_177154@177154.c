unsigned int __fastcall sub_177154(int a1, unsigned __int8 *a2, int a3, _BYTE *a4)
{
  _DWORD *v4; // r6
  int v5; // r10
  int v6; // lr
  int v7; // r3
  int v8; // r12
  int v9; // r1
  int v10; // r2
  unsigned int v11; // r1
  unsigned int v12; // r2
  int v13; // r9
  int v14; // r0
  int v15; // r7
  int v16; // r4
  int v17; // r11
  int v18; // r1
  int v19; // r4
  int v20; // r2
  int v21; // r0
  int v22; // r7
  int v23; // r4
  int v24; // lr
  unsigned int v25; // r1
  int v26; // r12
  unsigned int v27; // r2
  int v28; // r1
  int v29; // r0
  int v30; // r10
  int v31; // r3
  unsigned int v32; // r1
  unsigned int v33; // r2
  int v34; // r7
  int v35; // r4
  int v36; // r7
  int v37; // r4
  unsigned int v38; // r1
  int v39; // r12
  unsigned int v40; // r2
  int v41; // r0
  int v42; // t2
  int v43; // r0
  int v44; // r10
  int v45; // r0
  unsigned int v46; // r2
  unsigned int v47; // r3
  int v48; // r7
  _DWORD *v49; // r9
  int v50; // lr
  int v51; // r7
  int v52; // lr
  unsigned int v53; // r1
  int v54; // r12
  unsigned int v55; // r2
  int v56; // r1
  int v57; // r2
  int v58; // r10
  int v59; // r2
  char *v60; // r3
  int v61; // r4
  int v62; // r0
  int v63; // r1
  int v64; // r3
  int v65; // lr
  int v66; // r12
  unsigned int v67; // r10
  int v68; // r3
  _DWORD *v70; // [sp+0h] [bp-14h]
  _DWORD *v73; // [sp+Ch] [bp-8h]

  v4 = (_DWORD *)(a3 + (a1 << 6) - 72);
  v73 = (_DWORD *)(a3 + (a1 << 6));
  v5 = (((a2[1] << 16) | (*a2 << 24)) ^ a2[3] | (a2[2] << 8)) ^ *v73;
  v6 = (((a2[9] << 16) | (a2[8] << 24)) ^ a2[11] | (a2[10] << 8)) ^ v73[2];
  v7 = v73[1] ^ (((a2[5] << 16) | (a2[4] << 24)) ^ a2[7] | (a2[6] << 8));
  v8 = (((a2[13] << 16) | (a2[12] << 24)) ^ a2[15] | (a2[14] << 8)) ^ v73[3];
  v70 = (_DWORD *)(a3 + 16);
  while ( 1 )
  {
    v9 = v4[16];
    v10 = v4[17];
    __pld(v4);
    v11 = v5 ^ v9;
    __pld(v4 + 1);
    v12 = v10 ^ v7;
    __pld(v4 - 2);
    v13 = dword_1E6500[HIBYTE(v12) + 512];
    v14 = dword_1E6500[(unsigned __int8)v12];
    v15 = BYTE1(v11) + 768;
    v16 = dword_1E6500[(unsigned __int8)v11 + 256] ^ dword_1E6500[HIBYTE(v11)];
    v17 = BYTE1(v12) + 256;
    v18 = dword_1E6500[BYTE2(v11) + 512];
    v19 = v16 ^ dword_1E6500[v15];
    v20 = dword_1E6500[BYTE2(v12) + 768];
    v21 = v14 ^ v13 ^ dword_1E6500[v17];
    __pld(v4 - 1);
    v22 = v19 ^ v18;
    v23 = v21 ^ v20 ^ v19 ^ v18;
    v24 = v6 ^ v23;
    v25 = v24 ^ v4[14];
    v26 = v23 ^ __ROR4__(v22, 8) ^ v8;
    v27 = v26 ^ v4[15];
    v28 = dword_1E6500[BYTE2(v25) + 512]
        ^ dword_1E6500[(unsigned __int8)v25 + 256]
        ^ dword_1E6500[HIBYTE(v25)]
        ^ dword_1E6500[BYTE1(v25) + 768];
    v29 = v28
        ^ dword_1E6500[(unsigned __int8)v27]
        ^ dword_1E6500[HIBYTE(v27) + 512]
        ^ dword_1E6500[BYTE1(v27) + 256]
        ^ dword_1E6500[BYTE2(v27) + 768];
    v30 = v5 ^ v29;
    v31 = v7 ^ __ROR4__(v28, 8) ^ v29;
    v32 = v30 ^ v4[12];
    v33 = v4[13] ^ v31;
    v34 = dword_1E6500[(unsigned __int8)v32 + 256]
        ^ dword_1E6500[HIBYTE(v32)]
        ^ dword_1E6500[BYTE1(v32) + 768]
        ^ dword_1E6500[BYTE2(v32) + 512];
    v35 = dword_1E6500[(unsigned __int8)v33]
        ^ dword_1E6500[HIBYTE(v33) + 512]
        ^ dword_1E6500[BYTE1(v33) + 256]
        ^ dword_1E6500[BYTE2(v33) + 768]
        ^ v34;
    v36 = v35 ^ __ROR4__(v34, 8);
    v37 = v24 ^ v35;
    v38 = v4[10] ^ v37;
    v39 = v36 ^ v26;
    v40 = v39 ^ v4[11];
    v41 = dword_1E6500[BYTE1(v38) + 768]
        ^ dword_1E6500[(unsigned __int8)v38 + 256]
        ^ dword_1E6500[HIBYTE(v38)]
        ^ dword_1E6500[BYTE2(v38) + 512];
    v42 = __ROR4__(v41, 8);
    v43 = v41
        ^ dword_1E6500[(unsigned __int8)v40]
        ^ dword_1E6500[HIBYTE(v40) + 512]
        ^ dword_1E6500[BYTE1(v40) + 256]
        ^ dword_1E6500[BYTE2(v40) + 768];
    v44 = v30 ^ v43;
    v45 = v31 ^ v42 ^ v43;
    v46 = v44 ^ v4[8];
    v47 = v4[9] ^ v45;
    v48 = dword_1E6500[(unsigned __int8)v46 + 256]
        ^ dword_1E6500[HIBYTE(v46)]
        ^ dword_1E6500[BYTE1(v46) + 768]
        ^ dword_1E6500[BYTE2(v46) + 512];
    v49 = v4 - 16;
    v50 = v48
        ^ dword_1E6500[(unsigned __int8)v47]
        ^ dword_1E6500[HIBYTE(v47) + 512]
        ^ dword_1E6500[BYTE1(v47) + 256]
        ^ dword_1E6500[BYTE2(v47) + 768];
    v51 = v50 ^ __ROR4__(v48, 8);
    v52 = v37 ^ v50;
    v53 = v52 ^ v4[6];
    v54 = v51 ^ v39;
    v55 = v54 ^ v4[7];
    v56 = dword_1E6500[BYTE2(v53) + 512]
        ^ dword_1E6500[(unsigned __int8)v53 + 256]
        ^ dword_1E6500[HIBYTE(v53)]
        ^ dword_1E6500[BYTE1(v53) + 768];
    v57 = dword_1E6500[(unsigned __int8)v55]
        ^ dword_1E6500[HIBYTE(v55) + 512]
        ^ dword_1E6500[BYTE1(v55) + 256]
        ^ dword_1E6500[BYTE2(v55) + 768]
        ^ v56;
    v58 = v44 ^ v57;
    v59 = v57 ^ v45 ^ __ROR4__(v56, 8);
    if ( v70 == v4 + 6 )
      break;
    v4 -= 16;
    v7 = v59 ^ __ROR4__(v58 & v49[20], 31);
    v6 = (v54 | v49[19]) ^ v52;
    v8 = v54 ^ __ROR4__(v6 & v49[18], 31);
    v5 = (v49[21] | v7) ^ v58;
  }
  v60 = (char *)v73 - (((unsigned int)v73 - a3 - 64) & 0xFFFFFFC0);
  v61 = *((_DWORD *)v60 - 16);
  v62 = *((_DWORD *)v60 - 15);
  v63 = *((_DWORD *)v60 - 14);
  v64 = *((_DWORD *)v60 - 13);
  v65 = v52 ^ v61;
  a4[3] = v65;
  v66 = v54 ^ v62;
  v67 = v58 ^ v63;
  v68 = v64 ^ v59;
  *a4 = HIBYTE(v65);
  a4[11] = v67;
  a4[15] = v68;
  a4[2] = BYTE1(v65);
  a4[4] = HIBYTE(v66);
  a4[7] = v66;
  a4[1] = BYTE2(v65);
  a4[5] = BYTE2(v66);
  a4[6] = BYTE1(v66);
  a4[8] = HIBYTE(v67);
  a4[9] = BYTE2(v67);
  a4[10] = BYTE1(v67);
  a4[12] = HIBYTE(v68);
  a4[13] = BYTE2(v68);
  a4[14] = BYTE1(v68);
  return HIWORD(v67);
}
