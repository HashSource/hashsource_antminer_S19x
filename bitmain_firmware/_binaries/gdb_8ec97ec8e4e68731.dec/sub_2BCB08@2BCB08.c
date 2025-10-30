int __fastcall sub_2BCB08(
        char *a1,
        int a2,
        int a3,
        int *a4,
        int a5,
        unsigned int *a6,
        int a7,
        int a8,
        char **a9,
        char *s,
        unsigned __int8 a11,
        int a12,
        int a13,
        _DWORD *a14,
        char **a15)
{
  int v15; // r11
  int v16; // r4
  char *v17; // r8
  int v19; // r9
  int v20; // r3
  int v21; // r6
  int v22; // r7
  int v23; // r1
  unsigned int v24; // r0
  unsigned int v25; // r9
  _DWORD *v26; // r3
  int v27; // r2
  int v28; // r3
  int v29; // r0
  int v30; // r3
  int v31; // r3
  bool v32; // zf
  int v33; // r3
  int v34; // r7
  int v35; // r10
  int v36; // r3
  int v37; // r3
  _DWORD *v38; // r3
  _DWORD *v40; // r7
  unsigned int v41; // r3
  int v42; // r0
  int v43; // r2
  int v44; // r3
  int *v45; // r3
  int (__fastcall *v46)(int); // r6
  __int16 v47; // r0
  int v48; // r3
  bool v49; // zf
  int v50; // r2
  int v51; // r0
  unsigned int v52; // r3
  int v53; // r6
  unsigned int v54; // r10
  signed int v55; // r6
  char *v56; // r10
  unsigned int v57; // r7
  unsigned int v58; // r1
  int v59; // r3
  int v60; // r2
  unsigned int v61; // r2
  int v62; // r3
  int v63; // r1
  int v64; // r2
  int v65; // r3
  int v66; // r3
  void (__fastcall *v67)(unsigned int, int); // r2
  unsigned int v68; // r0
  int v69; // r1
  int v70; // r3
  int v71; // r0
  int v72; // r3
  unsigned int v73; // r0
  int v74; // r3
  int v75; // r6
  unsigned int v76; // lr
  int v77; // r12
  unsigned int v78; // r0
  int v79; // r2
  int v80; // r3
  unsigned int v81; // r6
  unsigned int v82; // r0
  int v83; // r7
  unsigned int v84; // lr
  int v85; // r2
  int v86; // r3
  unsigned int v87; // r3
  int v88; // r2
  int v89; // r1
  unsigned int v90; // r12
  int v91; // r1
  int v92; // r3
  bool v93; // zf
  int *v94; // r2
  unsigned int v95; // r3
  unsigned int v96; // r6
  int v97; // r0
  char **v98; // r2
  int v99; // r6
  int v100; // r7
  int v101; // r0
  unsigned int v102; // r3
  unsigned int v103; // r4
  int v104; // r7
  unsigned int v105; // r0
  int v106; // r2
  int v107; // r3
  int v108; // r2
  int v109; // r1
  unsigned int v110; // r4
  int v111; // r6
  int v112; // r7
  int v113; // r6
  int (__fastcall *v114)(int); // r3
  int v115; // r2
  int v116; // r0
  int v117; // r2
  int v118; // r3
  unsigned int v119; // r1
  bool v120; // zf
  int v121; // r1
  int v122; // r4
  int v123; // r2
  int v124; // r0
  _BOOL4 v125; // r2
  _BOOL4 v126; // r3
  int v127; // r6
  _DWORD *v128; // r3
  int v129; // r6
  unsigned int v130; // lr
  int v131; // r12
  int *v132; // r2
  __int16 v133; // r0
  int v134; // r3
  bool v135; // zf
  int v136; // lr
  int v137; // r0
  int (__fastcall *v138)(int); // r3
  int v139; // r0
  int v140; // r3
  int v141; // r3
  bool v142; // zf
  int v143; // r1
  unsigned int v144; // r3
  _BOOL4 v145; // r3
  int v146; // r0
  unsigned int v147; // r3
  signed int v148; // r1
  int v149; // r2
  int v150; // r2
  int v151; // r6
  int v152; // r2
  bool v153; // cc
  int v154; // r6
  unsigned int v155; // r4
  _BOOL4 v156; // r3
  _BOOL4 v157; // r3
  __int16 v158; // r0
  char v159; // cc
  bool v160; // r6
  bool v161; // zf
  unsigned int v162; // r3
  char *v163; // r6
  int v164; // r0
  int v165; // r3
  int v166; // r7
  int v167; // r3
  bool v168; // zf
  int v169; // r3
  unsigned int v170; // r6
  int v171; // r4
  unsigned int v172; // r3
  unsigned int v173; // r4
  bool v174; // cc
  int v175; // r3
  _BOOL4 v176; // r3
  int v177; // r6
  int v178; // r12
  unsigned int v179; // r0
  int v180; // r2
  int v181; // r3
  _BOOL4 v182; // r2
  int v183; // r9
  __int16 v184; // r8
  unsigned int v185; // r0
  __int16 v186; // r6
  int v187; // r3
  int v188; // r3
  int v189; // r0
  int v190; // r12
  int v191; // r6
  unsigned int v192; // r8
  _BOOL4 v193; // r4
  int v194; // r7
  unsigned int v195; // r0
  unsigned int v196; // r3
  bool v197; // zf
  bool v198; // zf
  unsigned int v199; // r0
  unsigned int v200; // r3
  bool v201; // zf
  bool v202; // zf
  int v203; // r6
  unsigned int v204; // r0
  int v205; // r1
  int v206; // r4
  int v207; // r7
  int v208; // r3
  int v209; // r4
  int v210; // r7
  int v211; // r3
  int v212; // r1
  int v213; // r9
  int v214; // r3
  int v215; // r4
  unsigned int v216; // r2
  int v217; // r1
  int v218; // lr
  bool v219; // zf
  int v220; // r2
  int v221; // r4
  int v222; // r0
  bool v223; // cc
  unsigned int v224; // r3
  int v225; // r0
  unsigned int v226; // r3
  unsigned int v227; // r2
  int v228; // r2
  int v229; // r2
  int v230; // r6
  int v231; // r2
  unsigned int v232; // r3
  int v233; // r3
  unsigned int v234; // r6
  int v235; // r1
  bool v236; // cc
  int v237; // r3
  int v238; // r4
  int v239; // r2
  int v240; // r7
  int v241; // r2
  int v242; // r12
  int v243; // r1
  unsigned int v244; // r3
  int v245; // r2
  char *v246; // r0
  int v247; // r2
  _BOOL4 v248; // r2
  _BOOL4 v249; // r3
  int v250; // r0
  unsigned int v251; // r0
  int v252; // r4
  _DWORD *v253; // r8
  const char *v254; // r0
  int v255; // r1
  int v256; // r0
  unsigned int v257; // r6
  int v258; // r3
  int v259; // r0
  int v260; // r0
  int v261; // r7
  int v262; // r2
  int v263; // r0
  int v264; // lr
  int v265; // r12
  _DWORD *v266; // r3
  int v267; // r0
  int v268; // r2
  int v269; // lr
  int v270; // r1
  int v271; // r0
  int v272; // r3
  int v273; // r1
  int v274; // r2
  unsigned int v275; // r2
  void (__fastcall *v276)(int, unsigned int *, int); // r3
  void (__fastcall *v277)(int, char *); // r3
  int v278; // r3
  bool v279; // zf
  int v280; // r0
  signed int v281; // r4
  int v282; // r6
  unsigned int v283; // r1
  int v284; // r0
  int v285; // r4
  int v286; // r0
  const char **v287; // r9
  _DWORD *v288; // r11
  int v289; // r7
  unsigned int v290; // r7
  const char *v291; // r10
  int v292; // r3
  unsigned int v293; // r3
  int v294; // r0
  int v295; // r1
  int v296; // r3
  int *v297; // r2
  unsigned int v298; // r12
  int v299; // r3
  char *v300; // r0
  bool v301; // cc
  bool v302; // zf
  char *v303; // r2
  _BOOL4 v304; // r3
  bool v305; // zf
  _BOOL4 v306; // r3
  char *v307; // r0
  unsigned int v308; // r2
  unsigned int v309; // r0
  unsigned int v310; // r3
  void (__fastcall *v311)(int, int); // r3
  int v312; // r12
  int v313; // r3
  int v314; // r2
  _DWORD *v315; // r1
  _BOOL4 v316; // r2
  int v317; // r3
  unsigned int v318; // r4
  int v319; // r3
  bool v320; // zf
  unsigned int v321; // r10
  int v322; // r0
  int v323; // r9
  _DWORD *v324; // r7
  unsigned int v325; // r2
  unsigned int v326; // r6
  const char **v327; // r4
  char *v328; // r1
  int v329; // r3
  const char *v330; // r3
  __int64 v331; // r2
  const char *v332; // r2
  const char *v333; // r1
  int v334; // r4
  const char *v335; // r6
  int v336; // r7
  unsigned int v337; // r9
  int v338; // r0
  int v339; // r1
  unsigned int v340; // r4
  int v341; // r1
  int v342; // r2
  int v343; // r2
  int v345; // r6
  char **v346; // r3
  char *v347; // r3
  int v348; // r2
  int v349; // r3
  int v350; // r6
  int v351; // r3
  unsigned int v352; // r6
  int v353; // r3
  int v354; // r4
  unsigned int v355; // r6
  const char **v356; // r4
  int v357; // r0
  int v358; // r3
  int v359; // r5
  int v360; // r0
  int v361; // r0
  int v362; // r2
  int v363; // r3
  char *v364; // r0
  _DWORD *v365; // r1
  _DWORD *v366; // r1
  int v367; // [sp+4h] [bp-78h]
  int v368; // [sp+8h] [bp-74h]
  int v369; // [sp+14h] [bp-68h]
  char *v370; // [sp+18h] [bp-64h]
  int v371; // [sp+24h] [bp-58h]
  int *v372; // [sp+28h] [bp-54h]
  int v373; // [sp+2Ch] [bp-50h]
  unsigned int v374; // [sp+30h] [bp-4Ch]
  int v375; // [sp+34h] [bp-48h]
  int v376; // [sp+38h] [bp-44h]
  int v377; // [sp+3Ch] [bp-40h]
  unsigned int v378; // [sp+40h] [bp-3Ch]
  int v379; // [sp+44h] [bp-38h]
  unsigned int v380; // [sp+48h] [bp-34h]
  int v381; // [sp+4Ch] [bp-30h]
  int v382; // [sp+50h] [bp-2Ch]
  _DWORD *v383; // [sp+54h] [bp-28h]
  int v384; // [sp+58h] [bp-24h]
  unsigned int v385; // [sp+5Ch] [bp-20h]
  int v386; // [sp+60h] [bp-1Ch]
  int v387; // [sp+64h] [bp-18h]
  unsigned int v388; // [sp+68h] [bp-14h] BYREF
  unsigned int v389; // [sp+6Ch] [bp-10h]
  int v390; // [sp+70h] [bp-Ch]
  int v391; // [sp+74h] [bp-8h]
  _DWORD var4[9]; // [sp+78h] [bp-4h] BYREF

  v372 = a4;
  v373 = a3;
  v15 = a13;
  v16 = *(_DWORD *)(a8 + 28);
  v32 = *(_DWORD *)(v16 + 44) == 4;
  v371 = a11;
  if ( !v32 )
    return 6;
  v17 = a1;
  v19 = *(_DWORD *)a1;
  v20 = *(_DWORD *)(*(_DWORD *)(a2 + 4) + 4);
  v374 = *a6;
  if ( v20 == 5 && (v21 = *(_DWORD *)(a2 + 160)) != 0 && (*(_BYTE *)(v21 + 2340) & 0x3F) == 4 )
  {
    v22 = v19;
  }
  else
  {
    sub_2A6BBC("elf32-arm.c", 9909);
    v22 = *(_DWORD *)v17;
    v21 = *(_DWORD *)(a2 + 160);
  }
  if ( v19 == 38 )
  {
    if ( *(_DWORD *)(v16 + 368) )
      v23 = 3;
    else
      v23 = 2;
  }
  else if ( v19 == 41 )
  {
    v23 = *(_DWORD *)(v16 + 372);
  }
  else
  {
    v23 = v19;
  }
  v24 = sub_2B5768((_BYTE *)a8, v23, v15);
  v25 = v24;
  if ( v24 != v22 )
  {
    if ( v24 > 0x87 )
      v17 = sub_2B5690(v24);
    else
      v17 = (char *)&dword_41530C[13 * v24];
  }
  v26 = *(_DWORD **)(v16 + 48);
  v378 = *(_DWORD *)(v16 + 216);
  if ( v26 )
    v26 = *(_DWORD **)(v16 + 224);
  v382 = *(_DWORD *)(v21 + 540);
  v27 = *(_DWORD *)(v21 + 2356);
  v383 = v26;
  v28 = *(_DWORD *)(v16 + 432);
  v384 = v27;
  v375 = a5 + v374;
  v385 = a6[1];
  v380 = v385 >> 8;
  if ( v28 )
  {
    v29 = (*(int (**)(void))(*(_DWORD *)(a2 + 4) + 40))();
    v30 = *((_DWORD *)v17 + 10);
    v376 = v29 & v30;
    if ( (v29 & v30 & ((unsigned int)(v30 + 1) >> 1)) != 0 )
      v31 = ~v30 | v29;
    else
      v31 = v376;
    v377 = v31;
  }
  else
  {
    v376 = a6[2];
    v377 = v376;
  }
  if ( sub_2B640C((_DWORD *)(v16 + 1244)) )
  {
    v32 = v25 == 30;
    if ( v25 != 30 )
      v32 = v25 == 10;
    v33 = a12;
    if ( v32 && !a12 )
    {
      a12 = 1;
      goto LABEL_48;
    }
  }
  else
  {
    v33 = a12;
  }
  if ( v33 != 1 )
  {
    v34 = *(_DWORD *)(v16 + 228);
    v379 = a7;
    if ( v34 )
      goto LABEL_28;
    goto LABEL_49;
  }
LABEL_48:
  v34 = *(_DWORD *)(v16 + 228);
  v379 = a7 | 1;
  if ( v34 )
    goto LABEL_28;
LABEL_49:
  if ( !*(_DWORD *)(v16 + 256) )
  {
    v35 = -1;
    v386 = -1;
    v381 = v371;
    v36 = v34;
    goto LABEL_37;
  }
LABEL_28:
  if ( v15 )
  {
    v35 = *(_DWORD *)(v15 + 40);
    if ( v35 == -1 )
    {
      v36 = 0;
      v34 = 0;
      v386 = -1;
      v381 = v371;
      goto LABEL_52;
    }
    v36 = *(_BYTE *)(v15 + 93) & 1;
    v386 = *(_DWORD *)(v15 + 88);
    if ( !v36 )
    {
      v381 = v371;
      goto LABEL_52;
    }
    v387 = v15 + 40;
    v381 = v15 + 76;
  }
  else
  {
    v44 = *(_DWORD *)(*(_DWORD *)(a2 + 160) + 2360);
    if ( !v44 || (v45 = *(int **)(v44 + 4 * v380)) == 0 )
    {
      v35 = -1;
      v386 = -1;
      v34 = 0;
      v387 = 0;
      v381 = v371;
      v36 = 0;
      goto LABEL_55;
    }
    v35 = *v45;
    v387 = (int)v45;
    v381 = (int)(v45 + 1);
    if ( v35 == -1 )
    {
      v34 = 0;
      v386 = -1;
      v387 = 0;
      v381 = v371;
      v36 = 0;
      goto LABEL_55;
    }
    v386 = *(_DWORD *)(v387 + 16);
  }
  v34 = *(_DWORD *)(v16 + 256);
  if ( (v35 & 1) != 0 )
  {
    --v35;
  }
  else
  {
    if ( !sub_2B73F8(v373, a8, (_DWORD *)v387, (_DWORD *)v381, -1, v379) )
      return 6;
    *(_DWORD *)v387 |= 1u;
  }
  v37 = *(_DWORD *)(v34 + 60);
  a12 = 0;
  a7 = *(_DWORD *)(v37 + 28) + *(_DWORD *)(v34 + 56) + v35;
  if ( *(_DWORD *)(v381 + 8) )
  {
    v371 = 2;
    v381 = 2;
    v36 = 1;
    v379 = a7;
  }
  else
  {
    v38 = (_DWORD *)v371;
    v371 = 2;
    v381 = (int)v38;
    v36 = 1;
  }
LABEL_37:
  if ( v15 )
  {
LABEL_52:
    if ( *(_BYTE *)(v15 + 12) == 2 )
      v387 = (*(_BYTE *)(v15 + 49) & 3) != 0 || *(_DWORD *)(a8 + 96) == 0;
    else
      v387 = 0;
    goto LABEL_55;
  }
  v387 = 0;
LABEL_55:
  switch ( v25 )
  {
    case 0u:
      goto LABEL_94;
    case 1u:
    case 2u:
    case 3u:
    case 0xFu:
    case 0x1Bu:
    case 0x1Cu:
    case 0x1Du:
    case 0x2Au:
    case 0x37u:
    case 0x38u:
      v160 = v25 != 55;
      v182 = v25 - 2 > 1 && v25 != 55;
      if ( !v182 )
        goto LABEL_298;
      if ( v25 == 56 )
      {
        v160 = v182;
      }
      else
      {
LABEL_293:
        v159 = (v35 != -1) & __CFADD__(v35, 1);
        if ( v35 != -1 )
          v159 = v25 - 27 > 2;
        if ( v159 )
        {
          if ( !v36 && sub_2E2EE8(v15, a8, 1) )
            sub_2A6BBC("elf32-arm.c", 10063);
          v297 = v372;
          v298 = *a6;
          v299 = v35 + *(_DWORD *)(v34 + 56) + *(_DWORD *)(*(_DWORD *)(v34 + 60) + 28);
          v368 = a6[2];
          *a14 = 0;
          return sub_301504(v17, a2, v297, a5, v298, v299, v368);
        }
        v160 = 1;
      }
LABEL_298:
      if ( (*(_BYTE *)a8 & 1) == 0 && !*(_DWORD *)(v16 + 52)
        || (v372[5] & 1) == 0
        || *(_DWORD *)(v16 + 420) && !strcmp(*(const char **)v372[15], ".tls_vars") )
      {
        goto LABEL_481;
      }
      v161 = v25 == 3;
      if ( v25 != 3 )
        v161 = v25 == 56;
      if ( v161 && sub_2E2EE8(v15, a8, 1) )
        goto LABEL_481;
      if ( *(_DWORD *)(v16 + 1280) == a2 && strstr((const char *)*v372, ".__stub") )
        goto LABEL_481;
      if ( v15 )
      {
        v162 = (*(_BYTE *)(v15 + 49) & 3) != 0 ? 0 : v387 ^ 1;
        if ( !v162 && *(_BYTE *)(v15 + 12) == 2 )
          goto LABEL_481;
      }
      if ( v25 != 1 )
      {
        v301 = v25 > 0x2A;
        if ( v25 != 42 )
          v301 = v25 - 27 > 2;
        if ( !v301 )
        {
LABEL_481:
          switch ( v25 )
          {
            case 1u:
            case 0xFu:
            case 0x1Bu:
            case 0x1Cu:
            case 0x1Du:
              if ( v25 == 15 )
              {
                if ( a12 != 1 )
                {
                  if ( v15 )
                    v229 = *(_DWORD *)(v15 + 4);
                  else
                    v229 = 32540;
                  if ( !v15 )
                    HIWORD(v229) = 65;
                  sub_2A6A5C("%B: Warning: Arm BLX instruction targets Arm function '%s'.", a2, v229);
                }
                break;
              }
              if ( v25 == 1 )
                goto LABEL_314;
              if ( v25 - 27 <= 2 )
              {
                v361 = sub_2BC454(a8, v372, a6, a6 + 1, v371, &a12, v15, a7, (int)a9, a2, (int)s);
                if ( v361 )
                {
                  v364 = sub_2B660C(v372 + 1, v372[5], (int)a9, v15, (int)a6, (_DWORD *)v16, v361);
                  v163 = v364;
                  if ( v364 )
                    a7 = *((_DWORD *)v364 + 4)
                       + *(_DWORD *)(*((_DWORD *)v364 + 3) + 56)
                       + *(_DWORD *)(*(_DWORD *)(*((_DWORD *)v364 + 3) + 60) + 28);
                  if ( v35 != -1 )
                    *a14 = 0;
                }
                else
                {
                  v163 = 0;
                  if ( v35 != -1 )
                  {
                    v362 = *(_DWORD *)(*(_DWORD *)(v34 + 60) + 28);
                    v363 = v35 + *(_DWORD *)(v34 + 56);
                    a12 = 0;
                    *a14 = 0;
                    a7 = v363 + v362;
                  }
                }
LABEL_316:
                v164 = *(_DWORD *)(v16 + 432);
                if ( v164 )
                  v34 = *((_DWORD *)v17 + 2);
                v165 = a7 - (*(_DWORD *)(v372[15] + 28) + v372[14] + *a6);
                if ( v164 )
                  v166 = v165 + (v377 << v34);
                else
                  v166 = v377 + v165;
                if ( v15 )
                {
                  v167 = *(unsigned __int8 *)(v15 + 12);
                  v168 = v167 == 2;
                  if ( v167 == 2 )
                    v168 = v35 == -1;
                  v169 = v168;
                }
                else
                {
                  v316 = a9 == &off_4708A8;
                  if ( !v380 )
                    v316 = 0;
                  v169 = v316;
                }
                if ( v169 )
                {
                  v170 = (*(int (__fastcall **)(int))(*(_DWORD *)(a2 + 4) + 40))(v375) & 0xF0000000;
                  v171 = sub_2EF5B0(*(_DWORD *)(v16 + 1244), 0, 6);
                  if ( v171 > 17 )
                    sub_2A6BBC("elf32-arm.c", 3822);
                  v172 = v171 - 8;
                  v173 = v171 - 14;
                  v174 = v173 > 1;
                  if ( v173 > 1 )
                    v174 = v172 > 2;
                  if ( v174 )
                    v175 = v170 | 0x1A00000;
                  else
                    v175 = v170 | 0x3200000;
                  if ( !v174 )
                    v175 |= 0xF000u;
                  a7 = v175;
                  goto LABEL_338;
                }
                v318 = *((_DWORD *)v17 + 11);
                v319 = v166 >> *((_DWORD *)v17 + 1);
                if ( v319 <= (int)(v318 >> 1) && (signed int)-((v318 + 1) >> 1) <= v319 )
                {
                  a7 = (*(int (__fastcall **)(int))(*(_DWORD *)(a2 + 4) + 40))(v375) & ~*((_DWORD *)v17 + 11)
                     | v318 & v319;
                  if ( v25 == 28 )
                  {
                    if ( a12 == 1 )
                    {
                      if ( (v166 & 2) != 0 )
                        v353 = a7 | 0x1000000;
                      else
                        v353 = a7 & 0xFEFFFFFF;
                      a7 = v353;
                      if ( !v163 )
                      {
                        a7 = v353 | 0x10000000;
                        goto LABEL_338;
                      }
                    }
                    else
                    {
                      v320 = a12 == 3;
                      if ( a12 == 3 )
                        v320 = v163 == 0;
                      if ( v320 )
                        goto LABEL_338;
                    }
                    a7 = a7 & 0xEEFFFFFF | 0x1000000;
                  }
LABEL_338:
                  (*(void (__fastcall **)(int, int))(*(_DWORD *)(a2 + 4) + 48))(a7, v375);
                  return 2;
                }
                return 3;
              }
              break;
            case 2u:
              v227 = a7 + v376;
              a7 += v376;
              if ( a12 == 1 )
                goto LABEL_490;
              goto LABEL_338;
            case 3u:
              v228 = v376 + a7;
              if ( a12 == 1 )
                v228 |= 1u;
              a7 = v228 - (*(_DWORD *)(v372[15] + 28) + v372[14] + *a6);
              goto LABEL_338;
            case 6u:
              goto LABEL_482;
            case 0x2Au:
              v226 = v377 - (*(_DWORD *)(v372[15] + 28) + v372[14] + *a6) + a7;
              if ( (!v15 || *(_BYTE *)(v15 + 12) != 2) && ((v226 ^ (v226 >> 1)) & 0x40000000) != 0 )
                return 3;
              v227 = (*(int (__fastcall **)(int))(*(_DWORD *)(a2 + 4) + 40))(v375) & 0x80000000 | v226 & 0x7FFFFFFF;
              a7 = v227;
              if ( a12 == 1 )
LABEL_490:
                a7 = v227 | 1;
              goto LABEL_338;
            case 0x37u:
              a7 += v376;
              goto LABEL_338;
            case 0x38u:
              a7 += v376 - (*(_DWORD *)(v372[15] + 28) + v372[14] + *a6);
              goto LABEL_338;
            default:
              goto LABEL_338;
          }
LABEL_315:
          v163 = 0;
          goto LABEL_316;
        }
        v302 = v25 == 56;
        if ( v25 != 56 )
          v302 = v25 == 3;
        if ( v302 && (*(_BYTE *)(v15 + 51) & 2) == 0 )
        {
          v303 = "PIE executable";
          if ( (*(_BYTE *)a8 & 3u) > 1 )
            v303 = "shared object";
          sub_2A6A5C(
            "%B: relocation %s against external or undefined symbol `%s' can not be used when making a %s; recompile with -fPIC",
            a2,
            dword_41530C[13 * v25 + 8],
            *(_DWORD *)(v15 + 4),
            v303);
          return 6;
        }
        *a14 = 0;
        v40 = *(_DWORD **)(v16 + 48);
        if ( !v40 || (v40 = (_DWORD *)sub_2EEDB8(a2, v372, *(_DWORD *)(v16 + 432) == 0)) != 0 )
        {
          v41 = *a6;
          v390 = v376;
          v42 = sub_2DB2EC(v373, a8, v372, v41);
          if ( v42 == -1 )
          {
            v389 = 0;
            v366 = *(_DWORD **)(a8 + 28);
            v388 = 0;
            v390 = 0;
            sub_2B67D8(v373, v366, v40, (int)&v388);
            return 2;
          }
          if ( v42 == -2 )
          {
            v389 = 0;
            v365 = *(_DWORD **)(a8 + 28);
            v388 = 0;
            v390 = 0;
            sub_2B67D8(v373, v365, v40, (int)&v388);
          }
          else
          {
            v388 = *(_DWORD *)(v372[15] + 28) + v372[14] + v42;
            if ( v15 )
            {
              v43 = *(_DWORD *)(v15 + 32);
              if ( v43 != -1
                && ((*(_BYTE *)a8 & 1) == 0
                 || (*(_BYTE *)a8 & 3) != 1
                 && ((*(_BYTE *)(v15 + 53) & 4) != 0
                  || (*(_BYTE *)a8 & 4) == 0
                  && (*(_BYTE *)(v15 + 53) & 0x10) == 0
                  && ((*(_BYTE *)(a8 + 5) & 0x10) == 0 || (*(_BYTE *)(v15 + 52) & 0x10) != 0))
                 || (*(_BYTE *)(v15 + 51) & 2) == 0) )
              {
                v389 = (unsigned __int8)v25 + (v43 << 8);
LABEL_71:
                sub_2B67D8(v373, *(_DWORD **)(a8 + 28), v40, (int)&v388);
                return 2;
              }
            }
            if ( v25 != 2 && v160 )
              sub_2A6BBC("elf32-arm.c", 10154);
            v345 = *(_DWORD *)(v16 + 424);
            if ( v345 )
            {
              v346 = a9;
              if ( !a9 )
                v346 = (char **)v372;
              v347 = v346[15];
              v345 = *(_DWORD *)(*((_DWORD *)v347 + 35) + 96);
              if ( !v345 )
              {
                v348 = *(_DWORD *)(a8 + 28);
                if ( (*((_DWORD *)v347 + 5) & 8) != 0 || (v349 = *(_DWORD *)(v348 + 112)) == 0 )
                  v349 = *(_DWORD *)(v348 + 108);
                v345 = *(_DWORD *)(*(_DWORD *)(v349 + 140) + 96);
                if ( !v345 )
                  sub_2A6BBC("elf32-arm.c", 10187);
              }
            }
            v350 = v345 << 8;
            v351 = *(_DWORD *)(v16 + 432);
            if ( v381 == 10 )
              v352 = v350 + 160;
            else
              v352 = v350 + 23;
            v389 = v352;
            if ( !v351 )
            {
              v390 += v379;
              goto LABEL_71;
            }
            sub_2B67D8(v373, *(_DWORD **)(a8 + 28), v40, (int)&v388);
          }
          return sub_301504(v17, a2, v372, a5, *a6, v379, 0);
        }
        return 6;
      }
LABEL_314:
      if ( a12 != 1 )
        goto LABEL_315;
      v354 = *(_DWORD *)(a8 + 28);
      if ( *(_DWORD *)(v354 + 44) != 4 )
      {
        LOWORD(v254) = 28332;
        v255 = 8980;
LABEL_590:
        HIWORD(v254) = (unsigned int)"elf32-arm.c" >> 16;
        sub_2A6BBC(v254, v255);
        __und(0);
      }
      v355 = *a6;
      if ( !*(_DWORD *)(v354 + 360) )
        sub_2A6BBC("elf32-arm.c", 8981);
      v356 = sub_2AD864(*(_DWORD *)(v354 + 360), ".glue_7");
      if ( !v356 )
        sub_2A6BBC("elf32-arm.c", 8985);
      if ( !v356[27] )
        sub_2A6BBC("elf32-arm.c", 8986);
      if ( !v356[15] )
        sub_2A6BBC("elf32-arm.c", 8987);
      v357 = sub_2B7F60(a8, s, a2, v373, (int)a9, a7, v356, a15);
      if ( !v357 )
        return 9;
      v358 = *(_DWORD *)(a2 + 4);
      v359 = *(_DWORD *)(v357 + 24);
      v360 = (*(int (__fastcall **)(int))(v358 + 40))(v375);
      (*(void (__fastcall **)(unsigned int, int))(*(_DWORD *)(v373 + 4) + 48))(
        v360 & 0xFF000000
      | ((unsigned int)&v356[14][-8
                               - v372[14]
                               - *(_DWORD *)(v372[15] + 28)
                               - v355
                               - v377
                               + *((_DWORD *)v356[15] + 7)
                               + v359] >> 2)
      & 0xFFFFFF,
        v375 - v372[7]);
      return 2;
    case 4u:
    case 0x3Eu:
    case 0x3Fu:
    case 0x4Bu:
    case 0x4Cu:
    case 0x4Du:
      v177 = (*(int (__fastcall **)(int))(*(_DWORD *)(a2 + 4) + 40))(v375);
      v178 = v372[14];
      v179 = *a6;
      v180 = *(_DWORD *)(v372[15] + 28);
      if ( a9 )
        v181 = (int)a9[15];
      else
        v181 = 0;
      if ( a9 )
        v181 = *(_DWORD *)(v181 + 28);
      if ( v25 == 63 )
        goto LABEL_559;
      if ( v25 <= 0x3F )
      {
        if ( v25 == 4 )
        {
LABEL_527:
          v235 = -1;
LABEL_528:
          if ( *(_DWORD *)(v16 + 432) )
          {
            if ( (v177 & 0x800000) != 0 )
              v16 = 1;
            else
              v16 = -1;
            v377 = v16 * (v177 & 0xFFF);
          }
          v236 = v25 > 4;
          if ( v25 != 4 )
            v236 = v25 - 62 > 1;
          if ( v236 )
          {
            v180 = a7;
          }
          else
          {
            v181 = a7;
            v16 = v180 + v178 + v179;
          }
          if ( v236 )
          {
            v237 = v180 - v181;
            v180 = v377;
          }
          else
          {
            v16 = v181 - v16;
            v237 = v377;
          }
          if ( v236 )
            v238 = v237 + v180;
          else
            v238 = v16 + v237;
          v210 = abs32(v238);
          sub_2B2780(v210, v235, &v388);
          v222 = v388;
          if ( v388 >= 0x1000 )
          {
LABEL_428:
            sub_2A6A5C(
              "%B(%A+%#Lx): Overflow whilst splitting %#Lx for group relocation %s",
              a2,
              v372,
              *a6,
              v210,
              *((_DWORD *)v17 + 8));
            return 3;
          }
          v224 = v177 & 0xFF7FF000;
          if ( v238 >= 0 )
LABEL_476:
            v224 |= 0x800000u;
LABEL_477:
          (*(void (__fastcall **)(unsigned int, int))(*(_DWORD *)(a2 + 4) + 48))(v222 | v224, v375);
          return 2;
        }
        if ( v25 != 62 )
LABEL_355:
          sub_2A6BF0((int)"elf32-arm.c", 11898, (int)"elf32_arm_final_link_relocate");
      }
      else if ( v25 != 76 )
      {
        if ( v25 == 77 )
        {
LABEL_559:
          v235 = 1;
          goto LABEL_528;
        }
        if ( v25 != 75 )
          goto LABEL_355;
        goto LABEL_527;
      }
      v235 = 0;
      goto LABEL_528;
    case 5u:
      if ( *(_DWORD *)(v16 + 432) )
        v376 = (*(int (__fastcall **)(int))(*(_DWORD *)(a2 + 4) + 52))(v375);
      v176 = v376 + a7 < -32768;
      if ( v376 + a7 >= 0x10000 )
        v176 = 1;
      if ( v176 )
        return 3;
      (*(void (**)(void))(*(_DWORD *)(a2 + 4) + 60))();
      return 2;
    case 6u:
      if ( *(_DWORD *)(v16 + 420) )
        goto LABEL_293;
LABEL_482:
      if ( (unsigned int)(v376 + a7) >= 0x1000 )
        return 3;
      v225 = (*(int (__fastcall **)(int))(*(_DWORD *)(a2 + 4) + 40))(v375);
      (*(void (__fastcall **)(unsigned int, int))(*(_DWORD *)(a2 + 4) + 48))(v225 & 0xFFFFF000 | (v376 + a7), v375);
      return 2;
    case 7u:
      if ( *(_DWORD *)(v16 + 432) )
        v376 = (*((_DWORD *)v17 + 10) & (unsigned int)(*(int (__fastcall **)(int))(*(_DWORD *)(a2 + 4) + 52))(v375)) >> *((_DWORD *)v17 + 1);
      v157 = v376 + a7 < -16;
      if ( v376 + a7 > 31 )
        v157 = 1;
      if ( v157 )
        return 3;
      v158 = (*(int (__fastcall **)(int))(*(_DWORD *)(a2 + 4) + 52))(v375);
      (*(void (__fastcall **)(int, int))(*(_DWORD *)(a2 + 4) + 60))(v158 & 0xF83F | (v376 + a7), v375);
      return 2;
    case 8u:
      if ( *(_DWORD *)(v16 + 432) )
        v376 = *(unsigned __int8 *)(a5 + v374);
      v156 = v376 + a7 < -128;
      if ( v376 + a7 > 255 )
        v156 = 1;
      if ( v156 )
        return 3;
      *(_BYTE *)(a5 + v374) = v376 + a7;
      return 2;
    case 0xAu:
    case 0x10u:
    case 0x1Eu:
      v138 = *(int (__fastcall **)(int))(*(_DWORD *)(a2 + 4) + 52);
      v376 = v375 + 2;
      v139 = v138(v375);
      v140 = *(_DWORD *)(a2 + 4);
      v378 = v139;
      v374 = (*(int (__fastcall **)(int))(v140 + 52))(v375 + 2);
      v380 = sub_2B6484((_DWORD *)(v16 + 1244));
      v379 = sub_2B650C(*(_DWORD *)(v16 + 1244));
      if ( v15 )
      {
        v141 = *(unsigned __int8 *)(v15 + 12);
        v142 = v141 == 2;
        if ( v141 == 2 )
          v142 = v35 == -1;
        if ( v142 )
        {
          v311 = *(void (__fastcall **)(int, int))(*(_DWORD *)(a2 + 4) + 60);
          if ( v380 )
          {
            v311(62383, v375);
            (*(void (__fastcall **)(int, int))(*(_DWORD *)(a2 + 4) + 60))(0x8000, v376);
          }
          else
          {
            v311(57344, v375);
            (*(void (__fastcall **)(int, int))(*(_DWORD *)(a2 + 4) + 60))(48896, v376);
          }
          return 2;
        }
      }
      if ( *(_DWORD *)(v16 + 432) )
      {
        v143 = (v378 >> 10) & 1;
        v144 = (unsigned int)&unk_3FF000 & (v378 << 12)
             | (2 * v374) & 0xFFE
             | ((((v374 >> 13) & 1) == v143) << 23)
             | ((((v374 >> 11) & 1) == v143) << 22);
        if ( !v143 )
          v144 |= 0x1000000u;
        v377 = v144 - 0x1000000;
      }
      if ( v25 == 16 )
      {
        if ( a12 == 1 )
        {
          if ( v15 )
            v247 = *(_DWORD *)(v15 + 4);
          else
            v247 = 32540;
          if ( !v15 )
            HIWORD(v247) = 65;
          sub_2A6A5C("%B: Warning: Thumb BLX instruction targets thumb function '%s'.", a2, v247, 1);
        }
        if ( v35 != -1 )
          goto LABEL_259;
        goto LABEL_264;
      }
      v380 = v25 == 10;
      if ( !a12 )
      {
        if ( v35 == -1 )
        {
          v304 = v25 == 10;
          if ( !*(_DWORD *)(v16 + 388) )
            v304 = 0;
          if ( v304 )
          {
            v374 = v374 & 0xFFFFE7FF | 0x800;
          }
          else
          {
            v305 = v25 == 10;
            if ( v25 != 10 )
              v305 = v25 == 30;
            if ( !v305 )
            {
              v321 = *a6;
              v322 = sub_2B6CB0(*(_DWORD *)(a8 + 28), s, a15);
              v323 = v322;
              if ( !v322 )
                return 9;
              v324 = *(_DWORD **)(a8 + 28);
              if ( v324[11] != 4 )
              {
                sub_2A6BBC("elf32-arm.c", 8787);
                __und(0);
              }
              if ( !v324[90] )
                sub_2A6BBC("elf32-arm.c", 8788);
              v326 = *(_DWORD *)(v323 + 24);
              v327 = sub_2AD864(v324[90], ".glue_7t");
              if ( !v327 )
                sub_2A6BBC("elf32-arm.c", 8795);
              if ( !v327[27] )
                sub_2A6BBC("elf32-arm.c", 8796);
              if ( !v327[15] )
                sub_2A6BBC("elf32-arm.c", 8797);
              if ( (v326 & 1) != 0 )
              {
                if ( a9 )
                {
                  v328 = a9[37];
                  if ( v328 )
                  {
                    v329 = *(_DWORD *)(*((_DWORD *)v328 + 40) + 32);
                    if ( (v329 & 0xFF000000) <= 0x3FFFFFF && (v329 & 4) == 0 && (*((_DWORD *)v328 + 10) & 0x20000) == 0 )
                    {
                      sub_2A6A5C(
                        "%B(%s): warning: interworking not enabled.\n  first occurrence: %B: Thumb call to ARM",
                        v328,
                        s,
                        a2);
                      return 9;
                    }
                  }
                }
                v330 = v327[27];
                *(_DWORD *)(v323 + 24) = v326 - 1;
                sub_2B72C4(v324[91], *(_DWORD *)(v373 + 4), 18296, &v330[v326 - 1]);
                sub_2B72C4(v324[91], *(_DWORD *)(v373 + 4), 18112, &v327[27][v326 + 1]);
                HIDWORD(v331) = &v327[27][v326 + 3];
                --v326;
                LODWORD(v331) = ((a7 - 12 - v326 - (unsigned int)v327[14] - *((_DWORD *)v327[15] + 7)) >> 2) & 0xFFFFFF
                              | 0xEA000000;
                sub_2B73D0(v324[91], *(_DWORD *)(v373 + 4), v331);
              }
              if ( v324[68] < v326 )
                sub_2A6BBC("elf32-arm.c", 8843);
              v332 = v327[15];
              v333 = v327[14];
              v334 = v375 - v372[7];
              v335 = &v333[-8 - v372[14] - *(_DWORD *)(v372[15] + 28) - v321 - v377 + *((_DWORD *)v332 + 7) + v326];
              if ( ((unsigned __int8)v335 & 1) != 0 )
                sub_2A6BBC("elf32-arm.c", 8745);
              v336 = v334 + 2;
              v337 = (*(int (__fastcall **)(int))(*(_DWORD *)(a2 + 4) + 52))(v334) & 0xFFFFF800;
              v338 = (*(int (__fastcall **)(int))(*(_DWORD *)(a2 + 4) + 52))(v334 + 2);
              v339 = v334;
              v340 = (((((unsigned int)v335 & 0x400000) == 0) ^ ((unsigned int)v335 >> 31)) << 11)
                   | (((((unsigned int)v335 & 0x800000) == 0) ^ ((unsigned int)v335 >> 31)) << 13)
                   | ((unsigned int)v335 >> 1) & 0x7FF
                   | v338 & 0xFFFFD000;
              (*(void (__fastcall **)(unsigned int, int))(*(_DWORD *)(a2 + 4) + 60))(
                ((unsigned int)v335 >> 12) & 0x3FF | ((unsigned int)v335 >> 31 << 10) | v337,
                v339);
              (*(void (__fastcall **)(unsigned int, int))(*(_DWORD *)(a2 + 4) + 60))(v340, v336);
              return 2;
            }
            v306 = v25 == 10;
            if ( v25 == 30 )
              v306 = 1;
            if ( !v306 )
              goto LABEL_264;
          }
          v250 = sub_2BC454(a8, v372, a6, a6 + 1, v371, &a12, v15, a7, (int)a9, a2, (int)s);
          if ( !v250 )
            goto LABEL_264;
          goto LABEL_707;
        }
        v145 = v25 == 10;
        if ( v25 == 30 )
          v145 = 1;
        if ( !v145 )
        {
LABEL_259:
          a7 = v35 + *(_DWORD *)(v34 + 56) + *(_DWORD *)(*(_DWORD *)(v34 + 60) + 28);
          goto LABEL_260;
        }
        v250 = sub_2BC454(a8, v372, a6, a6 + 1, v371, &a12, v15, a7, (int)a9, a2, (int)s);
        if ( v250 )
        {
LABEL_707:
          v307 = sub_2B660C(v372 + 1, v372[5], (int)a9, v15, (int)a6, (_DWORD *)v16, v250);
          if ( v307 )
          {
            a7 = *((_DWORD *)v307 + 4)
               + *(_DWORD *)(*((_DWORD *)v307 + 3) + 56)
               + *(_DWORD *)(*(_DWORD *)(*((_DWORD *)v307 + 3) + 60) + 28);
            if ( v35 != -1 )
              *a14 = 0;
            v308 = v380;
            if ( !*(_DWORD *)(v16 + 388) )
              v308 = 0;
            if ( v308 )
            {
              if ( !sub_16664(*((_DWORD *)v307 + 9)) )
              {
LABEL_715:
                v374 = v374 & 0xFFFFE7FF | 0x800;
                goto LABEL_264;
              }
LABEL_714:
              if ( a12 == 1 )
                goto LABEL_264;
              goto LABEL_715;
            }
          }
          else
          {
            v325 = v380;
            if ( !*(_DWORD *)(v16 + 388) )
              v325 = 0;
            if ( v325 )
              goto LABEL_714;
          }
LABEL_264:
          v146 = *((_DWORD *)v17 + 1);
          v147 = v377 - (*(_DWORD *)(v372[15] + 28) + v372[14] + *a6) + a7;
          if ( (v147 & 0x80000000) == 0 )
            v148 = v147 >> v146;
          else
            v148 = ~(0xFFFFFFFF >> v146);
          if ( (v147 & 0x80000000) != 0 )
            v148 |= v147 >> v146;
          v149 = *((_DWORD *)v17 + 3);
          if ( !v379 )
            LOBYTE(v149) = v149 - 2;
          v150 = 1 << (v149 - 1);
          v151 = v150 - 1;
          v152 = -v150;
          v153 = v152 <= v148;
          if ( v152 <= v148 )
            v153 = v148 <= v151;
          v154 = !v153;
          if ( (v374 & 0x5000) == 0x4000 )
            v147 = (v147 + 2) & 0xFFFFFFFC;
          v155 = (v147 >> 1) & 0x7FF
               | v374 & 0xFFFFD000
               | (((v147 >> 23) & 1 ^ (v148 >= 0)) << 13)
               | (((v148 >= 0) ^ (v147 >> 22) & 1) << 11);
          (*(void (__fastcall **)(unsigned int, int))(*(_DWORD *)(a2 + 4) + 60))(
            (v147 >> 12) & 0x3FF | v378 & 0xFFFFF800 | ((unsigned int)v148 >> 31 << 10),
            v375);
          (*(void (__fastcall **)(unsigned int, int))(*(_DWORD *)(a2 + 4) + 60))(v155, v376);
          if ( v154 )
            return 3;
          return 2;
        }
LABEL_579:
        v251 = v380;
        if ( !*(_DWORD *)(v16 + 388) )
          v251 = 0;
        a7 = v35 + *(_DWORD *)(v34 + 56) + *(_DWORD *)(*(_DWORD *)(v34 + 60) + 28);
        if ( v251 && !sub_2B640C((_DWORD *)(v16 + 1244)) )
        {
          a12 = 0;
          v374 = v374 & 0xFFFFE7FF | 0x800;
LABEL_263:
          *a14 = 0;
          goto LABEL_264;
        }
LABEL_260:
        if ( !sub_2B640C((_DWORD *)(v16 + 1244)) )
          a7 -= 4;
        a12 = 1;
        goto LABEL_263;
      }
      if ( a12 != 1 )
        goto LABEL_574;
      v248 = v25 == 10;
      if ( !*(_DWORD *)(v16 + 388) )
        v248 = 0;
      if ( v248 )
      {
        v374 |= 0x1800u;
      }
      else
      {
LABEL_574:
        v249 = v25 == 10;
        if ( v25 == 30 )
          v249 = 1;
        if ( !v249 )
        {
LABEL_578:
          if ( v35 == -1 )
            goto LABEL_264;
          goto LABEL_579;
        }
      }
      v250 = sub_2BC454(a8, v372, a6, a6 + 1, v371, &a12, v15, a7, (int)a9, a2, (int)s);
      if ( v250 )
        goto LABEL_707;
      goto LABEL_578;
    case 0xBu:
      v133 = (*(int (__fastcall **)(int))(*(_DWORD *)(a2 + 4) + 52))(v375);
      v134 = *(_DWORD *)(v16 + 432);
      v135 = v134 == 0;
      if ( v134 )
        LOWORD(v134) = 4 * v133;
      v136 = v372[14];
      v137 = v133 & 0xFF00;
      if ( !v135 )
        v376 = (((_WORD)v134 + 4) & 0x3FC) - 4;
      (*(void (__fastcall **)(int, int))(*(_DWORD *)(a2 + 4) + 60))(
        (unsigned __int8)((a7 - ((*(_DWORD *)(v372[15] + 28) + v136 + *a6) & 0xFFFFFFFC) + v376) >> 2) | v137,
        v375);
      return 2;
    case 0x18u:
      if ( v378 )
      {
        if ( a12 == 1 )
          ++a7;
        return sub_301504(v17, a2, v372, a5, *a6, a7 - *(_DWORD *)(*(_DWORD *)(v378 + 60) + 28), a6[2]);
      }
      else
      {
        sub_2A6BBC("elf32-arm.c", 11012);
        return 6;
      }
    case 0x19u:
      if ( v378 )
      {
        v130 = *a6;
        v368 = a6[2];
        v131 = *(_DWORD *)(v378 + 60);
        v132 = v372;
        *a14 = 0;
        return sub_301504(v17, a2, v132, a5, v130, *(_DWORD *)(v131 + 28), v368);
      }
      else
      {
        sub_2A6BBC("elf32-arm.c", 11034);
        return 6;
      }
    case 0x1Au:
    case 0x60u:
      if ( !v378 )
        return 6;
      v126 = v381 == 10;
      if ( v35 == -1 )
        v126 = 0;
      if ( v126 )
      {
        if ( !v15 || sub_2E2EE8(v15, a8, 0) )
        {
          v127 = *(_DWORD *)(*(_DWORD *)(v16 + 252) + 56);
          v378 = *(_DWORD *)(v16 + 252);
          v128 = (_DWORD *)v386;
          v129 = v386 + v127;
          goto LABEL_229;
        }
        goto LABEL_509;
      }
      if ( v15 )
      {
LABEL_509:
        v230 = *(_DWORD *)(v15 + 36);
        if ( v230 == -1 )
        {
          sub_2A6BBC("elf32-arm.c", 11069);
        }
        else
        {
          v231 = *(_DWORD *)(v15 + 36) & 1;
          if ( (v230 & 1) == 0 )
          {
            if ( *(_DWORD *)(v15 + 32) == -1 || sub_2E2EE8(v15, a8, 0) )
            {
              if ( v381 == 10 )
              {
                v389 = 160;
              }
              else if ( (*(_BYTE *)a8 & 1) == 0 || (*(_BYTE *)(v15 + 49) & 3) != 0 && *(_BYTE *)(v15 + 12) == 2 )
              {
                v389 = 0;
              }
              else
              {
                v389 = 23;
              }
              v390 = v379;
              if ( !v379 )
              {
LABEL_517:
                if ( !v389 )
                {
LABEL_518:
                  *(_DWORD *)(v15 + 36) |= 1u;
                  goto LABEL_519;
                }
LABEL_737:
                v315 = *(_DWORD **)(a8 + 28);
                v388 = *(_DWORD *)(*(_DWORD *)(v378 + 60) + 28) + v230 + *(_DWORD *)(v378 + 56);
                sub_2B67D8(v373, v315, v383, (int)&v388);
                goto LABEL_518;
              }
              if ( v389 && !*(_DWORD *)(v16 + 432) )
                goto LABEL_737;
              (*(void (__fastcall **)(int, int, int))(*(_DWORD *)(v373 + 4) + 48))(
                v379,
                *(_DWORD *)(v378 + 108) + v230,
                v231);
            }
            else
            {
              v232 = *(_DWORD *)(v16 + 48);
              if ( v232 )
              {
                v233 = *(_DWORD *)(v15 + 32) << 8;
                *a14 = 0;
                v232 = v233 + 21;
              }
              v389 = v232;
            }
            v390 = 0;
            goto LABEL_517;
          }
        }
        v230 &= ~1u;
        if ( *(_DWORD *)(v16 + 48) && !sub_2E2EE8(v15, a8, 0) )
          *a14 = 0;
LABEL_519:
        v128 = (_DWORD *)v378;
        v129 = v230 + *(_DWORD *)(v378 + 56);
LABEL_229:
        if ( v25 != 26 )
          v128 = (_DWORD *)v378;
        v94 = v372;
        v90 = *a6;
        v91 = a2;
        if ( v25 != 26 )
          v129 += *(_DWORD *)(v128[15] + 28);
        v95 = a6[2];
        v367 = v129;
        return sub_301504(v17, v91, v94, a5, v90, v367, v95);
      }
      if ( !v382 || (v230 = *(_DWORD *)(v382 + 4 * v380), v230 == -1) )
      {
        sub_2A6BBC("elf32-arm.c", 11137);
        v230 = *(_DWORD *)(v382 + 4 * v380);
      }
      if ( (v230 & 1) != 0 )
      {
        v230 &= ~1u;
        goto LABEL_519;
      }
      if ( *(_DWORD *)(v16 + 432) )
        (*(void (__fastcall **)(int, int))(*(_DWORD *)(v373 + 4) + 48))(v379, *(_DWORD *)(v378 + 108) + v230);
      if ( (*(_BYTE *)a8 & 1) != 0 )
      {
        v317 = *(_DWORD *)(*(_DWORD *)(v378 + 60) + 28) + *(_DWORD *)(v378 + 56);
        v390 = v376 + v379;
        v388 = v317 + v230;
        if ( v381 != 10 )
        {
          v389 = 23;
LABEL_754:
          sub_2B67D8(v373, *(_DWORD **)(a8 + 28), v383, (int)&v388);
          goto LABEL_638;
        }
      }
      else
      {
        if ( v381 != 10 )
        {
LABEL_638:
          *(_DWORD *)(v382 + 4 * v380) |= 1u;
          goto LABEL_519;
        }
        v341 = *(_DWORD *)(v378 + 60);
        v342 = *(_DWORD *)(v378 + 56);
        v390 = v376 + v379;
        v388 = *(_DWORD *)(v341 + 28) + v342 + v230;
      }
      v389 = 160;
      goto LABEL_754;
    case 0x20u:
    case 0x21u:
    case 0x22u:
      (*(void (__fastcall **)(int))(*(_DWORD *)(a2 + 4) + 40))(v375);
      (*(void (__fastcall **)(int, int))(*(_DWORD *)(a2 + 4) + 48))(a7, v375);
      return 2;
    case 0x28u:
      if ( !*(_DWORD *)(v16 + 376) )
        return 2;
      v203 = (*(int (__fastcall **)(int))(*(_DWORD *)(a2 + 4) + 40))(v375);
      if ( (v203 & 0xFFFFFF0) != 0x12FFF10 )
        sub_2A6BBC("elf32-arm.c", 11603);
      if ( *(_DWORD *)(v16 + 376) != 2 || (v252 = v203 & 0xF, v252 == 15) )
      {
        v204 = v203 & 0xF000000F | 0x1A0F000;
      }
      else
      {
        v253 = *(_DWORD **)(a8 + 28);
        if ( v253[11] != 4 )
        {
          LOWORD(v254) = (unsigned __int16)"elf32-arm.c";
          v255 = 9069;
          goto LABEL_590;
        }
        v286 = v253[90];
        if ( !v286 )
        {
          sub_2A6BBC("elf32-arm.c", 9070);
          v286 = v253[90];
        }
        v287 = sub_2AD864(v286, ".v4_bx");
        if ( !v287 )
          sub_2A6BBC("elf32-arm.c", 9074);
        if ( !v287[27] )
          sub_2A6BBC("elf32-arm.c", 9075);
        if ( !v287[15] )
          sub_2A6BBC("elf32-arm.c", 9076);
        v288 = &v253[v252];
        v289 = v288[71];
        if ( (v289 & 2) == 0 )
        {
          sub_2A6BBC("elf32-arm.c", 9078);
          v289 = v288[71];
        }
        v32 = (v289 & 1) == 0;
        v290 = v289 & 0xFFFFFFFC;
        if ( v32 )
        {
          v291 = &v287[27][v290];
          (*(void (__fastcall **)(int, const char *))(*(_DWORD *)(v253[311] + 4) + 48))((v252 << 16) - 485490687, v291);
          (*(void (__fastcall **)(int, const char *))(*(_DWORD *)(v253[311] + 4) + 48))(v252 + 27324416, v291 + 4);
          (*(void (__fastcall **)(int, const char *))(*(_DWORD *)(v253[311] + 4) + 48))(v252 - 516948208, v291 + 8);
          v288[71] |= 1u;
        }
        v204 = ((unsigned int)&v287[14][-8
                                      - v372[14]
                                      - *(_DWORD *)(v372[15] + 28)
                                      - *a6
                                      + *((_DWORD *)v287[15] + 7)
                                      + v290] >> 2)
             & 0xFFFFFF
             | v203 & 0xF0000000
             | 0xA000000;
      }
      (*(void (__fastcall **)(unsigned int, int))(*(_DWORD *)(a2 + 4) + 48))(v204, v375);
      return 2;
    case 0x2Bu:
    case 0x2Cu:
    case 0x2Du:
    case 0x2Eu:
    case 0x54u:
    case 0x55u:
    case 0x56u:
      v199 = (*(int (__fastcall **)(int))(*(_DWORD *)(a2 + 4) + 40))(v375);
      if ( *(_DWORD *)(v16 + 432) )
        v377 = (((v199 >> 4) & 0xF000 | v199 & 0xFFF) ^ 0x8000) - 0x8000;
      v200 = v377 + a7;
      if ( v25 - 45 <= 1 )
      {
        v200 -= *(_DWORD *)(v372[15] + 28) + v372[14] + *a6;
      }
      else
      {
        v201 = v200 == 0x10000;
        if ( v200 >= 0x10000 )
          v201 = v25 == 86;
        if ( v201 )
          return 3;
      }
      if ( a12 == 1 )
        v200 |= 1u;
      v202 = v25 == 85;
      if ( v25 != 85 )
        v202 = (v25 & 0xFFFFFFFD) == 44;
      if ( v202 )
        v200 >>= 16;
      (*(void (__fastcall **)(unsigned int, int))(*(_DWORD *)(a2 + 4) + 48))(
        (16 * v200) & 0xF0000 | v200 & 0xFFF | v199 & 0xFFF0F000,
        v375);
      return 2;
    case 0x2Fu:
    case 0x30u:
    case 0x31u:
    case 0x32u:
    case 0x57u:
    case 0x58u:
    case 0x59u:
      v99 = v375 + 2;
      v194 = (*(int (__fastcall **)(int))(*(_DWORD *)(a2 + 4) + 52))(v375) << 16;
      v195 = v194 | (*(int (__fastcall **)(int))(*(_DWORD *)(a2 + 4) + 52))(v375 + 2);
      if ( *(_DWORD *)(v16 + 432) )
        v377 = (((v195 >> 15) & 0x800 | (v195 >> 4) & 0xF000 | (unsigned __int8)v195 | (v195 >> 4) & 0x700) ^ 0x8000)
             - 0x8000;
      v196 = v377 + a7;
      if ( v25 - 49 <= 1 )
      {
        v196 -= *(_DWORD *)(v372[15] + 28) + v372[14] + *a6;
      }
      else
      {
        v197 = v196 == 0x10000;
        if ( v196 >= 0x10000 )
          v197 = v25 == 89;
        if ( v197 )
          return 3;
      }
      if ( a12 == 1 )
        v196 |= 1u;
      v198 = v25 == 88;
      if ( v25 != 88 )
        v198 = (v25 & 0xFFFFFFFD) == 48;
      if ( v198 )
        v196 >>= 16;
      v103 = (16 * v196) & 0x7000
           | (unsigned __int8)v196
           | v195 & 0xFBF08F00
           | (16 * v196) & 0xF0000
           | (v196 << 15) & 0x4000000;
      (*(void (__fastcall **)(unsigned int, int))(*(_DWORD *)(a2 + 4) + 60))(HIWORD(v103), v375);
LABEL_191:
      (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)(a2 + 4) + 60))((unsigned __int16)v103, v99);
      return 2;
    case 0x33u:
      v183 = v375 + 2;
      v184 = (*(int (__fastcall **)(int))(*(_DWORD *)(a2 + 4) + 52))(v375);
      v185 = (*(int (__fastcall **)(int))(*(_DWORD *)(a2 + 4) + 52))(v375 + 2);
      v186 = v185;
      if ( *(_DWORD *)(v16 + 432) )
      {
        v187 = (v185 >> 7) & 0x40 | (v185 >> 4) & 0x80 | v184 & 0x3F;
        if ( (v184 & 0x400) == 0 )
          v187 |= 0x100u;
        v377 = (2 * v185) & 0xFFE | ((v187 - 256) << 12);
      }
      if ( v35 != -1 )
      {
        v188 = v35 - 4 + *(_DWORD *)(v34 + 56) + *(_DWORD *)(*(_DWORD *)(v34 + 60) + 28);
        *a14 = 0;
        a7 = v188;
      }
      v189 = sub_2BC454(a8, v372, a6, a6 + 1, v371, &a12, v15, a7, (int)a9, a2, (int)s);
      if ( v189 )
      {
        v246 = sub_2B660C(v372 + 1, v372[5], (int)a9, v15, (int)a6, (_DWORD *)v16, v189);
        if ( v246 )
          a7 = *((_DWORD *)v246 + 4)
             + *(_DWORD *)(*((_DWORD *)v246 + 3) + 56)
             + *(_DWORD *)(*(_DWORD *)(*((_DWORD *)v246 + 3) + 60) + 28);
      }
      v190 = v184 & 0xFBC0;
      v191 = v186 & 0xD000;
      v192 = v377 - (*(_DWORD *)(v372[15] + 28) + v372[14] + *a6) + a7;
      v193 = (int)v192 > 1048574 || (int)v192 < -1048576;
      (*(void (__fastcall **)(unsigned int, int))(*(_DWORD *)(a2 + 4) + 60))(
        (v192 >> 10) & 0x400 | (v192 >> 12) & 0x3F | v190,
        v375);
      (*(void (__fastcall **)(unsigned int, int))(*(_DWORD *)(a2 + 4) + 60))(
        (v192 >> 8) & 0x800 | (v192 >> 1) & 0x7FF | v191 | (v192 >> 5) & 0x2000,
        v183);
      if ( !v193 )
        return 2;
      return 3;
    case 0x34u:
    case 0x66u:
    case 0x67u:
      v111 = 1 << (*((_DWORD *)v17 + 3) - 1);
      v112 = v111 - 1;
      if ( v25 == 52 )
        v113 = 0;
      else
        v113 = -v111;
      v114 = *(int (__fastcall **)(int))(*(_DWORD *)(a2 + 4) + 52);
      if ( *(_DWORD *)(v16 + 432) )
      {
        v116 = v114(v375);
        v117 = *((_DWORD *)v17 + 10);
        v118 = v116 & v117;
        v119 = v116 & v117 & ((unsigned int)(v117 + 1) >> 1);
        if ( v119 )
          v118 = ~v117;
        else
          v119 = v116 & v117;
        if ( (v116 & v117 & ((unsigned int)(v117 + 1) >> 1)) != 0 )
          v119 = v118 | v116;
        v115 = *((_DWORD *)v17 + 1);
        v114 = *(int (__fastcall **)(int))(*(_DWORD *)(a2 + 4) + 52);
        v377 = v119 << v115;
      }
      else
      {
        v115 = *((_DWORD *)v17 + 1);
      }
      v120 = v25 == 52;
      v121 = v377;
      v122 = (int)(a7 - (*(_DWORD *)(v372[15] + 28) + v372[14] + *a6) + v377) >> v115;
      if ( v25 == 52 )
      {
        v123 = (unsigned __int8)(8 * v122);
        v121 = (16 * (_WORD)v122) & 0x200;
      }
      else
      {
        v123 = *((_DWORD *)v17 + 11);
        v25 = v122 & v123;
      }
      if ( v120 )
        v25 = v121 | v123;
      v124 = ((int (__fastcall *)(int, int, int))v114)(v375, v121, v123);
      (*(void (__fastcall **)(unsigned int, int))(*(_DWORD *)(a2 + 4) + 60))(v124 & ~*((_DWORD *)v17 + 11) | v25, v375);
      v125 = v113 > v122;
      if ( v112 < v122 )
        v125 = 1;
      if ( v125 )
        return 3;
      return 2;
    case 0x35u:
      v104 = (*(int (__fastcall **)(int))(*(_DWORD *)(a2 + 4) + 52))(v375);
      v105 = (*(int (__fastcall **)(int))(*(_DWORD *)(a2 + 4) + 52))(v375 + 2) | (v104 << 16);
      if ( *(_DWORD *)(v16 + 432) )
      {
        v106 = (v105 >> 15) & 0x800;
        v377 = (v105 >> 4) & 0x700 | v106 | (unsigned __int8)v105;
        if ( (v105 & 0xF00000) != 0 )
          v377 = -((v105 >> 4) & 0x700 | v106 | (unsigned __int8)v105);
      }
      v107 = a7 - ((*(_DWORD *)(v372[15] + 28) + v372[14] + *a6) & 0xFFFFFFFC) + v377;
      v108 = abs32(v107);
      if ( v108 >= 4096 )
        return 3;
      LOWORD(v109) = -28928;
      if ( a12 == 1 )
        v108 |= 1u;
      HIWORD(v109) = -1265;
      v110 = (v108 << 15) & 0x4000000 | v109 & v105 | (unsigned __int8)v108 | (16 * (_WORD)v108) & 0x7000;
      if ( v107 < 0 )
        v110 |= 0xA00000u;
      (*(void (__fastcall **)(unsigned int, int))(*(_DWORD *)(a2 + 4) + 60))(HIWORD(v110), v375);
      (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)(a2 + 4) + 60))((unsigned __int16)v110, v375 + 2);
      return 2;
    case 0x36u:
      v99 = v375 + 2;
      v100 = (*(int (__fastcall **)(int))(*(_DWORD *)(a2 + 4) + 52))(v375);
      v101 = (*(int (__fastcall **)(int))(*(_DWORD *)(a2 + 4) + 52))(v375 + 2) | (v100 << 16);
      if ( *(_DWORD *)(v16 + 432) )
      {
        v377 = v101 & 0xFFF;
        if ( (v101 & 0x800000) == 0 )
          v377 = -(v101 & 0xFFF);
      }
      v102 = a7 - ((*(_DWORD *)(v372[15] + 28) + v372[14] + *a6) & 0xFFFFFFFC) + v377;
      if ( v102 >= 0x1000 )
        return 3;
      v103 = v102 | v101 & 0xFF7FF000;
      (*(void (__fastcall **)(unsigned int, int))(*(_DWORD *)(a2 + 4) + 60))((v103 | 0x800000) >> 16, v375);
      goto LABEL_191;
    case 0x39u:
    case 0x3Au:
    case 0x3Bu:
    case 0x3Cu:
    case 0x3Du:
    case 0x46u:
    case 0x47u:
    case 0x48u:
    case 0x49u:
    case 0x4Au:
      v96 = (*(int (__fastcall **)(int))(*(_DWORD *)(a2 + 4) + 40))(v375);
      v97 = *(_DWORD *)(v372[15] + 28) + v372[14] + *a6;
      v98 = a9;
      if ( a9 )
        v98 = (char **)*((_DWORD *)a9[15] + 7);
      switch ( v25 )
      {
        case '9':
        case ':':
        case 'F':
        case 'G':
          v217 = 0;
          break;
        case ';':
        case '<':
        case 'H':
        case 'I':
          v217 = 1;
          break;
        case '=':
        case 'J':
          v217 = 2;
          break;
        default:
          sub_2A6BF0((int)"elf32-arm.c", 11768, (int)"elf32_arm_final_link_relocate");
      }
      if ( !*(_DWORD *)(v16 + 432) )
        goto LABEL_462;
      v218 = (v96 >> 8) & 0xF;
      v219 = v218 == 0;
      if ( v218 )
        LOBYTE(v218) = 2 * v218;
      else
        v377 = (unsigned __int8)v96;
      if ( !v219 )
        v377 = __ROR4__((unsigned __int8)v96, v218);
      if ( (v96 & 0x1E00000) == 0x800000 )
        goto LABEL_462;
      if ( (v96 & 0x1E00000) != 0x400000 )
      {
        sub_2A6A5C("%B(%A+%#Lx): Only ADD or SUB instructions are allowed for ALU group relocations", a2, v372);
        return 3;
      }
      v377 = -v377;
