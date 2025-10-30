int __fastcall sub_1670FC(unsigned __int64 *a1, int a2, int a3)
{
  __int64 v5; // r8
  __int64 v6; // r6
  __int64 v7; // r10
  __int64 v8; // r0
  int v9; // t2
  int v10; // r3
  __int64 v11; // r4
  __int64 v12; // r6
  __int64 v13; // r0
  __int64 v14; // kr00_8
  __int64 v15; // r6
  __int64 v16; // r2
  unsigned __int64 v17; // r10
  unsigned __int64 v18; // r0
  __int64 v19; // kr08_8
  __int64 v20; // r2
  unsigned __int64 v21; // r4
  __int64 v22; // r8
  __int64 v23; // r6
  unsigned int v24; // t2
  unsigned __int64 v25; // r6
  unsigned __int64 v26; // r0
  unsigned __int64 v27; // r6
  unsigned __int64 v28; // r0
  __int64 v29; // r8
  int v30; // t2
  unsigned __int64 v31; // r2
  unsigned __int64 v32; // r10
  unsigned __int64 v33; // r4
  unsigned __int64 v34; // r8
  __int64 v35; // r4
  __int64 v36; // r0
  __int64 v37; // r10
  unsigned __int64 v38; // r0
  int v40; // [sp+0h] [bp-64h]
  int v41; // [sp+4h] [bp-60h]
  int v42; // [sp+8h] [bp-5Ch]
  int v43; // [sp+8h] [bp-5Ch]
  int v44; // [sp+Ch] [bp-58h]
  __int64 v45; // [sp+10h] [bp-54h]
  unsigned __int64 v46; // [sp+18h] [bp-4Ch]
  unsigned __int64 v47; // [sp+20h] [bp-44h]
  __int64 v48; // [sp+28h] [bp-3Ch]
  unsigned __int64 v49; // [sp+30h] [bp-34h]
  __int64 v50; // [sp+30h] [bp-34h]
  unsigned __int64 v51; // [sp+30h] [bp-34h]
  unsigned __int64 v52; // [sp+30h] [bp-34h]
  __int64 v53; // [sp+38h] [bp-2Ch]
  unsigned __int64 v54; // [sp+38h] [bp-2Ch]
  unsigned __int64 v55; // [sp+38h] [bp-2Ch]
  __int64 v56; // [sp+38h] [bp-2Ch]
  unsigned __int64 v57; // [sp+38h] [bp-2Ch]
  int v58; // [sp+40h] [bp-24h]
  unsigned __int64 v59; // [sp+40h] [bp-24h]
  int v60; // [sp+44h] [bp-20h]
  int v61; // [sp+44h] [bp-20h]
  __int64 v62; // [sp+48h] [bp-1Ch]
  __int64 v63; // [sp+48h] [bp-1Ch]
  __int64 v64; // [sp+50h] [bp-14h]
  unsigned __int64 v65; // [sp+50h] [bp-14h]
  int v66; // [sp+58h] [bp-Ch]
  int v67; // [sp+5Ch] [bp-8h]

  v5 = *(_QWORD *)(a2 + 16) ^ *(_QWORD *)(a2 + 56) ^ *(_QWORD *)(a2 + 96);
  v48 = *(_QWORD *)(a2 + 128)
      ^ *(_QWORD *)(a2 + 88)
      ^ *(_QWORD *)(a2 + 48)
      ^ *(_QWORD *)(a2 + 8)
      ^ *(_QWORD *)(a2 + 168);
  v6 = *(_QWORD *)(a2 + 104) ^ *(_QWORD *)(a2 + 24) ^ *(_QWORD *)(a2 + 64);
  v41 = *(_DWORD *)(a2 + 128)
      ^ *(_DWORD *)(a2 + 88)
      ^ *(_DWORD *)(a2 + 48)
      ^ *(_DWORD *)(a2 + 8)
      ^ *(_DWORD *)(a2 + 168);
  v7 = *(_QWORD *)(a2 + 176) ^ *(_QWORD *)(a2 + 136) ^ v5;
  v8 = *(_QWORD *)(a2 + 160) ^ *(_QWORD *)(a2 + 120) ^ *(_QWORD *)(a2 + 80) ^ *(_QWORD *)a2 ^ *(_QWORD *)(a2 + 40);
  v47 = *(_QWORD *)(a2 + 144) ^ v6 ^ *(_QWORD *)(a2 + 184);
  LODWORD(v45) = __ROR4__(HIDWORD(v7), 31) ^ v8;
  HIDWORD(v45) = *(_DWORD *)(a2 + 176) ^ *(_DWORD *)(a2 + 136) ^ v5 ^ HIDWORD(v8);
  v62 = *(_QWORD *)(a2 + 192)
      ^ *(_QWORD *)(a2 + 152)
      ^ *(_QWORD *)(a2 + 32)
      ^ *(_QWORD *)(a2 + 72)
      ^ *(_QWORD *)(a2 + 112);
  v9 = __ROR4__(HIDWORD(v47), 31);
  LODWORD(v47) = v47 ^ __ROR4__(HIDWORD(v8), 31);
  HIDWORD(v47) ^= v8;
  v10 = HIDWORD(v48);
  LODWORD(v48) = v48 ^ v9;
  HIDWORD(v48) ^= *(_DWORD *)(a2 + 144) ^ v6 ^ *(_DWORD *)(a2 + 184);
  LODWORD(v46) = v7 ^ __ROR4__(HIDWORD(v62), 31);
  HIDWORD(v46) = HIDWORD(v7) ^ v62;
  v11 = *(_QWORD *)(a2 + 48) ^ v45;
  v12 = *(_QWORD *)(a2 + 96) ^ v48;
  v13 = *(_QWORD *)(a2 + 144) ^ v46;
  HIDWORD(v13) = __ROR4__(HIDWORD(v11), 10);
  v14 = v13;
  HIDWORD(v11) = __ROR4__(HIDWORD(v12), 10);
  HIDWORD(v13) = __ROR4__(v12, 11);
  v15 = qword_1DF9F8[a3];
  HIDWORD(v53) = HIDWORD(v13);
  LODWORD(v16) = v62 ^ __ROR4__(v10, 31);
  v42 = v16;
  v44 = HIDWORD(v62) ^ v41;
  v49 = __PAIR64__(__ROR4__(v14, 22), __ROR4__((*(_QWORD *)(a2 + 144) ^ v46) >> 32, 21));
  v17 = __PAIR64__(__ROR4__((*(_QWORD *)(a2 + 192) ^ v47) >> 32, 25), __ROR4__(*(_DWORD *)(a2 + 192) ^ v47, 25));
  v18 = __PAIR64__(HIDWORD(v14), __ROR4__(v11, 10));
  LODWORD(v53) = HIDWORD(v11);
  HIDWORD(v16) = HIDWORD(v62) ^ v41;
  v63 = *(_QWORD *)a2 ^ v16;
  LODWORD(v64) = HIDWORD(v11) & ~(_DWORD)v18;
  HIDWORD(v64) = HIDWORD(v53) & ~HIDWORD(v14);
  LODWORD(v16) = v63 ^ v15;
  v19 = v63;
  v60 = HIDWORD(v63) ^ HIDWORD(v15);
  LODWORD(v63) = v18 & ~(_DWORD)v63;
  HIDWORD(v63) = HIDWORD(v14) & ~HIDWORD(v63);
  *a1 = v64 ^ __PAIR64__(v60, v16);
  a1[1] = v49 & ~v53 ^ v18;
  a1[4] = v63 ^ v17;
  a1[2] = v53 ^ v17 & ~v49;
  a1[3] = v49 ^ v19 & ~v17;
  v20 = *(_QWORD *)(a2 + 72);
  v21 = *(_QWORD *)(a2 + 80);
  v22 = *(_QWORD *)(a2 + 128);
  HIDWORD(v18) = HIDWORD(v47) ^ HIDWORD(v20);
  v61 = __ROR4__(v42 ^ v21, 31);
  HIDWORD(v20) = __ROR4__(v22 ^ v45, 10);
  v23 = *(_QWORD *)(a2 + 176);
  HIDWORD(v17) = __ROR4__(HIDWORD(v18), 22);
  HIDWORD(v64) = __ROR4__(v23 ^ v48, 2);
  v24 = __ROR4__(HIDWORD(v23) ^ HIDWORD(v48), 1);
  LODWORD(v64) = 0;
  v25 = __PAIR64__(HIDWORD(v20), __ROR4__(v46 ^ *(_DWORD *)(a2 + 24), 18));
  v54 = __PAIR64__(HIDWORD(v17), __ROR4__(v47 ^ v20, 22));
  v26 = __PAIR64__(__ROR4__((v46 ^ *(_QWORD *)(a2 + 24)) >> 32, 18), v25);
  LODWORD(v25) = __ROR4__(HIDWORD(v22) ^ HIDWORD(v45), 9);
  v50 = v64 | v24;
  v58 = __ROR4__(v44 ^ HIDWORD(v21), 30);
  LODWORD(v21) = v25 & ~v58;
  HIDWORD(v21) = HIDWORD(v20) & ~v61;
  LODWORD(v17) = v54;
  a1[5] = v26 ^ __PAIR64__(v61 & (unsigned int)~HIDWORD(v17), v58 & (unsigned int)~(_DWORD)v54);
  v55 = v54 ^ v21;
  a1[9] = v50 ^ v17 & ~v26;
  LODWORD(v21) = v58 ^ v50 & ~(_DWORD)v25;
  HIDWORD(v21) = v61 ^ HIDWORD(v64) & ~HIDWORD(v25);
  a1[7] = v21;
  a1[6] = v55;
  a1[8] = v26 & ~v50 ^ v25;
  v27 = *(_QWORD *)(a2 + 104);
  v28 = *(_QWORD *)(a2 + 160);
  v56 = v48 ^ *(_QWORD *)(a2 + 56);
  v29 = *(_QWORD *)(a2 + 8);
  v67 = __ROR4__(HIDWORD(v56), 29);
  HIDWORD(v50) = __ROR4__(v46 ^ v27, 20);
  HIDWORD(v20) = __ROR4__(HIDWORD(v45) ^ HIDWORD(v29), 31);
  HIDWORD(v29) = __ROR4__(v44 ^ HIDWORD(v28), 23);
  HIDWORD(v28) = __ROR4__(HIDWORD(v46) ^ HIDWORD(v27), 19);
  HIDWORD(v27) = v45 ^ v29;
  v30 = __ROR4__(v56, 29);
  LODWORD(v27) = HIDWORD(v20);
  v31 = __PAIR64__(HIDWORD(v50), HIDWORD(v28));
  v51 = __PAIR64__(__ROR4__(HIDWORD(v47) ^ *(_DWORD *)(a2 + 156), 28), __ROR4__(v47 ^ *(_DWORD *)(a2 + 152), 28));
  v32 = __PAIR64__(HIDWORD(v29), __ROR4__(v42 ^ v28, 23));
  LODWORD(v29) = v27 & ~(_DWORD)v32;
  HIDWORD(v29) = HIDWORD(v27) & ~HIDWORD(v29);
  LODWORD(v63) = v30 & ~(_DWORD)v27;
  HIDWORD(v63) = v67 & ~HIDWORD(v27);
  LODWORD(v27) = HIDWORD(v28) & ~v30 ^ v27;
  HIDWORD(v27) ^= HIDWORD(v31) & ~v67;
  LODWORD(v21) = v30 ^ v51 & ~HIDWORD(v28);
  HIDWORD(v21) = v67 ^ HIDWORD(v51) & ~HIDWORD(v31);
  a1[10] = v27;
  a1[11] = v21;
  a1[14] = v63 ^ v32;
  a1[12] = v32 & ~v51 ^ v31;
  a1[13] = v51 ^ v29;
  v33 = *(_QWORD *)(a2 + 40);
  LODWORD(v33) = __ROR4__(v42 ^ v33, 14);
  v59 = __PAIR64__(__ROR4__(v47 ^ *(_DWORD *)(a2 + 32), 19), __ROR4__(HIDWORD(v47) ^ *(_DWORD *)(a2 + 36), 18));
  v65 = __PAIR64__(__ROR4__(HIDWORD(v45) ^ *(_DWORD *)(a2 + 92), 27), __ROR4__(v45 ^ *(_DWORD *)(a2 + 88), 27));
  v57 = __PAIR64__(__ROR4__(v48 ^ *(_DWORD *)(a2 + 136), 25), __ROR4__(HIDWORD(v48) ^ *(_DWORD *)(a2 + 140), 24));
  HIDWORD(v27) = __ROR4__(v44 ^ HIDWORD(v33), 14);
  v52 = __PAIR64__(__ROR4__(*(_DWORD *)(a2 + 188) ^ HIDWORD(v46), 4), __ROR4__(*(_DWORD *)(a2 + 184) ^ v46, 4));
  LODWORD(v31) = v65 & ~(_DWORD)v33;
  HIDWORD(v31) = HIDWORD(v65) & ~HIDWORD(v27);
  v66 = v33 & ~(_DWORD)v59;
  LODWORD(v33) = v33 ^ v57 & ~(_DWORD)v65;
  HIDWORD(v33) = HIDWORD(v27) ^ HIDWORD(v57) & ~HIDWORD(v65);
  a1[16] = v33;
  a1[15] = v59 ^ v31;
  LODWORD(v28) = v66 ^ v52;
  HIDWORD(v28) = HIDWORD(v27) & ~HIDWORD(v59) ^ HIDWORD(v52);
  a1[17] = v65 ^ v52 & ~v57;
  a1[19] = v28;
  a1[18] = v57 ^ v59 & ~v52;
  v34 = *(_QWORD *)(a2 + 64);
  v35 = v48 ^ *(_QWORD *)(a2 + 16);
  v36 = *(_QWORD *)(a2 + 120);
  v37 = *(_QWORD *)(a2 + 168);
  HIDWORD(v52) = __ROR4__(HIDWORD(v35), 1);
  HIDWORD(v57) = __ROR4__(v46 ^ v34, 5);
  HIDWORD(v59) = __ROR4__(v47 ^ *(_DWORD *)(a2 + 112), 13);
  HIDWORD(v63) = __ROR4__(v42 ^ v36, 12);
  HIDWORD(v35) = __ROR4__(v37 ^ v45, 31);
  HIDWORD(v65) = __ROR4__(HIDWORD(v37) ^ HIDWORD(v45), 31);
  v40 = __ROR4__(HIDWORD(v46) ^ HIDWORD(v34), 4);
  v43 = __ROR4__(v35, 1);
  LODWORD(v46) = __ROR4__((v47 ^ *(_QWORD *)(a2 + 112)) >> 32, 12);
  LODWORD(v45) = __ROR4__(v44 ^ HIDWORD(v36), 11);
  HIDWORD(v37) = HIDWORD(v52) & ~HIDWORD(v65);
  LODWORD(v34) = v43 ^ v46 & ~v40;
  HIDWORD(v34) = HIDWORD(v52) ^ HIDWORD(v59) & ~HIDWORD(v57);
  LODWORD(v38) = v40 ^ v45 & ~(_DWORD)v46;
  HIDWORD(v38) = HIDWORD(v57) ^ HIDWORD(v63) & ~HIDWORD(v59);
  LODWORD(v27) = v40 & ~v43 ^ HIDWORD(v35);
  HIDWORD(v27) = HIDWORD(v57) & ~HIDWORD(v52) ^ HIDWORD(v65);
  LODWORD(v31) = v46 ^ HIDWORD(v35) & ~(_DWORD)v45;
  HIDWORD(v31) = HIDWORD(v59) ^ HIDWORD(v65) & ~HIDWORD(v63);
  LODWORD(v37) = v43 & ~HIDWORD(v35);
  a1[20] = v34;
  a1[21] = v38;
  a1[24] = v27;
  a1[22] = v31;
  a1[23] = __PAIR64__(HIDWORD(v63), v45) ^ v37;
  return v38;
}
