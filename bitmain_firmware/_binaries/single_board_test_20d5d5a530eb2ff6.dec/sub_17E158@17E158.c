int __fastcall sub_17E158(unsigned int a1, unsigned int a2, int a3)
{
  unsigned __int64 *v3; // r6
  int *v4; // r4
  int v5; // r3
  unsigned __int64 *v6; // r5
  int v7; // r0
  int v8; // r1
  int v9; // r2
  __int64 v10; // r6
  __int64 v11; // r6
  __int64 v12; // r0
  __int64 v13; // r2
  __int64 v14; // r6
  __int64 v15; // r8
  __int64 v16; // r8
  __int64 v17; // r0
  __int64 v18; // r8
  __int64 v19; // r4
  __int64 v20; // r8
  __int64 v21; // kr68_8
  __int64 v22; // r2
  __int64 v23; // r2
  __int64 v24; // krA0_8
  __int64 v25; // r6
  __int64 v26; // r8
  __int64 v27; // r4
  bool v28; // cf
  char v29; // r3
  int v30; // r3
  int v31; // r1
  int v32; // r3
  int v33; // r0
  int v34; // r1
  int v35; // r3
  int v36; // r2
  int v37; // r1
  int v38; // r0
  int v39; // r3
  int v40; // r2
  int v41; // r0
  int v42; // r1
  int v43; // r3
  int v44; // r2
  int v45; // r1
  int v46; // r0
  int v47; // r3
  int v48; // r2
  int v49; // r0
  int v50; // r1
  int v51; // r3
  int v52; // r2
  int v53; // r1
  int v54; // r0
  int v55; // r3
  int v56; // r1
  int v57; // r3
  int v58; // r0
  int v59; // r1
  int v60; // r3
  int v61; // r2
  int v62; // r1
  int v63; // r0
  int v64; // r3
  int v65; // r2
  int v66; // r0
  int v67; // r1
  int v68; // r3
  int v69; // r2
  int v70; // r1
  int v71; // r0
  int v72; // r3
  int v73; // r2
  int v74; // r0
  int v75; // r1
  int v76; // r3
  int v77; // r2
  __int64 v78; // r0
  int v79; // r3
  int *v80; // r3
  bool v81; // zf
  _QWORD *v82; // r4
  int *v83; // r0
  unsigned __int64 v84; // r2
  __int64 v85; // r6
  int *v86; // t2
  unsigned __int64 v87; // r8
  __int64 v88; // r2
  unsigned int v89; // r11
  __int64 v90; // krA8_8
  __int64 v91; // r2
  __int64 v92; // r8
  __int64 v93; // krB0_8
  __int64 v94; // r2
  __int64 v95; // r2
  __int64 v96; // r2
  __int64 v97; // r2
  unsigned int v98; // r5
  _BYTE *v99; // r4
  char v100; // t1
  char v101; // t1
  int v103; // [sp+0h] [bp-26Ch]
  __int64 v104; // [sp+8h] [bp-264h]
  __int64 v105; // [sp+8h] [bp-264h]
  unsigned __int64 v106; // [sp+10h] [bp-25Ch]
  __int64 v107; // [sp+18h] [bp-254h]
  __int64 v108; // [sp+20h] [bp-24Ch]
  __int64 v109; // [sp+20h] [bp-24Ch]
  __int64 v110; // [sp+28h] [bp-244h]
  __int64 v111; // [sp+30h] [bp-23Ch]
  __int64 v112; // [sp+30h] [bp-23Ch]
  __int64 v113; // [sp+38h] [bp-234h]
  __int64 v114; // [sp+38h] [bp-234h]
  __int64 v115; // [sp+40h] [bp-22Ch]
  unsigned __int64 v116; // [sp+40h] [bp-22Ch]
  __int64 v117; // [sp+48h] [bp-224h]
  __int64 v118; // [sp+58h] [bp-214h]
  __int16 v119; // [sp+60h] [bp-20Ch]
  __int64 v120; // [sp+68h] [bp-204h]
  __int64 v121; // [sp+70h] [bp-1FCh]
  __int64 v122; // [sp+80h] [bp-1ECh]
  __int64 v123; // [sp+88h] [bp-1E4h]
  __int64 v124; // [sp+98h] [bp-1D4h]
  __int64 v125; // [sp+B0h] [bp-1BCh]
  __int64 v126; // [sp+B8h] [bp-1B4h]
  __int64 v127; // [sp+128h] [bp-144h]
  _DWORD *v128; // [sp+138h] [bp-134h]
  __int64 v129; // [sp+138h] [bp-134h]
  __int64 v130; // [sp+140h] [bp-12Ch]
  int *v131; // [sp+18Ch] [bp-E0h]
  __int64 v132; // [sp+190h] [bp-DCh]
  unsigned int v133; // [sp+198h] [bp-D4h]
  int v136; // [sp+1A4h] [bp-C8h]
  unsigned __int64 v137; // [sp+1A8h] [bp-C4h]
  __int64 v138; // [sp+1B0h] [bp-BCh]
  unsigned __int64 v139; // [sp+1B8h] [bp-B4h]
  __int64 v140; // [sp+1C0h] [bp-ACh]
  __int64 v141; // [sp+1C8h] [bp-A4h]
  unsigned __int64 v142; // [sp+1D0h] [bp-9Ch]
  __int64 v143; // [sp+1D8h] [bp-94h]
  unsigned int v144; // [sp+1E0h] [bp-8Ch]
  _QWORD *v145; // [sp+1E4h] [bp-88h] BYREF
  unsigned __int64 v146; // [sp+1E8h] [bp-84h] BYREF
  unsigned __int64 v147; // [sp+1F0h] [bp-7Ch]
  __int64 v148; // [sp+1F8h] [bp-74h]
  __int64 v149; // [sp+200h] [bp-6Ch]
  __int64 v150; // [sp+208h] [bp-64h]
  unsigned __int64 v151; // [sp+210h] [bp-5Ch]
  __int64 v152; // [sp+218h] [bp-54h]
  __int64 v153; // [sp+220h] [bp-4Ch] BYREF
  unsigned __int64 v154; // [sp+228h] [bp-44h]
  unsigned __int64 v155; // [sp+230h] [bp-3Ch]
  __int64 v156; // [sp+238h] [bp-34h]
  __int64 v157; // [sp+240h] [bp-2Ch]
  __int64 v158; // [sp+248h] [bp-24h]
  unsigned __int64 v159; // [sp+250h] [bp-1Ch]
  __int64 v160; // [sp+258h] [bp-14h]
  __int64 v161; // [sp+260h] [bp-Ch]

  v145 = qword_1ED638;
  v133 = a2;
  v144 = a2 + 64;
  v131 = (int *)(a2 + 64);
  v136 = a2 & 7;
  if ( (a2 & 7) == 0 )
    goto LABEL_19;
LABEL_2:
  v3 = &v146;
  v4 = v131 - 16;
  do
  {
    v5 = v4[3];
    v6 = v3;
    v7 = *v4;
    v4 += 4;
    v8 = *(v4 - 3);
    v3 += 2;
    v9 = *(v4 - 2);
    *(_DWORD *)v6 = v7;
    *((_DWORD *)v6 + 1) = v8;
    *((_DWORD *)v6 + 2) = v9;
    *((_DWORD *)v6 + 3) = v5;
  }
  while ( v4 != v131 );
  v137 = *(_QWORD *)(a1 + 8);
  v132 = *(_QWORD *)(a1 + 16);
  v142 = *(_QWORD *)a1;
  v10 = *(_QWORD *)(a1 + 24);
  v146 ^= *(_QWORD *)a1;
  v138 = *(_QWORD *)(a1 + 32);
  v140 = v10;
  v154 = v142;
  v139 = *(_QWORD *)(a1 + 40);
  v155 = v137;
  v147 ^= v137;
  v156 = v132;
  v148 ^= v132;
  v141 = *(_QWORD *)(a1 + 48);
  v157 = v10;
  v149 ^= v10;
  v158 = v138;
  v11 = *(_QWORD *)(a1 + 56);
  v150 ^= v138;
  v143 = v11;
  v159 = v139;
  v151 ^= v139;
  v160 = v141;
  v152 ^= v141;
  v161 = v11;
  for ( v153 ^= v11; ; v153 = v143 ^ v97 )
  {
    v103 = (int)(v145 + 2047);
    do
    {
      v115 = qword_1ED638[8 * BYTE1(v159) + 1]
           ^ qword_1ED638[8 * BYTE3(v157) + 3]
           ^ qword_1ED638[8 * BYTE4(v156) + 4]
           ^ qword_1ED638[8 * BYTE6(v154) + 6]
           ^ qword_1ED638[8 * BYTE5(v155) + 5]
           ^ qword_1ED638[8 * (unsigned __int8)v160]
           ^ qword_1ED638[8 * BYTE2(v158) + 2];
      v12 = qword_1ED638[8 * BYTE6(v155) + 6];
      v13 = *(_QWORD *)(v103 + 8);
      v103 += 8;
      v14 = qword_1ED638[8 * (unsigned __int8)v161];
      v108 = qword_1ED638[8 * BYTE5(v156) + 5];
      v15 = qword_1ED638[8 * HIBYTE(v154) + 7];
      LODWORD(v12) = v15 ^ v12;
      HIDWORD(v12) ^= HIDWORD(v15) ^ HIDWORD(v14);
      v16 = qword_1ED638[8 * BYTE4(v157) + 4];
      LODWORD(v16) = v16 ^ v108 ^ v12 ^ v14;
      HIDWORD(v16) ^= HIDWORD(v108) ^ HIDWORD(v12);
      v113 = qword_1ED638[8 * BYTE3(v159) + 3]
           ^ qword_1ED638[8 * BYTE4(v158) + 4]
           ^ qword_1ED638[8 * BYTE5(v157) + 5]
           ^ qword_1ED638[8 * BYTE6(v156) + 6]
           ^ qword_1ED638[8 * HIBYTE(v155) + 7]
           ^ qword_1ED638[8 * (unsigned __int8)v154]
           ^ v13
           ^ qword_1ED638[8 * BYTE2(v160) + 2];
      v111 = qword_1ED638[8 * BYTE1(v158) + 1]
           ^ qword_1ED638[8 * BYTE2(v157) + 2]
           ^ qword_1ED638[8 * (unsigned __int8)v159]
           ^ qword_1ED638[8 * BYTE5(v154) + 5]
           ^ qword_1ED638[8 * BYTE4(v155) + 4]
           ^ qword_1ED638[8 * BYTE3(v156) + 3]
           ^ qword_1ED638[8 * HIBYTE(v160) + 7];
      v104 = v16
           ^ qword_1ED638[8 * BYTE3(v158) + 3]
           ^ qword_1ED638[8 * BYTE2(v159) + 2]
           ^ qword_1ED638[8 * BYTE1(v160) + 1];
      v106 = qword_1ED638[8 * BYTE3(v160) + 3]
           ^ qword_1ED638[8 * BYTE5(v158) + 5]
           ^ qword_1ED638[8 * BYTE1(v154) + 1]
           ^ qword_1ED638[8 * HIBYTE(v156) + 7]
           ^ qword_1ED638[8 * (unsigned __int8)v155]
           ^ qword_1ED638[8 * BYTE6(v157) + 6]
           ^ qword_1ED638[8 * BYTE4(v159) + 4]
           ^ qword_1ED638[8 * BYTE2(v161) + 2];
      v107 = qword_1ED638[8 * BYTE6(v158) + 6]
           ^ qword_1ED638[8 * (unsigned __int8)v156]
           ^ qword_1ED638[8 * BYTE2(v154) + 2]
           ^ qword_1ED638[8 * BYTE1(v155) + 1]
           ^ qword_1ED638[8 * HIBYTE(v157) + 7]
           ^ qword_1ED638[8 * BYTE5(v159) + 5]
           ^ qword_1ED638[8 * BYTE4(v160) + 4]
           ^ qword_1ED638[8 * BYTE3(v161) + 3];
      v109 = qword_1ED638[8 * BYTE5(v160) + 5]
           ^ qword_1ED638[8 * HIBYTE(v158) + 7]
           ^ qword_1ED638[8 * BYTE1(v156) + 1]
           ^ qword_1ED638[8 * BYTE3(v154) + 3]
           ^ qword_1ED638[8 * BYTE2(v155) + 2]
           ^ qword_1ED638[8 * (unsigned __int8)v157]
           ^ qword_1ED638[8 * BYTE6(v159) + 6]
           ^ qword_1ED638[8 * BYTE4(v161) + 4];
      v17 = qword_1ED638[8 * BYTE1(v161) + 1];
      v110 = qword_1ED638[8 * BYTE1(v157) + 1]
           ^ qword_1ED638[8 * BYTE2(v156) + 2]
           ^ qword_1ED638[8 * (unsigned __int8)v158]
           ^ qword_1ED638[8 * BYTE3(v155) + 3]
           ^ qword_1ED638[8 * BYTE4(v154) + 4]
           ^ qword_1ED638[8 * HIBYTE(v159) + 7]
           ^ qword_1ED638[8 * BYTE6(v160) + 6]
           ^ qword_1ED638[8 * BYTE5(v161) + 5];
      v18 = qword_1ED638[8 * BYTE6(v161) + 6];
      HIDWORD(v14) = HIDWORD(v113) ^ HIDWORD(v17);
      v19 = qword_1ED638[8 * HIBYTE(v161) + 7];
      HIDWORD(v17) = v111 ^ v18;
      LODWORD(v114) = v113 ^ v17;
      HIDWORD(v114) = HIDWORD(v14);
      LODWORD(v13) = HIDWORD(v111) ^ HIDWORD(v18);
      v154 = __PAIR64__(HIDWORD(v14), v114);
      v20 = v115;
      v116 = __PAIR64__(v13, HIDWORD(v17));
      v155 = v106;
      v117 = v20 ^ v19;
      v156 = v107;
      v157 = v109;
      v158 = v110;
      v159 = __PAIR64__(v13, HIDWORD(v17));
      v160 = v20 ^ v19;
      v161 = v104;
      v112 = v104
           ^ qword_1ED638[8 * BYTE5(v148) + 5]
           ^ qword_1ED638[8 * (unsigned __int8)v153]
           ^ qword_1ED638[8 * HIBYTE(v146) + 7]
           ^ qword_1ED638[8 * BYTE6(v147) + 6]
           ^ qword_1ED638[8 * BYTE4(v149) + 4]
           ^ qword_1ED638[8 * BYTE3(v150) + 3]
           ^ qword_1ED638[8 * BYTE2(v151) + 2]
           ^ qword_1ED638[8 * BYTE1(v152) + 1];
      v21 = qword_1ED638[8 * HIBYTE(v147) + 7];
      v22 = qword_1ED638[8 * BYTE6(v148) + 6];
      HIDWORD(v19) = v21 ^ v22;
      LODWORD(v14) = HIDWORD(v21) ^ HIDWORD(v22);
      v23 = qword_1ED638[8 * (unsigned __int8)v146];
      v128 = &qword_1ED638[8 * BYTE2(v153) + 2];
      v105 = qword_1ED638[8 * BYTE5(v149) + 5];
      v127 = qword_1ED638[8 * BYTE1(v153) + 1];
      HIDWORD(v23) ^= HIDWORD(v105) ^ v14;
      LODWORD(v23) = v105 ^ HIDWORD(v19) ^ v23;
      LODWORD(v14) = v128[1];
      LODWORD(v129) = *v128;
      HIDWORD(v129) = v14;
      v130 = qword_1ED638[8 * BYTE3(v153) + 3];
      v120 = qword_1ED638[8 * BYTE2(v152) + 2]
           ^ qword_1ED638[8 * BYTE3(v151) + 3]
           ^ qword_1ED638[8 * BYTE4(v150) + 4]
           ^ v23;
      v121 = qword_1ED638[8 * BYTE3(v152) + 3]
           ^ qword_1ED638[8 * BYTE4(v151) + 4]
           ^ qword_1ED638[8 * BYTE5(v150) + 5]
           ^ qword_1ED638[8 * BYTE6(v149) + 6]
           ^ qword_1ED638[8 * (unsigned __int8)v147]
           ^ qword_1ED638[8 * HIBYTE(v148) + 7]
           ^ qword_1ED638[8 * BYTE1(v146) + 1];
      v125 = qword_1ED638[8 * BYTE5(v152) + 5];
      v119 = HIBYTE(v153);
      v24 = qword_1ED638[8 * BYTE4(v153) + 4];
      v25 = qword_1ED638[8 * HIBYTE(v150) + 7]
          ^ qword_1ED638[8 * BYTE1(v148) + 1]
          ^ qword_1ED638[8 * (unsigned __int8)v149]
          ^ qword_1ED638[8 * BYTE3(v146) + 3]
          ^ qword_1ED638[8 * BYTE2(v147) + 2]
          ^ qword_1ED638[8 * BYTE6(v151) + 6];
      v124 = qword_1ED638[8 * BYTE5(v153) + 5];
      v118 = qword_1ED638[8 * BYTE4(v152) + 4]
           ^ qword_1ED638[8 * BYTE5(v151) + 5]
           ^ qword_1ED638[8 * HIBYTE(v149) + 7]
           ^ qword_1ED638[8 * BYTE1(v147) + 1]
           ^ qword_1ED638[8 * BYTE2(v146) + 2]
           ^ qword_1ED638[8 * (unsigned __int8)v148]
           ^ qword_1ED638[8 * BYTE6(v150) + 6];
      v126 = qword_1ED638[8 * BYTE6(v153) + 6];
      v26 = qword_1ED638[8 * BYTE6(v146) + 6];
      v123 = qword_1ED638[8 * HIBYTE(v152) + 7]
           ^ qword_1ED638[8 * BYTE2(v149) + 2]
           ^ qword_1ED638[8 * BYTE4(v147) + 4]
           ^ qword_1ED638[8 * BYTE5(v146) + 5]
           ^ qword_1ED638[8 * (unsigned __int8)v151]
           ^ qword_1ED638[8 * BYTE3(v148) + 3]
           ^ qword_1ED638[8 * BYTE1(v150) + 1];
      v122 = qword_1ED638[8 * BYTE6(v152) + 6]
           ^ qword_1ED638[8 * HIBYTE(v151) + 7]
           ^ qword_1ED638[8 * BYTE1(v149) + 1]
           ^ qword_1ED638[8 * BYTE2(v148) + 2]
           ^ qword_1ED638[8 * (unsigned __int8)v150]
           ^ qword_1ED638[8 * BYTE3(v147) + 3]
           ^ qword_1ED638[8 * BYTE4(v146) + 4];
      v153 = v112;
      v27 = v117
          ^ qword_1ED638[8 * v119 + 7]
          ^ qword_1ED638[8 * BYTE5(v147) + 5]
          ^ v26
          ^ qword_1ED638[8 * (unsigned __int8)v152]
          ^ qword_1ED638[8 * BYTE4(v148) + 4]
          ^ qword_1ED638[8 * BYTE3(v149) + 3]
          ^ qword_1ED638[8 * BYTE2(v150) + 2]
          ^ qword_1ED638[8 * BYTE1(v151) + 1];
      v146 = v114 ^ v127 ^ v120;
      v147 = v106 ^ v129 ^ v121;
      v148 = v107 ^ v130 ^ v118;
      v149 = v109 ^ v24 ^ v125 ^ v25;
      v150 = v110 ^ v124 ^ v122;
      v151 = v116 ^ v126 ^ v123;
      v152 = v27;
    }
    while ( &unk_1F1680 != (_UNKNOWN *)v103 );
    if ( v136 )
    {
      v28 = v133 >= a1 + 4;
      if ( v133 < a1 + 4 )
        v28 = a1 >= v133 + 4;
      v29 = v28;
      v30 = v29 & 1;
      if ( (v133 & 3) != 0 )
        v30 = 0;
      if ( v30 )
      {
        v31 = HIDWORD(v146);
        v32 = *(_DWORD *)(a1 + 4);
        v33 = v147;
        *(_DWORD *)a1 ^= *(v131 - 16) ^ v146;
        v34 = v31 ^ v32;
        v35 = *(_DWORD *)(a1 + 8);
        v36 = *(v131 - 15) ^ v34;
        v37 = HIDWORD(v147);
        *(_DWORD *)(a1 + 4) = v36;
        v38 = v33 ^ v35;
        v39 = *(_DWORD *)(a1 + 12);
        v40 = *(v131 - 14) ^ v38;
        v41 = v148;
        *(_DWORD *)(a1 + 8) = v40;
        v42 = v37 ^ v39;
        v43 = *(_DWORD *)(a1 + 16);
        v44 = *(v131 - 13) ^ v42;
        v45 = HIDWORD(v148);
        *(_DWORD *)(a1 + 12) = v44;
        v46 = v41 ^ v43;
        v47 = *(_DWORD *)(a1 + 20);
        v48 = *(v131 - 12) ^ v46;
        v49 = v149;
        *(_DWORD *)(a1 + 16) = v48;
        v50 = v45 ^ v47;
        v51 = *(_DWORD *)(a1 + 24);
        v52 = *(v131 - 11) ^ v50;
        v53 = HIDWORD(v149);
        *(_DWORD *)(a1 + 20) = v52;
        v54 = v49 ^ v51;
        v55 = *(_DWORD *)(a1 + 28);
        *(_DWORD *)(a1 + 24) = *(v131 - 10) ^ v54;
        *(_DWORD *)(a1 + 28) = *(v131 - 9) ^ v53 ^ v55;
        v56 = HIDWORD(v150);
        v57 = *(_DWORD *)(a1 + 36);
        v58 = v151;
        *(_DWORD *)(a1 + 32) ^= *(v131 - 8) ^ v150;
        v59 = v56 ^ v57;
        v60 = *(_DWORD *)(a1 + 40);
        v61 = *(v131 - 7) ^ v59;
        v62 = HIDWORD(v151);
        *(_DWORD *)(a1 + 36) = v61;
        v63 = v58 ^ v60;
        v64 = *(_DWORD *)(a1 + 44);
        v65 = *(v131 - 6) ^ v63;
        v66 = v152;
        *(_DWORD *)(a1 + 40) = v65;
        v67 = v62 ^ v64;
        v68 = *(_DWORD *)(a1 + 48);
        v69 = *(v131 - 5) ^ v67;
        v70 = HIDWORD(v152);
        *(_DWORD *)(a1 + 44) = v69;
        v71 = v66 ^ v68;
        v72 = *(_DWORD *)(a1 + 52);
        v73 = *(v131 - 4) ^ v71;
        v74 = v153;
        *(_DWORD *)(a1 + 48) = v73;
        v75 = v70 ^ v72;
        v76 = *(_DWORD *)(a1 + 56);
        v77 = *(v131 - 3) ^ v75;
        HIDWORD(v78) = HIDWORD(v153);
        *(_DWORD *)(a1 + 52) = v77;
        LODWORD(v78) = v74 ^ v76;
        v79 = *(_DWORD *)(a1 + 60);
        *(_DWORD *)(a1 + 56) = *(v131 - 2) ^ v78;
        *(_DWORD *)(a1 + 60) = *(v131 - 1) ^ HIDWORD(v78) ^ v79;
        v80 = v131;
        goto LABEL_17;
      }
      v98 = v133 - 1;
      v99 = (_BYTE *)a1;
      LODWORD(v78) = (char *)&v145 + 3;
      do
      {
        v100 = *(_BYTE *)++v98;
        BYTE4(v78) = v100;
        v101 = *(_BYTE *)(v78 + 1);
        LODWORD(v78) = v78 + 1;
        *v99++ ^= v101 ^ BYTE4(v78);
      }
      while ( (__int64 *)((char *)&v153 + 7) != (__int64 *)v78 );
    }
    else
    {
      *(_QWORD *)a1 = v114 ^ v127 ^ v120 ^ v142 ^ *((_QWORD *)v131 - 8);
      *(_QWORD *)(a1 + 8) = v106 ^ v129 ^ v121 ^ v137 ^ *((_QWORD *)v131 - 7);
      *(_QWORD *)(a1 + 16) = v132 ^ *((_QWORD *)v131 - 6) ^ v107 ^ v130 ^ v118;
      *(_QWORD *)(a1 + 24) = v109 ^ v24 ^ v125 ^ v25 ^ v140 ^ *((_QWORD *)v131 - 5);
      *(_QWORD *)(a1 + 32) = v110 ^ v124 ^ v122 ^ v138 ^ *((_QWORD *)v131 - 4);
      *(_QWORD *)(a1 + 40) = v116 ^ v126 ^ v123 ^ v139 ^ *((_QWORD *)v131 - 3);
      *(_QWORD *)(a1 + 48) = v27 ^ v141 ^ *((_QWORD *)v131 - 2);
      v78 = v112 ^ v143 ^ *((_QWORD *)v131 - 1);
      *(_QWORD *)(a1 + 56) = v78;
    }
    v80 = v131;
LABEL_17:
    v131 = v80 + 16;
    v81 = a3-- == 1;
    v133 = v144;
    if ( v81 )
      break;
    v144 += 64;
    v136 = v133 & 7;
    if ( (v133 & 7) != 0 )
      goto LABEL_2;
LABEL_19:
    v82 = (_QWORD *)a1;
    v83 = v131;
    v84 = *(_QWORD *)a1;
    v85 = *(_QWORD *)(a1 + 8);
    v86 = v131;
    __pld(v131);
    v87 = v84;
    v88 = *((_QWORD *)v86 - 8);
    v89 = v85;
    v142 = v87;
    v90 = v82[2];
    LODWORD(v85) = v133;
    __pld((void *)(v133 + 72));
    v146 = v87 ^ v88;
    v91 = *((_QWORD *)v83 - 7);
    v132 = v90;
    __pld((void *)(v85 + 80));
    v137 = __PAIR64__(HIDWORD(v85), v89);
    v92 = v82[4];
    v140 = v82[3];
    v147 = __PAIR64__(HIDWORD(v85), v89) ^ v91;
    __pld((void *)(v85 + 88));
    v138 = v92;
    v93 = v82[6];
    v139 = v82[5];
    v148 = v132 ^ *((_QWORD *)v83 - 6);
    v141 = v93;
    v94 = *((_QWORD *)v83 - 5);
    v154 = v142;
    v155 = v137;
    v149 = v140 ^ v94;
    v95 = *((_QWORD *)v83 - 4);
    v156 = v132;
    v157 = v140;
    v158 = v92;
    v150 = v92 ^ v95;
    v96 = *((_QWORD *)v83 - 3);
    v159 = v139;
    v160 = v93;
    v151 = v139 ^ v96;
    v152 = v93 ^ *((_QWORD *)v83 - 2);
    v143 = v82[7];
    v97 = *((_QWORD *)v83 - 1);
    v161 = v143;
  }
  return v78;
}
