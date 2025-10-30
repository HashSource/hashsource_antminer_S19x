unsigned int __fastcall sub_F1858(unsigned int result, char *a2, size_t a3)
{
  int v3; // r4
  int v4; // r7
  unsigned int *v5; // r5
  unsigned int v6; // r10
  int v7; // r6
  unsigned int v8; // r4
  unsigned int v9; // r1
  int v10; // r8
  unsigned int v11; // lr
  unsigned __int64 v12; // kr120_8
  unsigned int v13; // r8
  unsigned int v14; // r0
  int v15; // r1
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // r6
  unsigned int v18; // r1
  int v19; // r2
  unsigned int v20; // r1
  unsigned int v21; // r1
  unsigned int v22; // r1
  unsigned int v23; // r3
  unsigned int v24; // r7
  unsigned int v25; // r9
  unsigned int v26; // r2
  unsigned int v27; // r1
  unsigned int v28; // lr
  unsigned int v29; // r12
  __int64 v30; // r10
  unsigned int v31; // r6
  char *v32; // r3
  unsigned int v33; // r2
  __int64 v34; // r10
  unsigned int v35; // r7
  unsigned int v36; // r5
  unsigned __int64 v37; // r0
  __int64 v38; // kr138_8
  unsigned int v39; // kr20_4
  int v40; // lr
  unsigned __int64 v41; // kr140_8
  unsigned int v42; // r3
  unsigned int v43; // r7
  unsigned int v44; // r4
  unsigned __int64 v45; // kr148_8
  unsigned int v46; // lr
  unsigned int v47; // r5
  int v48; // lr
  unsigned int v49; // r2
  unsigned int v50; // r7
  unsigned int v51; // r2
  unsigned int v52; // r5
  unsigned __int64 v53; // r6
  unsigned int v54; // r4
  int v55; // r2
  unsigned int v56; // r2
  unsigned int v57; // lr
  unsigned __int64 v58; // r6
  unsigned __int64 v59; // r4
  unsigned __int64 v60; // r0
  unsigned int v61; // r2
  int v62; // lr
  unsigned int v63; // r2
  unsigned int v64; // r2
  unsigned int v65; // krD0_4
  unsigned int v66; // r3
  unsigned __int64 v67; // r6
  unsigned int v68; // krD4_4
  __int64 v69; // r4
  unsigned __int64 v70; // r0
  unsigned int v71; // lr
  unsigned __int64 v72; // r4
  unsigned int v73; // lr
  int v74; // r3
  unsigned int v75; // lr
  unsigned int v76; // r2
  unsigned int v77; // r5
  size_t v78; // [sp+0h] [bp-14Ch]
  unsigned int v79; // [sp+0h] [bp-14Ch]
  unsigned int v80; // [sp+Ch] [bp-140h]
  unsigned int v81; // [sp+Ch] [bp-140h]
  __int64 v82; // [sp+10h] [bp-13Ch]
  unsigned __int8 v83; // [sp+14h] [bp-138h]
  unsigned int v84; // [sp+18h] [bp-134h]
  int v85; // [sp+18h] [bp-134h]
  unsigned int v86; // [sp+28h] [bp-124h]
  unsigned int v87; // [sp+28h] [bp-124h]
  unsigned int v88; // [sp+28h] [bp-124h]
  char *v89; // [sp+30h] [bp-11Ch]
  char *v90; // [sp+30h] [bp-11Ch]
  int v91; // [sp+38h] [bp-114h]
  unsigned int v92; // [sp+38h] [bp-114h]
  unsigned int v93; // [sp+40h] [bp-10Ch]
  unsigned int v94; // [sp+40h] [bp-10Ch]
  unsigned int v95; // [sp+48h] [bp-104h]
  unsigned __int64 v96; // [sp+48h] [bp-104h]
  unsigned int v97; // [sp+48h] [bp-104h]
  unsigned __int64 v98; // [sp+50h] [bp-FCh]
  unsigned int v99; // [sp+50h] [bp-FCh]
  unsigned __int64 v100; // [sp+58h] [bp-F4h]
  unsigned __int64 v101; // [sp+60h] [bp-ECh]
  unsigned __int64 v102; // [sp+60h] [bp-ECh]
  unsigned __int64 v103; // [sp+68h] [bp-E4h]
  unsigned int v104; // [sp+68h] [bp-E4h]
  int v105; // [sp+70h] [bp-DCh]
  int v106; // [sp+70h] [bp-DCh]
  unsigned int v107; // [sp+90h] [bp-BCh]
  unsigned int v108; // [sp+A0h] [bp-ACh]
  int v109; // [sp+A8h] [bp-A4h]
  unsigned __int64 v110; // [sp+B0h] [bp-9Ch]
  unsigned __int64 v111; // [sp+B0h] [bp-9Ch]
  unsigned __int64 v112; // [sp+B0h] [bp-9Ch]
  unsigned __int64 v113; // [sp+B0h] [bp-9Ch]
  int v114; // [sp+B8h] [bp-94h]
  int v115; // [sp+B8h] [bp-94h]
  unsigned int v116; // [sp+C0h] [bp-8Ch]
  unsigned int v117; // [sp+C8h] [bp-84h]
  unsigned int v118; // [sp+D0h] [bp-7Ch]
  unsigned int v119; // [sp+D8h] [bp-74h]
  unsigned int v120; // [sp+E0h] [bp-6Ch]
  unsigned int v121; // [sp+108h] [bp-44h]
  unsigned int v122; // [sp+110h] [bp-3Ch]
  unsigned int *v123; // [sp+120h] [bp-2Ch]
  int n; // [sp+124h] [bp-28h]
  int v125; // [sp+128h] [bp-24h]
  unsigned int v126; // [sp+130h] [bp-1Ch]
  char *src; // [sp+140h] [bp-Ch]
  unsigned int v128; // [sp+144h] [bp-8h]

  v3 = *(_DWORD *)(result + 224);
  v123 = (unsigned int *)result;
  src = a2;
  v78 = a3;
  if ( v3 )
  {
    v4 = 16 - v3;
    if ( a3 < 16 - v3 )
    {
      v77 = result;
      result = (unsigned int)memcpy((void *)(result + 208 + v3), a2, a3);
      *(_DWORD *)(v77 + 224) = v3 + v78;
      return result;
    }
    v5 = (unsigned int *)result;
    src = &a2[v4];
    memcpy((void *)(result + 208 + v3), a2, 16 - v3);
    v6 = v5[52];
    v7 = v5[8] + (v5[8] >> 2);
    v8 = v5[54];
    v9 = v5[2];
    v10 = __CFADD__(v6, *v5) + v5[53] + v5[1];
    v80 = v5[5];
    v86 = (__CFADD__(v6, *v5) + v5[53] + (unsigned __int64)v5[1]) >> 32;
    v98 = (unsigned int)v10 * (unsigned __int64)(unsigned int)v7;
    v93 = v5[7];
    v11 = v5[6];
    v91 = v10;
    v95 = (v86 + v8 + (unsigned __int64)v9) >> 32;
    v12 = v5[55] + (unsigned __int64)v5[3];
    v103 = v80 * (unsigned __int64)(unsigned int)v10;
    v13 = v11 + (v11 >> 2);
    v123 = v5;
    v14 = v93 + (v93 >> 2);
    v87 = v86 + v8 + v9;
    v78 -= v4;
    v15 = v5[4] + 1 + ((v95 + v12) >> 32);
    v101 = (v95 + (unsigned int)v12) * (unsigned __int64)v13
         + v87 * (unsigned __int64)v14
         + v80 * (unsigned __int64)(*v5 + v6)
         + v98;
    v100 = (v95 + (unsigned int)v12) * (unsigned __int64)v14
         + v87 * (unsigned __int64)(unsigned int)v7
         + v11 * (unsigned __int64)(*v5 + v6)
         + v103
         + HIDWORD(v101)
         + v15 * v13;
    v16 = HIDWORD(v100)
        + (v95 + (unsigned int)v12) * (unsigned __int64)(unsigned int)v7
        + v93 * (unsigned __int64)(*v5 + v6)
        + (unsigned int)v91 * (unsigned __int64)v11
        + v87 * (unsigned __int64)v80
        + v15 * v14;
    v17 = (v95 + (unsigned int)v12) * (unsigned __int64)v80
        + v87 * (unsigned __int64)v11
        + v5[8] * (unsigned __int64)(*v5 + v6)
        + (unsigned int)v91 * (unsigned __int64)v93
        + (unsigned int)(v15 * v7)
        + HIDWORD(v16);
    v18 = HIDWORD(v17) + v15 * v80;
    v19 = v18 & 3;
    v20 = (v18 & 0xFFFFFFFC) + (v18 >> 2);
    *v5 = v20 + v101;
    v21 = ((v20 ^ (v20 + (_DWORD)v101) | v20 ^ (unsigned int)v101) ^ (v20 + (_DWORD)v101)) >> 31;
    v5[1] = v21 + v100;
    v22 = ((v21 ^ (v21 + (_DWORD)v100) | v21 ^ (unsigned int)v100) ^ (v21 + (_DWORD)v100)) >> 31;
    result = v22 + v16;
    v5[2] = v22 + v16;
    v23 = ((v22 ^ result | v22 ^ (unsigned int)v16) ^ result) >> 31;
    v5[3] = v23 + v17;
    v5[4] = v19 + (((v23 ^ (v23 + (_DWORD)v17) | (unsigned int)v17 ^ v23) ^ (v23 + (_DWORD)v17)) >> 31);
  }
  n = v78 & 0xF;
  v128 = v78 - n;
  if ( v128 > 0xF )
  {
    v94 = v123[7];
    v84 = v123[6];
    v108 = v123[8];
    v24 = *v123;
    v99 = v94 + (v94 >> 2);
    v81 = v123[5];
    v88 = v84 + (v84 >> 2);
    v92 = v108 + (v108 >> 2);
    v25 = v123[1];
    v26 = v123[2];
    v27 = v123[3];
    v28 = v123[4];
    if ( v128 - 16 <= 0x1F )
    {
      v104 = v78 - (v78 & 0xF);
      v89 = src;
    }
    else
    {
      v29 = v108 + (v108 >> 2);
      v116 = v78 - (v78 & 0xF);
      v89 = src;
      do
      {
        v30 = v26;
        v31 = *((_DWORD *)v89 + 1);
        v32 = v89;
        v104 = v116 - 32;
        v33 = v24 + *(_DWORD *)v89;
        v83 = 0;
        v34 = v30 + *((unsigned int *)v89 + 2);
        v35 = (v24 + (unsigned __int64)*(unsigned int *)v89) >> 32;
        v36 = v116;
        v37 = v27 + (unsigned __int64)*((unsigned int *)v89 + 3);
        __pld(v89 + 60);
        v117 = (v35 + (unsigned __int64)v31 + v25) >> 32;
        v126 = v36 - 48;
        v90 = v32;
        v38 = v35 + v31 + v25;
        v118 = ((unsigned __int64)v117 + v34) >> 32;
        v39 = v35 + v31 + v25;
        v40 = v28 + ((v118 + v37) >> 32) + 1;
        v110 = (v117 + (unsigned int)v34) * (unsigned __int64)v29;
        v41 = (v117 + (unsigned int)v34) * (unsigned __int64)v99 + v81 * (unsigned __int64)v33 + v38 * v29;
        v105 = (v118 + v37) * v88 + v41;
        v119 = ((v118 + (unsigned int)v37) * (unsigned __int64)v88 + v41) >> 32;
        v120 = (v119
              + v84 * (unsigned __int64)v33
              + v39 * (unsigned __int64)v81
              + v110
              + (v118 + (unsigned int)v37) * (unsigned __int64)v99
              + v40 * v88) >> 32;
        v114 = v119 + v84 * v33 + v39 * v81 + v110 + (v118 + v37) * v99 + v40 * v88;
        v42 = v84;
        LODWORD(v110) = *((_DWORD *)v90 + 4);
        v43 = *((_DWORD *)v90 + 5);
        v44 = *((_DWORD *)v90 + 6);
        HIDWORD(v37) = *((_DWORD *)v90 + 7);
        v89 = v90 + 32;
        v102 = v120
             + (v118 + (unsigned int)v37) * (unsigned __int64)v29
             + v94 * (unsigned __int64)v33
             + v38 * v84
             + (v117 + (unsigned int)v34) * (unsigned __int64)v81
             + v40 * v99;
        v116 = v104;
        v45 = HIDWORD(v102)
            + (v117 + (unsigned int)v34) * (unsigned __int64)v84
            + v108 * (unsigned __int64)v33
            + v38 * v94
            + (v118 + (unsigned int)v37) * (unsigned __int64)v81
            + v40 * v29;
        v85 = HIDWORD(v102) + (v117 + v34) * v84 + v108 * v33 + v38 * v94 + (v118 + v37) * v81 + v40 * v29;
        v46 = HIDWORD(v45) + v40 * v81;
        v47 = (v46 & 0xFFFFFFFC) + (v46 >> 2);
        v125 = (v46 & 3) + 1;
        v48 = v47 + v105;
        v49 = ((v47 ^ (v47 + v105) | v47 ^ v105) ^ (v47 + v105)) >> 31;
        LODWORD(v37) = __CFADD__(v47 + v105, (_DWORD)v110) + v43 + v49 + v114;
        v50 = (__PAIR64__(v83, __CFADD__(v47 + v105, (_DWORD)v110)) + v43 + v49 + v114) >> 32;
        v51 = ((v49 ^ (v49 + v114) | v49 ^ v114) ^ (v49 + v114)) >> 31;
        v52 = ((v51 + (_DWORD)v102) ^ (v51 ^ (v51 + (_DWORD)v102) | (unsigned int)v102 ^ v51)) >> 31;
        v53 = v50 + (unsigned __int64)v44 + v51 + (unsigned int)v102;
        v54 = v52 + v85;
        v55 = v85;
        v84 = v42;
        v96 = HIDWORD(v53) + (unsigned __int64)HIDWORD(v37) + v54;
        LODWORD(v34) = v53;
        v56 = v125 + (((v55 ^ v52 | v52 ^ v54) ^ v54) >> 31) + HIDWORD(v96);
        v57 = v48 + v110;
        v111 = (unsigned int)v96 * (unsigned __int64)v88;
        v58 = (unsigned int)v53 * (unsigned __int64)v99
            + v81 * (unsigned __int64)v57
            + (unsigned int)v37 * (unsigned __int64)v29;
        v121 = (v111 + v58) >> 32;
        v115 = v111 + v58;
        v112 = v94 * (unsigned __int64)v57
             + (unsigned int)v37 * (unsigned __int64)v42
             + (unsigned int)v34 * (unsigned __int64)v81
             + (unsigned int)v96 * (unsigned __int64)v29
             + v56 * v99;
        v59 = v121
            + v42 * (unsigned __int64)v57
            + (unsigned int)v37 * (unsigned __int64)v81
            + (unsigned int)v34 * (unsigned __int64)v29
            + (unsigned int)v96 * (unsigned __int64)v99;
        v122 = (v59 + v56 * v88) >> 32;
        LODWORD(v102) = v59 + v56 * v88;
        v60 = ((v122 + v112) >> 32)
            + v108 * (unsigned __int64)v57
            + (unsigned int)v37 * (unsigned __int64)v94
            + (unsigned int)v34 * (unsigned __int64)v42
            + (unsigned int)v96 * (unsigned __int64)v81
            + v56 * v29;
        v61 = HIDWORD(v60) + v56 * v81;
        v62 = v61 & 3;
        v63 = (v61 & 0xFFFFFFFC) + (v61 >> 2);
        v24 = v63 + v115;
        v64 = ((v63 ^ (v63 + v115) | v63 ^ v115) ^ (v63 + v115)) >> 31;
        v25 = v64 + v102;
        HIDWORD(v60) = (((v64 + (_DWORD)v102) ^ v64 | v64 ^ (unsigned int)v102) ^ (v64 + (_DWORD)v102)) >> 31;
        v26 = HIDWORD(v60) + v122 + v112;
        LODWORD(v59) = (((v122 + (_DWORD)v112) ^ HIDWORD(v60) | HIDWORD(v60) ^ v26) ^ v26) >> 31;
        v27 = v59 + v60;
        v28 = v62 + ((((unsigned int)v60 ^ (unsigned int)v59 | (unsigned int)v59 ^ v27) ^ v27) >> 31);
      }
      while ( v126 > 0x1F );
    }
    do
    {
      v104 -= 16;
      v66 = (v24 + (unsigned __int64)*(unsigned int *)v89) >> 32;
      v65 = *((_DWORD *)v89 + 3);
      v97 = v24 + *(_DWORD *)v89;
      v67 = v26 + (unsigned __int64)*((unsigned int *)v89 + 2);
      v68 = *((_DWORD *)v89 + 1);
      v89 += 16;
      v79 = v66 + v68 + v25;
      v69 = v68;
      LODWORD(v69) = ((v66 + (unsigned __int64)v68 + v25) >> 32) + v67;
      v82 = v69;
      v70 = ((((v66 + (unsigned __int64)v68 + v25) >> 32) + v67) >> 32) + v27 + (unsigned __int64)v65;
      v71 = v28 + HIDWORD(v70) + 1;
      v113 = v94 * (unsigned __int64)v97 + v79 * (unsigned __int64)v84;
      v109 = v70 * v88 + v69 * v99 + v81 * v97 + v79 * v92;
      v106 = (((unsigned int)v70 * (unsigned __int64)v88
             + v82 * v99
             + v81 * (unsigned __int64)v97
             + v79 * (unsigned __int64)v92) >> 32)
           + v84 * v97
           + v79 * v81
           + v82 * v92
           + v70 * v99
           + v71 * v88;
      v107 = ((((unsigned int)v70 * (unsigned __int64)v88
              + v82 * v99
              + v81 * (unsigned __int64)v97
              + v79 * (unsigned __int64)v92) >> 32)
            + v84 * (unsigned __int64)v97
            + v79 * (unsigned __int64)v81
            + v82 * v92
            + (unsigned int)v70 * (unsigned __int64)v99
            + v71 * v88) >> 32;
      LODWORD(v67) = v70 * v92 + v113 + v69 * v81 + v71 * v99 + v107;
      v72 = (((unsigned int)v70 * (unsigned __int64)v92 + v113 + v82 * v81 + v71 * v99 + v107) >> 32)
          + (unsigned int)v70 * (unsigned __int64)v81
          + v108 * (unsigned __int64)v97
          + v79 * (unsigned __int64)v94
          + v82 * v84
          + v71 * v92;
      v73 = HIDWORD(v72) + v71 * v81;
      v74 = v73 & 3;
      v75 = (v73 & 0xFFFFFFFC) + (v73 >> 2);
      v24 = v75 + v109;
      v76 = ((v75 ^ (v75 + v109) | v75 ^ v109) ^ (v75 + v109)) >> 31;
      v25 = v76 + v106;
      HIDWORD(v70) = ((v76 ^ (v76 + v106) | v76 ^ v106) ^ (v76 + v106)) >> 31;
      v26 = HIDWORD(v70) + v67;
      LODWORD(v67) = (((unsigned int)v67 ^ HIDWORD(v70) | HIDWORD(v70) ^ (HIDWORD(v70) + (_DWORD)v67))
                    ^ (HIDWORD(v70) + (_DWORD)v67)) >> 31;
      v27 = v67 + v72;
      v28 = v74 + ((((unsigned int)v72 ^ (unsigned int)v67 | v27 ^ (unsigned int)v67) ^ v27) >> 31);
    }
    while ( v104 > 0xF );
    result = (unsigned int)v123;
    src += v128;
    *v123 = v24;
    v123[1] = v25;
    v123[2] = v26;
    v123[3] = v27;
    v123[4] = v28;
  }
  if ( n )
    result = (unsigned int)memcpy(v123 + 52, src, n);
  v123[56] = n;
  return result;
}
