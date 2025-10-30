int __fastcall sub_4DB18(_DWORD *a1)
{
  _DWORD *v1; // r11
  unsigned __int8 *v2; // r4
  void *v3; // r1
  int result; // r0
  int v5; // r2
  bool v6; // cc
  int v7; // r3
  int v8; // r1
  int v9; // r6
  int v10; // r8
  int v11; // r10
  int v12; // r11
  int v13; // r3
  int v14; // r6
  char *v15; // r8
  int v16; // r5
  __int16 v17; // r9
  int v18; // r3
  bool v19; // zf
  const char *v20; // r7
  int v21; // r0
  int v22; // r1
  _DWORD *v23; // r2
  __int16 v24; // r3
  int v25; // r3
  unsigned __int8 *v26; // r1
  unsigned int v27; // r5
  unsigned int v28; // r3
  int v29; // r9
  _DWORD *v30; // r6
  int v31; // r5
  unsigned int v32; // r3
  bool v33; // cc
  int v34; // r3
  const char *v35; // r7
  int v36; // r2
  int v37; // r3
  int v38; // r7
  int v39; // r12
  int v40; // r7
  signed int v41; // r0
  int v42; // r3
  char *v43; // r1
  int v44; // r2
  unsigned __int8 v45; // t1
  unsigned __int8 *v46; // r0
  int v47; // r0
  int v48; // r9
  int v49; // r8
  unsigned __int8 *v50; // r7
  const char *v51; // r4
  char *v52; // r5
  const char *v53; // r1
  size_t v54; // r2
  size_t v55; // r6
  const char *v56; // t1
  const unsigned __int16 **v57; // r0
  unsigned __int8 *v58; // r2
  unsigned __int8 *v59; // r12
  int v60; // r1
  unsigned __int8 v61; // r3
  int v62; // t1
  unsigned __int8 *v63; // lr
  bool v64; // r3
  unsigned __int8 *v65; // r1
  int v66; // r3
  int v67; // r8
  char *v68; // r6
  int v69; // r5
  int v70; // r3
  bool v71; // zf
  const char *v72; // r3
  int v73; // r2
  int v74; // r7
  _DWORD *v75; // r6
  int v76; // r5
  int v77; // r3
  int v78; // r3
  int v79; // r3
  const char *v80; // r9
  int v81; // r7
  _DWORD *v82; // r6
  int v83; // r3
  int v84; // r2
  int v85; // r3
  _DWORD *v86; // r6
  int v87; // r3
  int v88; // r3
  __int16 v89; // r12
  __int16 v90; // r2
  int v91; // r1
  _BOOL4 v92; // r8
  unsigned __int8 *v93; // r3
  unsigned __int8 *v94; // r2
  unsigned __int8 v95; // t1
  int (**v96)(); // r3
  int v97; // r3
  int v98; // r2
  int v99; // t1
  int v100; // r3
  int v101; // r1
  int v102; // r12
  int v103; // r2
  const char *v104; // r8
  unsigned int v105; // r7
  char *v106; // r3
  int (**v107)(); // r3
  char *v108; // r5
  size_t v109; // r7
  int v110; // r0
  int v111; // r12
  int v112; // r3
  int v113; // r1
  int v114; // r2
  _BYTE *v115; // r3
  char v116; // t1
  int v117; // r0
  int v118; // r12
  int v119; // r3
  int v120; // lr
  int v121; // r8
  int v122; // r1
  int v123; // r2
  int v124; // r12
  int v125; // lr
  int v126; // r6
  int v127; // r1
  int v128; // r2
  _BYTE *v129; // r3
  char v130; // t1
  int v131; // r2
  int v132; // r12
  int v133; // r1
  int v134; // r3
  int v135; // r0
  int v136; // r2
  int v137; // r3
  _BOOL4 v138; // r1
  int v139; // r0
  int v140; // r1
  int v141; // r12
  int v142; // r0
  int v143; // r2
  int v144; // r3
  int v145; // lr
  int v146; // r9
  bool v147; // zf
  char v148; // r2
  int v149; // r3
  struct tm *v150; // r0
  int tm_mday; // r1
  int tm_year; // r3
  int v153; // r0
  int v154; // r12
  int v155; // r1
  int v156; // r2
  int (**v157)(); // r3
  char *v158; // r7
  size_t v159; // r5
  int v160; // r0
  int v161; // r3
  int v162; // r12
  int v163; // r1
  int v164; // r3
  int v165; // r1
  int v166; // r12
  int v167; // r2
  int v168; // r1
  int v169; // r8
  int v170; // r0
  int v171; // r12
  int v172; // lr
  int v173; // r7
  int v174; // r1
  int v175; // r2
  int v176; // r2
  _BOOL4 v177; // r1
  int v178; // r12
  int v179; // r0
  int v180; // r1
  int v181; // r12
  int v182; // r2
  int v183; // r3
  int v184; // r12
  int v185; // [sp+0h] [bp-17Ch]
  int v186; // [sp+24h] [bp-158h]
  unsigned __int8 *v188; // [sp+2Ch] [bp-150h]
  _DWORD *v189; // [sp+34h] [bp-148h]
  char *s2; // [sp+38h] [bp-144h]
  __int16 s2a; // [sp+38h] [bp-144h]
  char *s2b; // [sp+38h] [bp-144h]
  char *s2c; // [sp+38h] [bp-144h]
  _WORD *v194; // [sp+3Ch] [bp-140h]
  int v195; // [sp+5Ch] [bp-120h] BYREF
  time_t timer; // [sp+60h] [bp-11Ch] BYREF
  _DWORD v197[2]; // [sp+64h] [bp-118h] BYREF
  char v198; // [sp+6Ch] [bp-110h] BYREF
  unsigned __int8 v199; // [sp+6Dh] [bp-10Fh]
  char v200; // [sp+6Eh] [bp-10Eh]
  _BYTE v201[60]; // [sp+70h] [bp-10Ch] BYREF
  char v202[100]; // [sp+ACh] [bp-D0h] BYREF
  char v203[100]; // [sp+110h] [bp-6Ch] BYREF

  v186 = a1[1];
  v1 = *(_DWORD **)(v186 + 84);
  v2 = (unsigned __int8 *)*v1;
  v188 = (unsigned __int8 *)(v1 + 14);
  v3 = v1 + 14;
  if ( *(_WORD *)(*v1 + 8) == 32 )
  {
    v41 = sub_3A784(a1, v3, 127, v197);
    v42 = *((_DWORD *)v2 + 46);
    v1[46] = v41;
    if ( v41 > 0 && v42 <= 97 )
    {
      v43 = (char *)v1 + 55;
      v44 = 0;
      do
      {
        v45 = *++v43;
        v46 = &v2[v42];
        ++v44;
        ++v42;
        v46[84] = v45;
        v47 = v1[46];
        *((_DWORD *)v2 + 46) = v42;
      }
      while ( v47 > v44 && v42 != 98 );
    }
    v2[v42 + 84] = 0;
    result = v1[46];
  }
  else
  {
    result = (int)sub_3A6D4((int)a1, (bool *)v3, 128, v197);
    v1[46] = result;
  }
  if ( !result )
    return result;
  v5 = *((unsigned __int16 *)v2 + 6);
  v6 = v5 != 0;
  if ( *((_WORD *)v2 + 6) )
    v6 = (unsigned int)(v5 - 3) > 1;
  v7 = !v6;
  if ( !v6 )
  {
    *((_DWORD *)v2 + 46) = 0;
    return result;
  }
  result = v197[0];
  v8 = v197[1];
  v9 = *((_DWORD *)v2 + 46);
  v10 = *((__int16 *)v2 + 4);
  v1[58] = v197[0];
  v1[59] = v8;
  v11 = v9 - 1;
  v189 = v1;
  v12 = v7;
  v13 = *((_DWORD *)v2 + 5) + 1;
  *((_WORD *)v2 + 6) = 2;
  *((_DWORD *)v2 + 5) = v13;
  v2[14] = 1;
  while ( 1 )
  {
    if ( v10 != 32 )
    {
      v26 = v188;
      v27 = v189[46];
      goto LABEL_34;
    }
    if ( v2[192] )
    {
      v38 = *((_DWORD *)v2 + 46);
      if ( v12 >= v38 )
        goto LABEL_83;
      v48 = v12;
      v49 = *((_DWORD *)v2 + 46);
      v50 = v2;
      s2 = (char *)*((_DWORD *)v2 + 47);
      v51 = *(const char **)s2;
      while ( !v51 )
      {
LABEL_81:
        if ( ++v48 == v49 )
        {
          v2 = v50;
          v38 = v49;
          v10 = 32;
          goto LABEL_83;
        }
      }
      v52 = s2;
      v53 = v51;
      while ( 1 )
      {
        v54 = *((_DWORD *)v52 + 1);
        v55 = v54 + v48;
        if ( v49 >= (int)(v54 + v48) )
        {
          result = strncmp((const char *)&v50[v48 + 84], v53, v54);
          if ( !result )
            break;
        }
        v56 = (const char *)*((_DWORD *)v52 + 2);
        v52 += 8;
        v53 = v56;
        if ( !v56 )
          goto LABEL_81;
      }
      v11 = v55 - 1;
      v2 = v50;
      v38 = v49;
      v10 = 32;
      if ( !v55 )
      {
LABEL_83:
        if ( v38 <= 97 )
          goto LABEL_153;
        if ( v12 > 0 )
        {
          v39 = v12;
          goto LABEL_157;
        }
        v11 = v38 - 1;
        *((_DWORD *)v2 + 100) = 0;
        *((_DWORD *)v2 + 74) = 0;
LABEL_88:
        v57 = _ctype_b_loc();
        v58 = &v2[v12 + 83];
        v59 = v2 + 192;
        v60 = 0;
        do
        {
          v62 = *++v58;
          v61 = v62;
          *++v59 = v62;
          if ( ((*v57)[v62] & 2) == 0 )
          {
            v63 = &v2[v60++];
            v63[300] = v61;
            *((_DWORD *)v2 + 100) = v60;
          }
        }
        while ( v58 != &v2[v11 + 84] );
        v27 = v11 - v12 + 1;
        *((_DWORD *)v2 + 74) = v27;
        v64 = v60 == 0;
        goto LABEL_93;
      }
    }
    else
    {
      v11 = *((_DWORD *)v2 + 46) - 1;
    }
    *((_DWORD *)v2 + 100) = 0;
    *((_DWORD *)v2 + 74) = 0;
    if ( v12 <= v11 )
      goto LABEL_88;
    v60 = 0;
    v64 = 1;
    v27 = 0;
LABEL_93:
    result = v2[404];
    v65 = &v2[v60];
    if ( v2[404] )
      v66 = v64;
    else
      v66 = 0;
    v2[v27 + 193] = 0;
    v65[300] = 0;
    if ( v66 )
    {
      if ( v11 + 1 >= *((_DWORD *)v2 + 46) )
        goto LABEL_153;
      v12 = v11 + 1;
      v25 = 2;
      goto LABEL_31;
    }
    v26 = v2 + 193;
LABEL_34:
    if ( v27 >= 0x63 )
      v27 = 99;
    _memcpy_chk(v202, v26, v27, 100);
    v202[v27] = 0;
    result = sub_4B63C(v186, 3, v202);
    v28 = *v2;
    if ( v28 == 4 )
    {
      v74 = a1[1];
      v75 = *(_DWORD **)(v74 + 84);
      v76 = *v75;
      v77 = *(__int16 *)(*v75 + 8);
      if ( v77 == 32 )
        result = v76 + 300;
      else
        result = (int)(v75 + 14);
      if ( v77 == 32 )
        v78 = *(_DWORD *)(v76 + 400);
      else
        v78 = v75[46];
      if ( *(_WORD *)(*v75 + 12) != 2 )
        goto LABEL_116;
      if ( v78 != 23 )
        goto LABEL_139;
      v139 = sscanf(
               (const char *)result,
               "%c%2s %2d/%2d/%2d %1d %2d:%2d:%2d",
               &v195,
               &v198,
               v76 + 24,
               v76 + 28,
               v76 + 32,
               &timer,
               v76 + 36,
               v76 + 40,
               v76 + 44);
      v200 = 0;
      s2c = (char *)v139;
      if ( v139 == 9 && (unsigned __int8)v195 == 39 )
      {
        switch ( v198 )
        {
          case 'O':
            v145 = v199;
            if ( v199 != 75 )
              goto LABEL_254;
            break;
          case 'N':
            v145 = v199;
            if ( v199 != 71 )
              goto LABEL_254;
            break;
          case 'E':
            v145 = v199;
            if ( v199 != 82 )
              goto LABEL_254;
            break;
          default:
            goto LABEL_254;
        }
        v140 = *(_DWORD *)(v76 + 28);
        v141 = *(_DWORD *)(v76 + 32);
        if ( (unsigned int)(v140 - 1) > 0xB || (unsigned int)(v141 - 1) > 0x1E )
          goto LABEL_255;
        v142 = *(_DWORD *)(v76 + 36);
        if ( timer > 6 )
          goto LABEL_256;
        v143 = *(_DWORD *)(v76 + 40);
        if ( v142 > 23 )
          goto LABEL_257;
        v144 = *(_DWORD *)(v76 + 44);
        if ( v143 > 59 || v144 > 60 )
          goto LABEL_258;
        if ( v198 == 78 )
        {
          if ( v145 == 71 )
          {
LABEL_282:
            sub_6D00C(v201, 15, "status=%s", &v198);
            sub_6D00C(v203, 99, "* Unsure timestamp : %s", v201);
            result = sub_4B63C(v74, 6, v203);
            goto LABEL_116;
          }
        }
        else if ( v198 == 69 && v145 == 82 )
        {
          goto LABEL_282;
        }
        v161 = *(_DWORD *)(v76 + 24);
        *(_DWORD *)(v76 + 48) = 0;
        *(_DWORD *)(v76 + 24) = v161 + 2000;
        result = sub_4C15C(v74, v75, (_DWORD *)v76);
        goto LABEL_116;
      }
LABEL_254:
      v140 = *(_DWORD *)(v76 + 28);
      v141 = *(_DWORD *)(v76 + 32);
LABEL_255:
      v142 = *(_DWORD *)(v76 + 36);
LABEL_256:
      v143 = *(_DWORD *)(v76 + 40);
LABEL_257:
      v144 = *(_DWORD *)(v76 + 44);
LABEL_258:
      sub_6D00C(
        v203,
        99,
        "# Invalid time : rc=%d year=%d month=%d day=%d hour=%d minute=%d second=%d",
        s2c,
        *(_DWORD *)(v76 + 24),
        v140,
        v141,
        v142,
        v143,
        v144);
LABEL_140:
      result = sub_4B63C(v74, 7, v203);
      *(_BYTE *)(v76 + 15) = 1;
      goto LABEL_27;
    }
    if ( v28 <= 4 )
      break;
    if ( v28 == 6 )
    {
      v74 = a1[1];
      v86 = *(_DWORD **)(v74 + 84);
      v76 = *v86;
      v87 = *(__int16 *)(*v86 + 8);
      if ( v87 == 32 )
        result = v76 + 300;
      else
        result = (int)(v86 + 14);
      if ( v87 == 32 )
        v88 = *(_DWORD *)(v76 + 400);
      else
        v88 = v86[46];
      if ( *(_WORD *)(*v86 + 12) != 2 )
        goto LABEL_116;
      v89 = *(_WORD *)(v76 + 18);
      v90 = v89 + 1;
      *(_WORD *)(v76 + 18) = v89 + 1;
      switch ( v88 )
      {
        case 1:
          if ( *(unsigned __int8 *)result != 229 )
          {
            sub_6D00C(v203, 99, "# Invalid reply : [%s]");
            goto LABEL_140;
          }
          if ( v90 == 1 )
          {
            *(_WORD *)(v76 + 18) = v89;
            goto LABEL_28;
          }
          if ( v90 <= 2 )
            goto LABEL_307;
          sub_6D00C(v203, 99, "# Unexpected reply : [%s]");
          goto LABEL_140;
        case 8:
          v129 = (_BYTE *)(result - 1);
          do
          {
            v130 = *++v129;
            *v129 = v130 & 0x7F;
          }
          while ( v129 != (_BYTE *)(result + 7) );
          result = sscanf((const char *)(result + 1), "%2d:%2d:%2d", v76 + 36, v76 + 40, v76 + 44);
          v131 = *(_DWORD *)(v76 + 36);
          v132 = *(_DWORD *)(v76 + 40);
          v133 = *(_DWORD *)(v76 + 44);
          if ( result != 3 || v131 > 23 || v132 > 59 || v133 > 60 )
          {
            sub_6D00C(v203, 99, "# Invalid time : rc=%d hour=%d minute=%d second=%d", result, v131, v132, v133);
            goto LABEL_140;
          }
          v147 = v131 == 23;
          if ( v131 == 23 )
            v147 = v132 == 59;
          v148 = v147;
          if ( v133 > 54 )
            v149 = v148 & 1;
          else
            v149 = 0;
          if ( v149 )
            goto LABEL_28;
          time(&timer);
          v150 = localtime(&timer);
          tm_mday = v150->tm_mday;
          tm_year = v150->tm_year;
          *(_DWORD *)(v76 + 28) = v150->tm_mon + 1;
          *(_DWORD *)(v76 + 32) = tm_mday;
          goto LABEL_301;
        case 13:
          result = sscanf(
                     (const char *)result,
                     "%2d%2d%2d%1d%2d%2d%2d",
                     v76 + 24,
                     v76 + 28,
                     v76 + 32,
                     &v195,
                     v76 + 36,
                     v76 + 40,
                     v76 + 44);
          v124 = *(_DWORD *)(v76 + 28);
          if ( result != 7 )
          {
            v125 = *(_DWORD *)(v76 + 32);
            v126 = *(_DWORD *)(v76 + 36);
            v127 = *(_DWORD *)(v76 + 40);
            v128 = *(_DWORD *)(v76 + 44);
LABEL_216:
            sub_6D00C(
              v203,
              99,
              "# Invalid time : rc=%d year=%d month=%d day=%d hour=%d minute=%d second=%d",
              result,
              *(_DWORD *)(v76 + 24),
              v124,
              v125,
              v126,
              v127,
              v128);
            goto LABEL_140;
          }
          v125 = *(_DWORD *)(v76 + 32);
          if ( (unsigned int)(v124 - 1) > 0xB || (unsigned int)(v125 - 1) > 0x1E )
          {
            v126 = *(_DWORD *)(v76 + 36);
            v127 = *(_DWORD *)(v76 + 40);
            v128 = *(_DWORD *)(v76 + 44);
            goto LABEL_216;
          }
          v126 = *(_DWORD *)(v76 + 36);
          v127 = *(_DWORD *)(v76 + 40);
          v128 = *(_DWORD *)(v76 + 44);
          if ( v195 > 6 || v126 > 23 || v127 > 59 || v128 > 60 )
            goto LABEL_216;
          break;
        case 17:
          v115 = (_BYTE *)(result - 1);
          do
          {
            v116 = *++v115;
            *v115 = v116 & 0x7F;
          }
          while ( v115 != (_BYTE *)(result + 16) );
          v117 = sscanf(
                   (const char *)(result + 1),
                   "%2d%2d%2d%2d%2d%2d%1d",
                   v76 + 24,
                   v76 + 28,
                   v76 + 32,
                   v76 + 36,
                   v76 + 40,
                   v76 + 44,
                   &v195);
          v118 = *(_DWORD *)(v76 + 28);
          v119 = v117;
          if ( v117 != 7 )
          {
            v120 = *(_DWORD *)(v76 + 32);
            v121 = *(_DWORD *)(v76 + 36);
            v122 = *(_DWORD *)(v76 + 40);
            v123 = *(_DWORD *)(v76 + 44);
            goto LABEL_213;
          }
          v120 = *(_DWORD *)(v76 + 32);
          if ( (unsigned int)(v118 - 1) > 0xB || (unsigned int)(v120 - 1) > 0x1E )
          {
            v121 = *(_DWORD *)(v76 + 36);
            v122 = *(_DWORD *)(v76 + 40);
            v123 = *(_DWORD *)(v76 + 44);
            goto LABEL_213;
          }
          v121 = *(_DWORD *)(v76 + 36);
          v122 = *(_DWORD *)(v76 + 40);
          v123 = *(_DWORD *)(v76 + 44);
          if ( v195 > 6 || v121 > 23 || v122 > 59 || v123 > 60 )
            goto LABEL_213;
LABEL_307:
          tm_year = *(_DWORD *)(v76 + 24);
LABEL_301:
          *(_DWORD *)(v76 + 24) = tm_year + 2000;
          *(_DWORD *)(v76 + 48) = 0;
          result = sub_4C15C(v74, v86, (_DWORD *)v76);
          goto LABEL_116;
        default:
          goto LABEL_139;
      }
      goto LABEL_28;
    }
    if ( v28 >= 6 )
    {
      if ( v28 != 100 )
        goto LABEL_27;
      v29 = a1[1];
      v30 = *(_DWORD **)(v29 + 84);
      v31 = *v30;
      v32 = *(unsigned __int16 *)(*v30 + 500);
      v33 = v32 > 4;
      if ( v32 != 4 )
        v33 = v32 > 1;
      v34 = *(__int16 *)(v31 + 8);
      if ( v33 )
      {
        if ( v34 == 32 )
          v35 = (const char *)(v31 + 300);
        else
          v35 = (const char *)(v30 + 14);
        if ( v34 == 32 )
          v36 = *(_DWORD *)(v31 + 400);
        else
          v36 = v30[46];
        *(_WORD *)(v31 + 496) = 0;
        if ( v36 == 7 )
        {
          if ( !strncmp(v35, "Name ? ", 7u) )
          {
            *(_WORD *)(v31 + 502) = 5;
            goto LABEL_58;
          }
LABEL_54:
          v37 = *(unsigned __int8 *)v35;
        }
        else
        {
          if ( v36 != 1 )
          {
            if ( v36 > 0 )
              goto LABEL_54;
LABEL_57:
            *(_WORD *)(v31 + 502) = 7;
            goto LABEL_58;
          }
          v37 = *(unsigned __int8 *)v35;
          if ( v37 == 62 )
          {
            *(_WORD *)(v31 + 502) = 6;
            goto LABEL_58;
          }
        }
        if ( v37 != 63 )
          goto LABEL_57;
        *(_WORD *)(v31 + 502) = 8;
LABEL_58:
        result = sub_4A8B8(v29, (int)v30, v31);
        v24 = *((_WORD *)v2 + 4);
        v10 = v24;
        if ( v24 != 32 )
          goto LABEL_29;
        goto LABEL_59;
      }
      if ( v34 == 32 )
        v104 = (const char *)(v31 + 300);
      else
        v104 = (const char *)(v30 + 14);
      if ( v34 == 32 )
        v105 = *(_DWORD *)(v31 + 400);
      else
        v105 = v30[46];
      v194 = (_WORD *)(v31 + 512);
      s2b = (char *)*(unsigned __int16 *)(v31 + 512);
      if ( v105 == 2 )
      {
        if ( !strncmp(v104, "OK", 2u) )
        {
          *(_WORD *)(v31 + 514) = 4;
          goto LABEL_188;
        }
        goto LABEL_187;
      }
      if ( v105 == 7 )
      {
        if ( !strncmp(v104, "CONNECT", 7u) )
        {
          *(_WORD *)(v31 + 514) = 5;
          goto LABEL_188;
        }
        goto LABEL_187;
      }
      if ( v105 == 4 )
      {
        if ( !strncmp(v104, "RING", 4u) )
        {
          *(_WORD *)(v31 + 514) = 6;
          goto LABEL_188;
        }
        if ( !strncmp(v104, "BUSY", 4u) )
        {
          *(_WORD *)(v31 + 514) = 11;
          goto LABEL_188;
        }
      }
      else
      {
        if ( v105 == 10 )
        {
          if ( !strncmp(v104, "NO CARRIER", 0xAu) )
          {
            *(_WORD *)(v31 + 514) = 7;
            goto LABEL_188;
          }
        }
        else
        {
          if ( v105 == 5 )
          {
            if ( !strncmp(v104, "ERROR", 5u) )
            {
              *(_WORD *)(v31 + 514) = 8;
              goto LABEL_188;
            }
            goto LABEL_187;
          }
          if ( v105 <= 7 )
          {
LABEL_185:
            if ( v105 != 9 || strncmp(v104, "NO ANSWER", 9u) )
              goto LABEL_187;
            *(_WORD *)(v31 + 514) = 12;
LABEL_188:
            result = sub_4ADCC(v29, (int)v30, (_WORD *)v31);
            v106 = (char *)(unsigned __int16)*v194;
            if ( v106 != s2b )
            {
              if ( *v194 )
              {
                if ( (__int16)v106 == 3 )
                {
                  *(_WORD *)(v31 + 502) = 2;
                  result = sub_4A8B8(v29, (int)v30, v31);
                }
              }
              else
              {
                *(_WORD *)(v31 + 502) = 3;
                result = sub_4A8B8(v29, (int)v30, v31);
              }
            }
            goto LABEL_28;
          }
        }
        if ( !strncmp(v104, "CONNECT ", 8u) )
        {
          *(_WORD *)(v31 + 514) = 9;
          goto LABEL_188;
        }
        if ( v105 != 11 )
          goto LABEL_185;
        if ( !strncmp(v104, "NO DAILTONE", 0xBu) )
        {
          *(_WORD *)(v31 + 514) = 10;
          goto LABEL_188;
        }
      }
LABEL_187:
      *(_WORD *)(v31 + 514) = 13;
      goto LABEL_188;
    }
    v14 = a1[1];
    v15 = *(char **)(v14 + 84);
    v16 = *(_DWORD *)v15;
    v79 = *(__int16 *)(*(_DWORD *)v15 + 8);
    if ( v79 == 32 )
      v80 = (const char *)(v16 + 300);
    else
      v80 = v15 + 56;
    if ( v79 == 32 )
      v81 = *(_DWORD *)(v16 + 400);
    else
      v81 = *((_DWORD *)v15 + 46);
    if ( v81 <= 5 )
    {
      if ( v81 == 5 )
      {
        result = strncmp(v80, "$Cmd>", 5u);
        if ( !result )
          goto LABEL_28;
      }
    }
    else
    {
      result = strncmp(v80, "$GP", 3u);
      if ( !result )
        goto LABEL_28;
      result = strncmp(v80, "$PFEC", 5u);
      if ( !result )
        goto LABEL_28;
      if ( !strncmp(v80, "$Cmd>", 5u) )
      {
        v81 -= 5;
        v80 += 5;
        if ( v81 <= 5 )
          goto LABEL_162;
        result = strncmp(v80, "$GP", 3u);
        if ( !result )
          goto LABEL_28;
      }
      result = strncmp(v80, "$PFEC", 5u);
      if ( !result )
        goto LABEL_28;
    }
LABEL_162:
    s2a = *(_WORD *)(v16 + 16);
    v96 = &off_B56E4[4 * s2a];
    if ( !v96[241] )
      goto LABEL_237;
    if ( (int (*)())v81 != v96[243] )
      goto LABEL_25;
    v134 = *((unsigned __int8 *)v96 + 960);
    switch ( v134 )
    {
      case 2:
        if ( *(int *)(v16 + 56) > 1 )
        {
LABEL_202:
          sub_6D00C(v203, 99, "# Too many reply : count=%d");
          goto LABEL_26;
        }
        v179 = sscanf(v80, "%2d:%2d:%2d", v16 + 36, v16 + 40, v16 + 44);
        v180 = *(_DWORD *)(v16 + 36);
        v181 = *(_DWORD *)(v16 + 40);
        v182 = *(_DWORD *)(v16 + 44);
        if ( v179 != 3 || v180 > 23 || v181 > 59 || v182 > 60 )
        {
          sub_6D00C(v203, 99, "# Invalid time : rc=%d hour=%d minute=%d second=%d", v179, v180, v181, v182);
          goto LABEL_26;
        }
        v183 = *(_DWORD *)(v16 + 56);
        result = 0;
        v184 = v181 + 60 * v180;
        v163 = v183 + 1;
        *(_DWORD *)(v16 + 4 * v183 + 60) = v182 + 60 * v184;
        *(_DWORD *)(v16 + 56) = v183 + 1;
        *(_DWORD *)(v16 + 48) = 0;
        break;
      case 4:
        result = strncmp(v80, "*R", 2u);
        if ( result )
        {
          result = strncmp(v80, "*G", 2u);
          if ( result )
          {
            result = strncmp(v80, "*U", 2u);
            if ( result )
            {
              result = strncmp(v80, "+U", 2u);
              if ( result )
              {
LABEL_208:
                sub_6D00C(v203, 99, "# Invalid reply : [%s]");
                goto LABEL_26;
              }
            }
          }
        }
        if ( *(_DWORD *)(v16 + 56) == 2 )
        {
LABEL_381:
          v176 = *(_DWORD *)(v16 + 64);
          v137 = *(_DWORD *)(v16 + 60);
          v177 = v176 - 2 <= v137;
          if ( v176 < v137 )
            v177 = 0;
          if ( v177 )
          {
LABEL_345:
            result = sub_4C15C(v14, v15, (_DWORD *)v16);
          }
          else
          {
            v185 = *(_DWORD *)(v16 + 64);
            if ( v176 >= v137 )
              goto LABEL_252;
LABEL_339:
            sub_6D00C(v203, 99, "* Over midnight : timestamp=%d, %d");
            result = sub_4B63C(v14, 4, v203);
          }
LABEL_116:
          *((_WORD *)v2 + 6) = 3;
          goto LABEL_28;
        }
        goto LABEL_315;
      case 1:
        v160 = sscanf(v80, "%4d/%2d/%2d", v16 + 24, v16 + 28, v16 + 32);
        v111 = *(_DWORD *)(v16 + 24);
        v112 = v160;
        if ( v160 != 3 )
        {
          v113 = *(_DWORD *)(v16 + 28);
          v114 = *(_DWORD *)(v16 + 32);
LABEL_205:
          sub_6D00C(v203, 99, "# Invalid date : rc=%d year=%d month=%d day=%d", v112, v111, v113, v114);
LABEL_26:
          result = sub_4B63C(v14, 7, v203);
          *(_BYTE *)(v16 + 15) = 1;
          goto LABEL_27;
        }
        v113 = *(_DWORD *)(v16 + 28);
        if ( (unsigned int)(v111 - 2000) > 0x62 )
        {
          v114 = *(_DWORD *)(v16 + 32);
          goto LABEL_205;
        }
        v114 = *(_DWORD *)(v16 + 32);
        if ( (unsigned int)(v113 - 1) > 0xB )
          goto LABEL_205;
        result = v114 - 1;
        if ( (unsigned int)(v114 - 1) > 0x1E )
          goto LABEL_205;
        v163 = *(_DWORD *)(v16 + 56);
        break;
      default:
        goto LABEL_208;
    }
    if ( v163 == 2 )
      goto LABEL_381;
    s2a = *(_WORD *)(v16 + 16);
    if ( !off_B56E4[4 * s2a + 241] )
      goto LABEL_345;
LABEL_315:
    *(_WORD *)(v16 + 16) = s2a + 1;
    v157 = &off_B56E4[4 * (__int16)(s2a + 1)];
    v158 = (char *)v157[241];
    if ( !v158 )
    {
      *(_WORD *)(v16 + 12) = 3;
      goto LABEL_116;
    }
    v159 = (size_t)v157[242];
    if ( v159 != write(*((_DWORD *)v15 + 7), v157[241], v159) )
      sub_39C88(v14, 3);
    result = sub_4B63C(v14, 2, v158);
LABEL_28:
    v24 = *((_WORD *)v2 + 4);
    v10 = v24;
    if ( v24 != 32 )
      goto LABEL_29;
LABEL_59:
    v38 = *((_DWORD *)v2 + 46);
    v12 = v11 + 1;
    if ( v11 + 1 >= v38 )
    {
      v39 = v11 + 1;
      if ( v12 <= 0 )
        goto LABEL_65;
      goto LABEL_62;
    }
    v25 = *((unsigned __int16 *)v2 + 6);
    v10 = 32;
LABEL_31:
    if ( v25 != 2 )
      goto LABEL_153;
  }
  if ( v28 != 2 )
  {
    if ( v28 > 2 )
    {
      v74 = a1[1];
      v82 = *(_DWORD **)(v74 + 84);
      v76 = *v82;
      v83 = *(__int16 *)(*v82 + 8);
      v84 = *(__int16 *)(*v82 + 2);
      if ( v83 == 32 )
        result = v76 + 300;
      else
        result = (int)(v82 + 14);
      if ( v83 == 32 )
        v85 = *(_DWORD *)(v76 + 400);
      else
        v85 = v82[46];
      if ( v84 == 1 )
      {
        if ( v85 != 15 )
        {
LABEL_139:
          sub_6D00C(v203, 99, "# Invalid length : length=%d");
          goto LABEL_140;
        }
        v97 = result - 1;
        v98 = 0;
        do
        {
          v99 = *(unsigned __int8 *)++v97;
          v98 ^= v99;
        }
        while ( v97 != result + 12 );
        v100 = *(unsigned __int8 *)(result + 13);
        v101 = (v98 >> 4) | 0x30;
        v102 = *(unsigned __int8 *)(result + 14);
        v103 = v98 & 0xF | 0x30;
        if ( v101 != v100 || v103 != v102 )
        {
          sub_6D00C(v201, 59, " BCC error : Recv=%02X,%02X / Calc=%02X,%02X ", v100, v102, v101, v103);
          sub_6D00C(v203, 99, "# Invalid reply : [%s]");
          goto LABEL_140;
        }
      }
      else
      {
        if ( v84 != 2 && v84 != 3 )
          goto LABEL_116;
        if ( v85 != 17 )
          goto LABEL_139;
      }
      v135 = sscanf(
               (const char *)result,
               "%2d%2d%2d%*1d%2d%2d%2d",
               v76 + 24,
               v76 + 28,
               v76 + 32,
               v76 + 36,
               v76 + 40,
               v76 + 44);
      v118 = *(_DWORD *)(v76 + 28);
      v119 = v135;
      if ( v135 == 6 )
      {
        v146 = v118 - 1;
        v120 = *(_DWORD *)(v76 + 32);
        if ( (unsigned int)(v118 - 1) <= 0xB )
        {
          v121 = *(_DWORD *)(v76 + 36);
          v122 = *(_DWORD *)(v76 + 40);
          v123 = *(_DWORD *)(v76 + 44);
          if ( (unsigned int)(v120 - 1) > 0x1E || v121 > 23 || v122 > 59 || v123 > 60 )
            goto LABEL_213;
          v166 = *(_DWORD *)(v76 + 24);
          v6 = (unsigned int)*(unsigned __int16 *)(v76 + 2) - 2 > 1;
          *(_DWORD *)(v76 + 24) = v166 + 2000;
          if ( !v6 )
          {
            v167 = v123 - 1;
            *(_DWORD *)(v76 + 44) = v167;
            *(_DWORD *)(v76 + 48) = 500;
            if ( v167 < 0 )
            {
              v168 = v122 - 1;
              *(_DWORD *)(v76 + 40) = v168;
              *(_DWORD *)(v76 + 44) = 59;
              if ( v168 < 0 )
              {
                v169 = v121 - 1;
                *(_DWORD *)(v76 + 40) = 59;
                *(_DWORD *)(v76 + 36) = v169;
                if ( v169 < 0 )
                {
                  *(_DWORD *)(v76 + 32) = v120 - 1;
                  *(_DWORD *)(v76 + 36) = 23;
                  if ( v120 == 1 )
                  {
                    *(_DWORD *)(v76 + 28) = v146;
                    if ( !v146 )
                    {
                      *(_DWORD *)(v76 + 28) = 12;
                      *(_DWORD *)(v76 + 24) = v166 + 1999;
                    }
                  }
                }
              }
            }
          }
          result = sub_4C15C(v74, v82, (_DWORD *)v76);
          if ( *(_WORD *)(v76 + 2) == 3 )
          {
            if ( write(v82[7], "#", 1u) != 1 )
              sub_39C88(v74, 3);
            result = sub_4B63C(v74, 2, "#");
          }
          goto LABEL_116;
        }
        v121 = *(_DWORD *)(v76 + 36);
        v122 = *(_DWORD *)(v76 + 40);
        v123 = *(_DWORD *)(v76 + 44);
      }
      else
      {
        v120 = *(_DWORD *)(v76 + 32);
        v121 = *(_DWORD *)(v76 + 36);
        v122 = *(_DWORD *)(v76 + 40);
        v123 = *(_DWORD *)(v76 + 44);
      }
LABEL_213:
      sub_6D00C(
        v203,
        99,
        "# Invalid time : rc=%d year=%d month=%d day=%d hour=%d minute=%d second=%d",
        v119,
        *(_DWORD *)(v76 + 24),
        v118,
        v120,
        v121,
        v122,
        v123);
      goto LABEL_140;
    }
    if ( v28 == 1 )
    {
      v14 = a1[1];
      v15 = *(char **)(v14 + 84);
      v16 = *(_DWORD *)v15;
      v17 = *(_WORD *)(*(_DWORD *)v15 + 16);
      v18 = *(__int16 *)(*(_DWORD *)v15 + 8);
      v19 = v18 == 32;
      if ( v18 == 32 )
        v20 = (const char *)(v16 + 300);
      else
        v20 = v15 + 56;
      v21 = v17;
      v22 = 16 * v17;
      if ( v18 == 32 )
        v18 = *(_DWORD *)(v16 + 400);
      v23 = (int (**)())((char *)&off_B56E4[v21] + v22);
      if ( !v19 )
        v18 = *((_DWORD *)v15 + 46);
      if ( v23[206] )
      {
        if ( v23[208] == v18 || v18 == v23[209] )
        {
          switch ( *((_BYTE *)&off_B56E4[v21 + 205] + v22) )
          {
            case 1:
              v110 = sscanf(v20, "%4d/%2d/%2d", v16 + 24, v16 + 28, v16 + 32);
              v111 = *(_DWORD *)(v16 + 24);
              v112 = v110;
              if ( v110 != 3 )
              {
                v113 = *(_DWORD *)(v16 + 28);
                v114 = *(_DWORD *)(v16 + 32);
                goto LABEL_205;
              }
              v113 = *(_DWORD *)(v16 + 28);
              if ( (unsigned int)(v111 - 2000) > 0x62 )
              {
                v114 = *(_DWORD *)(v16 + 32);
                goto LABEL_205;
              }
              v114 = *(_DWORD *)(v16 + 32);
              if ( (unsigned int)(v113 - 1) > 0xB )
                goto LABEL_205;
              result = v114 - 1;
              if ( (unsigned int)(v114 - 1) > 0x1E )
                goto LABEL_205;
              v162 = *(_DWORD *)(v16 + 56);
              goto LABEL_336;
            case 2:
            case 3:
              if ( *(int *)(v16 + 56) > 1 )
                goto LABEL_202;
              v153 = sscanf(v20, "%2d:%2d:%2d", v16 + 36, v16 + 40, v16 + 44);
              v154 = *(_DWORD *)(v16 + 36);
              v155 = *(_DWORD *)(v16 + 40);
              v156 = *(_DWORD *)(v16 + 44);
              if ( v153 != 3 || v154 > 23 || v155 > 59 || v156 > 60 )
              {
                sub_6D00C(
                  v203,
                  99,
                  "# Invalid time : rc=%d hour=%d minute=%d second=%d",
                  v153,
                  v154,
                  *(_DWORD *)(v16 + 40),
                  v156);
                goto LABEL_26;
              }
              v164 = *(_DWORD *)(v16 + 56);
              result = 0;
              v165 = v155 + 60 * v154;
              v162 = v164 + 1;
              *(_DWORD *)(v16 + 4 * v164 + 60) = v156 + 60 * v165;
              *(_DWORD *)(v16 + 56) = v164 + 1;
              *(_DWORD *)(v16 + 48) = 0;
LABEL_336:
              if ( v162 != 2 )
              {
                v17 = *(_WORD *)(v16 + 16);
                if ( !off_B56E4[5 * v17 + 206] )
                  goto LABEL_116;
LABEL_197:
                *(_WORD *)(v16 + 16) = v17 + 1;
                v107 = &off_B56E4[5 * (__int16)(v17 + 1)];
                v108 = (char *)v107[206];
                if ( !v108 )
                  goto LABEL_116;
                v109 = (size_t)v107[207];
                if ( v109 != write(*((_DWORD *)v15 + 7), v107[206], v109) )
                  sub_39C88(v14, 3);
                result = sub_4B63C(v14, 2, v108);
                goto LABEL_28;
              }
LABEL_248:
              v136 = *(_DWORD *)(v16 + 64);
              v137 = *(_DWORD *)(v16 + 60);
              v138 = v136 - 2 <= v137;
              if ( v136 < v137 )
                v138 = 0;
              if ( v138 )
                goto LABEL_345;
              v185 = *(_DWORD *)(v16 + 64);
              if ( v136 < v137 )
                goto LABEL_339;
              break;
            case 4:
              result = strncmp(v20, "adjusted", 8u);
              if ( result )
              {
                result = strncmp(v20, "unadjusted", 0xAu);
                if ( result )
                  goto LABEL_208;
              }
              goto LABEL_196;
            case 5:
              result = strncmp(v20, "valid", 5u);
              if ( result )
              {
                result = strncmp(v20, "invalid", 7u);
                if ( result )
                  goto LABEL_208;
              }
LABEL_196:
              if ( *(_DWORD *)(v16 + 56) != 2 )
                goto LABEL_197;
              goto LABEL_248;
            default:
              goto LABEL_208;
          }
LABEL_252:
          sub_6D00C(v203, 99, "# Slow reply : timestamp=%d, %d", v137, v185);
        }
        else
        {
LABEL_25:
          sub_6D00C(v203, 99, "# Invalid length : length=%d");
        }
      }
      else
      {
LABEL_237:
        sub_6D00C(v203, 99, "# Unexpected reply : [%s]");
      }
      goto LABEL_26;
    }
LABEL_27:
    *((_WORD *)v2 + 6) = 4;
    goto LABEL_28;
  }
  v67 = a1[1];
  v68 = *(char **)(v67 + 84);
  v69 = *(_DWORD *)v68;
  v70 = *(__int16 *)(*(_DWORD *)v68 + 8);
  v71 = v70 == 32;
  if ( v70 == 32 )
    v72 = (const char *)(v69 + 300);
  else
    v72 = v68 + 56;
  if ( v71 )
    v73 = *(_DWORD *)(v69 + 400);
  else
    v73 = *((_DWORD *)v68 + 46);
  if ( *(_WORD *)(*(_DWORD *)v68 + 16) != 1 )
  {
    sub_6D00C(v203, 99, "# Unexpected reply : [%s]", v72);
    goto LABEL_108;
  }
  v91 = *(_DWORD *)(v69 + 296);
  if ( v91 > 16 && *(_BYTE *)(v69 + v91 + 192) == 3 )
  {
    if ( v73 != 15 )
    {
      sub_6D00C(v203, 99, "# Invalid length : length=%d", v73);
      result = sub_4B63C(v67, 7, v203);
      *(_BYTE *)(v69 + 15) = 1;
      goto LABEL_27;
    }
    v170 = sscanf(
             v72,
             "J%2d%2d%2d%*1d%2d%2d%2d%1d",
             v69 + 24,
             v69 + 28,
             v69 + 32,
             v69 + 36,
             v69 + 40,
             v69 + 44,
             v69 + 48);
    v171 = *(_DWORD *)(v69 + 28);
    if ( v170 != 7 )
    {
      v172 = *(_DWORD *)(v69 + 32);
      v173 = *(_DWORD *)(v69 + 36);
      v174 = *(_DWORD *)(v69 + 40);
      v175 = *(_DWORD *)(v69 + 44);
      goto LABEL_380;
    }
    v172 = *(_DWORD *)(v69 + 32);
    if ( (unsigned int)(v171 - 1) <= 0xB )
    {
      v173 = *(_DWORD *)(v69 + 36);
      v174 = *(_DWORD *)(v69 + 40);
      v175 = *(_DWORD *)(v69 + 44);
      if ( (unsigned int)(v172 - 1) > 0x1E || v173 > 23 || v174 > 59 || v175 > 60 )
        goto LABEL_380;
      v178 = *(_DWORD *)(v69 + 48);
      *(_DWORD *)(v69 + 24) += 2000;
      *(_DWORD *)(v69 + 48) = 100 * v178;
      result = sub_4C15C(v67, v68, (_DWORD *)v69);
      goto LABEL_116;
    }
    v173 = *(_DWORD *)(v69 + 36);
    v174 = *(_DWORD *)(v69 + 40);
    v175 = *(_DWORD *)(v69 + 44);
LABEL_380:
    sub_6D00C(
      v203,
      99,
      "# Invalid time : rc=%d year=%d month=%d day=%d hour=%d minute=%d second=%d",
      v170,
      *(_DWORD *)(v69 + 24),
      v171,
      v172,
      v173,
      v174,
      v175);
LABEL_108:
    result = sub_4B63C(v67, 7, v203);
    *(_BYTE *)(v69 + 15) = 1;
    goto LABEL_27;
  }
  v24 = *((_WORD *)v2 + 4);
  v10 = v24;
  if ( v24 != 32 )
  {
LABEL_29:
    if ( v10 == 1 )
      goto LABEL_65;
    v10 = v24;
    v25 = *((unsigned __int16 *)v2 + 6);
    goto LABEL_31;
  }
LABEL_153:
  v39 = v12;
  v92 = v10 == 32;
  if ( v12 <= 0 )
    v92 = 0;
  if ( v92 )
  {
    v38 = *((_DWORD *)v2 + 46);
LABEL_157:
    if ( v39 < v38 )
    {
      v93 = &v2[v39 + 83];
      result = (int)&v2[v38 + 83];
      v94 = v2 + 83;
      do
      {
        v95 = *++v93;
        *++v94 = v95;
      }
      while ( v93 != (unsigned __int8 *)result );
    }
LABEL_62:
    v40 = v38 - v39;
    if ( v40 < 0 )
      *((_DWORD *)v2 + 46) = 0;
    else
      *((_DWORD *)v2 + 46) = v40;
  }
LABEL_65:
  v2[14] = 0;
  return result;
}
