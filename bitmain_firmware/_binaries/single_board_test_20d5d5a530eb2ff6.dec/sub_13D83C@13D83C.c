_DWORD *__fastcall sub_13D83C(_DWORD *result, unsigned int *a2, int a3)
{
  int v3; // r6
  int v4; // r7
  unsigned int v5; // r4
  _DWORD *v6; // r3
  unsigned int v7; // t2
  int v8; // r7
  unsigned int v9; // r5
  unsigned int v10; // t2
  int v11; // r6
  unsigned int v12; // r4
  unsigned int v13; // t2
  int v14; // r7
  unsigned int v15; // r5
  unsigned int v16; // t2
  int v17; // r6
  unsigned int v18; // r4
  unsigned int v19; // t2
  int v20; // r7
  unsigned int v21; // r5
  unsigned int v22; // t2
  int v23; // r6
  unsigned int v24; // r4
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
  unsigned int v36; // r4
  unsigned int v37; // t2
  int v38; // r7
  unsigned int v39; // r5
  unsigned int v40; // t2
  int v41; // r6
  unsigned int v42; // r4
  unsigned int v43; // t2
  unsigned int v44; // lr
  int v45; // r5
  unsigned int v46; // r4
  unsigned int v47; // t2
  int v48; // r6
  unsigned int v49; // r4
  unsigned int v50; // r7
  unsigned int v51; // r1
  int v52; // r6
  unsigned int v53; // t2
  int v54; // r2
  unsigned __int8 v55; // r4
  unsigned int v56; // r1
  int v57; // r5
  int v58; // r6
  int v59; // r7
  int v60; // lr
  int v61; // r6
  int v62; // lr
  int v63; // r5
  int v64; // r4
  int v65; // r3
  unsigned int v66; // r4
  _DWORD *v67; // r3
  unsigned int v68; // t2
  int v69; // r7
  unsigned int v70; // r5
  unsigned int v71; // t2
  int v72; // r6
  unsigned int v73; // r4
  unsigned int v74; // t2
  int v75; // r7
  unsigned int v76; // r5
  unsigned int v77; // t2
  int v78; // r6
  unsigned int v79; // r4
  unsigned int v80; // t2
  int v81; // r7
  unsigned int v82; // r5
  unsigned int v83; // t2
  int v84; // r6
  unsigned int v85; // r4
  unsigned int v86; // t2
  int v87; // r7
  unsigned int v88; // r4
  unsigned int v89; // t2
  int v90; // r6
  unsigned int v91; // r5
  unsigned int v92; // t2
  int v93; // r7
  unsigned int v94; // r4
  unsigned int v95; // t2
  int v96; // r6
  unsigned int v97; // r4
  unsigned int v98; // t2
  int v99; // r7
  unsigned int v100; // r5
  unsigned int v101; // t2
  int v102; // r6
  unsigned int v103; // r4
  unsigned int v104; // t2
  unsigned int v105; // r4
  unsigned int v106; // t2
  int v107; // r6

  v3 = __ROR4__(*result, 29);
  v4 = __ROR4__(result[1], 29);
  if ( a3 )
  {
    v66 = *a2 ^ v3;
    v67 = DES_SPtrans;
    v68 = __ROR4__(a2[1] ^ v3, 4);
    v69 = v4
        ^ v67[(v66 >> 26) + 384]
        ^ v67[(unsigned __int8)v66 >> 2]
        ^ v67[((unsigned __int16)v66 >> 10) + 128]
        ^ v67[((v66 >> 18) & 0x3F) + 256]
        ^ v67[(v68 >> 26) + 448]
        ^ v67[((unsigned __int8)v68 >> 2) + 64]
        ^ v67[((unsigned __int16)v68 >> 10) + 192]
        ^ v67[((v68 >> 18) & 0x3F) + 320];
    v70 = v69 ^ a2[2];
    v71 = __ROR4__(a2[3] ^ v69, 4);
    v72 = v3
        ^ v67[(v70 >> 26) + 384]
        ^ v67[(unsigned __int8)v70 >> 2]
        ^ v67[((unsigned __int16)v70 >> 10) + 128]
        ^ v67[((v70 >> 18) & 0x3F) + 256]
        ^ v67[(v71 >> 26) + 448]
        ^ v67[((unsigned __int8)v71 >> 2) + 64]
        ^ v67[((unsigned __int16)v71 >> 10) + 192]
        ^ v67[((v71 >> 18) & 0x3F) + 320];
    v73 = v72 ^ a2[4];
    v74 = __ROR4__(a2[5] ^ v72, 4);
    v75 = v69
        ^ v67[(v73 >> 26) + 384]
        ^ v67[(unsigned __int8)v73 >> 2]
        ^ v67[((unsigned __int16)v73 >> 10) + 128]
        ^ v67[((v73 >> 18) & 0x3F) + 256]
        ^ v67[(v74 >> 26) + 448]
        ^ v67[((unsigned __int8)v74 >> 2) + 64]
        ^ v67[((unsigned __int16)v74 >> 10) + 192]
        ^ v67[((v74 >> 18) & 0x3F) + 320];
    v76 = v75 ^ a2[6];
    v77 = __ROR4__(a2[7] ^ v75, 4);
    v78 = v72
        ^ v67[(v76 >> 26) + 384]
        ^ v67[(unsigned __int8)v76 >> 2]
        ^ v67[((unsigned __int16)v76 >> 10) + 128]
        ^ v67[((v76 >> 18) & 0x3F) + 256]
        ^ v67[(v77 >> 26) + 448]
        ^ v67[((unsigned __int8)v77 >> 2) + 64]
        ^ v67[((unsigned __int16)v77 >> 10) + 192]
        ^ v67[((v77 >> 18) & 0x3F) + 320];
    v79 = v78 ^ a2[8];
    v80 = __ROR4__(a2[9] ^ v78, 4);
    v81 = v75
        ^ v67[(v79 >> 26) + 384]
        ^ v67[(unsigned __int8)v79 >> 2]
        ^ v67[((unsigned __int16)v79 >> 10) + 128]
        ^ v67[((v79 >> 18) & 0x3F) + 256]
        ^ v67[(v80 >> 26) + 448]
        ^ v67[((unsigned __int8)v80 >> 2) + 64]
        ^ v67[((unsigned __int16)v80 >> 10) + 192]
        ^ v67[((v80 >> 18) & 0x3F) + 320];
    v82 = v81 ^ a2[10];
    v83 = __ROR4__(a2[11] ^ v81, 4);
    v84 = v67[((unsigned __int16)v83 >> 10) + 192]
        ^ v78
        ^ v67[(v82 >> 26) + 384]
        ^ v67[(unsigned __int8)v82 >> 2]
        ^ v67[((unsigned __int16)v82 >> 10) + 128]
        ^ v67[((v82 >> 18) & 0x3F) + 256]
        ^ v67[(v83 >> 26) + 448]
        ^ v67[((unsigned __int8)v83 >> 2) + 64]
        ^ v67[((v83 >> 18) & 0x3F) + 320];
    v85 = v84 ^ a2[12];
    v86 = __ROR4__(a2[13] ^ v84, 4);
    v87 = v67[((unsigned __int16)v86 >> 10) + 192]
        ^ v81
        ^ v67[(v85 >> 26) + 384]
        ^ v67[(unsigned __int8)v85 >> 2]
        ^ v67[((unsigned __int16)v85 >> 10) + 128]
        ^ v67[((v85 >> 18) & 0x3F) + 256]
        ^ v67[(v86 >> 26) + 448]
        ^ v67[((unsigned __int8)v86 >> 2) + 64]
        ^ v67[((v86 >> 18) & 0x3F) + 320];
    v88 = a2[14] ^ v87;
    v89 = __ROR4__(a2[15] ^ v87, 4);
    v90 = v84
        ^ v67[(v88 >> 26) + 384]
        ^ v67[(unsigned __int8)v88 >> 2]
        ^ v67[((unsigned __int16)v88 >> 10) + 128]
        ^ v67[((v88 >> 18) & 0x3F) + 256]
        ^ v67[(v89 >> 26) + 448]
        ^ v67[((unsigned __int8)v89 >> 2) + 64]
        ^ v67[((unsigned __int16)v89 >> 10) + 192]
        ^ v67[((v89 >> 18) & 0x3F) + 320];
    v91 = v90 ^ a2[16];
    v92 = __ROR4__(a2[17] ^ v90, 4);
    v93 = v67[((unsigned __int16)v92 >> 10) + 192]
        ^ v87
        ^ v67[(v91 >> 26) + 384]
        ^ v67[(unsigned __int8)v91 >> 2]
        ^ v67[((unsigned __int16)v91 >> 10) + 128]
        ^ v67[((v91 >> 18) & 0x3F) + 256]
        ^ v67[(v92 >> 26) + 448]
        ^ v67[((unsigned __int8)v92 >> 2) + 64]
        ^ v67[((v92 >> 18) & 0x3F) + 320];
    v94 = v93 ^ a2[18];
    v95 = __ROR4__(a2[19] ^ v93, 4);
    v96 = v67[((unsigned __int16)v95 >> 10) + 192]
        ^ v90
        ^ v67[(v94 >> 26) + 384]
        ^ v67[(unsigned __int8)v94 >> 2]
        ^ v67[((unsigned __int16)v94 >> 10) + 128]
        ^ v67[((v94 >> 18) & 0x3F) + 256]
        ^ v67[(v95 >> 26) + 448]
        ^ v67[((unsigned __int8)v95 >> 2) + 64]
        ^ v67[((v95 >> 18) & 0x3F) + 320];
    v97 = a2[20] ^ v96;
    v98 = __ROR4__(a2[21] ^ v96, 4);
    v99 = v93
        ^ v67[(v97 >> 26) + 384]
        ^ v67[(unsigned __int8)v97 >> 2]
        ^ v67[((unsigned __int16)v97 >> 10) + 128]
        ^ v67[((v97 >> 18) & 0x3F) + 256]
        ^ v67[(v98 >> 26) + 448]
        ^ v67[((unsigned __int8)v98 >> 2) + 64]
        ^ v67[((unsigned __int16)v98 >> 10) + 192]
        ^ v67[((v98 >> 18) & 0x3F) + 320];
    v100 = v99 ^ a2[22];
    v101 = __ROR4__(a2[23] ^ v99, 4);
    v102 = v67[((unsigned __int16)v101 >> 10) + 192]
         ^ v96
         ^ v67[(v100 >> 26) + 384]
         ^ v67[(unsigned __int8)v100 >> 2]
         ^ v67[((unsigned __int16)v100 >> 10) + 128]
         ^ v67[((v100 >> 18) & 0x3F) + 256]
         ^ v67[(v101 >> 26) + 448]
         ^ v67[((unsigned __int8)v101 >> 2) + 64]
         ^ v67[((v101 >> 18) & 0x3F) + 320];
    v103 = v102 ^ a2[24];
    v104 = __ROR4__(a2[25] ^ v102, 4);
    v44 = a2[28];
    v45 = v67[((unsigned __int8)v104 >> 2) + 64]
        ^ v99
        ^ v67[(v103 >> 26) + 384]
        ^ v67[(unsigned __int8)v103 >> 2]
        ^ v67[((unsigned __int16)v103 >> 10) + 128]
        ^ v67[((v103 >> 18) & 0x3F) + 256]
        ^ v67[(v104 >> 26) + 448]
        ^ v67[((unsigned __int16)v104 >> 10) + 192]
        ^ v67[((v104 >> 18) & 0x3F) + 320];
    v105 = a2[26] ^ v45;
    v106 = __ROR4__(a2[27] ^ v45, 4);
    v107 = v102
         ^ v67[(v105 >> 26) + 384]
         ^ v67[(unsigned __int8)v105 >> 2]
         ^ v67[((unsigned __int16)v105 >> 10) + 128]
         ^ v67[((v105 >> 18) & 0x3F) + 256]
         ^ v67[(v106 >> 26) + 448];
    v49 = a2[29];
    v50 = a2[30];
    v52 = v67[((unsigned __int16)v106 >> 10) + 192]
        ^ v107
        ^ v67[((unsigned __int8)v106 >> 2) + 64]
        ^ DES_SPtrans[((v106 >> 18) & 0x3F) + 320];
    v51 = a2[31];
  }
  else
  {
    v5 = a2[30] ^ v3;
    v6 = DES_SPtrans;
    v7 = __ROR4__(a2[31] ^ v3, 4);
    v8 = v4
       ^ v6[(v5 >> 26) + 384]
       ^ v6[(unsigned __int8)v5 >> 2]
       ^ v6[((unsigned __int16)v5 >> 10) + 128]
       ^ v6[((v5 >> 18) & 0x3F) + 256]
       ^ v6[(v7 >> 26) + 448]
       ^ v6[((unsigned __int8)v7 >> 2) + 64]
       ^ v6[((unsigned __int16)v7 >> 10) + 192]
       ^ v6[((v7 >> 18) & 0x3F) + 320];
    v9 = v8 ^ a2[28];
    v10 = __ROR4__(a2[29] ^ v8, 4);
    v11 = v3
        ^ v6[(v9 >> 26) + 384]
        ^ v6[(unsigned __int8)v9 >> 2]
        ^ v6[((unsigned __int16)v9 >> 10) + 128]
        ^ v6[((v9 >> 18) & 0x3F) + 256]
        ^ v6[(v10 >> 26) + 448]
        ^ v6[((unsigned __int8)v10 >> 2) + 64]
        ^ v6[((unsigned __int16)v10 >> 10) + 192]
        ^ v6[((v10 >> 18) & 0x3F) + 320];
    v12 = v11 ^ a2[26];
    v13 = __ROR4__(a2[27] ^ v11, 4);
    v14 = v8
        ^ v6[(v12 >> 26) + 384]
        ^ v6[(unsigned __int8)v12 >> 2]
        ^ v6[((unsigned __int16)v12 >> 10) + 128]
        ^ v6[((v12 >> 18) & 0x3F) + 256]
        ^ v6[(v13 >> 26) + 448]
        ^ v6[((unsigned __int8)v13 >> 2) + 64]
        ^ v6[((unsigned __int16)v13 >> 10) + 192]
        ^ v6[((v13 >> 18) & 0x3F) + 320];
    v15 = v14 ^ a2[24];
    v16 = __ROR4__(a2[25] ^ v14, 4);
    v17 = v11
        ^ v6[(v15 >> 26) + 384]
        ^ v6[(unsigned __int8)v15 >> 2]
        ^ v6[((unsigned __int16)v15 >> 10) + 128]
        ^ v6[((v15 >> 18) & 0x3F) + 256]
        ^ v6[(v16 >> 26) + 448]
        ^ v6[((unsigned __int8)v16 >> 2) + 64]
        ^ v6[((unsigned __int16)v16 >> 10) + 192]
        ^ v6[((v16 >> 18) & 0x3F) + 320];
    v18 = v17 ^ a2[22];
    v19 = __ROR4__(a2[23] ^ v17, 4);
    v20 = v14
        ^ v6[(v18 >> 26) + 384]
        ^ v6[(unsigned __int8)v18 >> 2]
        ^ v6[((unsigned __int16)v18 >> 10) + 128]
        ^ v6[((v18 >> 18) & 0x3F) + 256]
        ^ v6[(v19 >> 26) + 448]
        ^ v6[((unsigned __int8)v19 >> 2) + 64]
        ^ v6[((unsigned __int16)v19 >> 10) + 192]
        ^ v6[((v19 >> 18) & 0x3F) + 320];
    v21 = v20 ^ a2[20];
    v22 = __ROR4__(a2[21] ^ v20, 4);
    v23 = v6[((unsigned __int16)v22 >> 10) + 192]
        ^ v17
        ^ v6[(v21 >> 26) + 384]
        ^ v6[(unsigned __int8)v21 >> 2]
        ^ v6[((unsigned __int16)v21 >> 10) + 128]
        ^ v6[((v21 >> 18) & 0x3F) + 256]
        ^ v6[(v22 >> 26) + 448]
        ^ v6[((unsigned __int8)v22 >> 2) + 64]
        ^ v6[((v22 >> 18) & 0x3F) + 320];
    v24 = v23 ^ a2[18];
    v25 = __ROR4__(a2[19] ^ v23, 4);
    v26 = v6[((unsigned __int16)v25 >> 10) + 192]
        ^ v20
        ^ v6[(v24 >> 26) + 384]
        ^ v6[(unsigned __int8)v24 >> 2]
        ^ v6[((unsigned __int16)v24 >> 10) + 128]
        ^ v6[((v24 >> 18) & 0x3F) + 256]
        ^ v6[(v25 >> 26) + 448]
        ^ v6[((unsigned __int8)v25 >> 2) + 64]
        ^ v6[((v25 >> 18) & 0x3F) + 320];
    v27 = a2[16] ^ v26;
    v28 = __ROR4__(a2[17] ^ v26, 4);
    v29 = v23
        ^ v6[(v27 >> 26) + 384]
        ^ v6[(unsigned __int8)v27 >> 2]
        ^ v6[((unsigned __int16)v27 >> 10) + 128]
        ^ v6[((v27 >> 18) & 0x3F) + 256]
        ^ v6[(v28 >> 26) + 448]
        ^ v6[((unsigned __int8)v28 >> 2) + 64]
        ^ v6[((unsigned __int16)v28 >> 10) + 192]
        ^ v6[((v28 >> 18) & 0x3F) + 320];
    v30 = v29 ^ a2[14];
    v31 = __ROR4__(a2[15] ^ v29, 4);
    v32 = v6[((unsigned __int16)v31 >> 10) + 192]
        ^ v26
        ^ v6[(v30 >> 26) + 384]
        ^ v6[(unsigned __int8)v30 >> 2]
        ^ v6[((unsigned __int16)v30 >> 10) + 128]
        ^ v6[((v30 >> 18) & 0x3F) + 256]
        ^ v6[(v31 >> 26) + 448]
        ^ v6[((unsigned __int8)v31 >> 2) + 64]
        ^ v6[((v31 >> 18) & 0x3F) + 320];
    v33 = v32 ^ a2[12];
    v34 = __ROR4__(a2[13] ^ v32, 4);
    v35 = v6[((unsigned __int16)v34 >> 10) + 192]
        ^ v29
        ^ v6[(v33 >> 26) + 384]
        ^ v6[(unsigned __int8)v33 >> 2]
        ^ v6[((unsigned __int16)v33 >> 10) + 128]
        ^ v6[((v33 >> 18) & 0x3F) + 256]
        ^ v6[(v34 >> 26) + 448]
        ^ v6[((unsigned __int8)v34 >> 2) + 64]
        ^ v6[((v34 >> 18) & 0x3F) + 320];
    v36 = a2[10] ^ v35;
    v37 = __ROR4__(a2[11] ^ v35, 4);
    v38 = v32
        ^ v6[(v36 >> 26) + 384]
        ^ v6[(unsigned __int8)v36 >> 2]
        ^ v6[((unsigned __int16)v36 >> 10) + 128]
        ^ v6[((v36 >> 18) & 0x3F) + 256]
        ^ v6[(v37 >> 26) + 448]
        ^ v6[((unsigned __int8)v37 >> 2) + 64]
        ^ v6[((unsigned __int16)v37 >> 10) + 192]
        ^ v6[((v37 >> 18) & 0x3F) + 320];
    v39 = v38 ^ a2[8];
    v40 = __ROR4__(a2[9] ^ v38, 4);
    v41 = v6[((unsigned __int16)v40 >> 10) + 192]
        ^ v35
        ^ v6[(v39 >> 26) + 384]
        ^ v6[(unsigned __int8)v39 >> 2]
        ^ v6[((unsigned __int16)v39 >> 10) + 128]
        ^ v6[((v39 >> 18) & 0x3F) + 256]
        ^ v6[(v40 >> 26) + 448]
        ^ v6[((unsigned __int8)v40 >> 2) + 64]
        ^ v6[((v40 >> 18) & 0x3F) + 320];
    v42 = v41 ^ a2[6];
    v43 = __ROR4__(a2[7] ^ v41, 4);
    v44 = a2[2];
    v45 = v6[((unsigned __int8)v43 >> 2) + 64]
        ^ v38
        ^ v6[(v42 >> 26) + 384]
        ^ v6[(unsigned __int8)v42 >> 2]
        ^ v6[((unsigned __int16)v42 >> 10) + 128]
        ^ v6[((v42 >> 18) & 0x3F) + 256]
        ^ v6[(v43 >> 26) + 448]
        ^ v6[((unsigned __int16)v43 >> 10) + 192]
        ^ v6[((v43 >> 18) & 0x3F) + 320];
    v46 = a2[4] ^ v45;
    v47 = __ROR4__(a2[5] ^ v45, 4);
    v48 = v41
        ^ v6[(v46 >> 26) + 384]
        ^ v6[(unsigned __int8)v46 >> 2]
        ^ v6[((unsigned __int16)v46 >> 10) + 128]
        ^ v6[((v46 >> 18) & 0x3F) + 256]
        ^ v6[(v47 >> 26) + 448]
        ^ v6[((unsigned __int8)v47 >> 2) + 64];
    v49 = a2[3];
    v50 = *a2;
    v51 = a2[1];
    v52 = DES_SPtrans[((unsigned __int16)v47 >> 10) + 192] ^ v48 ^ DES_SPtrans[((v47 >> 18) & 0x3F) + 320];
  }
  v53 = __ROR4__(v49 ^ v52, 4);
  v54 = v45
      ^ DES_SPtrans[((v52 ^ v44) >> 26) + 384]
      ^ DES_SPtrans[(unsigned __int8)(v52 ^ v44) >> 2]
      ^ DES_SPtrans[((unsigned __int16)(v52 ^ v44) >> 10) + 128]
      ^ DES_SPtrans[(((v52 ^ v44) >> 18) & 0x3F) + 256]
      ^ DES_SPtrans[(v53 >> 26) + 448]
      ^ DES_SPtrans[((unsigned __int8)v53 >> 2) + 64]
      ^ DES_SPtrans[((unsigned __int16)v53 >> 10) + 192]
      ^ DES_SPtrans[((v53 >> 18) & 0x3F) + 320];
  v55 = v54 ^ v50;
  v56 = __ROR4__(v51 ^ v54, 4);
  v57 = ((unsigned __int16)(v54 ^ v50) >> 10) + 128;
  v58 = v52 ^ DES_SPtrans[((v54 ^ v50) >> 26) + 384];
  v59 = DES_SPtrans[(((v54 ^ v50) >> 18) & 0x3F) + 256];
  v60 = v58 ^ DES_SPtrans[v55 >> 2];
  v61 = DES_SPtrans[(v56 >> 26) + 448];
  v62 = v60 ^ DES_SPtrans[v57];
  v63 = DES_SPtrans[((unsigned __int8)v56 >> 2) + 64];
  v64 = DES_SPtrans[((unsigned __int16)v56 >> 10) + 192];
  v65 = DES_SPtrans[((v56 >> 18) & 0x3F) + 320];
  *result = __ROR4__(v54, 3);
  result[1] = __ROR4__(v65 ^ v61 ^ v62 ^ v59 ^ v63 ^ v64, 3);
  return result;
}
