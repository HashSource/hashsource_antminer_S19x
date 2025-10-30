int __fastcall sub_1784F8(_DWORD *a1, int a2, unsigned __int8 *a3)
{
  int v5; // r1
  int v6; // r5
  int v7; // r11
  int v8; // r2
  int v9; // r7
  int v10; // r9
  int v11; // r4
  int v12; // r0
  int v13; // lr
  int v14; // r1
  int v15; // r4
  int v16; // r7
  int v17; // r11
  unsigned int v18; // r10
  unsigned int v19; // r7
  int v20; // r2
  int v21; // r0
  unsigned int v22; // r11
  int v23; // r1
  int v24; // r5
  unsigned int v25; // r2
  int v26; // r4
  int v27; // lr
  int v28; // r7
  int v29; // r10
  unsigned int v30; // r3
  int v31; // r4
  int v32; // r1
  int v33; // r7
  unsigned int v34; // r1
  int v35; // r10
  unsigned int v36; // r2
  unsigned int v37; // lr
  int v38; // r7
  int v39; // r5
  int v40; // r1
  int v41; // r4
  int v42; // r2
  int v43; // r3
  unsigned int v44; // r11
  int v45; // r1
  int v46; // r4
  unsigned int v47; // r0
  unsigned int v48; // r3
  int v49; // r1
  unsigned int v50; // r11
  unsigned int v51; // r4
  int v52; // r10
  int v53; // r7
  int v54; // r3
  int v55; // r0
  int v56; // r2
  unsigned int v57; // lr
  unsigned int v58; // r2
  int v59; // lr
  int v60; // r5
  int v61; // r4
  int v62; // r0
  int v63; // r4
  int v64; // r2
  int v65; // r3
  int v66; // r4
  int v67; // r0
  int v68; // r2
  int v69; // r3
  int v70; // r2
  int v71; // r0
  int v72; // r4
  int v73; // r5
  int v74; // r4
  int v75; // r0
  int v76; // r1
  int v77; // r2
  int v78; // r3
  int v79; // r7
  int v80; // lr
  int v81; // r4
  int v82; // r0
  int v83; // r1
  int v84; // r2
  int v85; // r3
  int v86; // r6
  int v87; // r7
  char v88; // r12
  int v89; // lr
  int v90; // r5
  int v91; // r6
  int result; // r0
  int v93; // r1
  int v94; // r2
  int v95; // r3
  int v96; // r5
  int *v97; // [sp+0h] [bp-11Ch]
  unsigned int v98; // [sp+4h] [bp-118h]
  int v99; // [sp+4h] [bp-118h]
  int v100; // [sp+4h] [bp-118h]
  int v101; // [sp+4h] [bp-118h]
  unsigned int v102; // [sp+8h] [bp-114h]
  int v103; // [sp+8h] [bp-114h]
  int v104; // [sp+8h] [bp-114h]
  int v105; // [sp+8h] [bp-114h]
  unsigned int v106; // [sp+Ch] [bp-110h]
  unsigned int v107; // [sp+Ch] [bp-110h]
  int v108; // [sp+Ch] [bp-110h]
  int v109; // [sp+Ch] [bp-110h]
  int v110; // [sp+Ch] [bp-110h]
  int v111; // [sp+10h] [bp-10Ch]
  int v112; // [sp+10h] [bp-10Ch]
  int v113; // [sp+10h] [bp-10Ch]
  int v114; // [sp+10h] [bp-10Ch]
  int v115; // [sp+10h] [bp-10Ch]
  unsigned int v116; // [sp+14h] [bp-108h]
  int v117; // [sp+18h] [bp-104h]
  int v118; // [sp+18h] [bp-104h]
  int v119; // [sp+18h] [bp-104h]
  int v120; // [sp+18h] [bp-104h]
  int v121; // [sp+18h] [bp-104h]
  int v122; // [sp+1Ch] [bp-100h]
  int v123; // [sp+1Ch] [bp-100h]
  int v124; // [sp+1Ch] [bp-100h]
  int v125; // [sp+1Ch] [bp-100h]
  int v126; // [sp+20h] [bp-FCh]
  int v127; // [sp+20h] [bp-FCh]
  unsigned int v128; // [sp+20h] [bp-FCh]
  int v129; // [sp+24h] [bp-F8h]
  int v130; // [sp+28h] [bp-F4h]
  unsigned int v131; // [sp+28h] [bp-F4h]
  int v132; // [sp+28h] [bp-F4h]
  int v133; // [sp+2Ch] [bp-F0h]
  int v134; // [sp+2Ch] [bp-F0h]
  int v135; // [sp+2Ch] [bp-F0h]
  int v136; // [sp+30h] [bp-ECh]
  int v137; // [sp+30h] [bp-ECh]
  unsigned int v138; // [sp+30h] [bp-ECh]
  int v139; // [sp+34h] [bp-E8h]
  unsigned int v140; // [sp+34h] [bp-E8h]
  int v141; // [sp+34h] [bp-E8h]
  int v142; // [sp+38h] [bp-E4h]
  int v143; // [sp+40h] [bp-DCh]
  int v144; // [sp+40h] [bp-DCh]
  int v145; // [sp+44h] [bp-D8h]
  int v146; // [sp+44h] [bp-D8h]
  _DWORD s[16]; // [sp+58h] [bp-C4h] BYREF
  _DWORD v149[16]; // [sp+98h] [bp-84h] BYREF
  int v150; // [sp+D8h] [bp-44h] BYREF
  int v151; // [sp+DCh] [bp-40h]
  int v152; // [sp+E0h] [bp-3Ch]
  int v153; // [sp+E4h] [bp-38h]
  int v154; // [sp+E8h] [bp-34h]
  int v155; // [sp+ECh] [bp-30h]
  int v156; // [sp+F0h] [bp-2Ch]
  int v157; // [sp+F4h] [bp-28h]
  int v158; // [sp+F8h] [bp-24h]
  int v159; // [sp+FCh] [bp-20h]
  int v160; // [sp+100h] [bp-1Ch]
  int v161; // [sp+104h] [bp-18h]
  int v162; // [sp+108h] [bp-14h]
  int v163; // [sp+10Ch] [bp-10h]
  int v164; // [sp+110h] [bp-Ch]
  int v165; // [sp+114h] [bp-8h]

  memset(s, 0, sizeof(s));
  v5 = a2;
  if ( a2 >= 16 )
    v5 = 16;
  if ( v5 > 0 )
  {
    s[0] = *a3;
    if ( v5 != 1 )
    {
      s[1] = a3[1];
      if ( v5 != 2 )
      {
        s[2] = a3[2];
        if ( v5 != 3 )
        {
          s[3] = a3[3];
          if ( v5 != 4 )
          {
            s[4] = a3[4];
            if ( v5 != 5 )
            {
              s[5] = a3[5];
              if ( v5 != 6 )
              {
                s[6] = a3[6];
                if ( v5 != 7 )
                {
                  s[7] = a3[7];
                  if ( v5 != 8 )
                  {
                    s[8] = a3[8];
                    if ( v5 != 9 )
                    {
                      s[9] = a3[9];
                      if ( v5 != 10 )
                      {
                        s[10] = a3[10];
                        if ( v5 != 11 )
                        {
                          s[11] = a3[11];
                          if ( v5 != 12 )
                          {
                            s[12] = a3[12];
                            if ( v5 != 13 )
                            {
                              s[13] = a3[13];
                              if ( v5 != 14 )
                              {
                                s[14] = a3[14];
                                if ( v5 == 16 )
                                  s[15] = a3[15];
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  v6 = s[13];
  v106 = s[12];
  v97 = v149;
  v117 = s[9];
  v7 = s[8];
  v111 = s[10];
  v8 = (s[5] << 16) | (s[4] << 24) | s[7];
  v9 = s[15];
  v10 = s[11];
  v11 = (s[13] << 16) | (s[12] << 24) | s[15];
  v98 = (s[1] << 16) | (s[0] << 24) | s[3] | (s[2] << 8);
  v12 = (s[9] << 16) | (s[8] << 24) | s[11];
  a1[32] = v5 <= 10;
  v13 = s[14];
  v116 = v8 | (s[6] << 8);
  v14 = v11 | (s[14] << 8);
  v15 = CAST_S_table5[v9];
  v142 = CAST_S_table5[v10];
  v16 = CAST_S_table6[v7];
  v17 = v6;
  v102 = v12 | (v111 << 8);
  v18 = v14;
  while ( 1 )
  {
    v19 = v16 ^ v98 ^ CAST_S_table4[v17] ^ CAST_S_table6[v106] ^ CAST_S_table7[v13] ^ v15;
    v99 = (unsigned __int8)v19;
    v107 = HIBYTE(v19);
    v20 = CAST_S_table6[BYTE2(v19)];
    v21 = CAST_S_table7[BYTE1(v19)];
    v122 = BYTE2(v19);
    v22 = CAST_S_table7[v111]
        ^ CAST_S_table7[(unsigned __int8)v19]
        ^ CAST_S_table4[HIBYTE(v19)]
        ^ CAST_S_table5[BYTE1(v19)]
        ^ v20
        ^ v102;
    v139 = v19 ^ v21;
    v112 = CAST_S_table7[HIBYTE(v22)];
    v23 = CAST_S_table5[BYTE1(v22)];
    v133 = CAST_S_table6[(unsigned __int8)v19] ^ v21;
    v24 = CAST_S_table6[BYTE2(v22)];
    v136 = CAST_S_table7[HIBYTE(v19)] ^ v20;
    v25 = CAST_S_table4[(unsigned __int8)v22] ^ v112 ^ CAST_S_table4[v117] ^ v23 ^ v24 ^ v18;
    v26 = CAST_S_table4[BYTE1(v19)] ^ CAST_S_table6[(unsigned __int8)v22];
    v118 = CAST_S_table7[BYTE1(v22)];
    v27 = CAST_S_table4[BYTE1(v25)];
    v28 = CAST_S_table5[BYTE2(v25)];
    v113 = v23 ^ v24 ^ v112 ^ CAST_S_table5[(unsigned __int8)v25] ^ v27;
    v29 = CAST_S_table6[BYTE2(v25)];
    v30 = CAST_S_table7[HIBYTE(v25)] ^ CAST_S_table6[(unsigned __int8)v25] ^ v27 ^ v28 ^ v116 ^ v142;
    *v97 = v26 ^ v118 ^ CAST_S_table4[HIBYTE(v25)] ^ v28;
    v31 = CAST_S_table5[BYTE2(v30)];
    v97[1] = v113;
    v32 = CAST_S_table5[(unsigned __int8)v30];
    v97[2] = v133 ^ v29 ^ CAST_S_table4[HIBYTE(v30)] ^ v31;
    v33 = CAST_S_table6[v107];
    v108 = CAST_S_table7[HIBYTE(v30)] ^ v32 ^ v136;
    v34 = CAST_S_table6[HIBYTE(v22)]
        ^ CAST_S_table5[(unsigned __int8)v22]
        ^ v33
        ^ v118
        ^ CAST_S_table4[BYTE2(v22)]
        ^ v25;
    v35 = v30 ^ CAST_S_table5[v99];
    v36 = HIBYTE(v34);
    v37 = v34;
    v100 = v22 ^ CAST_S_table4[v122];
    v38 = CAST_S_table4[HIBYTE(v34)];
    v39 = CAST_S_table7[(unsigned __int8)v34];
    v103 = (unsigned __int8)v34;
    v40 = CAST_S_table5[BYTE1(v34)];
    v41 = v108 ^ CAST_S_table4[BYTE1(v30)];
    v42 = CAST_S_table5[v36];
    v43 = CAST_S_table4[BYTE2(v37)];
    v44 = v38 ^ v139 ^ v39 ^ v40 ^ CAST_S_table6[BYTE2(v37)];
    v109 = (unsigned __int8)v44;
    v45 = v40 ^ CAST_S_table4[v103];
    v114 = BYTE2(v44);
    v97[3] = v41;
    v123 = CAST_S_table5[BYTE1(v44)];
    v119 = CAST_S_table4[(unsigned __int8)v44];
    v46 = v43 ^ v42;
    v47 = CAST_S_table6[BYTE2(v44)] ^ v100 ^ v119 ^ CAST_S_table7[HIBYTE(v44)] ^ v123;
    v48 = v35
        ^ CAST_S_table6[(unsigned __int8)v47]
        ^ CAST_S_table7[HIBYTE(v47)]
        ^ CAST_S_table4[BYTE1(v47)]
        ^ CAST_S_table5[BYTE2(v47)];
    v134 = CAST_S_table6[HIBYTE(v48)];
    v49 = v45 ^ CAST_S_table4[HIBYTE(v47)] ^ v134 ^ CAST_S_table7[BYTE2(v48)];
    v97[5] = v46 ^ CAST_S_table7[(unsigned __int8)v48] ^ CAST_S_table6[BYTE1(v48)] ^ CAST_S_table5[BYTE2(v48)];
    v97[4] = v49;
    v137 = CAST_S_table6[HIBYTE(v47)];
    v140 = v37
         ^ v137
         ^ v134
         ^ CAST_S_table5[(unsigned __int8)v48]
         ^ CAST_S_table4[BYTE2(v48)]
         ^ CAST_S_table7[BYTE1(v48)];
    v143 = CAST_S_table5[HIBYTE(v44)];
    v130 = CAST_S_table5[BYTE1(v140)];
    v145 = v44 ^ CAST_S_table5[(unsigned __int8)v47];
    v50 = CAST_S_table4[HIBYTE(v140)]
        ^ v47
        ^ CAST_S_table7[BYTE1(v47)]
        ^ CAST_S_table7[(unsigned __int8)v140]
        ^ v130
        ^ CAST_S_table6[BYTE2(v140)];
    v104 = v119 ^ CAST_S_table6[v103];
    v120 = CAST_S_table4[(unsigned __int8)v50];
    v126 = CAST_S_table5[BYTE1(v50)];
    v101 = v130 ^ CAST_S_table4[(unsigned __int8)v140];
    v51 = CAST_S_table6[BYTE2(v50)] ^ v126 ^ CAST_S_table7[HIBYTE(v50)] ^ v48 ^ CAST_S_table4[BYTE2(v47)] ^ v120;
    v52 = BYTE1(v51);
    v53 = v104 ^ v123 ^ v137 ^ CAST_S_table7[BYTE2(v47)];
    v131 = HIBYTE(v51);
    v54 = CAST_S_table7[(unsigned __int8)v47]
        ^ v143
        ^ CAST_S_table7[v109]
        ^ CAST_S_table4[v114]
        ^ CAST_S_table6[BYTE1(v47)];
    v124 = (unsigned __int8)v51;
    v55 = CAST_S_table4[BYTE1(v51)];
    v97[6] = v53;
    v105 = BYTE2(v51);
    v56 = CAST_S_table6[(unsigned __int8)v51] ^ v145 ^ CAST_S_table7[HIBYTE(v51)] ^ v55;
    v97[7] = v54;
    v57 = v56 ^ CAST_S_table5[BYTE2(v51)];
    v58 = HIBYTE(v57);
    v138 = v57;
    v144 = (unsigned __int8)v57;
    v146 = BYTE1(v57);
    v97[8] = CAST_S_table4[BYTE2(v51)] ^ v101 ^ CAST_S_table6[HIBYTE(v57)] ^ CAST_S_table7[BYTE2(v57)];
    v59 = CAST_S_table4[BYTE2(v50)];
    v110 = CAST_S_table7[BYTE1(v50)];
    v60 = CAST_S_table4[BYTE2(v140)];
    v98 = CAST_S_table6[HIBYTE(v50)]
        ^ CAST_S_table5[(unsigned __int8)v50]
        ^ CAST_S_table6[HIBYTE(v140)]
        ^ v59
        ^ v110
        ^ v51;
    v115 = CAST_S_table5[HIBYTE(v140)];
    v61 = CAST_S_table6[BYTE1(v140)] ^ v120;
    v121 = CAST_S_table6[v131];
    v135 = CAST_S_table6[BYTE2(v98)];
    v62 = v59 ^ v110 ^ CAST_S_table5[HIBYTE(v50)] ^ CAST_S_table7[v124];
    v116 = CAST_S_table7[(unsigned __int8)v98]
         ^ CAST_S_table7[BYTE1(v140)]
         ^ v140
         ^ CAST_S_table4[HIBYTE(v98)]
         ^ CAST_S_table5[BYTE1(v98)]
         ^ v135;
    v63 = v61 ^ v126;
    v125 = CAST_S_table7[HIBYTE(v116)];
    v127 = CAST_S_table5[(unsigned __int8)v140];
    v141 = CAST_S_table6[BYTE2(v116)];
    v64 = v60 ^ v115 ^ CAST_S_table7[v144] ^ CAST_S_table5[v58] ^ CAST_S_table6[v146];
    v65 = CAST_S_table7[v105];
    v102 = CAST_S_table4[(unsigned __int8)v116] ^ v50 ^ v60 ^ v125 ^ CAST_S_table5[BYTE1(v116)] ^ v141;
    v97[11] = v62 ^ CAST_S_table6[v52];
    v66 = v63 ^ v121 ^ v65;
    v111 = BYTE1(v102);
    v67 = CAST_S_table6[(unsigned __int8)v102];
    v117 = BYTE2(v102);
    v97[10] = v66;
    v97[9] = v64;
    v68 = CAST_S_table7[HIBYTE(v102)] ^ v138 ^ v127 ^ v67 ^ CAST_S_table4[BYTE1(v102)];
    v128 = CAST_S_table5[BYTE2(v102)];
    v18 = v68 ^ v128;
    v69 = CAST_S_table5[(unsigned __int8)v102];
    v106 = (v68 ^ v128) >> 24;
    v17 = (unsigned __int8)((v68 ^ v128) >> 16);
    v13 = BYTE1(v18);
    v132 = CAST_S_table5[(unsigned __int8)(v68 ^ v128)];
    v129 = CAST_S_table6[HIBYTE(v102)];
    v70 = CAST_S_table6[(unsigned __int8)v116]
        ^ CAST_S_table4[(unsigned __int8)v98]
        ^ CAST_S_table7[BYTE1(v116)]
        ^ CAST_S_table4[HIBYTE(v102)]
        ^ v128;
    v71 = CAST_S_table7[HIBYTE(v98)] ^ v135 ^ v132 ^ CAST_S_table4[BYTE1(v18)];
    v72 = CAST_S_table6[(unsigned __int8)v98]
        ^ CAST_S_table7[BYTE1(v98)]
        ^ v129
        ^ CAST_S_table4[HIBYTE(v18)]
        ^ CAST_S_table5[BYTE2(v18)];
    v73 = CAST_S_table7[BYTE2(v18)];
    v97[13] = CAST_S_table5[(unsigned __int8)v116] ^ v125 ^ v141 ^ v69 ^ CAST_S_table4[BYTE1(v102)];
    v97[12] = v70;
    v97[14] = v72;
    v97[15] = v71 ^ v73;
    if ( v97 != v149 )
      break;
    v16 = v129;
    v15 = v132;
    v142 = v69;
    v97 = &v150;
  }
  v74 = ((_BYTE)v151 + 16) & 0x1F;
  v75 = ((_BYTE)v152 + 16) & 0x1F;
  v76 = ((_BYTE)v153 + 16) & 0x1F;
  v77 = ((_BYTE)v154 + 16) & 0x1F;
  v78 = ((_BYTE)v155 + 16) & 0x1F;
  v79 = ((_BYTE)v156 + 16) & 0x1F;
  v80 = ((_BYTE)v157 + 16) & 0x1F;
  a1[1] = ((_BYTE)v150 + 16) & 0x1F;
  a1[3] = v74;
  a1[5] = v75;
  a1[7] = v76;
  a1[9] = v77;
  a1[11] = v78;
  a1[13] = v79;
  a1[15] = v80;
  v81 = v149[2];
  v82 = v149[3];
  v83 = v149[4];
  v84 = v149[5];
  v85 = v149[6];
  v86 = v149[0];
  v87 = v149[7];
  a1[2] = v149[1];
  *a1 = v86;
  a1[4] = v81;
  a1[6] = v82;
  a1[8] = v83;
  a1[10] = v84;
  a1[12] = v85;
  a1[14] = v87;
  LOBYTE(v82) = v160;
  v88 = v159 + 16;
  LOBYTE(v83) = v161;
  LOBYTE(v84) = v162;
  LOBYTE(v85) = v163;
  v89 = ((_BYTE)v164 + 16) & 0x1F;
  a1[17] = ((_BYTE)v158 + 16) & 0x1F;
  v90 = v149[10];
  LOBYTE(v87) = v165;
  a1[16] = v149[8];
  a1[21] = ((_BYTE)v82 + 16) & 0x1F;
  v91 = v149[9];
  result = v149[12];
  a1[23] = ((_BYTE)v83 + 16) & 0x1F;
  a1[25] = ((_BYTE)v84 + 16) & 0x1F;
  v93 = v149[13];
  v94 = v149[14];
  a1[27] = ((_BYTE)v85 + 16) & 0x1F;
  a1[20] = v90;
  v95 = v149[15];
  v96 = v149[11];
  a1[19] = v88 & 0x1F;
  a1[29] = v89;
  a1[31] = ((_BYTE)v87 + 16) & 0x1F;
  a1[18] = v91;
  a1[22] = v96;
  a1[24] = result;
  a1[26] = v93;
  a1[28] = v94;
  a1[30] = v95;
  return result;
}
