int __fastcall sub_11EFF8(const char **a1, int a2, __int64 a3, int c)
{
  unsigned int v4; // r8
  const char **v5; // r4
  const char *v6; // r10
  const char *v7; // r11
  unsigned int v8; // r7
  int v9; // r5
  int v10; // r9
  void *v11; // r0
  void *v12; // r3
  const char *v13; // r0
  int v14; // r0
  unsigned int v15; // r8
  void *v17; // r0
  const char *v18; // r3
  const char *v19; // r10
  const char *v20; // r11
  __int64 v21; // r0
  _DWORD *v22; // r6
  int v23; // r0
  const char *v24; // r3
  int v25; // r5
  const char *v26; // r7
  const char *v27; // r11
  const char *v28; // r8
  int v29; // r10
  int *v30; // r0
  int v31; // r5
  unsigned int v32; // r11
  const char *v33; // r6
  int *v34; // r4
  int *v35; // r8
  int *v36; // r0
  int v37; // t1
  int *v38; // r8
  int *v39; // r2
  int *v40; // r3
  int *v41; // r12
  _DWORD **v42; // r0
  _DWORD *v43; // r5
  _DWORD **v44; // r11
  struct obstack *v45; // r9
  int v46; // r1
  int v47; // r3
  char v48; // r2
  int v49; // r8
  int v50; // r3
  int v51; // r0
  bool v52; // zf
  int v53; // r3
  __int64 v54; // r0
  char v55; // r2
  _DWORD *v56; // r5
  _DWORD *v57; // r3
  int v58; // r0
  bool v59; // zf
  int v60; // r3
  int *v61; // r1
  int v62; // r1
  int v63; // r2
  int v64; // r3
  void *v65; // r0
  char *v66; // r3
  const char *v67; // r8
  int v68; // r7
  int v69; // r8
  int v70; // r5
  unsigned int v71; // r0
  int *v72; // r7
  char *v73; // r6
  int *v74; // r3
  int v75; // r7
  _BOOL4 v76; // r0
  int *v78; // r5
  int *v79; // r8
  int *v80; // r10
  int *v81; // r0
  _DWORD **v82; // r0
  _DWORD *v83; // r5
  _DWORD **v84; // r10
  int v85; // r1
  int v86; // r3
  char v87; // r2
  int v88; // r3
  int v89; // r0
  bool v90; // zf
  int v91; // r3
  int v92; // r1
  int v93; // r3
  char v94; // r2
  int v95; // r5
  int v96; // r3
  int v97; // r12
  int v98; // r12
  int *v99; // r0
  int *v100; // r1
  int *v101; // r2
  int *v102; // r3
  int *v103; // r3
  int v104; // r11
  char *v105; // r10
  char *v106; // r0
  int *v107; // r3
  char *v108; // r0
  int v109; // r1
  int v110; // r3
  char v111; // r2
  _DWORD *v112; // r3
  int v113; // r0
  bool v114; // zf
  int v115; // r3
  size_t v116; // r7
  void *v117; // r0
  int v118; // r2
  int v119; // r3
  int v120; // r1
  int v121; // r0
  bool v122; // zf
  int v123; // r3
  int v124; // r1
  int v125; // r2
  int v126; // r3
  int *v127; // r2
  int v128; // r1
  int v129; // r2
  int v130; // r3
  int *v131; // r2
  int v132; // r1
  int v133; // r2
  int v134; // r3
  int *v135; // r3
  int v136; // r1
  int v137; // r2
  int v138; // r3
  int *v139; // r3
  int v140; // r1
  int v141; // r2
  int v142; // r3
  int *v143; // r2
  int v144; // r1
  int v145; // r2
  int v146; // r3
  const char *v147; // r0
  const char *v148; // r1
  const char *v149; // r2
  const char *v150; // r3
  const char *v151; // lr
  _DWORD *v152; // r0
  int *v153; // r3
  int v154; // r1
  int v155; // r3
  char v156; // r2
  _DWORD *v157; // r3
  int v158; // r0
  bool v159; // zf
  int v160; // r3
  size_t v161; // r8
  void *v162; // r0
  int v163; // r2
  int v164; // r3
  int v165; // r2
  int v166; // lr
  int v167; // r1
  int v168; // r8
  int *v169; // r0
  int *v170; // r1
  int *v171; // r2
  int *v172; // r3
  int *v173; // r12
  int *v174; // r0
  int *v175; // r1
  int *v176; // r2
  int *v177; // r3
  int *v178; // r12
  int *v179; // r0
  int *v180; // r1
  int *v181; // r2
  int *v182; // r3
  int *v183; // r9
  int *v184; // r1
  int *v185; // r2
  int *v186; // r3
  int *v187; // r0
  int *v188; // r1
  int *v189; // r2
  int *v190; // r3
  int *v191; // r0
  int *v192; // r1
  int *v193; // r2
  int *v194; // r3
  int *v195; // lr
  const char *v196; // r0
  const char *v197; // r1
  const char *v198; // r2
  const char *v199; // r3
  const char *v200; // r12
  _DWORD *v201; // r0
  _DWORD *v202; // r0
  int *v203; // r3
  _DWORD *v204; // r0
  int *v205; // r3
  int *v206; // r3
  int v208; // [sp+14h] [bp-F8h]
  struct obstack *v209; // [sp+14h] [bp-F8h]
  struct obstack *v210; // [sp+14h] [bp-F8h]
  struct obstack *v211; // [sp+14h] [bp-F8h]
  char *v212; // [sp+14h] [bp-F8h]
  const char **v214; // [sp+1Ch] [bp-F0h]
  int *v215; // [sp+1Ch] [bp-F0h]
  const char *v216; // [sp+1Ch] [bp-F0h]
  int v217; // [sp+1Ch] [bp-F0h]
  _DWORD *v218; // [sp+20h] [bp-ECh]
  int *v219; // [sp+20h] [bp-ECh]
  int v220; // [sp+24h] [bp-E8h]
  int v221; // [sp+28h] [bp-E4h] BYREF
  int v222; // [sp+2Ch] [bp-E0h]
  int v223; // [sp+30h] [bp-DCh]
  int v224; // [sp+34h] [bp-D8h]
  int v225; // [sp+38h] [bp-D4h]
  void *src; // [sp+40h] [bp-CCh] BYREF
  size_t n; // [sp+44h] [bp-C8h]
  _BYTE v228[16]; // [sp+48h] [bp-C4h] BYREF
  _QWORD s[4]; // [sp+58h] [bp-B4h] BYREF
  int *v230[36]; // [sp+7Ch] [bp-90h] BYREF

  v4 = a3;
  v5 = a1;
  v6 = a1[2];
  v7 = a1[59];
  if ( c )
  {
    v8 = HIDWORD(a3);
    v208 = *((_DWORD *)v7 + 3) - 1;
    v9 = v208 & a3;
    v10 = v208 & HIDWORD(a3) | 1;
    v11 = memset(s, 0, sizeof(s));
    v12 = v11;
    s[1] = __PAIR64__(v8, v4);
    v13 = v5[61];
  }
  else
  {
    v7 = a1[58];
    v208 = *((_DWORD *)v7 + 3) - 1;
    v9 = v208 & a3;
    v10 = v208 & HIDWORD(a3) | 1;
    v17 = memset(s, 0, sizeof(s));
    s[1] = a3;
    v12 = v17;
    v13 = v5[60];
  }
  v14 = sub_324030(v13, v12, 1);
  v15 = *(_DWORD *)v14;
  if ( *(_DWORD *)v14 )
    return *(_DWORD *)v14;
  if ( !*((_DWORD *)v7 + 3) )
LABEL_175:
    sub_946E0("Dwarf Error: bad DWP hash table, lookup didn't terminate [in module %s]", *v5);
  v18 = v6;
  v19 = v7;
  v218 = (_DWORD *)v14;
  v20 = v18;
  while ( 1 )
  {
    LODWORD(v21) = (*(int (__fastcall **)(int))(*((_DWORD *)v20 + 1) + 28))(*((_DWORD *)v19 + 4) + 8 * v9);
    if ( a3 == v21 )
    {
      v22 = v218;
      v23 = (*(int (__fastcall **)(int))(*((_DWORD *)v20 + 1) + 40))(*((_DWORD *)v19 + 5) + 4 * v9);
      v24 = v5[1];
      v25 = v23;
      if ( v24 != (const char *)1 )
      {
        v26 = v5[58];
        LOWORD(v27) = (unsigned __int16)"CU";
        if ( c )
          v26 = v5[59];
        HIWORD(v27) = (unsigned int)"CU" >> 16;
        if ( c )
          v27 = "TU";
        v28 = v5[2];
        v29 = *(_DWORD *)(dword_4872D8 + 344);
        if ( v24 != (const char *)2 )
        {
          sub_94700(
            (int)"dwarf2read.c",
            12581,
            "%s: Assertion `%s' failed.",
            "dwo_unit* create_dwo_unit_in_dwp_v2(dwp_file*, uint32_t, const char*, ULONGEST, int)",
            "dwp_file->version == 2");
LABEL_177:
          sub_946E0("Dwarf Error: bad DWP hash table, section number too large [in module %s]", *v5);
        }
        if ( dword_4872F4 )
        {
          v217 = *(_DWORD *)sub_242FC8(c);
          v212 = sub_98880(v25, 0);
          v108 = sub_98B08(a3, SHIDWORD(a3));
          sub_2594B0(v217, "Reading %s %s/%s in DWP V2 file: %s\n", v27, v212, v108, *v5);
        }
        memset(v230, 0, 0x38u);
        v30 = (int *)*((_DWORD *)v26 + 1);
        if ( v30 )
        {
          v214 = v5;
          v31 = v25 - 1;
          v32 = 0;
          v33 = v28;
          v34 = (int *)(v26 + 24);
          do
          {
            v35 = (int *)(*(int (__fastcall **)(unsigned int))(*((_DWORD *)v33 + 1) + 40))(*((_DWORD *)v26 + 12) + 4 * (v32 + v31 * (_DWORD)v30));
            v36 = (int *)(*(int (__fastcall **)(unsigned int))(*((_DWORD *)v33 + 1) + 40))(*((_DWORD *)v26 + 13) + 4 * (v32 + *((_DWORD *)v26 + 1) * v31));
            v37 = *v34++;
            switch ( v37 )
            {
              case 1:
              case 2:
                v230[12] = v35;
                v230[13] = v36;
                break;
              case 3:
                v230[0] = v35;
                v230[1] = v36;
                break;
              case 4:
                v230[2] = v35;
                v230[3] = v36;
                break;
              case 5:
                v230[4] = v35;
                v230[5] = v36;
                break;
              case 6:
                v230[10] = v35;
                v230[11] = v36;
                break;
              case 7:
                v230[6] = v35;
                v230[7] = v36;
                break;
              case 8:
                v230[8] = v35;
                v230[9] = v36;
                break;
              default:
                break;
            }
            v30 = (int *)*((_DWORD *)v26 + 1);
            ++v32;
          }
          while ( (unsigned int)v30 > v32 );
          v22 = v218;
          v38 = v230[1];
          v219 = v230[3];
          v5 = v214;
          if ( v230[1] )
            v39 = v230[0];
          else
            v39 = 0;
          v209 = (struct obstack *)v230[5];
          v215 = v230[11];
          if ( v230[3] )
            v40 = v230[2];
          else
            v40 = 0;
          if ( v230[5] )
            v30 = v230[4];
          else
            v30 = 0;
          if ( v230[11] )
            v41 = v230[10];
          else
            v41 = 0;
        }
        else
        {
          v40 = 0;
          v38 = 0;
          v219 = 0;
          v39 = 0;
          v209 = 0;
          v41 = 0;
          v215 = 0;
        }
        sub_931D8((char **)&src, "virtual-dwo/%ld-%ld-%ld-%ld", v39, v40, v30, v41);
        v42 = (_DWORD **)sub_11CF98((int)src, a2);
        v43 = *v42;
        v44 = v42;
        if ( *v42 )
        {
          if ( dword_4872F4 )
          {
            v152 = (_DWORD *)sub_242FC8(v42);
            sub_2594B0(*v152, "Using existing virtual DWO: %s\n", (const char *)src);
            v43 = *v44;
          }
          v45 = (struct obstack *)(v29 + 48);
        }
        else
        {
          if ( dword_4872F4 )
          {
            v202 = (_DWORD *)sub_242FC8(v42);
            sub_2594B0(*v202, "Creating virtual DWO: %s\n", (const char *)src);
          }
          v109 = *(_DWORD *)(v29 + 64);
          v45 = (struct obstack *)(v29 + 48);
          v110 = *(_DWORD *)(v29 + 60);
          v111 = v109 - v110;
          if ( (unsigned int)(v109 - v110) <= 0xCB )
          {
            obstack_newchunk((struct obstack *)(v29 + 48), 204);
            v110 = *(_DWORD *)(v29 + 60);
            v109 = *(_DWORD *)(v29 + 64);
          }
          v43 = *(_DWORD **)(v29 + 56);
          v112 = (_DWORD *)(v110 + 204);
          v113 = *(_DWORD *)(v29 + 72);
          *(_DWORD *)(v29 + 60) = v112;
          v114 = v112 == v43;
          if ( v112 == v43 )
            v111 = *(_BYTE *)(v29 + 88);
          v115 = ((unsigned int)v112 + v113) & ~v113;
          *(_DWORD *)(v29 + 60) = v115;
          if ( v114 )
            *(_BYTE *)(v29 + 88) = v111 | 2;
          if ( v115 - *(_DWORD *)(v29 + 52) > (unsigned int)(v109 - *(_DWORD *)(v29 + 52)) )
          {
            v115 = v109;
            *(_DWORD *)(v29 + 60) = v109;
          }
          *(_DWORD *)(v29 + 56) = v115;
          memset(v43, 0, 0xCCu);
          v116 = n;
          v117 = *(void **)(v29 + 60);
          if ( *(_DWORD *)(v29 + 64) - (int)v117 < n + 1 )
          {
            obstack_newchunk((struct obstack *)(v29 + 48), n + 1);
            v117 = *(void **)(v29 + 60);
          }
          memcpy(v117, src, v116);
          v118 = *(_DWORD *)(v29 + 60);
          *(_DWORD *)(v29 + 60) = v118 + v116 + 1;
          *(_BYTE *)(v118 + v116) = 0;
          v119 = *(_DWORD *)(v29 + 60);
          v120 = *(_DWORD *)(v29 + 56);
          v121 = *(_DWORD *)(v29 + 64);
          v122 = v120 == v119;
          if ( v120 == v119 )
            LOBYTE(v118) = *(_BYTE *)(v29 + 88);
          v123 = (v119 + *(_DWORD *)(v29 + 72)) & ~*(_DWORD *)(v29 + 72);
          *(_DWORD *)(v29 + 60) = v123;
          if ( v122 )
            *(_BYTE *)(v29 + 88) = v118 | 2;
          if ( v123 - *(_DWORD *)(v29 + 52) > (unsigned int)(v121 - *(_DWORD *)(v29 + 52)) )
          {
            v123 = v121;
            *(_DWORD *)(v29 + 60) = v121;
          }
          *(_DWORD *)(v29 + 56) = v123;
          *v43 = v120;
          v43[1] = a2;
          sub_11CE54((int)&v221, (int *)v5 + 18, (int)v230[0], (int)v38);
          v124 = v222;
          v125 = v223;
          v126 = v224;
          v43[3] = v221;
          v43[4] = v124;
          v43[5] = v125;
          v43[6] = v126;
          v127 = v230[2];
          v43[7] = v225;
          sub_11CE54((int)&v221, (int *)v5 + 28, (int)v127, (int)v219);
          v128 = v222;
          v129 = v223;
          v130 = v224;
          v43[8] = v221;
          v43[9] = v128;
          v43[10] = v129;
          v43[11] = v130;
          v131 = v230[4];
          v43[12] = v225;
          sub_11CE54((int)&v221, (int *)v5 + 33, (int)v131, (int)v209);
          v132 = v222;
          v133 = v223;
          v134 = v224;
          v43[13] = v221;
          v43[14] = v132;
          v43[15] = v133;
          v43[16] = v134;
          v135 = v230[7];
          v43[17] = v225;
          sub_11CE54((int)&v221, (int *)v5 + 38, (int)v230[6], (int)v135);
          v136 = v222;
          v137 = v223;
          v138 = v224;
          v43[23] = v221;
          v43[24] = v136;
          v43[25] = v137;
          v43[26] = v138;
          v139 = v230[9];
          v43[27] = v225;
          sub_11CE54((int)&v221, (int *)v5 + 43, (int)v230[8], (int)v139);
          v140 = v222;
          v141 = v223;
          v142 = v224;
          v43[28] = v221;
          v43[29] = v140;
          v43[30] = v141;
          v43[31] = v142;
          v143 = v230[10];
          v43[32] = v225;
          sub_11CE54((int)&v221, (int *)v5 + 48, (int)v143, (int)v215);
          v144 = v222;
          v145 = v223;
          v146 = v224;
          v43[38] = v221;
          v43[39] = v144;
          v43[40] = v145;
          v43[41] = v146;
          v147 = v5[3];
          v148 = v5[4];
          v149 = v5[5];
          v150 = v5[6];
          v43[42] = v225;
          v151 = v5[7];
          v43[33] = v147;
          v43[34] = v148;
          v43[35] = v149;
          v43[36] = v150;
          v43[37] = v151;
          *v44 = v43;
        }
        v46 = *(_DWORD *)(v29 + 64);
        v47 = *(_DWORD *)(v29 + 60);
        v48 = v46 - v47;
        if ( (unsigned int)(v46 - v47) <= 0x1F )
        {
          obstack_newchunk(v45, 32);
          v47 = *(_DWORD *)(v29 + 60);
          v46 = *(_DWORD *)(v29 + 64);
        }
        v49 = *(_DWORD *)(v29 + 56);
        v50 = v47 + 32;
        v51 = *(_DWORD *)(v29 + 72);
        *(_DWORD *)(v29 + 60) = v50;
        v52 = v50 == v49;
        if ( v50 == v49 )
          v48 = *(_BYTE *)(v29 + 88);
        v53 = (v50 + v51) & ~v51;
        *(_DWORD *)(v29 + 60) = v53;
        if ( v52 )
          *(_BYTE *)(v29 + 88) = v48 | 2;
        if ( v53 - *(_DWORD *)(v29 + 52) > (unsigned int)(v46 - *(_DWORD *)(v29 + 52)) )
        {
          *(_DWORD *)(v29 + 60) = v46;
          v53 = v46;
        }
        *(_DWORD *)(v29 + 56) = v53;
        *(_DWORD *)(v49 + 4) = 0;
        *(_DWORD *)(v49 + 16) = 0;
        *(_DWORD *)(v49 + 20) = 0;
        *(_DWORD *)(v49 + 24) = 0;
        *(_DWORD *)(v49 + 28) = 0;
        v54 = *(_QWORD *)(v29 + 60);
        *(_DWORD *)v49 = v43;
        *(_QWORD *)(v49 + 8) = a3;
        v55 = BYTE4(v54) - v54;
        if ( (unsigned int)(HIDWORD(v54) - v54) <= 0x13 )
        {
          obstack_newchunk(v45, 20);
          v54 = *(_QWORD *)(v29 + 60);
        }
        v56 = *(_DWORD **)(v29 + 56);
        v57 = (_DWORD *)(v54 + 20);
        v58 = *(_DWORD *)(v29 + 72);
        *(_DWORD *)(v29 + 60) = v57;
        v59 = v57 == v56;
        if ( v57 == v56 )
          v55 = *(_BYTE *)(v29 + 88);
        v60 = ((unsigned int)v57 + v58) & ~v58;
        *(_DWORD *)(v29 + 60) = v60;
        if ( v59 )
          *(_BYTE *)(v29 + 88) = v55 | 2;
        if ( v60 - *(_DWORD *)(v29 + 52) > (unsigned int)(HIDWORD(v54) - *(_DWORD *)(v29 + 52)) )
        {
          v60 = HIDWORD(v54);
          *(_DWORD *)(v29 + 60) = HIDWORD(v54);
        }
        *(_DWORD *)(v29 + 56) = v60;
        *(_DWORD *)(v49 + 16) = v56;
        if ( c )
          v61 = (int *)(v5 + 53);
        else
          v61 = (int *)(v5 + 23);
        sub_11CE54((int)&v221, v61, (int)v230[12], (int)v230[13]);
        v62 = v222;
        v63 = v223;
        v64 = v224;
        *v56 = v221;
        v56[1] = v62;
        v56[2] = v63;
        v56[3] = v64;
        v56[4] = v225;
        v65 = src;
        if ( src == v228 )
          goto LABEL_60;
LABEL_59:
        sub_339E64(v65);
LABEL_60:
        *v22 = v49;
        return v49;
      }
      v66 = (char *)v5[58];
      LOWORD(v67) = (unsigned __int16)"TU";
      if ( c )
        v66 = (char *)v5[59];
      HIWORD(v67) = (unsigned int)"TU" >> 16;
      v210 = (struct obstack *)v66;
      if ( !c )
        v67 = "CU";
      v68 = *(_DWORD *)(dword_4872D8 + 344);
      v216 = v5[2];
      if ( dword_4872F4 )
      {
        v104 = *(_DWORD *)sub_242FC8(v5[59]);
        v105 = sub_98880(v25, 0);
        v106 = sub_98B08(a3, SHIDWORD(a3));
        sub_2594B0(v104, "Reading %s %s/%s in DWP V1 file: %s\n", v67, v105, v106, *v5);
      }
      v69 = 0;
      memset(v230, 0, 0x8Cu);
      v70 = 4 * v25;
      v220 = v68;
      while ( 1 )
      {
        v71 = (*(int (__fastcall **)(int))(*((_DWORD *)v216 + 1) + 40))(v210->alignment_mask + v70);
        if ( !v71 )
          break;
        if ( v71 >= (unsigned int)v5[62] )
          goto LABEL_177;
        v72 = *(int **)&v5[63][4 * v71];
        v73 = (char *)*v72;
        if ( sub_11EC1C((char *)*v72, (const char **)off_39EE40) )
        {
          if ( v230[0] )
            goto LABEL_79;
          v107 = (int *)v72[9];
          v230[0] = v72;
          v230[2] = v107;
        }
        else if ( sub_11EC1C(v73, (const char **)off_39EE48) || sub_11EC1C(v73, (const char **)off_39EE88) )
        {
          if ( v230[30] )
            goto LABEL_79;
          v103 = (int *)v72[9];
          v230[30] = v72;
          v230[32] = v103;
        }
        else if ( sub_11EC1C(v73, (const char **)off_39EE50) )
        {
          if ( v230[5] )
            goto LABEL_79;
          v74 = (int *)v72[9];
          v230[5] = v72;
          v230[7] = v74;
        }
        else if ( sub_11EC1C(v73, (const char **)off_39EE58) )
        {
          if ( v230[10] )
            goto LABEL_79;
          v153 = (int *)v72[9];
          v230[10] = v72;
          v230[12] = v153;
        }
        else if ( sub_11EC1C(v73, (const char **)off_39EE68) )
        {
          if ( v230[15] )
            goto LABEL_79;
          v203 = (int *)v72[9];
          v230[15] = v72;
          v230[17] = v203;
        }
        else if ( sub_11EC1C(v73, (const char **)off_39EE70) )
        {
          if ( v230[20] )
            goto LABEL_79;
          v205 = (int *)v72[9];
          v230[20] = v72;
          v230[22] = v205;
        }
        else
        {
          if ( !sub_11EC1C(v73, (const char **)off_39EE80) || v230[25] )
LABEL_79:
            sub_946E0("Dwarf Error: bad DWP hash table, invalid section found [in module %s]", *v5);
          v206 = (int *)v72[9];
          v230[25] = v72;
          v230[27] = v206;
        }
        ++v69;
        v70 += 4;
        if ( v69 == 7 )
        {
          v22 = v218;
          v75 = v220;
          goto LABEL_87;
        }
      }
      v22 = v218;
      v75 = v220;
      if ( v69 > 1 )
      {
LABEL_87:
        if ( BYTE1(v230[34]) )
          v76 = v230[32] == 0;
        else
          v76 = sub_11DFFC(&v230[30]);
        if ( !v76 && !(BYTE1(v230[4]) ? v230[2] == 0 : sub_11DFFC(v230)) )
        {
          if ( v69 == 7 )
            sub_946E0("Dwarf Error: bad DWP hash table, too many DWO sections [in module %s]", *v5);
          v78 = sub_11E0C4(v230);
          v79 = sub_11E0C4(&v230[5]);
          v80 = sub_11E0C4(&v230[10]);
          v81 = sub_11E0C4(&v230[25]);
          sub_931D8((char **)&src, "virtual-dwo/%d-%d-%d-%d", v78, v79, v80, v81);
          v82 = (_DWORD **)sub_11CF98((int)src, a2);
          v83 = *v82;
          v84 = v82;
          if ( *v82 )
          {
            if ( dword_4872F4 )
            {
              v201 = (_DWORD *)sub_242FC8(v82);
              sub_2594B0(*v201, "Using existing virtual DWO: %s\n", (const char *)src);
              v83 = *v84;
            }
            v211 = (struct obstack *)(v75 + 48);
          }
          else
          {
            if ( dword_4872F4 )
            {
              v204 = (_DWORD *)sub_242FC8(v82);
              sub_2594B0(*v204, "Creating virtual DWO: %s\n", (const char *)src);
            }
            v154 = *(_DWORD *)(v75 + 64);
            v211 = (struct obstack *)(v75 + 48);
            v155 = *(_DWORD *)(v75 + 60);
            v156 = v154 - v155;
            if ( (unsigned int)(v154 - v155) <= 0xCB )
            {
              obstack_newchunk((struct obstack *)(v75 + 48), 204);
              v155 = *(_DWORD *)(v75 + 60);
              v154 = *(_DWORD *)(v75 + 64);
            }
            v83 = *(_DWORD **)(v75 + 56);
            v157 = (_DWORD *)(v155 + 204);
            v158 = *(_DWORD *)(v75 + 72);
            *(_DWORD *)(v75 + 60) = v157;
            v159 = v157 == v83;
            if ( v157 == v83 )
              v156 = *(_BYTE *)(v75 + 88);
            v160 = ((unsigned int)v157 + v158) & ~v158;
            *(_DWORD *)(v75 + 60) = v160;
            if ( v159 )
              *(_BYTE *)(v75 + 88) = v156 | 2;
            if ( v160 - *(_DWORD *)(v75 + 52) > (unsigned int)(v154 - *(_DWORD *)(v75 + 52)) )
            {
              v160 = v154;
              *(_DWORD *)(v75 + 60) = v154;
            }
            *(_DWORD *)(v75 + 56) = v160;
            memset(v83, 0, 0xCCu);
            v161 = n;
            v162 = *(void **)(v75 + 60);
            if ( *(_DWORD *)(v75 + 64) - (int)v162 < n + 1 )
            {
              obstack_newchunk((struct obstack *)(v75 + 48), n + 1);
              v162 = *(void **)(v75 + 60);
            }
            memcpy(v162, src, v161);
            v163 = *(_DWORD *)(v75 + 60);
            v164 = v163 + v161 + 1;
            *(_DWORD *)(v75 + 60) = v164;
            *(_BYTE *)(v163 + v161) = 0;
            v165 = *(_DWORD *)(v75 + 60);
            v166 = *(_DWORD *)(v75 + 56);
            v167 = *(_DWORD *)(v75 + 64);
            if ( v166 == v165 )
              LOBYTE(v164) = *(_BYTE *)(v75 + 88);
            v168 = (v165 + *(_DWORD *)(v75 + 72)) & ~*(_DWORD *)(v75 + 72);
            *(_DWORD *)(v75 + 60) = v168;
            if ( v166 == v165 )
              *(_BYTE *)(v75 + 88) = v164 | 2;
            if ( v168 - *(_DWORD *)(v75 + 52) > (unsigned int)(v167 - *(_DWORD *)(v75 + 52)) )
            {
              *(_DWORD *)(v75 + 60) = v167;
              v168 = v167;
            }
            v169 = v230[0];
            v170 = v230[1];
            v171 = v230[2];
            v172 = v230[3];
            *(_DWORD *)(v75 + 56) = v168;
            *v83 = v166;
            v173 = v230[4];
            v83[1] = a2;
            v83[3] = v169;
            v83[4] = v170;
            v83[5] = v171;
            v83[6] = v172;
            v174 = v230[5];
            v175 = v230[6];
            v176 = v230[7];
            v177 = v230[8];
            v83[7] = v173;
            v178 = v230[9];
            v83[8] = v174;
            v83[9] = v175;
            v83[10] = v176;
            v83[11] = v177;
            v179 = v230[10];
            v180 = v230[11];
            v181 = v230[12];
            v182 = v230[13];
            v83[12] = v178;
            v183 = v230[14];
            v83[13] = v179;
            v83[14] = v180;
            v83[15] = v181;
            v83[16] = v182;
            v83[17] = v183;
            v184 = v230[16];
            v185 = v230[17];
            v186 = v230[18];
            v83[23] = v230[15];
            v83[24] = v184;
            v83[25] = v185;
            v83[26] = v186;
            v187 = v230[20];
            v188 = v230[21];
            v189 = v230[22];
            v190 = v230[23];
            v83[27] = v230[19];
            v83[28] = v187;
            v83[29] = v188;
            v83[30] = v189;
            v83[31] = v190;
            v191 = v230[25];
            v192 = v230[26];
            v193 = v230[27];
            v194 = v230[28];
            v83[32] = v230[24];
            v195 = v230[29];
            v83[38] = v191;
            v83[39] = v192;
            v83[40] = v193;
            v83[41] = v194;
            v196 = v5[3];
            v197 = v5[4];
            v198 = v5[5];
            v199 = v5[6];
            v83[42] = v195;
            v200 = v5[7];
            v83[33] = v196;
            v83[34] = v197;
            v83[35] = v198;
            v83[36] = v199;
            v83[37] = v200;
            *v84 = v83;
          }
          v85 = *(_DWORD *)(v75 + 64);
          v86 = *(_DWORD *)(v75 + 60);
          v87 = v85 - v86;
          if ( (unsigned int)(v85 - v86) <= 0x1F )
          {
            obstack_newchunk(v211, 32);
            v86 = *(_DWORD *)(v75 + 60);
            v85 = *(_DWORD *)(v75 + 64);
          }
          v49 = *(_DWORD *)(v75 + 56);
          v88 = v86 + 32;
          v89 = *(_DWORD *)(v75 + 72);
          *(_DWORD *)(v75 + 60) = v88;
          v90 = v88 == v49;
          if ( v88 == v49 )
            v87 = *(_BYTE *)(v75 + 88);
          v91 = (v88 + v89) & ~v89;
          *(_DWORD *)(v75 + 60) = v91;
          if ( v90 )
            *(_BYTE *)(v75 + 88) = v87 | 2;
          if ( v91 - *(_DWORD *)(v75 + 52) > (unsigned int)(v85 - *(_DWORD *)(v75 + 52)) )
          {
            *(_DWORD *)(v75 + 60) = v85;
            v91 = v85;
          }
          *(_DWORD *)(v75 + 56) = v91;
          *(_DWORD *)(v49 + 4) = 0;
          *(_DWORD *)(v49 + 16) = 0;
          *(_DWORD *)(v49 + 20) = 0;
          *(_DWORD *)(v49 + 24) = 0;
          *(_DWORD *)(v49 + 28) = 0;
          v92 = *(_DWORD *)(v75 + 64);
          v93 = *(_DWORD *)(v75 + 60);
          *(_DWORD *)v49 = v83;
          v94 = v92 - v93;
          *(_QWORD *)(v49 + 8) = a3;
          if ( (unsigned int)(v92 - v93) <= 0x13 )
          {
            obstack_newchunk(v211, 20);
            v93 = *(_DWORD *)(v75 + 60);
            v92 = *(_DWORD *)(v75 + 64);
          }
          v95 = *(_DWORD *)(v75 + 56);
          v96 = v93 + 20;
          v97 = *(_DWORD *)(v75 + 72);
          *(_DWORD *)(v75 + 60) = v96;
          if ( v96 == v95 )
            v94 = *(_BYTE *)(v75 + 88);
          v98 = (v96 + v97) & ~v97;
          *(_DWORD *)(v75 + 60) = v98;
          if ( v96 == v95 )
            *(_BYTE *)(v75 + 88) = v94 | 2;
          if ( v98 - *(_DWORD *)(v75 + 52) > (unsigned int)(v92 - *(_DWORD *)(v75 + 52)) )
          {
            *(_DWORD *)(v75 + 60) = v92;
            v98 = v92;
          }
          v99 = v230[30];
          v100 = v230[31];
          v101 = v230[32];
          v102 = v230[33];
          *(_DWORD *)(v75 + 56) = v98;
          *(_DWORD *)(v49 + 16) = v95;
          *(_DWORD *)v95 = v99;
          *(_DWORD *)(v95 + 4) = v100;
          *(_DWORD *)(v95 + 8) = v101;
          *(_DWORD *)(v95 + 12) = v102;
          *(int **)(v95 + 16) = v230[34];
          v65 = src;
          if ( src == v228 )
            goto LABEL_60;
          goto LABEL_59;
        }
      }
      sub_946E0("Dwarf Error: bad DWP hash table, missing DWO sections [in module %s]", *v5);
    }
    if ( !v21 )
      return 0;
    ++v15;
    v9 = (v9 + v10) & v208;
    if ( *((_DWORD *)v19 + 3) <= v15 )
      goto LABEL_175;
  }
}
