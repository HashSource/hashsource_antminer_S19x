bool __fastcall sub_163170(int a1, int *a2, unsigned int a3, int *a4, size_t a5, int *a6, size_t a7)
{
  unsigned int v8; // r11
  unsigned int v9; // r3
  unsigned int v10; // r2
  int v11; // r7
  unsigned int v12; // lr
  int v13; // r5
  unsigned int v14; // r12
  int v15; // r0
  _DWORD *v16; // r8
  int v17; // r9
  unsigned int v18; // r6
  unsigned int v19; // r7
  int v20; // r1
  int v21; // r3
  unsigned int v22; // r5
  int v23; // r2
  unsigned int v24; // r9
  unsigned int v25; // r7
  int v26; // r1
  int v27; // r2
  unsigned int v28; // r7
  int v29; // r3
  unsigned int v30; // lr
  int v31; // r6
  unsigned int v32; // r1
  unsigned int v33; // r2
  int v34; // r3
  int v35; // r1
  int v36; // r2
  int v37; // r3
  signed int v38; // r5
  int v39; // r7
  int v40; // r1
  unsigned int v41; // r3
  int v42; // r2
  unsigned int v43; // r7
  int v44; // r0
  unsigned int v45; // r1
  int v46; // r7
  unsigned int v47; // r2
  int v48; // r1
  unsigned int v49; // r3
  unsigned int v50; // r0
  int v51; // r3
  unsigned int v52; // r7
  int v53; // r0
  unsigned int v54; // r1
  unsigned int v55; // r2
  int v56; // r1
  unsigned int v57; // r3
  int v58; // r2
  unsigned int v59; // r0
  int v60; // r3
  unsigned int v61; // r7
  unsigned int v62; // r1
  unsigned int v63; // r2
  int v64; // r3
  int v65; // r1
  int v66; // r2
  int v67; // r3
  size_t v69; // r5
  unsigned int v70; // r9
  int v71; // r1
  int v72; // r2
  int v73; // r3
  bool v74; // zf
  int v75; // r11
  int v76; // r1
  int v77; // r3
  bool v78; // zf
  int v79; // r2
  int v80; // r1
  int v81; // r7
  int v82; // r0
  int v83; // r2
  int v84; // r5
  int v85; // r1
  int v86; // r0
  int v87; // r1
  int v88; // r5
  signed int v89; // r5
  int v90; // r2
  int v91; // r0
  int v92; // r1
  int v93; // r0
  int v94; // r7
  int v95; // r1
  int v96; // r2
  int v97; // r1
  int v98; // r7
  int v99; // r2
  bool v100; // zf
  size_t v101; // r2
  size_t v103; // r3
  size_t v104; // r3
  bool v105; // zf
  bool v106; // zf
  int v107; // r0
  unsigned int v108; // lr
  unsigned int v109; // r3
  unsigned int v110; // r1
  unsigned int v111; // r5
  bool v112; // cf
  char v113; // r2
  int v114; // r2
  unsigned int v115; // r2
  int v116; // r0
  int v117; // r6
  unsigned int v118; // r0
  unsigned int v119; // r2
  unsigned int v120; // r12
  unsigned int v121; // r7
  bool v122; // cf
  int v123; // r8
  _BOOL4 v124; // r1
  int v125; // lr
  unsigned int v126; // r1
  unsigned int v127; // r3
  unsigned int v128; // r5
  unsigned int v129; // r1
  bool v130; // zf
  bool v131; // zf
  unsigned int v132; // r3
  bool v133; // cf
  int v134; // r2
  _BOOL4 v135; // r0
  unsigned int v136; // r2
  int v137; // r1
  int v138; // r0
  unsigned int v139; // r1
  unsigned int v140; // r3
  size_t v141; // r0
  unsigned int v142; // r6
  char *v143; // r2
  _BOOL4 v144; // r7
  bool v145; // cc
  int v146; // r8
  int v147; // r7
  unsigned int v148; // r1
  unsigned int v149; // r5
  unsigned int v150; // r1
  unsigned int v151; // r3
  bool v152; // cf
  int v153; // r2
  _BOOL4 v154; // r0
  unsigned int v155; // r2
  int v156; // r1
  int v157; // r0
  unsigned int v158; // r1
  unsigned int v159; // r3
  size_t v160; // r0
  unsigned int v161; // r6
  char *v162; // r2
  _BOOL4 v163; // r7
  bool v164; // cc
  int v165; // r1
  int v166; // r7
  unsigned int v167; // r1
  unsigned int v168; // r6
  unsigned int v169; // r1
  _BYTE *v170; // r1
  char *v171; // r6
  char v172; // t1
  _BYTE *v173; // r1
  char *v174; // r6
  char v175; // t1
  _BYTE *v176; // r6
  int v177; // r7
  char v178; // t1
  int v179; // r5
  int v180; // r0
  int v181; // r1
  int v182; // r2
  bool v183; // zf
  int v184; // r3
  signed int v185; // r5
  int v186; // r3
  int v187; // r0
  int v188; // r2
  int v189; // r3
  int v190; // r2
  int v191; // r0
  int v192; // r2
  int v193; // r3
  int v194; // r2
  int v195; // r0
  int v196; // r2
  int v197; // r3
  int v198; // r2
  int v199; // r3
  _BYTE *v200; // r3
  char v201; // [sp+8h] [bp-BCh]
  char v202; // [sp+Ch] [bp-B8h]
  int v203; // [sp+10h] [bp-B4h]
  int v207; // [sp+24h] [bp-A0h] BYREF
  void *v208; // [sp+28h] [bp-9Ch] BYREF
  int v209; // [sp+2Ch] [bp-98h] BYREF
  _DWORD v210[12]; // [sp+30h] [bp-94h] BYREF
  _BYTE v211[100]; // [sp+60h] [bp-64h] BYREF
  size_t v212; // [sp+E8h] [bp+24h]
  size_t v213; // [sp+F0h] [bp+2Ch]

  v8 = *(unsigned __int8 *)(a1 + 171) + 1;
  v9 = *(unsigned __int8 *)(a1 + 170) + (v8 >> 8);
  v10 = *(unsigned __int8 *)(a1 + 169) + (v9 >> 8);
  v11 = *(unsigned __int8 *)(a1 + 165);
  v12 = *(unsigned __int8 *)(a1 + 168) + (v10 >> 8);
  v13 = *(unsigned __int8 *)(a1 + 164);
  v14 = *(unsigned __int8 *)(a1 + 167) + (v12 >> 8);
  v16 = (_DWORD *)(a1 + 156);
  v15 = *(_DWORD *)(a1 + 156);
  v17 = *(unsigned __int8 *)(a1 + 163);
  v18 = *(unsigned __int8 *)(a1 + 166) + (v14 >> 8);
  v203 = *(unsigned __int8 *)(a1 + 162);
  v201 = v9;
  v19 = v11 + (v18 >> 8);
  v20 = *(_DWORD *)(a1 + 160);
  v21 = *(_DWORD *)(a1 + 168);
  v22 = v13 + (v19 >> 8);
  v202 = v10;
  v23 = *(_DWORD *)(a1 + 164);
  *(_BYTE *)(a1 + 165) = v19;
  v24 = v17 + (v22 >> 8);
  *(_BYTE *)(a1 + 168) = v12;
  *(_BYTE *)(a1 + 166) = v18;
  v25 = v203 + (v24 >> 8);
  *(_BYTE *)(a1 + 164) = v22;
  *(_BYTE *)(a1 + 169) = v202;
  *(_BYTE *)(a1 + 162) = v25;
  *(_BYTE *)(a1 + 163) = v24;
  *(_BYTE *)(a1 + 167) = v14;
  *(_BYTE *)(a1 + 170) = v201;
  v210[0] = v15;
  v210[1] = v20;
  v210[2] = v23;
  v210[3] = v21;
  v207 = 16;
  v26 = *(unsigned __int8 *)(a1 + 159);
  v27 = *(unsigned __int8 *)(a1 + 158);
  v28 = *(unsigned __int8 *)(a1 + 161) + (v25 >> 8);
  v29 = *(unsigned __int8 *)(a1 + 157);
  LOBYTE(v15) = *(_BYTE *)(a1 + 156);
  v30 = *(unsigned __int8 *)(a1 + 160) + (v28 >> 8);
  v31 = *(_DWORD *)(a1 + 120);
  *(_BYTE *)(a1 + 171) = v8;
  v32 = v26 + (v30 >> 8);
  *(_BYTE *)(a1 + 161) = v28;
  *(_BYTE *)(a1 + 160) = v30;
  v33 = v27 + (v32 >> 8);
  *(_BYTE *)(a1 + 159) = v32;
  v34 = v29 + (v33 >> 8);
  *(_BYTE *)(a1 + 158) = v33;
  *(_BYTE *)(a1 + 157) = v34;
  *(_BYTE *)(a1 + 156) = v15 + BYTE1(v34);
  v35 = *(_DWORD *)(a1 + 160);
  v36 = *(_DWORD *)(a1 + 164);
  v37 = *(_DWORD *)(a1 + 168);
  v210[4] = *(_DWORD *)(a1 + 156);
  v210[5] = v35;
  v210[6] = v36;
  v210[7] = v37;
  if ( v31 == 16 )
  {
    v38 = 32;
  }
  else
  {
    v38 = 48;
    v39 = *(unsigned __int8 *)(a1 + 170);
    v40 = *(unsigned __int8 *)(a1 + 169);
    v41 = (unsigned __int8)v8 + 1;
    v42 = *(unsigned __int8 *)(a1 + 168);
    *(_BYTE *)(a1 + 171) = v41;
    v43 = v39 + (v41 >> 8);
    v44 = *(unsigned __int8 *)(a1 + 166);
    v45 = v40 + (v43 >> 8);
    *(_BYTE *)(a1 + 170) = v43;
    v46 = *(unsigned __int8 *)(a1 + 165);
    v47 = v42 + (v45 >> 8);
    *(_BYTE *)(a1 + 169) = v45;
    v48 = *(unsigned __int8 *)(a1 + 164);
    v49 = (unsigned __int8)v14 + (v47 >> 8);
    *(_BYTE *)(a1 + 168) = v47;
    v50 = v44 + (v49 >> 8);
    *(_BYTE *)(a1 + 167) = v49;
    v51 = *(unsigned __int8 *)(a1 + 162);
    v52 = v46 + (v50 >> 8);
    *(_BYTE *)(a1 + 166) = v50;
    v53 = *(unsigned __int8 *)(a1 + 161);
    v54 = v48 + (v52 >> 8);
    *(_BYTE *)(a1 + 165) = v52;
    v55 = (unsigned __int8)v24 + (v54 >> 8);
    *(_BYTE *)(a1 + 164) = v54;
    v56 = *(unsigned __int8 *)(a1 + 159);
    v57 = v51 + (v55 >> 8);
    *(_BYTE *)(a1 + 163) = v55;
    v58 = *(unsigned __int8 *)(a1 + 158);
    v59 = v53 + (v57 >> 8);
    *(_BYTE *)(a1 + 162) = v57;
    v60 = *(unsigned __int8 *)(a1 + 157);
    v61 = (unsigned __int8)v30 + (v59 >> 8);
    *(_BYTE *)(a1 + 161) = v59;
    LOBYTE(v59) = *(_BYTE *)(a1 + 156);
    v62 = v56 + (v61 >> 8);
    *(_BYTE *)(a1 + 160) = v61;
    v63 = v58 + (v62 >> 8);
    *(_BYTE *)(a1 + 159) = v62;
    v64 = v60 + (v63 >> 8);
    *(_BYTE *)(a1 + 158) = v63;
    *(_BYTE *)(a1 + 157) = v64;
    *(_BYTE *)(a1 + 156) = v59 + BYTE1(v64);
    v65 = *(_DWORD *)(a1 + 160);
    v66 = *(_DWORD *)(a1 + 164);
    v67 = *(_DWORD *)(a1 + 168);
    v210[8] = *v16;
    v210[9] = v65;
    v210[10] = v66;
    v210[11] = v67;
  }
  if ( !sub_D8188(*(_DWORD **)(a1 + 100), (int)v211, &v207, (char *)v210, v38) || v207 != v38 )
    return 0;
  v69 = *(_DWORD *)(a1 + 120);
  v70 = a1 + 124;
  memcpy((void *)(a1 + 124), v211, v69);
  v71 = *(_DWORD *)&v211[v69 + 4];
  v72 = *(_DWORD *)&v211[v69 + 8];
  v73 = *(_DWORD *)&v211[v69 + 12];
  *(_DWORD *)(a1 + 156) = *(_DWORD *)&v211[v69];
  *(_DWORD *)(a1 + 160) = v71;
  *(_DWORD *)(a1 + 164) = v72;
  *(_DWORD *)(a1 + 168) = v73;
  if ( (*(_WORD *)(a1 + 20) & 1) == 0 )
  {
    v74 = a4 == 0;
    if ( !a4 )
      v74 = a6 == 0;
    v75 = !v74;
    if ( a2 )
      v75 |= 1u;
    if ( v75 )
    {
      v76 = *(_WORD *)(a1 + 20) & 1;
      v208 = (void *)16;
      memset(&v211[48], v76, 0x30u);
      memset((void *)(a1 + 192), 0, 0x30u);
      v77 = 1;
      v78 = v69 == 16;
      v211[67] = 1;
      if ( v69 != 16 )
        v77 = 12;
      v79 = *(_DWORD *)(a1 + 208);
      if ( v69 == 16 )
        v77 = 8;
      v80 = *(_DWORD *)(a1 + 192);
      v209 = 16;
      v81 = *(_DWORD *)&v211[60];
      v82 = *(_DWORD *)&v211[64] ^ v79;
      v83 = v80 ^ *(_DWORD *)&v211[48];
      v84 = *(_DWORD *)(a1 + 196);
      v85 = *(_DWORD *)&v211[52];
      *(_DWORD *)(a1 + 208) = v82;
      v86 = *(_DWORD *)&v211[56];
      v87 = v85 ^ v84;
      v88 = *(_DWORD *)(a1 + 200);
      *(_DWORD *)(a1 + 192) = v83;
      *(_DWORD *)(a1 + 196) = v87;
      v89 = v88 ^ v86;
      v90 = *(_DWORD *)(a1 + 212);
      v91 = *(_DWORD *)(a1 + 204);
      v92 = *(_DWORD *)&v211[68];
      *(_DWORD *)(a1 + 200) = v89;
      if ( !v78 )
        v89 = 48;
      v93 = v91 ^ v81;
      v94 = *(_DWORD *)&v211[72];
      v95 = v92 ^ v90;
      v96 = *(_DWORD *)(a1 + 216);
      *(_DWORD *)(a1 + 212) = v95;
      if ( v78 )
        v89 = 32;
      v97 = *(_DWORD *)(a1 + 220);
      v98 = v94 ^ v96;
      v99 = *(_DWORD *)&v211[76];
      *(_DWORD *)(a1 + 204) = v93;
      *(_DWORD *)(a1 + 216) = v98;
      v211[83] = 2;
      *(_DWORD *)(a1 + 220) = v99 ^ v97;
      if ( v77 != 8 )
      {
        *(_DWORD *)(a1 + 224) ^= *(_DWORD *)&v211[80];
        *(_DWORD *)(a1 + 228) ^= *(_DWORD *)&v211[84];
        v100 = v77 == 12;
        if ( v77 == 12 )
          v77 = *(_DWORD *)(a1 + 236);
        *(_DWORD *)(a1 + 232) ^= *(_DWORD *)&v211[88];
        if ( v100 )
          *(_DWORD *)(a1 + 236) = v77 ^ *(_DWORD *)&v211[92];
      }
      if ( !sub_D8188(*(_DWORD **)(a1 + 108), a1 + 192, &v209, (char *)(a1 + 192), v89) || v209 != v89 )
        return 0;
      if ( a2 )
      {
        v101 = a3;
        v75 = a3 == 0;
      }
      else
      {
        v101 = 0;
      }
      if ( !a6 )
        a7 = 0;
      *(_BYTE *)(a1 + 179) = *(_DWORD *)(a1 + 120) + 16;
      v213 = a7;
      *(_BYTE *)(a1 + 176) = 0;
      *(_BYTE *)(a1 + 177) = 0;
      v103 = a5;
      if ( !a4 )
        v103 = 0;
      *(_BYTE *)(a1 + 178) = 0;
      v212 = v103;
      v104 = v101 + v213 + v103;
      *(_BYTE *)(a1 + 175) = v104;
      *(_BYTE *)(a1 + 173) = BYTE2(v104);
      *(_BYTE *)(a1 + 172) = HIBYTE(v104);
      *(_BYTE *)(a1 + 174) = BYTE1(v104);
      *(_DWORD *)(a1 + 188) = 8;
      if ( !v75 && !sub_162ECC(a1 + 100, a2, v101) )
        return 0;
      v105 = v213 == 0;
      if ( v213 )
        v105 = a6 == 0;
      if ( !v105 && !sub_162ECC(a1 + 100, a6, v213) )
        return 0;
      v106 = v212 == 0;
      if ( v212 )
        v106 = a4 == 0;
      if ( !v106 && !sub_162ECC(a1 + 100, a4, v212) || !sub_162ECC(a1 + 100, &dword_21FEE4, 1u) )
        return 0;
      v107 = *(_DWORD *)(a1 + 188);
      if ( v107 )
      {
        memset((void *)(v107 + a1 + 172), 0, 16 - v107);
        v179 = *(_DWORD *)(a1 + 120);
        v180 = *(_DWORD *)(a1 + 172);
        v181 = *(_DWORD *)(a1 + 176);
        v182 = *(_DWORD *)(a1 + 180);
        v183 = v179 == 16;
        v184 = *(_DWORD *)(a1 + 184);
        if ( v179 == 16 )
          v185 = 32;
        else
          v185 = 48;
        *(_DWORD *)&v211[48] = *(_DWORD *)(a1 + 172);
        *(_DWORD *)&v211[52] = v181;
        *(_DWORD *)&v211[56] = v182;
        *(_DWORD *)&v211[60] = v184;
        *(_DWORD *)&v211[64] = v180;
        *(_DWORD *)&v211[68] = v181;
        *(_DWORD *)&v211[72] = v182;
        *(_DWORD *)&v211[76] = v184;
        if ( !v183 )
        {
          *(_DWORD *)&v211[80] = v180;
          *(_DWORD *)&v211[84] = v181;
          *(_DWORD *)&v211[88] = v182;
          *(_DWORD *)&v211[92] = v184;
        }
        v186 = *(_DWORD *)(a1 + 196);
        v187 = *(_DWORD *)&v211[56];
        *(_DWORD *)(a1 + 192) ^= *(_DWORD *)&v211[48];
        v188 = *(_DWORD *)(a1 + 200);
        *(_DWORD *)(a1 + 196) = v186 ^ *(_DWORD *)&v211[52];
        v189 = *(_DWORD *)(a1 + 204);
        v190 = v188 ^ v187;
        v191 = *(_DWORD *)&v211[64];
        *(_DWORD *)(a1 + 200) = v190;
        v192 = *(_DWORD *)(a1 + 208);
        *(_DWORD *)(a1 + 204) = v189 ^ *(_DWORD *)&v211[60];
        v193 = *(_DWORD *)(a1 + 212);
        v194 = v192 ^ v191;
        v195 = *(_DWORD *)&v211[72];
        *(_DWORD *)(a1 + 208) = v194;
        v209 = 16;
        v196 = *(_DWORD *)(a1 + 216);
        *(_DWORD *)(a1 + 212) = v193 ^ *(_DWORD *)&v211[68];
        v197 = *(_DWORD *)(a1 + 220);
        *(_DWORD *)(a1 + 216) = v196 ^ v195;
        *(_DWORD *)(a1 + 220) = v197 ^ *(_DWORD *)&v211[76];
        if ( (unsigned int)(v185 - 4) >> 2 != 7 )
        {
          *(_DWORD *)(a1 + 224) ^= *(_DWORD *)&v211[80];
          if ( (unsigned int)(v185 - 4) >> 2 != 8 )
          {
            *(_DWORD *)(a1 + 228) ^= *(_DWORD *)&v211[84];
            if ( (unsigned int)(v185 - 4) >> 2 != 9 )
            {
              v198 = *(_DWORD *)(a1 + 232);
              v199 = *(_DWORD *)&v211[88] ^ v198;
              if ( (unsigned int)(v185 - 4) >> 2 == 11 )
                v198 = *(_DWORD *)&v211[92];
              *(_DWORD *)(a1 + 232) = v199;
              if ( (unsigned int)(v185 - 4) >> 2 == 11 )
                *(_DWORD *)(a1 + 236) ^= v198;
            }
          }
        }
        if ( !sub_D8188(*(_DWORD **)(a1 + 108), a1 + 192, &v209, (char *)(a1 + 192), v185) || v209 != v185 )
          return 0;
      }
      if ( !sub_D8440(*(int **)(a1 + 100), 0, 0, a1 + 192, 0, -1)
        || !sub_D8188(*(_DWORD **)(a1 + 100), a1 + 192, (int *)&v208, (char *)(*(_DWORD *)(a1 + 120) + a1 + 192), 16)
        || v208 != (void *)16
        || !sub_D8188(*(_DWORD **)(a1 + 100), a1 + 208, (int *)&v208, (char *)(a1 + 192), 16)
        || v208 != (void *)16
        || *(_DWORD *)(a1 + 120) != 16
        && (!sub_D8188(*(_DWORD **)(a1 + 100), a1 + 224, (int *)&v208, (char *)(a1 + 208), (signed int)v208)
         || v208 != (void *)16) )
      {
        return 0;
      }
    }
    if ( a3 )
    {
      v108 = *(_DWORD *)(a1 + 88);
      if ( v108 )
      {
        v109 = *(_DWORD *)(a1 + 120);
        v110 = *(_DWORD *)(a1 + 88);
        v111 = a1 + 192;
        if ( v108 >= v109 )
          v110 = *(_DWORD *)(a1 + 120);
        if ( v110 )
        {
          v112 = v70 >= a1 + 196;
          if ( v70 < a1 + 196 )
            v112 = v111 >= a1 + 128;
          v113 = v112;
          if ( v110 > 5 )
            v114 = v113 & 1;
          else
            v114 = 0;
          if ( v114 )
          {
            v115 = ((v110 - 4) >> 2) + 1;
            *(_DWORD *)(a1 + 124) ^= *(_DWORD *)(a1 + 192);
            v116 = 4 * v115;
            if ( (v110 - 4) >> 2 )
            {
              *(_DWORD *)(a1 + 128) ^= *(_DWORD *)(a1 + 196);
              if ( (v110 - 4) >> 2 != 1 )
              {
                *(_DWORD *)(a1 + 132) ^= *(_DWORD *)(a1 + 200);
                if ( (v110 - 4) >> 2 != 2 )
                {
                  *(_DWORD *)(a1 + 136) ^= *(_DWORD *)(a1 + 204);
                  if ( (v110 - 4) >> 2 != 3 )
                  {
                    *(_DWORD *)(a1 + 140) ^= *(_DWORD *)(a1 + 208);
                    if ( (v110 - 4) >> 2 != 4 )
                    {
                      *(_DWORD *)(a1 + 144) ^= *(_DWORD *)(a1 + 212);
                      if ( (v110 - 4) >> 2 != 5 )
                      {
                        *(_DWORD *)(a1 + 148) ^= *(_DWORD *)(a1 + 216);
                        if ( (v110 - 4) >> 2 != 6 )
                          *(_DWORD *)(a1 + 152) ^= *(_DWORD *)(a1 + 220);
                      }
                    }
                  }
                }
              }
            }
            if ( v116 != v110 )
            {
              v117 = v116 + 1;
              *(_BYTE *)(a1 + 4 * v115 + 124) ^= *(_BYTE *)(v111 + 4 * v115);
              if ( v110 > v116 + 1 )
              {
                v118 = v116 + 2;
                *(_BYTE *)(a1 + v117 + 124) ^= *(_BYTE *)(v111 + v117);
                if ( v110 > v118 )
                  *(_BYTE *)(a1 + v118 + 124) ^= *(_BYTE *)(v111 + v118);
              }
            }
          }
          else
          {
            v176 = (_BYTE *)(a1 + 124);
            v177 = a1 + 191;
            do
            {
              v178 = *(_BYTE *)++v177;
              *v176++ ^= v178;
            }
            while ( v176 != (_BYTE *)(v110 + 124 + a1) );
          }
        }
        if ( v108 > v109 )
        {
          v119 = v108 - v109;
          v120 = a1 + 100 + v109 + 92;
          v121 = a1 + 160;
          if ( v108 - v109 >= 0x10 )
            v119 = 16;
          v122 = v120 >= v121;
          if ( v120 < v121 )
            v122 = (unsigned int)v16 >= v109 + 96 + a1 + 100;
          v123 = v122;
          v124 = v119 > 5;
          if ( (v120 & 3) != 0 )
            v124 = 0;
          if ( (v123 & v124) != 0 )
          {
            if ( v119 )
              v125 = v119;
            else
              v125 = 1;
            v126 = 4 * (((unsigned int)(v125 - 4) >> 2) + 1);
            if ( v119 <= 3 )
            {
              v126 = 0;
LABEL_102:
              v127 = v109 + v111;
              v128 = v126 + 1;
              *(_BYTE *)(a1 + v126 + 156) ^= *(_BYTE *)(v127 + v126);
              if ( v119 > v126 + 1 )
              {
                v129 = v126 + 2;
                *(_BYTE *)(a1 + v128 + 156) ^= *(_BYTE *)(v127 + v128);
                if ( v119 > v129 )
                  *(_BYTE *)(a1 + v129 + 156) ^= *(_BYTE *)(v127 + v129);
              }
              goto LABEL_105;
            }
            *(_DWORD *)(a1 + 156) ^= *(_DWORD *)(a1 + 100 + v109 + 92);
            if ( (unsigned int)(v125 - 4) >> 2 )
            {
              *(_DWORD *)(a1 + 160) ^= *(_DWORD *)(v120 + 4);
              if ( (unsigned int)(v125 - 4) >> 2 != 1 )
              {
                *(_DWORD *)(a1 + 164) ^= *(_DWORD *)(v120 + 8);
                if ( (unsigned int)(v125 - 4) >> 2 != 2 )
                  *(_DWORD *)(a1 + 168) ^= *(_DWORD *)(v120 + 12);
              }
            }
            if ( v126 != v125 )
              goto LABEL_102;
          }
          else
          {
            *(_BYTE *)(a1 + 156) ^= *(_BYTE *)(v111 + v109);
            if ( v119 != 1 )
            {
              v200 = (_BYTE *)(v109 + v111);
              *(_BYTE *)(a1 + 157) ^= v200[1];
              if ( v119 != 2 )
              {
                *(_BYTE *)(a1 + 158) ^= v200[2];
                if ( v119 != 3 )
                {
                  *(_BYTE *)(a1 + 159) ^= v200[3];
                  if ( v119 != 4 )
                  {
                    *(_BYTE *)(a1 + 160) ^= v200[4];
                    if ( v119 > 5 )
                    {
                      *(_BYTE *)(a1 + 161) ^= v200[5];
                      if ( v119 > 6 )
                      {
                        *(_BYTE *)(a1 + 162) ^= v200[6];
                        if ( v119 != 7 )
                        {
                          *(_BYTE *)(a1 + 163) ^= v200[7];
                          if ( v119 != 8 )
                          {
                            *(_BYTE *)(a1 + 164) ^= v200[8];
                            if ( v119 != 9 )
                            {
                              *(_BYTE *)(a1 + 165) ^= v200[9];
                              if ( v119 != 10 )
                              {
                                *(_BYTE *)(a1 + 166) ^= v200[10];
                                if ( v119 != 11 )
                                {
                                  *(_BYTE *)(a1 + 167) ^= v200[11];
                                  if ( v119 != 12 )
                                  {
                                    *(_BYTE *)(a1 + 168) ^= v200[12];
                                    if ( v119 != 13 )
                                    {
                                      *(_BYTE *)(a1 + 169) ^= v200[13];
                                      if ( v119 != 14 )
                                      {
                                        *(_BYTE *)(a1 + 170) ^= v200[14];
                                        if ( v119 == 16 )
                                          *(_BYTE *)(a1 + 171) ^= v200[15];
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
        }
      }
    }
    goto LABEL_105;
  }
  v130 = a3 == 0;
  if ( a3 )
    v130 = a2 == 0;
  if ( !v130 )
  {
    v151 = a3;
    if ( a3 >= v69 )
      v151 = v69;
    if ( v151 )
    {
      v152 = v70 >= (unsigned int)(a2 + 1);
      if ( v70 < (unsigned int)(a2 + 1) )
        v152 = (unsigned int)a2 >= a1 + 128;
      v153 = v152;
      v154 = v151 > 5;
      if ( ((unsigned __int8)a2 & 3) != 0 )
        v154 = 0;
      if ( (v153 & v154) != 0 )
      {
        v155 = ((v151 - 4) >> 2) + 1;
        *(_DWORD *)(a1 + 124) ^= *a2;
        v156 = 4 * v155;
        if ( (v151 - 4) >> 2 )
        {
          *(_DWORD *)(a1 + 128) ^= a2[1];
          if ( (v151 - 4) >> 2 != 1 )
          {
            *(_DWORD *)(a1 + 132) ^= a2[2];
            if ( (v151 - 4) >> 2 != 2 )
            {
              *(_DWORD *)(a1 + 136) ^= a2[3];
              if ( (v151 - 4) >> 2 != 3 )
              {
                *(_DWORD *)(a1 + 140) ^= a2[4];
                if ( (v151 - 4) >> 2 != 4 )
                {
                  *(_DWORD *)(a1 + 144) ^= a2[5];
                  if ( (v151 - 4) >> 2 != 5 )
                  {
                    *(_DWORD *)(a1 + 148) ^= a2[6];
                    if ( (v151 - 4) >> 2 != 6 )
                      *(_DWORD *)(a1 + 152) ^= a2[7];
                  }
                }
              }
            }
          }
        }
        if ( v151 != v156 )
        {
          v157 = v156 + 1;
          *(_BYTE *)(a1 + 4 * v155 + 124) ^= LOBYTE(a2[v155]);
          if ( v151 > v156 + 1 )
          {
            v158 = v156 + 2;
            *(_BYTE *)(a1 + v157 + 124) ^= *((_BYTE *)a2 + v157);
            if ( v151 > v158 )
              *(_BYTE *)(a1 + v158 + 124) ^= *((_BYTE *)a2 + v158);
          }
        }
      }
      else
      {
        v170 = (_BYTE *)(a1 + 124);
        v171 = (char *)a2 - 1;
        do
        {
          v172 = *++v171;
          *v170++ ^= v172;
        }
        while ( v170 != (_BYTE *)(a1 + v151 + 124) );
      }
    }
    if ( v69 < a3 )
    {
      v159 = a3 - v69;
      v160 = v69 + 4;
      if ( a3 - v69 >= 0x10 )
        v159 = 16;
      v161 = a1 + 160;
      v162 = (char *)a2 + v69;
      v163 = v159 > 5;
      if ( (((unsigned int)a2 + v69) & 3) != 0 )
        v163 = 0;
      v164 = v161 > (unsigned int)v162;
      if ( v161 > (unsigned int)v162 )
        v164 = (int *)((char *)a2 + v160) > v16;
      v165 = !v164;
      if ( (v165 & v163) != 0 )
      {
        if ( v159 )
          v166 = v159;
        else
          v166 = 1;
        v167 = 4 * (((unsigned int)(v166 - 4) >> 2) + 1);
        if ( v159 <= 3 )
        {
          v167 = 0;
LABEL_203:
          v168 = v167 + 1;
          *(_BYTE *)(a1 + v167 + 156) ^= v162[v167];
          if ( v159 > v167 + 1 )
          {
            v169 = v167 + 2;
            *(_BYTE *)(a1 + v168 + 156) ^= v162[v168];
            if ( v159 > v169 )
              *(_BYTE *)(a1 + v169 + 156) ^= v162[v169];
          }
          goto LABEL_111;
        }
        *(_DWORD *)(a1 + 156) ^= *(int *)((char *)a2 + v69);
        if ( (unsigned int)(v166 - 4) >> 2 )
        {
          *(_DWORD *)(a1 + 160) ^= *((_DWORD *)v162 + 1);
          if ( (unsigned int)(v166 - 4) >> 2 != 1 )
          {
            *(_DWORD *)(a1 + 164) ^= *((_DWORD *)v162 + 2);
            if ( (unsigned int)(v166 - 4) >> 2 != 2 )
              *(_DWORD *)(a1 + 168) ^= *((_DWORD *)v162 + 3);
          }
        }
        if ( v166 != v167 )
          goto LABEL_203;
      }
      else
      {
        *(_BYTE *)(a1 + 156) ^= *((_BYTE *)a2 + v69);
        if ( v159 != 1 )
        {
          *(_BYTE *)(a1 + 157) ^= v162[1];
          if ( v159 != 2 )
          {
            *(_BYTE *)(a1 + 158) ^= v162[2];
            if ( v159 != 3 )
            {
              *(_BYTE *)(a1 + 159) ^= v162[3];
              if ( v159 != 4 )
              {
                *(_BYTE *)(a1 + 160) ^= *((_BYTE *)a2 + v160);
                if ( v159 > 5 )
                {
                  *(_BYTE *)(a1 + 161) ^= v162[5];
                  if ( v159 > 6 )
                  {
                    *(_BYTE *)(a1 + 162) ^= v162[6];
                    if ( v159 != 7 )
                    {
                      *(_BYTE *)(a1 + 163) ^= v162[7];
                      if ( v159 != 8 )
                      {
                        *(_BYTE *)(a1 + 164) ^= v162[8];
                        if ( v159 != 9 )
                        {
                          *(_BYTE *)(a1 + 165) ^= v162[9];
                          if ( v159 != 10 )
                          {
                            *(_BYTE *)(a1 + 166) ^= v162[10];
                            if ( v159 != 11 )
                            {
                              *(_BYTE *)(a1 + 167) ^= v162[11];
                              if ( v159 != 12 )
                              {
                                *(_BYTE *)(a1 + 168) ^= v162[12];
                                if ( v159 != 13 )
                                {
                                  *(_BYTE *)(a1 + 169) ^= v162[13];
                                  if ( v159 != 14 )
                                  {
                                    *(_BYTE *)(a1 + 170) ^= v162[14];
                                    if ( v159 == 16 )
                                      *(_BYTE *)(a1 + 171) ^= v162[15];
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
    }
  }
LABEL_111:
  v131 = a5 == 0;
  if ( a5 )
    v131 = a4 == 0;
  if ( !v131 )
  {
    v132 = a5;
    if ( a5 >= v69 )
      v132 = v69;
    if ( v132 )
    {
      v133 = v70 >= (unsigned int)(a4 + 1);
      if ( v70 < (unsigned int)(a4 + 1) )
        v133 = (unsigned int)a4 >= a1 + 128;
      v134 = v133;
      v135 = v132 > 5;
      if ( ((unsigned __int8)a4 & 3) != 0 )
        v135 = 0;
      if ( (v134 & v135) != 0 )
      {
        v136 = ((v132 - 4) >> 2) + 1;
        *(_DWORD *)(a1 + 124) ^= *a4;
        v137 = 4 * v136;
        if ( (v132 - 4) >> 2 )
        {
          *(_DWORD *)(a1 + 128) ^= a4[1];
          if ( (v132 - 4) >> 2 != 1 )
          {
            *(_DWORD *)(a1 + 132) ^= a4[2];
            if ( (v132 - 4) >> 2 != 2 )
            {
              *(_DWORD *)(a1 + 136) ^= a4[3];
              if ( (v132 - 4) >> 2 != 3 )
              {
                *(_DWORD *)(a1 + 140) ^= a4[4];
                if ( (v132 - 4) >> 2 != 4 )
                {
                  *(_DWORD *)(a1 + 144) ^= a4[5];
                  if ( (v132 - 4) >> 2 != 5 )
                  {
                    *(_DWORD *)(a1 + 148) ^= a4[6];
                    if ( (v132 - 4) >> 2 != 6 )
                      *(_DWORD *)(a1 + 152) ^= a4[7];
                  }
                }
              }
            }
          }
        }
        if ( v132 != v137 )
        {
          v138 = v137 + 1;
          *(_BYTE *)(a1 + 4 * v136 + 124) ^= LOBYTE(a4[v136]);
          if ( v132 > v137 + 1 )
          {
            v139 = v137 + 2;
            *(_BYTE *)(a1 + v138 + 124) ^= *((_BYTE *)a4 + v138);
            if ( v132 > v139 )
              *(_BYTE *)(a1 + v139 + 124) ^= *((_BYTE *)a4 + v139);
          }
        }
      }
      else
      {
        v173 = (_BYTE *)(a1 + 124);
        v174 = (char *)a4 - 1;
        do
        {
          v175 = *++v174;
          *v173++ ^= v175;
        }
        while ( v173 != (_BYTE *)(a1 + v132 + 124) );
      }
    }
    if ( v69 < a5 )
    {
      v140 = a5 - v69;
      v141 = v69 + 4;
      if ( a5 - v69 >= 0x10 )
        v140 = 16;
      v142 = a1 + 160;
      v143 = (char *)a4 + v69;
      v144 = v140 > 5;
      if ( (((unsigned int)a4 + v69) & 3) != 0 )
        v144 = 0;
      v145 = v142 > (unsigned int)v143;
      if ( v142 > (unsigned int)v143 )
        v145 = (int *)((char *)a4 + v141) > v16;
      v146 = !v145;
      if ( (v146 & v144) != 0 )
      {
        if ( v140 )
          v147 = v140;
        else
          v147 = 1;
        v148 = 4 * (((unsigned int)(v147 - 4) >> 2) + 1);
        if ( v140 <= 3 )
        {
          v148 = 0;
        }
        else
        {
          *(_DWORD *)(a1 + 156) ^= *(int *)((char *)a4 + v69);
          if ( (unsigned int)(v147 - 4) >> 2 )
          {
            *(_DWORD *)(a1 + 160) ^= *((_DWORD *)v143 + 1);
            if ( (unsigned int)(v147 - 4) >> 2 != 1 )
            {
              *(_DWORD *)(a1 + 164) ^= *((_DWORD *)v143 + 2);
              if ( (unsigned int)(v147 - 4) >> 2 != 2 )
                *(_DWORD *)(a1 + 168) ^= *((_DWORD *)v143 + 3);
            }
          }
          if ( v147 == v148 )
            goto LABEL_105;
        }
        v149 = v148 + 1;
        *(_BYTE *)(a1 + v148 + 156) ^= v143[v148];
        if ( v140 > v148 + 1 )
        {
          v150 = v148 + 2;
          *(_BYTE *)(a1 + v149 + 156) ^= v143[v149];
          if ( v140 > v150 )
            *(_BYTE *)(a1 + v150 + 156) ^= v143[v150];
        }
        goto LABEL_105;
      }
      *(_BYTE *)(a1 + 156) ^= *((_BYTE *)a4 + v69);
      if ( v140 != 1 )
      {
        *(_BYTE *)(a1 + 157) ^= v143[1];
        if ( v140 != 2 )
        {
          *(_BYTE *)(a1 + 158) ^= v143[2];
          if ( v140 != 3 )
          {
            *(_BYTE *)(a1 + 159) ^= v143[3];
            if ( v140 != 4 )
            {
              *(_BYTE *)(a1 + 160) ^= *((_BYTE *)a4 + v141);
              if ( v140 > 5 )
              {
                *(_BYTE *)(a1 + 161) ^= v143[5];
                if ( v140 > 6 )
                {
                  *(_BYTE *)(a1 + 162) ^= v143[6];
                  if ( v140 != 7 )
                  {
                    *(_BYTE *)(a1 + 163) ^= v143[7];
                    if ( v140 != 8 )
                    {
                      *(_BYTE *)(a1 + 164) ^= v143[8];
                      if ( v140 != 9 )
                      {
                        *(_BYTE *)(a1 + 165) ^= v143[9];
                        if ( v140 != 10 )
                        {
                          *(_BYTE *)(a1 + 166) ^= v143[10];
                          if ( v140 != 11 )
                          {
                            *(_BYTE *)(a1 + 167) ^= v143[11];
                            if ( v140 != 12 )
                            {
                              *(_BYTE *)(a1 + 168) ^= v143[12];
                              if ( v140 != 13 )
                              {
                                *(_BYTE *)(a1 + 169) ^= v143[13];
                                if ( v140 != 14 )
                                {
                                  *(_BYTE *)(a1 + 170) ^= v143[14];
                                  if ( v140 == 16 )
                                    *(_BYTE *)(a1 + 171) ^= v143[15];
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
  }
LABEL_105:
  if ( !sub_D8440(*(int **)(a1 + 100), 0, 0, a1 + 124, 0, -1) )
    return 0;
  return sub_D8440(*(int **)(a1 + 104), 0, 0, a1 + 124, 0, -1) != 0;
}
