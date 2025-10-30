unsigned int __fastcall sub_143E0C(unsigned __int8 *a1)
{
  unsigned __int64 v2; // r10
  __int64 v3; // r8
  __int64 v4; // r4
  __int64 v5; // r6
  int v6; // lr
  __int64 v7; // r10
  __int64 v8; // r2
  __int64 v9; // r0
  __int64 v10; // r10
  __int64 v11; // r10
  signed __int64 v12; // r6
  __int64 v13; // r0
  __int64 v14; // r4
  __int64 v15; // r0
  __int64 v16; // r10
  __int64 v17; // r4
  __int64 v18; // r6
  __int64 v19; // r4
  __int64 v20; // r10
  __int64 v21; // r6
  __int64 v22; // r4
  int v23; // lr
  __int64 v24; // r0
  __int64 v25; // r2
  signed __int64 v26; // r6
  __int64 v27; // kr198_8
  __int64 v28; // r2
  __int64 v29; // r10
  __int64 v30; // r2
  __int64 v31; // r10
  __int64 v32; // r6
  __int64 v33; // r2
  __int64 v34; // r4
  __int64 v36; // [sp+0h] [bp-13Ch]
  __int64 v37; // [sp+18h] [bp-124h]
  __int64 v38; // [sp+20h] [bp-11Ch]
  __int64 v39; // [sp+28h] [bp-114h]
  unsigned __int64 v40; // [sp+30h] [bp-10Ch]
  __int64 v41; // [sp+30h] [bp-10Ch]
  __int64 v42; // [sp+38h] [bp-104h]
  __int64 v43; // [sp+38h] [bp-104h]
  __int64 v44; // [sp+38h] [bp-104h]
  __int64 v45; // [sp+38h] [bp-104h]
  __int64 v46; // [sp+38h] [bp-104h]
  unsigned __int64 v47; // [sp+40h] [bp-FCh]
  __int64 v48; // [sp+48h] [bp-F4h]
  __int64 v49; // [sp+48h] [bp-F4h]
  __int64 v50; // [sp+48h] [bp-F4h]
  __int64 v51; // [sp+48h] [bp-F4h]
  __int64 v52; // [sp+50h] [bp-ECh]
  __int64 v53; // [sp+50h] [bp-ECh]
  unsigned __int64 v54; // [sp+50h] [bp-ECh]
  __int64 v55; // [sp+50h] [bp-ECh]
  unsigned int v56; // [sp+58h] [bp-E4h]
  __int64 v57; // [sp+58h] [bp-E4h]
  __int64 v58; // [sp+58h] [bp-E4h]
  __int64 v59; // [sp+58h] [bp-E4h]
  unsigned __int64 v60; // [sp+60h] [bp-DCh]
  __int64 v61; // [sp+60h] [bp-DCh]
  __int64 v62; // [sp+60h] [bp-DCh]
  __int64 v63; // [sp+68h] [bp-D4h]
  unsigned __int64 v64; // [sp+68h] [bp-D4h]
  __int64 v65; // [sp+68h] [bp-D4h]
  __int64 v66; // [sp+70h] [bp-CCh]
  __int64 v67; // [sp+70h] [bp-CCh]
  __int64 v68; // [sp+78h] [bp-C4h]
  __int64 v69; // [sp+80h] [bp-BCh]
  unsigned __int64 v70; // [sp+88h] [bp-B4h]
  __int64 v71; // [sp+88h] [bp-B4h]
  __int64 v72; // [sp+88h] [bp-B4h]
  __int64 v73; // [sp+90h] [bp-ACh]
  __int64 v74; // [sp+90h] [bp-ACh]
  __int64 v75; // [sp+90h] [bp-ACh]
  __int64 v76; // [sp+98h] [bp-A4h]
  __int64 v77; // [sp+98h] [bp-A4h]
  __int64 v78; // [sp+98h] [bp-A4h]
  __int64 v79; // [sp+98h] [bp-A4h]
  __int64 v80; // [sp+A0h] [bp-9Ch]
  __int64 v81; // [sp+A0h] [bp-9Ch]
  __int64 v82; // [sp+A0h] [bp-9Ch]
  unsigned __int64 v83; // [sp+A8h] [bp-94h]
  __int64 v84; // [sp+A8h] [bp-94h]
  unsigned __int64 v85; // [sp+B0h] [bp-8Ch]
  __int64 v86; // [sp+B0h] [bp-8Ch]
  __int64 v87; // [sp+B0h] [bp-8Ch]
  __int64 v88; // [sp+B0h] [bp-8Ch]
  __int64 v89; // [sp+B8h] [bp-84h]
  __int64 v90; // [sp+B8h] [bp-84h]
  __int64 v91; // [sp+C0h] [bp-7Ch]
  unsigned __int64 v92; // [sp+C0h] [bp-7Ch]
  __int64 v93; // [sp+C0h] [bp-7Ch]
  unsigned __int64 v94; // [sp+C8h] [bp-74h]
  __int64 v95; // [sp+C8h] [bp-74h]
  __int64 v96; // [sp+C8h] [bp-74h]
  __int64 v97; // [sp+D0h] [bp-6Ch]
  __int64 v98; // [sp+D0h] [bp-6Ch]
  __int64 v99; // [sp+D0h] [bp-6Ch]
  __int64 v100; // [sp+D8h] [bp-64h]
  __int64 v101; // [sp+D8h] [bp-64h]
  __int64 v102; // [sp+D8h] [bp-64h]
  __int64 v103; // [sp+E0h] [bp-5Ch]
  __int64 v104; // [sp+E0h] [bp-5Ch]
  unsigned __int64 v105; // [sp+E0h] [bp-5Ch]
  __int64 v106; // [sp+E8h] [bp-54h]
  __int64 v107; // [sp+E8h] [bp-54h]
  unsigned __int64 v108; // [sp+F0h] [bp-4Ch]
  __int64 v109; // [sp+F0h] [bp-4Ch]
  __int64 v110; // [sp+F0h] [bp-4Ch]
  __int64 v111; // [sp+F0h] [bp-4Ch]
  unsigned __int64 v112; // [sp+F8h] [bp-44h]
  unsigned __int64 v113; // [sp+F8h] [bp-44h]
  __int64 v114; // [sp+F8h] [bp-44h]
  unsigned __int64 v115; // [sp+100h] [bp-3Ch]
  __int64 v116; // [sp+100h] [bp-3Ch]
  __int64 v117; // [sp+100h] [bp-3Ch]
  unsigned __int64 v118; // [sp+108h] [bp-34h]
  __int64 v119; // [sp+108h] [bp-34h]
  __int64 v120; // [sp+118h] [bp-24h]
  __int64 v121; // [sp+128h] [bp-14h]

  LODWORD(v2) = a1[26] | (a1[27] << 8) | (a1[28] << 16);
  HIDWORD(v2) = (unsigned __int64)a1[28] >> 16;
  v56 = *((_DWORD *)a1 + 15) >> 3;
  v52 = (*(_DWORD *)(a1 + 57) >> 6) & 0x1FFFFFLL;
  v47 = (((a1[56] << 8) | (unsigned __int64)(a1[57] << 16) | a1[55]) >> 1) & 0x1FFFFF;
  v42 = (*((_DWORD *)a1 + 13) >> 4) & 0x1FFFFF;
  v40 = (((a1[49] << 16) | (a1[48] << 8) | (unsigned __int64)a1[47]) >> 2) & 0x1FFFFF;
  v48 = (*(_DWORD *)(a1 + 49) >> 7) & 0x1FFFFF;
  v112 = (unsigned int)&loc_9FB66 * (unsigned __int64)v56
       + (((__int64)(a1[34] | ((unsigned __int64)a1[35] << 8) | ((unsigned __int64)a1[36] << 16)) >> 1) & 0x1FFFFF);
  v76 = v40 * (unsigned int)&loc_9FB66
      + ((a1[21] | (a1[22] << 8) | (a1[23] << 16)) & 0x1FFFFF)
      + 666643LL * (unsigned int)v42
      + v48 * (unsigned int)&loc_72D18;
  v66 = ((a1[42] | (a1[44] << 16) | (a1[43] << 8)) & 0x1FFFFF) - 683901LL * v56;
  v94 = (unsigned int)&loc_215D0 * (unsigned __int64)v56
      + (((a1[40] << 8) | (a1[41] << 16) | (unsigned int)a1[39]) >> 3)
      - 683901 * v52;
  v115 = ((*(_DWORD *)(a1 + 23) >> 5) & 0x1FFFFF)
       + 666643 * v47
       + (unsigned int)v42 * (unsigned __int64)(unsigned int)&loc_72D18
       + v48 * (unsigned int)&loc_9FB66;
  v118 = v47 * (unsigned int)&loc_9FB66
       + (unsigned int)v52 * (unsigned __int64)(unsigned int)&loc_72D18
       + 666643LL * v56
       + ((*((_DWORD *)a1 + 7) >> 7) & 0x1FFFFF)
       - 997805 * v42
       + v48 * (unsigned int)&loc_215D0;
  v70 = -683901 * v48
      + v42 * (unsigned int)&loc_215D0
      + (unsigned int)v52 * (unsigned __int64)(unsigned int)&loc_9FB66
      + (unsigned int)&loc_72D18 * (unsigned __int64)v56
      + ((*(_DWORD *)(a1 + 31) >> 4) & 0x1FFFFF)
      - 997805 * v47;
  v69 = -683901LL * v47 + v52 * (unsigned int)&loc_215D0 + ((*((_DWORD *)a1 + 9) >> 6) & 0x1FFFFF) - 997805LL * v56;
  v73 = ((*(_DWORD *)(a1 + 15) >> 6) & 0x1FFFFF) + 666643 * v40;
  v60 = 666643 * v48
      + (((a1[20] << 16) | (unsigned __int64)(a1[19] << 8) | a1[18]) >> 3)
      + v40 * (unsigned int)&loc_72D18;
  v108 = v40 * (unsigned int)&loc_215D0
       + (unsigned int)v42 * (unsigned __int64)(unsigned int)&loc_9FB66
       + v47 * (unsigned int)&loc_72D18
       + 666643LL * (unsigned int)v52
       + ((v2 >> 2) & 0x1FFFFF)
       - 997805LL * (unsigned int)v48;
  v3 = (__int64)(v108 + 0x100000) >> 21;
  v49 = (__int64)(v70 + 0x100000) >> 21;
  v57 = (v76 + 0x100000) >> 21;
  v113 = -683901 * v42 + v112 - 997805LL * (unsigned int)v52 + v47 * (unsigned int)&loc_215D0 + v49;
  v83 = v115 - 997805 * v40 + v57;
  v4 = v118 - 683901 * v40 + v3 + 0x100000;
  v85 = v94 + ((v69 + 0x100000) >> 21);
  v43 = (__int64)(v60 + ((v73 + 0x100000) >> 21) + 0x100000) >> 21;
  v120 = v118 - 683901 * v40 + v3 - (v4 >> 21 << 21);
  v5 = (v66 + 0x100000) >> 21;
  v119 = v108 - (v3 << 21) + ((__int64)(v83 + 0x100000) >> 21);
  v41 = (v4 >> 21) + v70 - (v49 << 21);
  v50 = ((*((_DWORD *)a1 + 11) >> 5) & 0x1FFFFF) + v5;
  HIDWORD(v63) = (v83 + 0x100000) >> 32;
  HIDWORD(v3) = (v113 + 0x100000) >> 32;
  LODWORD(v3) = (unsigned int)((__int64)(v113 + 0x100000) >> 21) << 21;
  LODWORD(v63) = (unsigned int)((__int64)(v83 + 0x100000) >> 21) << 21;
  v116 = v60 + ((v73 + 0x100000) >> 21) - (v43 << 21);
  v109 = v43 + v76 - (v57 << 21);
  v44 = ((__int64)(v113 + 0x100000) >> 21) + v69 - ((v69 + 0x100000) >> 21 << 21);
  v53 = v66 - (v5 << 21);
  v39 = v53 + ((__int64)(v85 + 0x100000) >> 21);
  v6 = -(v53 + ((__int64)(v85 + 0x100000) >> 21));
  v54 = v85 - ((__int64)(v85 + 0x100000) >> 21 << 21);
  v7 = 4293969491LL * (unsigned int)v39;
  HIDWORD(v7) += v6 - 997805 * HIDWORD(v39);
  v103 = v39 * (unsigned int)&loc_9FB66 + v73 - ((v73 + 0x100000) >> 21 << 21) + v50 * (unsigned int)&loc_72D18;
  v121 = v116 + v50 * (unsigned int)&loc_9FB66 + v7 + v54 * (unsigned int)&loc_215D0 - 683901 * v44;
  v8 = 4294283395LL * (unsigned int)v39;
  HIDWORD(v8) += v6 - 683901 * HIDWORD(v39);
  v106 = v8 + v50 * (unsigned int)&loc_215D0 + v83 - v63;
  v89 = v119 - 683901 * v50;
  v91 = -683901LL * v54 + v39 * (unsigned int)&loc_215D0 + -997805 * v50 + v109;
  v110 = v44 * (unsigned int)&loc_9FB66
       + v54 * (unsigned int)&loc_72D18
       + ((*(_DWORD *)(a1 + 10) >> 4) & 0x1FFFFF)
       + 666643 * v39
       - 997805 * (v113 - v3);
  v100 = (v113 - v3) * (unsigned int)&loc_215D0
       + v54 * (unsigned int)&loc_9FB66
       + v39 * (unsigned int)&loc_72D18
       + (((__int64)(a1[13] | ((unsigned __int64)a1[14] << 8) | ((unsigned __int64)a1[15] << 16)) >> 1) & 0x1FFFFF)
       + 666643 * v50
       - 997805 * v44;
  v74 = v41 * (unsigned int)&loc_9FB66
      + (v113 - v3) * (unsigned int)&loc_72D18
      + 666643 * v44
      + (((__int64)(a1[5] | ((unsigned __int64)a1[6] << 8) | ((unsigned __int64)a1[7] << 16)) >> 2) & 0x1FFFFF);
  v97 = ((*a1 | (a1[2] << 16) | (a1[1] << 8)) & 0x1FFFFFLL) + 666643 * v41;
  LODWORD(v63) = (v97 + 0x100000) >> 21;
  HIDWORD(v63) = (int)((unsigned __int64)(v97 + 0x100000) >> 32) >> 21;
  v77 = ((v74 + 0x100000) >> 21)
      + -997805 * v41
      + (v113 - v3) * (unsigned int)&loc_9FB66
      + v44 * (unsigned int)&loc_72D18
      + ((*(_DWORD *)(a1 + 7) >> 7) & 0x1FFFFF)
      + 666643 * v54;
  v80 = v44 * (unsigned int)&loc_215D0 + v103 - 997805 * v54 - 683901 * (v113 - v3);
  v86 = v63 + v41 * (unsigned int)&loc_72D18 + ((*(_DWORD *)(a1 + 2) >> 5) & 0x1FFFFF) + 666643 * (v113 - v3);
  v61 = (v110 + v41 * (unsigned int)&loc_215D0 + 0x100000) >> 21;
  v58 = (v77 + 0x100000) >> 21;
  v45 = (v80 + 0x100000) >> 21;
  HIDWORD(v9) = (v110 + v41 * (unsigned __int64)(unsigned int)&loc_215D0 + 0x100000) >> 32;
  LODWORD(v9) = (_DWORD)v61 << 21;
  HIDWORD(v3) = (unsigned __int64)(v74 + 0x100000) >> 32;
  HIDWORD(v69) = (unsigned __int64)(v77 + 0x100000) >> 32;
  LODWORD(v3) = (unsigned int)((v74 + 0x100000) >> 21) << 21;
  LODWORD(v69) = (_DWORD)v58 << 21;
  v51 = v63 << 21;
  v10 = v74 - v3;
  HIDWORD(v8) = (unsigned __int64)(v91 + 0x100000) >> 32;
  HIDWORD(v63) = (unsigned __int64)(v80 + 0x100000) >> 32;
  LODWORD(v63) = (_DWORD)v45 << 21;
  LODWORD(v8) = (unsigned int)((v91 + 0x100000) >> 21) << 21;
  v84 = v120 + ((v89 + 0x100000) >> 21);
  v104 = v77 - v69;
  HIDWORD(v4) = v61 + -683901 * v41 + v100;
  LODWORD(v5) = (unsigned __int64)(v61 + -683901 * v41 + v100) >> 32;
  v101 = v58 + v110 + v41 * (unsigned int)&loc_215D0 - v9;
  v75 = v97 - v51;
  v95 = ((v86 + 0x100000) >> 21) + v10;
  v98 = v86 - __PAIR64__((unsigned __int64)(v86 + 0x100000) >> 32, (unsigned int)((v86 + 0x100000) >> 21) << 21);
  v11 = v63;
  v64 = __PAIR64__(v5, HIDWORD(v4));
  v68 = v80 - v11;
  v81 = v106 + ((v91 + 0x100000) >> 21);
  v87 = v91 - v8;
  v92 = v89 - __PAIR64__((unsigned __int64)(v89 + 0x100000) >> 32, (unsigned int)((v89 + 0x100000) >> 21) << 21);
  v12 = __PAIR64__(v5, HIDWORD(v4)) + 0x100000;
  v107 = v68 + (v12 >> 21);
  v71 = ((v84 + 0x100000) >> 21) * (unsigned int)&loc_215D0;
  v13 = (v121 + v45 + 0x100000) >> 21;
  v117 = v75 + 666643 * ((v84 + 0x100000) >> 21);
  v114 = v87 + v13;
  v14 = v13 << 21;
  v15 = v98 + ((v84 + 0x100000) >> 21) * (unsigned int)&loc_72D18;
  v99 = v121 + v45 - v14;
  v88 = v15 + (v117 >> 21);
  v90 = (v88 >> 21) + v95 + ((v84 + 0x100000) >> 21) * (unsigned int)&loc_9FB66;
  HIDWORD(v66) = (unsigned __int64)(v81 + 0x100000) >> 32;
  LODWORD(v66) = (unsigned int)((v81 + 0x100000) >> 21) << 21;
  LODWORD(v51) = (unsigned int)(v117 >> 21) << 21;
  HIDWORD(v51) = HIDWORD(v117);
  v46 = ((v90 >> 21) + v77 - v69 - 997805 * ((v84 + 0x100000) >> 21)) >> 21;
  v16 = (v46 + v101 + v71) >> 21;
  HIDWORD(v68) = HIDWORD(v88);
  v17 = v16 + v64 - (v12 >> 21 << 21) - 683901 * ((v84 + 0x100000) >> 21);
  LODWORD(v68) = (unsigned int)(v88 >> 21) << 21;
  v78 = v81 - v66;
  v67 = (v17 >> 21) + v107;
  v96 = (v90 >> 21) + v104 - 997805 * ((v84 + 0x100000) >> 21) - (v46 << 21);
  v102 = v46 + v101 + v71 - (v16 << 21);
  v105 = (unsigned int)v17 - (unsigned __int64)((unsigned int)(v17 >> 21) << 21);
  v55 = ((v67 >> 21) + v99) >> 21;
  v18 = (v114 + v55) >> 21;
  HIDWORD(v15) = (unsigned __int64)(v114 + v55) >> 32;
  LODWORD(v15) = (_DWORD)v18 << 21;
  v19 = v78 + v18;
  v20 = (v78 + v18) >> 21;
  v79 = v114 + v55 - v15;
  v21 = ((v81 + 0x100000) >> 21) + v92 + v20;
  v93 = v19 - (v20 << 21);
  v22 = v84 - ((v84 + 0x100000) >> 21 << 21) + (v21 >> 21);
  v23 = SHIDWORD(v22) >> 21;
  HIDWORD(v8) = v22 >> 21;
  v82 = v21 - (v21 >> 21 << 21);
  LODWORD(v75) = -HIDWORD(v8);
  v111 = v22 - (v22 >> 21 << 21);
  v62 = 4293969491LL * HIDWORD(v8);
  v65 = (v22 >> 21) * (unsigned int)&loc_215D0;
  v72 = 4294283395LL * HIDWORD(v8);
  v24 = v117 - v51 + 666643 * (v22 >> 21);
  v25 = (v24 >> 21) + v88 - v68 + (v22 >> 21) * (unsigned int)&loc_72D18;
  *a1 = v24;
  v26 = (v25 >> 21)
      + (unsigned int)v90
      - (unsigned __int64)((unsigned int)(v90 >> 21) << 21)
      + (v22 >> 21) * (unsigned int)&loc_9FB66;
  a1[1] = BYTE1(v24);
  LODWORD(v25) = v25 - ((unsigned int)(v25 >> 21) << 21);
  a1[2] = (((unsigned int)v24 - ((unsigned int)(v24 >> 21) << 21)) >> 16) | (32 * v25);
  a1[3] = (unsigned int)v25 >> 3;
  a1[4] = (unsigned int)v25 >> 11;
  HIDWORD(v62) += v75 - 997805 * (SHIDWORD(v22) >> 21);
  v59 = (v26 >> 21) + v62 + v96;
  BYTE4(v22) = ((unsigned int)v25 >> 19) | (4 * v26);
  LODWORD(v26) = v26 - ((unsigned int)(v26 >> 21) << 21);
  a1[5] = BYTE4(v22);
  LODWORD(v22) = (unsigned int)v26 >> 14;
  a1[6] = (unsigned int)v26 >> 6;
  LODWORD(v26) = (v59 >> 21) + v65 + v102;
  v27 = ((v59 >> 21) + v65 + v102) >> 21;
  HIDWORD(v72) += v75 - 683901 * v23;
  v28 = v27 + v105 + v72;
  LODWORD(v62) = v59 - ((unsigned int)(v59 >> 21) << 21);
  a1[9] = (unsigned int)v62 >> 9;
  a1[7] = v22 | ((_BYTE)v59 << 7);
  v29 = v67 - (v67 >> 21 << 21) + (v28 >> 21);
  LODWORD(v3) = v26 - ((_DWORD)v27 << 21);
  LODWORD(v41) = v28 - ((unsigned int)(v28 >> 21) << 21);
  v37 = (v29 >> 21) + (v67 >> 21) + v99 - (v55 << 21);
  HIDWORD(v46) = HIDWORD(v29);
  LODWORD(v46) = (unsigned int)(v29 >> 21) << 21;
  v36 = v37 >> 21;
  a1[10] = ((unsigned int)v62 >> 17) | (16 * v26);
  a1[11] = (unsigned int)v3 >> 4;
  a1[12] = (unsigned int)v3 >> 12;
  a1[13] = ((unsigned int)v3 >> 20) | (2 * v28);
  v38 = ((v37 >> 21) + v79) >> 21;
  v30 = v93 + v38;
  HIDWORD(v26) = (v29 - v46) >> 18;
  LOBYTE(v22) = ((unsigned int)v41 >> 15) | ((_BYTE)v29 << 6);
  HIDWORD(v24) = (unsigned int)(v29 - v46) >> 2;
  LODWORD(v55) = (_DWORD)v38 << 21;
  LODWORD(v24) = (unsigned int)(v29 - v46) >> 10;
  LODWORD(v29) = v37 - ((unsigned int)(v37 >> 21) << 21);
  a1[15] = v22;
  a1[16] = BYTE4(v24);
  a1[17] = v24;
  LOBYTE(v37) = BYTE4(v26) | (8 * v37);
  HIDWORD(v22) = v29;
  v31 = (v93 + v38) >> 21;
  LODWORD(v38) = HIDWORD(v22) >> 5;
  LODWORD(v46) = HIDWORD(v22) >> 13;
  a1[14] = (unsigned int)v41 >> 7;
  v32 = v82 + v31;
  v33 = v30 - (v31 << 21);
  BYTE4(v31) = ((unsigned int)(v36 + v79 - v55) >> 16) | (32 * v33);
  HIDWORD(v24) = v33 >> 19;
  LODWORD(v41) = (unsigned int)v33 >> 3;
  LODWORD(v47) = (unsigned int)v33 >> 11;
  v34 = v111 + (__SPAIR64__(HIDWORD(v32), (int)v82 + (int)v31) >> 21);
  LODWORD(v33) = (unsigned int)(__SPAIR64__(HIDWORD(v32), (int)v82 + (int)v31) >> 21) << 21;
  HIDWORD(v33) = HIDWORD(v32);
  a1[23] = BYTE4(v31);
  a1[30] = (unsigned int)v34 >> 9;
  a1[31] = (unsigned int)v34 >> 17;
  a1[18] = v37;
  a1[19] = v38;
  a1[8] = (unsigned int)v62 >> 1;
  a1[21] = v36 + v79 - v55;
  a1[20] = v46;
  a1[24] = v41;
  a1[26] = BYTE4(v24) | (4 * v32);
  a1[22] = (unsigned __int16)(v36 + v79 - v55) >> 8;
  a1[27] = (unsigned int)(v32 - v33) >> 6;
  a1[28] = ((v32 - v33) >> 14) | ((_BYTE)v34 << 7);
  a1[25] = v47;
  a1[29] = (unsigned int)v34 >> 1;
  return (unsigned int)v34 >> 17;
}
