int *__fastcall sub_DCCAC(int *result, _DWORD *a2)
{
  unsigned int v2; // r2
  unsigned int v3; // r3
  unsigned int v4; // r8
  unsigned int v5; // r5
  int v6; // r4
  unsigned int v7; // r6
  int v8; // lr
  unsigned int v9; // r8
  int v10; // r6
  int v11; // r4
  unsigned int v12; // r3
  int v13; // r4
  int v14; // r6
  unsigned int v15; // r7
  int v16; // r5
  unsigned int v17; // r3
  unsigned __int16 v18; // r2
  int v19; // lr
  int v20; // r7
  unsigned int v21; // r3
  unsigned int v22; // r4
  int v23; // r6
  unsigned int v24; // r3
  int v25; // r7
  unsigned int v26; // r2
  int v27; // r12
  int v28; // r6
  int v29; // r5
  unsigned int v30; // r3
  int v31; // r5
  int v32; // r6
  unsigned int v33; // lr
  int v34; // r4
  unsigned int v35; // r3
  unsigned __int16 v36; // r2
  int v37; // r7
  int v38; // lr
  unsigned int v39; // r3
  unsigned int v40; // r6
  int v41; // r5
  unsigned int v42; // r3
  int v43; // lr
  unsigned int v44; // r2
  int v45; // r8
  int v46; // r5
  int v47; // r4
  unsigned int v48; // r3
  int v49; // r4
  int v50; // r5
  unsigned int v51; // r7
  int v52; // r6
  unsigned int v53; // r3
  unsigned __int16 v54; // r2
  int v55; // lr
  int v56; // r7
  unsigned int v57; // r3
  unsigned int v58; // r5
  int v59; // r6
  unsigned int v60; // r3
  int v61; // r7
  unsigned int v62; // r2
  int v63; // r12
  int v64; // r6
  int v65; // r4
  unsigned int v66; // r3
  int v67; // r4
  int v68; // r6
  unsigned int v69; // lr
  int v70; // r5
  unsigned int v71; // r3
  unsigned __int16 v72; // r2
  int v73; // r7
  int v74; // lr
  unsigned int v75; // r3
  unsigned int v76; // r4
  int v77; // r6
  unsigned int v78; // r3
  int v79; // lr
  unsigned int v80; // r2
  int v81; // r8
  int v82; // r6
  int v83; // r5
  unsigned int v84; // r3
  int v85; // r5
  int v86; // r6
  unsigned int v87; // r7
  int v88; // r4
  unsigned int v89; // r3
  unsigned __int16 v90; // r2
  int v91; // lr
  int v92; // r7
  unsigned int v93; // r3
  unsigned int v94; // r6
  int v95; // r5
  unsigned int v96; // r3
  int v97; // r7
  unsigned int v98; // r2
  int v99; // r12
  int v100; // r5
  int v101; // r4
  unsigned int v102; // r3
  int v103; // r4
  int v104; // r5
  unsigned int v105; // lr
  int v106; // r6
  unsigned int v107; // r3
  unsigned __int16 v108; // r2
  int v109; // r7
  int v110; // lr
  unsigned int v111; // r3
  unsigned int v112; // r5
  int v113; // r4
  unsigned int v114; // r3
  int v115; // lr
  unsigned int v116; // r2
  int v117; // r8
  int v118; // r6
  int v119; // r4
  unsigned int v120; // r3
  int v121; // r4
  int v122; // r12
  unsigned int v123; // r7
  int v124; // r5
  unsigned int v125; // r3
  unsigned __int16 v126; // r2
  int v127; // lr
  int v128; // r7
  unsigned int v129; // r3
  unsigned int v130; // r4
  int v131; // r5
  unsigned int v132; // r3
  unsigned int v133; // r2
  int v134; // r8
  int v135; // lr
  int v136; // r6
  int v137; // r5
  unsigned int v138; // r3
  int v139; // r7
  int v140; // r12
  unsigned int v141; // r6
  int v142; // r7
  int v143; // r12
  __int16 v144; // r3
  unsigned __int16 v145; // r2
  int v146; // r6
  __int16 v147; // r3
  unsigned int v148; // r4
  unsigned int v149; // lr
  unsigned int v150; // r7
  int v151; // r6
  unsigned int v152; // r5

  v2 = result[1];
  v5 = HIWORD(*result);
  v3 = *a2 * v5;
  v4 = HIWORD(v2);
  LOWORD(v5) = 1 - *(_WORD *)a2 - v5;
  if ( v3 )
    v5 = (unsigned __int16)v3 - HIWORD(v3) - ((unsigned int)((unsigned __int16)v3 - HIWORD(v3)) >> 16);
  v6 = a2[3];
  v7 = v6 * (unsigned __int16)v2;
  v8 = *result + a2[1];
  LOWORD(v2) = 1 - v6 - v2;
  v9 = v4 + a2[2];
  if ( v7 )
    v2 = (unsigned __int16)v7 - HIWORD(v7) - ((unsigned int)((unsigned __int16)v7 - HIWORD(v7)) >> 16);
  v10 = a2[4];
  v11 = (unsigned __int16)(v5 ^ v9);
  if ( v10 * v11 )
    v12 = (unsigned __int16)(v10 * v11)
        - ((unsigned int)(v10 * v11) >> 16)
        - (((unsigned __int16)(v10 * v11) - ((unsigned int)(v10 * v11) >> 16)) >> 16);
  else
    v12 = 1 - v10 - v11;
  v13 = a2[5];
  v14 = (unsigned __int16)((v2 ^ v8) + v12);
  v15 = 1 - v13 - v14;
  if ( v13 * v14 )
    v15 = (unsigned __int16)(v13 * v14)
        - ((unsigned int)(v13 * v14) >> 16)
        - (((unsigned __int16)(v13 * v14) - ((unsigned int)(v13 * v14) >> 16)) >> 16);
  v22 = a2[6];
  v16 = (unsigned __int16)(v5 ^ v15);
  v17 = v12 + v15;
  v18 = v2 ^ v17;
  v19 = v8 ^ v17;
  v20 = v15 ^ v9;
  v21 = v22 * v16;
  LOWORD(v22) = 1 - v22 - v16;
  if ( v21 )
    v22 = (unsigned __int16)v21 - HIWORD(v21) - ((unsigned int)((unsigned __int16)v21 - HIWORD(v21)) >> 16);
  v23 = a2[9];
  v24 = v23 * v18;
  v25 = v20 + a2[7];
  LOWORD(v26) = 1 - v23 - v18;
  v27 = v19 + a2[8];
  if ( v24 )
    v26 = (unsigned __int16)v24 - HIWORD(v24) - ((unsigned int)((unsigned __int16)v24 - HIWORD(v24)) >> 16);
  v28 = a2[10];
  v29 = (unsigned __int16)(v22 ^ v27);
  if ( v28 * v29 )
    v30 = (unsigned __int16)(v28 * v29)
        - ((unsigned int)(v28 * v29) >> 16)
        - (((unsigned __int16)(v28 * v29) - ((unsigned int)(v28 * v29) >> 16)) >> 16);
  else
    v30 = 1 - v28 - v29;
  v31 = a2[11];
  v32 = (unsigned __int16)((v26 ^ v25) + v30);
  v33 = 1 - v31 - v32;
  if ( v31 * v32 )
    v33 = (unsigned __int16)(v31 * v32)
        - ((unsigned int)(v31 * v32) >> 16)
        - (((unsigned __int16)(v31 * v32) - ((unsigned int)(v31 * v32) >> 16)) >> 16);
  v40 = a2[12];
  v34 = (unsigned __int16)(v22 ^ v33);
  v35 = v30 + v33;
  v36 = v26 ^ v35;
  v37 = v25 ^ v35;
  v38 = v33 ^ v27;
  v39 = v40 * v34;
  LOWORD(v40) = 1 - v40 - v34;
  if ( v39 )
    v40 = (unsigned __int16)v39 - HIWORD(v39) - ((unsigned int)((unsigned __int16)v39 - HIWORD(v39)) >> 16);
  v41 = a2[15];
  v42 = v41 * v36;
  v43 = v38 + a2[13];
  LOWORD(v44) = 1 - v41 - v36;
  v45 = v37 + a2[14];
  if ( v42 )
    v44 = (unsigned __int16)v42 - HIWORD(v42) - ((unsigned int)((unsigned __int16)v42 - HIWORD(v42)) >> 16);
  v46 = a2[16];
  v47 = (unsigned __int16)(v40 ^ v45);
  if ( v46 * v47 )
    v48 = (unsigned __int16)(v46 * v47)
        - ((unsigned int)(v46 * v47) >> 16)
        - (((unsigned __int16)(v46 * v47) - ((unsigned int)(v46 * v47) >> 16)) >> 16);
  else
    v48 = 1 - v46 - v47;
  v49 = a2[17];
  v50 = (unsigned __int16)((v44 ^ v43) + v48);
  v51 = 1 - v49 - v50;
  if ( v49 * v50 )
    v51 = (unsigned __int16)(v49 * v50)
        - ((unsigned int)(v49 * v50) >> 16)
        - (((unsigned __int16)(v49 * v50) - ((unsigned int)(v49 * v50) >> 16)) >> 16);
  v58 = a2[18];
  v52 = (unsigned __int16)(v40 ^ v51);
  v53 = v48 + v51;
  v54 = v44 ^ v53;
  v55 = v43 ^ v53;
  v56 = v51 ^ v45;
  v57 = v58 * v52;
  LOWORD(v58) = 1 - v58 - v52;
  if ( v57 )
    v58 = (unsigned __int16)v57 - HIWORD(v57) - ((unsigned int)((unsigned __int16)v57 - HIWORD(v57)) >> 16);
  v59 = a2[21];
  v60 = v59 * v54;
  v61 = v56 + a2[19];
  LOWORD(v62) = 1 - v59 - v54;
  v63 = v55 + a2[20];
  if ( v60 )
    v62 = (unsigned __int16)v60 - HIWORD(v60) - ((unsigned int)((unsigned __int16)v60 - HIWORD(v60)) >> 16);
  v64 = a2[22];
  v65 = (unsigned __int16)(v58 ^ v63);
  if ( v64 * v65 )
    v66 = (unsigned __int16)(v64 * v65)
        - ((unsigned int)(v64 * v65) >> 16)
        - (((unsigned __int16)(v64 * v65) - ((unsigned int)(v64 * v65) >> 16)) >> 16);
  else
    v66 = 1 - v64 - v65;
  v67 = a2[23];
  v68 = (unsigned __int16)((v62 ^ v61) + v66);
  v69 = 1 - v67 - v68;
  if ( v67 * v68 )
    v69 = (unsigned __int16)(v67 * v68)
        - ((unsigned int)(v67 * v68) >> 16)
        - (((unsigned __int16)(v67 * v68) - ((unsigned int)(v67 * v68) >> 16)) >> 16);
  v76 = a2[24];
  v70 = (unsigned __int16)(v58 ^ v69);
  v71 = v66 + v69;
  v72 = v62 ^ v71;
  v73 = v61 ^ v71;
  v74 = v69 ^ v63;
  v75 = v76 * v70;
  LOWORD(v76) = 1 - v76 - v70;
  if ( v75 )
    v76 = (unsigned __int16)v75 - HIWORD(v75) - ((unsigned int)((unsigned __int16)v75 - HIWORD(v75)) >> 16);
  v77 = a2[27];
  v78 = v77 * v72;
  v79 = v74 + a2[25];
  LOWORD(v80) = 1 - v77 - v72;
  v81 = v73 + a2[26];
  if ( v78 )
    v80 = (unsigned __int16)v78 - HIWORD(v78) - ((unsigned int)((unsigned __int16)v78 - HIWORD(v78)) >> 16);
  v82 = a2[28];
  v83 = (unsigned __int16)(v76 ^ v81);
  if ( v82 * v83 )
    v84 = (unsigned __int16)(v82 * v83)
        - ((unsigned int)(v82 * v83) >> 16)
        - (((unsigned __int16)(v82 * v83) - ((unsigned int)(v82 * v83) >> 16)) >> 16);
  else
    v84 = 1 - v82 - v83;
  v85 = a2[29];
  v86 = (unsigned __int16)((v80 ^ v79) + v84);
  v87 = 1 - v85 - v86;
  if ( v85 * v86 )
    v87 = (unsigned __int16)(v85 * v86)
        - ((unsigned int)(v85 * v86) >> 16)
        - (((unsigned __int16)(v85 * v86) - ((unsigned int)(v85 * v86) >> 16)) >> 16);
  v94 = a2[30];
  v88 = (unsigned __int16)(v76 ^ v87);
  v89 = v84 + v87;
  v90 = v80 ^ v89;
  v91 = v79 ^ v89;
  v92 = v87 ^ v81;
  v93 = v94 * v88;
  LOWORD(v94) = 1 - v94 - v88;
  if ( v93 )
    v94 = (unsigned __int16)v93 - HIWORD(v93) - ((unsigned int)((unsigned __int16)v93 - HIWORD(v93)) >> 16);
  v95 = a2[33];
  v96 = v95 * v90;
  v97 = v92 + a2[31];
  LOWORD(v98) = 1 - v95 - v90;
  v99 = v91 + a2[32];
  if ( v96 )
    v98 = (unsigned __int16)v96 - HIWORD(v96) - ((unsigned int)((unsigned __int16)v96 - HIWORD(v96)) >> 16);
  v100 = a2[34];
  v101 = (unsigned __int16)(v94 ^ v99);
  if ( v100 * v101 )
    v102 = (unsigned __int16)(v100 * v101)
         - ((unsigned int)(v100 * v101) >> 16)
         - (((unsigned __int16)(v100 * v101) - ((unsigned int)(v100 * v101) >> 16)) >> 16);
  else
    v102 = 1 - v100 - v101;
  v103 = a2[35];
  v104 = (unsigned __int16)((v98 ^ v97) + v102);
  v105 = 1 - v103 - v104;
  if ( v103 * v104 )
    v105 = (unsigned __int16)(v103 * v104)
         - ((unsigned int)(v103 * v104) >> 16)
         - (((unsigned __int16)(v103 * v104) - ((unsigned int)(v103 * v104) >> 16)) >> 16);
  v112 = a2[36];
  v106 = (unsigned __int16)(v94 ^ v105);
  v107 = v102 + v105;
  v108 = v98 ^ v107;
  v109 = v97 ^ v107;
  v110 = v105 ^ v99;
  v111 = v112 * v106;
  LOWORD(v112) = 1 - v112 - v106;
  if ( v111 )
    v112 = (unsigned __int16)v111 - HIWORD(v111) - ((unsigned int)((unsigned __int16)v111 - HIWORD(v111)) >> 16);
  v113 = a2[39];
  v114 = v113 * v108;
  v115 = v110 + a2[37];
  LOWORD(v116) = 1 - v113 - v108;
  v117 = v109 + a2[38];
  if ( v114 )
    v116 = (unsigned __int16)v114 - HIWORD(v114) - ((unsigned int)((unsigned __int16)v114 - HIWORD(v114)) >> 16);
  v118 = a2[40];
  v119 = (unsigned __int16)(v112 ^ v117);
  if ( v118 * v119 )
    v120 = (unsigned __int16)(v118 * v119)
         - ((unsigned int)(v118 * v119) >> 16)
         - (((unsigned __int16)(v118 * v119) - ((unsigned int)(v118 * v119) >> 16)) >> 16);
  else
    v120 = 1 - v118 - v119;
  v121 = a2[41];
  v122 = (unsigned __int16)((v116 ^ v115) + v120);
  v123 = 1 - v121 - v122;
  if ( v121 * v122 )
    v123 = (unsigned __int16)(v121 * v122)
         - ((unsigned int)(v121 * v122) >> 16)
         - (((unsigned __int16)(v121 * v122) - ((unsigned int)(v121 * v122) >> 16)) >> 16);
  v130 = a2[42];
  v124 = (unsigned __int16)(v112 ^ v123);
  v125 = v120 + v123;
  v126 = v116 ^ v125;
  v127 = v115 ^ v125;
  v128 = v123 ^ v117;
  v129 = v130 * v124;
  LOWORD(v130) = 1 - v130 - v124;
  if ( v129 )
    v130 = (unsigned __int16)v129 - HIWORD(v129) - ((unsigned int)((unsigned __int16)v129 - HIWORD(v129)) >> 16);
  v131 = a2[45];
  v132 = v131 * v126;
  LOWORD(v133) = 1 - v131 - v126;
  v134 = v128 + a2[43];
  v135 = v127 + a2[44];
  if ( v132 )
    v133 = (unsigned __int16)v132 - HIWORD(v132) - ((unsigned int)((unsigned __int16)v132 - HIWORD(v132)) >> 16);
  v136 = a2[46];
  v137 = (unsigned __int16)(v130 ^ v135);
  if ( v136 * v137 )
    v138 = (unsigned __int16)(v136 * v137)
         - ((unsigned int)(v136 * v137) >> 16)
         - (((unsigned __int16)(v136 * v137) - ((unsigned int)(v136 * v137) >> 16)) >> 16);
  else
    LOWORD(v138) = 1 - v136 - v137;
  v139 = a2[47];
  v140 = (unsigned __int16)((v133 ^ v134) + v138);
  v141 = 1 - v139 - v140;
  if ( v139 * v140 )
    v141 = (unsigned __int16)(v139 * v140)
         - ((unsigned int)(v139 * v140) >> 16)
         - (((unsigned __int16)(v139 * v140) - ((unsigned int)(v139 * v140) >> 16)) >> 16);
  v142 = a2[48];
  v143 = (unsigned __int16)(v130 ^ v141);
  v144 = v138 + v141;
  v145 = v133 ^ v144;
  v146 = v141 ^ v135;
  v147 = v134 ^ v144;
  if ( v142 * v143 )
  {
    v148 = (unsigned __int16)(v142 * v143) - ((unsigned int)(v142 * v143) >> 16);
    v149 = v148 - HIWORD(v148);
  }
  else
  {
    v149 = 1 - v142 - v143;
  }
  v152 = a2[51];
  v150 = v152 * v145;
  v151 = v146 + a2[50];
  LOWORD(v152) = 1 - v152 - v145;
  if ( v150 )
    v152 = (unsigned __int16)v150 - HIWORD(v150) - ((unsigned int)((unsigned __int16)v150 - HIWORD(v150)) >> 16);
  *result = (unsigned __int16)(a2[49] + v147) | (v149 << 16);
  result[1] = (unsigned __int16)v152 | (v151 << 16);
  return result;
}
