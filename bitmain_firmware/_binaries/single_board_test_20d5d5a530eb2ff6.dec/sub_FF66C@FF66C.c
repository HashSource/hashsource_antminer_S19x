_DWORD *__fastcall sub_FF66C(_DWORD *result, int a2, int a3)
{
  unsigned int v3; // r1
  unsigned int v4; // r4
  int v5; // lr
  int v6; // r11
  unsigned int v7; // r0
  int v8; // r9
  int v9; // r3
  int v10; // r10
  int v11; // r7
  int v12; // r3
  int v13; // r5
  int v14; // lr
  int v15; // r6
  int v16; // r2
  int v17; // r12
  int v18; // r9
  int v19; // r4
  int v20; // r2
  int v21; // r10
  int v22; // lr
  unsigned int v23; // r2
  int v24; // r7
  int v25; // r3
  int v26; // lr
  int v27; // r10
  int v28; // r6
  int v29; // r0
  int v30; // r9
  int v31; // r7
  int v32; // lr
  int v33; // r12
  int v34; // r11
  int v35; // r6
  int v36; // r9
  int v37; // r7
  int v38; // r8
  unsigned int v39; // r0
  int v40; // r3
  int v41; // r9
  int v42; // r8
  int v43; // r12
  int v44; // r4
  int v45; // r10
  int v46; // r0
  int v47; // r7
  int v48; // r6
  int v49; // r11
  int v50; // r11
  unsigned int v51; // r9
  int v52; // r0
  unsigned int v53; // r1
  int v54; // r10
  int v55; // r8
  int v56; // r5
  char v57; // r4
  unsigned int v58; // r1
  unsigned int v59; // r6
  int v60; // r9
  int v61; // r10
  unsigned int v62; // r0
  int v63; // r11
  _DWORD *v64; // r3
  int v65; // r7
  unsigned int v66; // r3
  _BYTE *v67; // r1
  unsigned int v68; // r3
  _BYTE *v69; // r4
  unsigned int v70; // r2
  unsigned int v71; // r3
  int v72; // r8
  _BYTE *v73; // r6
  int v74; // r5
  unsigned int v75; // r12
  unsigned int v76; // r1
  int v77; // r2
  int v78; // r4
  int v79; // r0
  int v80; // r9
  _BYTE *v81; // r11
  unsigned int v82; // r1
  int v83; // lr
  int v84; // r1
  _BYTE *v85; // r8
  int v86; // r2
  unsigned int v87; // r5
  int v88; // r7
  int v89; // r1
  int v90; // r6
  int v91; // r3
  int v92; // r6
  int v93; // r5
  unsigned int v94; // r7
  int v95; // r8
  int v96; // r6
  int v97; // r5
  int v98; // r1
  unsigned int v99; // r7
  int v100; // r1
  int v101; // r4
  int v102; // r1
  int v103; // r3
  int v104; // [sp+4h] [bp-D0h]
  int v105; // [sp+4h] [bp-D0h]
  int v106; // [sp+4h] [bp-D0h]
  int v107; // [sp+4h] [bp-D0h]
  int v108; // [sp+4h] [bp-D0h]
  int v109; // [sp+8h] [bp-CCh]
  int v110; // [sp+8h] [bp-CCh]
  _DWORD *v111; // [sp+8h] [bp-CCh]
  int v112; // [sp+Ch] [bp-C8h]
  int v113; // [sp+Ch] [bp-C8h]
  int v114; // [sp+Ch] [bp-C8h]
  unsigned int v115; // [sp+Ch] [bp-C8h]
  int v116; // [sp+10h] [bp-C4h]
  int v117; // [sp+10h] [bp-C4h]
  int v118; // [sp+10h] [bp-C4h]
  int v119; // [sp+10h] [bp-C4h]
  int v120; // [sp+14h] [bp-C0h]
  int v121; // [sp+14h] [bp-C0h]
  int v122; // [sp+14h] [bp-C0h]
  int v123; // [sp+14h] [bp-C0h]
  int v124; // [sp+14h] [bp-C0h]
  int v125; // [sp+14h] [bp-C0h]
  int v126; // [sp+18h] [bp-BCh]
  unsigned int v127; // [sp+18h] [bp-BCh]
  _BYTE *v128; // [sp+18h] [bp-BCh]
  int v129; // [sp+1Ch] [bp-B8h]
  int v130; // [sp+1Ch] [bp-B8h]
  int v131; // [sp+1Ch] [bp-B8h]
  int v132; // [sp+20h] [bp-B4h]
  int v133; // [sp+20h] [bp-B4h]
  int v134; // [sp+24h] [bp-B0h]
  int v135; // [sp+28h] [bp-ACh]
  _BYTE *v136; // [sp+28h] [bp-ACh]
  unsigned int v137; // [sp+2Ch] [bp-A8h]
  _BYTE *v138; // [sp+2Ch] [bp-A8h]
  _BYTE *v139; // [sp+2Ch] [bp-A8h]
  unsigned int v140; // [sp+30h] [bp-A4h]
  _BYTE *v141; // [sp+30h] [bp-A4h]
  int v142; // [sp+34h] [bp-A0h]
  char v143; // [sp+34h] [bp-A0h]
  int v144; // [sp+38h] [bp-9Ch]
  char v145; // [sp+3Ch] [bp-98h]
  int v146; // [sp+3Ch] [bp-98h]
  int v147; // [sp+40h] [bp-94h]
  int v148; // [sp+44h] [bp-90h]
  int v149; // [sp+48h] [bp-8Ch]
  int v150; // [sp+4Ch] [bp-88h]
  int v151; // [sp+50h] [bp-84h]
  int v152; // [sp+54h] [bp-80h]
  int v153; // [sp+58h] [bp-7Ch]
  int v154; // [sp+5Ch] [bp-78h]
  int v155; // [sp+60h] [bp-74h]
  int v156; // [sp+64h] [bp-70h]
  _DWORD *v157; // [sp+78h] [bp-5Ch]
  _DWORD v158[2]; // [sp+90h] [bp-44h]
  unsigned int v159; // [sp+98h] [bp-3Ch]
  unsigned int v160; // [sp+9Ch] [bp-38h]
  int v161; // [sp+A0h] [bp-34h]
  int v162; // [sp+A4h] [bp-30h]
  int v163; // [sp+A8h] [bp-2Ch]
  int v164; // [sp+ACh] [bp-28h]
  int v165; // [sp+B0h] [bp-24h]
  int v166; // [sp+B4h] [bp-20h]
  unsigned int v167; // [sp+B8h] [bp-1Ch]
  int v168; // [sp+BCh] [bp-18h]
  unsigned int v169; // [sp+C0h] [bp-14h]
  int v170; // [sp+C4h] [bp-10h]
  unsigned int v171; // [sp+C8h] [bp-Ch]
  unsigned int v172; // [sp+CCh] [bp-8h]
  _BYTE v173[4]; // [sp+D0h] [bp-4h] BYREF

  v157 = result;
  v155 = a3 - 1;
  if ( a3 )
  {
    v134 = a2 + 64;
    v148 = *result;
    v153 = result[1];
    v150 = result[2];
    v156 = result[3];
    v149 = result[4];
    v151 = result[5];
    v152 = result[6];
    v154 = result[7];
    do
    {
      v3 = _byteswap_ulong(*(_DWORD *)(v134 - 64));
      v4 = v154
         + 1116352408
         + (__ROR4__(v149, 11) ^ __ROR4__(v149, 6) ^ __ROR4__(v149, 25))
         + (v152 & ~v149 ^ v149 & v151)
         + v3;
      v140 = v3;
      v137 = _byteswap_ulong(*(_DWORD *)(v134 - 60));
      v159 = _byteswap_ulong(*(_DWORD *)(v134 - 56));
      v5 = v152
         + 1899447441
         + v137
         + (__ROR4__(v4 + v156, 11) ^ __ROR4__(v4 + v156, 6) ^ __ROR4__(v4 + v156, 25))
         + (v151 & ~(v4 + v156) ^ (v4 + v156) & v149);
      v6 = v5 + v150;
      v7 = (v150 & v153 ^ v150 & v148 ^ v148 & v153)
         + (__ROR4__(v148, 13) ^ __ROR4__(v148, 2) ^ __ROR4__(v148, 22))
         + v4;
      v8 = v151
         - 1245643825
         + v159
         + (__ROR4__(v5 + v150, 11) ^ __ROR4__(v5 + v150, 6) ^ __ROR4__(v5 + v150, 25))
         + ((v4 + v156) & (v5 + v150) ^ v149 & ~(v5 + v150));
      v9 = *(unsigned __int8 *)(v134 - 47);
      v160 = _byteswap_ulong(*(_DWORD *)(v134 - 52));
      v116 = v8 + v153;
      v109 = ((v153 ^ v148) & v7 ^ v148 & v153) + (__ROR4__(v7, 13) ^ __ROR4__(v7, 2) ^ __ROR4__(v7, 22)) + v5;
      v10 = ((v4 + v156) & ~(v8 + v153) ^ (v5 + v150) & (v8 + v153))
          + v149
          - 373957723
          + v160
          + (__ROR4__(v8 + v153, 11) ^ __ROR4__(v8 + v153, 6) ^ __ROR4__(v8 + v153, 25));
      v11 = *(unsigned __int8 *)(v134 - 45)
          | (v9 << 16)
          | (*(unsigned __int8 *)(v134 - 48) << 24)
          | (*(unsigned __int8 *)(v134 - 46) << 8);
      v120 = v10 + v148;
      v12 = (*(unsigned __int8 *)(v134 - 43) << 16) | (*(unsigned __int8 *)(v134 - 44) << 24);
      v13 = ((v7 ^ v148) & v109 ^ v7 & v148) + (__ROR4__(v109, 13) ^ __ROR4__(v109, 2) ^ __ROR4__(v109, 22)) + v8;
      v14 = v4
          + v156
          + v11
          + 961987163
          + (__ROR4__(v10 + v148, 11) ^ __ROR4__(v10 + v148, 6) ^ __ROR4__(v10 + v148, 25))
          + ((v5 + v150) & ~(v10 + v148) ^ (v8 + v153) & (v10 + v148));
      v15 = v134;
      __pld((void *)(v134 + 1));
      __pld((void *)(v15 + 2));
      v16 = v109;
      __pld((void *)(v15 + 3));
      __pld((void *)v15);
      v104 = v14;
      v158[0] = v3;
      v17 = *(unsigned __int8 *)(v15 - 41);
      v18 = *(unsigned __int8 *)(v15 - 42);
      v158[1] = v137;
      v19 = (__ROR4__(v13, 13) ^ __ROR4__(v13, 2) ^ __ROR4__(v13, 22)) + ((v7 ^ v16) & v13 ^ v7 & v16) + v10;
      v20 = v14;
      v21 = *(unsigned __int8 *)(v15 - 40);
      v22 = *(unsigned __int8 *)(v15 - 39);
      v23 = v7 + v20;
      v161 = v11;
      v162 = v12 | v17 | (v18 << 8);
      v24 = v162
          + 1508970993
          + v6
          + (__ROR4__(v23, 11) ^ __ROR4__(v23, 6) ^ __ROR4__(v23, 25))
          + (v116 & ~v23 ^ v120 & v23);
      v105 = ((v109 ^ v13) & v19 ^ v109 & v13) + (__ROR4__(v19, 13) ^ __ROR4__(v19, 2) ^ __ROR4__(v19, 22)) + v104;
      v25 = (v22 << 16) | (v21 << 24) | *(unsigned __int8 *)(v134 - 37) | (*(unsigned __int8 *)(v134 - 38) << 8);
      v26 = *(unsigned __int8 *)(v134 - 35);
      v163 = v25;
      v112 = v109 + v24;
      v27 = *(unsigned __int8 *)(v134 - 32);
      v28 = v116
          + v25
          - 1841331548
          + (__ROR4__(v109 + v24, 11) ^ __ROR4__(v109 + v24, 6) ^ __ROR4__(v109 + v24, 25))
          + (v120 & ~(v109 + v24) ^ v23 & (v109 + v24));
      v29 = v24 + ((v13 ^ v19) & v105 ^ v13 & v19) + (__ROR4__(v105, 13) ^ __ROR4__(v105, 2) ^ __ROR4__(v105, 22));
      v164 = (v26 << 16)
           | (*(unsigned __int8 *)(v134 - 36) << 24)
           | *(unsigned __int8 *)(v134 - 33)
           | (*(unsigned __int8 *)(v134 - 34) << 8);
      v129 = v13 + v28;
      v30 = *(unsigned __int8 *)(v134 - 28);
      v31 = (v23 & ~(v13 + v28) ^ (v13 + v28) & (v109 + v24))
          + v164
          - 1424204075
          + v120
          + (__ROR4__(v13 + v28, 11) ^ __ROR4__(v13 + v28, 6) ^ __ROR4__(v13 + v28, 25));
      v32 = *(unsigned __int8 *)(v134 - 27);
      v117 = v19 + v31;
      v165 = (*(unsigned __int8 *)(v134 - 31) << 16)
           | (v27 << 24)
           | *(unsigned __int8 *)(v134 - 29)
           | (*(unsigned __int8 *)(v134 - 30) << 8);
      v121 = v28 + (__ROR4__(v29, 13) ^ __ROR4__(v29, 2) ^ __ROR4__(v29, 22)) + ((v19 ^ v105) & v29 ^ v105 & v19);
      v110 = v31 + (__ROR4__(v121, 13) ^ __ROR4__(v121, 2) ^ __ROR4__(v121, 22)) + ((v105 ^ v29) & v121 ^ v105 & v29);
      v33 = (v112 & ~v117 ^ (v13 + v28) & v117)
          + v165
          - 670586216
          + v23
          + (__ROR4__(v19 + v31, 11) ^ __ROR4__(v19 + v31, 6) ^ __ROR4__(v19 + v31, 25));
      v34 = v105 + v33;
      v142 = (v32 << 16) | (v30 << 24) | *(unsigned __int8 *)(v134 - 25) | (*(unsigned __int8 *)(v134 - 26) << 8);
      v106 = v112
           + v142
           + 310598401
           + (__ROR4__(v105 + v33, 11) ^ __ROR4__(v105 + v33, 6) ^ __ROR4__(v105 + v33, 25))
           + ((v13 + v28) & ~(v105 + v33) ^ (v19 + v31) & (v105 + v33));
      v35 = v29 + v106;
      v113 = ((v121 ^ v29) & v110 ^ v29 & v121) + (__ROR4__(v110, 13) ^ __ROR4__(v110, 2) ^ __ROR4__(v110, 22)) + v33;
      v36 = (v121 ^ v110) & v113;
      v37 = v121;
      v38 = __ROR4__(v29 + v106, 11) ^ __ROR4__(v35, 6) ^ __ROR4__(v35, 25);
      v122 = v29 + v106;
      v39 = _byteswap_ulong(*(_DWORD *)(v134 - 24));
      v40 = (v36 ^ v37 & v110) + (__ROR4__(v113, 13) ^ __ROR4__(v113, 2) ^ __ROR4__(v113, 22)) + v106;
      v41 = (v117 & ~v35 ^ v34 & v35) + v39 + 607225278 + v129 + v38;
      v42 = *(unsigned __int8 *)(v134 - 18);
      v43 = v37 + v41;
      v44 = (*(unsigned __int8 *)(v134 - 19) << 16)
          | (*(unsigned __int8 *)(v134 - 20) << 24)
          | *(unsigned __int8 *)(v134 - 17);
      v167 = v39;
      v166 = v142;
      v168 = v44 | (v42 << 8);
      v107 = ((v113 ^ v110) & v40 ^ v110 & v113) + (__ROR4__(v40, 13) ^ __ROR4__(v40, 2) ^ __ROR4__(v40, 22)) + v41;
      v45 = (v34 & ~v43 ^ v122 & v43)
          + v168
          + 1426881987
          + v117
          + (__ROR4__(v37 + v41, 11) ^ __ROR4__(v37 + v41, 6) ^ __ROR4__(v37 + v41, 25));
      v46 = *(unsigned __int8 *)(v134 - 11);
      v126 = v110 + v45;
      v169 = _byteswap_ulong(*(_DWORD *)(v134 - 16));
      v47 = ((v113 ^ v40) & v107 ^ v113 & v40) + (__ROR4__(v107, 13) ^ __ROR4__(v107, 2) ^ __ROR4__(v107, 22)) + v45;
      v48 = (v122 & ~v126 ^ v43 & v126)
          + (__ROR4__(v110 + v45, 11) ^ __ROR4__(v110 + v45, 6) ^ __ROR4__(v110 + v45, 25))
          + v169
          + 1925078388
          + v34;
      v170 = (v46 << 16)
           | (*(unsigned __int8 *)(v134 - 12) << 24)
           | *(unsigned __int8 *)(v134 - 9)
           | (*(unsigned __int8 *)(v134 - 10) << 8);
      v49 = __ROR4__(v113 + v48, 11) ^ __ROR4__(v113 + v48, 6);
      v114 = v113 + v48;
      v135 = v48 + (__ROR4__(v47, 13) ^ __ROR4__(v47, 2) ^ __ROR4__(v47, 22)) + ((v40 ^ v107) & v47 ^ v107 & v40);
      v50 = (v43 & ~v114 ^ (v110 + v45) & v114) + v170 - 2132889090 + v122 + (v49 ^ __ROR4__(v114, 25));
      v51 = _byteswap_ulong(*(_DWORD *)(v134 - 8));
      v123 = v50 + ((v107 ^ v47) & v135 ^ v107 & v47) + (__ROR4__(v135, 13) ^ __ROR4__(v135, 2) ^ __ROR4__(v135, 22));
      v130 = v40 + v50;
      v52 = (v114 & v130 ^ (v110 + v45) & ~v130)
          + v43
          + v51
          - 1680079193
          + (__ROR4__(v40 + v50, 11) ^ __ROR4__(v40 + v50, 6) ^ __ROR4__(v40 + v50, 25));
      v53 = _byteswap_ulong(*(_DWORD *)(v134 - 4));
      v132 = v107 + v52;
      v118 = v52 + ((v47 ^ v135) & v123 ^ v47 & v135) + (__ROR4__(v123, 13) ^ __ROR4__(v123, 2) ^ __ROR4__(v123, 22));
      v111 = &unk_1C4ED0;
      v171 = v51;
      v172 = v53;
      v54 = (v114 & ~v132 ^ (v40 + v50) & v132)
          + v53
          - 1046744716
          + v126
          + (__ROR4__(v132, 11) ^ __ROR4__(v132, 6) ^ __ROR4__(v132, 25));
      v55 = v47 + v54;
      v56 = v142;
      v57 = 17;
      v58 = v137;
      v59 = v51;
      v108 = 16;
      v144 = 0;
      v143 = 29;
      v60 = v123;
      v61 = v54 + ((v135 ^ v123) & v118 ^ v135 & v123) + (__ROR4__(v118, 13) ^ __ROR4__(v118, 2) ^ __ROR4__(v118, 22));
      v62 = v140;
      v63 = v135;
      v145 = 30;
      v124 = v55;
      while ( 1 )
      {
        v64 = v111;
        v136 = &v173[4 * v144];
        __pld(v111 + 31);
        v65 = v64[16];
        v66 = (__ROR4__(v59, 19) ^ __ROR4__(v59, 17) ^ (v59 >> 10))
            + (__ROR4__(v58, 18) ^ __ROR4__(v58, 7) ^ (v58 >> 3))
            + v62;
        v67 = &v173[4 * (((_BYTE)v108 + 2) & 0xF)];
        v68 = v66 + v56;
        *((_DWORD *)v136 - 16) = v68;
        v69 = &v173[4 * (v57 & 0xF)];
        v70 = v158[((_BYTE)v108 + 15) & 0xF];
        v71 = v68
            + v65
            + (v130 & ~v124 ^ v124 & v132)
            + (__ROR4__(v124, 11) ^ __ROR4__(v124, 6) ^ __ROR4__(v124, 25))
            + v114;
        v72 = *((_DWORD *)v69 - 16)
            + v158[((_BYTE)v108 + 10) & 0xF]
            + (__ROR4__(*((_DWORD *)v67 - 16), 18) ^ __ROR4__(*((_DWORD *)v67 - 16), 7) ^ (*((_DWORD *)v67 - 16) >> 3))
            + (__ROR4__(v70, 19) ^ __ROR4__(v70, 17) ^ (v70 >> 10));
        *((_DWORD *)v69 - 16) = v72;
        v73 = &v173[4 * (((_BYTE)v108 + 3) & 0xF)];
        v127 = v71 + v63;
        v115 = (__ROR4__(v61, 13) ^ __ROR4__(v61, 2) ^ __ROR4__(v61, 22)) + (v61 & v60 ^ v61 & v118 ^ v118 & v60) + v71;
        v74 = (__ROR4__(*((_DWORD *)v136 - 16), 19)
             ^ __ROR4__(*((_DWORD *)v136 - 16), 17)
             ^ (*((_DWORD *)v136 - 16) >> 10))
            + *((_DWORD *)v67 - 16)
            + v158[((_BYTE)v108 + 11) & 0xF]
            + (__ROR4__(*((_DWORD *)v73 - 16), 18) ^ __ROR4__(*((_DWORD *)v73 - 16), 7) ^ (*((_DWORD *)v73 - 16) >> 3));
        *((_DWORD *)v67 - 16) = v74;
        v75 = v158[((_BYTE)v108 + 4) & 0xF];
        v138 = &v173[4 * (((_BYTE)v108 + 4) & 0xF)];
        v76 = v158[((_BYTE)v108 + 17) & 0xF];
        v77 = v111[17]
            + v130
            + v72
            + (__ROR4__(v127, 11) ^ __ROR4__(v127, 6) ^ __ROR4__(v127, 25))
            + (v132 & ~v127 ^ v124 & v127);
        v131 = v77 + (__ROR4__(v115, 13) ^ __ROR4__(v115, 2) ^ __ROR4__(v115, 22)) + ((v61 ^ v118) & v115 ^ v61 & v118);
        v78 = v77 + v60;
        v79 = v111[18];
        v80 = v158[((_BYTE)v108 + 12) & 0xF]
            + *((_DWORD *)v73 - 16)
            + (__ROR4__(v75, 18) ^ __ROR4__(v75, 7) ^ (v75 >> 3))
            + (__ROR4__(v76, 19) ^ __ROR4__(v76, 17) ^ (v76 >> 10));
        v81 = &v173[4 * (((_BYTE)v108 + 5) & 0xF)];
        *((_DWORD *)v73 - 16) = v80;
        v82 = v158[((_BYTE)v108 + 18) & 0xF];
        v83 = (__ROR4__(v78, 11) ^ __ROR4__(v78, 6) ^ __ROR4__(v78, 25)) + v132 + v79 + v74 + (v124 & ~v78 ^ v127 & v78);
        v119 = v83 + v118;
        v133 = *((_DWORD *)v138 - 16)
             + v158[v143 & 0xF]
             + (__ROR4__(*((_DWORD *)v81 - 16), 18) ^ __ROR4__(*((_DWORD *)v81 - 16), 7) ^ (*((_DWORD *)v81 - 16) >> 3))
             + (__ROR4__(v82, 19) ^ __ROR4__(v82, 17) ^ (v82 >> 10));
        v84 = v111[19];
        v85 = &v173[4 * (((_BYTE)v108 + 6) & 0xF)];
        v86 = v83 + ((v115 ^ v61) & v131 ^ v115 & v61) + (__ROR4__(v131, 13) ^ __ROR4__(v131, 2) ^ __ROR4__(v131, 22));
        *((_DWORD *)v138 - 16) = v133;
        v139 = v85;
        v87 = v158[((_BYTE)v108 + 19) & 0xF];
        v88 = (v119 & v78 ^ v127 & ~v119)
            + v80
            + v84
            + v124
            + (__ROR4__(v119, 11) ^ __ROR4__(v119, 6) ^ __ROR4__(v119, 25));
        v125 = v88 + v61;
        v89 = v158[v145 & 0xF]
            + *((_DWORD *)v81 - 16)
            + (__ROR4__(*((_DWORD *)v85 - 16), 18) ^ __ROR4__(*((_DWORD *)v85 - 16), 7) ^ (*((_DWORD *)v85 - 16) >> 3))
            + (__ROR4__(v87, 19) ^ __ROR4__(v87, 17) ^ (v87 >> 10));
        v90 = v111[20];
        *((_DWORD *)v81 - 16) = v89;
        v91 = ((v115 ^ v131) & v86 ^ v115 & v131) + (__ROR4__(v86, 13) ^ __ROR4__(v86, 2) ^ __ROR4__(v86, 22)) + v88;
        v92 = v127 + v90 + v133;
        v128 = &v173[4 * (((_BYTE)v108 + 7) & 0xF)];
        v93 = (v78 & ~v125 ^ v119 & v125) + v92 + (__ROR4__(v125, 11) ^ __ROR4__(v125, 6) ^ __ROR4__(v125, 25));
        v94 = v158[((_BYTE)v108 + 20) & 0xF];
        v114 = v115 + v93;
        v95 = v158[((_BYTE)v108 + 15) & 0xF];
        v63 = v93 + ((v131 ^ v86) & v91 ^ v131 & v86) + (__ROR4__(v91, 13) ^ __ROR4__(v91, 2) ^ __ROR4__(v91, 22));
        v108 += 8;
        v146 = v111[22];
        v96 = (__ROR4__(v114, 11) ^ __ROR4__(v114, 6) ^ __ROR4__(v114, 25))
            + v89
            + v111[21]
            + v78
            + (v119 & ~v114 ^ v125 & v114);
        v97 = (__ROR4__(v94, 19) ^ __ROR4__(v94, 17) ^ (v94 >> 10))
            + (__ROR4__(*((_DWORD *)v128 - 16), 18) ^ __ROR4__(*((_DWORD *)v128 - 16), 7) ^ (*((_DWORD *)v128 - 16) >> 3))
            + v95
            + *((_DWORD *)v139 - 16);
        v144 = v108 & 0xF;
        v60 = v96 + (__ROR4__(v63, 13) ^ __ROR4__(v63, 2) ^ __ROR4__(v63, 22)) + ((v86 ^ v91) & v63 ^ v86 & v91);
        v141 = &v173[4 * v144];
        v147 = v111[23];
        v143 = v108 + 13;
        *((_DWORD *)v139 - 16) = v97;
        v98 = __ROR4__(v131 + v96, 11) ^ __ROR4__(v131 + v96, 6) ^ __ROR4__(v131 + v96, 25);
        v130 = v131 + v96;
        v99 = v158[((_BYTE)v108 + 13) & 0xF];
        v100 = v98 + v97 + v146 + v119 + (v125 & ~v130 ^ v130 & v114);
        v118 = v100 + (__ROR4__(v60, 13) ^ __ROR4__(v60, 2) ^ __ROR4__(v60, 22)) + ((v91 ^ v63) & v60 ^ v91 & v63);
        v132 = v86 + v100;
        v111 += 8;
        v101 = (__ROR4__(*((_DWORD *)v141 - 16), 18)
              ^ __ROR4__(*((_DWORD *)v141 - 16), 7)
              ^ (*((_DWORD *)v141 - 16) >> 3))
             + *((_DWORD *)v128 - 16)
             + *((_DWORD *)v136 - 16)
             + (__ROR4__(v99, 19) ^ __ROR4__(v99, 17) ^ (v99 >> 10));
        *((_DWORD *)v128 - 16) = v101;
        v102 = (__ROR4__(v86 + v100, 11) ^ __ROR4__(v86 + v100, 6) ^ __ROR4__(v86 + v100, 25))
             + v125
             + v101
             + v147
             + (v114 & ~(v86 + v100) ^ v130 & (v86 + v100));
        v103 = v91 + v102;
        v124 = v103;
        v61 = v102 + (__ROR4__(v118, 13) ^ __ROR4__(v118, 2) ^ __ROR4__(v118, 22)) + ((v63 ^ v60) & v118 ^ v63 & v60);
        if ( v108 == 64 )
          break;
        v57 = v108 + 1;
        v145 = v108 + 14;
        v62 = *((_DWORD *)v141 - 16);
        v58 = v158[(v108 + 1) & 0xF];
        v59 = v158[((_BYTE)v108 + 14) & 0xF];
        v56 = v158[(v108 + 9) & 0xF];
      }
      v148 += v61;
      v153 += v118;
      v150 += v60;
      v156 += v63;
      v149 += v103;
      v151 += v132;
      v152 += v130;
      v154 += v114;
      *v157 = v148;
      --v155;
      v157[1] = v153;
      v134 += 64;
      result = v157;
      v157[2] = v150;
      v157[3] = v156;
      v157[4] = v149;
      v157[5] = v151;
      v157[6] = v152;
      v157[7] = v154;
    }
    while ( v155 != -1 );
  }
  return result;
}
