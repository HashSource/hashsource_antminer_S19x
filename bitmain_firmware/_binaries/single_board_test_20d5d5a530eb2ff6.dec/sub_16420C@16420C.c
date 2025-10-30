bool __fastcall sub_16420C(int a1, char *s, size_t a3, int *a4, unsigned int a5)
{
  int *v5; // r9
  bool v9; // zf
  int v10; // r3
  unsigned __int8 *src; // r5
  int v12; // r2
  int v13; // r1
  unsigned int v14; // lr
  int v15; // r5
  unsigned int v16; // r2
  int v17; // lr
  unsigned int v18; // r1
  int v19; // r2
  unsigned int v20; // r5
  int v21; // r1
  unsigned int v22; // lr
  int v23; // r5
  unsigned int v24; // r2
  int v25; // lr
  unsigned int v26; // r1
  int v27; // r2
  unsigned int v28; // r5
  int v29; // r1
  unsigned int v30; // lr
  int v31; // r5
  unsigned int v32; // r2
  int v33; // lr
  unsigned int v34; // r1
  int v35; // r2
  unsigned int v36; // r5
  int v37; // r1
  unsigned int v38; // lr
  unsigned int v39; // r2
  int v40; // r1
  unsigned int v41; // r3
  int v42; // r2
  int v43; // r3
  unsigned int v44; // r1
  int v45; // r0
  unsigned int v46; // r2
  int v47; // r1
  unsigned int v48; // r3
  int v49; // r2
  unsigned int v50; // r0
  int v51; // r3
  unsigned int v52; // r1
  int v53; // r0
  unsigned int v54; // r2
  int v55; // r1
  unsigned int v56; // r3
  int v57; // r2
  unsigned int v58; // r0
  int v59; // r3
  unsigned int v60; // r1
  int v61; // r0
  unsigned int v62; // r2
  int v63; // r1
  unsigned int v64; // r3
  int v65; // r2
  unsigned int v66; // r0
  int v67; // r3
  unsigned int v68; // r1
  unsigned int v69; // r2
  int v70; // r3
  int v71; // r0
  int v72; // r3
  unsigned int v73; // r4
  int v74; // lr
  int v75; // r6
  unsigned int v76; // r12
  unsigned int v77; // r4
  int v78; // r3
  unsigned int v79; // lr
  int v80; // r4
  unsigned int v81; // r6
  int v82; // lr
  unsigned int v83; // r3
  int v84; // r6
  unsigned int v85; // r4
  int v86; // r3
  unsigned int v87; // lr
  int v88; // r4
  unsigned int v89; // r6
  int v90; // lr
  unsigned int v91; // r3
  int v92; // r6
  unsigned int v93; // r4
  int v94; // r3
  unsigned int v95; // lr
  int v96; // r4
  unsigned int v97; // r6
  unsigned int v98; // r3
  int v99; // r4
  _DWORD *v101; // r0
  char *v102; // r3
  int v103; // r12
  int v104; // r1
  signed int v105; // r6
  int v106; // r3
  unsigned __int8 v107; // r1
  unsigned __int8 v108; // lr
  unsigned int v109; // r2
  unsigned __int8 v110; // r10
  bool v111; // cf
  unsigned int v112; // r3
  unsigned int v113; // r11
  int v114; // r2
  int v115; // r12
  int v116; // r3
  int v117; // r0
  unsigned int v118; // r2
  unsigned int v119; // r2
  int v120; // r12
  unsigned int v121; // r3
  int v122; // r2
  unsigned int v123; // r0
  int v124; // r3
  unsigned int v125; // r12
  int v126; // r0
  unsigned int v127; // r2
  int v128; // r12
  unsigned int v129; // r3
  int v130; // r2
  unsigned int v131; // r0
  int v132; // r3
  unsigned int v133; // r12
  unsigned int v134; // r2
  int v135; // r3
  int v136; // [sp+14h] [bp-8h] BYREF
  unsigned int v137; // [sp+40h] [bp+24h]

  v5 = a4;
  v9 = a4 == 0;
  if ( a4 )
    v9 = a5 == 0;
  v10 = !v9;
  if ( v9 )
  {
    v137 = v10;
    src = (unsigned __int8 *)(a1 + 156);
  }
  else
  {
    v12 = *(unsigned __int8 *)(a1 + 170);
    v13 = *(unsigned __int8 *)(a1 + 169);
    v14 = *(unsigned __int8 *)(a1 + 171) + 1;
    v15 = *(unsigned __int8 *)(a1 + 168);
    *(_BYTE *)(a1 + 171) = v14;
    v16 = v12 + (v14 >> 8);
    v17 = *(unsigned __int8 *)(a1 + 167);
    v18 = v13 + (v16 >> 8);
    *(_BYTE *)(a1 + 170) = v16;
    v19 = *(unsigned __int8 *)(a1 + 166);
    v20 = v15 + (v18 >> 8);
    *(_BYTE *)(a1 + 169) = v18;
    v21 = *(unsigned __int8 *)(a1 + 165);
    v22 = v17 + (v20 >> 8);
    *(_BYTE *)(a1 + 168) = v20;
    v23 = *(unsigned __int8 *)(a1 + 164);
    v24 = v19 + (v22 >> 8);
    *(_BYTE *)(a1 + 167) = v22;
    v25 = *(unsigned __int8 *)(a1 + 163);
    v26 = v21 + (v24 >> 8);
    *(_BYTE *)(a1 + 166) = v24;
    v27 = *(unsigned __int8 *)(a1 + 162);
    v28 = v23 + (v26 >> 8);
    *(_BYTE *)(a1 + 165) = v26;
    v29 = *(unsigned __int8 *)(a1 + 161);
    v30 = v25 + (v28 >> 8);
    *(_BYTE *)(a1 + 164) = v28;
    v31 = *(unsigned __int8 *)(a1 + 160);
    v32 = v27 + (v30 >> 8);
    *(_BYTE *)(a1 + 163) = v30;
    v33 = *(unsigned __int8 *)(a1 + 159);
    v34 = v29 + (v32 >> 8);
    *(_BYTE *)(a1 + 162) = v32;
    v35 = *(unsigned __int8 *)(a1 + 158);
    v36 = v31 + (v34 >> 8);
    *(_BYTE *)(a1 + 161) = v34;
    v37 = *(unsigned __int8 *)(a1 + 157);
    v38 = v33 + (v36 >> 8);
    *(_BYTE *)(a1 + 160) = v36;
    LOBYTE(v36) = *(_BYTE *)(a1 + 156);
    v39 = v35 + (v38 >> 8);
    *(_BYTE *)(a1 + 159) = v38;
    v40 = v37 + (v39 >> 8);
    *(_BYTE *)(a1 + 158) = v39;
    *(_BYTE *)(a1 + 157) = v40;
    *(_BYTE *)(a1 + 156) = v36 + BYTE1(v40);
    src = (unsigned __int8 *)(a1 + 156);
    if ( !sub_163170(a1, v5, a5, 0, 0, 0, 0) )
      return 0;
    v41 = a5;
    if ( (*(_WORD *)(a1 + 20) & 1) == 0 )
    {
      v5 = 0;
      v41 = 1;
    }
    v137 = v41;
  }
  v42 = src[14];
  v43 = src[13];
  v44 = src[15] + 1;
  v45 = src[12];
  src[15] = v44;
  v46 = v42 + (v44 >> 8);
  v47 = src[11];
  v48 = v43 + (v46 >> 8);
  src[14] = v46;
  v49 = src[10];
  v50 = v45 + (v48 >> 8);
  src[13] = v48;
  v51 = src[9];
  v52 = v47 + (v50 >> 8);
  src[12] = v50;
  v53 = src[8];
  v54 = v49 + (v52 >> 8);
  src[11] = v52;
  v55 = src[7];
  v56 = v51 + (v54 >> 8);
  src[10] = v54;
  v57 = src[6];
  v58 = v53 + (v56 >> 8);
  src[9] = v56;
  v59 = src[5];
  v60 = v55 + (v58 >> 8);
  src[8] = v58;
  v61 = src[4];
  v62 = v57 + (v60 >> 8);
  src[7] = v60;
  v63 = src[3];
  v64 = v59 + (v62 >> 8);
  src[6] = v62;
  v65 = src[2];
  v66 = v61 + (v64 >> 8);
  src[5] = v64;
  v67 = src[1];
  v68 = v63 + (v66 >> 8);
  src[4] = v66;
  LOBYTE(v66) = *src;
  v69 = v65 + (v68 >> 8);
  src[3] = v68;
  v70 = v67 + (v69 >> 8);
  src[2] = v69;
  src[1] = v70;
  *src = v66 + BYTE1(v70);
  if ( a3 )
  {
    memset(s, 0, a3);
    while ( 1 )
    {
      v105 = a3;
      if ( a3 >= 0x40000000 )
        v105 = 0x40000000;
      if ( !sub_D8440(*(int **)(a1 + 104), 0, 0, 0, src, -1) )
        break;
      v106 = (v105 + 15) >> 4;
      v107 = 0;
      v108 = 0;
      v109 = bswap32(*(_DWORD *)(a1 + 168));
      v110 = 0;
      v111 = __CFADD__(v106, v109);
      v112 = v106 + v109;
      LOBYTE(v113) = 0;
      if ( v111 )
      {
        v114 = -v109;
        if ( v112 )
          v105 = 16 * v114;
        v115 = *(unsigned __int8 *)(a1 + 166);
        v116 = *(unsigned __int8 *)(a1 + 165);
        v117 = *(unsigned __int8 *)(a1 + 164);
        v118 = *(unsigned __int8 *)(a1 + 167) + 1;
        *(_BYTE *)(a1 + 167) = v118;
        v119 = v115 + (v118 >> 8);
        v120 = *(unsigned __int8 *)(a1 + 163);
        v121 = v116 + (v119 >> 8);
        *(_BYTE *)(a1 + 166) = v119;
        v122 = *(unsigned __int8 *)(a1 + 162);
        v123 = v117 + (v121 >> 8);
        *(_BYTE *)(a1 + 165) = v121;
        v124 = *(unsigned __int8 *)(a1 + 161);
        v125 = v120 + (v123 >> 8);
        *(_BYTE *)(a1 + 164) = v123;
        v126 = *(unsigned __int8 *)(a1 + 160);
        v127 = v122 + (v125 >> 8);
        *(_BYTE *)(a1 + 163) = v125;
        v128 = *(unsigned __int8 *)(a1 + 159);
        v129 = v124 + (v127 >> 8);
        *(_BYTE *)(a1 + 162) = v127;
        v130 = *(unsigned __int8 *)(a1 + 158);
        v131 = v126 + (v129 >> 8);
        *(_BYTE *)(a1 + 161) = v129;
        v132 = *(unsigned __int8 *)(a1 + 157);
        v133 = v128 + (v131 >> 8);
        *(_BYTE *)(a1 + 160) = v131;
        LOBYTE(v131) = *(_BYTE *)(a1 + 156);
        v134 = v130 + (v133 >> 8);
        *(_BYTE *)(a1 + 159) = v133;
        v135 = v132 + (v134 >> 8);
        *(_BYTE *)(a1 + 158) = v134;
        *(_BYTE *)(a1 + 157) = v135;
        *(_BYTE *)(a1 + 156) = v131 + BYTE1(v135);
      }
      else
      {
        v113 = HIBYTE(v112);
        v107 = v112;
        v110 = BYTE2(v112);
        v108 = BYTE1(v112);
      }
      v101 = *(_DWORD **)(a1 + 104);
      v102 = s;
      v103 = (unsigned __int8)v113 | (unsigned __int16)(v110 << 8) | (v108 << 16) & 0xFFFFFF | (v107 << 24);
      v104 = (int)s;
      *(_DWORD *)(a1 + 168) = v103;
      s += v105;
      if ( !sub_D8188(v101, v104, &v136, v102, v105) || v105 != v136 )
        break;
      a3 -= v105;
      if ( !a3 )
        return sub_163170(a1, v5, v137, 0, 0, 0, 0);
    }
    return 0;
  }
  v71 = a1;
  v72 = src[13];
  v73 = src[15] + 1;
  v74 = src[12];
  v75 = src[11];
  v76 = src[14] + (v73 >> 8);
  src[15] = v73;
  v77 = v72 + (v76 >> 8);
  v78 = src[10];
  src[14] = v76;
  v79 = v74 + (v77 >> 8);
  src[13] = v77;
  v80 = src[9];
  v81 = v75 + (v79 >> 8);
  src[12] = v79;
  v82 = src[8];
  v83 = v78 + (v81 >> 8);
  src[11] = v81;
  v84 = src[7];
  v85 = v80 + (v83 >> 8);
  src[10] = v83;
  v86 = src[6];
  v87 = v82 + (v85 >> 8);
  src[9] = v85;
  v88 = src[5];
  v89 = v84 + (v87 >> 8);
  src[8] = v87;
  v90 = src[4];
  v91 = v86 + (v89 >> 8);
  src[7] = v89;
  v92 = src[3];
  v93 = v88 + (v91 >> 8);
  src[6] = v91;
  v94 = src[2];
  v95 = v90 + (v93 >> 8);
  src[5] = v93;
  v96 = src[1];
  v97 = v92 + (v95 >> 8);
  src[4] = v95;
  LOBYTE(v95) = *src;
  v98 = v94 + (v97 >> 8);
  src[3] = v97;
  v99 = v96 + (v98 >> 8);
  src[2] = v98;
  src[1] = v99;
  *src = v95 + BYTE1(v99);
  return sub_163170(v71, v5, v137, 0, 0, 0, 0);
}
