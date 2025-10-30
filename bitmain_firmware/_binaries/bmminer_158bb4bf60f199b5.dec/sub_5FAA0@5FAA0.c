int __fastcall sub_5FAA0(_DWORD *a1)
{
  pthread_t v2; // r0
  int v3; // r0
  fd_set *v4; // r3
  int v5; // r3
  int v6; // r2
  bool v7; // nf
  int v8; // r1
  time_t *v9; // r2
  int v10; // r0
  char *v11; // r5
  int v13; // r3
  int v14; // r2
  int v15; // r4
  int v16; // r0
  int v17; // r7
  _DWORD *v18; // r9
  _DWORD *v19; // r10
  _DWORD *v20; // r0
  _DWORD *v21; // r4
  unsigned int *v22; // r3
  unsigned int v23; // r2
  unsigned int v24; // r2
  void **v25; // r0
  void **v26; // r7
  time_t *v27; // r2
  time_t v28; // r8
  size_t v29; // r9
  unsigned __int8 *v30; // r11
  size_t v31; // r8
  unsigned int v32; // r0
  int v33; // r12
  unsigned int v34; // r2
  int v35; // r1
  unsigned int v36; // r1
  int v37; // r3
  int v38; // r0
  unsigned int v39; // r2
  unsigned int v40; // r1
  unsigned int v41; // r2
  int v42; // r3
  unsigned int v43; // r1
  unsigned int v44; // r4
  unsigned int v45; // r3
  size_t v46; // r3
  char *v47; // r4
  int v48; // r2
  size_t v49; // r12
  unsigned int v50; // r3
  unsigned int v51; // r1
  int v52; // r2
  unsigned int v53; // r12
  unsigned int v54; // r3
  unsigned int v55; // r2
  unsigned int v56; // r8
  _DWORD *v57; // r2
  int v58; // r4
  int v59; // r9
  int v60; // r4
  int v61; // r3
  int *v62; // r0
  const char *v63; // lr
  int v64; // r3
  int v65; // r12
  int *v66; // r0
  int *v67; // r0
  const char *v68; // lr
  int v69; // r3
  int v70; // r12
  int *v71; // r0
  const char *v72; // lr
  int v73; // r3
  int v74; // r12
  int *v75; // r0
  int *v76; // r0
  char *v77; // r0
  int v78; // r10
  int v79; // lr
  int v80; // r4
  int v81; // r3
  int v82; // r9
  int v83; // r7
  int v84; // r1
  int v85; // r0
  unsigned int v86; // r8
  int v87; // r3
  int v88; // r12
  int v89; // r2
  int v90; // r12
  int v91; // r5
  bool v92; // zf
  int v93; // r3
  bool v94; // zf
  bool v95; // zf
  int v96; // r11
  int v97; // r2
  int v98; // r8
  int v99; // r1
  int v100; // r2
  int v101; // r12
  int v102; // r3
  int v103; // r3
  _DWORD *v104; // r2
  int v105; // r3
  int v106; // r2
  __int64 v107; // r2
  size_t v108; // r2
  unsigned int v109; // r3
  unsigned __int8 *v110; // r11
  int v111; // r0
  unsigned int v112; // r4
  int v113; // r9
  unsigned int v114; // r1
  unsigned __int8 *v115; // r8
  int v116; // r2
  int v117; // r12
  size_t v118; // lr
  int v119; // r0
  unsigned int v120; // r2
  unsigned int v121; // r3
  int v122; // r1
  unsigned int v123; // r2
  unsigned int v124; // r3
  unsigned int v125; // r1
  unsigned int v126; // r2
  size_t v127; // r1
  size_t v128; // r2
  size_t v129; // r1
  int v130; // r11
  int v131; // r2
  unsigned int v132; // r12
  unsigned int v133; // r3
  int v134; // r2
  unsigned int v135; // r1
  unsigned int v136; // r3
  unsigned int v137; // r2
  unsigned int v138; // r9
  int v139; // r3
  int v140; // r8
  _DWORD *v141; // r3
  int v142; // r2
  int v143; // r3
  int v144; // r3
  int v145; // r1
  int *v146; // r3
  __int64 v147; // r2
  int v148; // r3
  _DWORD *v149; // r9
  int v150; // r2
  int v151; // r12
  unsigned int v152; // r0
  _DWORD *v153; // r3
  int v154; // r6
  _DWORD *v155; // r10
  _DWORD *v156; // r8
  _DWORD *v157; // r5
  int v158; // r4
  char *v159; // r11
  unsigned int v160; // r3
  int v161; // r1
  int v162; // r3
  bool v163; // cf
  _DWORD *v164; // r3
  _DWORD *v165; // r3
  unsigned int v166; // r2
  unsigned int v167; // r1
  bool v168; // cc
  int v169; // r2
  int v170; // r3
  int v171; // r0
  signed int v172; // r8
  double v173; // d8
  int v174; // r4
  struct tm *v175; // r0
  int v176; // r1
  char *v177; // r3
  int v178; // t1
  int v179; // r2
  const char *v180; // r2
  int v181; // r12
  char *v182; // r3
  unsigned int v183; // r4
  unsigned int v184; // r3
  unsigned int v185; // r1
  unsigned int v186; // r2
  int v187; // r3
  unsigned int v188; // r1
  unsigned int v189; // r2
  int v190; // r3
  unsigned int v191; // r1
  int v192; // r4
  int v193; // r4
  int v194; // r4
  int v195; // r2
  _DWORD *v196; // r11
  int **v197; // r2
  int v198; // r3
  int *v199; // r1
  int v200; // r3
  int v201; // r1
  int v202; // r1
  int v203; // r3
  int v204; // r8
  time_t v205; // r0
  int v206; // r3
  int v207; // r0
  unsigned int *p_s1; // r2
  int i; // r3
  int v210; // t1
  __int64 v211; // d0
  char *v212; // r12
  unsigned int *v213; // r3
  unsigned int v214; // r2
  unsigned int v215; // r2
  int *v216; // r0
  int v217; // r4
  unsigned __int8 *v218; // r10
  size_t v219; // r2
  int v220; // r3
  int *v221; // r0
  int *v222; // r0
  int *v223; // r0
  const char *v224; // lr
  int v225; // r3
  int v226; // r12
  int *v227; // r0
  int v228; // r9
  void *v229; // r0
  void **v230; // r11
  void *v231; // r0
  char *v232; // r3
  void *v233; // r4
  int *v234; // r0
  int *v235; // r0
  int *v236; // r0
  int *v237; // r0
  int *v238; // r0
  unsigned __int64 v239; // r0
  double v240; // d8
  unsigned int v241; // r0
  __int64 v242; // kr08_8
  double v243; // d6
  double v244; // d7
  unsigned int v245; // kr04_4
  double v246; // d6
  int v247; // r3
  int v248; // r2
  double v249; // d7
  int v250; // r1
  int v251; // [sp+4h] [bp-A20h]
  time_t *timer; // [sp+18h] [bp-A0Ch]
  void **timera; // [sp+18h] [bp-A0Ch]
  time_t *timerb; // [sp+18h] [bp-A0Ch]
  unsigned int v255; // [sp+30h] [bp-9F4h]
  __int64 v256; // [sp+30h] [bp-9F4h]
  size_t n; // [sp+3Ch] [bp-9E8h]
  size_t na; // [sp+3Ch] [bp-9E8h]
  size_t nb; // [sp+3Ch] [bp-9E8h]
  size_t nc; // [sp+3Ch] [bp-9E8h]
  _DWORD *nd; // [sp+3Ch] [bp-9E8h]
  int v262; // [sp+40h] [bp-9E4h]
  int v263; // [sp+44h] [bp-9E0h]
  char *v264; // [sp+44h] [bp-9E0h]
  _DWORD *v265; // [sp+44h] [bp-9E0h]
  size_t v266; // [sp+48h] [bp-9DCh]
  int v267; // [sp+48h] [bp-9DCh]
  char *v268; // [sp+50h] [bp-9D4h]
  int v269; // [sp+54h] [bp-9D0h]
  void **v270; // [sp+58h] [bp-9CCh] BYREF
  struct timeval timeout; // [sp+5Ch] [bp-9C8h] BYREF
  char s[16]; // [sp+64h] [bp-9C0h] BYREF
  char v273[16]; // [sp+74h] [bp-9B0h] BYREF
  unsigned int s1; // [sp+84h] [bp-9A0h] BYREF
  unsigned int v275; // [sp+88h] [bp-99Ch]
  unsigned int v276; // [sp+8Ch] [bp-998h]
  unsigned int v277; // [sp+90h] [bp-994h]
  unsigned int v278; // [sp+94h] [bp-990h]
  unsigned int v279; // [sp+98h] [bp-98Ch]
  unsigned int v280; // [sp+9Ch] [bp-988h]
  unsigned int v281; // [sp+A0h] [bp-984h] BYREF
  fd_set readfds; // [sp+A4h] [bp-980h] BYREF
  char s2[12]; // [sp+124h] [bp-900h] BYREF
  char v284; // [sp+130h] [bp-8F4h] BYREF
  char v285[160]; // [sp+180h] [bp-8A4h] BYREF
  time_t v286[513]; // [sp+220h] [bp-804h] BYREF

  v2 = pthread_self();
  pthread_detach(v2);
  snprintf(s, 0x10u, "%d/RStratum", *a1);
  sub_4BD10(s);
LABEL_2:
  v3 = (int)a1;
  if ( *((_BYTE *)a1 + 105) )
    goto LABEL_16;
  do
  {
    if ( !sub_4AB90(v3) && !sub_584B4((int)a1) )
    {
      sub_4AFA8((int)a1);
      sub_5A44C((int)a1);
      sub_59B44(a1);
      while ( !sub_584B4((int)a1) )
      {
        if ( a1[25] && (a1 == (_DWORD *)sub_58084() || (unsigned int)(dword_1AEEB8 - 3) <= 1) )
          break;
        if ( pthread_mutex_lock(&stru_1AF1B8) )
        {
          v76 = _errno_location();
          v63 = "wait_lpcurrent";
          v64 = *v76;
          v65 = 9907;
          goto LABEL_135;
        }
        pthread_cond_wait(&cond, &stru_1AF1B8);
        if ( pthread_mutex_unlock(&stru_1AF1B8) )
        {
          v75 = _errno_location();
          v68 = "wait_lpcurrent";
          v69 = *v75;
          v70 = 9909;
LABEL_139:
          snprintf(
            (char *)v286,
            0x800u,
            "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
            v69,
            "cgminer.c",
            v68,
            v70);
          goto LABEL_136;
        }
        off_9E444();
      }
      while ( !sub_4F2F8((int)a1) )
      {
        sub_5A31C((int)a1);
        if ( *((_BYTE *)a1 + 105) )
          return 0;
        sub_4A804();
      }
    }
    v4 = (fd_set *)&v281;
    do
    {
      v4->__fds_bits[1] = 0;
      v4 = (fd_set *)((char *)v4 + 4);
    }
    while ( &readfds.__fds_bits[31] != (__fd_mask *)v4 );
    v5 = a1[147];
    timeout.tv_usec = 0;
    timeout.tv_sec = 90;
    v6 = v5 + 31;
    if ( v5 >= 0 )
      v6 = v5;
    v7 = -v5 < 0;
    v8 = -v5 & 0x1F;
    LOBYTE(v5) = v5 & 0x1F;
    v9 = &v286[(v6 >> 5) + 512];
    if ( !v7 )
      v5 = -v8;
    *(v9 - 607) |= 1 << v5;
    if ( !sub_4AB90((int)a1) )
    {
      v10 = select(a1[147] + 1, &readfds, 0, 0, &timeout);
      if ( v10 <= 0 )
      {
        v13 = (unsigned __int8)byte_244080;
        if ( byte_1AECC5 )
        {
          if ( !byte_244080 && !byte_1AECC4 && dword_9E320 <= 6 )
            goto LABEL_55;
          snprintf((char *)v286, 0x800u, "Stratum select failed on pool %d with value %d", *a1, v10);
          sub_47AB4(7, (const char *)v286, 0);
          v13 = (unsigned __int8)byte_244080;
        }
LABEL_28:
        if ( v13 || byte_1AECC4 )
        {
LABEL_30:
          snprintf((char *)v286, 0x800u, "Stratum connection to pool %d interrupted", *a1);
          sub_47AB4(5, (const char *)v286, 0);
LABEL_31:
          v14 = dword_245150;
          ++a1[32];
          dword_245150 = v14 + 1;
          if ( pthread_mutex_lock((pthread_mutex_t *)(a1 + 53)) )
          {
            v62 = _errno_location();
            v63 = "supports_resume";
            v64 = *v62;
            v65 = 7477;
LABEL_135:
            snprintf(
              (char *)v286,
              0x800u,
              "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",
              v64,
              "cgminer.c",
              v63,
              v65);
            goto LABEL_136;
          }
          if ( pthread_rwlock_rdlock((pthread_rwlock_t *)(a1 + 59)) )
          {
            v66 = _errno_location();
            snprintf(
              (char *)v286,
              0x800u,
              "WTF RDLOCK ERROR ON LOCK! errno=%d in %s %s():%d",
              *v66,
              "cgminer.c",
              "supports_resume",
              7477);
            goto LABEL_136;
          }
          if ( pthread_mutex_unlock((pthread_mutex_t *)(a1 + 53)) )
          {
            v67 = _errno_location();
            v68 = "supports_resume";
            v69 = *v67;
            v70 = 7477;
            goto LABEL_139;
          }
          v15 = a1[159];
          if ( pthread_rwlock_unlock((pthread_rwlock_t *)(a1 + 59)) )
          {
            v71 = _errno_location();
            v72 = "supports_resume";
            v73 = *v71;
            v74 = 7479;
            goto LABEL_141;
          }
          off_9E444();
          if ( !v15 || byte_245204 )
            sub_5A44C((int)a1);
          sub_59B44(a1);
          if ( a1 == (_DWORD *)sub_58084() )
            sub_54FC0();
          while ( !sub_4F2F8((int)a1) )
          {
            sub_5A31C((int)a1);
            if ( *((_BYTE *)a1 + 105) )
              return 0;
            sub_4A804();
          }
          goto LABEL_2;
        }
LABEL_55:
        if ( dword_9E320 <= 4 )
          goto LABEL_31;
        goto LABEL_30;
      }
    }
    v11 = sub_4B4C0((int)a1);
    if ( !v11 )
    {
      v13 = (unsigned __int8)byte_244080;
      goto LABEL_28;
    }
    sub_58490((int)a1);
    if ( !sub_50324(a1, (int)v11) )
    {
      v16 = sub_6D110(v11, 0, s2);
      v17 = v16;
      if ( v16 )
      {
        v18 = (_DWORD *)sub_6DFCC(v16, "result");
        v19 = (_DWORD *)sub_6DFCC(v17, "error");
        v20 = (_DWORD *)sub_6DFCC(v17, "id");
        v21 = v20;
        if ( v20 && *v20 != 7 )
        {
          if ( sub_6DFCC(v18, "version-rolling.mask")
            || strstr(v11, "mining.configure")
            || strstr(v11, "mining.set_version_mask") )
          {
            goto LABEL_48;
          }
          v183 = sub_6E430(v21);
          v270 = (void **)v183;
          if ( pthread_mutex_lock(&stru_1AF200) )
            sub_550B8("parse_stratum_response", 7286);
          timera = (void **)dword_1AF218;
          v184 = ((unsigned __int8)v183 + 17973517 + (v183 & 0xFF000000) + (v183 & 0xFF0000) + (v183 & 0xFF00))
               ^ (unsigned int)&unk_7F76D;
          v185 = (-1622558010 - v184) ^ (v184 << 8);
          v186 = (-17973517 - v184 - v185) ^ (v185 >> 13);
          v187 = (v184 - v185 - v186) ^ (v186 >> 12);
          v188 = (v185 - v186 - v187) ^ (v187 << 16);
          v189 = (v186 - v187 - v188) ^ (v188 >> 5);
          v190 = (v187 - v188 - v189) ^ (v189 >> 3);
          v191 = (v189 - v190 - ((v188 - v189 - v190) ^ (v190 << 10))) ^ (((v188 - v189 - v190) ^ (v190 << 10)) >> 15);
          v255 = v191;
          if ( !dword_1AF218
            || (nd = **(_DWORD ***)dword_1AF218,
                (v192 = nd[3 * ((*(_DWORD *)(*(_DWORD *)dword_1AF218 + 4) - 1) & v191)]) == 0)
            || (v262 = *(_DWORD *)(*(_DWORD *)dword_1AF218 + 20), (v193 = v192 - v262) == 0) )
          {
LABEL_403:
            if ( pthread_mutex_unlock(&stru_1AF200) )
LABEL_428:
              sub_55114("parse_stratum_response", 7294);
            off_9E444();
            if ( v18 )
            {
              if ( pthread_mutex_lock((pthread_mutex_t *)(a1 + 53)) )
                sub_550B8("parse_stratum_response", 7306);
              if ( pthread_rwlock_rdlock((pthread_rwlock_t *)(a1 + 59)) )
                sub_561E4("parse_stratum_response", 7306);
              if ( pthread_mutex_unlock((pthread_mutex_t *)(a1 + 53)) )
                sub_55114("parse_stratum_response", 7306);
              v240 = *((double *)a1 + 228);
              if ( pthread_rwlock_unlock((pthread_rwlock_t *)(a1 + 59)) )
                sub_55C08("parse_stratum_response", 7308);
              off_9E444();
              if ( *v18 == 5 )
              {
                if ( byte_244080 || byte_1AECC4 || dword_9E320 > 4 )
                {
                  snprintf((char *)v286, 0x800u, "Accepted untracked stratum share from pool %d", *a1);
                  sub_47AB4(5, (const char *)v286, 0);
                }
                if ( pthread_mutex_lock(&stru_246244) )
                  sub_550B8("parse_stratum_response", 7316);
                v246 = *((double *)a1 + 9) + v240;
                ++qword_245158;
                v247 = a1[2];
                v248 = a1[3];
                v249 = dbl_242EF0 + v240;
                *((double *)a1 + 9) = v246;
                a1[2] = v247 + 1;
                a1[3] = __CFADD__(v247, 1) + v248;
                dbl_242EF0 = v249;
                if ( pthread_mutex_unlock(&stru_246244) )
                  sub_55114("parse_stratum_response", 7321);
              }
              else
              {
                if ( byte_244080 || byte_1AECC4 || dword_9E320 > 4 )
                {
                  snprintf((char *)v286, 0x800u, "Rejected untracked stratum share from pool %d", *a1);
                  sub_47AB4(5, (const char *)v286, 0);
                }
                if ( pthread_mutex_lock(&stru_246244) )
                  sub_550B8("parse_stratum_response", 7327);
                v241 = a1[5];
                v242 = qword_246368 + 1;
                v243 = *((double *)a1 + 10) + v240;
                v244 = dbl_242F10 + v240;
                v245 = a1[4];
                LODWORD(qword_246368) = qword_246368 + 1;
                a1[4] = v245 + 1;
                *((double *)a1 + 10) = v243;
                a1[5] = (__PAIR64__(v241, v245) + 1) >> 32;
                HIDWORD(qword_246368) = HIDWORD(v242);
                dbl_242F10 = v244;
                if ( pthread_mutex_unlock(&stru_246244) )
                  sub_55114("parse_stratum_response", 7332);
              }
              off_9E444();
              if ( *(_DWORD *)(v17 + 4) == -1 )
                goto LABEL_61;
            }
            else
            {
LABEL_48:
              if ( *(_DWORD *)(v17 + 4) == -1 )
                goto LABEL_61;
            }
LABEL_49:
            v22 = (unsigned int *)(v17 + 4);
            __dmb(0xBu);
            do
            {
              v23 = __ldrex(v22);
              v24 = v23 - 1;
            }
            while ( __strex(v24, v22) );
            if ( !v24 )
              sub_6E5DC(v17);
            goto LABEL_61;
          }
          v265 = *(_DWORD **)dword_1AF218;
          while ( v255 != *(_DWORD *)(v193 + 28)
               || *(_DWORD *)(v193 + 24) != 4
               || memcmp(*(const void **)(v193 + 20), &v270, 4u) )
          {
            v194 = *(_DWORD *)(v193 + 16);
            if ( v194 )
            {
              v193 = v194 - v262;
              if ( v193 )
                continue;
            }
            goto LABEL_403;
          }
          v195 = *(_DWORD *)(v193 + 4);
          v196 = v265;
          if ( v195 )
          {
            if ( v193 != v265[4] - v262 )
            {
LABEL_317:
              *(_DWORD *)(v195 + v196[5] + 8) = *(_DWORD *)(v193 + 8);
LABEL_318:
              v197 = (int **)dword_1AF218;
              v198 = *(_DWORD *)(v193 + 8);
              v199 = *(int **)dword_1AF218;
              if ( v198 )
              {
                *(_DWORD *)(v198 + v199[5] + 4) = *(_DWORD *)(v193 + 4);
                v199 = *v197;
              }
              v200 = 12 * ((v199[1] - 1) & *(_DWORD *)(v193 + 28));
              --*(_DWORD *)(*v199 + v200 + 4);
              v201 = **v197;
              if ( *(_DWORD *)(v201 + v200) == v193 )
                *(_DWORD *)(v201 + v200) = *(_DWORD *)(v193 + 16);
              v202 = *(_DWORD *)(v193 + 12);
              v203 = *(_DWORD *)(v193 + 16);
              if ( v202 )
              {
                *(_DWORD *)(v202 + 16) = v203;
                v203 = *(_DWORD *)(v193 + 16);
              }
              if ( v203 )
                *(_DWORD *)(v203 + 12) = *(_DWORD *)(v193 + 12);
              --(*v197)[3];
              goto LABEL_327;
            }
          }
          else
          {
            v250 = *(_DWORD *)(v193 + 8);
            if ( !v250 )
            {
              free(nd);
              free(*timera);
              dword_1AF218 = 0;
LABEL_327:
              --a1[183];
              if ( pthread_mutex_unlock(&stru_1AF200) )
                goto LABEL_428;
              off_9E444();
              v204 = *(_DWORD *)(v193 + 36);
              v205 = time(0);
              v206 = (unsigned __int8)byte_1AECC5;
              v207 = v205 - *(_DWORD *)(v193 + 48);
              if ( v207 > 0 )
                v206 = (unsigned __int8)byte_1AECC5 | 1;
              if ( v206 && (byte_244080 || byte_1AECC4 || dword_9E320 > 5) )
              {
                snprintf(
                  (char *)v286,
                  0x800u,
                  "Pool %d stratum share result lag time %d seconds",
                  **(_DWORD **)(v204 + 260),
                  v207);
                sub_47AB4(6, (const char *)v286, 0);
              }
              p_s1 = &s1;
              s1 = bswap32(*(_DWORD *)(v204 + 220));
              v275 = bswap32(*(_DWORD *)(v204 + 216));
              v276 = bswap32(*(_DWORD *)(v204 + 212));
              v277 = bswap32(*(_DWORD *)(v204 + 208));
              v278 = bswap32(*(_DWORD *)(v204 + 204));
              v279 = bswap32(*(_DWORD *)(v204 + 200));
              v280 = bswap32(*(_DWORD *)(v204 + 196));
              v281 = bswap32(*(_DWORD *)(v204 + 192));
              for ( i = 0; i != 29; ++i )
              {
                v210 = *(unsigned __int8 *)p_s1;
                p_s1 = (unsigned int *)((char *)p_s1 + 1);
                if ( v210 )
                  break;
              }
              v211 = *(_QWORD *)(v204 + 376);
              timerb = (time_t *)bswap32(*(unsigned int *)((char *)&s1 + i));
              round();
              v256 = sub_77970(v211, HIDWORD(v211));
              sub_51B18(*(_QWORD *)(v204 + 232), v273, 0x10u, 0);
              if ( *(_BYTE *)(v204 + 283) )
                v212 = " BLOCK!";
              else
                v212 = "";
              snprintf((char *)v286, 0x40u, "%08lx Diff %s/%llu%s", timerb, v273, v251, v256, v212);
              sub_5D8CC(v17, v18, v19, v204, (const char *)v286);
              sub_53084((void ***)(v193 + 36), "cgminer.c", "parse_stratum_response", 7339);
              free((void *)v193);
              if ( *(_DWORD *)(v17 + 4) != -1 )
              {
                v213 = (unsigned int *)(v17 + 4);
                __dmb(0xBu);
                do
                {
                  v214 = __ldrex(v213);
                  v215 = v214 - 1;
                }
                while ( __strex(v215, v213) );
                if ( !v215 )
                  sub_6E5DC(v17);
              }
              goto LABEL_14;
            }
            if ( v193 != v265[4] - v262 )
              goto LABEL_432;
          }
          v265[4] = v195 + v262;
          v195 = *(_DWORD *)(v193 + 4);
          if ( v195 )
          {
            v196 = *timera;
            goto LABEL_317;
          }
          v250 = *(_DWORD *)(v193 + 8);
LABEL_432:
          dword_1AF218 = v250;
          goto LABEL_318;
        }
        if ( v19 )
        {
          v47 = (char *)sub_6B6E8(v19, 3);
        }
        else
        {
          v47 = (char *)malloc(0x11u);
          if ( v47 )
            strcpy(v47, "(unknown reason)");
        }
        if ( byte_244080 || byte_1AECC4 || dword_9E320 > 5 )
        {
          snprintf((char *)v286, 0x800u, "JSON-RPC non method decode failed: %s", v47);
          sub_47AB4(6, (const char *)v286, 0);
        }
        free(v47);
        if ( *(_DWORD *)(v17 + 4) != -1 )
          goto LABEL_49;
      }
      else if ( byte_244080 || byte_1AECC4 || dword_9E320 > 5 )
      {
        snprintf((char *)v286, 0x800u, "JSON decode failed(%d): %s", *(_DWORD *)s2, v285);
        sub_47AB4(6, (const char *)v286, 0);
      }
LABEL_61:
      if ( !sub_4AC60(a1, (int)v11) )
      {
        if ( byte_244080 || byte_1AECC4 || dword_9E320 > 5 )
        {
          snprintf((char *)v286, 0x800u, "Unknown stratum msg: %s", v11);
          sub_47AB4(6, (const char *)v286, 0);
        }
        goto LABEL_15;
      }
    }
LABEL_14:
    if ( !*((_BYTE *)a1 + 680) )
      goto LABEL_15;
    v25 = (void **)sub_55E38();
    *((_BYTE *)a1 + 680) = 0;
    v270 = v25;
    sub_5A7E8((int)a1, (int)v25);
    v26 = v270;
    v27 = (time_t *)v270[65];
    *((_BYTE *)v270 + 280) = 1;
    v28 = v27[392];
    timer = v27;
    v29 = *(unsigned __int8 *)(v28 + 42);
    *(_DWORD *)v273 = 0;
    if ( *((_BYTE *)v26 + 282) )
      goto LABEL_54;
    v30 = (unsigned __int8 *)&v284;
    s1 = (unsigned int)v26[8];
    v275 = (unsigned int)v26[7];
    v276 = (unsigned int)v26[6];
    v277 = (unsigned int)v26[5];
    v278 = (unsigned int)v26[4];
    v279 = (unsigned int)v26[3];
    v280 = (unsigned int)v26[2];
    v281 = (unsigned int)v26[1];
    sub_4981C(s2, (int)&s1, 32);
    if ( v29 <= 4 )
    {
      sub_4C150(v273, (const void *)(v28 + 43), v29, (int)"cgminer.c", (int)"test_work_current", 5644);
      --*(_DWORD *)v273;
    }
    if ( pthread_mutex_lock((pthread_mutex_t *)(timer + 53)) )
    {
      v221 = _errno_location();
      v63 = "test_work_current";
      v64 = *v221;
      v65 = 5649;
      goto LABEL_135;
    }
    if ( pthread_rwlock_wrlock((pthread_rwlock_t *)(timer + 59)) )
    {
      v223 = _errno_location();
      v224 = "test_work_current";
      v225 = *v223;
      v226 = 5649;
LABEL_357:
      snprintf((char *)v286, 0x800u, "WTF WRLOCK ERROR ON LOCK! errno=%d in %s %s():%d", v225, "cgminer.c", v224, v226);
      goto LABEL_136;
    }
    if ( *((_BYTE *)timer + 680) )
    {
      *((_BYTE *)timer + 680) = 0;
      *((_BYTE *)v26 + 280) = 1;
    }
    if ( pthread_rwlock_unlock((pthread_rwlock_t *)(timer + 59)) )
    {
      v222 = _errno_location();
      v72 = "test_work_current";
      v73 = *v222;
      v74 = 5657;
LABEL_141:
      snprintf((char *)v286, 0x800u, "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d", v73, "cgminer.c", v72, v74);
LABEL_136:
      sub_47AB4(3, (const char *)v286, 1);
      sub_54CCC(1, 1);
    }
    if ( pthread_mutex_unlock((pthread_mutex_t *)(timer + 53)) )
    {
      v216 = _errno_location();
      v68 = "test_work_current";
      v69 = *v216;
      v70 = 5657;
      goto LABEL_139;
    }
    off_9E444();
    v263 = pthread_rwlock_wrlock((pthread_rwlock_t *)&byte_1B0658[256]);
    if ( v263 )
    {
      v227 = _errno_location();
      v224 = "block_exists";
      v225 = *v227;
      v226 = 5570;
      goto LABEL_357;
    }
    v31 = strlen(s2);
    n = v31;
    LOWORD(v32) = 31161;
    if ( v31 > 0xB )
    {
      v220 = -17973521;
      HIWORD(v32) = -25033;
      v217 = v32;
      do
      {
        v31 -= 12;
        v218 = v30;
        v33 = (*(v30 - 10) << 16) + (*(v30 - 11) << 8) + *(v30 - 12) + (*(v30 - 9) << 24);
        v34 = (*(v30 - 6) << 16) + (*(v30 - 7) << 8) + *(v30 - 8) + (*(v30 - 5) << 24) + v32;
        v35 = (*(v30 - 2) << 16) + (*(v30 - 3) << 8) + *(v30 - 4) + (*(v30 - 1) << 24);
        v30 += 12;
        v36 = v35 + v220;
        v37 = (v33 - v34 - v36 + v217) ^ (v36 >> 13);
        v38 = v34 - v36 - v37;
        v39 = v36 - v37;
        v40 = v38 ^ (v37 << 8);
        v41 = (v39 - v40) ^ (v40 >> 13);
        v42 = (v37 - v40 - v41) ^ (v41 >> 12);
        v43 = (v40 - v41 - v42) ^ (v42 << 16);
        v44 = v42 - v43;
        v45 = (v41 - v42 - v43) ^ (v43 >> 5);
        v217 = (v44 - v45) ^ (v45 >> 3);
        v32 = (v43 - v45 - v217) ^ (v217 << 10);
        v220 = (v45 - v217 - v32) ^ (v32 >> 15);
      }
      while ( v31 > 0xB );
      v219 = v31;
    }
    else
    {
      HIWORD(v32) = -25033;
      v217 = v32;
      v218 = (unsigned __int8 *)s2;
      v219 = v31;
      v220 = -17973521;
    }
    v46 = n + v220;
    switch ( v219 )
    {
      case 1u:
        goto LABEL_107;
      case 2u:
        goto LABEL_106;
      case 3u:
        goto LABEL_105;
      case 4u:
        goto LABEL_104;
      case 5u:
        goto LABEL_103;
      case 6u:
        goto LABEL_102;
      case 7u:
        goto LABEL_101;
      case 8u:
        goto LABEL_100;
      case 9u:
        goto LABEL_99;
      case 0xAu:
        goto LABEL_98;
      case 0xBu:
        v46 += v218[10] << 24;
LABEL_98:
        v46 += v218[9] << 16;
LABEL_99:
        v46 += v218[8] << 8;
LABEL_100:
        v32 += v218[7] << 24;
LABEL_101:
        v32 += v218[6] << 16;
LABEL_102:
        v32 += v218[5] << 8;
LABEL_103:
        v32 += v218[4];
LABEL_104:
        v217 += v218[3] << 24;
LABEL_105:
        v217 += v218[2] << 16;
LABEL_106:
        v217 += v218[1] << 8;
LABEL_107:
        v217 += *v218;
        break;
      default:
        break;
    }
    v48 = (v217 - v32 - v46) ^ (v46 >> 13);
    v49 = v46 - v48;
    v50 = (v32 - v46 - v48) ^ (v48 << 8);
    v51 = (v49 - v50) ^ (v50 >> 13);
    v52 = (v48 - v50 - v51) ^ (v51 >> 12);
    v53 = (v50 - v51 - v52) ^ (v52 << 16);
    v54 = (v51 - v52 - v53) ^ (v53 >> 5);
    v55 = v52 - v53 - v54;
    v56 = (v54 - (v55 ^ (v54 >> 3)) - ((v53 - v54 - (v55 ^ (v54 >> 3))) ^ ((v55 ^ (v54 >> 3)) << 10)))
        ^ (((v53 - v54 - (v55 ^ (v54 >> 3))) ^ ((v55 ^ (v54 >> 3)) << 10)) >> 15);
    if ( dword_1B0778 )
    {
      v57 = *(_DWORD **)(dword_1B0778 + 68);
      v58 = *(_DWORD *)(*v57 + 12 * ((v57[1] - 1) & v56));
      if ( v58 )
      {
        v59 = -v57[5];
        v60 = v58 - v57[5];
        if ( v60 )
        {
          while ( v56 != *(_DWORD *)(v60 + 96)
               || n != *(_DWORD *)(v60 + 92)
               || memcmp(*(const void **)(v60 + 88), s2, n) )
          {
            v61 = *(_DWORD *)(v60 + 84);
            if ( v61 )
            {
              v60 = v61 + v59;
              if ( v61 + v59 )
                continue;
            }
            goto LABEL_146;
          }
          if ( pthread_rwlock_unlock((pthread_rwlock_t *)&byte_1B0658[256]) )
            goto LABEL_393;
          off_9E444();
          if ( memcmp(timer + 136, &s1, 0x20u) )
          {
            if ( !memcmp(&s1, &unk_1B0784, 0x20u) )
            {
              if ( byte_244080 || byte_1AECC4 || dword_9E320 > 5 )
              {
                snprintf((char *)v286, 0x800u, "Pool %d now up to date at height %d", *timer, *(_DWORD *)v273);
                sub_47AB4(6, (const char *)v286, 0);
              }
              sub_4C150(timer + 136, &s1, 0x20u, (int)"cgminer.c", (int)"test_work_current", 5715);
            }
            else if ( byte_1AECC5 && (byte_244080 || byte_1AECC4 || dword_9E320 > 6) )
            {
              snprintf((char *)v286, 0x800u, "Stale data from pool %d at height %d", *timer, *(_DWORD *)v273);
              sub_47AB4(7, (const char *)v286, 0);
            }
          }
          if ( !*((_BYTE *)v26 + 280) )
            goto LABEL_133;
          v168 = (unsigned int)(dword_1AEEB8 - 3) > 1;
          v26[84] = (void *)++dword_1AF224;
          if ( v168 )
          {
            v233 = v26[65];
            if ( v233 != (void *)sub_58084() )
              goto LABEL_133;
          }
          if ( *((_BYTE *)v26 + 284) )
          {
            if ( byte_244080 || byte_1AECC4 || dword_9E320 > 4 )
            {
              snprintf((char *)v286, 0x800u, "Stratum from pool %d requested work restart", *timer);
              sub_47AB4(5, (const char *)v286, 0);
            }
            goto LABEL_132;
          }
          if ( !byte_244080 && !byte_1AECC4 && dword_9E320 <= 4 )
            goto LABEL_132;
          v232 = "";
          if ( *((_BYTE *)v26 + 324) )
            v232 = "GBT ";
          snprintf((char *)v286, 0x800u, "%sLONGPOLL from pool %d requested work restart", v232, *(_DWORD *)v26[65]);
LABEL_302:
          sub_47AB4(5, (const char *)v286, 0);
          goto LABEL_132;
        }
      }
    }
LABEL_146:
    v77 = (char *)sub_496AC(0x68u, 1u, "cgminer.c", "block_exists", 5574);
    v78 = (int)v77;
    if ( !v77 )
    {
      strcpy((char *)v286, "block_exists OOM");
      sub_47AB4(3, (const char *)v286, 1);
      sub_54CCC(1, 1);
    }
    strcpy(v77, s2);
    v80 = dword_1B0778;
    v81 = dword_24625C;
    *(_DWORD *)(v78 + 100) = dword_24625C;
    dword_24625C = v81 + 1;
    if ( !v80 || *(_DWORD *)(*(_DWORD *)(v80 + 68) + 12) <= 3u )
      goto LABEL_205;
    na = (size_t)v26;
    v82 = 1;
    v83 = v80 + 68;
    v264 = v11;
    while ( 2 )
    {
      v84 = v83;
      v83 = 0;
      v85 = 0;
      v86 = 0;
      do
      {
        ++v86;
        if ( v82 )
        {
          v87 = *(_DWORD *)(v84 + 8);
          if ( v87 && (v88 = *(_DWORD *)(*(_DWORD *)(v80 + 68) + 20), (v87 += v88) != 0) )
          {
            v89 = 1;
            do
            {
              if ( v89 == v82 )
              {
                v90 = v89;
                goto LABEL_159;
              }
              v87 = *(_DWORD *)(v87 + 8);
              ++v89;
              if ( !v87 )
                break;
              v87 += v88;
            }
            while ( v87 );
            v90 = v82;
          }
          else
          {
            v90 = v82;
            v89 = 1;
          }
        }
        else
        {
          v87 = v84;
          v90 = 0;
          v89 = 0;
        }
LABEL_159:
        v91 = v84;
        v84 = v87;
        while ( v89 )
        {
          v95 = v84 == 0;
          if ( v84 )
            v95 = v90 == 0;
          if ( v95 )
          {
            if ( v91 )
            {
              v79 = *(_DWORD *)(v91 + 8);
              if ( v79 )
                v79 += *(_DWORD *)(*(_DWORD *)(v80 + 68) + 20);
              goto LABEL_182;
            }
          }
          else
          {
            v130 = *(_DWORD *)(*(_DWORD *)(v80 + 68) + 20);
            v79 = *(_DWORD *)(v91 - v130 + 100);
            if ( v79 - *(_DWORD *)(v84 - v130 + 100) > 0 )
            {
              v93 = *(_DWORD *)(v84 + 8);
              if ( v93 )
                v93 += v130;
LABEL_169:
              --v90;
              if ( !v85 )
              {
                v85 = v84;
                v84 = v93;
                goto LABEL_214;
              }
              v79 = v84 - *(_DWORD *)(*(_DWORD *)(v80 + 68) + 20);
              *(_DWORD *)(v85 + 8) = v79;
              if ( !v84 )
              {
                v85 = 0;
                v84 = v93;
                continue;
              }
              goto LABEL_173;
            }
            if ( v91 )
            {
              v79 = *(_DWORD *)(v91 + 8);
              if ( v79 )
                v79 += v130;
              goto LABEL_182;
            }
          }
          v79 = v91;
LABEL_182:
          --v89;
          if ( !v85 )
          {
            v85 = v91;
            v91 = v79;
LABEL_214:
            v83 = v85;
            if ( v85 )
            {
              v79 = 0;
              goto LABEL_174;
            }
            continue;
          }
          if ( !v91 )
          {
            *(_DWORD *)(v85 + 8) = 0;
            v85 = 0;
            v91 = v79;
            continue;
          }
          v93 = v84;
          v84 = v91;
          v96 = v91 - *(_DWORD *)(*(_DWORD *)(v80 + 68) + 20);
          v91 = v79;
          *(_DWORD *)(v85 + 8) = v96;
LABEL_173:
          v79 = v85 - *(_DWORD *)(*(_DWORD *)(v80 + 68) + 20);
          v85 = v84;
          v84 = v93;
LABEL_174:
          *(_DWORD *)(v85 + 4) = v79;
        }
        v92 = v90 == 0;
        if ( v90 )
          v92 = v84 == 0;
        if ( !v92 )
        {
          v93 = *(_DWORD *)(v84 + 8);
          v94 = v93 == 0;
          if ( v93 )
            v79 = *(_DWORD *)(v80 + 68);
          else
            v93 = v89;
          if ( !v94 )
          {
            v79 = *(_DWORD *)(v79 + 20);
            v93 += v79;
          }
          goto LABEL_169;
        }
      }
      while ( v84 );
      if ( v85 )
        *(_DWORD *)(v85 + 8) = 0;
      if ( v86 > 1 )
      {
        v82 *= 2;
        if ( !v83 )
        {
          v85 = 0;
          v97 = 0;
          v11 = v264;
          v26 = (void **)na;
          goto LABEL_192;
        }
        continue;
      }
      break;
    }
    v97 = v83;
    v11 = v264;
    v26 = (void **)na;
LABEL_192:
    *(_DWORD *)(*(_DWORD *)(v80 + 68) + 16) = v85;
    v98 = v97 - *(_DWORD *)(*(_DWORD *)(v80 + 68) + 20);
    v99 = *(_DWORD *)(v98 + 72);
    dword_1B0778 = v98;
    v263 = *(_DWORD *)(v98 + 100);
    if ( v99 )
    {
      v100 = *(_DWORD *)(v98 + 68);
      v101 = v98 + 68;
      v102 = *(_DWORD *)(v100 + 20);
      if ( v98 != *(_DWORD *)(v100 + 16) - v102 )
        goto LABEL_194;
LABEL_361:
      *(_DWORD *)(v100 + 16) = v99 + v102;
      v99 = *(_DWORD *)(v98 + 72);
      if ( !v99 )
      {
        v228 = *(_DWORD *)(v98 + 76);
        goto LABEL_363;
      }
      v102 = *(_DWORD *)(*(_DWORD *)(v98 + 68) + 20);
LABEL_194:
      v80 = v98;
      *(_DWORD *)(v99 + v102 + 8) = *(_DWORD *)(v98 + 76);
LABEL_195:
      v103 = *(_DWORD *)(v98 + 76);
      v104 = *(_DWORD **)(v80 + 68);
      if ( v103 )
      {
        *(_DWORD *)(v103 + v104[5] + 4) = *(_DWORD *)(v98 + 72);
        v104 = *(_DWORD **)(v80 + 68);
      }
      v105 = 3 * ((v104[1] - 1) & *(_DWORD *)(v98 + 96));
      --*(_DWORD *)(*v104 + 4 * v105 + 4);
      v106 = **(_DWORD **)(v80 + 68);
      if ( *(_DWORD *)(v106 + 4 * v105) == v101 )
        *(_DWORD *)(v106 + 4 * v105) = *(_DWORD *)(v98 + 84);
      v107 = *(_QWORD *)(v98 + 80);
      if ( (_DWORD)v107 )
      {
        *(_DWORD *)(v107 + 16) = HIDWORD(v107);
        HIDWORD(v107) = *(_DWORD *)(v98 + 84);
      }
      if ( HIDWORD(v107) )
        *(_DWORD *)(HIDWORD(v107) + 12) = *(_DWORD *)(v98 + 80);
      --*(_DWORD *)(*(_DWORD *)(v80 + 68) + 12);
    }
    else
    {
      v228 = *(_DWORD *)(v98 + 76);
      v100 = *(_DWORD *)(v98 + 68);
      if ( v228 )
      {
        v102 = *(_DWORD *)(v100 + 20);
        v101 = v98 + 68;
        if ( v98 == *(_DWORD *)(v100 + 16) - v102 )
          goto LABEL_361;
LABEL_363:
        v80 = v228;
        dword_1B0778 = v228;
        goto LABEL_195;
      }
      v80 = 0;
      free(*(void **)v100);
      free(*(void **)(v98 + 68));
      dword_1B0778 = 0;
    }
    free((void *)v98);
LABEL_205:
    v108 = strlen((const char *)v78);
    v266 = v108;
    LOWORD(v109) = 31161;
    if ( v108 <= 0xB )
    {
      HIWORD(v109) = -25033;
      v115 = (unsigned __int8 *)v78;
      v111 = v109;
      v127 = v108;
      nb = -17973521;
    }
    else
    {
      HIWORD(v109) = -25033;
      v269 = v80;
      v110 = (unsigned __int8 *)(v78 + 12);
      v111 = v109;
      v112 = v108;
      nb = -17973521;
      do
      {
        v112 -= 12;
        v113 = *(v110 - 1);
        v114 = (*(v110 - 6) << 16) + (*(v110 - 7) << 8) + *(v110 - 8) + (*(v110 - 5) << 24) + v109;
        v115 = v110;
        v116 = (*(v110 - 2) << 16) + (*(v110 - 3) << 8) + *(v110 - 4);
        v117 = (*(v110 - 10) << 16) + (*(v110 - 11) << 8) + *(v110 - 12) + (*(v110 - 9) << 24);
        v110 += 12;
        v118 = v116 + (v113 << 24) + nb;
        v119 = (v117 - v114 - v118 + v111) ^ (v118 >> 13);
        v120 = (v114 - v118 - v119) ^ (v119 << 8);
        v121 = (v118 - v119 - v120) ^ (v120 >> 13);
        v122 = (v119 - v120 - v121) ^ (v121 >> 12);
        v123 = (v120 - v121 - v122) ^ (v122 << 16);
        v124 = (v121 - v122 - v123) ^ (v123 >> 5);
        v111 = (v122 - v123 - v124) ^ (v124 >> 3);
        v125 = v123 - v124 - v111;
        v126 = v124 - v111;
        v109 = v125 ^ (v111 << 10);
        nb = (v126 - v109) ^ (v109 >> 15);
      }
      while ( v112 > 0xB );
      v127 = v112;
      v80 = v269;
    }
    v128 = v127 - 1;
    v129 = v266 + nb;
    switch ( v128 )
    {
      case 0u:
        goto LABEL_238;
      case 1u:
        goto LABEL_237;
      case 2u:
        goto LABEL_236;
      case 3u:
        goto LABEL_235;
      case 4u:
        goto LABEL_234;
      case 5u:
        goto LABEL_233;
      case 6u:
        goto LABEL_232;
      case 7u:
        goto LABEL_231;
      case 8u:
        goto LABEL_230;
      case 9u:
        goto LABEL_229;
      case 0xAu:
        v129 += v115[10] << 24;
LABEL_229:
        v129 += v115[9] << 16;
LABEL_230:
        v129 += v115[8] << 8;
LABEL_231:
        v109 += v115[7] << 24;
LABEL_232:
        v109 += v115[6] << 16;
LABEL_233:
        v109 += v115[5] << 8;
LABEL_234:
        v109 += v115[4];
LABEL_235:
        v111 += v115[3] << 24;
LABEL_236:
        v111 += v115[2] << 16;
LABEL_237:
        v111 += v115[1] << 8;
LABEL_238:
        v111 += *v115;
        break;
      default:
        break;
    }
    *(_DWORD *)(v78 + 88) = v78;
    v131 = (v111 - v109 - v129) ^ (v129 >> 13);
    v132 = (v109 - v129 - v131) ^ (v131 << 8);
    v133 = (v129 - v131 - v132) ^ (v132 >> 13);
    v134 = (v131 - v132 - v133) ^ (v133 >> 12);
    v135 = (v132 - v133 - v134) ^ (v134 << 16);
    v136 = (v133 - v134 - v135) ^ (v135 >> 5);
    v137 = v134 - v135 - v136;
    v138 = (v136 - (v137 ^ (v136 >> 3)) - ((v135 - v136 - (v137 ^ (v136 >> 3))) ^ ((v137 ^ (v136 >> 3)) << 10)))
         ^ (((v135 - v136 - (v137 ^ (v136 >> 3))) ^ ((v137 ^ (v136 >> 3)) << 10)) >> 15);
    *(_DWORD *)(v78 + 96) = v138;
    *(_DWORD *)(v78 + 92) = strlen((const char *)v78);
    if ( v80 )
    {
      v139 = *(_DWORD *)(v80 + 68);
      *(_DWORD *)(v78 + 76) = 0;
      v140 = v78 + 68;
      *(_DWORD *)(v78 + 68) = v139;
      *(_DWORD *)(v78 + 72) = *(_DWORD *)(*(_DWORD *)(v80 + 68) + 16) - *(_DWORD *)(*(_DWORD *)(v80 + 68) + 20);
      *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v80 + 68) + 16) + 8) = v78;
      *(_DWORD *)(*(_DWORD *)(v80 + 68) + 16) = v78 + 68;
    }
    else
    {
      *(_DWORD *)(v78 + 76) = 0;
      *(_DWORD *)(v78 + 72) = 0;
      dword_1B0778 = v78;
      v229 = malloc(0x2Cu);
      *(_DWORD *)(v78 + 68) = v229;
      if ( !v229 )
        goto LABEL_402;
      memset(v229, 0, 0x2Cu);
      v140 = v78 + 68;
      *(_DWORD *)(*(_DWORD *)(v78 + 68) + 16) = v78 + 68;
      *(_DWORD *)(*(_DWORD *)(v78 + 68) + 4) = 32;
      *(_DWORD *)(*(_DWORD *)(v78 + 68) + 8) = 5;
      *(_DWORD *)(*(_DWORD *)(v78 + 68) + 20) = 68;
      v230 = *(void ***)(v78 + 68);
      *v230 = malloc(0x180u);
      v231 = **(void ***)(v78 + 68);
      if ( !v231 )
LABEL_402:
        exit(-1);
      memset(v231, 0, 0x180u);
      v80 = v78;
      *(_DWORD *)(*(_DWORD *)(v78 + 68) + 40) = -1609490463;
    }
    ++*(_DWORD *)(*(_DWORD *)(v80 + 68) + 12);
    v141 = *(_DWORD **)(v80 + 68);
    v142 = 12 * (v138 & (v141[1] - 1));
    ++*(_DWORD *)(*v141 + v142 + 4);
    v143 = *(_DWORD *)(**(_DWORD **)(v80 + 68) + v142);
    *(_DWORD *)(v78 + 80) = 0;
    *(_DWORD *)(v78 + 84) = v143;
    v144 = **(_DWORD **)(v80 + 68);
    v145 = *(_DWORD *)(v144 + v142);
    v146 = (int *)(v144 + v142);
    if ( v145 )
    {
      *(_DWORD *)(v145 + 12) = v140;
      v146 = (int *)(**(_DWORD **)(v80 + 68) + v142);
    }
    *v146 = v140;
    v147 = *(_QWORD *)(**(_DWORD **)(v80 + 68) + v142 + 4);
    if ( (unsigned int)v147 >= 10 * (HIDWORD(v147) + 1) )
    {
      v148 = *(_DWORD *)(v78 + 68);
      if ( *(_DWORD *)(v148 + 36) != 1 )
      {
        v149 = calloc(24 * *(_DWORD *)(v148 + 4), 1u);
        if ( !v149 )
          goto LABEL_402;
        v150 = *(_DWORD *)(v78 + 68);
        *(_DWORD *)(v150 + 24) = (((2 * *(_DWORD *)(v150 + 4) - 1) & *(_DWORD *)(v150 + 12)) != 0)
                               + (*(_DWORD *)(v150 + 12) >> (*(_BYTE *)(v150 + 8) + 1));
        *(_DWORD *)(*(_DWORD *)(v78 + 68) + 28) = 0;
        v151 = *(_DWORD *)(v78 + 68);
        v152 = *(_DWORD *)(v151 + 4);
        if ( v152 )
        {
          v153 = a1;
          v154 = v78;
          v155 = v153;
          nc = 0;
          v267 = 0;
          v268 = v11;
          do
          {
            v156 = *(_DWORD **)(*(_DWORD *)v151 + nc);
            if ( v156 )
            {
              while ( 1 )
              {
                v157 = (_DWORD *)v156[4];
                v158 = 3 * ((2 * v152 - 1) & v156[7]);
                v159 = (char *)&v149[3 * ((2 * v152 - 1) & v156[7])];
                v160 = *((_DWORD *)v159 + 1) + 1;
                *((_DWORD *)v159 + 1) = v160;
                v161 = *(_DWORD *)(v154 + 68);
                if ( v160 > *(_DWORD *)(v161 + 24) )
                {
                  ++*(_DWORD *)(v161 + 28);
                  *((_DWORD *)v159 + 2) = sub_77070(*((_DWORD *)v159 + 1), *(_DWORD *)(*(_DWORD *)(v154 + 68) + 24), 0);
                }
                v156[3] = 0;
                v156[4] = v149[v158];
                v162 = v149[v158];
                if ( v162 )
                  *(_DWORD *)(v162 + 12) = v156;
                v149[v158] = v156;
                if ( !v157 )
                  break;
                v156 = v157;
                v152 = *(_DWORD *)(*(_DWORD *)(v154 + 68) + 4);
              }
              v151 = *(_DWORD *)(v154 + 68);
              v152 = *(_DWORD *)(v151 + 4);
            }
            v163 = ++v267 >= v152;
            nc += 12;
          }
          while ( !v163 );
          v11 = v268;
          v164 = v155;
          v78 = v154;
          a1 = v164;
        }
        free(*(void **)v151);
        *(_DWORD *)(*(_DWORD *)(v78 + 68) + 4) *= 2;
        ++*(_DWORD *)(*(_DWORD *)(v78 + 68) + 8);
        **(_DWORD **)(v78 + 68) = v149;
        v165 = *(_DWORD **)(v78 + 68);
        v166 = v165[7];
        v167 = v165[3];
        v168 = v166 > v167 >> 1;
        if ( v166 <= v167 >> 1 )
          v169 = 0;
        else
          v169 = v165[8];
        if ( v168 )
          ++v169;
        v165[8] = v169;
        v170 = *(_DWORD *)(v78 + 68);
        if ( *(_DWORD *)(v170 + 32) > 1u )
          *(_DWORD *)(v170 + 36) = 1;
      }
    }
    v171 = 8 * (29 - *((unsigned __int8 *)v26 + 72));
    v172 = bswap32((unsigned int)v26[18]) & 0xFFFFFF;
    if ( v171 < 8 )
      LOBYTE(v171) = 8;
    v173 = sub_778A4(0xFFFF << v171, (0xFFFF << (v171 - 32)) | (0xFFFFu >> (32 - v171))) / (double)v172;
    if ( v173 != dbl_9ED90 )
    {
      v239 = sub_77970(LODWORD(v173), HIDWORD(v173));
      sub_51B18(v239, byte_1B077C, 8u, 0);
      dbl_9ED90 = v173;
      if ( byte_244080 || byte_1AECC4 || dword_9E320 > 4 )
      {
        snprintf((char *)v286, 0x800u, "Network diff set to %s", byte_1B077C);
        sub_47AB4(5, (const char *)v286, 0);
      }
    }
    if ( v263 && byte_1AECC5 && (byte_244080 || byte_1AECC4 || dword_9E320 > 6) )
    {
      snprintf((char *)v286, 0x800u, "Deleted block %d from database", v263);
      sub_47AB4(7, (const char *)v286, 0);
    }
    if ( pthread_rwlock_unlock((pthread_rwlock_t *)&byte_1B0658[256]) )
    {
LABEL_393:
      v234 = _errno_location();
      snprintf(
        (char *)v286,
        0x800u,
        "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",
        *v234,
        "cgminer.c",
        "block_exists",
        5608);
      goto LABEL_136;
    }
    off_9E444();
    if ( pthread_mutex_lock(&stru_244084) )
    {
      v238 = _errno_location();
      snprintf(
        (char *)v286,
        0x800u,
        "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",
        *v238,
        "cgminer.c",
        "set_curblock",
        5515);
      goto LABEL_136;
    }
    if ( pthread_rwlock_wrlock(&stru_24409C) )
    {
      v236 = _errno_location();
      snprintf(
        (char *)v286,
        0x800u,
        "WTF WRLOCK ERROR ON LOCK! errno=%d in %s %s():%d",
        *v236,
        "cgminer.c",
        "set_curblock",
        5515);
      goto LABEL_136;
    }
    sub_4A60C((struct timeval *)&dword_245170);
    strcpy(byte_242EA4, s2);
    sub_4C150(&unk_1B0784, &s1, 0x20u, (int)"cgminer.c", (int)"set_curblock", 5518);
    v286[0] = dword_245170;
    v174 = dword_245174 / 1000;
    v175 = localtime(v286);
    snprintf(byte_1B07A4, 0x20u, "[%02d:%02d:%02d.%03d]", v175->tm_hour, v175->tm_min, v175->tm_sec, v174);
    if ( pthread_rwlock_unlock(&stru_24409C) )
    {
      v235 = _errno_location();
      snprintf(
        (char *)v286,
        0x800u,
        "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",
        *v235,
        "cgminer.c",
        "set_curblock",
        5520);
      goto LABEL_136;
    }
    if ( pthread_mutex_unlock(&stru_244084) )
    {
      v237 = _errno_location();
      snprintf(
        (char *)v286,
        0x800u,
        "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
        *v237,
        "cgminer.c",
        "set_curblock",
        5520);
      goto LABEL_136;
    }
    off_9E444();
    v176 = 0;
    v177 = byte_242EA4;
    do
    {
      v178 = (unsigned __int8)*v177++;
      if ( v178 != 48 )
        break;
      ++v176;
    }
    while ( v176 != 57 );
    strncpy(dest, &byte_242EA4[v176], 8u);
    byte_1B07CC = 0;
    if ( byte_244080 || byte_1AECC4 || dword_9E320 > 5 )
    {
      snprintf((char *)v286, 0x800u, "New block: %s... diff %s", byte_242EA4, byte_1B077C);
      sub_47AB4(6, (const char *)v286, 0);
    }
    if ( v263 && byte_1AECC5 && (byte_244080 || byte_1AECC4 || dword_9E320 > 6) )
    {
      snprintf((char *)v286, 0x800u, "Deleted block %d from database", v263);
      sub_47AB4(7, (const char *)v286, 0);
    }
    sub_4C150(timer + 136, &s1, 0x20u, (int)"cgminer.c", (int)"test_work_current", 5665);
    if ( dword_24625C == 1 )
      goto LABEL_133;
    v179 = *((unsigned __int8 *)v26 + 280);
    v26[84] = (void *)++dword_1AF224;
    if ( !v179 )
    {
      if ( byte_244082 )
      {
        if ( !*((_BYTE *)timer + 900) && (byte_244080 || byte_1AECC4 || dword_9E320 > 4) )
        {
          strcpy((char *)v286, "New block detected on network before pool notification");
          sub_47AB4(5, (const char *)v286, 0);
        }
      }
      else if ( !*((_BYTE *)timer + 900) && (byte_244080 || byte_1AECC4 || dword_9E320 > 4) )
      {
        strcpy((char *)v286, "New block detected on network");
        sub_47AB4(5, (const char *)v286, 0);
      }
      goto LABEL_132;
    }
    if ( !*((_BYTE *)v26 + 284) )
    {
      if ( !byte_244080 && !byte_1AECC4 && dword_9E320 <= 4 )
        goto LABEL_132;
      v182 = "";
      v181 = *(_DWORD *)v26[65];
      v180 = "%sLONGPOLL from pool %d detected new block";
      if ( *((_BYTE *)v26 + 324) )
        v182 = "GBT ";
LABEL_301:
      snprintf((char *)v286, 0x800u, v180, v182, v181);
      goto LABEL_302;
    }
    if ( byte_244080 || byte_1AECC4 || dword_9E320 > 4 )
    {
      v180 = "Stratum from pool %d detected new block at height %d";
      v181 = *(_DWORD *)v273;
      v182 = (char *)*timer;
      goto LABEL_301;
    }
LABEL_132:
    sub_54FC0();
LABEL_133:
    *((_BYTE *)v26 + 280) = 0;
LABEL_54:
    sub_53084(&v270, "cgminer.c", "stratum_rthread", 7595);
LABEL_15:
    free(v11);
    v3 = (int)a1;
  }
  while ( !*((_BYTE *)a1 + 105) );
LABEL_16:
  sub_4AFA8(v3);
  return 0;
}
