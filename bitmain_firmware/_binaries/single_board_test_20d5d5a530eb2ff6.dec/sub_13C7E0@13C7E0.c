int *__fastcall sub_13C7E0(int *result, unsigned int *a2, int a3)
{
  unsigned int v3; // r4
  int v4; // r3
  int v5; // r7
  int v6; // r3
  int v7; // r4
  int v8; // r5
  unsigned int v9; // r4
  int v10; // r3
  int v11; // r4
  unsigned int v12; // r3
  int v13; // r5
  int v14; // r3
  unsigned int v15; // r4
  int v16; // r5
  int v17; // r4
  int v18; // r5
  int v19; // r4
  unsigned int v20; // r7
  _DWORD *v21; // r3
  unsigned int v22; // t2
  int v23; // lr
  unsigned int v24; // r6
  unsigned int v25; // t2
  int v26; // r7
  unsigned int v27; // r4
  unsigned int v28; // t2
  int v29; // r6
  unsigned int v30; // r5
  unsigned int v31; // t2
  int v32; // r7
  unsigned int v33; // r4
  unsigned int v34; // t2
  int v35; // r6
  unsigned int v36; // r5
  unsigned int v37; // t2
  int v38; // r7
  unsigned int v39; // r4
  unsigned int v40; // t2
  int v41; // r6
  unsigned int v42; // r4
  unsigned int v43; // t2
  int v44; // r7
  unsigned int v45; // r5
  unsigned int v46; // t2
  int v47; // r6
  unsigned int v48; // r4
  unsigned int v49; // t2
  int v50; // r7
  unsigned int v51; // r4
  unsigned int v52; // t2
  int v53; // r6
  unsigned int v54; // r5
  unsigned int v55; // t2
  int v56; // r5
  unsigned int v57; // r4
  unsigned int v58; // t2
  int v59; // r7
  unsigned int v60; // r4
  unsigned int v61; // t2
  unsigned int v62; // r2
  unsigned int v63; // lr
  int v64; // r6
  unsigned int v65; // r5
  unsigned int v66; // r1
  unsigned int v67; // t2
  int v68; // r1
  unsigned int v69; // r2
  unsigned int v70; // r4
  unsigned int v71; // r5
  int v72; // r1
  unsigned int v73; // t2
  int v74; // r3
  int v75; // r4
  unsigned int v76; // r3
  int v77; // r2
  int v78; // r1
  unsigned int v79; // r2
  int v80; // r3
  int v81; // r2
  int v82; // r3
  int v83; // r1
  int v84; // r3
  unsigned int v85; // r2
  int v86; // r1
  unsigned int v87; // r7
  _DWORD *v88; // r3
  unsigned int v89; // t2
  int v90; // lr
  unsigned int v91; // r6
  unsigned int v92; // t2
  int v93; // r7
  unsigned int v94; // r4
  unsigned int v95; // t2
  int v96; // r6
  unsigned int v97; // r5
  unsigned int v98; // t2
  int v99; // r7
  unsigned int v100; // r4
  unsigned int v101; // t2
  int v102; // r6
  unsigned int v103; // r5
  unsigned int v104; // t2
  int v105; // r7
  unsigned int v106; // r4
  unsigned int v107; // t2
  int v108; // r6
  unsigned int v109; // r4
  unsigned int v110; // t2
  int v111; // r7
  unsigned int v112; // r5
  unsigned int v113; // t2
  int v114; // r6
  unsigned int v115; // r4
  unsigned int v116; // t2
  int v117; // r7
  unsigned int v118; // r4
  unsigned int v119; // t2
  int v120; // r6
  unsigned int v121; // r5
  unsigned int v122; // t2
  int v123; // r5
  unsigned int v124; // r4
  unsigned int v125; // t2
  int v126; // r7
  unsigned int v127; // r4
  unsigned int v128; // t2
  unsigned int v129; // r2
  unsigned int v130; // r1
  unsigned int v131; // t2

  v3 = result[1];
  v4 = (*result ^ (v3 >> 4)) & 0xF0F0F0F;
  v5 = v3 ^ (16 * v4);
  v6 = v4 ^ *result;
  v7 = (unsigned __int16)(v5 ^ HIWORD(v6));
  v8 = v6 ^ (v7 << 16);
  v9 = v7 ^ v5;
  v10 = (v8 ^ (v9 >> 2)) & 0x33333333;
  v11 = v9 ^ (4 * v10);
  v12 = v10 ^ v8;
  v13 = (v11 ^ (v12 >> 8)) & 0xFF00FF;
  v14 = v12 ^ (v13 << 8);
  v15 = v11 ^ v13;
  v16 = (v14 ^ (v15 >> 1)) & 0x55555555;
  v17 = v15 ^ (2 * v16);
  v18 = __ROR4__(v16 ^ v14, 29);
  v19 = __ROR4__(v17, 29);
  if ( a3 )
  {
    v87 = *a2 ^ v18;
    v88 = DES_SPtrans;
    v89 = __ROR4__(a2[1] ^ v18, 4);
    v90 = v19
        ^ v88[(v87 >> 26) + 384]
        ^ v88[(unsigned __int8)v87 >> 2]
        ^ v88[((unsigned __int16)v87 >> 10) + 128]
        ^ v88[((v87 >> 18) & 0x3F) + 256]
        ^ v88[(v89 >> 26) + 448]
        ^ v88[((unsigned __int8)v89 >> 2) + 64]
        ^ v88[((unsigned __int16)v89 >> 10) + 192]
        ^ v88[((v89 >> 18) & 0x3F) + 320];
    v91 = v90 ^ a2[2];
    v92 = __ROR4__(v90 ^ a2[3], 4);
    v93 = v88[((unsigned __int16)v92 >> 10) + 192]
        ^ v18
        ^ v88[(v91 >> 26) + 384]
        ^ v88[(unsigned __int8)v91 >> 2]
        ^ v88[((unsigned __int16)v91 >> 10) + 128]
        ^ v88[((v91 >> 18) & 0x3F) + 256]
        ^ v88[(v92 >> 26) + 448]
        ^ v88[((unsigned __int8)v92 >> 2) + 64]
        ^ v88[((v92 >> 18) & 0x3F) + 320];
    v94 = v93 ^ a2[4];
    v95 = __ROR4__(v93 ^ a2[5], 4);
    v96 = v90
        ^ v88[(v94 >> 26) + 384]
        ^ v88[(unsigned __int8)v94 >> 2]
        ^ v88[((unsigned __int16)v94 >> 10) + 128]
        ^ v88[((v94 >> 18) & 0x3F) + 256]
        ^ v88[(v95 >> 26) + 448]
        ^ v88[((unsigned __int8)v95 >> 2) + 64]
        ^ v88[((unsigned __int16)v95 >> 10) + 192]
        ^ v88[((v95 >> 18) & 0x3F) + 320];
    v97 = v96 ^ a2[6];
    v98 = __ROR4__(a2[7] ^ v96, 4);
    v99 = v93
        ^ v88[(v97 >> 26) + 384]
        ^ v88[(unsigned __int8)v97 >> 2]
        ^ v88[((unsigned __int16)v97 >> 10) + 128]
        ^ v88[((v97 >> 18) & 0x3F) + 256]
        ^ v88[(v98 >> 26) + 448]
        ^ v88[((unsigned __int8)v98 >> 2) + 64]
        ^ v88[((unsigned __int16)v98 >> 10) + 192]
        ^ v88[((v98 >> 18) & 0x3F) + 320];
    v100 = v99 ^ a2[8];
    v101 = __ROR4__(a2[9] ^ v99, 4);
    v102 = v96
         ^ v88[(v100 >> 26) + 384]
         ^ v88[(unsigned __int8)v100 >> 2]
         ^ v88[((unsigned __int16)v100 >> 10) + 128]
         ^ v88[((v100 >> 18) & 0x3F) + 256]
         ^ v88[(v101 >> 26) + 448]
         ^ v88[((unsigned __int8)v101 >> 2) + 64]
         ^ v88[((unsigned __int16)v101 >> 10) + 192]
         ^ v88[((v101 >> 18) & 0x3F) + 320];
    v103 = v102 ^ a2[10];
    v104 = __ROR4__(a2[11] ^ v102, 4);
    v105 = v88[((unsigned __int16)v104 >> 10) + 192]
         ^ v99
         ^ v88[(v103 >> 26) + 384]
         ^ v88[(unsigned __int8)v103 >> 2]
         ^ v88[((unsigned __int16)v103 >> 10) + 128]
         ^ v88[((v103 >> 18) & 0x3F) + 256]
         ^ v88[(v104 >> 26) + 448]
         ^ v88[((unsigned __int8)v104 >> 2) + 64]
         ^ v88[((v104 >> 18) & 0x3F) + 320];
    v106 = v105 ^ a2[12];
    v107 = __ROR4__(a2[13] ^ v105, 4);
    v108 = v88[((unsigned __int16)v107 >> 10) + 192]
         ^ v102
         ^ v88[(v106 >> 26) + 384]
         ^ v88[(unsigned __int8)v106 >> 2]
         ^ v88[((unsigned __int16)v106 >> 10) + 128]
         ^ v88[((v106 >> 18) & 0x3F) + 256]
         ^ v88[(v107 >> 26) + 448]
         ^ v88[((unsigned __int8)v107 >> 2) + 64]
         ^ v88[((v107 >> 18) & 0x3F) + 320];
    v109 = a2[14] ^ v108;
    v110 = __ROR4__(a2[15] ^ v108, 4);
    v111 = v105
         ^ v88[(v109 >> 26) + 384]
         ^ v88[(unsigned __int8)v109 >> 2]
         ^ v88[((unsigned __int16)v109 >> 10) + 128]
         ^ v88[((v109 >> 18) & 0x3F) + 256]
         ^ v88[(v110 >> 26) + 448]
         ^ v88[((unsigned __int8)v110 >> 2) + 64]
         ^ v88[((unsigned __int16)v110 >> 10) + 192]
         ^ v88[((v110 >> 18) & 0x3F) + 320];
    v112 = v111 ^ a2[16];
    v113 = __ROR4__(a2[17] ^ v111, 4);
    v114 = v88[((unsigned __int16)v113 >> 10) + 192]
         ^ v108
         ^ v88[(v112 >> 26) + 384]
         ^ v88[(unsigned __int8)v112 >> 2]
         ^ v88[((unsigned __int16)v112 >> 10) + 128]
         ^ v88[((v112 >> 18) & 0x3F) + 256]
         ^ v88[(v113 >> 26) + 448]
         ^ v88[((unsigned __int8)v113 >> 2) + 64]
         ^ v88[((v113 >> 18) & 0x3F) + 320];
    v115 = v114 ^ a2[18];
    v116 = __ROR4__(a2[19] ^ v114, 4);
    v117 = v88[((unsigned __int16)v116 >> 10) + 192]
         ^ v111
         ^ v88[(v115 >> 26) + 384]
         ^ v88[(unsigned __int8)v115 >> 2]
         ^ v88[((unsigned __int16)v115 >> 10) + 128]
         ^ v88[((v115 >> 18) & 0x3F) + 256]
         ^ v88[(v116 >> 26) + 448]
         ^ v88[((unsigned __int8)v116 >> 2) + 64]
         ^ v88[((v116 >> 18) & 0x3F) + 320];
    v118 = a2[20] ^ v117;
    v119 = __ROR4__(a2[21] ^ v117, 4);
    v120 = v114
         ^ v88[(v118 >> 26) + 384]
         ^ v88[(unsigned __int8)v118 >> 2]
         ^ v88[((unsigned __int16)v118 >> 10) + 128]
         ^ v88[((v118 >> 18) & 0x3F) + 256]
         ^ v88[(v119 >> 26) + 448]
         ^ v88[((unsigned __int8)v119 >> 2) + 64]
         ^ v88[((unsigned __int16)v119 >> 10) + 192]
         ^ v88[((v119 >> 18) & 0x3F) + 320];
    v121 = v120 ^ a2[22];
    v122 = __ROR4__(a2[23] ^ v120, 4);
    v123 = v117
         ^ v88[(v121 >> 26) + 384]
         ^ v88[(unsigned __int8)v121 >> 2]
         ^ v88[((unsigned __int16)v121 >> 10) + 128]
         ^ v88[((v121 >> 18) & 0x3F) + 256]
         ^ v88[(v122 >> 26) + 448]
         ^ v88[((unsigned __int8)v122 >> 2) + 64]
         ^ v88[((unsigned __int16)v122 >> 10) + 192]
         ^ v88[((v122 >> 18) & 0x3F) + 320];
    v124 = v123 ^ a2[24];
    v125 = __ROR4__(a2[25] ^ v123, 4);
    v126 = v88[((unsigned __int16)v125 >> 10) + 192]
         ^ v120
         ^ v88[(v124 >> 26) + 384]
         ^ v88[(unsigned __int8)v124 >> 2]
         ^ v88[((unsigned __int16)v124 >> 10) + 128]
         ^ v88[((v124 >> 18) & 0x3F) + 256]
         ^ v88[(v125 >> 26) + 448]
         ^ v88[((unsigned __int8)v125 >> 2) + 64]
         ^ v88[((v125 >> 18) & 0x3F) + 320];
    v127 = a2[26] ^ v126;
    v128 = __ROR4__(a2[27] ^ v126, 4);
    v129 = a2[29];
    v63 = a2[30];
    v64 = v88[((unsigned __int16)v128 >> 10) + 192]
        ^ v123
        ^ v88[(v127 >> 26) + 384]
        ^ v88[(unsigned __int8)v127 >> 2]
        ^ v88[((unsigned __int16)v127 >> 10) + 128]
        ^ v88[((v127 >> 18) & 0x3F) + 256]
        ^ v88[(v128 >> 26) + 448]
        ^ v88[((unsigned __int8)v128 >> 2) + 64]
        ^ v88[((v128 >> 18) & 0x3F) + 320];
    v65 = a2[31];
    v130 = v64 ^ a2[28];
    v131 = __ROR4__(v129 ^ v64, 4);
    v68 = v88[((v131 >> 18) & 0x3F) + 320]
        ^ v88[((unsigned __int16)v131 >> 10) + 192]
        ^ v126
        ^ v88[(v130 >> 26) + 384]
        ^ v88[(unsigned __int8)v130 >> 2]
        ^ v88[((unsigned __int16)v130 >> 10) + 128]
        ^ v88[((v130 >> 18) & 0x3F) + 256]
        ^ DES_SPtrans[(v131 >> 26) + 448]
        ^ DES_SPtrans[((unsigned __int8)v131 >> 2) + 64];
  }
  else
  {
    v20 = a2[30] ^ v18;
    v21 = DES_SPtrans;
    v22 = __ROR4__(a2[31] ^ v18, 4);
    v23 = v19
        ^ v21[(v20 >> 26) + 384]
        ^ v21[(unsigned __int8)v20 >> 2]
        ^ v21[((unsigned __int16)v20 >> 10) + 128]
        ^ v21[((v20 >> 18) & 0x3F) + 256]
        ^ v21[(v22 >> 26) + 448]
        ^ v21[((unsigned __int8)v22 >> 2) + 64]
        ^ v21[((unsigned __int16)v22 >> 10) + 192]
        ^ v21[((v22 >> 18) & 0x3F) + 320];
    v24 = v23 ^ a2[28];
    v25 = __ROR4__(v23 ^ a2[29], 4);
    v26 = v21[((unsigned __int16)v25 >> 10) + 192]
        ^ v18
        ^ v21[(v24 >> 26) + 384]
        ^ v21[(unsigned __int8)v24 >> 2]
        ^ v21[((unsigned __int16)v24 >> 10) + 128]
        ^ v21[((v24 >> 18) & 0x3F) + 256]
        ^ v21[(v25 >> 26) + 448]
        ^ v21[((unsigned __int8)v25 >> 2) + 64]
        ^ v21[((v25 >> 18) & 0x3F) + 320];
    v27 = v26 ^ a2[26];
    v28 = __ROR4__(v26 ^ a2[27], 4);
    v29 = v23
        ^ v21[(v27 >> 26) + 384]
        ^ v21[(unsigned __int8)v27 >> 2]
        ^ v21[((unsigned __int16)v27 >> 10) + 128]
        ^ v21[((v27 >> 18) & 0x3F) + 256]
        ^ v21[(v28 >> 26) + 448]
        ^ v21[((unsigned __int8)v28 >> 2) + 64]
        ^ v21[((unsigned __int16)v28 >> 10) + 192]
        ^ v21[((v28 >> 18) & 0x3F) + 320];
    v30 = v29 ^ a2[24];
    v31 = __ROR4__(a2[25] ^ v29, 4);
    v32 = v26
        ^ v21[(v30 >> 26) + 384]
        ^ v21[(unsigned __int8)v30 >> 2]
        ^ v21[((unsigned __int16)v30 >> 10) + 128]
        ^ v21[((v30 >> 18) & 0x3F) + 256]
        ^ v21[(v31 >> 26) + 448]
        ^ v21[((unsigned __int8)v31 >> 2) + 64]
        ^ v21[((unsigned __int16)v31 >> 10) + 192]
        ^ v21[((v31 >> 18) & 0x3F) + 320];
    v33 = v32 ^ a2[22];
    v34 = __ROR4__(a2[23] ^ v32, 4);
    v35 = v29
        ^ v21[(v33 >> 26) + 384]
        ^ v21[(unsigned __int8)v33 >> 2]
        ^ v21[((unsigned __int16)v33 >> 10) + 128]
        ^ v21[((v33 >> 18) & 0x3F) + 256]
        ^ v21[(v34 >> 26) + 448]
        ^ v21[((unsigned __int8)v34 >> 2) + 64]
        ^ v21[((unsigned __int16)v34 >> 10) + 192]
        ^ v21[((v34 >> 18) & 0x3F) + 320];
    v36 = v35 ^ a2[20];
    v37 = __ROR4__(a2[21] ^ v35, 4);
    v38 = v21[((unsigned __int16)v37 >> 10) + 192]
        ^ v32
        ^ v21[(v36 >> 26) + 384]
        ^ v21[(unsigned __int8)v36 >> 2]
        ^ v21[((unsigned __int16)v36 >> 10) + 128]
        ^ v21[((v36 >> 18) & 0x3F) + 256]
        ^ v21[(v37 >> 26) + 448]
        ^ v21[((unsigned __int8)v37 >> 2) + 64]
        ^ v21[((v37 >> 18) & 0x3F) + 320];
    v39 = v38 ^ a2[18];
    v40 = __ROR4__(a2[19] ^ v38, 4);
    v41 = v21[((unsigned __int16)v40 >> 10) + 192]
        ^ v35
        ^ v21[(v39 >> 26) + 384]
        ^ v21[(unsigned __int8)v39 >> 2]
        ^ v21[((unsigned __int16)v39 >> 10) + 128]
        ^ v21[((v39 >> 18) & 0x3F) + 256]
        ^ v21[(v40 >> 26) + 448]
        ^ v21[((unsigned __int8)v40 >> 2) + 64]
        ^ v21[((v40 >> 18) & 0x3F) + 320];
    v42 = a2[16] ^ v41;
    v43 = __ROR4__(a2[17] ^ v41, 4);
    v44 = v38
        ^ v21[(v42 >> 26) + 384]
        ^ v21[(unsigned __int8)v42 >> 2]
        ^ v21[((unsigned __int16)v42 >> 10) + 128]
        ^ v21[((v42 >> 18) & 0x3F) + 256]
        ^ v21[(v43 >> 26) + 448]
        ^ v21[((unsigned __int8)v43 >> 2) + 64]
        ^ v21[((unsigned __int16)v43 >> 10) + 192]
        ^ v21[((v43 >> 18) & 0x3F) + 320];
    v45 = v44 ^ a2[14];
    v46 = __ROR4__(a2[15] ^ v44, 4);
    v47 = v21[((unsigned __int16)v46 >> 10) + 192]
        ^ v41
        ^ v21[(v45 >> 26) + 384]
        ^ v21[(unsigned __int8)v45 >> 2]
        ^ v21[((unsigned __int16)v45 >> 10) + 128]
        ^ v21[((v45 >> 18) & 0x3F) + 256]
        ^ v21[(v46 >> 26) + 448]
        ^ v21[((unsigned __int8)v46 >> 2) + 64]
        ^ v21[((v46 >> 18) & 0x3F) + 320];
    v48 = v47 ^ a2[12];
    v49 = __ROR4__(a2[13] ^ v47, 4);
    v50 = v21[((unsigned __int16)v49 >> 10) + 192]
        ^ v44
        ^ v21[(v48 >> 26) + 384]
        ^ v21[(unsigned __int8)v48 >> 2]
        ^ v21[((unsigned __int16)v48 >> 10) + 128]
        ^ v21[((v48 >> 18) & 0x3F) + 256]
        ^ v21[(v49 >> 26) + 448]
        ^ v21[((unsigned __int8)v49 >> 2) + 64]
        ^ v21[((v49 >> 18) & 0x3F) + 320];
    v51 = a2[10] ^ v50;
    v52 = __ROR4__(a2[11] ^ v50, 4);
    v53 = v47
        ^ v21[(v51 >> 26) + 384]
        ^ v21[(unsigned __int8)v51 >> 2]
        ^ v21[((unsigned __int16)v51 >> 10) + 128]
        ^ v21[((v51 >> 18) & 0x3F) + 256]
        ^ v21[(v52 >> 26) + 448]
        ^ v21[((unsigned __int8)v52 >> 2) + 64]
        ^ v21[((unsigned __int16)v52 >> 10) + 192]
        ^ v21[((v52 >> 18) & 0x3F) + 320];
    v54 = v53 ^ a2[8];
    v55 = __ROR4__(a2[9] ^ v53, 4);
    v56 = v50
        ^ v21[(v54 >> 26) + 384]
        ^ v21[(unsigned __int8)v54 >> 2]
        ^ v21[((unsigned __int16)v54 >> 10) + 128]
        ^ v21[((v54 >> 18) & 0x3F) + 256]
        ^ v21[(v55 >> 26) + 448]
        ^ v21[((unsigned __int8)v55 >> 2) + 64]
        ^ v21[((unsigned __int16)v55 >> 10) + 192]
        ^ v21[((v55 >> 18) & 0x3F) + 320];
    v57 = v56 ^ a2[6];
    v58 = __ROR4__(a2[7] ^ v56, 4);
    v59 = v21[((unsigned __int16)v58 >> 10) + 192]
        ^ v53
        ^ v21[(v57 >> 26) + 384]
        ^ v21[(unsigned __int8)v57 >> 2]
        ^ v21[((unsigned __int16)v57 >> 10) + 128]
        ^ v21[((v57 >> 18) & 0x3F) + 256]
        ^ v21[(v58 >> 26) + 448]
        ^ v21[((unsigned __int8)v58 >> 2) + 64]
        ^ v21[((v58 >> 18) & 0x3F) + 320];
    v60 = a2[4] ^ v59;
    v61 = __ROR4__(a2[5] ^ v59, 4);
    v62 = a2[3];
    v63 = *a2;
    v64 = v21[((unsigned __int16)v61 >> 10) + 192]
        ^ v56
        ^ v21[(v60 >> 26) + 384]
        ^ v21[(unsigned __int8)v60 >> 2]
        ^ v21[((unsigned __int16)v60 >> 10) + 128]
        ^ v21[((v60 >> 18) & 0x3F) + 256]
        ^ v21[(v61 >> 26) + 448]
        ^ v21[((unsigned __int8)v61 >> 2) + 64]
        ^ v21[((v61 >> 18) & 0x3F) + 320];
    v65 = a2[1];
    v66 = v64 ^ a2[2];
    v67 = __ROR4__(v62 ^ v64, 4);
    v68 = v59
        ^ v21[(v66 >> 26) + 384]
        ^ v21[(unsigned __int8)v66 >> 2]
        ^ v21[((unsigned __int16)v66 >> 10) + 128]
        ^ v21[((v66 >> 18) & 0x3F) + 256]
        ^ v21[(v67 >> 26) + 448]
        ^ DES_SPtrans[((unsigned __int8)v67 >> 2) + 64]
        ^ DES_SPtrans[((unsigned __int16)v67 >> 10) + 192]
        ^ DES_SPtrans[((v67 >> 18) & 0x3F) + 320];
  }
  v69 = v68 ^ v63;
  v70 = (v68 ^ v63) >> 26;
  v71 = __ROR4__(v65 ^ v68, 4);
  v72 = __ROR4__(v68, 3);
  v73 = __ROR4__(
          DES_SPtrans[((v71 >> 18) & 0x3F) + 320]
        ^ DES_SPtrans[((unsigned __int16)v71 >> 10) + 192]
        ^ DES_SPtrans[(v71 >> 26) + 448]
        ^ DES_SPtrans[((v69 >> 18) & 0x3F) + 256]
        ^ v64
        ^ DES_SPtrans[v70 + 384]
        ^ DES_SPtrans[(unsigned __int8)v69 >> 2]
        ^ DES_SPtrans[((unsigned __int16)v69 >> 10) + 128]
        ^ DES_SPtrans[((unsigned __int8)v71 >> 2) + 64],
          3);
  v74 = (v72 ^ (v73 >> 1)) & 0x55555555;
  v75 = v73 ^ (2 * v74);
  v76 = v74 ^ v72;
  v77 = (v75 ^ (v76 >> 8)) & 0xFF00FF;
  v78 = v76 ^ (v77 << 8);
  v79 = v77 ^ v75;
  v80 = (v78 ^ (v79 >> 2)) & 0x33333333;
  v81 = v79 ^ (4 * v80);
  v82 = v80 ^ v78;
  v83 = (unsigned __int16)(v81 ^ HIWORD(v82));
  v84 = v82 ^ (v83 << 16);
  v85 = v81 ^ v83;
  v86 = (v84 ^ (v85 >> 4)) & 0xF0F0F0F;
  *result = v84 ^ v86;
  result[1] = v85 ^ (16 * v86);
  return result;
}
