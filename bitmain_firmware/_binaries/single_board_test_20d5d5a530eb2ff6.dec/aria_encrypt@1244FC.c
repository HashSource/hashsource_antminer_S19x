unsigned __int8 *__fastcall aria_encrypt(unsigned __int8 *result, _BYTE *a2, _DWORD *a3)
{
  bool v3; // zf
  int v4; // r3
  int v5; // r4
  bool v6; // zf
  unsigned int v7; // r7
  unsigned int v8; // r8
  int v9; // r1
  int v10; // r5
  unsigned int v11; // r0
  unsigned int v12; // r1
  int v13; // lr
  int v14; // r3
  int v15; // r0
  int v16; // r1
  unsigned int v17; // r4
  int v18; // r1
  int v19; // t2
  unsigned int v20; // r4
  unsigned int v21; // r8
  int v22; // r0
  int v23; // lr
  unsigned int v24; // r12
  unsigned int v25; // r7
  unsigned int v26; // r3
  unsigned int v27; // r1
  _DWORD *v28; // r0
  unsigned int v29; // r9
  unsigned int v30; // r4
  int v31; // r9
  int v32; // r1
  int v33; // r7
  int v34; // r3
  int v35; // lr
  int v36; // r9
  unsigned int v37; // r3
  int v38; // r9
  unsigned int v39; // r1
  unsigned int v40; // r2
  unsigned int v41; // r3
  int v42; // r8
  int v43; // r1
  int v44; // r8
  int v45; // t2
  int v46; // r12
  unsigned int v47; // r2
  unsigned int v48; // r9
  unsigned int v49; // r1
  unsigned int v50; // r12
  int v51; // r3
  int v52; // r9
  int v53; // r3
  int v54; // r2
  int v55; // r12
  int v56; // r9
  int v57; // t2
  unsigned int v58; // r5
  unsigned int v59; // r3
  int v60; // r12
  int v61; // r9
  int v62; // r0
  int v63; // r5
  int v64; // r1
  int v65; // r4
  int v66; // r10
  unsigned int v67; // r1
  int v68; // [sp+4h] [bp-18h]
  _DWORD *v70; // [sp+10h] [bp-Ch]
  int v71; // [sp+14h] [bp-8h]

  v3 = a3 == 0;
  if ( a3 )
    v3 = a2 == 0;
  v4 = v3;
  if ( !result )
    v4 |= 1u;
  if ( !v4 )
  {
    v5 = a3[68];
    v71 = v5;
    v6 = (v5 & 0xFFFFFFFD) == 12;
    if ( (v5 & 0xFFFFFFFD) != 0xC )
      v6 = v5 == 16;
    if ( v6 )
    {
      v70 = a3 + 8;
      v7 = result[7] ^ a3[1] ^ (result[4] << 24) ^ (result[5] << 16) ^ (result[6] << 8);
      v8 = result[11] ^ a3[2] ^ (result[8] << 24) ^ (result[9] << 16) ^ (result[10] << 8);
      v9 = result[15] ^ a3[3] ^ (result[12] << 24) ^ (result[13] << 16);
      v10 = result[14];
      v11 = result[3] ^ *a3 ^ (*result << 24) ^ (result[1] << 16) ^ (result[2] << 8);
      v12 = v9 ^ (v10 << 8);
      v13 = *((_DWORD *)&unk_1C95BC + BYTE1(v8))
          ^ *((_DWORD *)&unk_1C95BC + HIBYTE(v8) + 256)
          ^ *((_DWORD *)&unk_1C95BC + (unsigned __int8)v8 + 512)
          ^ *((_DWORD *)&unk_1C95BC + BYTE2(v8) + 768);
      v14 = *((_DWORD *)&unk_1C95BC + BYTE1(v7))
          ^ *((_DWORD *)&unk_1C95BC + HIBYTE(v7) + 256)
          ^ *((_DWORD *)&unk_1C95BC + (unsigned __int8)v7 + 512)
          ^ *((_DWORD *)&unk_1C95BC + BYTE2(v7) + 768)
          ^ v13;
      v15 = *((_DWORD *)&unk_1C95BC + BYTE1(v11))
          ^ *((_DWORD *)&unk_1C95BC + HIBYTE(v11) + 256)
          ^ *((_DWORD *)&unk_1C95BC + (unsigned __int8)v11 + 512)
          ^ *((_DWORD *)&unk_1C95BC + BYTE2(v11) + 768)
          ^ v14;
      v16 = *((_DWORD *)&unk_1C95BC + BYTE1(v12))
          ^ *((_DWORD *)&unk_1C95BC + HIBYTE(v12) + 256)
          ^ *((_DWORD *)&unk_1C95BC + (unsigned __int8)v12 + 512)
          ^ *((_DWORD *)&unk_1C95BC + BYTE2(v12) + 768);
      v17 = v16 ^ v14;
      v18 = v13 ^ v16 ^ v15;
      v19 = __ROR4__(v18, 16);
      v20 = HIBYTE(v17) | (v17 << 24) | ((v17 & 0xFF00) << 8) | ((v17 & 0xFF0000) >> 8);
      v21 = ((v14 ^ v18) << 8) & 0xFF00FF00 ^ ((v14 ^ (unsigned int)v18) >> 8) & 0xFF00FF ^ v19;
      v22 = v15 ^ v21;
      v23 = v19 ^ v20 ^ v22;
      v24 = v22 ^ a3[4];
      v25 = v23 ^ v21 ^ a3[5];
      v26 = v21 ^ v20 ^ a3[7];
      v27 = v23 ^ a3[6];
      v68 = v71 - 2;
      if ( v71 != 2 )
      {
        v28 = a3 + 27;
        v29 = v23 ^ a3[6];
        v30 = v21 ^ v20 ^ a3[7];
        do
        {
          v31 = *((_DWORD *)&unk_1C95BC + BYTE1(v29) + 256)
              ^ *((_DWORD *)&unk_1C95BC + BYTE2(v29) + 512)
              ^ *((_DWORD *)&unk_1C95BC + HIBYTE(v29))
              ^ *((_DWORD *)&unk_1C95BC + (unsigned __int8)v29 + 768);
          v32 = *((_DWORD *)&unk_1C95BC + BYTE1(v25) + 256)
              ^ *((_DWORD *)&unk_1C95BC + HIBYTE(v25))
              ^ *((_DWORD *)&unk_1C95BC + (unsigned __int8)v25 + 768)
              ^ *((_DWORD *)&unk_1C95BC + BYTE2(v25) + 512)
              ^ v31;
          v33 = *(v28 - 18);
          v34 = *((_DWORD *)&unk_1C95BC + BYTE2(v30) + 512)
              ^ *((_DWORD *)&unk_1C95BC + HIBYTE(v30))
              ^ *((_DWORD *)&unk_1C95BC + (unsigned __int8)v30 + 768)
              ^ *((_DWORD *)&unk_1C95BC + BYTE1(v30) + 256);
          v35 = *((_DWORD *)&unk_1C95BC + BYTE1(v24) + 256)
              ^ *((_DWORD *)&unk_1C95BC + HIBYTE(v24))
              ^ *((_DWORD *)&unk_1C95BC + (unsigned __int8)v24 + 768)
              ^ *((_DWORD *)&unk_1C95BC + BYTE2(v24) + 512)
              ^ v32;
          v36 = v31 ^ v34;
          v37 = v34 ^ v32;
          v38 = v36 ^ v35;
          v39 = v32 ^ v38;
          v40 = v39 & 0xFF0000;
          __pld(v28);
          __pld(v28 + 4);
          v41 = (v37 >> 8) & 0xFF00FF ^ (v37 << 8) & 0xFF00FF00;
          v42 = (HIBYTE(v39) | (v39 << 24)) ^ v38 ^ ((v39 & 0xFF00) << 8);
          v43 = *(v28 - 19);
          v28 += 8;
          v44 = v42 ^ (v40 >> 8);
          v45 = __ROR4__(v35, 16);
          v46 = v38 ^ v41 ^ v44 ^ v45;
          v47 = v44 ^ v41 ^ *(v28 - 24);
          v48 = v46 ^ v44 ^ v33;
          v49 = v44 ^ v45 ^ v43;
          v50 = v46 ^ *(v28 - 25);
          v51 = *((_DWORD *)&unk_1C95BC + HIBYTE(v48) + 256)
              ^ *((_DWORD *)&unk_1C95BC + (unsigned __int8)v48 + 512)
              ^ *((_DWORD *)&unk_1C95BC + BYTE2(v48) + 768)
              ^ *((_DWORD *)&unk_1C95BC + BYTE1(v48));
          v52 = *((_DWORD *)&unk_1C95BC + BYTE1(v50))
              ^ *((_DWORD *)&unk_1C95BC + HIBYTE(v50) + 256)
              ^ *((_DWORD *)&unk_1C95BC + (unsigned __int8)v50 + 512)
              ^ *((_DWORD *)&unk_1C95BC + BYTE2(v50) + 768);
          v53 = v51 ^ v52;
          v54 = *((_DWORD *)&unk_1C95BC + HIBYTE(v47) + 256)
              ^ *((_DWORD *)&unk_1C95BC + (unsigned __int8)v47 + 512)
              ^ *((_DWORD *)&unk_1C95BC + BYTE2(v47) + 768)
              ^ *((_DWORD *)&unk_1C95BC + BYTE1(v47));
          v55 = *((_DWORD *)&unk_1C95BC + BYTE1(v49))
              ^ *((_DWORD *)&unk_1C95BC + HIBYTE(v49) + 256)
              ^ *((_DWORD *)&unk_1C95BC + (unsigned __int8)v49 + 512)
              ^ *((_DWORD *)&unk_1C95BC + BYTE2(v49) + 768)
              ^ v53;
          v56 = v52 ^ v54 ^ v55;
          v57 = __ROR4__(v56, 16);
          v58 = ((v54 ^ (unsigned int)v53) >> 24)
              | ((v54 ^ v53) << 24)
              | (((v54 ^ v53) & 0xFF00) << 8)
              | (((v54 ^ v53) & 0xFF0000u) >> 8);
          v59 = ((v53 ^ v56) << 8) & 0xFF00FF00 ^ ((v53 ^ (unsigned int)v56) >> 8) & 0xFF00FF ^ v57;
          v60 = v55 ^ v59;
          v30 = v58 ^ *(v28 - 20) ^ v59;
          v61 = v57 ^ v58 ^ v60;
          v3 = v68 == 2;
          v25 = v61 ^ *(v28 - 22) ^ v59;
          v24 = v60 ^ *(v28 - 23);
          v29 = v61 ^ *(v28 - 21);
          v68 -= 2;
        }
        while ( !v3 );
        v27 = v29;
        v26 = v58 ^ *(v28 - 20) ^ v59;
        v70 += 8 * ((unsigned int)(v71 - 4) >> 1) + 8;
      }
      v62 = *((unsigned __int8 *)&unk_1C95BC + 4 * (unsigned __int8)v27 + 3072)
          | (*((unsigned __int8 *)&unk_1C95BC + 4 * HIBYTE(v27)) << 24)
          | (*((unsigned __int8 *)&unk_1C95BC + 4 * BYTE1(v27) + 1024) << 8)
          | (*((unsigned __int8 *)&unk_1C95BC + 4 * BYTE2(v27) + 2049) << 16);
      v63 = (*((unsigned __int8 *)&unk_1C95BC + 4 * (unsigned __int8)v24 + 3072)
           | (*((unsigned __int8 *)&unk_1C95BC + 4 * HIBYTE(v24)) << 24)
           | (*((unsigned __int8 *)&unk_1C95BC + 4 * BYTE1(v24) + 1024) << 8)
           | (*((unsigned __int8 *)&unk_1C95BC + 4 * BYTE2(v24) + 2049) << 16))
          ^ *v70;
      v64 = v70[2];
      v65 = (*((unsigned __int8 *)&unk_1C95BC + 4 * (unsigned __int8)v25 + 3072)
           | (*((unsigned __int8 *)&unk_1C95BC + 4 * HIBYTE(v25)) << 24)
           | (*((unsigned __int8 *)&unk_1C95BC + 4 * BYTE1(v25) + 1024) << 8)
           | (*((unsigned __int8 *)&unk_1C95BC + 4 * BYTE2(v25) + 2049) << 16))
          ^ v70[1];
      v66 = (*((unsigned __int8 *)&unk_1C95BC + 4 * (unsigned __int8)v26 + 3072)
           | (*((unsigned __int8 *)&unk_1C95BC + 4 * HIBYTE(v26)) << 24)
           | (*((unsigned __int8 *)&unk_1C95BC + 4 * BYTE1(v26) + 1024) << 8)
           | (*((unsigned __int8 *)&unk_1C95BC + 4 * BYTE2(v26) + 2049) << 16))
          ^ v70[3];
      *a2 = HIBYTE(v63);
      v67 = v64 ^ v62;
      a2[3] = v63;
      a2[7] = v65;
      a2[11] = v67;
      a2[1] = BYTE2(v63);
      a2[2] = BYTE1(v63);
      a2[4] = HIBYTE(v65);
      a2[5] = BYTE2(v65);
      a2[6] = BYTE1(v65);
      a2[8] = HIBYTE(v67);
      a2[9] = BYTE2(v67);
      a2[10] = BYTE1(v67);
      a2[12] = HIBYTE(v66);
      a2[15] = v66;
      a2[13] = BYTE2(v66);
      a2[14] = BYTE1(v66);
      return (unsigned __int8 *)HIBYTE(v67);
    }
  }
  return result;
}
