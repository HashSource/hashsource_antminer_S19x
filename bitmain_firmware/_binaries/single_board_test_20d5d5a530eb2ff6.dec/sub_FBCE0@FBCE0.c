int __fastcall sub_FBCE0(unsigned int *a1, int *a2)
{
  unsigned int v2; // r6
  unsigned int v3; // r4
  unsigned int v4; // r1
  unsigned int v5; // r2
  unsigned int v6; // lr
  unsigned int v7; // r12
  unsigned int v8; // r7
  unsigned int v9; // r10
  unsigned int v10; // r5
  unsigned int v11; // r0
  unsigned int v12; // r2
  unsigned int v13; // r4
  int v14; // r10
  int v15; // r5
  unsigned int v16; // r8
  unsigned int v17; // r12
  int v18; // r4
  unsigned int v19; // r11
  int v20; // r10
  unsigned int v21; // r7
  unsigned int v22; // r4
  unsigned int v23; // lr
  int v24; // r0
  int v25; // r9
  int v26; // r1
  int v27; // r8
  int v28; // r0
  int v29; // r7
  int v30; // r9
  int v31; // r8
  int v32; // r7
  int v33; // r8
  unsigned int v34; // r12
  int v35; // r6
  int v36; // r7
  int v37; // r6
  int v38; // r1
  unsigned int v39; // r7
  unsigned int v40; // r8
  unsigned int v41; // r11
  unsigned int v42; // r1
  unsigned int v43; // r0
  unsigned int v44; // r6
  unsigned int v45; // r5
  int v46; // r4
  int v47; // r10
  int v48; // r9
  int v49; // r8
  int v50; // lr
  int v51; // r8
  int v52; // r4
  int v53; // r7
  int v54; // r8
  unsigned int v55; // r0
  unsigned int v56; // r6
  int v57; // r5
  int v58; // r12
  int v59; // r10
  unsigned int v60; // r11
  unsigned int v61; // r4
  unsigned int v62; // r5
  unsigned int v63; // r2
  int v64; // r9
  int v65; // r8
  int v66; // lr
  int v67; // r8
  int v68; // r7
  unsigned int v69; // r10
  int v70; // r6
  int v71; // lr
  unsigned int v72; // r7
  unsigned int v73; // r8
  unsigned int v74; // r4
  unsigned int v75; // r11
  int v76; // r12
  unsigned int v77; // r6
  unsigned int v78; // r5
  int v79; // r7
  int v80; // lr
  int v81; // r12
  unsigned int v82; // r1
  int v83; // r7
  int v84; // r2
  int v85; // lr
  int v86; // r12
  int v87; // r11
  int v88; // r12
  int v89; // r9
  int v90; // r7
  int v91; // lr
  int v92; // r6
  int v93; // lr
  int v94; // r6
  int v95; // r4
  int v96; // r9
  int v97; // r8
  int v98; // r0
  unsigned int v99; // r7
  int v100; // r9
  unsigned int v101; // r1
  int v102; // lr
  int v103; // r0
  int v104; // r12
  int v105; // r3
  int v106; // r4
  int result; // r0
  int v108; // r5
  unsigned int v110; // [sp+4h] [bp-28h]
  unsigned int v111; // [sp+4h] [bp-28h]
  unsigned int v112; // [sp+4h] [bp-28h]
  unsigned int v113; // [sp+4h] [bp-28h]
  _BYTE v114[12]; // [sp+8h] [bp-24h]
  unsigned int v115; // [sp+10h] [bp-1Ch]
  unsigned int v116; // [sp+10h] [bp-1Ch]
  unsigned int v117; // [sp+14h] [bp-18h]
  unsigned int v118; // [sp+18h] [bp-14h]
  unsigned int v119; // [sp+18h] [bp-14h]
  unsigned int v120; // [sp+1Ch] [bp-10h]
  unsigned int v121; // [sp+1Ch] [bp-10h]
  int v122; // [sp+1Ch] [bp-10h]
  unsigned int v123; // [sp+20h] [bp-Ch]
  unsigned int v124; // [sp+20h] [bp-Ch]
  unsigned int v125; // [sp+24h] [bp-8h]

  v2 = _byteswap_ulong(a1[3]);
  v3 = _byteswap_ulong(*a1);
  v4 = _byteswap_ulong(a1[2]);
  v5 = _byteswap_ulong(a1[1]);
  v6 = HIBYTE(v2) | (v4 << 8);
  v7 = (v3 << 24) | (v5 >> 8);
  v8 = HIBYTE(v4) | (v2 << 8);
  v9 = (v5 << 24) | (v3 >> 8);
  v10 = v3 + v4 + 1640531527;
  *(_DWORD *)&v114[4] = HIBYTE(v6) | (v8 << 8);
  v11 = (v7 << 24) | (v9 >> 8);
  v110 = (v9 << 24) | (v7 >> 8);
  v12 = v5 - 1640531527 - v2;
  v13 = v4 - 1013904243 + v9;
  v115 = v9 + v6;
  *a2 = dword_1C3ED0[(unsigned __int8)v10]
      ^ dword_1C3ED0[HIBYTE(v10) + 768]
      ^ dword_1C3ED0[BYTE1(v10) + 256]
      ^ dword_1C3ED0[BYTE2(v10) + 512];
  *(_DWORD *)v114 = HIBYTE(v8) | (v6 << 8);
  v14 = dword_1C3ED0[(unsigned __int8)v13] ^ dword_1C3ED0[HIBYTE(v13) + 768];
  v15 = dword_1C3ED0[BYTE1(v13) + 256];
  a2[1] = dword_1C3ED0[(unsigned __int8)v12]
        ^ dword_1C3ED0[HIBYTE(v12) + 768]
        ^ dword_1C3ED0[BYTE1(v12) + 256]
        ^ dword_1C3ED0[BYTE2(v12) + 512];
  v120 = -239350324 - v8 + v110;
  v16 = 1013904243 - v2 + v7;
  v17 = v7 + 2027808486 - v8;
  v18 = v14 ^ v15 ^ dword_1C3ED0[BYTE2(v13) + 512];
  v19 = (v110 << 24) | (v11 >> 8);
  v20 = dword_1C3ED0[(unsigned __int8)v16];
  a2[2] = v18;
  v117 = v6 + 239350324 + v11;
  v21 = v115 - 2027808486;
  v22 = v11 + *(_DWORD *)v114 + 478700647;
  v23 = (v11 << 24) | (v110 >> 8);
  v123 = v110 - 478700647 - *(_DWORD *)&v114[4];
  v24 = dword_1C3ED0[BYTE2(v16) + 512];
  v25 = v20 ^ dword_1C3ED0[HIBYTE(v16) + 768] ^ dword_1C3ED0[BYTE1(v16) + 256];
  v26 = dword_1C3ED0[((v115 - 2027808486) >> 24) + 768];
  v116 = *(__int64 *)v114 >> 24;
  v27 = dword_1C3ED0[(unsigned __int8)v21];
  a2[3] = v25 ^ v24;
  v28 = dword_1C3ED0[HIBYTE(v17) + 768];
  v29 = dword_1C3ED0[BYTE2(v21) + 512] ^ v27 ^ v26 ^ dword_1C3ED0[BYTE1(v21) + 256];
  v30 = dword_1C3ED0[HIBYTE(v117) + 768];
  v31 = dword_1C3ED0[HIBYTE(v120) + 768];
  a2[4] = v29;
  v111 = (v19 << 24) | (v23 >> 8);
  v118 = ((unsigned int)(HIBYTE(*(_DWORD *)&v114[4]) | (*(_DWORD *)v114 << 8)) >> 24) | (v116 << 8);
  v32 = dword_1C3ED0[HIBYTE(v22) + 768];
  a2[5] = dword_1C3ED0[BYTE1(v17) + 256] ^ v28 ^ dword_1C3ED0[(unsigned __int8)v17] ^ dword_1C3ED0[BYTE2(v17) + 512];
  v33 = dword_1C3ED0[(unsigned __int8)v120] ^ v31;
  v34 = (v23 << 24) | (v19 >> 8);
  v35 = dword_1C3ED0[(unsigned __int8)v22];
  a2[6] = dword_1C3ED0[(unsigned __int8)v117] ^ v30 ^ dword_1C3ED0[BYTE1(v117) + 256] ^ dword_1C3ED0[BYTE2(v117) + 512];
  v36 = v32 ^ v35 ^ dword_1C3ED0[BYTE1(v22) + 256];
  v37 = HIBYTE(*(_DWORD *)&v114[4]) | (*(_DWORD *)v114 << 8);
  v38 = v33 ^ dword_1C3ED0[BYTE1(v120) + 256] ^ dword_1C3ED0[BYTE2(v120) + 512];
  a2[8] = dword_1C3ED0[BYTE2(v22) + 512] ^ v36;
  a2[7] = v38;
  v39 = v19 + v37;
  v40 = *(_DWORD *)v114 + 957401293 + v19;
  v41 = HIBYTE(v116) | (v37 << 8);
  v42 = -957401293 - *(_DWORD *)&v114[4] + v23;
  v43 = v23 - 1914802585 - v116;
  v44 = v37 - 465362127 + v34;
  v45 = 465362127 - v116 + v111;
  v121 = (v111 << 24) | (v34 >> 8);
  v125 = v34 + v41;
  *(_DWORD *)&v114[4] = HIBYTE(v118) | (v41 << 8);
  a2[9] = dword_1C3ED0[(unsigned __int8)v123]
        ^ dword_1C3ED0[HIBYTE(v123) + 768]
        ^ dword_1C3ED0[BYTE1(v123) + 256]
        ^ dword_1C3ED0[BYTE2(v123) + 512];
  *(_DWORD *)v114 = (v34 << 24) | (v111 >> 8);
  v46 = dword_1C3ED0[HIBYTE(v42) + 768];
  a2[10] = dword_1C3ED0[(unsigned __int8)v40]
         ^ dword_1C3ED0[HIBYTE(v40) + 768]
         ^ dword_1C3ED0[BYTE1(v40) + 256]
         ^ dword_1C3ED0[BYTE2(v40) + 512];
  v47 = dword_1C3ED0[((v39 + 1914802585) >> 24) + 768];
  v48 = dword_1C3ED0[HIBYTE(v43) + 768];
  v49 = dword_1C3ED0[HIBYTE(v44) + 768];
  a2[11] = dword_1C3ED0[(unsigned __int8)v42] ^ v46 ^ dword_1C3ED0[BYTE1(v42) + 256] ^ dword_1C3ED0[BYTE2(v42) + 512];
  v50 = dword_1C3ED0[HIBYTE(v45) + 768];
  *(_DWORD *)&v114[8] = HIBYTE(v41) | (v118 << 8);
  a2[12] = dword_1C3ED0[(unsigned __int8)(v39 - 103)]
         ^ v47
         ^ dword_1C3ED0[(unsigned __int8)((unsigned __int16)(v39 - 28263) >> 8) + 256]
         ^ dword_1C3ED0[(unsigned __int8)((v39 + 1914802585) >> 16) + 512];
  v51 = dword_1C3ED0[(unsigned __int8)v44] ^ v49;
  v52 = dword_1C3ED0[(unsigned __int8)v45];
  a2[13] = dword_1C3ED0[(unsigned __int8)v43] ^ v48 ^ dword_1C3ED0[BYTE1(v43) + 256] ^ dword_1C3ED0[BYTE2(v43) + 512];
  v53 = dword_1C3ED0[BYTE2(v44) + 512];
  v54 = v51 ^ dword_1C3ED0[BYTE1(v44) + 256];
  v55 = v41 - 1861448508 + v121;
  v124 = 1861448508 - v118 + *(_DWORD *)v114;
  v56 = v111 + 930724254 - v118;
  v57 = v52 ^ v50 ^ dword_1C3ED0[BYTE1(v45) + 256] ^ dword_1C3ED0[BYTE2(v45) + 512];
  a2[14] = v54 ^ v53;
  a2[15] = v57;
  v119 = *(__int64 *)&v114[4] >> 24;
  v112 = *(_DWORD *)v114 - 572070280 - *(_DWORD *)&v114[8];
  v58 = dword_1C3ED0[HIBYTE(v56) + 768];
  v59 = dword_1C3ED0[HIBYTE(v55) + 768];
  v60 = (*(_DWORD *)v114 << 24) | (v121 >> 8);
  v61 = v121 + *(_DWORD *)&v114[4] + 572070280;
  v62 = HIBYTE(*(_DWORD *)&v114[8]) | (*(_DWORD *)&v114[4] << 8);
  a2[16] = dword_1C3ED0[(unsigned __int8)(v125 + 98)]
         ^ dword_1C3ED0[((v125 - 930724254) >> 24) + 768]
         ^ dword_1C3ED0[(unsigned __int8)((unsigned __int16)(v125 + 18018) >> 8) + 256]
         ^ dword_1C3ED0[(unsigned __int8)((v125 - 930724254) >> 16) + 512];
  v63 = (v121 << 24) | (*(_DWORD *)v114 >> 8);
  v64 = dword_1C3ED0[HIBYTE(v124) + 768];
  v65 = dword_1C3ED0[HIBYTE(v61) + 768];
  a2[17] = dword_1C3ED0[(unsigned __int8)v56] ^ v58 ^ dword_1C3ED0[BYTE1(v56) + 256] ^ dword_1C3ED0[BYTE2(v56) + 512];
  v66 = dword_1C3ED0[HIBYTE(v112) + 768];
  *(_DWORD *)v114 = (v63 << 24) | (v60 >> 8);
  v122 = HIBYTE(v119) | (v62 << 8);
  a2[18] = dword_1C3ED0[(unsigned __int8)v55] ^ v59 ^ dword_1C3ED0[BYTE1(v55) + 256] ^ dword_1C3ED0[BYTE2(v55) + 512];
  v67 = dword_1C3ED0[(unsigned __int8)v61] ^ v65;
  v68 = dword_1C3ED0[(unsigned __int8)v112];
  a2[19] = dword_1C3ED0[(unsigned __int8)v124] ^ v64 ^ dword_1C3ED0[BYTE1(v124) + 256] ^ dword_1C3ED0[BYTE2(v124) + 512];
  v69 = (v60 << 24) | (v63 >> 8);
  v70 = dword_1C3ED0[BYTE2(v112) + 512];
  v71 = v68 ^ v66 ^ dword_1C3ED0[BYTE1(v112) + 256];
  a2[20] = v67 ^ dword_1C3ED0[BYTE1(v61) + 256] ^ dword_1C3ED0[BYTE2(v61) + 512];
  v72 = *(_DWORD *)&v114[4] + 1144140559 + v60;
  v73 = -1144140559 - *(_DWORD *)&v114[8] + v63;
  v74 = v63 + 2006686179 - v119;
  *(_DWORD *)&v114[4] = v62 + 281594938 + *(_DWORD *)v114;
  v75 = v60 + v62;
  v76 = dword_1C3ED0[HIBYTE(v72) + 768];
  a2[21] = v71 ^ v70;
  v77 = v75 - 2006686179;
  *(_DWORD *)&v114[8] = HIBYTE(v62) | (v119 << 8);
  v78 = *(_DWORD *)v114 + v122 + 563189875;
  v79 = dword_1C3ED0[(unsigned __int8)v72] ^ v76 ^ dword_1C3ED0[BYTE1(v72) + 256] ^ dword_1C3ED0[BYTE2(v72) + 512];
  v80 = dword_1C3ED0[(unsigned __int8)v73];
  v81 = dword_1C3ED0[HIBYTE(v73) + 768];
  v82 = -281594938 - v119 + v69;
  a2[22] = v79;
  v113 = v69 - 563189875 - *(_DWORD *)&v114[8];
  v83 = dword_1C3ED0[((v75 - 2006686179) >> 24) + 768];
  v84 = dword_1C3ED0[HIBYTE(v74) + 768];
  v85 = v80 ^ v81 ^ dword_1C3ED0[BYTE1(v73) + 256] ^ dword_1C3ED0[BYTE2(v73) + 512];
  v86 = dword_1C3ED0[(unsigned __int8)(v75 + 29)];
  v87 = dword_1C3ED0[HIBYTE(*(_DWORD *)&v114[4]) + 768];
  v88 = v86 ^ v83;
  a2[23] = v85;
  v89 = dword_1C3ED0[HIBYTE(v82) + 768];
  v90 = dword_1C3ED0[BYTE2(v77) + 512];
  v91 = v88 ^ dword_1C3ED0[BYTE1(v77) + 256];
  v92 = dword_1C3ED0[(unsigned __int8)v74];
  a2[24] = v91 ^ v90;
  v93 = dword_1C3ED0[BYTE2(v74) + 512];
  v94 = v92 ^ v84 ^ dword_1C3ED0[BYTE1(v74) + 256];
  v95 = dword_1C3ED0[v114[4]];
  a2[25] = v94 ^ v93;
  v96 = dword_1C3ED0[(unsigned __int8)v82] ^ v89;
  v97 = dword_1C3ED0[HIBYTE(v78) + 768];
  v98 = dword_1C3ED0[(unsigned __int8)v78];
  a2[26] = v95 ^ v87 ^ dword_1C3ED0[v114[5] + 256] ^ dword_1C3ED0[v114[6] + 512];
  v99 = ((v69 << 24) | (*(_DWORD *)v114 >> 8)) + v122 + 1126379749;
  v100 = v96 ^ dword_1C3ED0[BYTE1(v82) + 256] ^ dword_1C3ED0[BYTE2(v82) + 512];
  v101 = ((*(_DWORD *)v114 << 24) | (v69 >> 8)) + -1126379749 - *(_DWORD *)&v114[8];
  a2[28] = v98 ^ v97 ^ dword_1C3ED0[BYTE1(v78) + 256] ^ dword_1C3ED0[BYTE2(v78) + 512];
  v102 = dword_1C3ED0[(unsigned __int8)v113];
  v103 = dword_1C3ED0[HIBYTE(v113) + 768];
  a2[27] = v100;
  v104 = dword_1C3ED0[(unsigned __int8)((unsigned __int16)((v69 >> 8) + -12517 - *(_WORD *)&v114[8]) >> 8) + 256];
  v105 = dword_1C3ED0[BYTE2(v101) + 512];
  v106 = dword_1C3ED0[HIBYTE(v101) + 768] ^ dword_1C3ED0[(unsigned __int8)v101];
  result = v102
         ^ v103
         ^ dword_1C3ED0[(unsigned __int8)((unsigned __int16)(v69 + 26509 - *(_WORD *)&v114[8]) >> 8) + 256]
         ^ dword_1C3ED0[BYTE2(v113) + 512];
  v108 = dword_1C3ED0[(unsigned __int8)v99]
       ^ dword_1C3ED0[HIBYTE(v99) + 768]
       ^ dword_1C3ED0[BYTE1(v99) + 256]
       ^ dword_1C3ED0[BYTE2(v99) + 512];
  a2[29] = result;
  a2[30] = v108;
  a2[31] = v106 ^ v104 ^ v105;
  return result;
}