LABEL_462:
      if ( v25 - 57 > 4 )
        v220 = a7 - (_DWORD)v98;
      else
        v220 = a7 - v97;
      v221 = v220 + v377;
      if ( a12 == 1 )
        v221 |= 1u;
      v210 = abs32(v221);
      v222 = sub_2B2780(v210, v217, &v388);
      v223 = v25 > 0x3A;
      if ( v25 != 58 )
        v223 = v25 - 60 > 1;
      if ( (!v223 || v25 == 71 || v25 - 73 <= 1) && v388 )
        goto LABEL_428;
      v224 = v96 & 0xFF1FF000;
      if ( v221 >= 0 )
        goto LABEL_476;
      v224 |= 0x400000u;
      goto LABEL_477;
    case 0x40u:
    case 0x41u:
    case 0x42u:
    case 0x4Eu:
    case 0x4Fu:
    case 0x50u:
      v81 = (*(int (__fastcall **)(int))(*(_DWORD *)(a2 + 4) + 40))(v375);
      v82 = v25 - 64;
      v83 = v372[14];
      v84 = *a6;
      v85 = *(_DWORD *)(v372[15] + 28);
      if ( a9 )
        v86 = (int)a9[15];
      else
        v86 = 0;
      if ( a9 )
        v86 = *(_DWORD *)(v86 + 28);
      switch ( v25 )
      {
        case '@':
        case 'N':
          v212 = -1;
          break;
        case 'A':
        case 'O':
          v212 = 0;
          break;
        case 'B':
        case 'P':
          v212 = 1;
          break;
        default:
          sub_2A6BF0((int)"elf32-arm.c", 11984, (int)"elf32_arm_final_link_relocate");
      }
      if ( *(_DWORD *)(v16 + 432) )
      {
        v16 = v81 & 0xF;
        if ( (v81 & 0x800000) != 0 )
          v213 = 1;
        else
          v213 = -1;
        v377 = v213 * ((v81 >> 4) & 0xF0 | v16);
      }
      if ( v82 > 2 )
      {
        v85 = a7;
      }
      else
      {
        v86 = a7;
        v16 = v85 + v83;
      }
      if ( v82 > 2 )
      {
        v214 = v85 - v86;
        v85 = v377;
      }
      else
      {
        v16 = v86 - (v16 + v84);
        v214 = v377;
      }
      if ( v82 > 2 )
        v215 = v214 + v85;
      else
        v215 = v16 + v214;
      v210 = abs32(v215);
      sub_2B2780(v210, v212, &v388);
      if ( v388 > 0xFF )
        goto LABEL_428;
      v216 = v81 & 0xFF7FF0F0;
      if ( v215 >= 0 )
        v216 |= 0x800000u;
      (*(void (__fastcall **)(unsigned int, int))(*(_DWORD *)(a2 + 4) + 48))(
        (16 * (_WORD)v388) & 0xF00 | v388 & 0xF | v216,
        v375);
      return 2;
    case 0x43u:
    case 0x44u:
    case 0x45u:
    case 0x51u:
    case 0x52u:
    case 0x53u:
      v75 = (*(int (__fastcall **)(int))(*(_DWORD *)(a2 + 4) + 40))(v375);
      v76 = v25 - 67;
      v77 = v372[14];
      v78 = *a6;
      v79 = *(_DWORD *)(v372[15] + 28);
      if ( a9 )
        v80 = (int)a9[15];
      else
        v80 = 0;
      if ( a9 )
        v80 = *(_DWORD *)(v80 + 28);
      switch ( v25 )
      {
        case 'C':
        case 'Q':
          v205 = -1;
          break;
        case 'D':
        case 'R':
          v205 = 0;
          break;
        case 'E':
        case 'S':
          v205 = 1;
          break;
        default:
          sub_2A6BF0((int)"elf32-arm.c", 12070, (int)"elf32_arm_final_link_relocate");
      }
      v206 = *(_DWORD *)(v16 + 432);
      if ( v206 )
      {
        if ( (v75 & 0x800000) != 0 )
          v207 = 1;
        else
          v207 = -1;
        v206 = v207 * ((4 * (_WORD)v75) & 0x3FC);
        v377 = v206;
      }
      if ( v76 <= 2 )
      {
        v80 = a7;
        v206 = v79 + v77 + v78;
      }
      else
      {
        v79 = a7;
      }
      if ( v76 <= 2 )
      {
        v206 = v80 - v206;
        v208 = v377;
      }
      else
      {
        v208 = v79 - v80;
        v79 = v377;
      }
      if ( v76 <= 2 )
        v209 = v206 + v208;
      else
        v209 = v208 + v79;
      v210 = abs32(v209);
      sub_2B2780(v210, v205, &v388);
      v211 = v388 & 3;
      if ( (v388 & 3) != 0 )
        v211 = 1;
      if ( v388 >= 0x400 )
        v211 |= 1u;
      if ( v211 )
        goto LABEL_428;
      v234 = v75 & 0xFF7FFF00;
      if ( v209 >= 0 )
        v234 |= 0x800000u;
      (*(void (__fastcall **)(unsigned int, int))(*(_DWORD *)(a2 + 4) + 48))(v234 | (v388 >> 2), v375);
      return 2;
    case 0x5Au:
    case 0x5Bu:
    case 0x5Cu:
    case 0x5Du:
    case 0x68u:
    case 0x6Bu:
    case 0x81u:
      if ( !v378 )
        sub_2A6BBC("elf32-arm.c", 11244);
      if ( v15 )
      {
        if ( *(_DWORD *)(v16 + 48) )
        {
          if ( (*(_BYTE *)a8 & 1) != 0 )
          {
            if ( (*(_DWORD *)(v15 + 32) != -1 || (*(_BYTE *)(v15 + 52) & 8) != 0) && !sub_2E2EE8(v15, a8, 0) )
            {
              v54 = *(_DWORD *)(v15 + 32);
LABEL_109:
              v374 = v54;
              *a14 = 0;
LABEL_110:
              v55 = *(_DWORD *)(v15 + 36);
              v56 = *(char **)(v15 + 96);
              v57 = *(unsigned __int8 *)(v15 + 92);
              goto LABEL_111;
            }
          }
          else if ( (*(_BYTE *)(v15 + 52) & 8) == 0 )
          {
            v54 = *(_DWORD *)(v15 + 32);
            if ( v54 != -1 )
              goto LABEL_109;
          }
        }
        v374 = 0;
        goto LABEL_110;
      }
      if ( !v382 )
        sub_2A6BBC("elf32-arm.c", 11265);
      v374 = 0;
      v56 = *(char **)(v384 + 4 * v380);
      v55 = *(_DWORD *)(v382 + 4 * v380);
      v57 = *(unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)(a2 + 160) + 2352) + (v385 >> 8));
