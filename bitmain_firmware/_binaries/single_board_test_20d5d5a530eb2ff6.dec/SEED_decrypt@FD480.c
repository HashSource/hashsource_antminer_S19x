unsigned int __fastcall SEED_decrypt(unsigned int *a1, _BYTE *a2, _DWORD *a3)
{
  unsigned int v3; // r7
  unsigned int v4; // lr
  int v5; // r10
  unsigned int v6; // r5
  int v7; // r4
  int v8; // r5
  int v9; // r11
  unsigned int v10; // r10
  unsigned int v11; // r5
  int v12; // r0
  unsigned int v13; // r4
  int v14; // r6
  int v15; // r12
  int v16; // r6
  int v17; // lr
  int v18; // r7
  int v19; // r4
  unsigned int v20; // r12
  int v21; // r6
  int v22; // r4
  int v23; // r6
  int v24; // r10
  int v25; // r5
  int v26; // r6
  unsigned int v27; // r4
  int v28; // r9
  int v29; // r12
  int v30; // r9
  int v31; // lr
  int v32; // r7
  int v33; // r0
  unsigned int v34; // r6
  int v35; // r6
  int v36; // r12
  int v37; // r0
  int v38; // r10
  int v39; // r5
  int v40; // r12
  unsigned int v41; // r6
  int v42; // r0
  int v43; // r12
  int v44; // r8
  int v45; // lr
  int v46; // r7
  int v47; // r0
  unsigned int v48; // r6
  int v49; // r6
  int v50; // r12
  int v51; // r0
  int v52; // r10
  int v53; // r5
  int v54; // r12
  unsigned int v55; // r6
  int v56; // r0
  int v57; // r12
  int v58; // r8
  int v59; // lr
  int v60; // r7
  int v61; // r4
  unsigned int v62; // r12
  int v63; // r11
  int v64; // r8
  int v65; // r12
  int v66; // r10
  int v67; // r5
  int v68; // r0
  unsigned int v69; // r6
  int v70; // r6
  int v71; // r12
  int v72; // r0
  int v73; // lr
  int v74; // r7
  int v75; // r8
  unsigned int v76; // r4
  int v77; // r4
  int v78; // r12
  int v79; // r8
  int v80; // r10
  int v81; // r5
  int v82; // r0
  unsigned int v83; // r6
  int v84; // r6
  int v85; // r12
  int v86; // r0
  int v87; // lr
  int v88; // r7
  int v89; // r0
  unsigned int v90; // r4
  int v91; // r9
  int v92; // r12
  int v93; // r9
  int v94; // r10
  int v95; // r5
  int v96; // r0
  unsigned int v97; // r6
  int v98; // r6
  int v99; // r0
  int v100; // r6
  int v101; // r0
  int v102; // r6
  int v103; // r7
  int v104; // r12
  unsigned int v105; // r4
  int v106; // r0
  int v107; // r12
  int v108; // r9
  int v109; // r10
  int v110; // r5
  int v111; // r4
  unsigned int v112; // lr
  int v113; // r0
  int v114; // r11
  int v115; // r2
  int v116; // r2
  int v117; // r12
  int v118; // r9
  int v119; // r0
  int v120; // r5
  int v121; // lr
  int v122; // r3
  unsigned int v123; // lr
  int v124; // r7

  v3 = _byteswap_ulong(a1[2]);
  v4 = _byteswap_ulong(a1[3]);
  v5 = v3 ^ a3[30];
  v6 = v5 ^ v4 ^ a3[31];
  v7 = dword_1C3ED0[(unsigned __int8)v6]
     ^ dword_1C3ED0[HIBYTE(v6) + 768]
     ^ dword_1C3ED0[BYTE1(v6) + 256]
     ^ dword_1C3ED0[BYTE2(v6) + 512];
  v8 = dword_1C3ED0[(unsigned __int8)((unsigned int)(v5 + v7) >> 16) + 512]
     ^ dword_1C3ED0[(unsigned __int8)(v5 + v7)]
     ^ dword_1C3ED0[((unsigned int)(v5 + v7) >> 24) + 768]
     ^ dword_1C3ED0[(unsigned __int8)((unsigned __int16)(v5 + v7) >> 8) + 256];
  v9 = dword_1C3ED0[(unsigned __int8)((unsigned int)(v7 + v8) >> 16) + 512]
     ^ dword_1C3ED0[(unsigned __int8)(v7 + v8)]
     ^ dword_1C3ED0[((unsigned int)(v7 + v8) >> 24) + 768]
     ^ dword_1C3ED0[(unsigned __int8)((unsigned __int16)(v7 + v8) >> 8) + 256];
  v10 = _byteswap_ulong(a1[1]) ^ v9;
  v11 = (v8 + v9) ^ _byteswap_ulong(*a1);
  v12 = v11 ^ a3[28];
  v13 = v10 ^ a3[29] ^ v12;
  v14 = dword_1C3ED0[BYTE2(v13) + 512]
      ^ dword_1C3ED0[(unsigned __int8)v13]
      ^ dword_1C3ED0[HIBYTE(v13) + 768]
      ^ dword_1C3ED0[BYTE1(v13) + 256];
  v15 = dword_1C3ED0[(unsigned __int8)((unsigned int)(v12 + v14) >> 16) + 512]
      ^ dword_1C3ED0[(unsigned __int8)(v12 + v14)]
      ^ dword_1C3ED0[((unsigned int)(v12 + v14) >> 24) + 768]
      ^ dword_1C3ED0[(unsigned __int8)((unsigned __int16)(v12 + v14) >> 8) + 256];
  v16 = dword_1C3ED0[(unsigned __int8)(v14 + v15)]
      ^ dword_1C3ED0[((unsigned int)(v14 + v15) >> 24) + 768]
      ^ dword_1C3ED0[(unsigned __int8)((unsigned __int16)(v14 + v15) >> 8) + 256]
      ^ dword_1C3ED0[(unsigned __int8)((unsigned int)(v14 + v15) >> 16) + 512];
  v17 = v4 ^ v16;
  v18 = (v15 + v16) ^ v3;
  v19 = v18 ^ a3[26];
  v20 = v19 ^ v17 ^ a3[27];
  v21 = dword_1C3ED0[(unsigned __int8)v20]
      ^ dword_1C3ED0[HIBYTE(v20) + 768]
      ^ dword_1C3ED0[BYTE1(v20) + 256]
      ^ dword_1C3ED0[BYTE2(v20) + 512];
  v22 = dword_1C3ED0[(unsigned __int8)((unsigned int)(v19 + v21) >> 16) + 512]
      ^ dword_1C3ED0[(unsigned __int8)(v19 + v21)]
      ^ dword_1C3ED0[((unsigned int)(v19 + v21) >> 24) + 768]
      ^ dword_1C3ED0[(unsigned __int8)((unsigned __int16)(v19 + v21) >> 8) + 256];
  v23 = dword_1C3ED0[(unsigned __int8)(v21 + v22)]
      ^ dword_1C3ED0[((unsigned int)(v21 + v22) >> 24) + 768]
      ^ dword_1C3ED0[(unsigned __int8)((unsigned __int16)(v21 + v22) >> 8) + 256]
      ^ dword_1C3ED0[(unsigned __int8)((unsigned int)(v21 + v22) >> 16) + 512];
  v24 = v10 ^ v23;
  v25 = v11 ^ (v22 + v23);
  v26 = v25 ^ a3[24];
  v27 = v24 ^ a3[25] ^ v26;
  v28 = dword_1C3ED0[BYTE2(v27) + 512]
      ^ dword_1C3ED0[(unsigned __int8)v27]
      ^ dword_1C3ED0[HIBYTE(v27) + 768]
      ^ dword_1C3ED0[BYTE1(v27) + 256];
  v29 = dword_1C3ED0[(unsigned __int8)((unsigned int)(v26 + v28) >> 16) + 512]
      ^ dword_1C3ED0[(unsigned __int8)(v26 + v28)]
      ^ dword_1C3ED0[((unsigned int)(v26 + v28) >> 24) + 768]
      ^ dword_1C3ED0[(unsigned __int8)((unsigned __int16)(v26 + v28) >> 8) + 256];
  v30 = dword_1C3ED0[(unsigned __int8)((unsigned int)(v28 + v29) >> 16) + 512]
      ^ dword_1C3ED0[(unsigned __int8)(v28 + v29)]
      ^ dword_1C3ED0[((unsigned int)(v28 + v29) >> 24) + 768]
      ^ dword_1C3ED0[(unsigned __int8)((unsigned __int16)(v28 + v29) >> 8) + 256];
  v31 = v17 ^ v30;
  v32 = (v29 + v30) ^ v18;
  v33 = a3[22] ^ v32;
  v34 = v31 ^ a3[23] ^ v33;
  v35 = dword_1C3ED0[BYTE2(v34) + 512]
      ^ dword_1C3ED0[(unsigned __int8)v34]
      ^ dword_1C3ED0[HIBYTE(v34) + 768]
      ^ dword_1C3ED0[BYTE1(v34) + 256];
  v36 = dword_1C3ED0[(unsigned __int8)((unsigned int)(v33 + v35) >> 16) + 512]
      ^ dword_1C3ED0[(unsigned __int8)(v33 + v35)]
      ^ dword_1C3ED0[((unsigned int)(v33 + v35) >> 24) + 768]
      ^ dword_1C3ED0[(unsigned __int8)((unsigned __int16)(v33 + v35) >> 8) + 256];
  v37 = dword_1C3ED0[(unsigned __int8)((unsigned __int16)(v35 + v36) >> 8) + 256]
      ^ dword_1C3ED0[(unsigned __int8)(v35 + v36)]
      ^ dword_1C3ED0[((unsigned int)(v35 + v36) >> 24) + 768]
      ^ dword_1C3ED0[(unsigned __int8)((unsigned int)(v35 + v36) >> 16) + 512];
  v38 = v24 ^ v37;
  v39 = v25 ^ (v36 + v37);
  v40 = v39 ^ a3[20];
  v41 = v40 ^ v38 ^ a3[21];
  v42 = dword_1C3ED0[(unsigned __int8)v41]
      ^ dword_1C3ED0[HIBYTE(v41) + 768]
      ^ dword_1C3ED0[BYTE1(v41) + 256]
      ^ dword_1C3ED0[BYTE2(v41) + 512];
  v43 = dword_1C3ED0[(unsigned __int8)((unsigned int)(v40 + v42) >> 16) + 512]
      ^ dword_1C3ED0[(unsigned __int8)(v40 + v42)]
      ^ dword_1C3ED0[((unsigned int)(v40 + v42) >> 24) + 768]
      ^ dword_1C3ED0[(unsigned __int8)((unsigned __int16)(v40 + v42) >> 8) + 256];
  v44 = dword_1C3ED0[(unsigned __int8)((unsigned int)(v42 + v43) >> 16) + 512]
      ^ dword_1C3ED0[(unsigned __int8)(v42 + v43)]
      ^ dword_1C3ED0[((unsigned int)(v42 + v43) >> 24) + 768]
      ^ dword_1C3ED0[(unsigned __int8)((unsigned __int16)(v42 + v43) >> 8) + 256];
  v45 = v31 ^ v44;
  v46 = (v43 + v44) ^ v32;
  v47 = a3[18] ^ v46;
  v48 = v45 ^ a3[19] ^ v47;
  v49 = dword_1C3ED0[BYTE2(v48) + 512]
      ^ dword_1C3ED0[(unsigned __int8)v48]
      ^ dword_1C3ED0[HIBYTE(v48) + 768]
      ^ dword_1C3ED0[BYTE1(v48) + 256];
  v50 = dword_1C3ED0[(unsigned __int8)((unsigned int)(v47 + v49) >> 16) + 512]
      ^ dword_1C3ED0[(unsigned __int8)(v47 + v49)]
      ^ dword_1C3ED0[((unsigned int)(v47 + v49) >> 24) + 768]
      ^ dword_1C3ED0[(unsigned __int8)((unsigned __int16)(v47 + v49) >> 8) + 256];
  v51 = dword_1C3ED0[(unsigned __int8)((unsigned __int16)(v49 + v50) >> 8) + 256]
      ^ dword_1C3ED0[(unsigned __int8)(v49 + v50)]
      ^ dword_1C3ED0[((unsigned int)(v49 + v50) >> 24) + 768]
      ^ dword_1C3ED0[(unsigned __int8)((unsigned int)(v49 + v50) >> 16) + 512];
  v52 = v38 ^ v51;
  v53 = v39 ^ (v50 + v51);
  v54 = v53 ^ a3[16];
  v55 = v54 ^ v52 ^ a3[17];
  v56 = dword_1C3ED0[(unsigned __int8)v55]
      ^ dword_1C3ED0[HIBYTE(v55) + 768]
      ^ dword_1C3ED0[BYTE1(v55) + 256]
      ^ dword_1C3ED0[BYTE2(v55) + 512];
  v57 = dword_1C3ED0[(unsigned __int8)((unsigned int)(v54 + v56) >> 16) + 512]
      ^ dword_1C3ED0[(unsigned __int8)(v54 + v56)]
      ^ dword_1C3ED0[((unsigned int)(v54 + v56) >> 24) + 768]
      ^ dword_1C3ED0[(unsigned __int8)((unsigned __int16)(v54 + v56) >> 8) + 256];
  v58 = dword_1C3ED0[(unsigned __int8)((unsigned int)(v56 + v57) >> 16) + 512]
      ^ dword_1C3ED0[(unsigned __int8)(v56 + v57)]
      ^ dword_1C3ED0[((unsigned int)(v56 + v57) >> 24) + 768]
      ^ dword_1C3ED0[(unsigned __int8)((unsigned __int16)(v56 + v57) >> 8) + 256];
  v59 = v45 ^ v58;
  v60 = (v57 + v58) ^ v46;
  v61 = a3[14] ^ v60;
  v62 = v61 ^ v59 ^ a3[15];
  v63 = dword_1C3ED0[BYTE2(v62) + 512]
      ^ dword_1C3ED0[(unsigned __int8)v62]
      ^ dword_1C3ED0[HIBYTE(v62) + 768]
      ^ dword_1C3ED0[BYTE1(v62) + 256];
  v64 = dword_1C3ED0[(unsigned __int8)((unsigned int)(v61 + v63) >> 16) + 512]
      ^ dword_1C3ED0[(unsigned __int8)(v61 + v63)]
      ^ dword_1C3ED0[((unsigned int)(v61 + v63) >> 24) + 768]
      ^ dword_1C3ED0[(unsigned __int8)((unsigned __int16)(v61 + v63) >> 8) + 256];
  v65 = dword_1C3ED0[(unsigned __int8)((unsigned int)(v63 + v64) >> 16) + 512]
      ^ dword_1C3ED0[(unsigned __int8)(v63 + v64)]
      ^ dword_1C3ED0[((unsigned int)(v63 + v64) >> 24) + 768]
      ^ dword_1C3ED0[(unsigned __int8)((unsigned __int16)(v63 + v64) >> 8) + 256];
  v66 = v52 ^ v65;
  v67 = (v64 + v65) ^ v53;
  v68 = a3[12] ^ v67;
  v69 = v66 ^ a3[13] ^ v68;
  v70 = dword_1C3ED0[BYTE2(v69) + 512]
      ^ dword_1C3ED0[(unsigned __int8)v69]
      ^ dword_1C3ED0[HIBYTE(v69) + 768]
      ^ dword_1C3ED0[BYTE1(v69) + 256];
  v71 = dword_1C3ED0[(unsigned __int8)((unsigned int)(v68 + v70) >> 16) + 512]
      ^ dword_1C3ED0[(unsigned __int8)(v68 + v70)]
      ^ dword_1C3ED0[((unsigned int)(v68 + v70) >> 24) + 768]
      ^ dword_1C3ED0[(unsigned __int8)((unsigned __int16)(v68 + v70) >> 8) + 256];
  v72 = dword_1C3ED0[(unsigned __int8)((unsigned __int16)(v70 + v71) >> 8) + 256]
      ^ dword_1C3ED0[(unsigned __int8)(v70 + v71)]
      ^ dword_1C3ED0[((unsigned int)(v70 + v71) >> 24) + 768]
      ^ dword_1C3ED0[(unsigned __int8)((unsigned int)(v70 + v71) >> 16) + 512];
  v73 = v59 ^ v72;
  v74 = v60 ^ (v71 + v72);
  v75 = v74 ^ a3[10];
  v76 = v75 ^ v73 ^ a3[11];
  v77 = dword_1C3ED0[BYTE2(v76) + 512]
      ^ dword_1C3ED0[(unsigned __int8)v76]
      ^ dword_1C3ED0[HIBYTE(v76) + 768]
      ^ dword_1C3ED0[BYTE1(v76) + 256];
  v78 = dword_1C3ED0[(unsigned __int8)((unsigned int)(v75 + v77) >> 16) + 512]
      ^ dword_1C3ED0[(unsigned __int8)(v75 + v77)]
      ^ dword_1C3ED0[((unsigned int)(v75 + v77) >> 24) + 768]
      ^ dword_1C3ED0[(unsigned __int8)((unsigned __int16)(v75 + v77) >> 8) + 256];
  v79 = dword_1C3ED0[(unsigned __int8)((unsigned int)(v77 + v78) >> 16) + 512]
      ^ dword_1C3ED0[(unsigned __int8)(v77 + v78)]
      ^ dword_1C3ED0[((unsigned int)(v77 + v78) >> 24) + 768]
      ^ dword_1C3ED0[(unsigned __int8)((unsigned __int16)(v77 + v78) >> 8) + 256];
  v80 = v66 ^ v79;
  v81 = (v78 + v79) ^ v67;
  v82 = a3[8] ^ v81;
  v83 = v80 ^ a3[9] ^ v82;
  v84 = dword_1C3ED0[BYTE2(v83) + 512]
      ^ dword_1C3ED0[(unsigned __int8)v83]
      ^ dword_1C3ED0[HIBYTE(v83) + 768]
      ^ dword_1C3ED0[BYTE1(v83) + 256];
  v85 = dword_1C3ED0[(unsigned __int8)((unsigned int)(v82 + v84) >> 16) + 512]
      ^ dword_1C3ED0[(unsigned __int8)(v82 + v84)]
      ^ dword_1C3ED0[((unsigned int)(v82 + v84) >> 24) + 768]
      ^ dword_1C3ED0[(unsigned __int8)((unsigned __int16)(v82 + v84) >> 8) + 256];
  v86 = dword_1C3ED0[(unsigned __int8)((unsigned __int16)(v84 + v85) >> 8) + 256]
      ^ dword_1C3ED0[(unsigned __int8)(v84 + v85)]
      ^ dword_1C3ED0[((unsigned int)(v84 + v85) >> 24) + 768]
      ^ dword_1C3ED0[(unsigned __int8)((unsigned int)(v84 + v85) >> 16) + 512];
  v87 = v73 ^ v86;
  v88 = v74 ^ (v85 + v86);
  v89 = a3[6] ^ v88;
  v90 = v87 ^ a3[7] ^ v89;
  v91 = dword_1C3ED0[BYTE2(v90) + 512]
      ^ dword_1C3ED0[(unsigned __int8)v90]
      ^ dword_1C3ED0[HIBYTE(v90) + 768]
      ^ dword_1C3ED0[BYTE1(v90) + 256];
  v92 = dword_1C3ED0[(unsigned __int8)((unsigned int)(v89 + v91) >> 16) + 512]
      ^ dword_1C3ED0[(unsigned __int8)(v89 + v91)]
      ^ dword_1C3ED0[((unsigned int)(v89 + v91) >> 24) + 768]
      ^ dword_1C3ED0[(unsigned __int8)((unsigned __int16)(v89 + v91) >> 8) + 256];
  v93 = dword_1C3ED0[(unsigned __int8)((unsigned int)(v91 + v92) >> 16) + 512]
      ^ dword_1C3ED0[(unsigned __int8)(v91 + v92)]
      ^ dword_1C3ED0[((unsigned int)(v91 + v92) >> 24) + 768]
      ^ dword_1C3ED0[(unsigned __int8)((unsigned __int16)(v91 + v92) >> 8) + 256];
  v94 = v80 ^ v93;
  v95 = (v92 + v93) ^ v81;
  v96 = a3[4] ^ v95;
  v97 = v94 ^ a3[5] ^ v96;
  v98 = dword_1C3ED0[BYTE2(v97) + 512]
      ^ dword_1C3ED0[(unsigned __int8)v97]
      ^ dword_1C3ED0[HIBYTE(v97) + 768]
      ^ dword_1C3ED0[BYTE1(v97) + 256];
  v99 = dword_1C3ED0[(unsigned __int8)((unsigned int)(v96 + v98) >> 16) + 512]
      ^ dword_1C3ED0[(unsigned __int8)(v96 + v98)]
      ^ dword_1C3ED0[((unsigned int)(v96 + v98) >> 24) + 768]
      ^ dword_1C3ED0[(unsigned __int8)((unsigned __int16)(v96 + v98) >> 8) + 256];
  v100 = dword_1C3ED0[(unsigned __int8)(v98 + v99)]
       ^ dword_1C3ED0[((unsigned int)(v98 + v99) >> 24) + 768]
       ^ dword_1C3ED0[(unsigned __int8)((unsigned __int16)(v98 + v99) >> 8) + 256]
       ^ dword_1C3ED0[(unsigned __int8)((unsigned int)(v98 + v99) >> 16) + 512];
  v101 = v99 + v100;
  v102 = v87 ^ v100;
  v103 = v88 ^ v101;
  v104 = v103 ^ a3[2];
  v105 = v104 ^ v102 ^ a3[3];
  v106 = dword_1C3ED0[BYTE2(v105) + 512]
       ^ dword_1C3ED0[(unsigned __int8)v105]
       ^ dword_1C3ED0[HIBYTE(v105) + 768]
       ^ dword_1C3ED0[BYTE1(v105) + 256];
  v107 = dword_1C3ED0[(unsigned __int8)((unsigned int)(v104 + v106) >> 16) + 512]
       ^ dword_1C3ED0[(unsigned __int8)(v104 + v106)]
       ^ dword_1C3ED0[((unsigned int)(v104 + v106) >> 24) + 768]
       ^ dword_1C3ED0[(unsigned __int8)((unsigned __int16)(v104 + v106) >> 8) + 256];
  v108 = dword_1C3ED0[(unsigned __int8)((unsigned int)(v106 + v107) >> 16) + 512]
       ^ dword_1C3ED0[(unsigned __int8)(v106 + v107)]
       ^ dword_1C3ED0[((unsigned int)(v106 + v107) >> 24) + 768]
       ^ dword_1C3ED0[(unsigned __int8)((unsigned __int16)(v106 + v107) >> 8) + 256];
  v109 = v94 ^ v108;
  v110 = (v107 + v108) ^ v95;
  v111 = *a3 ^ v110;
  v112 = v111 ^ v109 ^ a3[1];
  a2[11] = v110;
  v113 = dword_1C3ED0[BYTE1(v112) + 256];
  v114 = dword_1C3ED0[BYTE2(v112) + 512];
  v115 = dword_1C3ED0[(unsigned __int8)v112] ^ dword_1C3ED0[HIBYTE(v112) + 768];
  a2[9] = BYTE2(v110);
  a2[10] = BYTE1(v110);
  v116 = v114 ^ v115 ^ v113;
  a2[8] = HIBYTE(v110);
  a2[13] = BYTE2(v109);
  v117 = dword_1C3ED0[(unsigned __int8)((unsigned __int16)(v111 + v116) >> 8) + 256];
  v118 = dword_1C3ED0[(unsigned __int8)((unsigned int)(v111 + v116) >> 16) + 512];
  v119 = dword_1C3ED0[(unsigned __int8)(v111 + v116)] ^ dword_1C3ED0[((unsigned int)(v111 + v116) >> 24) + 768];
  a2[12] = HIBYTE(v109);
  a2[15] = v109;
  v120 = v118 ^ v119 ^ v117;
  a2[14] = BYTE1(v109);
  v121 = dword_1C3ED0[(unsigned __int8)((unsigned int)(v116 + v120) >> 16) + 512]
       ^ dword_1C3ED0[(unsigned __int8)(v116 + v120)]
       ^ dword_1C3ED0[((unsigned int)(v116 + v120) >> 24) + 768]
       ^ dword_1C3ED0[(unsigned __int8)((unsigned __int16)(v116 + v120) >> 8) + 256];
  v122 = v120 + v121;
  v123 = v102 ^ v121;
  v124 = v103 ^ v122;
  a2[3] = v124;
  a2[7] = v123;
  *a2 = HIBYTE(v124);
  a2[1] = BYTE2(v124);
  a2[2] = BYTE1(v124);
  a2[4] = HIBYTE(v123);
  a2[5] = BYTE2(v123);
  a2[6] = BYTE1(v123);
  return HIBYTE(v123);
}
