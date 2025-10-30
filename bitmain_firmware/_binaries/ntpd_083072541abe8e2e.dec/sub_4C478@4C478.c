char *__fastcall sub_4C478(_DWORD *a1)
{
  char *v1; // r4
  unsigned __int8 *v2; // r9
  void *v3; // r11
  char *result; // r0
  int v5; // r2
  bool v6; // cc
  int v7; // r3
  int v8; // r2
  unsigned __int8 *v9; // lr
  unsigned __int8 *v10; // r1
  char *v11; // r12
  unsigned __int8 v12; // t1
  int v13; // r1
  const char *v14; // r8
  int v15; // r3
  int v16; // r10
  unsigned __int8 *v17; // r11
  int v18; // r1
  unsigned __int8 *v19; // r1
  unsigned int v20; // r3
  int v21; // r7
  int *v22; // r6
  int v23; // r5
  int v24; // r3
  bool v25; // zf
  int (*v26)(); // r3
  int (**v27)(); // r2
  int v28; // r6
  _DWORD *v29; // r5
  int v30; // r2
  unsigned int v31; // r3
  bool v32; // cc
  int v33; // r2
  const char *v34; // r7
  int v35; // r6
  const char *v36; // r7
  int v37; // r10
  const char *v38; // r9
  size_t v39; // r2
  const char *v40; // r5
  int v41; // t1
  const unsigned __int16 *v42; // lr
  unsigned __int8 *v43; // r0
  unsigned __int8 *v44; // r3
  unsigned __int8 v45; // r2
  int v46; // t1
  int v47; // r1
  int v48; // r3
  unsigned __int8 *v49; // r9
  _BOOL4 v50; // r3
  int v51; // r6
  _DWORD *v52; // r5
  int v53; // r3
  int v54; // r8
  _DWORD *v55; // r5
  int v56; // r7
  const char *v57; // r6
  int v58; // r9
  int (**v59)(); // r3
  int v60; // r3
  _DWORD *v61; // r5
  int v62; // r3
  __int16 v63; // r12
  _DWORD *v64; // r5
  const char *v65; // r3
  int v66; // r2
  int v67; // r0
  int v68; // r7
  int v69; // r8
  int v70; // r1
  int v71; // r3
  int v72; // r12
  int v73; // r2
  int v74; // r12
  _DWORD *v75; // r5
  int v76; // r7
  int v77; // r3
  int v78; // r3
  int v79; // r12
  int v80; // lr
  int v81; // r2
  int v82; // r1
  int v83; // r7
  int v84; // r8
  int v85; // r3
  int v86; // r3
  int v87; // r1
  int v88; // r12
  int v89; // r2
  int v90; // r8
  int v91; // r9
  int v92; // r0
  __int16 *v93; // r9
  unsigned int v94; // r7
  const char *v95; // r8
  int v96; // r3
  __int16 v97; // r2
  int v98; // r3
  int v99; // r3
  int v100; // r3
  int v101; // r2
  int (**v102)(); // r3
  size_t v103; // r5
  int v104; // r2
  int v105; // r3
  int v106; // r3
  int v107; // r3
  int v108; // r1
  int v109; // r2
  int v110; // r12
  int v111; // r3
  int v112; // r2
  unsigned __int8 *v113; // r3
  int v114; // r2
  int v115; // t1
  int v116; // r3
  int v117; // r1
  int v118; // r12
  int v119; // r2
  int tm_year; // r2
  unsigned __int8 *v121; // r3
  char v122; // t1
  int v123; // r8
  int v124; // r7
  int v125; // r1
  int v126; // r0
  int v127; // r5
  int v128; // r2
  unsigned __int8 *v129; // r3
  char v130; // t1
  __int64 v131; // r2
  bool v132; // zf
  char v133; // r3
  int v134; // r3
  struct tm *v135; // r0
  int tm_mday; // r1
  int v137; // r3
  int v138; // r3
  int v139; // r1
  int v140; // r2
  int v141; // r12
  int v142; // r3
  int v143; // r2
  int v144; // r3
  char *v145; // r3
  unsigned __int8 *v146; // r2
  unsigned __int8 v147; // t1
  int v148; // r3
  int v149; // r6
  int v150; // r3
  int v151; // r12
  int v152; // r2
  int (**v153)(); // r3
  char *v154; // r6
  int v155; // r2
  int v156; // r3
  int v157; // r3
  int v158; // r12
  int v159; // r3
  int v160; // r12
  int v161; // r7
  int v162; // r1
  int v163; // r2
  int v164; // r3
  char *v165; // [sp+24h] [bp-150h]
  int v166; // [sp+28h] [bp-14Ch]
  int v168; // [sp+30h] [bp-144h]
  char *v169; // [sp+3Ch] [bp-138h]
  int v170; // [sp+3Ch] [bp-138h]
  int v171; // [sp+40h] [bp-134h]
  int v172; // [sp+54h] [bp-120h] BYREF
  time_t timer; // [sp+58h] [bp-11Ch] BYREF
  _DWORD v174[2]; // [sp+5Ch] [bp-118h] BYREF
  char v175; // [sp+64h] [bp-110h] BYREF
  unsigned __int8 v176; // [sp+65h] [bp-10Fh]
  char v177; // [sp+66h] [bp-10Eh]
  char v178[60]; // [sp+68h] [bp-10Ch] BYREF
  char v179[100]; // [sp+A4h] [bp-D0h] BYREF
  char v180[108]; // [sp+108h] [bp-6Ch] BYREF

  v1 = (char *)v174;
  v166 = a1[1];
  v165 = *(char **)(v166 + 84);
  v3 = v165 + 56;
  v2 = *(unsigned __int8 **)v165;
  if ( *(_WORD *)(*(_DWORD *)v165 + 8) == 32 )
  {
    result = (char *)sub_39F94(a1, v3, 127, v174);
    *((_DWORD *)v165 + 46) = result;
    v7 = *((_DWORD *)v2 + 46);
    if ( (int)result > 0 && v7 <= 97 )
    {
      v8 = v7 + 1;
      v9 = (unsigned __int8 *)&result[v7];
      v10 = &v2[v7 + 84];
      v11 = v165 + 55;
      do
      {
        v7 = v8;
        v12 = *++v11;
        *v10++ = v12;
        if ( v9 == (unsigned __int8 *)v8 )
          break;
        ++v8;
      }
      while ( v7 != 98 );
      *((_DWORD *)v2 + 46) = v7;
    }
    v2[v7 + 84] = 0;
  }
  else
  {
    result = sub_39EE4((int)a1, (bool *)v3, 128, v174);
    *((_DWORD *)v165 + 46) = result;
  }
  if ( !result )
    return result;
  v5 = *((__int16 *)v2 + 6);
  v6 = v5 != 0;
  if ( *((_WORD *)v2 + 6) )
    v6 = (unsigned __int16)(v5 - 3) > 1u;
  if ( !v6 )
  {
    *((_DWORD *)v2 + 46) = 0;
    return result;
  }
  v168 = 0;
  result = (char *)v174[0];
  v13 = v174[1];
  v171 = -84 - (_DWORD)v2;
  v14 = (const char *)*((__int16 *)v2 + 4);
  v15 = *((_DWORD *)v2 + 5) + 1;
  v16 = *((_DWORD *)v2 + 46) - 1;
  v17 = v2;
  *((_DWORD *)v165 + 58) = v174[0];
  *((_DWORD *)v165 + 59) = v13;
  *((_DWORD *)v2 + 5) = v15;
  *((_WORD *)v2 + 6) = 2;
  v18 = (int)"# Invalid time : rc=%d year=%d month=%d day=%d hour=%d minute=%d second=%d";
  v2[14] = 1;
  while ( 1 )
  {
    if ( v14 != (const char *)&dword_20 )
    {
      v19 = (unsigned __int8 *)(v165 + 56);
      v1 = (char *)*((_DWORD *)v165 + 46);
      goto LABEL_19;
    }
    v35 = *((_DWORD *)v17 + 46);
    if ( v17[192] )
    {
      if ( v168 >= v35 )
        goto LABEL_62;
      v36 = (const char *)&v17[v168 + 84];
      v37 = **((_DWORD **)v17 + 47);
      v169 = (char *)*((_DWORD *)v17 + 47);
      while ( 1 )
      {
        if ( v37 )
        {
          v1 = v169;
          v18 = v37;
        }
        v38 = &v36[v171];
        if ( v37 )
          break;
LABEL_61:
        if ( ++v36 == (const char *)&v17[v35 + 84] )
          goto LABEL_62;
      }
      while ( 1 )
      {
        v39 = *((_DWORD *)v1 + 1);
        v40 = &v38[v39];
        if ( (int)&v38[v39] <= v35 )
        {
          result = (char *)strncmp(v36, (const char *)v18, v39);
          if ( !result )
            break;
        }
        v41 = *((_DWORD *)v1 + 2);
        v1 += 8;
        v18 = v41;
        if ( !v41 )
          goto LABEL_61;
      }
      v16 = (int)(v40 - 1);
      if ( !v40 )
      {
LABEL_62:
        if ( v35 <= 97 )
          goto LABEL_78;
        if ( v168 > 0 )
        {
          v49 = v17;
          goto LABEL_283;
        }
        v16 = v35 - 1;
        *((_DWORD *)v17 + 100) = 0;
        *((_DWORD *)v17 + 74) = 0;
LABEL_65:
        v42 = *_ctype_b_loc();
        v43 = v17 + 192;
        v44 = &v17[v168 + 84];
        do
        {
          v46 = *v44++;
          v45 = v46;
          *++v43 = v46;
          if ( (v42[v46] & 2) == 0 )
          {
            v47 = *((_DWORD *)v17 + 100);
            v17[v47 + 300] = v45;
            *((_DWORD *)v17 + 100) = v47 + 1;
          }
        }
        while ( &v17[v16 + 85] != v44 );
        v48 = *((_DWORD *)v17 + 100);
        v1 = (char *)(v16 - v168 + 1);
        *((_DWORD *)v17 + 74) = v1;
        v18 = v48 == 0;
        goto LABEL_73;
      }
    }
    else
    {
      v16 = v35 - 1;
    }
    v48 = 0;
    *((_DWORD *)v17 + 100) = 0;
    *((_DWORD *)v17 + 74) = 0;
    if ( v16 >= v168 )
      goto LABEL_65;
    v18 = 1;
    v1 = 0;
LABEL_73:
    result = 0;
    v1[(_DWORD)v17 + 193] = 0;
    v17[v48 + 300] = 0;
    if ( !v17[404] )
      v18 = 0;
    if ( v18 )
    {
      if ( v16 + 1 >= v35 )
        goto LABEL_78;
      v168 = v16 + 1;
      goto LABEL_91;
    }
    v19 = v17 + 193;
LABEL_19:
    if ( (unsigned int)v1 >= 0x63 )
      v1 = (_BYTE *)(&dword_60 + 3);
    _memcpy_chk(v179, v19);
    v1 = &v180[(_DWORD)v1 + 104];
    *(v1 - 204) = 0;
    result = (char *)sub_4A084(v166, 3, v179);
    v20 = *v17;
    if ( v20 == 4 )
    {
      v51 = a1[1];
      v52 = *(_DWORD **)(v51 + 84);
      v1 = (char *)*v52;
      if ( *(_WORD *)(*v52 + 8) == 32 )
      {
        result = v1 + 300;
        v53 = *((_DWORD *)v1 + 100);
      }
      else
      {
        v53 = v52[46];
        result = (char *)(v52 + 14);
      }
      if ( *(_WORD *)(*v52 + 12) != 2 )
        goto LABEL_88;
      if ( v53 == 23 )
      {
        v86 = sscanf(
                result,
                "%c%2s %2d/%2d/%2d %1d %2d:%2d:%2d",
                &v172,
                &v175,
                v1 + 24,
                v1 + 28,
                v1 + 32,
                &timer,
                v1 + 36,
                v1 + 40,
                v1 + 44);
        v177 = 0;
        if ( v86 != 9 )
        {
          v87 = *((_DWORD *)v1 + 7);
          v89 = *((_DWORD *)v1 + 9);
          v90 = *((_DWORD *)v1 + 10);
          v91 = *((_DWORD *)v1 + 11);
          v88 = *((_DWORD *)v1 + 8);
          goto LABEL_295;
        }
        v87 = *((_DWORD *)v1 + 7);
        v88 = *((_DWORD *)v1 + 8);
        v89 = *((_DWORD *)v1 + 9);
        v90 = *((_DWORD *)v1 + 10);
        v91 = *((_DWORD *)v1 + 11);
        if ( (unsigned __int8)v172 != 39 )
          goto LABEL_295;
        if ( v175 == 79 )
        {
          v92 = v176;
          if ( v176 == 75 )
            goto LABEL_163;
LABEL_295:
          sub_6C054(
            v180,
            99,
            "# Invalid time : rc=%d year=%d month=%d day=%d hour=%d minute=%d second=%d",
            v86,
            *((_DWORD *)v1 + 6),
            v87,
            v88,
            v89,
            v90,
            v91);
LABEL_153:
          result = (char *)sub_4A084(v51, 7, v180);
          v1[15] = 1;
          goto LABEL_154;
        }
        if ( v175 == 78 )
        {
          v92 = v176;
          if ( v176 == 71 )
            goto LABEL_163;
          goto LABEL_295;
        }
        if ( v175 != 69 )
          goto LABEL_295;
        v92 = v176;
        if ( v176 != 82 )
          goto LABEL_295;
LABEL_163:
        if ( (unsigned int)(v87 - 1) > 0xB
          || (unsigned int)(v88 - 1) > 0x1E
          || timer > 6
          || v89 > 23
          || v90 > 59
          || v91 > 60 )
        {
          goto LABEL_295;
        }
        if ( v175 == 78 )
        {
          if ( v92 == 71 )
          {
LABEL_171:
            sub_6C054(v178, 15, "status=%s", &v175);
            v1 = v180;
            sub_6C054(v180, 99, "* Unsure timestamp : %s", v178);
            result = (char *)sub_4A084(v51, 6, v180);
            goto LABEL_88;
          }
        }
        else if ( v175 == 69 && v92 == 82 )
        {
          goto LABEL_171;
        }
        v164 = *((_DWORD *)v1 + 6);
        *((_DWORD *)v1 + 12) = 0;
        *((_DWORD *)v1 + 6) = v164 + 2000;
        result = (char *)sub_4AAB4(v51, v52, v1);
        goto LABEL_88;
      }
LABEL_152:
      sub_6C054(v180, 99, "# Invalid length : length=%d");
      goto LABEL_153;
    }
    if ( v20 <= 4 )
      break;
    if ( v20 == 6 )
    {
      v51 = a1[1];
      v61 = *(_DWORD **)(v51 + 84);
      v1 = (char *)*v61;
      if ( *(_WORD *)(*v61 + 8) == 32 )
      {
        result = v1 + 300;
        v62 = *((_DWORD *)v1 + 100);
      }
      else
      {
        v62 = v61[46];
        result = (char *)(v61 + 14);
      }
      if ( *(_WORD *)(*v61 + 12) != 2 )
        goto LABEL_88;
      v63 = *((_WORD *)v1 + 9);
      v18 = (__int16)(v63 + 1);
      *((_WORD *)v1 + 9) = v18;
      switch ( v62 )
      {
        case 1:
          if ( (unsigned __int8)*result != 229 )
          {
            sub_6C054(v180, 99, "# Invalid reply : [%s]");
            goto LABEL_153;
          }
          if ( v18 == 1 )
          {
            *((_WORD *)v1 + 9) = v63;
            goto LABEL_89;
          }
          if ( v18 <= 2 )
          {
            tm_year = *((_DWORD *)v1 + 6);
            goto LABEL_235;
          }
          goto LABEL_189;
        case 8:
          v129 = (unsigned __int8 *)(result - 1);
          do
          {
            v130 = *++v129;
            *v129 = v130 & 0x7F;
          }
          while ( result + 7 != (char *)v129 );
          result = (char *)sscanf(result + 1, "%2d:%2d:%2d", v1 + 36, v1 + 40, v1 + 44);
          v131 = *(_QWORD *)(v1 + 36);
          v18 = *((_DWORD *)v1 + 11);
          if ( result != (_BYTE *)&dword_0 + 3 || (int)v131 > 23 || SHIDWORD(v131) > 59 || v18 > 60 )
          {
            sub_6C054(
              v180,
              99,
              "# Invalid time : rc=%d hour=%d minute=%d second=%d",
              result,
              (_DWORD)v131,
              HIDWORD(v131),
              v18);
            goto LABEL_153;
          }
          v132 = (_DWORD)v131 == 23;
          if ( (_DWORD)v131 == 23 )
            v132 = HIDWORD(v131) == 59;
          v133 = v132;
          if ( v18 > 54 )
            v134 = v133 & 1;
          else
            v134 = 0;
          if ( !v134 )
          {
            time(&timer);
            v135 = localtime(&timer);
            tm_mday = v135->tm_mday;
            tm_year = v135->tm_year;
            *((_DWORD *)v1 + 7) = v135->tm_mon + 1;
            *((_DWORD *)v1 + 8) = tm_mday;
            goto LABEL_235;
          }
          goto LABEL_89;
        case 13:
          v127 = sscanf(result, "%2d%2d%2d%1d%2d%2d%2d", v1 + 24, v1 + 28, v1 + 32, &v172, v1 + 36, v1 + 40, v1 + 44);
          v128 = *((_DWORD *)v1 + 7);
          v18 = *((_DWORD *)v1 + 8);
          result = (char *)*((_DWORD *)v1 + 9);
          if ( v127 != 7 )
          {
            v159 = *((_DWORD *)v1 + 10);
            v160 = *((_DWORD *)v1 + 11);
LABEL_255:
            sub_6C054(
              v180,
              99,
              "# Invalid time : rc=%d year=%d month=%d day=%d hour=%d minute=%d second=%d",
              v127,
              *((_DWORD *)v1 + 6),
              v128,
              v18,
              result,
              v159,
              v160);
            goto LABEL_153;
          }
          v159 = *((_DWORD *)v1 + 10);
          v160 = *((_DWORD *)v1 + 11);
          if ( (unsigned int)(v128 - 1) > 0xB
            || (unsigned int)(v18 - 1) > 0x1E
            || v172 > 6
            || (int)result > 23
            || v159 > 59
            || v160 > 60 )
          {
            goto LABEL_255;
          }
          break;
        case 17:
          v121 = (unsigned __int8 *)(result - 1);
          do
          {
            v122 = *++v121;
            *v121 = v122 & 0x7F;
          }
          while ( result + 16 != (char *)v121 );
          v123 = sscanf(
                   result + 1,
                   "%2d%2d%2d%2d%2d%2d%1d",
                   v1 + 24,
                   v1 + 28,
                   v1 + 32,
                   v1 + 36,
                   v1 + 40,
                   v1 + 44,
                   &v172);
          v124 = *((_DWORD *)v1 + 7);
          v125 = *((_DWORD *)v1 + 8);
          v126 = *((_DWORD *)v1 + 9);
          if ( v123 == 7 )
          {
            v157 = *((_DWORD *)v1 + 10);
            v158 = *((_DWORD *)v1 + 11);
            tm_year = *((_DWORD *)v1 + 6);
            if ( (unsigned int)(v124 - 1) <= 0xB
              && (unsigned int)(v125 - 1) <= 0x1E
              && v172 <= 6
              && v126 <= 23
              && v157 <= 59
              && v158 <= 60 )
            {
LABEL_235:
              *((_DWORD *)v1 + 6) = tm_year + 2000;
              *((_DWORD *)v1 + 12) = 0;
              result = (char *)sub_4AAB4(v51, v61, v1);
              goto LABEL_88;
            }
          }
          else
          {
            v157 = *((_DWORD *)v1 + 10);
            v158 = *((_DWORD *)v1 + 11);
            tm_year = *((_DWORD *)v1 + 6);
          }
          sub_6C054(
            v180,
            99,
            "# Invalid time : rc=%d year=%d month=%d day=%d hour=%d minute=%d second=%d",
            v123,
            tm_year,
            v124,
            v125,
            v126,
            v157,
            v158);
          goto LABEL_153;
        default:
          goto LABEL_152;
      }
      goto LABEL_89;
    }
    if ( v20 < 6 )
    {
      v54 = a1[1];
      v55 = *(_DWORD **)(v54 + 84);
      v1 = (char *)*v55;
      if ( *(_WORD *)(*v55 + 8) == 32 )
      {
        v56 = *((_DWORD *)v1 + 100);
        v57 = v1 + 300;
      }
      else
      {
        v56 = v55[46];
        v57 = (const char *)(v55 + 14);
      }
      if ( v56 <= 5 )
      {
        if ( v56 == 5 )
        {
          result = (char *)strncmp(v57, "$Cmd>", 5u);
          if ( !result )
            goto LABEL_89;
        }
      }
      else
      {
        result = (char *)strncmp(v57, "$GP", 3u);
        if ( !result )
          goto LABEL_89;
        result = (char *)strncmp(v57, "$PFEC", 5u);
        if ( !result )
          goto LABEL_89;
        if ( strncmp(v57, "$Cmd>", 5u) )
          goto LABEL_102;
        v56 -= 5;
        v57 += 5;
        if ( v56 > 5 )
        {
          result = (char *)strncmp(v57, "$GP", 3u);
          if ( result )
          {
LABEL_102:
            result = (char *)strncmp(v57, "$PFEC", 5u);
            if ( result )
              goto LABEL_103;
          }
LABEL_89:
          v14 = (const char *)*((__int16 *)v17 + 4);
          if ( v14 != (const char *)&dword_20 )
            goto LABEL_90;
          goto LABEL_50;
        }
      }
LABEL_103:
      v58 = *((__int16 *)v1 + 8);
      v59 = &off_B46E4[4 * v58];
      if ( v59[241] )
      {
        if ( v59[243] == (int (*)())v56 )
        {
          v60 = *((unsigned __int8 *)v59 + 960);
          switch ( v60 )
          {
            case 2:
              v137 = *((_DWORD *)v1 + 14);
              if ( v137 > 1 )
              {
                sub_6C054(v180, 99, "# Too many reply : count=%d", v137);
              }
              else
              {
                v138 = sscanf(v57, "%2d:%2d:%2d", v1 + 36, v1 + 40, v1 + 44);
                v139 = *((_DWORD *)v1 + 9);
                v140 = *((_DWORD *)v1 + 10);
                v141 = *((_DWORD *)v1 + 11);
                if ( v138 == 3 && v139 <= 23 && v140 <= 59 && v141 <= 60 )
                {
                  v142 = *((_DWORD *)v1 + 14);
                  v143 = v140 + 60 * v139;
                  v18 = 0;
                  result = &v1[4 * v142];
                  v144 = v142 + 1;
                  *((_DWORD *)result + 15) = v141 + 60 * v143;
                  *((_DWORD *)v1 + 14) = v144;
                  *((_DWORD *)v1 + 12) = 0;
                  goto LABEL_278;
                }
                sub_6C054(
                  v180,
                  99,
                  "# Invalid time : rc=%d hour=%d minute=%d second=%d",
                  v138,
                  *((_DWORD *)v1 + 9),
                  v140,
                  v141);
              }
              break;
            case 4:
              result = (char *)strncmp(v57, "*R", 2u);
              if ( !result
                || (result = (char *)strncmp(v57, "*G", 2u)) == 0
                || (result = (char *)strncmp(v57, "*U", 2u)) == 0
                || (result = (char *)strncmp(v57, "+U", 2u)) == 0 )
              {
                if ( *((_DWORD *)v1 + 14) != 2 )
                  goto LABEL_322;
                goto LABEL_340;
              }
LABEL_108:
              sub_6C054(v180, 99, "# Invalid reply : [%s]", v57);
              break;
            case 1:
              v150 = sscanf(v57, "%4d/%2d/%2d", v1 + 24, v1 + 28, v1 + 32);
              v18 = *((_DWORD *)v1 + 7);
              v151 = *((_DWORD *)v1 + 8);
              if ( v150 == 3 && (unsigned int)(*((_DWORD *)v1 + 6) - 2000) <= 0x62 && (unsigned int)(v18 - 1) <= 0xB )
              {
                result = (char *)(v151 - 1);
                if ( (unsigned int)(v151 - 1) <= 0x1E )
                {
                  v144 = *((_DWORD *)v1 + 14);
LABEL_278:
                  if ( v144 != 2 )
                  {
                    v58 = *((__int16 *)v1 + 8);
                    if ( !off_B46E4[4 * v58 + 241] )
                    {
LABEL_280:
                      result = (char *)sub_4AAB4(v54, v55, v1);
                      goto LABEL_88;
                    }
LABEL_322:
                    v152 = (__int16)(v58 + 1);
                    *((_WORD *)v1 + 8) = v152;
                    v153 = &off_B46E4[4 * v152];
                    v154 = (char *)v153[241];
                    if ( !v154 )
                    {
                      *((_WORD *)v1 + 6) = 3;
                      goto LABEL_88;
                    }
                    v1 = (char *)v153[242];
                    if ( v1 != (char *)write(v55[7], v153[241], (size_t)v1) )
                      sub_394A0((__int16 *)v54, 3);
                    result = (char *)sub_4A084(v54, 2, v154);
                    goto LABEL_89;
                  }
LABEL_340:
                  v155 = *((_DWORD *)v1 + 16);
                  v156 = *((_DWORD *)v1 + 15);
                  if ( v155 - 2 <= v156 )
                  {
                    if ( v155 >= v156 )
                      goto LABEL_280;
                  }
                  else if ( v155 >= v156 )
                  {
                    sub_6C054(v180, 99, "# Slow reply : timestamp=%d, %d", v156, v155);
                    break;
                  }
                  v1 = v180;
                  sub_6C054(v180, 99, "* Over midnight : timestamp=%d, %d", v156, v155);
                  result = (char *)sub_4A084(v54, 4, v180);
                  goto LABEL_88;
                }
              }
              sub_6C054(
                v180,
                99,
                "# Invalid date : rc=%d year=%d month=%d day=%d",
                v150,
                *((_DWORD *)v1 + 6),
                v18,
                v151);
              break;
            default:
              goto LABEL_108;
          }
        }
        else
        {
          sub_6C054(v180, 99, "# Invalid length : length=%d", v56);
        }
      }
      else
      {
        sub_6C054(v180, 99, "# Unexpected reply : [%s]", v57);
      }
      result = (char *)sub_4A084(v54, 7, v180);
      v1[15] = 1;
      goto LABEL_154;
    }
    if ( v20 != 100 )
      goto LABEL_131;
    v28 = a1[1];
    v29 = *(_DWORD **)(v28 + 84);
    v1 = (char *)*v29;
    v30 = *(__int16 *)(*v29 + 8);
    v31 = *(__int16 *)(*v29 + 500);
    v32 = v31 > 4;
    if ( v31 != 4 )
      v32 = (unsigned __int16)v31 > 1u;
    if ( v32 )
    {
      if ( v30 == 32 )
      {
        v33 = *((_DWORD *)v1 + 100);
        v34 = v1 + 300;
      }
      else
      {
        v33 = v29[46];
        v34 = (const char *)(v29 + 14);
      }
      *((_WORD *)v1 + 248) = 0;
      if ( v33 == 7 )
      {
        if ( strncmp(v34, "Name ? ", 7u) )
          goto LABEL_296;
        *((_WORD *)v1 + 251) = 5;
      }
      else if ( v33 == 1 )
      {
        v98 = *(unsigned __int8 *)v34;
        if ( v98 != 62 )
          goto LABEL_192;
        *((_WORD *)v1 + 251) = 6;
      }
      else
      {
        if ( v33 <= 0 )
          goto LABEL_48;
LABEL_296:
        v98 = *(unsigned __int8 *)v34;
LABEL_192:
        if ( v98 == 63 )
          *((_WORD *)v1 + 251) = 8;
        else
LABEL_48:
          *((_WORD *)v1 + 251) = 7;
      }
      result = (char *)sub_498E8(v28, (int)v29, (int)v1);
      v14 = (const char *)*((__int16 *)v17 + 4);
      if ( v14 != (const char *)&dword_20 )
        goto LABEL_90;
      goto LABEL_50;
    }
    v93 = (__int16 *)(v1 + 512);
    if ( v30 == 32 )
    {
      v94 = *((_DWORD *)v1 + 100);
      v95 = v1 + 300;
    }
    else
    {
      v94 = v29[46];
      v95 = (const char *)(v29 + 14);
    }
    v170 = *v93;
    switch ( v94 )
    {
      case 2u:
        if ( !strncmp(v95, "OK", 2u) )
        {
          *((_WORD *)v1 + 257) = 4;
          goto LABEL_182;
        }
        goto LABEL_229;
      case 7u:
        if ( !strncmp(v95, "CONNECT", 7u) )
        {
          *((_WORD *)v1 + 257) = 5;
          goto LABEL_182;
        }
        goto LABEL_229;
      case 4u:
        if ( !strncmp(v95, "RING", 4u) )
        {
          *((_WORD *)v1 + 257) = 6;
          goto LABEL_182;
        }
        if ( !strncmp(v95, "BUSY", 4u) )
        {
          *((_WORD *)v1 + 257) = 11;
          goto LABEL_182;
        }
        goto LABEL_229;
      case 0xAu:
        if ( !strncmp(v95, "NO CARRIER", 0xAu) )
        {
          *((_WORD *)v1 + 257) = 7;
          goto LABEL_182;
        }
        if ( strncmp(v95, "CONNECT ", 8u) )
          goto LABEL_229;
        break;
      case 5u:
        if ( !strncmp(v95, "ERROR", 5u) )
        {
          *((_WORD *)v1 + 257) = 8;
          goto LABEL_182;
        }
        goto LABEL_229;
      default:
        if ( v94 <= 7 )
          goto LABEL_375;
        if ( strncmp(v95, "CONNECT ", 8u) )
        {
          if ( v94 == 11 )
          {
            if ( !strncmp(v95, "NO DAILTONE", 0xBu) )
            {
              *((_WORD *)v1 + 257) = 10;
              goto LABEL_182;
            }
          }
          else
          {
LABEL_375:
            if ( v94 == 9 && !strncmp(v95, "NO ANSWER", 9u) )
            {
              *((_WORD *)v1 + 257) = 12;
              goto LABEL_182;
            }
          }
LABEL_229:
          *((_WORD *)v1 + 257) = 13;
          goto LABEL_182;
        }
        break;
    }
    *((_WORD *)v1 + 257) = 9;
LABEL_182:
    result = (char *)sub_49B10(v28, (int)v29, v1);
    v96 = *v93;
    if ( v170 == v96 )
      goto LABEL_89;
    if ( *v93 )
    {
      if ( v96 != 3 )
        goto LABEL_89;
      v97 = 2;
    }
    else
    {
      v97 = 3;
    }
    *((_WORD *)v1 + 251) = v97;
    result = (char *)sub_498E8(v28, (int)v29, (int)v1);
    v14 = (const char *)*((__int16 *)v17 + 4);
    if ( v14 != (const char *)&dword_20 )
      goto LABEL_90;
LABEL_50:
    v35 = *((_DWORD *)v17 + 46);
    v168 = v16 + 1;
    if ( v35 <= v16 + 1 )
    {
      v49 = v17;
      if ( v168 <= 0 )
        goto LABEL_82;
      goto LABEL_286;
    }
    v14 = (const char *)&dword_20;
LABEL_91:
    if ( *((_WORD *)v17 + 6) != 2 )
      goto LABEL_78;
  }
  if ( v20 != 2 )
  {
    if ( v20 > 2 )
    {
      v51 = a1[1];
      v75 = *(_DWORD **)(v51 + 84);
      v1 = (char *)*v75;
      v76 = *(__int16 *)(*v75 + 2);
      if ( *(_WORD *)(*v75 + 8) == 32 )
      {
        result = v1 + 300;
        v77 = *((_DWORD *)v1 + 100);
      }
      else
      {
        v77 = v75[46];
        result = (char *)(v75 + 14);
      }
      if ( v76 == 1 )
      {
        if ( v77 != 15 )
          goto LABEL_152;
        v113 = (unsigned __int8 *)(result - 1);
        v114 = 0;
        do
        {
          v115 = *++v113;
          v114 ^= v115;
        }
        while ( result + 12 != (char *)v113 );
        v116 = (unsigned __int8)result[13];
        v117 = (unsigned __int8)result[14];
        v118 = (v114 >> 4) | 0x30;
        v119 = v114 & 0xF | 0x30;
        if ( v118 != v116 || v119 != v117 )
        {
          sub_6C054(v178, 59, " BCC error : Recv=%02X,%02X / Calc=%02X,%02X ", v116, v117, v118, v119);
          sub_6C054(v180, 99, "# Invalid reply : [%s]");
          goto LABEL_153;
        }
      }
      else
      {
        if ( v76 != 2 && v76 != 3 )
          goto LABEL_88;
        if ( v77 != 17 )
          goto LABEL_152;
      }
      v78 = sscanf(result, "%2d%2d%2d%*1d%2d%2d%2d", v1 + 24, v1 + 28, v1 + 32, v1 + 36, v1 + 40, v1 + 44);
      v79 = *((_DWORD *)v1 + 7);
      v80 = *((_DWORD *)v1 + 8);
      v81 = *((_DWORD *)v1 + 9);
      if ( v78 == 6 )
      {
        v82 = *((_DWORD *)v1 + 10);
        v83 = *((_DWORD *)v1 + 11);
        v84 = *((_DWORD *)v1 + 6);
        if ( (unsigned int)(v79 - 1) <= 0xB && (unsigned int)(v80 - 1) <= 0x1E && v81 <= 23 && v82 <= 59 && v83 <= 60 )
        {
          v85 = *((unsigned __int16 *)v1 + 1);
          *((_DWORD *)v1 + 6) = v84 + 2000;
          if ( (unsigned int)(v85 - 2) <= 1 )
          {
            v161 = v83 - 1;
            *((_DWORD *)v1 + 11) = v161;
            *((_DWORD *)v1 + 12) = 500;
            if ( v161 < 0 )
            {
              v162 = v82 - 1;
              *((_DWORD *)v1 + 10) = v162;
              *((_DWORD *)v1 + 11) = 59;
              if ( v162 < 0 )
              {
                v163 = v81 - 1;
                *((_DWORD *)v1 + 10) = 59;
                *((_DWORD *)v1 + 9) = v163;
                if ( v163 < 0 )
                {
                  *((_DWORD *)v1 + 8) = v80 - 1;
                  *((_DWORD *)v1 + 9) = 23;
                  if ( v80 == 1 )
                  {
                    *((_DWORD *)v1 + 7) = v79 - 1;
                    if ( v79 == 1 )
                    {
                      *((_DWORD *)v1 + 7) = 12;
                      *((_DWORD *)v1 + 6) = v84 + 1999;
                    }
                  }
                }
              }
            }
          }
          result = (char *)sub_4AAB4(v51, v75, v1);
          if ( *((_WORD *)v1 + 1) == 3 )
          {
            if ( write(v75[7], "#", 1u) != 1 )
              sub_394A0((__int16 *)v51, 3);
            result = (char *)sub_4A084(v51, 2, "#");
          }
LABEL_88:
          *((_WORD *)v17 + 6) = 3;
          goto LABEL_89;
        }
      }
      else
      {
        v82 = *((_DWORD *)v1 + 10);
        v83 = *((_DWORD *)v1 + 11);
        v84 = *((_DWORD *)v1 + 6);
      }
      sub_6C054(
        v180,
        99,
        "# Invalid time : rc=%d year=%d month=%d day=%d hour=%d minute=%d second=%d",
        v78,
        v84,
        v79,
        v80,
        *((_DWORD *)v1 + 9),
        v82,
        v83);
      goto LABEL_153;
    }
    if ( v20 == 1 )
    {
      v21 = a1[1];
      v22 = *(int **)(v21 + 84);
      v1 = (char *)*v22;
      v23 = *(__int16 *)(*v22 + 16);
      v24 = *(__int16 *)(*v22 + 8);
      v25 = v24 == 32;
      if ( v24 == 32 )
      {
        v14 = v1 + 300;
        v26 = (int (*)())*((_DWORD *)v1 + 100);
      }
      else
      {
        v26 = (int (*)())v22[46];
      }
      v27 = &off_B46E4[5 * v23];
      if ( !v25 )
        v14 = (const char *)(v22 + 14);
      if ( v27[206] )
      {
        if ( v27[208] == v26 || v26 == v27[209] )
        {
          switch ( LOBYTE(off_B46E4[5 * v23 + 205]) )
          {
            case 1:
              v99 = sscanf(v14, "%4d/%2d/%2d", v1 + 24, v1 + 28, v1 + 32);
              v18 = *((_DWORD *)v1 + 7);
              result = (char *)*((_DWORD *)v1 + 8);
              if ( v99 == 3
                && (unsigned int)(*((_DWORD *)v1 + 6) - 2000) <= 0x62
                && (unsigned int)(v18 - 1) <= 0xB
                && (unsigned int)(result - 1) <= 0x1E )
              {
                v100 = *((_DWORD *)v1 + 14);
                goto LABEL_200;
              }
              sub_6C054(
                v180,
                99,
                "# Invalid date : rc=%d year=%d month=%d day=%d",
                v99,
                *((_DWORD *)v1 + 6),
                v18,
                result);
              break;
            case 2:
            case 3:
              v106 = *((_DWORD *)v1 + 14);
              if ( v106 > 1 )
              {
                sub_6C054(v180, 99, "# Too many reply : count=%d", v106);
                break;
              }
              v107 = sscanf(v14, "%2d:%2d:%2d", v1 + 36, v1 + 40, v1 + 44);
              v108 = *((_DWORD *)v1 + 9);
              v109 = *((_DWORD *)v1 + 10);
              v110 = *((_DWORD *)v1 + 11);
              if ( v107 != 3 || v108 > 23 || v109 > 59 || v110 > 60 )
              {
                sub_6C054(
                  v180,
                  99,
                  "# Invalid time : rc=%d hour=%d minute=%d second=%d",
                  v107,
                  *((_DWORD *)v1 + 9),
                  v109,
                  v110);
                break;
              }
              v111 = *((_DWORD *)v1 + 14);
              v112 = v109 + 60 * v108;
              v18 = 0;
              result = &v1[4 * v111];
              v100 = v111 + 1;
              *((_DWORD *)result + 15) = v110 + 60 * v112;
              *((_DWORD *)v1 + 14) = v100;
              *((_DWORD *)v1 + 12) = 0;
LABEL_200:
              if ( v100 != 2 )
              {
                v23 = *((__int16 *)v1 + 8);
                if ( !off_B46E4[5 * v23 + 206] )
                  goto LABEL_88;
LABEL_202:
                v101 = (__int16)(v23 + 1);
                v18 = 5 * v101;
                *((_WORD *)v1 + 8) = v101;
                v102 = &off_B46E4[5 * v101];
                v1 = (char *)v102[206];
                if ( v1 )
                {
                  v103 = (size_t)v102[207];
                  if ( v103 != write(v22[7], v102[206], v103) )
                    sub_394A0((__int16 *)v21, 3);
                  result = (char *)sub_4A084(v21, 2, v1);
                  goto LABEL_89;
                }
                goto LABEL_88;
              }
LABEL_209:
              v104 = *((_DWORD *)v1 + 16);
              v105 = *((_DWORD *)v1 + 15);
              if ( v104 - 2 <= v105 )
              {
                if ( v104 < v105 )
                  goto LABEL_211;
                result = (char *)sub_4AAB4(v21, v22, v1);
                goto LABEL_88;
              }
              if ( v104 < v105 )
              {
LABEL_211:
                v1 = v180;
                sub_6C054(v180, 99, "* Over midnight : timestamp=%d, %d", v105, v104);
                result = (char *)sub_4A084(v21, 4, v180);
                goto LABEL_88;
              }
              sub_6C054(v180, 99, "# Slow reply : timestamp=%d, %d", v105, v104);
              break;
            case 4:
              result = (char *)strncmp(v14, "adjusted", 8u);
              if ( !result )
                goto LABEL_208;
              result = (char *)strncmp(v14, "unadjusted", 0xAu);
              if ( !result )
                goto LABEL_208;
              goto LABEL_220;
            case 5:
              result = (char *)strncmp(v14, "valid", 5u);
              if ( result )
              {
                result = (char *)strncmp(v14, "invalid", 7u);
                if ( result )
                  goto LABEL_220;
              }
LABEL_208:
              if ( *((_DWORD *)v1 + 14) == 2 )
                goto LABEL_209;
              goto LABEL_202;
            default:
LABEL_220:
              sub_6C054(v180, 99, "# Invalid reply : [%s]", v14);
              break;
          }
        }
        else
        {
          sub_6C054(v180, 99, "# Invalid length : length=%d", v26);
        }
      }
      else
      {
        sub_6C054(v180, 99, "# Unexpected reply : [%s]", v14);
      }
      result = (char *)sub_4A084(v21, 7, v180);
      v1[15] = 1;
      goto LABEL_154;
    }
LABEL_131:
    v14 = (const char *)*((__int16 *)v17 + 4);
    *((_WORD *)v17 + 6) = 4;
    if ( v14 != (const char *)&dword_20 )
      goto LABEL_90;
    goto LABEL_50;
  }
  v51 = a1[1];
  v64 = *(_DWORD **)(v51 + 84);
  v1 = (char *)*v64;
  if ( *(_WORD *)(*v64 + 8) == 32 )
  {
    v65 = v1 + 300;
    v18 = *((_DWORD *)v1 + 100);
  }
  else
  {
    v18 = v64[46];
    v65 = (const char *)(v64 + 14);
  }
  if ( *(_WORD *)(*v64 + 16) != 1 )
  {
LABEL_189:
    sub_6C054(v180, 99, "# Unexpected reply : [%s]");
    goto LABEL_153;
  }
  v66 = *((_DWORD *)v1 + 74);
  if ( v66 > 16 && v1[v66 + 192] == 3 )
  {
    if ( v18 == 15 )
    {
      v67 = sscanf(v65, "J%2d%2d%2d%*1d%2d%2d%2d%1d", v1 + 24, v1 + 28, v1 + 32, v1 + 36, v1 + 40, v1 + 44, v1 + 48);
      v68 = *((_DWORD *)v1 + 7);
      v69 = *((_DWORD *)v1 + 8);
      v70 = *((_DWORD *)v1 + 9);
      if ( v67 == 7 )
      {
        v71 = *((_DWORD *)v1 + 10);
        v72 = *((_DWORD *)v1 + 11);
        v73 = *((_DWORD *)v1 + 6);
        if ( (unsigned int)(v68 - 1) <= 0xB && (unsigned int)(v69 - 1) <= 0x1E && v70 <= 23 && v71 <= 59 && v72 <= 60 )
        {
          v74 = *((_DWORD *)v1 + 12);
          *((_DWORD *)v1 + 6) = v73 + 2000;
          *((_DWORD *)v1 + 12) = 100 * v74;
          result = (char *)sub_4AAB4(v51, v64, v1);
          goto LABEL_88;
        }
      }
      else
      {
        v71 = *((_DWORD *)v1 + 10);
        v72 = *((_DWORD *)v1 + 11);
        v73 = *((_DWORD *)v1 + 6);
      }
      sub_6C054(
        v180,
        99,
        "# Invalid time : rc=%d year=%d month=%d day=%d hour=%d minute=%d second=%d",
        v67,
        v73,
        v68,
        v69,
        v70,
        v71,
        v72);
      goto LABEL_153;
    }
    sub_6C054(v180, 99, "# Invalid length : length=%d", v18);
    result = (char *)sub_4A084(v51, 7, v180);
    v1[15] = 1;
LABEL_154:
    *((_WORD *)v17 + 6) = 4;
    goto LABEL_89;
  }
  v14 = (const char *)*((__int16 *)v17 + 4);
  if ( v14 != (const char *)&dword_20 )
  {
LABEL_90:
    if ( v14 == (_BYTE *)&dword_0 + 1 )
    {
      v49 = v17;
      goto LABEL_82;
    }
    goto LABEL_91;
  }
LABEL_78:
  v49 = v17;
  v50 = v168 > 0;
  if ( v14 != (const char *)&dword_20 )
    v50 = 0;
  if ( v50 )
  {
    v35 = *((_DWORD *)v17 + 46);
LABEL_283:
    if ( v168 < v35 )
    {
      v145 = (char *)&v49[v168 + 84];
      result = (char *)&v49[v35 + 84];
      v146 = v49 + 83;
      do
      {
        v147 = *v145++;
        *++v146 = v147;
      }
      while ( result != v145 );
    }
LABEL_286:
    v148 = v168;
    v149 = v35 - v168;
    if ( v149 >= 0 )
      *((_DWORD *)v49 + 46) = v149;
    else
      v148 = 0;
    if ( v149 < 0 )
      *((_DWORD *)v49 + 46) = v148;
  }
LABEL_82:
  v49[14] = 0;
  return result;
}