LABEL_111:
      if ( *((unsigned __int8 *)a6 + 4) == v25 )
      {
        v376 = (v25 != 104) & (v57 >> 1);
        v377 = v57 & 2;
        if ( !v57 )
        {
          v377 = 0;
          sub_2A6BBC("elf32-arm.c", 11276);
        }
      }
      else
      {
        LOBYTE(v57) = 4;
        v376 = 0;
        v377 = 0;
      }
      v379 = v55 & 1;
      if ( (v55 & 1) != 0 )
      {
        v55 &= ~1u;
        goto LABEL_152;
      }
      v58 = v374;
      v381 = v55;
      v59 = v57 & 8;
      if ( v374 )
        v60 = 1;
      else
        v60 = *(_BYTE *)a8 & 1;
      if ( v60 )
      {
        if ( !v15
          || ((*(_BYTE *)(v15 + 49) & 3) != 0 ? (v61 = 0) : (v61 = v387 ^ 1),
              v61 || (v60 = *(unsigned __int8 *)(v15 + 12), v60 != 2)) )
        {
          v60 = (int)v383;
          if ( !v383 )
          {
            v384 = v57 & 8;
            sub_2A6BBC("elf32-arm.c", 11297);
            v59 = v384;
          }
          if ( !v59 )
          {
            v62 = v377;
            if ( !v377 )
            {
              if ( (v57 & 4) == 0 )
                goto LABEL_144;
              goto LABEL_670;
            }
            v387 = (int)&v388;
            v385 = v374 << 8;
LABEL_130:
            v63 = *(_DWORD *)(v378 + 56);
            v64 = *(_DWORD *)(v16 + 432);
            v65 = *(_DWORD *)(*(_DWORD *)(v378 + 60) + 28);
            v390 = 0;
            v389 = v385 + 17;
            v388 = v65 + v63 + v55;
            if ( v64 )
              (*(void (**)(void))(*(_DWORD *)(v373 + 4) + 48))();
            sub_2B67D8(v373, *(_DWORD **)(a8 + 28), v383, v387);
            if ( v374 )
            {
              v343 = *(_DWORD *)(v16 + 432);
              v390 = 0;
              v389 = v385 + 18;
              v388 += 4;
              if ( v343 )
                (*(void (**)(void))(*(_DWORD *)(v373 + 4) + 48))();
              sub_2B67D8(v373, *(_DWORD **)(a8 + 28), v383, v387);
              v384 = 1;
            }
            else
            {
              v66 = *(_DWORD *)(*(_DWORD *)(a8 + 28) + 204);
              v67 = *(void (__fastcall **)(unsigned int, int))(*(_DWORD *)(v373 + 4) + 48);
              if ( v66 )
                v68 = *(_DWORD *)(v66 + 28);
              else
                v68 = v374;
              v69 = *(_DWORD *)(v378 + 108);
              v384 = 1;
              v67(a7 - v68, v69 + v55 + 4);
            }
LABEL_137:
            v62 = v55 + 8;
            v381 = v55 + 8;
            goto LABEL_138;
          }
          v384 = 1;
          goto LABEL_608;
        }
        if ( (v57 & 8) != 0 )
        {
          v384 = v55 & 1;
          goto LABEL_612;
        }
      }
      else if ( (v57 & 8) != 0 )
      {
        v384 = v55 & 1;
LABEL_608:
        if ( (!v15 || *(_BYTE *)(v15 + 12) != 2) && (*(_BYTE *)a8 & 1) == 0 )
          sub_2A6BBC("elf32-arm.c", 11307);
LABEL_612:
        v266 = *(_DWORD **)(v16 + 220);
        v267 = *(_DWORD *)(v16 + 1248);
        if ( (unsigned int)&v56[v267 + 8] > v266[9] )
        {
          sub_2A6BBC("elf32-arm.c", 11309);
          v266 = *(_DWORD **)(v16 + 220);
          v267 = *(_DWORD *)(v16 + 1248);
        }
        v268 = *(_DWORD *)(v16 + 232);
        v269 = *(_DWORD *)(v266[15] + 28);
        v270 = *(_DWORD *)(v16 + 432);
        v271 = (int)&v56[v267 + v266[14]];
        v385 = v374 << 8;
        v272 = *(_DWORD *)(v16 + 444);
        v32 = v270 == 0;
        v273 = *(_DWORD *)(v268 + 108);
        v274 = *(_DWORD *)(v268 + 36);
        v388 = v271 + v269;
        v389 = (v374 << 8) + 13;
        v390 = 0;
        v275 = v273 + v274;
        *(_DWORD *)(v16 + 444) = v272 + 1;
        if ( v32 )
        {
          v386 = v273 + 12 * v272;
          if ( v275 >= v386 + 12 )
          {
            v276 = (void (__fastcall *)(int, unsigned int *, int))sub_2C8564;
            goto LABEL_619;
          }
        }
        else
        {
          v386 = v273 + 8 * v272;
          if ( v275 >= v386 + 8 )
          {
            v276 = (void (__fastcall *)(int, unsigned int *, int))sub_2C8528;
            goto LABEL_619;
          }
        }
        sub_2A6BBC("elf32-arm.c", 11322);
        v276 = (void (__fastcall *)(int, unsigned int *, int))sub_2C8528;
        if ( !*(_DWORD *)(v16 + 432) )
          v276 = (void (__fastcall *)(int, unsigned int *, int))sub_2C8564;
LABEL_619:
        v387 = (int)&v388;
        v276(v373, &v388, v386);
        v277 = *(void (__fastcall **)(int, char *))(*(_DWORD *)(v373 + 4) + 48);
        if ( v15 )
        {
          if ( (*(_DWORD *)(a8 + 112) & 8) == 0 )
            v379 = (v389 >> 8) | 0x80000000;
        }
        else
        {
          v379 = a7 - *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a8 + 28) + 204) + 28);
        }
        v277(v379, &v56[*(_DWORD *)(v16 + 1248) + *(_DWORD *)(*(_DWORD *)(v16 + 220) + 108)]);
        (*(void (__fastcall **)(_DWORD, char *))(*(_DWORD *)(v373 + 4) + 48))(
          0,
          &v56[*(_DWORD *)(v16 + 1248) + 4 + *(_DWORD *)(*(_DWORD *)(v16 + 220) + 108)]);
        v62 = v377;
        if ( !v377 )
        {
LABEL_138:
          if ( (v57 & 4) == 0 )
            goto LABEL_144;
          if ( !v384 )
          {
LABEL_140:
            v70 = *(_DWORD *)(*(_DWORD *)(a8 + 28) + 204);
            if ( v70 )
              v71 = (((1 << *(_DWORD *)(v70 + 64)) + 7) & -(1 << *(_DWORD *)(v70 + 64))) - *(_DWORD *)(v70 + 28) + a7;
            else
              v71 = 0;
            (*(void (__fastcall **)(int, int))(*(_DWORD *)(v373 + 4) + 48))(v71, *(_DWORD *)(v378 + 108) + v381);
LABEL_144:
            if ( v15 )
            {
              v62 = *(_DWORD *)(v15 + 36);
            }
            else
            {
              v60 = v382;
              v58 = v380;
            }
            if ( v15 )
            {
              v72 = v62 | 1;
              *(_DWORD *)(v15 + 36) = v72;
            }
            else
            {
              v72 = *(_DWORD *)(v60 + 4 * v58);
            }
            if ( !v15 )
              *(_DWORD *)(v60 + 4 * v58) = v72 | 1;
LABEL_152:
            if ( v376 )
            {
              v56 = (char *)(v55 + 8);
            }
            else if ( (v57 & 8) == 0 )
            {
              v56 = (char *)v55;
            }
            if ( ((*((unsigned __int8 *)a6 + 4) - 91) & 0xFFFFFFFD) != 0 )
            {
              if ( v25 == 90 && (v57 & 8) != 0 )
              {
                v256 = (*(int (__fastcall **)(int))(*(_DWORD *)(a2 + 4) + 40))(v375);
                v257 = v256 & 0xFFFFFFFE;
                v32 = (v256 & 1) == 0;
                v258 = *(_DWORD *)(a2 + 4);
                v259 = a5 + *a6 - (v256 & 0xFFFFFFFE);
                if ( v32 )
                {
                  v309 = (*(int (__fastcall **)(int))(v258 + 40))(v259);
                  v310 = HIBYTE(v309);
                  if ( HIBYTE(v309) == 235 || v310 == 250 )
                  {
                    v262 = -4;
                  }
                  else
                  {
                    if ( v310 != 224 )
                    {
                      sub_2A6A5C(
                        "%B(%A+%#Lx): unexpected ARM instruction '%#lx' referenced by TLS_GOTDESC",
                        a2,
                        v372,
                        *a6,
                        v309);
                      return 6;
                    }
                    v262 = -8;
                  }
                }
                else
                {
                  v260 = (*(int (__fastcall **)(int))(v258 + 52))(v259);
                  v261 = v260;
                  if ( (v260 & 0xF000) == 0xF000 || (v260 & 0xF800) == 0xE800 )
                    v261 = (v260 << 16)
                         | (*(int (__fastcall **)(unsigned int))(*(_DWORD *)(a2 + 4) + 52))(a5 + *a6 + 2 - v257);
                  if ( (v261 & 0xF800C000) == 0xF000C000 )
                  {
                    v262 = -6;
                  }
                  else
                  {
                    if ( (v261 & 0xFFFFFF00) != 0x4400 )
                    {
                      sub_2A6A5C(
                        "%B(%A+%#Lx): unexpected Thumb instruction '%#lx' referenced by TLS_GOTDESC",
                        a2,
                        v372,
                        *a6,
                        v261);
                      return 6;
                    }
                    v262 = -5;
                  }
                }
                v263 = *(_DWORD *)(v16 + 220);
                v264 = *(_DWORD *)(v263 + 60);
                v265 = *(_DWORD *)(v263 + 56);
                v73 = *a6;
                v74 = (int)&v56[*(_DWORD *)(v16 + 1248)
                              - (*(_DWORD *)(v372[15] + 28)
                               + v372[14])
                              + v265
                              + *(_DWORD *)(v264 + 28)
                              - *a6
                              + v262];
              }
              else
              {
                v73 = *a6;
                v74 = (int)&v56[*(_DWORD *)(*(_DWORD *)(v16 + 216) + 56)
                              - (*(_DWORD *)(v372[15] + 28)
                               + v372[14])
                              + *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v16 + 216) + 60) + 28)
                              - *a6];
              }
            }
            else
            {
              v369 = a2;
              v370 = s;
              v239 = *(_DWORD *)(v16 + 228);
              a12 = 0;
              v240 = sub_2BC454(a8, v372, a6, a6 + 1, v371, &a12, v15, *(_DWORD *)(v16 + 464), v239, a2, (int)s);
              if ( v240 )
              {
                v300 = sub_2B660C(v372 + 1, v372[5], *(_DWORD *)(v16 + 228), 0, (int)a6, (_DWORD *)v16, v240);
                v241 = *((_DWORD *)v300 + 4)
                     + *(_DWORD *)(*((_DWORD *)v300 + 3) + 56)
                     + *(_DWORD *)(*(_DWORD *)(*((_DWORD *)v300 + 3) + 60) + 28);
              }
              else
              {
                v241 = *(_DWORD *)(*(_DWORD *)(v16 + 228) + 56)
                     + *(_DWORD *)(v16 + 464)
                     + *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v16 + 228) + 60) + 28);
              }
              v242 = v372[14];
              v73 = *a6;
              v243 = *(_DWORD *)(v372[15] + 28);
              if ( *((_BYTE *)a6 + 4) != 91 )
              {
                v281 = -4 - v242 - v243 - v73 + v241;
                if ( v240 && sub_16664(v240) )
                {
                  v282 = 53248;
                }
                else
                {
                  v282 = 49152;
                  v281 = (v281 + 2) & 0xFFFFFFFD;
                }
                v283 = (unsigned int)v281 >> 31;
                v284 = ((unsigned int)v281 >> 12) & 0x3FF;
                v285 = ((unsigned int)v281 >> 1) & 0x7FF
                     | v282
                     | (((((v281 >> 23) & 1) == 0) ^ v283) << 13)
                     | (((((v281 >> 22) & 1) == 0) ^ v283) << 11);
                (*(void (__fastcall **)(unsigned int, int))(*(_DWORD *)(a2 + 4) + 60))(
                  v284 | (v283 << 10) | 0xF000,
                  v375);
                (*(void (__fastcall **)(int, int))(*(_DWORD *)(a2 + 4) + 60))(v285, v375 + 2);
                return 2;
              }
              v244 = -8 - v242 - v243 - v73 + v241;
              if ( *(_DWORD *)(v16 + 388) )
                v245 = -100663296;
              else
                v245 = -352321536;
              v74 = v245 | (v244 >> 2) & 0xFFFFFF;
            }
            return sub_301504(v17, a2, v372, a5, v73, v74, a6[2]);
          }
