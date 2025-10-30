unsigned int __fastcall sub_E466C(
        unsigned int result,
        _BYTE *a2,
        unsigned int a3,
        int a4,
        char *a5,
        _DWORD *a6,
        int *a7,
        void (__fastcall *a8)(char *, _DWORD *, int))
{
  char *v8; // r7
  unsigned int v10; // r6
  int v11; // r9
  bool v12; // zf
  char v13; // r3
  char v14; // r2
  char v15; // t1
  int v16; // r3
  _BYTE *v17; // r9
  _BYTE *v18; // r10
  int v19; // r12
  int v20; // lr
  unsigned int v21; // r2
  int v22; // r1
  unsigned int v23; // r12
  int v24; // r2
  int v25; // r0
  unsigned int v26; // lr
  int v27; // r12
  unsigned int v28; // r1
  int v29; // lr
  unsigned int v30; // r2
  int v31; // r1
  unsigned int v32; // r0
  int v33; // r2
  unsigned int v34; // r12
  int v35; // r0
  unsigned int v36; // lr
  int v37; // r12
  unsigned int v38; // r1
  int v39; // lr
  unsigned int v40; // r2
  int v41; // r1
  unsigned int v42; // r0
  int v43; // r2
  unsigned int v44; // r12
  int v45; // r0
  unsigned int v46; // lr
  unsigned int v47; // r1
  unsigned int v48; // r2
  unsigned int v49; // r3
  int v50; // r5
  _BYTE *v51; // r8
  char *v52; // r6
  char v53; // t1
  char v54; // r3
  int v55; // r0
  unsigned int v56; // r12
  int v57; // r3
  unsigned int v58; // r1
  int v59; // lr
  unsigned int v60; // r0
  int v61; // r1
  int v62; // r10
  unsigned int v63; // r3
  int v64; // r0
  unsigned int v65; // lr
  int v66; // r3
  unsigned int v67; // r1
  int v68; // lr
  unsigned int v69; // r0
  int v70; // r1
  unsigned int v71; // r3
  int v72; // r0
  unsigned int v73; // lr
  int v74; // r3
  unsigned int v75; // r1
  int v76; // lr
  unsigned int v77; // r0
  int v78; // r1
  unsigned int v79; // r3
  unsigned int v80; // lr
  int v81; // r0
  unsigned int v82; // r1
  unsigned int v83; // r10
  char *v84; // r3
  bool v85; // lr
  int v86; // r0
  bool v87; // r1
  char v88; // r11
  int *v89; // r2
  bool v90; // lr
  bool v91; // lr
  int v92; // r1
  unsigned int v93; // lr
  unsigned int v94; // r4
  int v95; // r10
  char *v96; // r3
  char *v97; // r12
  int v98; // r11
  int v99; // t1
  int v100; // t1
  int v101; // r3
  int v102; // r6
  int v103; // r2
  int v104; // r3
  int v105; // lr
  int v106; // r1
  unsigned int v107; // r3
  int v108; // r2
  unsigned int v109; // lr
  int v110; // r3
  int v111; // r0
  unsigned int v112; // r1
  int v113; // lr
  unsigned int v114; // r2
  int v115; // r1
  unsigned int v116; // r3
  int v117; // r2
  unsigned int v118; // r0
  int v119; // r3
  unsigned int v120; // lr
  int v121; // r0
  unsigned int v122; // r1
  int v123; // lr
  unsigned int v124; // r2
  int v125; // r1
  unsigned int v126; // r3
  int v127; // r2
  unsigned int v128; // r0
  int v129; // r3
  unsigned int v130; // lr
  int v131; // r0
  unsigned int v132; // r1
  unsigned int v133; // r2
  unsigned int v134; // r3
  unsigned __int8 *v135; // r12
  int v136; // r6
  char *v137; // r7
  char v138; // r1
  char v139; // t1
  unsigned int v140; // t1
  int v142; // [sp+4h] [bp-10h]
  char *v143; // [sp+8h] [bp-Ch]
  unsigned int v144; // [sp+Ch] [bp-8h]

  v8 = (char *)result;
  v10 = a3;
  v11 = *a7;
  v12 = *a7 == 0;
  if ( *a7 )
    v12 = a3 == 0;
  if ( !v12 )
  {
    do
    {
      result = *((unsigned __int8 *)a6 + v11);
      v13 = (v11 + 1) & 0xF;
      v15 = *v8++;
      v14 = v15;
      if ( ((v11 + 1) & 0xF) != 0 )
        v13 = 1;
      --v10;
      v16 = v13 & 1;
      if ( !v10 )
        v16 = 0;
      v11 = ((_BYTE)v11 + 1) & 0xF;
      *a2++ = v14 ^ result;
    }
    while ( v16 );
  }
  v142 = ((unsigned __int8)((unsigned __int8)a2 | (unsigned __int8)v8) | (unsigned __int8)a6) & 3;
  if ( (((unsigned __int8)((unsigned __int8)a2 | (unsigned __int8)v8) | (unsigned __int8)a6) & 3) == 0 )
  {
    if ( v10 > 0xF )
    {
      v17 = v8 + 16;
      v18 = a2 + 16;
      v144 = v10;
      do
      {
        v10 -= 16;
        a8(a5, a6, a4);
        v19 = (unsigned __int8)a5[14];
        v17 += 16;
        v20 = (unsigned __int8)a5[13];
        v18 += 16;
        v21 = (unsigned __int8)a5[15] + 1;
        v22 = (unsigned __int8)a5[12];
        a5[15] = v21;
        v23 = v19 + (v21 >> 8);
        v24 = (unsigned __int8)a5[11];
        v25 = (unsigned __int8)a5[10];
        v26 = v20 + (v23 >> 8);
        a5[14] = v23;
        v27 = (unsigned __int8)a5[9];
        v28 = v22 + (v26 >> 8);
        a5[13] = v26;
        v29 = (unsigned __int8)a5[8];
        v30 = v24 + (v28 >> 8);
        a5[12] = v28;
        v31 = (unsigned __int8)a5[7];
        v32 = v25 + (v30 >> 8);
        a5[11] = v30;
        v33 = (unsigned __int8)a5[6];
        v34 = v27 + (v32 >> 8);
        a5[10] = v32;
        v35 = (unsigned __int8)a5[5];
        v36 = v29 + (v34 >> 8);
        a5[9] = v34;
        v37 = (unsigned __int8)a5[4];
        v38 = v31 + (v36 >> 8);
        a5[8] = v36;
        v39 = (unsigned __int8)a5[3];
        v40 = v33 + (v38 >> 8);
        a5[7] = v38;
        v41 = (unsigned __int8)a5[2];
        v42 = v35 + (v40 >> 8);
        a5[6] = v40;
        v43 = (unsigned __int8)a5[1];
        v44 = v37 + (v42 >> 8);
        a5[5] = v42;
        v45 = (unsigned __int8)*a5;
        v46 = v39 + (v44 >> 8);
        a5[4] = v44;
        v47 = v41 + (v46 >> 8);
        a5[3] = v46;
        v48 = v43 + (v47 >> 8);
        a5[2] = v47;
        result = v45 + (v48 >> 8);
        a5[1] = v48;
        *a5 = result;
        *((_DWORD *)v18 - 8) = *a6 ^ *((_DWORD *)v17 - 8);
        *((_DWORD *)v18 - 7) = a6[1] ^ *((_DWORD *)v17 - 7);
        *((_DWORD *)v18 - 6) = a6[2] ^ *((_DWORD *)v17 - 6);
        *((_DWORD *)v18 - 5) = a6[3] ^ *((_DWORD *)v17 - 5);
      }
      while ( v10 > 0xF );
      v11 = 0;
      v10 = v144 & 0xF;
      v49 = ((v144 - 16) & 0xFFFFFFF0) + 16;
      a2 += v49;
      v8 += v49;
    }
    if ( !v10 )
      goto LABEL_15;
    a8(a5, a6, a4);
    v55 = (unsigned __int8)a5[14];
    v56 = (unsigned int)&a2[v11 + 4];
    v57 = (unsigned __int8)a5[13];
    v58 = (unsigned __int8)a5[15] + 1;
    v59 = (unsigned __int8)a5[12];
    a5[15] = v58;
    v60 = v55 + (v58 >> 8);
    v61 = (unsigned __int8)a5[11];
    v62 = (unsigned __int8)a5[2];
    v63 = v57 + (v60 >> 8);
    a5[14] = v60;
    v64 = (unsigned __int8)a5[10];
    v65 = v59 + (v63 >> 8);
    a5[13] = v63;
    v66 = (unsigned __int8)a5[9];
    v67 = v61 + (v65 >> 8);
    a5[12] = v65;
    v68 = (unsigned __int8)a5[8];
    v69 = v64 + (v67 >> 8);
    a5[11] = v67;
    v70 = (unsigned __int8)a5[7];
    v71 = v66 + (v69 >> 8);
    a5[10] = v69;
    v72 = (unsigned __int8)a5[6];
    v73 = v68 + (v71 >> 8);
    a5[9] = v71;
    v74 = (unsigned __int8)a5[5];
    v75 = v70 + (v73 >> 8);
    a5[8] = v73;
    v76 = (unsigned __int8)a5[4];
    v77 = v72 + (v75 >> 8);
    a5[7] = v75;
    v78 = (unsigned __int8)a5[3];
    v79 = v74 + (v77 >> 8);
    a5[6] = v77;
    v80 = v76 + (v79 >> 8);
    v81 = (unsigned __int8)a5[1];
    v82 = v78 + (v80 >> 8);
    v143 = (char *)a6 + v11;
    v83 = v62 + (v82 >> 8);
    a5[5] = v79;
    v84 = &v8[v11];
    a5[4] = v80;
    v85 = v56 <= (unsigned int)a6 + v11;
    a5[3] = v82;
    v86 = v81 + (v83 >> 8);
    v87 = v56 <= (unsigned int)&v8[v11];
    v88 = *a5;
    a5[2] = v83;
    v89 = (int *)&a2[v11];
    a5[1] = v86;
    if ( &a2[v11] >= (_BYTE *)a6 + v11 + 4 )
      v85 = 1;
    if ( v89 >= (int *)&v8[v11 + 4] )
      v87 = 1;
    v90 = v85 && v87;
    v91 = v10 > 6 && v90;
    v92 = v91;
    *a5 = v88 + BYTE1(v86);
    v93 = v10 - 1;
    if ( (((unsigned __int8)v89 | (unsigned __int8)((unsigned __int8)v143 | (unsigned __int8)v84)) & 3) != 0 )
      v92 = 0;
    if ( !v92 )
    {
      v135 = (unsigned __int8 *)a6 + v11;
      v136 = v10 + v11;
      v137 = &v8[v136];
      do
      {
        v139 = *v84++;
        v138 = v139;
        v140 = *v135++;
        result = v140;
        *(_BYTE *)v89 = v138 ^ v140;
        v89 = (int *)((char *)v89 + 1);
      }
      while ( v84 != v137 );
      v11 = v136;
      goto LABEL_15;
    }
    v94 = ((v10 - 4) >> 2) + 1;
    v95 = 4 * v94;
    if ( v93 <= 2 )
    {
      v101 = v11;
    }
    else
    {
      v96 = v84 - 4;
      result = v142;
      v97 = v143 - 4;
      do
      {
        v99 = *((_DWORD *)v96 + 1);
        v96 += 4;
        v98 = v99;
        ++result;
        v100 = *((_DWORD *)v97 + 1);
        v97 += 4;
        *v89++ = v98 ^ v100;
      }
      while ( v94 > result );
      v101 = v95 + v11;
      v93 -= v95;
      if ( v95 == v10 )
      {
        v102 = v95 + v11;
LABEL_40:
        v11 = v102;
        goto LABEL_15;
      }
    }
    result = *((unsigned __int8 *)a6 + v101);
    v103 = v101 + 1;
    a2[v101] = v8[v101] ^ result;
    if ( !v93
      || (result = (unsigned __int8)v8[v103], v104 = v101 + 2, a2[v103] = *((_BYTE *)a6 + v103) ^ result, v93 == 1) )
    {
      v11 += v10;
      goto LABEL_15;
    }
    v102 = v10 + v11;
    a2[v104] = v8[v104] ^ *((_BYTE *)a6 + v104);
    goto LABEL_40;
  }
  if ( !v10 )
  {
LABEL_15:
    *a7 = v11;
    return result;
  }
  v50 = v11;
  v51 = a2 - 1;
  v52 = &v8[v10];
  do
  {
    if ( !v50 )
    {
      a8(a5, a6, a4);
      v105 = (unsigned __int8)a5[14];
      v106 = (unsigned __int8)a5[13];
      v107 = (unsigned __int8)a5[15] + 1;
      v108 = (unsigned __int8)a5[12];
      a5[15] = v107;
      v109 = v105 + (v107 >> 8);
      v110 = (unsigned __int8)a5[11];
      v111 = (unsigned __int8)a5[10];
      v112 = v106 + (v109 >> 8);
      a5[14] = v109;
      v113 = (unsigned __int8)a5[9];
      v114 = v108 + (v112 >> 8);
      a5[13] = v112;
      v115 = (unsigned __int8)a5[8];
      v116 = v110 + (v114 >> 8);
      a5[12] = v114;
      v117 = (unsigned __int8)a5[7];
      v118 = v111 + (v116 >> 8);
      a5[11] = v116;
      v119 = (unsigned __int8)a5[6];
      v120 = v113 + (v118 >> 8);
      a5[10] = v118;
      v121 = (unsigned __int8)a5[5];
      v122 = v115 + (v120 >> 8);
      a5[9] = v120;
      v123 = (unsigned __int8)a5[4];
      v124 = v117 + (v122 >> 8);
      a5[8] = v122;
      v125 = (unsigned __int8)a5[3];
      v126 = v119 + (v124 >> 8);
      a5[7] = v124;
      v127 = (unsigned __int8)a5[2];
      v128 = v121 + (v126 >> 8);
      a5[6] = v126;
      v129 = (unsigned __int8)a5[1];
      v130 = v123 + (v128 >> 8);
      a5[5] = v128;
      v131 = (unsigned __int8)*a5;
      v132 = v125 + (v130 >> 8);
      a5[4] = v130;
      v133 = v127 + (v132 >> 8);
      a5[3] = v132;
      v134 = v129 + (v133 >> 8);
      a5[2] = v133;
      result = v131 + (v134 >> 8);
      a5[1] = v134;
      *a5 = result;
    }
    v53 = *v8++;
    v54 = *((_BYTE *)a6 + v50);
    v50 = (v50 + 1) & 0xF;
    *++v51 = v54 ^ v53;
  }
  while ( v52 != v8 );
  *a7 = v50;
  return result;
}
