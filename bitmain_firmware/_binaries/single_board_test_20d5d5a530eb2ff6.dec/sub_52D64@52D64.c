char *__fastcall sub_52D64(unsigned int *a1, unsigned int *a2, _BYTE *a3, signed int *a4, int a5, int a6, int a7)
{
  char *result; // r0
  int v8; // r4
  _DWORD *v10; // r3
  signed int v11; // r4
  unsigned int v12; // r3
  unsigned int v13; // r3
  _BYTE *i; // r2
  void *v15; // r3
  int v16; // r4
  _DWORD *v17; // r9
  unsigned int v18; // r11
  unsigned int v19; // r8
  unsigned int v20; // r2
  unsigned int v21; // r10
  unsigned int v22; // r3
  unsigned int v23; // r2
  unsigned int v24; // r1
  int v25; // r0
  int v26; // r6
  _BOOL4 v27; // r2
  unsigned int v28; // r4
  _DWORD *v29; // r3
  int v30; // r5
  _BOOL4 v32; // r3
  unsigned int v33; // r7
  unsigned int v34; // r3
  _BOOL4 v35; // r3
  _DWORD *v36; // r2
  unsigned int *v37; // r1
  unsigned int v38; // r7
  unsigned int v39; // r3
  _DWORD *v40; // lr
  unsigned int *v41; // r5
  unsigned int v42; // r3
  unsigned int v43; // r3
  unsigned int v44; // r3
  _DWORD *v45; // r5
  int v46; // r2
  _BOOL4 v47; // r7
  _DWORD *v48; // r7
  _DWORD *v49; // lr
  unsigned int v50; // r2
  unsigned int v51; // r5
  int v52; // r0
  unsigned int v53; // r2
  _DWORD *v54; // r2
  _DWORD *v55; // r7
  unsigned int j; // r1
  unsigned int v57; // r2
  int v58; // r2
  unsigned int v59; // r3
  unsigned int v60; // r5
  unsigned int v61; // r0
  unsigned int v62; // r4
  _BOOL4 v63; // r3
  int v64; // r3
  int v65; // r2
  unsigned int v66; // r4
  unsigned int v67; // r3
  bool v68; // cf
  _DWORD *v69; // r10
  _DWORD *v70; // r3
  unsigned int v71; // r4
  _BYTE *v72; // r3
  unsigned int v73; // r2
  unsigned int v74; // r8
  unsigned int v75; // r1
  unsigned int v76; // r10
  unsigned int v77; // r2
  unsigned int v78; // r1
  unsigned int v79; // r0
  int v80; // lr
  _DWORD *v81; // r11
  int v82; // r6
  int v83; // r9
  _BOOL4 v84; // r1
  unsigned int v85; // r4
  _DWORD *v86; // r3
  int v87; // r5
  _BOOL4 v89; // r3
  unsigned int v90; // r7
  unsigned int v91; // r3
  _BOOL4 v92; // r3
  _DWORD *v93; // r3
  unsigned int *v94; // r0
  unsigned int v95; // r7
  unsigned int v96; // r2
  unsigned int *v97; // r5
  _DWORD *v98; // r12
  unsigned int v99; // r2
  unsigned int v100; // r2
  unsigned int v101; // r2
  unsigned int v102; // r5
  _DWORD *v103; // r1
  _BOOL4 v104; // r7
  _DWORD *v105; // r7
  _DWORD *v106; // r12
  unsigned int v107; // r0
  unsigned int v108; // r1
  int v109; // r0
  char *v110; // r3
  char *v111; // r1
  int v112; // r2
  int v113; // r12
  int v114; // t1
  int v115; // t1
  int v116; // r5
  int v117; // r0
  int v118; // r0
  char *v119; // r5
  char *v120; // r1
  int v121; // r2
  int v122; // r12
  int v123; // t1
  int v124; // t1
  unsigned int v125; // r2
  _DWORD *v126; // r5
  _DWORD *v127; // r7
  unsigned int v128; // r2
  unsigned int v129; // r2
  signed int v130; // r2
  unsigned int v131; // r3
  unsigned int v132; // r5
  unsigned int v133; // r0
  unsigned int v134; // r4
  _BOOL4 v135; // r2
  int v136; // r3
  int v137; // r2
  unsigned int v138; // r3
  bool v139; // cf
  unsigned int v140; // r3
  unsigned int *v141; // r1
  unsigned int v142; // r2
  int v143; // r2
  unsigned int *v144; // r2
  int v145; // r0
  unsigned int v146; // r3
  int v147; // r0
  unsigned int v148; // r3
  unsigned int v149; // r3
  unsigned int v150; // r7
  char *v151; // r6
  unsigned int v152; // r0
  unsigned int v153; // r8
  unsigned int v154; // r0
  unsigned int v155; // r10
  unsigned int v156; // r2
  unsigned int v157; // r1
  unsigned int v158; // r0
  _DWORD *v159; // r11
  int v160; // r6
  _BOOL4 v161; // r1
  int v162; // lr
  unsigned int v163; // r4
  _DWORD *v164; // r3
  int v165; // r5
  _BOOL4 v167; // r3
  unsigned int v168; // r7
  unsigned int v169; // r3
  _BOOL4 v170; // r3
  _DWORD *v171; // r3
  unsigned int *v172; // r0
  unsigned int v173; // r7
  unsigned int v174; // r2
  unsigned int *v175; // r5
  _DWORD *v176; // r12
  unsigned int v177; // r2
  unsigned int v178; // r2
  unsigned int v179; // r2
  unsigned int v180; // r5
  _DWORD *v181; // r1
  _BOOL4 v182; // r7
  _DWORD *v183; // r7
  _DWORD *v184; // r12
  unsigned int v185; // r0
  unsigned int v186; // r1
  int v187; // r0
  char *v188; // r3
  char *v189; // r1
  int v190; // r2
  int v191; // r12
  int v192; // t1
  int v193; // t1
  int v194; // r5
  int v195; // r0
  int v196; // r1
  char *v197; // r5
  char *v198; // r0
  int v199; // r2
  int v200; // r12
  int v201; // t1
  int v202; // t1
  unsigned int v203; // r5
  unsigned int v204; // r2
  _DWORD *v205; // r2
  _DWORD *v206; // r7
  unsigned int v207; // r0
  unsigned int v208; // r2
  signed int v209; // r2
  unsigned int v210; // r3
  unsigned int v211; // r5
  unsigned int v212; // r0
  unsigned int v213; // r4
  _BOOL4 v214; // r2
  int v215; // r3
  int v216; // r2
  unsigned int v217; // r3
  bool v218; // cf
  unsigned int v219; // r4
  _BYTE *v220; // r3
  unsigned int v221; // r2
  unsigned int *v222; // r2
  _WORD *v223; // r1
  unsigned int v224; // r4
  unsigned int v225; // r0
  _BYTE *v226; // r5
  unsigned int v227; // r0
  unsigned int v228; // r3
  _BYTE *v229; // r1
  unsigned int v230; // r4
  _BYTE *v231; // r3
  unsigned int v232; // r2
  int *v233; // r2
  _WORD *v234; // r1
  int v235; // r4
  int v236; // r0
  unsigned int v237; // r0
  unsigned int v238; // r3
  _BYTE *v239; // r1
  int v240; // r2
  int v241; // r2
  unsigned int v242; // r3
  int v243; // r2
  int v244; // r1
  int v245; // r2
  unsigned int v246; // r4
  _BYTE *v247; // r2
  unsigned int v248; // r1
  unsigned int *v249; // r1
  _WORD *v250; // r4
  unsigned int v251; // r5
  unsigned int v252; // r0
  _BYTE *v253; // r5
  unsigned int v254; // r2
  _BYTE *v255; // r0
  unsigned int v256; // r1
  _BYTE *v257; // r2
  int v258; // r0
  unsigned int v259; // r3
  char v260; // r1
  _BYTE *v261; // r0
  unsigned int *v262; // r2
  _WORD *v263; // r1
  unsigned int v264; // r4
  unsigned int v265; // r0
  _BYTE *v266; // r0
  unsigned int v267; // r4
  unsigned int v268; // r2
  _BYTE *v269; // r3
  unsigned int v270; // r3
  unsigned int v271; // r0
  unsigned int v272; // r1
  _BYTE *v273; // r2
  unsigned int v274; // r0
  unsigned int *v275; // r0
  _WORD *v276; // r3
  unsigned int v277; // r5
  unsigned int v278; // r4
  _BYTE *v279; // r2
  unsigned int v280; // r0
  _BYTE *v281; // r3
  unsigned int v282; // r2
  int v283; // r0
  unsigned int v284; // r2
  int v285; // r0
  _BYTE *v286; // r2
  int v287; // r3
  unsigned int v288; // r4
  _BYTE *v289; // r3
  unsigned int v290; // r2
  unsigned int *v291; // r2
  _WORD *v292; // r4
  unsigned int v293; // r0
  unsigned int v294; // r1
  _BYTE *v295; // r1
  unsigned int v296; // r0
  unsigned int v297; // r2
  _BYTE *v298; // r3
  unsigned int v299; // r2
  int v300; // r0
  _BYTE *v301; // r2
  _BYTE *v302; // r4
  _BYTE *v303; // r0
  _BOOL4 v304; // [sp+10h] [bp-DCh]
  unsigned int *v305; // [sp+24h] [bp-C8h]
  unsigned int v306; // [sp+28h] [bp-C4h]
  unsigned int v307; // [sp+28h] [bp-C4h]
  unsigned int v308; // [sp+28h] [bp-C4h]
  unsigned int v309; // [sp+2Ch] [bp-C0h]
  unsigned int v310; // [sp+2Ch] [bp-C0h]
  unsigned int v311; // [sp+2Ch] [bp-C0h]
  unsigned int v312; // [sp+30h] [bp-BCh]
  unsigned int v313; // [sp+34h] [bp-B8h]
  unsigned int v314; // [sp+34h] [bp-B8h]
  unsigned int v315; // [sp+34h] [bp-B8h]
  int v316; // [sp+38h] [bp-B4h]
  unsigned int v317; // [sp+3Ch] [bp-B0h]
  unsigned int v318; // [sp+3Ch] [bp-B0h]
  char *v319; // [sp+40h] [bp-ACh]
  unsigned int *v320; // [sp+40h] [bp-ACh]
  unsigned int *v321; // [sp+40h] [bp-ACh]
  _BOOL4 v322; // [sp+44h] [bp-A8h]
  unsigned int *v323; // [sp+44h] [bp-A8h]
  int v324; // [sp+48h] [bp-A4h]
  unsigned int v325; // [sp+4Ch] [bp-A0h]
  unsigned int v326; // [sp+50h] [bp-9Ch]
  unsigned int v327; // [sp+54h] [bp-98h]
  char *v328; // [sp+54h] [bp-98h]
  char *v329; // [sp+54h] [bp-98h]
  unsigned int v330; // [sp+58h] [bp-94h]
  _BOOL4 v331; // [sp+58h] [bp-94h]
  _BOOL4 v332; // [sp+58h] [bp-94h]
  char *v333; // [sp+5Ch] [bp-90h]
  unsigned int v334; // [sp+60h] [bp-8Ch]
  unsigned int v335; // [sp+64h] [bp-88h]
  int v336; // [sp+64h] [bp-88h]
  int v337; // [sp+64h] [bp-88h]
  unsigned int v338; // [sp+68h] [bp-84h]
  unsigned int v339; // [sp+6Ch] [bp-80h]
  int v340; // [sp+6Ch] [bp-80h]
  unsigned int v341; // [sp+70h] [bp-7Ch]
  int v342; // [sp+70h] [bp-7Ch]
  unsigned int *v343; // [sp+74h] [bp-78h]
  unsigned int *v345; // [sp+7Ch] [bp-70h]
  unsigned int v346; // [sp+84h] [bp-68h]
  unsigned int v347; // [sp+84h] [bp-68h]
  _BYTE *v348; // [sp+88h] [bp-64h]
  unsigned int *v349; // [sp+8Ch] [bp-60h]
  unsigned int v350; // [sp+8Ch] [bp-60h]
  unsigned int v351; // [sp+90h] [bp-5Ch]
  char *v352; // [sp+94h] [bp-58h]
  int v353; // [sp+98h] [bp-54h]
  signed int v354; // [sp+98h] [bp-54h]
  unsigned int v355; // [sp+9Ch] [bp-50h]
  unsigned int v356; // [sp+9Ch] [bp-50h]
  unsigned int *src; // [sp+A0h] [bp-4Ch]
  int v358; // [sp+A4h] [bp-48h]
  unsigned int *v359; // [sp+A8h] [bp-44h]
  unsigned int *v360; // [sp+ACh] [bp-40h]
  unsigned int *v361; // [sp+B0h] [bp-3Ch]
  unsigned int *v362; // [sp+B4h] [bp-38h]
  unsigned int v363; // [sp+B8h] [bp-34h]
  unsigned int v364; // [sp+BCh] [bp-30h]
  unsigned int v365; // [sp+C0h] [bp-2Ch]
  unsigned int v366; // [sp+C0h] [bp-2Ch]
  unsigned int v367; // [sp+C4h] [bp-28h]
  unsigned int v368; // [sp+C4h] [bp-28h]
  char *v369; // [sp+C8h] [bp-24h]
  unsigned int *v370; // [sp+CCh] [bp-20h]
  _DWORD *v371; // [sp+D4h] [bp-18h]
  unsigned int v374; // [sp+E0h] [bp-Ch]
  unsigned int v375; // [sp+E0h] [bp-Ch]

  if ( (unsigned int)*a4 > 0x7E000000 )
    return 0;
  v371 = a1 + 0x10000;
  a1[0x10000] += *a4;
  if ( a6 > 0 )
  {
    v8 = a6;
    if ( a6 >= 12 )
      v8 = 12;
  }
  else
  {
    v8 = 9;
  }
  v10 = (_DWORD *)((char *)&unk_1A0030 + 12 * v8);
  v358 = v10[1];
  if ( *v10 )
  {
    v304 = v8 == 12;
    v16 = *((char *)v371 + 26);
    if ( *((_BYTE *)v371 + 26) )
      v16 = 1;
    result = sub_50C70(a1, a2, a3, a4, a5, v358, v10[2], a7, v304, 0, v16);
LABEL_19:
    if ( (int)result <= 0 )
      goto LABEL_20;
    return result;
  }
  v11 = *a4;
  *a4 = 0;
  v364 = (unsigned int)&a3[a5];
  v370 = (unsigned int *)((char *)a2 + v11);
  if ( a7 == 2 )
  {
    v364 -= 5;
    if ( v11 <= 12 )
    {
      v348 = a3;
      v12 = v11 + 1 + (v11 + 240) / 0xFFu;
      src = a2;
      goto LABEL_546;
    }
  }
  else if ( v11 <= 12 )
  {
    v348 = a3;
    v12 = v11 + 1 + (v11 + 240) / 0xFFu;
    src = a2;
    goto LABEL_11;
  }
  v351 = (unsigned int)(v370 - 3);
  if ( a2 > v370 - 3 )
  {
    v348 = a3;
    src = a2;
LABEL_275:
    v11 = (char *)v370 - (char *)src;
    v12 = (char *)v370 - (char *)src + 1 + ((char *)v370 - (char *)src + 240) / 0xFFu;
    if ( a7 != 2 )
    {
LABEL_11:
      if ( !a7 )
      {
LABEL_12:
        if ( (unsigned int)v11 <= 0xE )
        {
          *v348 = 16 * v11;
          v15 = v348 + 1;
        }
        else
        {
          v13 = v11 - 15;
          *v348 = -16;
          for ( i = v348 + 1; v13 > 0xFE; ++i )
          {
            v13 -= 255;
            *i = -1;
          }
          *i = v13;
          v15 = i + 1;
        }
        v261 = memcpy(v15, src, v11);
        *a4 = (char *)src + v11 - (char *)a2;
        result = (char *)(&v261[v11] - a3);
        goto LABEL_19;
      }
LABEL_547:
      if ( v364 < (unsigned int)&v348[v12] )
      {
        if ( a7 == 1 )
          goto LABEL_508;
        v11 = v364 - (_DWORD)v348 - 1 - ((v364 - (unsigned int)v348 + 240) >> 8);
      }
      goto LABEL_12;
    }
LABEL_546:
    v364 += 5;
    goto LABEL_547;
  }
  v369 = 0;
  v367 = 0;
  v333 = 0;
  v326 = 0;
  v17 = a1 + 0x8000;
  v338 = 0;
  src = a2;
  v361 = a1 + 65539;
  v362 = a1 + 65540;
  v312 = (unsigned int)v370 - 5;
  v360 = a1 + 65538;
  v305 = a2;
  v348 = a3;
  v343 = a1 + 65541;
  v359 = a1 + 65537;
  while ( 2 )
  {
    v18 = *v359;
    v19 = *v361;
    v306 = *v305;
    v309 = *v362;
    v20 = (unsigned int)v305 + *v361 - *v359;
    v327 = v20;
    if ( v20 < *v362 + 0x10000 )
      v21 = *v362;
    else
      v21 = v20 - 65280;
    if ( v20 >= *v362 + 0x10000 )
      v21 -= 255;
    v313 = *v360;
    v334 = *v360 + v19 - v309;
    v22 = *v343;
    if ( v20 > *v343 )
    {
      do
      {
        v23 = (unsigned int)(-1640531535 * *(_DWORD *)(v18 + v22 - v19)) >> 17;
        v24 = v22 - a1[v23];
        if ( v24 >= 0xFFFF )
          LOWORD(v24) = -1;
        *((_WORD *)v17 + (unsigned __int16)v22) = v24;
        a1[v23] = v22++;
      }
      while ( v327 != v22 );
    }
    v25 = 0;
    v325 = 0;
    v26 = v358;
    *v343 = v327;
    v319 = (char *)(v305 + 1);
    v316 = 3;
    v27 = (unsigned __int16)v306 == HIWORD(v306);
    if ( (unsigned __int8)v306 != HIBYTE(v306) )
      v27 = 0;
    v322 = v27;
    v330 = (unsigned int)(v370 - 2);
    v335 = (unsigned int)v370 - 6;
    v28 = a1[(-1640531535 * *v305) >> 17];
    v324 = v19 - 1;
    while ( 1 )
    {
      v35 = v28 >= v21;
      if ( v26 <= 0 )
        v35 = 0;
      if ( !v35 )
        break;
      --v26;
      if ( v19 > v28 )
      {
        v36 = (_DWORD *)(v28 - v309 + v313);
        if ( v28 > v19 - 4 || v306 != *v36 )
          goto LABEL_38;
        v37 = (unsigned int *)((char *)v305 + v19 - v28);
        if ( (unsigned int)v37 >= v312 )
          v37 = (unsigned int *)((char *)v370 - 5);
        v38 = (unsigned int)v37 - 3;
        if ( v319 >= (char *)v37 - 3 )
        {
          v41 = v305 + 1;
          v40 = v36 + 1;
          goto LABEL_265;
        }
        v39 = v36[1] ^ v305[1];
        if ( v39 )
        {
          v43 = __clz(__rbit32(v39)) >> 3;
        }
        else
        {
          v40 = v36 + 2;
          v41 = v305 + 2;
          if ( v38 <= (unsigned int)(v305 + 2) )
            goto LABEL_265;
          v42 = v36[2] ^ v305[2];
          if ( v42 )
          {
LABEL_66:
            v43 = (char *)v41 + (__clz(__rbit32(v42)) >> 3) - v319;
          }
          else
          {
            while ( 1 )
            {
              ++v41;
              ++v40;
              if ( v38 <= (unsigned int)v41 )
                break;
              v42 = *v40 ^ *v41;
              if ( v42 )
                goto LABEL_66;
            }
LABEL_265:
            if ( v41 < (unsigned int *)((char *)v37 - 1) && *(unsigned __int16 *)v40 == *(unsigned __int16 *)v41 )
            {
              v41 = (unsigned int *)((char *)v41 + 2);
              v40 = (_DWORD *)((char *)v40 + 2);
            }
            if ( v41 < v37 && *(unsigned __int8 *)v40 == *(unsigned __int8 *)v41 )
              v41 = (unsigned int *)((char *)v41 + 1);
            v43 = (char *)v41 - v319;
          }
        }
        v44 = v43 + 4;
        v45 = (unsigned int *)((char *)v305 + v44);
        v46 = v44;
        v47 = (unsigned int *)((char *)v305 + v44) == v37;
        if ( v312 <= (unsigned int)v37 )
          v47 = 0;
        if ( v47 )
        {
          if ( (unsigned int)v45 >= v330 )
          {
            v48 = (unsigned int *)((char *)v305 + v44);
            v49 = (_DWORD *)v18;
            goto LABEL_620;
          }
          if ( *(_DWORD *)v18 != *v45 )
          {
            v51 = __clz(__rbit32(*(_DWORD *)v18 ^ *v45)) >> 3;
          }
          else
          {
            v48 = v45 + 1;
            v49 = (_DWORD *)(v18 + 4);
            if ( v330 <= (unsigned int)(v45 + 1) )
              goto LABEL_620;
            v50 = v45[1] ^ *(_DWORD *)(v18 + 4);
            if ( v50 )
            {
LABEL_76:
              v51 = (char *)v48 + (__clz(__rbit32(v50)) >> 3) - (char *)v45;
            }
            else
            {
              while ( 1 )
              {
                ++v48;
                ++v49;
                if ( v330 <= (unsigned int)v48 )
                  break;
                v50 = *v49 ^ *v48;
                if ( v50 )
                  goto LABEL_76;
              }
LABEL_620:
              if ( (unsigned int)v48 < v335 && *(unsigned __int16 *)v49 == *(unsigned __int16 *)v48 )
              {
                v48 = (_DWORD *)((char *)v48 + 2);
                v49 = (_DWORD *)((char *)v49 + 2);
              }
              if ( v312 > (unsigned int)v48 && *(unsigned __int8 *)v49 == *(unsigned __int8 *)v48 )
                v48 = (_DWORD *)((char *)v48 + 1);
              v51 = (char *)v48 - (char *)v45;
            }
          }
          v46 = v44 + v51;
        }
        if ( v316 < v46 )
        {
          v316 = v46;
          v338 = v28 - v19 + v18;
        }
        goto LABEL_38;
      }
      v29 = (_DWORD *)(v28 - v19 + v18);
      if ( *(unsigned __int16 *)((char *)v305 + v316 - 1) != *(unsigned __int16 *)((char *)v29 + v316 - 1)
        || v306 != *v29 )
      {
        goto LABEL_38;
      }
      if ( (unsigned int)v319 >= v330 )
      {
        v54 = v305 + 1;
        v55 = v29 + 1;
LABEL_557:
        if ( (unsigned int)v54 < v335 && *(unsigned __int16 *)v55 == *(unsigned __int16 *)v54 )
        {
          v54 = (_DWORD *)((char *)v54 + 2);
          v55 = (_DWORD *)((char *)v55 + 2);
        }
        if ( v312 > (unsigned int)v54 && *(unsigned __int8 *)v55 == *(unsigned __int8 *)v54 )
          v54 = (_DWORD *)((char *)v54 + 1);
        v57 = (char *)v54 - v319;
        goto LABEL_91;
      }
      v53 = v29[1] ^ v305[1];
      if ( v53 )
      {
        v57 = __clz(__rbit32(v53)) >> 3;
      }
      else
      {
        v54 = v305 + 2;
        v55 = v29 + 2;
        if ( v330 <= (unsigned int)(v305 + 2) )
          goto LABEL_557;
        for ( j = v29[2] ^ v305[2]; !j; j = *v55 ^ *v54 )
        {
          ++v54;
          ++v55;
          if ( v330 <= (unsigned int)v54 )
            goto LABEL_557;
        }
        v57 = (char *)v54 + (__clz(__rbit32(j)) >> 3) - v319;
      }
LABEL_91:
      v58 = v57 + 4;
      if ( v316 < v58 )
      {
        v338 = v28 - v19 + v18;
        v316 = v58;
      }
LABEL_38:
      v30 = *((unsigned __int16 *)v17 + (unsigned __int16)v28);
      if ( v30 != 1 || v358 <= 128 )
        goto LABEL_51;
      if ( v25 )
      {
        v32 = v25 == 2;
      }
      else
      {
        v25 = 1;
        if ( !v322 )
          goto LABEL_51;
        v52 = sub_50C14(v319, v312, v306);
        v32 = v322;
        v325 = v52 + 4;
        v25 = 2;
      }
      v33 = v28 - 1;
      if ( v28 - 1 < v21 )
        v32 = 0;
      if ( v32 )
      {
        if ( v324 - v33 <= 2 )
          goto LABEL_50;
        if ( v19 <= v33 )
        {
          v59 = v33 - v19 + v18;
          if ( v306 != *(_DWORD *)v59 )
          {
LABEL_50:
            v25 = 2;
            goto LABEL_51;
          }
          v339 = v33 - v19 + v18;
          v60 = sub_50C14((char *)(v59 + 4), v312, v306) + 4;
          v61 = sub_50BB8(v339, v18, v306);
          v62 = v61;
          v63 = v18 == v339 - v61;
          if ( v19 <= v309 )
            v63 = 0;
          if ( v63 )
          {
            v64 = -v61 & 3;
            if ( v64 )
              v65 = __ROR4__(v306, 32 - 8 * v64);
            else
              v65 = v306;
            v62 = v61 + sub_50BB8(v334, v313, v65);
          }
        }
        else
        {
          v34 = v33 - v309 + v313;
          if ( v306 != *(_DWORD *)v34 )
            goto LABEL_50;
          v147 = sub_50C14((char *)(v34 + 4), v334, v306);
          v148 = v33 - v309 + v313;
          v60 = v147 + 4;
          if ( v334 == v148 + v147 + 4 )
          {
            if ( (v60 & 3) != 0 )
              v299 = __ROR4__(v306, 32 - 8 * (v60 & 3));
            else
              v299 = v306;
            v300 = sub_50C14((char *)v18, v312, v299);
            v148 = v33 - v309 + v313;
            v60 += v300;
          }
          v62 = sub_50BB8(v148, v313, v306);
        }
        v66 = v33 - v62;
        if ( v66 < v21 )
          v66 = v21;
        v67 = v33 + v60 - v66;
        v68 = v67 >= v325;
        if ( v67 >= v325 )
          v68 = v325 >= v60;
        if ( v68 )
        {
          v28 = v33 - v325 + v60;
          v25 = 2;
          if ( v324 - v28 <= 2 )
            v28 = v19;
        }
        else if ( v324 - v66 <= 2 )
        {
          v28 = v19;
          v25 = 2;
        }
        else
        {
          if ( v67 >= v325 )
            v67 = v325;
          if ( v67 > v316 )
          {
            if ( v327 - v66 >= 0x10000 )
              break;
            v316 = v67;
            v338 = v18 + v66 - v19;
          }
          v149 = *((unsigned __int16 *)v17 + (unsigned __int16)v66);
          if ( v66 < v149 )
            break;
          v28 = v66 - v149;
          v25 = 2;
        }
      }
      else
      {
LABEL_51:
        v28 -= v30;
      }
    }
    if ( v316 <= 3 )
    {
      v305 = (unsigned int *)((char *)v305 + 1);
      goto LABEL_274;
    }
    v69 = v17;
    v352 = (char *)v338;
    v340 = v316;
    v323 = v305;
LABEL_112:
    v355 = (unsigned int)(v370 - 2);
    v374 = (unsigned int)v370 - 6;
    v70 = v69;
    while ( 2 )
    {
      if ( v351 < (unsigned int)v305 + v316 )
      {
LABEL_114:
        v17 = v70;
        v71 = (char *)v305 - (char *)src;
        v72 = v348 + 1;
        if ( a7 && v364 < (unsigned int)&v72[v71 + 8 + v71 / 0xFF] )
          goto LABEL_507;
        if ( v71 <= 0xE )
        {
          *v348 = 16 * v71;
        }
        else
        {
          v73 = v71 - 15;
          for ( *v348 = -16; v73 > 0xFE; ++v72 )
          {
            v73 -= 255;
            *v72 = -1;
          }
          *v72++ = v73;
        }
        v262 = src;
        v263 = &v72[v71];
        do
        {
          v264 = *v262;
          v72 += 8;
          v265 = v262[1];
          v262 += 2;
          *((_DWORD *)v72 - 2) = v264;
          *((_DWORD *)v72 - 1) = v265;
        }
        while ( v263 > (_WORD *)v72 );
        *v263 = (_WORD)v305 - v338;
        v266 = v263 + 1;
        v267 = v316 - 4;
        if ( a7 )
        {
          if ( v364 < (unsigned int)&v266[v267 / 0xFF + 6] )
            goto LABEL_507;
        }
        if ( v267 <= 0xE )
        {
          v286 = v348;
          v348 = v263 + 1;
          *v286 += v267;
        }
        else
        {
          v268 = v316 - 19;
          *v348 += 15;
          if ( (unsigned int)(v316 - 19) >= 0x1FE )
          {
            v269 = v263 + 2;
            do
            {
              v268 -= 510;
              *(v269 - 2) = -1;
              *(v269 - 1) = -1;
              v266 = v269;
              v269 += 2;
            }
            while ( v268 >= 0x1FE );
          }
          if ( v268 > 0xFE )
          {
            LOBYTE(v268) = v268 + 1;
            *v266++ = -1;
          }
          *v266 = v268;
          v348 = v266 + 1;
        }
        src = (unsigned int *)((char *)v305 + v316);
        v305 = (unsigned int *)((char *)v305 + v316);
        goto LABEL_274;
      }
      v310 = *v359;
      v320 = (unsigned int *)((char *)v305 + v316 - 2);
      v74 = *v361;
      v317 = *v362;
      v75 = (unsigned int)v320 + *v361 - *v359;
      v346 = v75;
      v349 = v305;
      if ( v75 < *v362 + 0x10000 )
        v76 = *v362;
      else
        v76 = v75 - 0xFFFF;
      v314 = *v360;
      v307 = *v320;
      v363 = *v360 + v74 - v317;
      v77 = *v343;
      if ( v75 > *v343 )
      {
        do
        {
          v78 = (unsigned int)(-1640531535 * *(_DWORD *)(v310 + v77 - v74)) >> 17;
          v79 = v77 - a1[v78];
          if ( v79 >= 0xFFFF )
            LOWORD(v79) = -1;
          *((_WORD *)v70 + (unsigned __int16)v77) = v79;
          a1[v78] = v77++;
        }
        while ( v346 != v77 );
      }
      v80 = 0;
      v81 = v70;
      v341 = 0;
      v82 = v358;
      *v343 = v346;
      v83 = v316;
      v328 = (char *)(v320 + 1);
      v84 = (unsigned __int16)v307 == HIWORD(v307);
      if ( (unsigned __int8)v307 != HIBYTE(v307) )
        v84 = 0;
      v331 = v84;
      v353 = 2 - v316;
      v85 = a1[(-1640531535 * *v320) >> 17];
      v336 = v74 - 1;
      while ( 1 )
      {
        v92 = v85 >= v76;
        if ( v82 <= 0 )
          v92 = 0;
        if ( !v92 )
          break;
        --v82;
        if ( v74 <= v85 )
        {
          v86 = (_DWORD *)(v85 - v74 + v310);
          if ( *(unsigned __int16 *)((char *)v305 + v83 - 1) == *(unsigned __int16 *)((char *)v86 + v83 + ~(v316 - 2))
            && v307 == *v86 )
          {
            if ( v316 == 2 )
            {
              v118 = 0;
              if ( (unsigned int)v328 < v355 )
                goto LABEL_193;
            }
            else
            {
              v118 = v74 - v85;
              if ( (int)(v74 - v85) < v353 )
                v118 = 2 - v316;
              if ( v118 < 0 && *((unsigned __int8 *)v86 - 1) == *((unsigned __int8 *)v320 - 1) )
              {
                v119 = (char *)v320 - 1;
                v120 = (char *)v86 - 1;
                v121 = 0;
                while ( v118 != --v121 )
                {
                  v123 = (unsigned __int8)*--v119;
                  v122 = v123;
                  v124 = (unsigned __int8)*--v120;
                  if ( v122 != v124 )
                  {
                    v118 = v121;
                    break;
                  }
                }
              }
              else
              {
                v118 = 0;
              }
              if ( (unsigned int)v328 < v355 )
              {
LABEL_193:
                v125 = v86[1] ^ v320[1];
                if ( v125 )
                {
                  v129 = __clz(__rbit32(v125)) >> 3;
                }
                else
                {
                  v126 = v320 + 2;
                  v127 = v86 + 2;
                  if ( v355 <= (unsigned int)(v320 + 2) )
                    goto LABEL_251;
                  v128 = v320[2] ^ v86[2];
                  if ( v128 )
                  {
LABEL_198:
                    v129 = (char *)v126 + (__clz(__rbit32(v128)) >> 3) - v328;
                  }
                  else
                  {
                    while ( 1 )
                    {
                      ++v126;
                      ++v127;
                      if ( v355 <= (unsigned int)v126 )
                        break;
                      v128 = *v127 ^ *v126;
                      if ( v128 )
                        goto LABEL_198;
                    }
LABEL_251:
                    if ( (unsigned int)v126 < v374 && *(unsigned __int16 *)v127 == *(unsigned __int16 *)v126 )
                    {
                      v126 = (_DWORD *)((char *)v126 + 2);
                      v127 = (_DWORD *)((char *)v127 + 2);
                    }
                    if ( v312 > (unsigned int)v126 && *(unsigned __int8 *)v127 == *(unsigned __int8 *)v126 )
                      v126 = (_DWORD *)((char *)v126 + 1);
                    v129 = (char *)v126 - v328;
                  }
                }
                v130 = v129 + 4 - v118;
                if ( v83 < v130 )
                {
                  v83 = v130;
                  v333 = (char *)v86 + v118;
                  v326 = (unsigned int)v320 + v118;
                }
                goto LABEL_131;
              }
            }
            v126 = v320 + 1;
            v127 = v86 + 1;
            goto LABEL_251;
          }
        }
        else
        {
          v93 = (_DWORD *)(v85 - v317 + v314);
          if ( v85 <= v74 - 4 && v307 == *v93 )
          {
            v94 = (unsigned int *)((char *)v320 + v74 - v85);
            if ( (unsigned int)v94 >= v312 )
              v94 = (unsigned int *)((char *)v370 - 5);
            v95 = (unsigned int)v94 - 3;
            if ( v328 >= (char *)v94 - 3 )
            {
              v97 = v320 + 1;
              v98 = v93 + 1;
              goto LABEL_242;
            }
            v96 = v93[1] ^ v320[1];
            if ( v96 )
            {
              v100 = __clz(__rbit32(v96)) >> 3;
            }
            else
            {
              v97 = v320 + 2;
              v98 = v93 + 2;
              if ( v95 <= (unsigned int)(v320 + 2) )
                goto LABEL_242;
              v99 = v320[2] ^ v93[2];
              if ( v99 )
              {
LABEL_159:
                v100 = (char *)v97 + (__clz(__rbit32(v99)) >> 3) - v328;
              }
              else
              {
                while ( 1 )
                {
                  ++v97;
                  ++v98;
                  if ( v95 <= (unsigned int)v97 )
                    break;
                  v99 = *v98 ^ *v97;
                  if ( v99 )
                    goto LABEL_159;
                }
LABEL_242:
                if ( v97 < (unsigned int *)((char *)v94 - 1) && *(unsigned __int16 *)v98 == *(unsigned __int16 *)v97 )
                {
                  v97 = (unsigned int *)((char *)v97 + 2);
                  v98 = (_DWORD *)((char *)v98 + 2);
                }
                if ( v97 < v94 && *(unsigned __int8 *)v98 == *(unsigned __int8 *)v97 )
                  v97 = (unsigned int *)((char *)v97 + 1);
                v100 = (char *)v97 - v328;
              }
            }
            v101 = v100 + 4;
            v102 = v101;
            v103 = (unsigned int *)((char *)v320 + v101);
            v104 = v312 > (unsigned int)v94;
            if ( (unsigned int *)((char *)v320 + v101) != v94 )
              v104 = 0;
            if ( v104 )
            {
              if ( (unsigned int)v103 >= v355 )
              {
                v106 = (_DWORD *)v310;
                v105 = (unsigned int *)((char *)v320 + v101);
                goto LABEL_568;
              }
              if ( *(_DWORD *)v310 != *v103 )
              {
                v108 = __clz(__rbit32(*(_DWORD *)v310 ^ *v103)) >> 3;
              }
              else
              {
                v105 = v103 + 1;
                v106 = (_DWORD *)(v310 + 4);
                if ( v355 <= (unsigned int)(v103 + 1) )
                  goto LABEL_568;
                v107 = v103[1] ^ *(_DWORD *)(v310 + 4);
                if ( v107 )
                {
LABEL_169:
                  v108 = (char *)v105 + (__clz(__rbit32(v107)) >> 3) - (char *)v103;
                }
                else
                {
                  while ( 1 )
                  {
                    ++v105;
                    ++v106;
                    if ( v355 <= (unsigned int)v105 )
                      break;
                    v107 = *v106 ^ *v105;
                    if ( v107 )
                      goto LABEL_169;
                  }
LABEL_568:
                  if ( (unsigned int)v105 < v374 && *(unsigned __int16 *)v106 == *(unsigned __int16 *)v105 )
                  {
                    v105 = (_DWORD *)((char *)v105 + 2);
                    v106 = (_DWORD *)((char *)v106 + 2);
                  }
                  if ( v312 > (unsigned int)v105 && *(unsigned __int8 *)v106 == *(unsigned __int8 *)v105 )
                    v105 = (_DWORD *)((char *)v105 + 1);
                  v108 = (char *)v105 - (char *)v103;
                }
              }
              v102 = v101 + v108;
            }
            if ( v316 == 2 )
            {
              v109 = 0;
            }
            else
            {
              v109 = v317 - v85;
              if ( (int)(v317 - v85) < v353 )
                v109 = 2 - v316;
              if ( v109 < 0 && *((unsigned __int8 *)v320 - 1) == *((unsigned __int8 *)v93 - 1) )
              {
                v110 = (char *)v93 - 1;
                v111 = (char *)v320 - 1;
                v112 = 0;
                while ( v109 != --v112 )
                {
                  v114 = (unsigned __int8)*--v111;
                  v113 = v114;
                  v115 = (unsigned __int8)*--v110;
                  if ( v113 != v115 )
                  {
                    v109 = v112;
                    break;
                  }
                }
              }
              else
              {
                v109 = 0;
              }
            }
            v116 = v102 - v109;
            if ( v83 < v116 )
            {
              v83 = v116;
              v326 = (unsigned int)v320 + v109;
              v333 = (char *)(v310 + v85 - v74 + v109);
            }
          }
        }
LABEL_131:
        v87 = *((unsigned __int16 *)v81 + (unsigned __int16)v85);
        if ( v87 != 1 || v358 <= 128 )
          goto LABEL_144;
        if ( v80 )
        {
          v89 = v80 == 2;
        }
        else
        {
          v80 = 1;
          if ( !v331 )
            goto LABEL_144;
          v117 = sub_50C14(v328, v312, v307);
          v89 = v331;
          v341 = v117 + 4;
          v80 = 2;
        }
        v90 = v85 - 1;
        if ( v85 - 1 < v76 )
          v89 = 0;
        if ( !v89 )
          goto LABEL_144;
        if ( v336 - v90 <= 2 )
          goto LABEL_143;
        if ( v74 <= v90 )
        {
          v131 = v90 - v74 + v310;
          if ( v307 != *(_DWORD *)v131 )
          {
LABEL_143:
            v80 = 2;
LABEL_144:
            v85 -= v87;
            continue;
          }
          v365 = v90 - v74 + v310;
          v132 = sub_50C14((char *)(v131 + 4), v312, v307) + 4;
          v133 = sub_50BB8(v365, v310, v307);
          v134 = v133;
          v135 = v310 == v365 - v133;
          if ( v74 <= v317 )
            v135 = 0;
          if ( v135 )
          {
            v136 = -v133 & 3;
            if ( v136 )
              v137 = __ROR4__(v307, 32 - 8 * v136);
            else
              v137 = v307;
            v134 = v133 + sub_50BB8(v363, v314, v137);
          }
        }
        else
        {
          v91 = v90 - v317 + v314;
          if ( v307 != *(_DWORD *)v91 )
            goto LABEL_143;
          v145 = sub_50C14((char *)(v91 + 4), v363, v307);
          v146 = v90 - v317 + v314;
          v132 = v145 + 4;
          if ( v363 == v146 + v145 + 4 )
          {
            if ( (v132 & 3) != 0 )
              v282 = __ROR4__(v307, 32 - 8 * (v132 & 3));
            else
              v282 = v307;
            v283 = sub_50C14((char *)v310, v312, v282);
            v146 = v90 - v317 + v314;
            v132 += v283;
          }
          v134 = sub_50BB8(v146, v314, v307);
        }
        v85 = v90 - v134;
        if ( v85 < v76 )
          v85 = v76;
        v138 = v90 + v132 - v85;
        v139 = v138 >= v341;
        if ( v138 >= v341 )
          v139 = v341 >= v132;
        if ( v139 )
        {
          v85 = v90 - v341 + v132;
          v80 = 2;
          if ( v336 - v85 <= 2 )
            v85 = v74;
        }
        else if ( v336 - v85 <= 2 )
        {
          v85 = v74;
          v80 = 2;
        }
        else if ( v316 == 2 )
        {
          if ( v138 >= v341 )
            v138 = v341;
          if ( v138 > v83 )
          {
            if ( v346 - v85 >= 0x10000 )
              break;
            v83 = v138;
            v333 = (char *)(v310 + v85 - v74);
            v326 = (unsigned int)v305 + v316 - 2;
          }
          v140 = *((unsigned __int16 *)v81 + (unsigned __int16)v85);
          if ( v85 < v140 )
            break;
          v85 -= v140;
          v80 = 2;
        }
        else
        {
          v80 = 2;
        }
      }
      v70 = v81;
      if ( v316 == v83 )
        goto LABEL_114;
      v141 = v305;
      if ( v305 > v323 )
      {
        v142 = v338;
        if ( v326 < (unsigned int)v305 + v340 )
          v142 = (unsigned int)v352;
        v338 = v142;
        v143 = v316;
        if ( v326 < (unsigned int)v305 + v340 )
          v143 = v340;
        v316 = v143;
        if ( v326 < (unsigned int)v305 + v340 )
          v141 = v323;
        v349 = v141;
        v144 = v323;
        if ( v326 >= (unsigned int)v305 + v340 )
          v144 = v305;
        v305 = v144;
      }
      if ( (int)(v326 - (_DWORD)v349) <= 2 )
      {
        v316 = v83;
        v338 = (unsigned int)v333;
        v305 = (unsigned int *)v326;
        continue;
      }
      break;
    }
    v150 = v367;
    v151 = v369;
    v345 = (unsigned int *)((char *)v305 + v316);
    v356 = (unsigned int)(v370 - 2);
    v375 = (unsigned int)v370 - 6;
LABEL_290:
    v152 = v326 - (_DWORD)v305;
    if ( (int)(v326 - (_DWORD)v305) <= 17 )
    {
      v240 = v316;
      v342 = v83;
      if ( v316 >= 18 )
        v240 = 18;
      if ( (unsigned int)v305 + v240 > v83 - 4 + v326 )
        v240 = v152 + v83 - 4;
      v241 = v240 - v152;
      if ( v241 <= 0 )
      {
        v340 = v83;
        v352 = v333;
        v323 = (unsigned int *)v326;
      }
      else
      {
        v342 = v83 - v241;
        v340 = v83 - v241;
        v323 = (unsigned int *)(v326 + v241);
        v352 = &v333[v241];
      }
    }
    else
    {
      v342 = v83;
      v323 = (unsigned int *)v326;
      v352 = v333;
      v340 = v83;
    }
    if ( v351 < (unsigned int)v323 + v342 )
    {
      v17 = v70;
      v367 = v150;
      v369 = v151;
LABEL_394:
      if ( v323 < v345 )
        v316 = (char *)v323 - (char *)v305;
      v219 = (char *)v305 - (char *)src;
      v220 = v348 + 1;
      if ( a7 && v364 < (unsigned int)&v220[v219 + 8 + v219 / 0xFF] )
        goto LABEL_507;
      if ( v219 <= 0xE )
      {
        *v348 = 16 * v219;
      }
      else
      {
        v221 = v219 - 15;
        for ( *v348 = -16; v221 > 0xFE; ++v220 )
        {
          v221 -= 255;
          *v220 = -1;
        }
        *v220++ = v221;
      }
      v222 = src;
      v223 = &v220[v219];
      do
      {
        v224 = *v222;
        v220 += 8;
        v225 = v222[1];
        v222 += 2;
        *((_DWORD *)v220 - 2) = v224;
        *((_DWORD *)v220 - 1) = v225;
      }
      while ( v223 > (_WORD *)v220 );
      *v223 = (_WORD)v305 - v338;
      v226 = v223 + 1;
      v227 = v316 - 4;
      if ( a7 )
      {
        if ( v364 < (unsigned int)&v226[v227 / 0xFF + 6] )
          goto LABEL_507;
      }
      if ( v227 <= 0xE )
      {
        *v348 += v227;
      }
      else
      {
        v228 = v316 - 19;
        *v348 += 15;
        if ( (unsigned int)(v316 - 19) >= 0x1FE )
        {
          v229 = v223 + 2;
          do
          {
            v228 -= 510;
            *(v229 - 2) = -1;
            *(v229 - 1) = -1;
            v226 = v229;
            v229 += 2;
          }
          while ( v228 >= 0x1FE );
        }
        if ( v228 > 0xFE )
        {
          LOBYTE(v228) = v228 + 1;
          *v226++ = -1;
        }
        *v226++ = v228;
      }
      src = (unsigned int *)((char *)v305 + v316);
      v230 = (char *)v323 - ((char *)v305 + v316);
      v231 = v226 + 1;
      if ( a7 && v364 < (unsigned int)&v231[v230 + 8 + v230 / 0xFF] )
        goto LABEL_506;
      if ( v230 > 0xE )
      {
        v232 = v230 - 15;
        for ( *v226 = -16; v232 > 0xFE; ++v231 )
        {
          v232 -= 255;
          *v231 = -1;
        }
        *v231++ = v232;
      }
      else
      {
        *v226 = 16 * v230;
      }
      v233 = (int *)((char *)v305 + v316);
      v234 = &v231[v230];
      do
      {
        v235 = *v233;
        v231 += 8;
        v236 = v233[1];
        v233 += 2;
        *((_DWORD *)v231 - 2) = v235;
        *((_DWORD *)v231 - 1) = v236;
      }
      while ( v234 > (_WORD *)v231 );
      *v234 = (_WORD)v323 - (_WORD)v352;
      v348 = v234 + 1;
      v237 = v342 - 4;
      if ( a7 )
      {
        if ( v364 < (unsigned int)v234 + v237 / 0xFF + 8 )
        {
LABEL_506:
          v348 = v226;
          LOWORD(v338) = (_WORD)v352;
          v305 = v323;
          v316 = v340;
          goto LABEL_507;
        }
      }
      if ( v237 <= 0xE )
      {
        *v226 += v237;
      }
      else
      {
        v238 = v342 - 19;
        *v226 += 15;
        if ( (unsigned int)(v342 - 19) >= 0x1FE )
        {
          v239 = v234 + 2;
          do
          {
            v238 -= 510;
            *(v239 - 2) = -1;
            *(v239 - 1) = -1;
            v303 = v239;
            v239 += 2;
          }
          while ( v238 >= 0x1FE );
        }
        else
        {
          v303 = v234 + 1;
        }
        if ( v238 > 0xFE )
        {
          LOBYTE(v238) = v238 + 1;
          *v303++ = -1;
        }
        *v303 = v238;
        v348 = v303 + 1;
      }
      v333 = v352;
      src = (unsigned int *)((char *)v323 + v342);
      v305 = (unsigned int *)((char *)v323 + v342);
      v326 = (unsigned int)v323;
LABEL_274:
      if ( v351 < (unsigned int)v305 )
        goto LABEL_275;
      continue;
    }
    break;
  }
  v311 = *v359;
  v153 = *v361;
  v321 = (unsigned int *)((char *)v323 + v342 - 3);
  v318 = *v362;
  v154 = (unsigned int)v321 + *v361 - *v359;
  v350 = v154;
  if ( v154 < *v362 + 0x10000 )
    v155 = *v362;
  else
    v155 = v154 - 65280;
  if ( v154 >= v318 + 0x10000 )
    v155 -= 255;
  v308 = *v321;
  v315 = *v360;
  v366 = *v360 + v153 - v318;
  v156 = *v343;
  if ( v154 > *v343 )
  {
    do
    {
      v157 = (unsigned int)(-1640531535 * *(_DWORD *)(v311 + v156 - v153)) >> 17;
      v158 = v156 - a1[v157];
      if ( v158 >= 0xFFFF )
        LOWORD(v158) = -1;
      *((_WORD *)v70 + (unsigned __int16)v156) = v158;
      a1[v157] = v156++;
    }
    while ( v350 != v156 );
  }
  v159 = v70;
  v333 = v151;
  v347 = 0;
  *v343 = v350;
  v326 = v150;
  v83 = v340;
  v329 = (char *)(v321 + 1);
  v160 = v358;
  v161 = (unsigned __int16)v308 == HIWORD(v308);
  if ( (unsigned __int8)v308 != HIBYTE(v308) )
    v161 = 0;
  v332 = v161;
  v162 = 0;
  v163 = a1[(-1640531535 * *v321) >> 17];
  v354 = 3 - v342;
  v337 = v153 - 1;
  while ( 2 )
  {
    v170 = v163 >= v155;
    if ( v160 <= 0 )
      v170 = 0;
    if ( v170 )
    {
      --v160;
      if ( v153 > v163 )
      {
        v171 = (_DWORD *)(v163 - v318 + v315);
        if ( v163 <= v153 - 4 && v308 == *v171 )
        {
          v172 = (unsigned int *)((char *)v321 + v153 - v163);
          if ( (unsigned int)v172 >= v312 )
            v172 = (unsigned int *)((char *)v370 - 5);
          v173 = (unsigned int)v172 - 3;
          if ( v329 >= (char *)v172 - 3 )
          {
            v175 = v321 + 1;
            v176 = v171 + 1;
            goto LABEL_480;
          }
          v174 = v171[1] ^ v321[1];
          if ( v174 )
          {
            v178 = __clz(__rbit32(v174)) >> 3;
          }
          else
          {
            v175 = v321 + 2;
            v176 = v171 + 2;
            if ( v173 <= (unsigned int)(v321 + 2) )
              goto LABEL_480;
            v177 = v321[2] ^ v171[2];
            if ( v177 )
            {
LABEL_334:
              v178 = (char *)v175 + (__clz(__rbit32(v177)) >> 3) - v329;
            }
            else
            {
              while ( 1 )
              {
                ++v175;
                ++v176;
                if ( v173 <= (unsigned int)v175 )
                  break;
                v177 = *v176 ^ *v175;
                if ( v177 )
                  goto LABEL_334;
              }
LABEL_480:
              if ( v175 < (unsigned int *)((char *)v172 - 1) && *(unsigned __int16 *)v176 == *(unsigned __int16 *)v175 )
              {
                v175 = (unsigned int *)((char *)v175 + 2);
                v176 = (_DWORD *)((char *)v176 + 2);
              }
              if ( v175 < v172 && *(unsigned __int8 *)v176 == *(unsigned __int8 *)v175 )
                v175 = (unsigned int *)((char *)v175 + 1);
              v178 = (char *)v175 - v329;
            }
          }
          v179 = v178 + 4;
          v180 = v179;
          v181 = (unsigned int *)((char *)v321 + v179);
          v182 = (unsigned int *)((char *)v321 + v179) == v172;
          if ( v312 <= (unsigned int)v172 )
            v182 = 0;
          if ( v182 )
          {
            if ( (unsigned int)v181 >= v356 )
            {
              v184 = (_DWORD *)v311;
              v183 = (unsigned int *)((char *)v321 + v179);
              goto LABEL_578;
            }
            if ( *(_DWORD *)v311 != *v181 )
            {
              v186 = __clz(__rbit32(*(_DWORD *)v311 ^ *v181)) >> 3;
            }
            else
            {
              v183 = v181 + 1;
              v184 = (_DWORD *)(v311 + 4);
              if ( v356 <= (unsigned int)(v181 + 1) )
                goto LABEL_578;
              v185 = v181[1] ^ *(_DWORD *)(v311 + 4);
              if ( v185 )
              {
LABEL_344:
                v186 = (char *)v183 + (__clz(__rbit32(v185)) >> 3) - (char *)v181;
              }
              else
              {
                while ( 1 )
                {
                  ++v183;
                  ++v184;
                  if ( v356 <= (unsigned int)v183 )
                    break;
                  v185 = *v184 ^ *v183;
                  if ( v185 )
                    goto LABEL_344;
                }
LABEL_578:
                if ( (unsigned int)v183 < v375 && *(unsigned __int16 *)v184 == *(unsigned __int16 *)v183 )
                {
                  v183 = (_DWORD *)((char *)v183 + 2);
                  v184 = (_DWORD *)((char *)v184 + 2);
                }
                if ( v312 > (unsigned int)v183 && *(unsigned __int8 *)v184 == *(unsigned __int8 *)v183 )
                  v183 = (_DWORD *)((char *)v183 + 1);
                v186 = (char *)v183 - (char *)v181;
              }
            }
            v180 = v179 + v186;
          }
          if ( v342 == 3 )
          {
            v187 = 0;
          }
          else
          {
            v187 = v318 - v163;
            if ( (int)(v318 - v163) < v354 )
              v187 = 3 - v342;
            if ( v187 < 0 && *((unsigned __int8 *)v171 - 1) == *((unsigned __int8 *)v321 - 1) )
            {
              v188 = (char *)v171 - 1;
              v189 = (char *)v321 - 1;
              v190 = 0;
              while ( v187 != --v190 )
              {
                v192 = (unsigned __int8)*--v189;
                v191 = v192;
                v193 = (unsigned __int8)*--v188;
                if ( v191 != v193 )
                {
                  v187 = v190;
                  break;
                }
              }
            }
            else
            {
              v187 = 0;
            }
          }
          v194 = v180 - v187;
          if ( v83 < v194 )
          {
            v83 = v194;
            v326 = (unsigned int)v321 + v187;
            v333 = (char *)(v311 + v163 - v153 + v187);
          }
        }
LABEL_306:
        v165 = *((unsigned __int16 *)v159 + (unsigned __int16)v163);
        if ( v165 != 1 || v358 <= 128 )
          goto LABEL_319;
        if ( v162 )
        {
          v167 = v162 == 2;
        }
        else
        {
          v162 = 1;
          if ( !v332 )
            goto LABEL_319;
          v195 = sub_50C14(v329, v312, v308);
          v167 = v332;
          v347 = v195 + 4;
          v162 = 2;
        }
        v168 = v163 - 1;
        if ( v163 - 1 < v155 )
          v167 = 0;
        if ( !v167 )
          goto LABEL_319;
        if ( v337 - v168 <= 2 )
          goto LABEL_318;
        if ( v153 <= v168 )
        {
          v210 = v168 - v153 + v311;
          if ( *(_DWORD *)v210 != v308 )
          {
LABEL_318:
            v162 = 2;
LABEL_319:
            v163 -= v165;
            continue;
          }
          v368 = v168 - v153 + v311;
          v211 = sub_50C14((char *)(v210 + 4), v312, v308) + 4;
          v212 = sub_50BB8(v368, v311, v308);
          v213 = v212;
          v214 = v311 == v368 - v212;
          if ( v153 <= v318 )
            v214 = 0;
          if ( v214 )
          {
            v215 = -v212 & 3;
            if ( v215 )
              v216 = __ROR4__(v308, 32 - 8 * v215);
            else
              v216 = v308;
            v213 = v212 + sub_50BB8(v366, v315, v216);
          }
        }
        else
        {
          v169 = v168 - v318 + v315;
          if ( v308 != *(_DWORD *)v169 )
            goto LABEL_318;
          v258 = sub_50C14((char *)(v169 + 4), v366, v308);
          v259 = v168 - v318 + v315;
          v211 = v258 + 4;
          if ( v366 == v259 + v258 + 4 )
          {
            if ( (v211 & 3) != 0 )
              v284 = __ROR4__(v308, 32 - 8 * (v211 & 3));
            else
              v284 = v308;
            v285 = sub_50C14((char *)v311, v312, v284);
            v259 = v168 - v318 + v315;
            v211 += v285;
          }
          v213 = sub_50BB8(v259, v315, v308);
        }
        v163 = v168 - v213;
        if ( v163 < v155 )
          v163 = v155;
        v217 = v168 + v211 - v163;
        v218 = v217 >= v347;
        if ( v217 >= v347 )
          v218 = v347 >= v211;
        if ( v218 )
        {
          v163 = v168 - v347 + v211;
          v162 = 2;
          if ( v337 - v163 <= 2 )
            v163 = v153;
        }
        else if ( v337 - v163 <= 2 )
        {
          v163 = v153;
          v162 = 2;
        }
        else if ( v342 == 3 )
        {
          if ( v217 >= v347 )
            v217 = v347;
          if ( v217 > v83 )
          {
            if ( v350 - v163 >= 0x10000 )
              break;
            v83 = v217;
            v333 = (char *)(v311 + v163 - v153);
            v326 = (unsigned int)v323 + v342 - 3;
          }
          v242 = *((unsigned __int16 *)v159 + (unsigned __int16)v163);
          if ( v163 < v242 )
            break;
          v163 -= v242;
          v162 = 2;
        }
        else
        {
          v162 = 2;
        }
        continue;
      }
      v164 = (_DWORD *)(v163 - v153 + v311);
      if ( *(unsigned __int16 *)((char *)v323 + v83 - 1) != *(unsigned __int16 *)((char *)v164 + v83 + ~(v342 - 3))
        || v308 != *v164 )
      {
        goto LABEL_306;
      }
      if ( v342 == 3 )
      {
        v203 = (unsigned int)(v370 - 2);
        v196 = 0;
        if ( (unsigned int)v329 < v356 )
          goto LABEL_368;
      }
      else
      {
        v196 = v153 - v163;
        if ( (int)(v153 - v163) < v354 )
          v196 = 3 - v342;
        if ( v196 < 0 && *((unsigned __int8 *)v321 - 1) == *((unsigned __int8 *)v164 - 1) )
        {
          v197 = (char *)v321 - 1;
          v198 = (char *)v164 - 1;
          v199 = 0;
          while ( v196 != --v199 )
          {
            v201 = (unsigned __int8)*--v197;
            v200 = v201;
            v202 = (unsigned __int8)*--v198;
            if ( v200 != v202 )
            {
              v196 = v199;
              break;
            }
          }
        }
        else
        {
          v196 = 0;
        }
        v203 = (unsigned int)(v370 - 2);
        if ( (unsigned int)v329 < v356 )
        {
LABEL_368:
          v204 = v164[1] ^ v321[1];
          if ( v204 )
          {
            v208 = __clz(__rbit32(v204)) >> 3;
          }
          else
          {
            v205 = v321 + 2;
            v206 = v164 + 2;
            if ( v203 <= (unsigned int)(v321 + 2) )
              goto LABEL_489;
            v207 = v164[2] ^ v321[2];
            if ( v207 )
            {
LABEL_373:
              v208 = (char *)v205 + (__clz(__rbit32(v207)) >> 3) - v329;
            }
            else
            {
              while ( 1 )
              {
                ++v205;
                ++v206;
                if ( v356 <= (unsigned int)v205 )
                  break;
                v207 = *v206 ^ *v205;
                if ( v207 )
                  goto LABEL_373;
              }
LABEL_489:
              if ( (unsigned int)v205 < v375 && *(unsigned __int16 *)v206 == *(unsigned __int16 *)v205 )
              {
                v205 = (_DWORD *)((char *)v205 + 2);
                v206 = (_DWORD *)((char *)v206 + 2);
              }
              if ( v312 > (unsigned int)v205 && *(unsigned __int8 *)v206 == *(unsigned __int8 *)v205 )
                v205 = (_DWORD *)((char *)v205 + 1);
              v208 = (char *)v205 - v329;
            }
          }
          v209 = v208 + 4 - v196;
          if ( v83 < v209 )
          {
            v83 = v209;
            v333 = (char *)v164 + v196;
            v326 = (unsigned int)v321 + v196;
          }
          goto LABEL_306;
        }
      }
      v205 = v321 + 1;
      v206 = v164 + 1;
      goto LABEL_489;
    }
    break;
  }
  v70 = v159;
  if ( v340 == v83 )
  {
    v17 = v159;
    v369 = v333;
    v367 = v326;
    goto LABEL_394;
  }
  if ( v326 >= (unsigned int)v305 + v316 + 3 )
  {
    if ( v323 < v345 )
    {
      v243 = (char *)v323 - (char *)v305;
      if ( (char *)v323 - (char *)v305 <= 17 )
      {
        v244 = v316;
        if ( v316 >= 18 )
          v244 = 18;
        v316 = v244;
        if ( (char *)v305 + v244 > (char *)v323 + v342 - 4 )
          v316 = v340 + v243 - 4;
        v245 = v316 - v243;
        if ( v245 > 0 )
        {
          v323 = (unsigned int *)((char *)v323 + v245);
          v352 += v245;
          v340 -= v245;
        }
      }
      else
      {
        v316 = (char *)v323 - (char *)v305;
      }
    }
    v246 = (char *)v305 - (char *)src;
    v247 = v348 + 1;
    if ( a7 && v364 < (unsigned int)&v247[v246 + 8 + v246 / 0xFF] )
      goto LABEL_507;
    if ( v246 <= 0xE )
    {
      *v348 = 16 * v246;
    }
    else
    {
      v248 = v246 - 15;
      for ( *v348 = -16; v248 > 0xFE; ++v247 )
      {
        v248 -= 255;
        *v247 = -1;
      }
      *v247++ = v248;
    }
    v249 = src;
    v250 = &v247[v246];
    do
    {
      v251 = *v249;
      v247 += 8;
      v252 = v249[1];
      v249 += 2;
      *((_DWORD *)v247 - 2) = v251;
      *((_DWORD *)v247 - 1) = v252;
    }
    while ( v250 > (_WORD *)v247 );
    *v250 = (_WORD)v305 - v338;
    v253 = v250 + 1;
    v254 = v316 - 4;
    if ( a7 )
    {
      if ( v364 < (unsigned int)&v253[v254 / 0xFF + 6] )
        goto LABEL_507;
    }
    v255 = v348;
    if ( v254 <= 0xE )
    {
      v260 = *v348;
      v348 = v250 + 1;
      *v255 = v254 + v260;
    }
    else
    {
      v256 = v316 - 19;
      *v348 += 15;
      if ( (unsigned int)(v316 - 19) >= 0x1FE )
      {
        v257 = v250 + 2;
        do
        {
          v256 -= 510;
          *(v257 - 2) = -1;
          *(v257 - 1) = -1;
          v253 = v257;
          v257 += 2;
        }
        while ( v256 >= 0x1FE );
      }
      if ( v256 > 0xFE )
      {
        LOBYTE(v256) = v256 + 1;
        *v253++ = -1;
      }
      *v253 = v256;
      v348 = v253 + 1;
    }
    src = (unsigned int *)((char *)v305 + v316);
    v316 = v340;
    v338 = (unsigned int)v352;
    v305 = v323;
    v345 = (unsigned int *)((char *)v323 + v340);
LABEL_449:
    v151 = v333;
    v150 = v326;
    goto LABEL_290;
  }
  if ( v326 < (unsigned int)v345 )
    goto LABEL_449;
  v69 = v159;
  if ( v323 < v345 )
  {
    v287 = (char *)v345 - (char *)v323;
    v340 -= (char *)v345 - (char *)v323;
    if ( v340 <= 3 )
    {
      v340 = v83;
      v352 = v333;
      v323 = (unsigned int *)v326;
    }
    else
    {
      v323 = v345;
      v352 += v287;
    }
  }
  v288 = (char *)v305 - (char *)src;
  v289 = v348 + 1;
  if ( !a7 || v364 >= (unsigned int)&v289[v288 + 8 + v288 / 0xFF] )
  {
    if ( v288 <= 0xE )
    {
      *v348 = 16 * v288;
    }
    else
    {
      v290 = v288 - 15;
      for ( *v348 = -16; v290 > 0xFE; ++v289 )
      {
        v290 -= 255;
        *v289 = -1;
      }
      *v289++ = v290;
    }
    v291 = src;
    v292 = &v289[v288];
    do
    {
      v293 = *v291;
      v289 += 8;
      v294 = v291[1];
      v291 += 2;
      *((_DWORD *)v289 - 2) = v293;
      *((_DWORD *)v289 - 1) = v294;
    }
    while ( v292 > (_WORD *)v289 );
    *v292 = (_WORD)v305 - v338;
    v295 = v292 + 1;
    v296 = v316 - 4;
    if ( !a7 || v364 >= (unsigned int)&v295[v296 / 0xFF + 6] )
    {
      if ( v296 <= 0xE )
      {
        v301 = v348;
        v348 = v292 + 1;
        *v301 += v296;
      }
      else
      {
        v297 = v316 - 19;
        *v348 += 15;
        if ( (unsigned int)(v316 - 19) >= 0x1FE )
        {
          v298 = v292 + 2;
          do
          {
            v297 -= 510;
            *(v298 - 2) = -1;
            *(v298 - 1) = -1;
            v295 = v298;
            v298 += 2;
          }
          while ( v297 >= 0x1FE );
        }
        if ( v297 > 0xFE )
        {
          LOBYTE(v297) = v297 + 1;
          *v295++ = -1;
        }
        *v295 = v297;
        v348 = v295 + 1;
      }
      v316 = v83;
      src = v345;
      v369 = v333;
      v338 = (unsigned int)v333;
      v367 = v326;
      v305 = (unsigned int *)v326;
      v333 = v352;
      v326 = (unsigned int)v323;
      goto LABEL_112;
    }
  }
LABEL_507:
  if ( a7 == 2 )
  {
    v270 = (char *)v305 - (char *)src;
    v271 = (char *)v305 - (char *)src + 1 + ((char *)v305 - (char *)src + 240) / 0xFFu;
    if ( v364 - 3 >= (unsigned int)&v348[v271] )
    {
      v272 = 255 * (v364 - 3 - (_DWORD)&v348[v271]) + 18;
      if ( v272 >= v316 )
        v272 = v316;
      if ( (int)(v364 - (_DWORD)v348 + 2 - v271 + v272) > 11 )
      {
        v273 = v348 + 1;
        if ( v270 <= 0xE )
        {
          *v348 = 16 * v270;
        }
        else
        {
          v274 = v270 - 15;
          for ( *v348 = -16; v274 > 0xFE; ++v273 )
          {
            v274 -= 255;
            *v273 = -1;
          }
          *v273++ = v274;
        }
        v275 = src;
        v276 = &v273[v270];
        do
        {
          v277 = *v275;
          v273 += 8;
          v278 = v275[1];
          v275 += 2;
          *((_DWORD *)v273 - 2) = v277;
          *((_DWORD *)v273 - 1) = v278;
        }
        while ( v276 > (_WORD *)v273 );
        *v276 = (_WORD)v305 - v338;
        v279 = v276 + 1;
        if ( v272 - 4 <= 0xE )
        {
          v302 = v348;
          v348 = v276 + 1;
          *v302 += v272 - 4;
        }
        else
        {
          v280 = v272 - 19;
          *v348 += 15;
          if ( v272 - 19 >= 0x1FE )
          {
            v281 = v276 + 2;
            do
            {
              v280 -= 510;
              *(v281 - 2) = -1;
              *(v281 - 1) = -1;
              v279 = v281;
              v281 += 2;
            }
            while ( v280 >= 0x1FE );
          }
          if ( v280 > 0xFE )
          {
            LOBYTE(v280) = v280 + 1;
            *v279++ = -1;
          }
          *v279 = v280;
          v348 = v279 + 1;
        }
        src = (unsigned int *)((char *)v305 + v272);
      }
    }
    v11 = (char *)v370 - (char *)src;
    v12 = (char *)v370 - (char *)src + 1 + ((char *)v370 - (char *)src + 240) / 0xFFu;
    goto LABEL_546;
  }
LABEL_508:
  result = 0;
LABEL_20:
  *((_BYTE *)v371 + 27) = 1;
  return result;
}
