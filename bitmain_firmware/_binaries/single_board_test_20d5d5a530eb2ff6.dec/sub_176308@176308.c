int __fastcall sub_176308(int a1, unsigned __int8 *a2, int *a3)
{
  int v3; // r3
  int v4; // r3
  int v5; // r3
  int v6; // r3
  int v7; // r5
  int v8; // r3
  int v9; // r6
  int v10; // r4
  int v11; // r6
  int v12; // r5
  int v13; // r1
  int v14; // r8
  unsigned int v15; // r0
  int v16; // r7
  int v17; // r12
  int v18; // r5
  int v19; // lr
  int v20; // r5
  int v21; // lr
  int v22; // r8
  int v23; // r5
  int v24; // t2
  int v25; // r5
  int v26; // r6
  unsigned int v27; // r10
  int v28; // r3
  int v29; // r10
  int v30; // t2
  int v31; // r10
  unsigned int v32; // r8
  int v33; // r12
  int v34; // t2
  int v35; // r12
  unsigned int v36; // r0
  int v37; // r10
  int v38; // r5
  unsigned int v39; // r9
  int v40; // r3
  unsigned int v41; // r0
  int v42; // r3
  unsigned int v43; // r6
  int v44; // r3
  int v45; // r7
  int v46; // r4
  int v47; // r12
  unsigned int v48; // r3
  int v49; // r7
  int v50; // r5
  int v51; // r4
  unsigned int v52; // r9
  int v53; // lr
  __int64 v54; // r10
  unsigned int v55; // r3
  unsigned int v56; // r12
  unsigned int v57; // r4
  unsigned int v58; // r1
  unsigned int v59; // r6
  unsigned int v60; // r3
  unsigned int v61; // r7
  unsigned int v62; // r5
  unsigned int v63; // r3
  unsigned int v64; // r6
  int v65; // r0
  unsigned int v66; // r4
  __int64 v67; // r0
  unsigned int v68; // r3
  int v69; // r12
  unsigned int v70; // r6
  unsigned int v71; // r7
  unsigned int v72; // lr
  int v73; // r6
  int v74; // r3
  unsigned int v75; // lr
  unsigned int v76; // r8
  unsigned int v77; // r6
  unsigned int v78; // r3
  unsigned int v79; // r12
  unsigned int v80; // r4
  unsigned int v81; // r3
  int v82; // r5
  unsigned int v83; // r3
  unsigned int v84; // r6
  unsigned int v85; // r9
  unsigned int v86; // r6
  unsigned int v87; // r5
  unsigned int v88; // r8
  unsigned int v89; // r5
  int v90; // lr
  unsigned int v91; // r7
  int v92; // r5
  unsigned int v94; // r10
  unsigned int v95; // r4
  unsigned int v96; // r3
  unsigned int v97; // r0
  unsigned int v98; // r12
  unsigned int v99; // lr
  unsigned int v100; // r7
  unsigned int v101; // r4
  unsigned int v102; // r7
  unsigned int v103; // r6
  unsigned int v104; // r5
  unsigned int v105; // r3
  unsigned int v106; // r6
  unsigned int v107; // r5
  unsigned int v108; // r0
  unsigned int v109; // r1
  unsigned int v110; // r7
  unsigned int v111; // r4
  unsigned int v112; // r0
  unsigned int v113; // r8
  unsigned int v114; // r7
  unsigned int v115; // r4
  unsigned int v116; // r0
  __int64 v117; // r8
  unsigned int v118; // r9
  unsigned int v119; // r6
  unsigned int v120; // r7
  unsigned int v121; // r1
  unsigned int v122; // r3
  unsigned int v123; // r5
  unsigned int v124; // r10
  int v125; // r7
  unsigned int v126; // r3
  __int64 v127; // r0
  unsigned int v128; // r10
  __int64 v129; // r6
  unsigned int v130; // lr
  int v131; // r11
  unsigned int v132; // r4
  unsigned int v133; // r12
  unsigned int v134; // r3
  unsigned int v135; // r5
  unsigned int v136; // [sp+0h] [bp-2Ch]
  unsigned int v137; // [sp+0h] [bp-2Ch]
  unsigned int v138; // [sp+4h] [bp-28h]
  unsigned int v139; // [sp+4h] [bp-28h]
  unsigned int v140; // [sp+4h] [bp-28h]
  unsigned int v141; // [sp+8h] [bp-24h]
  unsigned int v142; // [sp+Ch] [bp-20h]
  unsigned int v143; // [sp+10h] [bp-1Ch]
  unsigned int v144; // [sp+14h] [bp-18h]
  unsigned int v145; // [sp+18h] [bp-14h]
  unsigned int v147; // [sp+1Ch] [bp-10h]
  unsigned int v148; // [sp+20h] [bp-Ch]
  int v149; // [sp+24h] [bp-8h]

  v3 = ((a2[1] << 16) | (*a2 << 24)) ^ a2[3] | (a2[2] << 8);
  *a3 = v3;
  v138 = v3;
  v4 = ((a2[5] << 16) | (a2[4] << 24)) ^ a2[7] | (a2[6] << 8);
  a3[1] = v4;
  v141 = v4;
  v5 = ((a2[9] << 16) | (a2[8] << 24)) ^ a2[11] | (a2[10] << 8);
  a3[2] = v5;
  v136 = v5;
  v6 = ((a2[13] << 16) | (a2[12] << 24)) ^ a2[15] | (a2[14] << 8);
  v142 = v6;
  a3[3] = v6;
  if ( a1 == 128 )
  {
    v11 = v136;
    v17 = 0;
    v14 = v6;
    v16 = 0;
    v13 = v141;
    v12 = v138;
    v15 = v136;
  }
  else
  {
    v7 = a2[19] ^ ((a2[17] << 16) | (a2[16] << 24)) | (a2[18] << 8);
    a3[8] = v7;
    v8 = a2[23] ^ ((a2[21] << 16) | (a2[20] << 24)) | (a2[22] << 8);
    a3[9] = v8;
    if ( a1 == 192 )
    {
      v9 = ~v7;
      v10 = ~v8;
      a3[10] = ~v7;
      a3[11] = ~v8;
    }
    else
    {
      v9 = a2[27] ^ ((a2[25] << 16) | (a2[24] << 24)) | (a2[26] << 8);
      a3[10] = v9;
      v10 = ((a2[29] << 16) | (a2[28] << 24)) ^ a2[31] | (a2[30] << 8);
      a3[11] = v10;
    }
    v11 = v9 ^ v136;
    v12 = v7 ^ v138;
    v13 = v141 ^ v8;
    v14 = v10 ^ v142;
    v15 = v136;
    v16 = v8;
    v17 = v138 ^ v12;
  }
  v18 = dword_1E6500[((unsigned __int8)v12 ^ 0x7F) + 256]
      ^ dword_1E6500[(v12 ^ 0xA09E667F) >> 24]
      ^ dword_1E6500[(unsigned __int8)((unsigned __int16)(v12 ^ 0x667F) >> 8) + 768]
      ^ dword_1E6500[(unsigned __int8)((v12 ^ 0xA09E667F) >> 16) + 512];
  v19 = v18
      ^ dword_1E6500[(unsigned __int8)v13 ^ 0x8B]
      ^ dword_1E6500[((v13 ^ 0x3BCC908Bu) >> 24) + 512]
      ^ dword_1E6500[(unsigned __int8)((unsigned __int16)(v13 ^ 0x908B) >> 8) + 256]
      ^ dword_1E6500[(unsigned __int8)((v13 ^ 0x3BCC908Bu) >> 16) + 768];
  v20 = v19 ^ __ROR4__(v18, 8);
  v21 = v11 ^ v19;
  v22 = v20 ^ v14;
  v23 = dword_1E6500[((unsigned __int8)v21 ^ 0x58) + 256]
      ^ dword_1E6500[(v21 ^ 0xB67AE858) >> 24]
      ^ dword_1E6500[(unsigned __int8)((unsigned __int16)(v21 ^ 0xE858) >> 8) + 768]
      ^ dword_1E6500[(unsigned __int8)((v21 ^ 0xB67AE858) >> 16) + 512];
  v24 = __ROR4__(v23, 8);
  v25 = v23
      ^ dword_1E6500[(unsigned __int8)v22 ^ 0xB2]
      ^ dword_1E6500[((v22 ^ 0x4CAA73B2u) >> 24) + 512]
      ^ dword_1E6500[(unsigned __int8)((unsigned __int16)(v22 ^ 0x73B2) >> 8) + 256]
      ^ dword_1E6500[(unsigned __int8)((v22 ^ 0x4CAA73B2u) >> 16) + 768];
  v26 = v25 ^ v17;
  v27 = v25 ^ v17 ^ 0xC6EF372F;
  v28 = v16 ^ v24 ^ v25;
  v29 = dword_1E6500[(unsigned __int8)v27 + 256]
      ^ dword_1E6500[HIBYTE(v27)]
      ^ dword_1E6500[BYTE1(v27) + 768]
      ^ dword_1E6500[BYTE2(v27) + 512];
  v30 = __ROR4__(v29, 8);
  v31 = v29
      ^ dword_1E6500[(unsigned __int8)v28 ^ 0xBE]
      ^ dword_1E6500[((v28 ^ 0xE94F82BE) >> 24) + 512]
      ^ dword_1E6500[(unsigned __int8)((unsigned __int16)(v28 ^ 0x82BE) >> 8) + 256]
      ^ dword_1E6500[(unsigned __int8)((v28 ^ 0xE94F82BE) >> 16) + 768];
  v143 = v15 ^ v21 ^ v31;
  v32 = v142 ^ v22 ^ v30 ^ v31;
  v33 = dword_1E6500[((unsigned __int8)v143 ^ 0xA5) + 256]
      ^ dword_1E6500[(v143 ^ 0x54FF53A5) >> 24]
      ^ dword_1E6500[(unsigned __int8)((unsigned __int16)(v143 ^ 0x53A5) >> 8) + 768]
      ^ dword_1E6500[(unsigned __int8)((v143 ^ 0x54FF53A5) >> 16) + 512];
  v34 = __ROR4__(v33, 8);
  v35 = v33
      ^ dword_1E6500[(unsigned __int8)v32 ^ 0x1C]
      ^ dword_1E6500[((v32 ^ 0xF1D36F1C) >> 24) + 512]
      ^ dword_1E6500[(unsigned __int8)((unsigned __int16)(v32 ^ 0x6F1C) >> 8) + 256]
      ^ dword_1E6500[(unsigned __int8)((v32 ^ 0xF1D36F1C) >> 16) + 768];
  v36 = v26 ^ v35;
  v145 = v28 ^ v34 ^ v35;
  v144 = v26 ^ v35;
  if ( a1 == 128 )
  {
    a3[4] = v36;
    a3[5] = v145;
    v94 = (v32 >> 17) | (v143 << 15);
    v95 = __SPAIR64__(v36, v145) >> 17;
    v96 = (v36 >> 17) | (v32 << 15);
    v97 = (v143 >> 17) | (v145 << 15);
    a3[7] = v32;
    a3[12] = v95;
    v98 = (v141 >> 17) | (v138 << 15);
    a3[13] = v97;
    a3[11] = (v138 >> 17) | (v142 << 15);
    v99 = (v97 >> 17) | (v95 << 15);
    a3[10] = (v142 >> 17) | (v136 << 15);
    v100 = v95 >> 17;
    v101 = (v94 >> 17) | (v97 << 15);
    a3[15] = v96;
    a3[6] = v143;
    v102 = v100 | (v96 << 15);
    a3[14] = v94;
    a3[9] = (v136 >> 17) | (v141 << 15);
    v103 = a3[9];
    v104 = (v96 >> 17) | (v94 << 15);
    a3[16] = v99;
    a3[17] = v101;
    v105 = (v102 >> 17) | (v104 << 15);
    a3[18] = v104;
    a3[20] = (v103 >> 2) | (v98 << 30);
    a3[23] = (v98 >> 2) | (a3[11] << 30);
    a3[22] = ((unsigned int)a3[11] >> 2) | (a3[10] << 30);
    v106 = (v101 >> 17) | (v99 << 15);
    a3[21] = ((unsigned int)a3[10] >> 2) | (a3[9] << 30);
    v107 = (v104 >> 17) | (v101 << 15);
    v108 = a3[21];
    a3[19] = v102;
    v109 = (v99 >> 17) | (v102 << 15);
    a3[24] = v106;
    v110 = a3[20];
    v111 = v108 >> 17;
    v112 = v110;
    a3[25] = v107;
    a3[8] = v98;
    v113 = v110 >> 17;
    v114 = a3[23];
    v115 = v111 | (v112 << 15);
    v116 = (v107 >> 17) | (v106 << 15);
    LODWORD(v117) = v113 | (v114 << 15);
    v118 = v114 >> 17;
    v119 = (v106 >> 17) | (v109 << 15);
    v120 = a3[22];
    v121 = (v109 >> 17) | (v105 << 15);
    a3[28] = v116;
    v122 = (v105 >> 17) | (v107 << 15);
    HIDWORD(v117) = v118 | (v120 << 15);
    a3[31] = v119;
    v123 = (v121 >> 30) | (4 * v122);
    a3[29] = v122;
    v124 = v120 >> 17;
    v125 = a3[21];
    v126 = (v122 >> 30) | (4 * v116);
    a3[30] = v121;
    LODWORD(v127) = (v116 >> 30) | (4 * v119);
    v128 = v124 | (v125 << 15);
    a3[40] = v123;
    HIDWORD(v127) = (v119 >> 30) | (4 * v121);
    a3[43] = v126;
    LODWORD(v129) = v117 >> 15;
    v130 = (v128 >> 15) | (v115 << 17);
    v131 = (HIDWORD(v127) >> 15) | (v123 << 17);
    HIDWORD(v129) = (HIDWORD(v117) >> 15) | (v128 << 17);
    v132 = (v115 >> 15) | ((_DWORD)v117 << 17);
    a3[42] = v127;
    a3[41] = HIDWORD(v127);
    v133 = v129 >> 15;
    a3[51] = (v123 >> 15) | (v126 << 17);
    a3[50] = (v126 >> 15) | ((_DWORD)v127 << 17);
    a3[49] = v127 >> 15;
    v134 = (HIDWORD(v129) >> 15) | (v130 << 17);
    HIDWORD(v127) = (v130 >> 15) | (v132 << 17);
    v135 = (v132 >> 15) | ((_DWORD)v129 << 17);
    a3[48] = v131;
    a3[26] = HIDWORD(v117);
    a3[32] = v130;
    a3[33] = HIDWORD(v129);
    a3[27] = v117;
    a3[34] = v129;
    a3[35] = v132;
    a3[36] = v134;
    a3[37] = v133;
    a3[38] = v135;
    a3[39] = HIDWORD(v127);
    a3[44] = (v133 >> 15) | (v134 << 17);
    a3[47] = (v134 >> 15) | (HIDWORD(v127) << 17);
    a3[46] = (HIDWORD(v127) >> 15) | (v135 << 17);
    a3[45] = (v135 >> 15) | (v133 << 17);
    return 3;
  }
  else
  {
    v149 = a3[8] ^ v26 ^ v35;
    v37 = v145 ^ a3[9];
    v38 = dword_1E6500[((unsigned __int8)v149 ^ 0xFA) + 256]
        ^ dword_1E6500[(v149 ^ 0x10E527FAu) >> 24]
        ^ dword_1E6500[(unsigned __int8)((unsigned __int16)(v149 ^ 0x27FA) >> 8) + 768]
        ^ dword_1E6500[(unsigned __int8)((v149 ^ 0x10E527FAu) >> 16) + 512];
    v39 = (unsigned int)a3[9] >> 17;
    v40 = dword_1E6500[(unsigned __int8)((v37 ^ 0xDE682D1D) >> 16) + 768]
        ^ dword_1E6500[(unsigned __int8)v37 ^ 0x1D]
        ^ dword_1E6500[((v37 ^ 0xDE682D1D) >> 24) + 512]
        ^ dword_1E6500[(unsigned __int8)((unsigned __int16)(v37 ^ 0x2D1D) >> 8) + 256]
        ^ v38;
    v41 = v143 ^ a3[10] ^ v40;
    v42 = v32 ^ a3[11] ^ __ROR4__(v38, 8) ^ v40;
    v43 = v42 ^ 0xB3E6C1FD;
    v147 = v42;
    v44 = a3[8];
    a3[6] = v41;
    v148 = v39 | (v44 << 15);
    v45 = dword_1E6500[(unsigned __int8)((unsigned __int16)(v41 ^ 0x88C2) >> 8) + 768];
    v46 = dword_1E6500[((unsigned __int8)v41 ^ 0xC2) + 256] ^ dword_1E6500[(v41 ^ 0xB05688C2) >> 24];
    v47 = dword_1E6500[(unsigned __int8)v43];
    a3[7] = v147;
    v48 = a3[11];
    v49 = v45 ^ v46 ^ dword_1E6500[(unsigned __int8)((v41 ^ 0xB05688C2) >> 16) + 512];
    v50 = v37 ^ __ROR4__(v49, 8);
    v51 = dword_1E6500[BYTE1(v43) + 256] ^ v47 ^ dword_1E6500[HIBYTE(v43) + 512] ^ dword_1E6500[BYTE2(v43) + 768] ^ v49;
    v52 = ((unsigned int)a3[10] >> 17) | (a3[9] << 15);
    a3[10] = (v48 >> 17) | (a3[10] << 15);
    a3[11] = (v48 << 15) | ((unsigned int)a3[8] >> 17);
    a3[24] = (v136 >> 19) | (v141 << 13);
    a3[27] = (v141 >> 19) | (v138 << 13);
    a3[26] = (v138 >> 19) | (v142 << 13);
    a3[25] = (v142 >> 19) | (v136 << 13);
    v53 = v149 ^ v51;
    LODWORD(v54) = (v52 >> 17) | (v148 << 15);
    v55 = a3[11];
    v56 = (v149 ^ (unsigned int)v51) >> 2;
    v139 = (v147 >> 2) | (v41 << 30);
    v57 = v51 ^ v50;
    a3[4] = v53;
    v58 = (v41 >> 2) | (v57 << 30);
    HIDWORD(v54) = (v148 >> 17) | (v55 << 15);
    v59 = v55 >> 17;
    v60 = a3[10];
    v61 = (v57 >> 2) | (v53 << 30);
    a3[22] = v139;
    v62 = (v60 >> 17) | (v52 << 15);
    v63 = v56 | (v147 << 30);
    v137 = v59 | (a3[10] << 15);
    v64 = a3[24];
    a3[32] = ((unsigned int)a3[25] >> 17) | (v64 << 15);
    a3[5] = v57;
    v65 = a3[27];
    a3[21] = v58;
    a3[20] = v61;
    a3[23] = v63;
    a3[15] = (v144 >> 17) | (v32 << 15);
    a3[35] = (v64 >> 17) | (v65 << 15);
    a3[14] = (v32 >> 17) | (v143 << 15);
    v66 = (v63 >> 2) | (v139 << 30);
    LODWORD(v67) = (v139 >> 2) | (v58 << 30);
    a3[42] = v66;
    HIDWORD(v67) = (v58 >> 2) | (v61 << 30);
    a3[41] = v67;
    a3[13] = (v143 >> 17) | (v145 << 15);
    v68 = (v61 >> 2) | (v63 << 30);
    a3[40] = HIDWORD(v67);
    v69 = (v66 >> 13) | ((_DWORD)v67 << 19);
    a3[12] = (v145 >> 17) | (v144 << 15);
    v70 = a3[27];
    LODWORD(v67) = v67 >> 13;
    a3[43] = v68;
    a3[64] = v69;
    v71 = v54 >> 2;
    v72 = v70 >> 17;
    v73 = a3[26];
    a3[66] = (HIDWORD(v67) >> 13) | (v68 << 19);
    HIDWORD(v67) = a3[32];
    a3[65] = (v68 >> 13) | (v66 << 19);
    v74 = a3[35];
    a3[67] = v67;
    a3[34] = v72 | (v73 << 15);
    a3[33] = ((unsigned int)a3[26] >> 17) | (a3[25] << 15);
    v75 = (v62 >> 2) | ((_DWORD)v54 << 30);
    a3[47] = (HIDWORD(v67) >> 15) | (v74 << 17);
    HIDWORD(v67) = a3[12];
    v76 = (HIDWORD(v54) >> 2) | (v137 << 30);
    v77 = a3[15];
    v78 = a3[14];
    a3[8] = v148;
    v79 = (v137 >> 2) | (v62 << 30);
    a3[9] = v52;
    a3[17] = v62;
    v80 = (v77 >> 2) | (v78 << 30);
    LODWORD(v67) = v78 >> 2;
    v81 = a3[13];
    v82 = a3[33];
    a3[37] = v79;
    a3[36] = v75;
    LODWORD(v67) = v67 | (v81 << 30);
    a3[39] = v71;
    v83 = (v81 >> 2) | (HIDWORD(v67) << 30);
    a3[16] = v54;
    HIDWORD(v67) = (HIDWORD(v67) >> 2) | (v77 << 30);
    v84 = a3[35];
    a3[19] = HIDWORD(v54);
    a3[38] = v76;
    a3[46] = (v84 >> 15) | (a3[34] << 17);
    v85 = (unsigned int)a3[33] >> 15;
    v140 = ((unsigned int)a3[34] >> 15) | (v82 << 17);
    a3[18] = v137;
    v86 = v85 | (a3[32] << 17);
    a3[52] = (v76 >> 30) | (4 * v79);
    a3[55] = (v79 >> 30) | (4 * v75);
    a3[54] = (v75 >> 30) | (4 * v71);
    a3[59] = ((unsigned int)v67 >> 15) | (v83 << 17);
    v87 = a3[46];
    a3[53] = (v71 >> 30) | (4 * v76);
    v88 = v87 >> 30;
    v89 = a3[47];
    a3[29] = v67;
    a3[48] = v67;
    v90 = (v86 >> 30) | (4 * v89);
    v91 = v89 >> 30;
    v92 = a3[46];
    a3[30] = v80;
    a3[49] = v80;
    a3[28] = v83;
    a3[31] = HIDWORD(v67);
    a3[50] = HIDWORD(v67);
    a3[51] = v83;
    a3[56] = (v80 >> 15) | ((_DWORD)v67 << 17);
    a3[57] = (HIDWORD(v67) >> 15) | (v80 << 17);
    a3[58] = (v83 >> 15) | (HIDWORD(v67) << 17);
    a3[44] = v86;
    a3[45] = v140;
    a3[60] = v88 | (4 * v140);
    a3[63] = (v140 >> 30) | (4 * v86);
    a3[62] = v90;
    a3[61] = v91 | (4 * v92);
    return 4;
  }
}