LABEL_670:
          if ( v374 )
          {
            v390 = 0;
          }
          else
          {
            v292 = *(_DWORD *)(*(_DWORD *)(a8 + 28) + 204);
            if ( v292 )
              v293 = *(_DWORD *)(v292 + 28);
            else
              v293 = v374;
            v390 = a7 - v293;
          }
          v294 = *(_DWORD *)(v16 + 432);
          v295 = *(_DWORD *)(v378 + 56);
          v296 = *(_DWORD *)(*(_DWORD *)(v378 + 60) + 28);
          v389 = (v374 << 8) + 19;
          v388 = v296 + v295 + v381;
          if ( v294 )
            (*(void (__fastcall **)(int, int))(*(_DWORD *)(v373 + 4) + 48))(v390, *(_DWORD *)(v378 + 108) + v381);
          sub_2B67D8(v373, *(_DWORD **)(a8 + 28), v383, (int)&v388);
          goto LABEL_144;
        }
        if ( v384 )
          goto LABEL_130;
LABEL_624:
        (*(void (__fastcall **)(int, int))(*(_DWORD *)(v373 + 4) + 48))(1, *(_DWORD *)(v378 + 108) + v55);
        v384 = 0;
        v278 = *(_DWORD *)(*(_DWORD *)(a8 + 28) + 204);
        v279 = v278 == 0;
        if ( v278 )
        {
          v280 = *(_DWORD *)(v278 + 28);
          v278 = a7;
        }
        else
        {
          v280 = a7;
        }
        if ( !v279 )
          v280 = v278 - v280;
        (*(void (__fastcall **)(int, int))(*(_DWORD *)(v373 + 4) + 48))(v280, *(_DWORD *)(v378 + 108) + v55 + 4);
        goto LABEL_137;
      }
      v62 = v377;
      if ( !v377 )
      {
        if ( (v57 & 4) == 0 )
          goto LABEL_144;
        goto LABEL_140;
      }
      goto LABEL_624;
    case 0x64u:
    case 0x65u:
      return 2;
    case 0x69u:
      if ( !v378 )
        sub_2A6BF0((int)"elf32-arm.c", 11190, (int)"elf32_arm_final_link_relocate");
      v53 = *(_DWORD *)(v16 + 468);
      if ( (v53 & 1) != 0 )
      {
        v53 &= ~1u;
      }
      else
      {
        if ( (*(_BYTE *)a8 & 1) != 0 )
        {
          if ( !v383 )
            sub_2A6BF0((int)"elf32-arm.c", 11205, (int)"elf32_arm_final_link_relocate");
          v312 = *(_DWORD *)(v16 + 432);
          v313 = *(_DWORD *)(*(_DWORD *)(v378 + 60) + 28);
          v314 = v53 + *(_DWORD *)(v378 + 56);
          v390 = *(_DWORD *)(v16 + 468) & 1;
          v389 = 17;
          v388 = v313 + v314;
          if ( v312 )
            (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)(v373 + 4) + 48))(0, *(_DWORD *)(v378 + 108) + v53);
          sub_2B67D8(v373, *(_DWORD **)(a8 + 28), v383, (int)&v388);
        }
        else
        {
          (*(void (__fastcall **)(int, int))(*(_DWORD *)(v373 + 4) + 48))(1, *(_DWORD *)(v378 + 108) + v53);
        }
        *(_DWORD *)(v16 + 468) |= 1u;
      }
      return sub_301504(
               v17,
               a2,
               v372,
               a5,
               *a6,
               *(_DWORD *)(v378 + 56)
             - (*(_DWORD *)(v372[15] + 28)
              + v372[14])
             + *(_DWORD *)(*(_DWORD *)(v378 + 60) + 28)
             - *a6
             + v53,
               a6[2]);
    case 0x6Au:
      v90 = *a6;
      v91 = a2;
      v92 = *(_DWORD *)(*(_DWORD *)(a8 + 28) + 204);
      v93 = v92 == 0;
      if ( v92 )
        v92 = a7 - *(_DWORD *)(v92 + 28);
      v94 = v372;
      if ( !v93 )
        a7 = v92;
      v95 = a6[2];
      v367 = a7;
      return sub_301504(v17, v91, v94, a5, v90, v367, v95);
    case 0x6Cu:
      v87 = *a6;
      if ( (*(_BYTE *)a8 & 3) == 3 )
      {
        sub_2A6A5C("%B(%A+%#Lx): %s relocation not permitted in shared object", a2, v372, v87, *((_DWORD *)v17 + 8));
        return 6;
      }
      else
      {
        v88 = *(_DWORD *)(*(_DWORD *)(a8 + 28) + 204);
        if ( v88 )
          v89 = (((1 << *(_DWORD *)(v88 + 64)) + 7) & -(1 << *(_DWORD *)(v88 + 64))) - *(_DWORD *)(v88 + 28) + a7;
        else
          v89 = 0;
        return sub_301504(v17, a2, v372, a5, v87, v89, a6[2]);
      }
    case 0x84u:
    case 0x85u:
    case 0x86u:
    case 0x87u:
      v46 = *(int (__fastcall **)(int))(*(_DWORD *)(a2 + 4) + 52);
      v388 = 0;
      v389 = 8;
      v390 = 16;
      v391 = 24;
      v47 = v46(v375);
      v48 = *(_DWORD *)(v16 + 432);
      v49 = v48 == 0;
      v50 = var4[v25 - 136];
      if ( v48 )
        v48 = (unsigned __int8)v47;
      v51 = v47 & 0xFF00;
      if ( !v49 )
        v377 = v48;
      v52 = v377 + a7;
      if ( a12 == 1 )
        v52 |= 1u;
      (*(void (__fastcall **)(int, int))(*(_DWORD *)(a2 + 4) + 60))((unsigned __int8)(v52 >> v50) | v51, v375);
LABEL_94:
      *a14 = 0;
      return 2;
    default:
      return 6;
  }
}
