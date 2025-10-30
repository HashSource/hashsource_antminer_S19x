unsigned int __fastcall sub_E3C68(
        unsigned int result,
        unsigned int a2,
        unsigned int a3,
        int a4,
        int a5,
        unsigned int *a6,
        int a7,
        int (__fastcall *a8)(int, int, int))
{
  unsigned int v8; // r8
  unsigned int v10; // r6
  unsigned int v11; // r4
  bool v12; // zf
  unsigned int v13; // t1
  char v14; // r3
  int v15; // r3
  unsigned int v16; // r7
  unsigned int v17; // r9
  unsigned int v18; // lr
  unsigned int v19; // r1
  unsigned int v20; // r2
  int v21; // r3
  int v22; // r4
  int v23; // r4
  unsigned int v24; // r3
  int v25; // r6
  int v26; // r2
  bool v27; // zf
  unsigned int v28; // t1
  char v29; // r3
  int v30; // r3
  char v31; // r2
  unsigned int v32; // r11
  unsigned int v33; // r9
  unsigned int v34; // r7
  unsigned int v35; // lr
  unsigned int v36; // r3
  int v37; // r2
  int v38; // r2
  int v39; // r2
  int v40; // r2
  unsigned int v41; // r3
  unsigned int v42; // r9
  int v43; // r2
  int v44; // r6
  unsigned int v45; // r12
  unsigned int v46; // r2
  unsigned int v47; // r1
  _BYTE *v48; // lr
  unsigned int v49; // r9
  _BYTE *v50; // r3
  bool v51; // cc
  char v52; // r11
  bool v53; // cc
  unsigned int v54; // r7
  char v55; // r1
  char v56; // r1
  bool v57; // cc
  char v58; // r3
  unsigned __int8 v59; // r1
  int v60; // r3
  int v61; // r3
  unsigned int v62; // r9
  int v63; // r3
  int v64; // r3
  unsigned int v65; // r3
  unsigned int v66; // r1
  char v67; // r2
  unsigned int v68; // r3
  char v69; // r2
  char v70; // r2
  _BYTE *v71; // r10
  _BYTE *v72; // r6
  char v73; // t1
  char v74; // r3
  _BYTE *v75; // r10
  _BYTE *v76; // r6
  char v77; // t1
  unsigned int v78; // r12
  _BYTE *v79; // lr
  _BYTE *v80; // r2
  unsigned int v81; // r9
  unsigned int v82; // r3
  bool v83; // cf
  unsigned int v84; // r1
  char v85; // r11
  bool v86; // cf
  unsigned int v87; // r7
  char v88; // r2
  char v89; // r2
  bool v90; // cf
  char v91; // r3
  unsigned __int8 v92; // r2
  int v93; // r3
  int v94; // r9
  unsigned int v95; // r2
  int v96; // r9
  int v97; // lr
  unsigned int v98; // r3
  char v99; // r7
  unsigned int v100; // r2
  char v101; // r7
  unsigned int v102; // r3
  char v103; // r1
  unsigned int v104; // r3
  char v105; // r2
  unsigned int v106; // r2
  char v107; // r1
  unsigned int v108; // r3
  char v109; // r1
  char v110; // r2
  unsigned int v111; // r2
  char v112; // r3
  unsigned int v113; // r3
  char v114; // r1
  unsigned int v115; // r2
  char v116; // r1
  unsigned int v117; // r3
  char v118; // r1
  unsigned int v119; // r2
  char v120; // r1
  unsigned int v121; // r3
  char v122; // r1
  unsigned int v123; // r2
  char v124; // r1
  unsigned int v125; // r3
  char v126; // r1
  unsigned int v127; // r2
  char v128; // r1
  char v129; // r1
  char v130; // r1
  unsigned int v131; // r3
  unsigned int v132; // r2
  unsigned int v133; // r3
  char v134; // r1
  char v135; // r1
  unsigned int v136; // r2
  unsigned int v137; // r3
  unsigned int v138; // r2
  unsigned int v139; // r3
  unsigned int v140; // r2
  unsigned int v141; // r3
  unsigned int v142; // r2
  unsigned int v143; // r3
  unsigned int v144; // r2
  unsigned int v146; // [sp+Ch] [bp-8h]

  v8 = result;
  v10 = a3;
  v11 = *a6;
  if ( a7 )
  {
    v27 = v11 == 0;
    if ( v11 )
      v27 = a3 == 0;
    if ( !v27 )
    {
      do
      {
        v28 = *(unsigned __int8 *)v8++;
        result = v28;
        v29 = (v11 + 1) & 0xF;
        if ( ((v11 + 1) & 0xF) != 0 )
          v29 = 1;
        --v10;
        v30 = v29 & 1;
        if ( !v10 )
          v30 = 0;
        v31 = *(_BYTE *)(a5 + v11) ^ result;
        *(_BYTE *)(a5 + v11) = v31;
        v11 = ((_BYTE)v11 + 1) & 0xF;
        *(_BYTE *)a2++ = v31;
      }
      while ( v30 );
    }
    if ( (a2 | v8 | a5) << 30 )
    {
      if ( v10 )
      {
        v71 = (_BYTE *)(a2 - 1);
        v72 = (_BYTE *)(v10 + v8);
        if ( !v11 )
          goto LABEL_73;
        while ( 1 )
        {
          v73 = *(_BYTE *)v8++;
          v74 = *(_BYTE *)(a5 + v11) ^ v73;
          *(_BYTE *)(a5 + v11) = v74;
          v11 = (v11 + 1) & 0xF;
          *++v71 = v74;
          if ( v72 == (_BYTE *)v8 )
            break;
          if ( !v11 )
LABEL_73:
            result = a8(a5, a5, a4);
        }
      }
      goto LABEL_21;
    }
    if ( v10 <= 0xF )
    {
      if ( !v10 )
        goto LABEL_21;
      a8(a5, a5, a4);
      v44 = v10 - 1;
    }
    else
    {
      v32 = v10;
      v33 = a2;
      v34 = v8;
      do
      {
        a8(a5, a5, a4);
        v35 = v11 + 4;
        result = v11 + 8;
        v36 = v11 + 12;
        if ( v11 <= 0xF )
        {
          v37 = *(_DWORD *)(a5 + v11) ^ *(_DWORD *)(v34 + v11);
          *(_DWORD *)(a5 + v11) = v37;
          *(_DWORD *)(v33 + v11) = v37;
          if ( v35 <= 0xF )
          {
            v38 = *(_DWORD *)(a5 + v35) ^ *(_DWORD *)(v34 + v35);
            *(_DWORD *)(a5 + v35) = v38;
            *(_DWORD *)(v33 + v35) = v38;
            if ( result <= 0xF )
            {
              v39 = *(_DWORD *)(a5 + result) ^ *(_DWORD *)(v34 + result);
              *(_DWORD *)(a5 + result) = v39;
              *(_DWORD *)(v33 + result) = v39;
              if ( v36 <= 0xF )
              {
                v40 = *(_DWORD *)(a5 + v36) ^ *(_DWORD *)(v34 + v36);
                *(_DWORD *)(a5 + v36) = v40;
                *(_DWORD *)(v33 + v36) = v40;
              }
            }
          }
        }
        v32 -= 16;
        v33 += 16;
        v34 += 16;
        v11 = 0;
      }
      while ( v32 > 0xF );
      v41 = (v10 - 16) >> 4;
      v42 = v10 - 17;
      v25 = v10 & 0xF;
      v43 = 16 * (v41 + 1);
      a2 += v43;
      v8 += v43;
      if ( !v25 )
        goto LABEL_20;
      v44 = v42 - 16 * v41;
      a8(a5, a5, a4);
    }
    v45 = v11 + 4;
    v46 = a5 + v11;
    v47 = v8 + v11 + 4;
    v48 = (_BYTE *)(v8 + v11);
    v49 = a5 + v11 + 4;
    v50 = (_BYTE *)(a2 + v11 + 4);
    v51 = v47 > a5 + v11;
    if ( v47 > a5 + v11 )
      v51 = v49 > (unsigned int)v48;
    result = a2 + v11;
    v52 = !v51;
    v53 = v47 > result;
    if ( v47 > result )
      v53 = v50 > v48;
    v54 = v44 + 1;
    v55 = !v53;
    v56 = v52 & v55;
    v57 = (unsigned int)v50 > v46;
    if ( (unsigned int)v50 > v46 )
      v57 = v49 > result;
    v58 = !v57;
    if ( v54 > 6 )
      v59 = v56 & 1;
    else
      v59 = 0;
    v60 = (unsigned __int8)v58 & v59 & 1;
    if ( (((unsigned __int8)result | (unsigned __int8)((unsigned __int8)v48 | v46)) & 3) != 0 )
      v60 = 0;
    if ( v60 )
    {
      v61 = *(_DWORD *)(a5 + v11) ^ *(_DWORD *)(v8 + v11);
      *(_DWORD *)(a5 + v11) = v61;
      v62 = 4 * (((unsigned int)(v44 - 3) >> 2) + 1);
      *(_DWORD *)(a2 + v11) = v61;
      if ( (unsigned int)(v44 - 3) >> 2 )
      {
        v63 = *((_DWORD *)v48 + 1) ^ *(_DWORD *)(v46 + 4);
        *(_DWORD *)(v46 + 4) = v63;
        *(_DWORD *)(result + 4) = v63;
        if ( (unsigned int)(v44 - 3) >> 2 == 2 )
        {
          v64 = *(_DWORD *)(v46 + 8) ^ *((_DWORD *)v48 + 2);
          *(_DWORD *)(v46 + 8) = v64;
          *(_DWORD *)(result + 8) = v64;
        }
      }
      v65 = v11 + v62;
      result = v44 - v62;
      if ( v62 == v54 )
        goto LABEL_108;
      v66 = v65 + 1;
      v67 = *(_BYTE *)(a5 + v65) ^ *(_BYTE *)(v8 + v65);
      *(_BYTE *)(a5 + v65) = v67;
      *(_BYTE *)(a2 + v65) = v67;
      if ( !result )
        goto LABEL_108;
      v68 = v65 + 2;
      v69 = *(_BYTE *)(a5 + v66) ^ *(_BYTE *)(v8 + v66);
      *(_BYTE *)(a5 + v66) = v69;
      *(_BYTE *)(a2 + v66) = v69;
      if ( result == 1 )
        goto LABEL_108;
    }
    else
    {
      v104 = v11 + 1;
      v105 = *(_BYTE *)(a5 + v11) ^ *(_BYTE *)(v8 + v11);
      *(_BYTE *)(a5 + v11) = v105;
      *(_BYTE *)(a2 + v11) = v105;
      if ( !v44 )
        goto LABEL_108;
      result = *(unsigned __int8 *)(v8 + v104);
      v106 = v11 + 2;
      v107 = *(_BYTE *)(a5 + v104) ^ result;
      *(_BYTE *)(a5 + v104) = v107;
      *(_BYTE *)(a2 + v104) = v107;
      if ( v44 == 1 )
        goto LABEL_108;
      result = *(unsigned __int8 *)(v8 + v106);
      v108 = v11 + 3;
      v109 = *(_BYTE *)(a5 + v106) ^ result;
      *(_BYTE *)(a5 + v106) = v109;
      *(_BYTE *)(a2 + v106) = v109;
      if ( v44 == 2 )
        goto LABEL_108;
      v110 = *(_BYTE *)(a5 + v108) ^ *(_BYTE *)(v8 + v108);
      *(_BYTE *)(a5 + v108) = v110;
      *(_BYTE *)(a2 + v108) = v110;
      if ( v44 == 3 )
        goto LABEL_108;
      v111 = v11 + 5;
      v112 = *(_BYTE *)(a5 + v45) ^ *(_BYTE *)(v8 + v45);
      *(_BYTE *)(a5 + v45) = v112;
      *(_BYTE *)(a2 + v45) = v112;
      if ( v44 == 4 )
        goto LABEL_108;
      result = *(unsigned __int8 *)(v8 + v111);
      v113 = v11 + 6;
      v114 = *(_BYTE *)(a5 + v111) ^ result;
      *(_BYTE *)(a5 + v111) = v114;
      *(_BYTE *)(a2 + v111) = v114;
      if ( v44 == 5 )
        goto LABEL_108;
      result = *(unsigned __int8 *)(v8 + v113);
      v115 = v11 + 7;
      v116 = *(_BYTE *)(a5 + v113) ^ result;
      *(_BYTE *)(a5 + v113) = v116;
      *(_BYTE *)(a2 + v113) = v116;
      if ( v44 == 6 )
        goto LABEL_108;
      result = *(unsigned __int8 *)(v8 + v115);
      v117 = v11 + 8;
      v118 = *(_BYTE *)(a5 + v115) ^ result;
      *(_BYTE *)(a5 + v115) = v118;
      *(_BYTE *)(a2 + v115) = v118;
      if ( v44 == 7 )
        goto LABEL_108;
      result = *(unsigned __int8 *)(v8 + v117);
      v119 = v11 + 9;
      v120 = *(_BYTE *)(a5 + v117) ^ result;
      *(_BYTE *)(a5 + v117) = v120;
      *(_BYTE *)(a2 + v117) = v120;
      if ( v44 == 8 )
        goto LABEL_108;
      result = *(unsigned __int8 *)(v8 + v119);
      v121 = v11 + 10;
      v122 = *(_BYTE *)(a5 + v119) ^ result;
      *(_BYTE *)(a5 + v119) = v122;
      *(_BYTE *)(a2 + v119) = v122;
      if ( v44 == 9 )
        goto LABEL_108;
      result = *(unsigned __int8 *)(v8 + v121);
      v123 = v11 + 11;
      v124 = *(_BYTE *)(a5 + v121) ^ result;
      *(_BYTE *)(a5 + v121) = v124;
      *(_BYTE *)(a2 + v121) = v124;
      if ( v44 == 10 )
        goto LABEL_108;
      result = *(unsigned __int8 *)(v8 + v123);
      v125 = v11 + 12;
      v126 = *(_BYTE *)(a5 + v123) ^ result;
      *(_BYTE *)(a5 + v123) = v126;
      *(_BYTE *)(a2 + v123) = v126;
      if ( v44 == 11 )
        goto LABEL_108;
      result = *(unsigned __int8 *)(v8 + v125);
      v127 = v11 + 13;
      v128 = *(_BYTE *)(a5 + v125) ^ result;
      *(_BYTE *)(a5 + v125) = v128;
      *(_BYTE *)(a2 + v125) = v128;
      if ( v44 == 12 )
        goto LABEL_108;
      result = *(unsigned __int8 *)(v8 + v127);
      v68 = v11 + 14;
      v129 = *(_BYTE *)(a5 + v127) ^ result;
      *(_BYTE *)(a5 + v127) = v129;
      *(_BYTE *)(a2 + v127) = v129;
      if ( v44 == 13 )
        goto LABEL_108;
    }
    v70 = *(_BYTE *)(a5 + v68) ^ *(_BYTE *)(v8 + v68);
    *(_BYTE *)(a5 + v68) = v70;
    *(_BYTE *)(a2 + v68) = v70;
  }
  else
  {
    v12 = a3 == 0;
    if ( a3 )
      v12 = v11 == 0;
    if ( !v12 )
    {
      do
      {
        v13 = *(unsigned __int8 *)v8++;
        result = v13;
        v14 = (v11 + 1) & 0xF;
        if ( ((v11 + 1) & 0xF) != 0 )
          v14 = 1;
        --v10;
        v15 = v14 & 1;
        if ( !v10 )
          v15 = 0;
        *(_BYTE *)a2++ = *(_BYTE *)(a5 + v11) ^ result;
        *(_BYTE *)(a5 + v11) = result;
        v11 = ((_BYTE)v11 + 1) & 0xF;
      }
      while ( v15 );
    }
    if ( (a2 | v8 | a5) << 30 )
    {
      if ( v10 )
      {
        v75 = (_BYTE *)(a2 - 1);
        v76 = (_BYTE *)(v10 + v8);
        if ( !v11 )
          goto LABEL_78;
        while ( 1 )
        {
          v77 = *(_BYTE *)v8++;
          *++v75 = *(_BYTE *)(a5 + v11) ^ v77;
          *(_BYTE *)(a5 + v11) = v77;
          v11 = (v11 + 1) & 0xF;
          if ( (_BYTE *)v8 == v76 )
            break;
          if ( !v11 )
LABEL_78:
            result = a8(a5, a5, a4);
        }
      }
      goto LABEL_21;
    }
    if ( v10 <= 0xF )
    {
      if ( !v10 )
        goto LABEL_21;
      a8(a5, a5, a4);
      v44 = v10 - 1;
    }
    else
    {
      v16 = v8;
      v17 = a2;
      v146 = v10;
      do
      {
        result = a8(a5, a5, a4);
        v18 = v11 + 4;
        v19 = v11 + 8;
        v20 = v11 + 12;
        if ( v11 <= 0xF )
        {
          v21 = *(_DWORD *)(v16 + v11);
          result = *(_DWORD *)(a5 + v11) ^ v21;
          *(_DWORD *)(v17 + v11) = result;
          *(_DWORD *)(a5 + v11) = v21;
          if ( v18 <= 0xF )
          {
            v22 = *(_DWORD *)(v16 + v18);
            result = *(_DWORD *)(a5 + v18) ^ v22;
            *(_DWORD *)(v17 + v18) = result;
            *(_DWORD *)(a5 + v18) = v22;
            if ( v19 <= 0xF )
            {
              v23 = *(_DWORD *)(v16 + v19);
              result = *(_DWORD *)(a5 + v19) ^ v23;
              *(_DWORD *)(v17 + v19) = result;
              *(_DWORD *)(a5 + v19) = v23;
              if ( v20 <= 0xF )
              {
                result = *(_DWORD *)(v16 + v20);
                *(_DWORD *)(v17 + v20) = *(_DWORD *)(a5 + v20) ^ result;
                *(_DWORD *)(a5 + v20) = result;
              }
            }
          }
        }
        v10 -= 16;
        v17 += 16;
        v16 += 16;
        v11 = 0;
      }
      while ( v10 > 0xF );
      v24 = (v146 - 16) >> 4;
      v25 = v146 & 0xF;
      v26 = 16 * (v24 + 1);
      a2 += v26;
      v8 += v26;
      if ( (v146 & 0xF) == 0 )
      {
LABEL_20:
        v11 = v25;
LABEL_21:
        *a6 = v11;
        return result;
      }
      v44 = -16 * v24 + v146 - 17;
      a8(a5, a5, a4);
    }
    v78 = v11 + 4;
    v79 = (_BYTE *)(v8 + v11);
    v80 = (_BYTE *)(v8 + v11 + 4);
    result = a2 + v11;
    v81 = a2 + v11 + 4;
    v82 = a5 + v11 + 4;
    v83 = v8 + v11 >= v81;
    if ( v8 + v11 < v81 )
      v83 = result >= (unsigned int)v80;
    v84 = a5 + v11;
    v85 = v83;
    v86 = (unsigned int)v79 >= v82;
    if ( (unsigned int)v79 < v82 )
      v86 = v84 >= (unsigned int)v80;
    v87 = v44 + 1;
    v88 = v86;
    v89 = v85 & v88;
    v90 = result >= v82;
    if ( result < v82 )
      v90 = v84 >= v81;
    v91 = v90;
    if ( v87 > 6 )
      v92 = v89 & 1;
    else
      v92 = 0;
    v93 = (unsigned __int8)v91 & v92 & 1;
    if ( (((unsigned __int8)(result | v84) | (unsigned __int8)v79) & 3) != 0 )
      v93 = 0;
    if ( v93 )
    {
      v94 = *(_DWORD *)(v8 + v11);
      *(_DWORD *)(a2 + v11) = v94 ^ *(_DWORD *)(a5 + v11);
      v95 = 4 * (((unsigned int)(v44 - 3) >> 2) + 1);
      *(_DWORD *)(a5 + v11) = v94;
      if ( (unsigned int)(v44 - 3) >> 2 )
      {
        v96 = *((_DWORD *)v79 + 1);
        *(_DWORD *)(result + 4) = v96 ^ *(_DWORD *)(v84 + 4);
        *(_DWORD *)(v84 + 4) = v96;
        if ( (unsigned int)(v44 - 3) >> 2 == 2 )
        {
          v97 = *((_DWORD *)v79 + 2);
          *(_DWORD *)(result + 8) = v97 ^ *(_DWORD *)(v84 + 8);
          *(_DWORD *)(v84 + 8) = v97;
        }
      }
      v98 = v11 + v95;
      result = v44 - v95;
      if ( v87 == v95 )
        goto LABEL_108;
      v99 = *(_BYTE *)(v8 + v98);
      v100 = v98 + 1;
      *(_BYTE *)(a2 + v98) = *(_BYTE *)(a5 + v98) ^ v99;
      *(_BYTE *)(a5 + v98) = v99;
      if ( !result )
        goto LABEL_108;
      v101 = *(_BYTE *)(v8 + v100);
      v102 = v98 + 2;
      *(_BYTE *)(a2 + v100) = *(_BYTE *)(a5 + v100) ^ v101;
      *(_BYTE *)(a5 + v100) = v101;
      if ( result == 1 )
        goto LABEL_108;
    }
    else
    {
      v130 = *(_BYTE *)(v8 + v11);
      v131 = v11 + 1;
      *(_BYTE *)(a2 + v11) = *(_BYTE *)(a5 + v11) ^ v130;
      *(_BYTE *)(a5 + v11) = v130;
      if ( !v44 )
        goto LABEL_108;
      result = *(unsigned __int8 *)(v8 + v131);
      v132 = v11 + 2;
      *(_BYTE *)(a2 + v131) = *(_BYTE *)(a5 + v131) ^ result;
      *(_BYTE *)(a5 + v131) = result;
      if ( v44 == 1 )
        goto LABEL_108;
      result = *(unsigned __int8 *)(v8 + v132);
      v133 = v11 + 3;
      *(_BYTE *)(a2 + v132) = *(_BYTE *)(a5 + v132) ^ result;
      *(_BYTE *)(a5 + v132) = result;
      if ( v44 == 2 )
        goto LABEL_108;
      v134 = *(_BYTE *)(v8 + v133);
      *(_BYTE *)(a2 + v133) = *(_BYTE *)(a5 + v133) ^ v134;
      *(_BYTE *)(a5 + v133) = v134;
      if ( v44 == 3 )
        goto LABEL_108;
      v135 = *(_BYTE *)(v8 + v78);
      v136 = v11 + 5;
      *(_BYTE *)(a2 + v78) = *(_BYTE *)(a5 + v78) ^ v135;
      *(_BYTE *)(a5 + v78) = v135;
      if ( v44 == 4 )
        goto LABEL_108;
      result = *(unsigned __int8 *)(v8 + v136);
      v137 = v11 + 6;
      *(_BYTE *)(a2 + v136) = *(_BYTE *)(a5 + v136) ^ result;
      *(_BYTE *)(a5 + v136) = result;
      if ( v44 == 5 )
        goto LABEL_108;
      result = *(unsigned __int8 *)(v8 + v137);
      v138 = v11 + 7;
      *(_BYTE *)(a2 + v137) = *(_BYTE *)(a5 + v137) ^ result;
      *(_BYTE *)(a5 + v137) = result;
      if ( v44 == 6 )
        goto LABEL_108;
      result = *(unsigned __int8 *)(v8 + v138);
      v139 = v11 + 8;
      *(_BYTE *)(a2 + v138) = *(_BYTE *)(a5 + v138) ^ result;
      *(_BYTE *)(a5 + v138) = result;
      if ( v44 == 7 )
        goto LABEL_108;
      result = *(unsigned __int8 *)(v8 + v139);
      v140 = v11 + 9;
      *(_BYTE *)(a2 + v139) = *(_BYTE *)(a5 + v139) ^ result;
      *(_BYTE *)(a5 + v139) = result;
      if ( v44 == 8 )
        goto LABEL_108;
      result = *(unsigned __int8 *)(v8 + v140);
      v141 = v11 + 10;
      *(_BYTE *)(a2 + v140) = *(_BYTE *)(a5 + v140) ^ result;
      *(_BYTE *)(a5 + v140) = result;
      if ( v44 == 9 )
        goto LABEL_108;
      result = *(unsigned __int8 *)(v8 + v141);
      v142 = v11 + 11;
      *(_BYTE *)(a2 + v141) = *(_BYTE *)(a5 + v141) ^ result;
      *(_BYTE *)(a5 + v141) = result;
      if ( v44 == 10 )
        goto LABEL_108;
      result = *(unsigned __int8 *)(v8 + v142);
      v143 = v11 + 12;
      *(_BYTE *)(a2 + v142) = *(_BYTE *)(a5 + v142) ^ result;
      *(_BYTE *)(a5 + v142) = result;
      if ( v44 == 11 )
        goto LABEL_108;
      result = *(unsigned __int8 *)(v8 + v143);
      v144 = v11 + 13;
      *(_BYTE *)(a2 + v143) = *(_BYTE *)(a5 + v143) ^ result;
      *(_BYTE *)(a5 + v143) = result;
      if ( v44 == 12 )
        goto LABEL_108;
      result = *(unsigned __int8 *)(v8 + v144);
      v102 = v11 + 14;
      *(_BYTE *)(a2 + v144) = *(_BYTE *)(a5 + v144) ^ result;
      *(_BYTE *)(a5 + v144) = result;
      if ( v44 == 13 )
        goto LABEL_108;
    }
    v103 = *(_BYTE *)(v8 + v102);
    *(_BYTE *)(a2 + v102) = *(_BYTE *)(a5 + v102) ^ v103;
    *(_BYTE *)(a5 + v102) = v103;
  }
LABEL_108:
  *a6 = v11 + v44 + 1;
  return result;
}
