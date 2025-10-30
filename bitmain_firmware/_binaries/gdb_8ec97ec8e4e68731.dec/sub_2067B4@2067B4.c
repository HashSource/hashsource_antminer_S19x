// write access to const memory has been detected, the output may be wrong!
int __fastcall sub_2067B4(unsigned __int8 **a1, struct obstack *a2)
{
  const char **v3; // r8
  unsigned __int8 *v4; // r2
  int v5; // r3
  bool v6; // zf
  unsigned int v7; // r3
  int v8; // r1
  int v9; // r3
  const char *v10; // r2
  unsigned __int8 *v11; // r6
  int v12; // r0
  int *v13; // r10
  int v14; // r1
  int v16; // r4
  unsigned __int8 *v17; // r0
  int v18; // r5
  int v19; // r7
  int v20; // r2
  const char *v21; // r6
  char *v22; // r5
  char *v23; // r0
  char *v24; // r4
  bool v25; // cf
  unsigned int v26; // r5
  char *v27; // r1
  char *v28; // r3
  char *v29; // r2
  char *v30; // r3
  struct _obstack_chunk *(*chunkfun)(void *, int); // r0
  bool v32; // zf
  int v33; // r3
  const char *v34; // r0
  char *v35; // r3
  char *v36; // r2
  char v37; // t1
  char *v38; // r3
  size_t v39; // r9
  _DWORD *v40; // r8
  _DWORD *v41; // r10
  int v42; // r7
  _DWORD *v43; // r6
  int v44; // r4
  int v45; // r5
  int v46; // t1
  unsigned int v47; // r3
  const char *v48; // r0
  int *v49; // r9
  char *v50; // r2
  int v51; // r4
  int v52; // r5
  int v53; // r6
  int v54; // r4
  int *v55; // r0
  int v56; // r7
  char *v57; // r0
  const char *v58; // r3
  unsigned int v59; // r10
  bool v60; // cc
  int v61; // r2
  int v62; // r10
  int v63; // r6
  unsigned int v64; // r0
  bool v65; // cc
  int v66; // r2
  size_t v67; // r0
  int v68; // r2
  _DWORD *v69; // r0
  int v70; // r3
  int v71; // r4
  int v72; // r3
  _BOOL4 v73; // r5
  int v74; // r0
  int v75; // r3
  bool v76; // zf
  int v77; // r2
  _BYTE *v78; // r3
  const char *v79; // r3
  int v80; // r2
  int v81; // r5
  int v82; // r4
  int *v83; // r0
  const char *v84; // r6
  int v85; // r4
  int *v86; // r0
  int *v87; // r3
  int v88; // r5
  int *v89; // r7
  int v90; // r0
  const char *v91; // r2
  int *v92; // r4
  int v93; // r5
  unsigned int v94; // r4
  int *v95; // r0
  int v96; // r10
  const char *v97; // r5
  int v98; // r4
  const char *v99; // r3
  int v100; // r2
  int v101; // r7
  int v102; // r5
  int v103; // r6
  int v104; // r0
  int v105; // r5
  int v106; // r1
  _DWORD *v107; // r1
  int v108; // r0
  char v109; // r4
  int v110; // r0
  char *v111; // r0
  int v112; // r2
  char *v113; // r5
  __int16 v114; // r12
  char v115; // r1
  struct obstack *v116; // r7
  const char *v117; // r4
  int v118; // r1
  const char *v119; // r3
  bool v120; // zf
  _DWORD *v121; // r5
  void *v122; // r3
  const char *v123; // r2
  int v124; // r0
  unsigned __int8 *v125; // r1
  const char *v126; // r2
  signed int v127; // r3
  int v128; // r3
  size_t v129; // r4
  const char *v130; // r1
  const char *v131; // r5
  int v132; // t1
  size_t v133; // r6
  unsigned int v134; // r2
  char *chunk_limit; // r0
  const char *v136; // r5
  char *v137; // r2
  char *v138; // r3
  char *next_free; // r6
  char *tempint; // r1
  bool v141; // zf
  int v142; // r3
  int *v143; // r2
  int v144; // r10
  int v145; // r5
  __int64 v146; // r6
  char *v147; // r3
  size_t v148; // r6
  int v149; // r4
  int *v150; // r0
  int v151; // r0
  int v152; // r3
  char v153; // r2
  _DWORD *v154; // r4
  int *v155; // r0
  int v156; // r4
  int v157; // r0
  int v158; // r1
  _DWORD *v159; // r0
  int v160; // r0
  int v161; // r3
  __int16 v162; // lr
  char v163; // r2
  char *v164; // r4
  unsigned int v165; // r5
  int v166; // r3
  char *v167; // r2
  char v168; // r2
  int v169; // r6
  int v170; // r1
  int v171; // r3
  char v172; // r2
  void *v173; // r12
  void *v174; // r3
  int v175; // r0
  bool v176; // zf
  int v177; // r3
  int v178; // lr
  int v179; // r8
  signed int v180; // r9
  signed int v181; // r6
  signed int v182; // r7
  int v183; // r2
  int v184; // r12
  int v185; // r2
  int v186; // r1
  size_t v187; // r3
  int v188; // t1
  char v189; // r0
  __int64 v190; // r6
  int v191; // r2
  int v192; // r7
  unsigned int v193; // r6
  unsigned int v194; // r8
  int v195; // r3
  int v196; // r7
  int v197; // r1
  int v198; // r3
  char v199; // r2
  void *v200; // r12
  void *v201; // r3
  int v202; // r0
  bool v203; // zf
  int v204; // r3
  int v205; // r1
  int v206; // r3
  int v207; // r2
  char v208; // r3
  char v209; // r2
  int v210; // r0
  const char *v211; // r3
  int v212; // r4
  int *v213; // r0
  int v214; // r3
  int v215; // t1
  int v216; // r0
  const char *v217; // r1
  char *v218; // r0
  size_t v219; // r5
  unsigned int v220; // r2
  char *v221; // r1
  int v222; // r2
  char *v223; // r3
  char *v224; // r1
  char *v225; // r0
  bool v226; // zf
  _DWORD *v227; // r5
  int v228; // r3
  int v229; // r3
  bool v230; // zf
  int v231; // r3
  int v232; // r0
  int v233; // r3
  int v234; // r0
  int v235; // r2
  int v236; // r0
  char *v237; // r0
  size_t v238; // r5
  char *v239; // r0
  char *v240; // r2
  __int64 v241; // r2
  struct _obstack_chunk *(*v242)(void *, int); // r0
  char *v243; // r1
  bool v244; // zf
  int v245; // r3
  _BYTE *v246; // r0
  int v247; // r0
  int v248; // r2
  int v249; // r2
  unsigned __int8 *v250; // r5
  int v251; // t1
  char v252; // r3
  const char *v253; // r0
  __int16 v254; // r0
  int v255; // r2
  int v256; // r3
  int v257; // r3
  unsigned int v258; // r5
  int v259; // r4
  int v260; // r2
  int v261; // r3
  char v262; // r1
  void *v263; // r0
  void *v264; // r3
  int v265; // r12
  bool v266; // zf
  int v267; // r3
  int v268; // r2
  __int16 *v269; // r3
  int v270; // r2
  int v271; // r5
  int v272; // r0
  int v273; // r3
  char v274; // r2
  char v275; // r2
  const char *v276; // r0
  int v277; // r2
  int v278; // r0
  int v279; // r3
  int v280; // r0
  int v281; // r0
  const char *v282; // r3
  int v283; // r2
  void **v284; // r3
  _DWORD *v285; // r4
  void *v286; // r2
  int v287; // r3
  int v288; // r2
  const char *v289; // r2
  __int64 v290; // r2
  int v291; // t1
  int v292; // r4
  int v293; // r5
  int v294; // r5
  int v295; // r0
  int v296; // r0
  _DWORD *v297; // r5
  char *v298; // r2
  const char *v299; // r3
  _DWORD *v300; // r5
  int v301; // r0
  const char *v302; // r3
  _BYTE *v303; // r12
  int v304; // r0
  int v305; // r12
  _DWORD *v306; // r3
  int v307; // r2
  size_t v308; // r0
  _BYTE *v309; // r12
  int v310; // r0
  int v311; // r3
  int v312; // r0
  _DWORD *v313; // r3
  int v314; // r5
  int v315; // r2
  int v316; // r3
  char v317; // r2
  int v318; // r4
  int v319; // r2
  int v320; // r3
  char v321; // r1
  void *v322; // r12
  int v323; // r0
  void *v324; // r3
  bool v325; // zf
  int v326; // r3
  size_t v327; // r2
  int v328; // r5
  _DWORD *v329; // r4
  size_t v330; // r7
  int v331; // r8
  int v332; // r1
  int v333; // r2
  int v334; // r3
  int v335; // r9
  _DWORD *v336; // r12
  int v337; // r1
  int v338; // r3
  char v339; // r2
  char v340; // r2
  int v341; // r2
  _DWORD *v342; // r12
  int v343; // r3
  int v344; // r2
  int v345; // r4
  int v346; // r3
  int v347; // r0
  int v348; // r1
  int v349; // r2
  _DWORD *v350; // lr
  const char *v351; // r3
  int v352; // r2
  int v353; // r2
  bool v354; // zf
  const char *v355; // r3
  int v356; // r6
  int *v357; // r2
  int v358; // r3
  int *v359; // r1
  int v360; // r0
  char v361; // r2
  char v362; // r2
  int v363; // r0
  _BOOL4 v364; // r6
  __int16 *v365; // r1
  _BOOL4 v366; // r7
  _BOOL4 v367; // r1
  unsigned int i; // r3
  int v369; // r0
  int v370; // r0
  int v371; // r0
  int v372; // r3
  unsigned int v373; // r4
  int v374; // r5
  int v375; // r2
  int v376; // r3
  char v377; // r1
  void *v378; // r0
  void *v379; // r3
  int v380; // r12
  bool v381; // zf
  int v382; // r3
  int v383; // r2
  int v384; // r3
  int v385; // r5
  int v386; // r2
  int v387; // r3
  char v388; // r1
  void *v389; // r0
  void *v390; // r3
  int v391; // r12
  bool v392; // zf
  int v393; // r3
  int v394; // r2
  int v395; // r3
  int v396; // r5
  int v397; // r2
  int v398; // r3
  char v399; // r1
  void *v400; // r0
  void *v401; // r3
  int v402; // r12
  bool v403; // zf
  int v404; // r3
  int v405; // r2
  bool v406; // zf
  _DWORD *v407; // r5
  _DWORD *v408; // r5
  bool v409; // r3
  int v411; // r0
  int v412; // r0
  _DWORD **v413; // r1
  int v414; // r12
  int v415; // r0
  int v416; // r2
  bool v417; // zf
  _DWORD *v418; // r3
  int v419; // r5
  int v420; // r2
  int v421; // r1
  int v422; // r5
  int v423; // r4
  int v424; // r4
  __int16 *v425; // r3
  int v426; // [sp+0h] [bp-8Ch] BYREF
  int *v427; // [sp+4h] [bp-88h]
  int *v428; // [sp+10h] [bp-7Ch] BYREF
  signed int v429; // [sp+14h] [bp-78h]
  __int64 v430; // [sp+18h] [bp-74h]
  int *v431; // [sp+20h] [bp-6Ch]
  int v432; // [sp+24h] [bp-68h]
  const char **v433; // [sp+28h] [bp-64h]
  struct obstack *obstack; // [sp+2Ch] [bp-60h]
  void **p_src; // [sp+30h] [bp-5Ch]
  size_t p_chunk; // [sp+34h] [bp-58h]
  char *s2; // [sp+38h] [bp-54h]
  int v438; // [sp+3Ch] [bp-50h]
  __int64 v439; // [sp+40h] [bp-4Ch] BYREF
  int v440; // [sp+48h] [bp-44h] BYREF
  int v441; // [sp+4Ch] [bp-40h]
  void *src; // [sp+50h] [bp-3Ch] BYREF
  size_t n; // [sp+54h] [bp-38h] BYREF
  _BYTE v444[20]; // [sp+58h] [bp-34h] BYREF

  v3 = (const char **)a1;
  v4 = *a1;
  v5 = **a1;
  v6 = v5 == 40;
  if ( v5 != 40 )
    v6 = v5 == 45;
  v7 = v5 - 48;
  v8 = v6;
  if ( v7 <= 9 )
    v9 = v8 | 1;
  else
    v9 = v8;
  if ( v9 )
  {
    if ( sub_2065BC(a1, &v440) )
      goto LABEL_16;
    v10 = *v3;
    if ( **v3 != 61 )
    {
      v12 = sub_206770(&v440, (int)a2);
      v13 = (int *)v12;
      if ( !**(_BYTE **)(v12 + 24) )
        sub_205BE0(v12, &v440);
      return (int)v13;
    }
    v11 = (unsigned __int8 *)(v10 + 2);
    *v3 = v10 + 2;
  }
  else
  {
    v11 = v4 + 1;
    *a1 = v4 + 1;
    v441 = -1;
    v440 = -1;
  }
  v16 = 0;
  v17 = v11;
  v18 = 0;
  v438 = -1;
  while ( 2 )
  {
    v19 = *(v17 - 1);
    switch ( *(v17 - 1) )
    {
      case '#':
        if ( *v17 != 35 )
        {
          v51 = sub_2067B4(v3, a2);
          if ( **v3 != 44 )
            goto LABEL_16;
          ++*v3;
          v52 = sub_2067B4(v3, a2);
          v53 = sub_20A110(v3, a2, (char *)&v439 + 4, &src);
          v14 = (int)a2;
          if ( v53 )
          {
            v13 = (int *)sub_206770(&v440, (int)a2);
            sub_170C60((int)v13, v51, v52, v53, SWORD2(v439), (int)src);
            goto LABEL_66;
          }
          return sub_205CA0((_BYTE **)v3, v14);
        }
        *v3 = (const char *)(v17 + 1);
        v210 = sub_2067B4(v3, a2);
        v211 = *v3;
        v212 = v210;
        ++*v3;
        if ( *v211 != 59 && dword_47AC88 > 0 )
          sub_F43B4(&off_46D334, "invalid (minimal) member type data format at symtab pos %d.", dword_478988);
        sub_170694(v212);
        v13 = v213;
        if ( v440 == -1 )
          goto LABEL_66;
        goto LABEL_112;
      case '&':
        v54 = sub_2067B4(v3, a2);
        v55 = sub_2062E0(&v440, (int)a2);
        v13 = (int *)((int (__fastcall *)(int, int *, int))loc_1700D8)(v54, v55, 18);
        goto LABEL_66;
      case '(':
      case '-':
      case '0':
      case '1':
      case '2':
      case '3':
      case '4':
      case '5':
      case '6':
      case '7':
      case '8':
      case '9':
        *v3 = (const char *)(v17 - 1);
        v13 = (int *)sub_206770(&v440, (int)a2);
        *(_BYTE *)v13[6] = 23;
        v151 = sub_2067B4(v3, a2);
        if ( v13 == (int *)v151 )
        {
          *(_BYTE *)v13[6] = 10;
          v13[5] = 1;
        }
        else
        {
          if ( v438 >= 0 )
            LOBYTE(v18) = v18 | 1;
          if ( (v18 & 1) == 0 )
          {
            v152 = v13[6];
            v153 = *(_BYTE *)(v152 + 1);
            *(_DWORD *)(v152 + 20) = v151;
            *(_BYTE *)(v152 + 1) = v153 | 8;
            return (int)v13;
          }
          ((void (__fastcall *)(int *, int))loc_170574)(v13, v151);
          v233 = v13[6];
          *(_DWORD *)(v233 + 8) = 0;
          *(_DWORD *)(v233 + 12) = 0;
        }
        goto LABEL_67;
      case '*':
        v154 = (_DWORD *)sub_2067B4(v3, a2);
        v155 = sub_2062E0(&v440, (int)a2);
        v13 = sub_170090(v154, (_DWORD **)v155);
        goto LABEL_66;
      case '@':
        v75 = *v17;
        v76 = v75 == 45;
        if ( v75 != 45 )
          v76 = v75 == 40;
        v77 = v76;
        if ( (unsigned int)(v75 - 48) <= 9 )
          v77 |= 1u;
        if ( v77 )
        {
          v292 = sub_2067B4(v3, a2);
          if ( **v3 == 44 )
          {
            ++*v3;
            v293 = sub_2067B4(v3, a2);
            v13 = (int *)sub_206770(&v440, (int)a2);
            sub_170B6C((int)v13, v292, v293);
            goto LABEL_66;
          }
LABEL_16:
          v14 = (int)a2;
          return sub_205CA0((_BYTE **)v3, v14);
        }
        if ( v75 == 59 )
        {
          v78 = v17;
        }
        else
        {
          if ( !*v17 )
            goto LABEL_16;
          v78 = v17;
          while ( 1 )
          {
            *v3 = ++v78;
            if ( *v78 == 59 )
              break;
            if ( !*v78 )
              goto LABEL_16;
          }
        }
        v79 = v78 + 1;
        *v3 = v79;
        v80 = *v17;
        switch ( v80 )
        {
          case 'V':
            v16 = 1;
            break;
          case 's':
            v234 = strtol((const char *)v17 + 1, 0, 10);
            if ( v234 <= 0 )
              v235 = -1;
            v438 = v234;
            v79 = *v3;
            if ( v234 <= 0 )
              v438 = v235;
            break;
          case 'S':
            v18 = 1;
            break;
        }
        v17 = (unsigned __int8 *)(v79 + 1);
        *v3 = v79 + 1;
        continue;
      case 'B':
        v81 = sub_2067B4(v3, a2);
        v82 = *(_DWORD *)(v81 + 16);
        v83 = sub_2062E0(&v440, (int)a2);
        v13 = (int *)((int (__fastcall *)(int, int, int, int *))loc_170478)(v82 & 1, 1, v81, v83);
        goto LABEL_66;
      case 'R':
        v156 = sub_2058D4((unsigned __int8 **)v3, 59, (int *)&src, 0);
        if ( src )
          goto LABEL_226;
        v157 = sub_2058D4((unsigned __int8 **)v3, 59, (int *)&src, 0);
        if ( src )
          goto LABEL_226;
        v158 = 8 * v157;
        src = (void *)(8 * v157);
        if ( (unsigned int)(v156 - 3) <= 2 )
        {
          v236 = sub_206724((int)a2, v158 >> 1);
          v13 = (int *)sub_173644((int)a2, 0, v236);
        }
        else
        {
          v13 = (int *)sub_206724((int)a2, v158);
        }
        goto LABEL_111;
      case 'S':
        v159 = (_DWORD *)sub_2067B4(v3, a2);
        v13 = (int *)sub_171C30(0, v159);
        goto LABEL_111;
      case 'a':
        if ( *v17 != 114 )
          goto LABEL_16;
        *v3 = (const char *)(v17 + 1);
        v56 = sub_206770(&v440, (int)a2);
        v57 = (char *)sub_2067B4(v3, a2);
        v58 = *v3;
        s2 = v57;
        if ( *v58 != 59 )
          goto LABEL_309;
        *v3 = v58 + 1;
        v59 = *((unsigned __int8 *)v58 + 1);
        v60 = v59 > 0x2D;
        if ( v59 != 45 )
          v60 = v59 - 48 > 9;
        if ( v60 )
        {
          v61 = 1;
          *v3 = v58 + 2;
        }
        else
        {
          v61 = 0;
        }
        v62 = v60 ? 1 : v61;
        v63 = sub_2058D4((unsigned __int8 **)v3, 59, (int *)&src, 0);
        if ( src )
          goto LABEL_309;
        v64 = *(unsigned __int8 *)*v3;
        v65 = v64 > 0x2D;
        if ( v64 != 45 )
          v65 = v64 - 48 > 9;
        v66 = v65;
        if ( v65 )
        {
          ++*v3;
          sub_2058D4((unsigned __int8 **)v3, 59, (int *)&src, 0);
          v63 = (int)src;
          if ( !src )
          {
            v308 = sub_2067B4(v3, a2);
            v68 = -1;
            p_chunk = v308;
LABEL_91:
            v69 = (_DWORD *)sub_171928(0, s2, v63, v63 >> 31, v68, v68 >> 31);
            v13 = (int *)sub_172124(v56, (_DWORD *)p_chunk, v69);
            goto LABEL_92;
          }
        }
        else
        {
          p_src = (void **)sub_2058D4((unsigned __int8 **)v3, 59, (int *)&src, v66);
          if ( !src )
          {
            v67 = sub_2067B4(v3, a2);
            v68 = (int)p_src;
            if ( v62 )
            {
              v63 = 0;
              v68 = -1;
            }
            p_chunk = v67;
            goto LABEL_91;
          }
        }
LABEL_309:
        v13 = (int *)sub_205CA0((_BYTE **)v3, (int)a2);
LABEL_92:
        if ( v18 )
          *(_BYTE *)v13[6] = 13;
        if ( v16 )
          sub_170874((int)v13);
        goto LABEL_66;
      case 'b':
        v70 = *v17;
        if ( v70 == 115 )
        {
          v71 = 0;
        }
        else
        {
          if ( v70 != 117 )
            goto LABEL_226;
          v71 = 1;
        }
        *v3 = (const char *)(v17 + 1);
        v72 = v17[1];
        if ( v72 == 99 )
        {
          v73 = 0;
          *v3 = (const char *)(v17 + 2);
        }
        else
        {
          v73 = v72 == 98;
          if ( v72 == 98 )
            *v3 = (const char *)(v17 + 2);
        }
        sub_2058D4((unsigned __int8 **)v3, 59, (int *)&src, 0);
        if ( src )
          goto LABEL_226;
        sub_2058D4((unsigned __int8 **)v3, 59, (int *)&src, 0);
        if ( src )
          goto LABEL_226;
        v74 = sub_2058D4((unsigned __int8 **)v3, 0, (int *)&src, 0);
        if ( src )
          goto LABEL_226;
        if ( **v3 == 59 )
          ++*v3;
        if ( v74 )
        {
          if ( v73 )
            v13 = (int *)sub_1735BC((int)a2, v74, v71);
          else
            v13 = (int *)sub_173564((int)a2, v74, v71);
          goto LABEL_111;
        }
        v312 = ((int (__fastcall *)(struct obstack *, int, int, _DWORD))loc_1734E0)(a2, 10, 8, 0);
        v13 = (int *)v312;
        if ( !v71 )
          goto LABEL_111;
        v6 = v440 == -1;
        *(_BYTE *)(*(_DWORD *)(v312 + 24) + 1) |= 1u;
        if ( !v6 )
          goto LABEL_112;
        goto LABEL_67;
      case 'e':
        v13 = (int *)sub_206770(&v440, (int)a2);
        v431 = &dword_4788F0;
        v124 = sub_1B7250((int)a2);
        v126 = *v3;
        LODWORD(v430) = v124;
        v432 = dword_4788F0;
        if ( dword_4788F0 )
          v127 = *(_DWORD *)(dword_4788F0 + 4);
        else
          v127 = 0;
        v429 = v127;
        v128 = *(unsigned __int8 *)v126;
        if ( v128 == 45 )
        {
          while ( 1 )
          {
            *v3 = v126 + 1;
            if ( v126[1] == 58 )
              break;
            ++v126;
          }
          v125 = (unsigned __int8 *)(v126 + 2);
          *v3 = v126 + 2;
          v128 = *((unsigned __int8 *)v126 + 2);
          v126 += 2;
        }
        switch ( v128 )
        {
          case 0:
            goto LABEL_276;
          case 59:
            v165 = 0;
            v129 = -1;
            LOWORD(v148) = 0;
            s2 = (char *)1;
            goto LABEL_321;
          case 44:
LABEL_276:
            v165 = 0;
            LOWORD(v148) = 0;
            v129 = -1;
            v13[5] = ((int (__fastcall *)(_DWORD, unsigned __int8 *, const char *))loc_165E68)(v430, v125, v126) / 8;
            sub_2066E0(v13);
            v166 = v13[6];
            v209 = *(_BYTE *)(v166 + 1);
            *(_BYTE *)v166 = 5;
            *(_BYTE *)(v166 + 1) = v209 & 0xFB;
            goto LABEL_277;
        }
        v129 = 0;
        v433 = (const char **)&off_478984;
        p_chunk = (size_t)&a2[1].chunk;
        s2 = (char *)1;
        obstack = (struct obstack *)&dword_4788E0;
        p_src = &src;
        v428 = v13;
        while ( 1 )
        {
          if ( v128 == 92 || v128 == 63 && !v126[1] )
          {
            v130 = (const char *)((int (__fastcall *)(struct obstack *))*v433)(a2);
            *v3 = v130;
          }
          else
          {
            v130 = *v3;
          }
          v131 = v130;
          if ( *v130 == 58 )
          {
            v134 = 1;
            v133 = 0;
          }
          else
          {
            do
              v132 = *(unsigned __int8 *)++v131;
            while ( v132 != 58 );
            v133 = v131 - v130;
            v134 = v131 - v130 + 1;
          }
          chunk_limit = a2[1].chunk_limit;
          if ( a2[1].temp.tempint - (int)chunk_limit < v134 )
          {
            obstack_newchunk((struct obstack *)p_chunk, v134);
            chunk_limit = a2[1].chunk_limit;
            v130 = *v3;
          }
          v136 = v131 + 1;
          memcpy(chunk_limit, v130, v133);
          v137 = a2[1].chunk_limit;
          a2[1].chunk_limit = &v137[v133 + 1];
          v137[v133] = 0;
          v138 = a2[1].chunk_limit;
          next_free = a2[1].next_free;
          tempint = (char *)a2[1].temp.tempint;
          v141 = next_free == v138;
          if ( next_free == v138 )
            LOBYTE(v137) = a2[2].chunk_size;
          v142 = (unsigned int)&v138[(unsigned int)a2[1].chunkfun] & ~(int)a2[1].chunkfun;
          a2[1].chunk_limit = (char *)v142;
          if ( v141 )
            LOBYTE(a2[2].chunk_size) = (unsigned __int8)v137 | 2;
          v143 = (int *)p_src;
          if ( v142 - (unsigned int)a2[1].object_base > tempint - a2[1].object_base )
          {
            v142 = (int)tempint;
            a2[1].chunk_limit = tempint;
          }
          a2[1].next_free = (char *)v142;
          *v3 = v136;
          v144 = sub_2058D4((unsigned __int8 **)v3, 44, v143, 0);
          if ( src )
          {
            v13 = (int *)sub_205CA0((_BYTE **)v3, (int)a2);
            if ( v440 != -1 )
LABEL_257:
              *sub_2062E0(&v440, (int)a2) = (int)v13;
LABEL_66:
            if ( v13 )
              goto LABEL_67;
            sub_946B0("GDB internal error, type is NULL in stabsread.c.");
            goto LABEL_16;
          }
          v145 = sub_220854(a2);
          *(_DWORD *)v145 = next_free;
          LODWORD(v146) = v144;
          ((void (*)(void))loc_21AEC4)();
          v147 = s2;
          if ( v144 < 0 )
            v147 = 0;
          *(_BYTE *)(v145 + 32) = 9;
          HIDWORD(v146) = v144 >> 31;
          *(_QWORD *)(v145 + 8) = v146;
          s2 = v147;
          sub_E5AA8((_DWORD *)v145, (_DWORD **)&dword_4788F0);
          v126 = *v3;
          v148 = v129 + 1;
          v128 = *(unsigned __int8 *)*v3;
          if ( !**v3 )
          {
LABEL_232:
            v13 = v428;
            v165 = 24 * v148;
            goto LABEL_233;
          }
          if ( v128 == 59 )
            break;
          if ( v128 == 44 )
            goto LABEL_232;
          ++v129;
        }
        v13 = v428;
        v165 = 24 * v148;
LABEL_321:
        *v3 = v126 + 1;
LABEL_233:
        v13[5] = ((int (__fastcall *)(_DWORD))loc_165E68)(v430) / 8;
        sub_2066E0(v13);
        v166 = v13[6];
        v167 = s2;
        *(_BYTE *)v166 = 5;
        *(_BYTE *)(v166 + 1) &= ~4u;
        if ( v167 )
LABEL_277:
          *(_BYTE *)(v166 + 1) |= 1u;
        v168 = *(_BYTE *)(v166 + 2);
        *(_WORD *)(v166 + 4) = v148;
        if ( (v168 & 0x10) != 0 )
        {
          v169 = *(_DWORD *)(v166 + 16);
          v170 = *(_DWORD *)(v169 + 64);
          v171 = *(_DWORD *)(v169 + 60);
          v172 = v170 - v171;
          if ( v170 - v171 < v165 )
          {
            obstack_newchunk((struct obstack *)(v169 + 48), v165);
            v171 = *(_DWORD *)(v169 + 60);
            v170 = *(_DWORD *)(v169 + 64);
          }
          v173 = *(void **)(v169 + 56);
          v174 = (void *)(v171 + v165);
          v175 = *(_DWORD *)(v169 + 72);
          *(_DWORD *)(v169 + 60) = v174;
          v176 = v174 == v173;
          if ( v174 == v173 )
            v172 = *(_BYTE *)(v169 + 88);
          v177 = ((unsigned int)v174 + v175) & ~v175;
          *(_DWORD *)(v169 + 60) = v177;
          if ( v176 )
            *(_BYTE *)(v169 + 88) = v172 | 2;
          if ( v177 - *(_DWORD *)(v169 + 52) > (unsigned int)(v170 - *(_DWORD *)(v169 + 52)) )
          {
            v177 = v170;
            *(_DWORD *)(v169 + 60) = v170;
          }
          *(_DWORD *)(v169 + 56) = v177;
        }
        else
        {
          v173 = sub_93028(v165);
        }
        *(_DWORD *)(v13[6] + 24) = v173;
        memset(v173, 0, v165);
        v178 = *v431;
        if ( *v431 )
        {
          p_src = (void **)v3;
          obstack = a2;
          v179 = v432;
          v180 = v429;
          do
          {
            v181 = *(_DWORD *)(v178 + 4);
            if ( v179 == v178 )
              v182 = v180;
            else
              v182 = 0;
            if ( v181 > v182 )
            {
              v183 = v13[6];
              v184 = v178 + 8 + 4 * v182;
              s2 = *(char **)(v178 + 4);
              v185 = *(_DWORD *)(v183 + 24);
              v186 = v178 + 4 * v181 + 8;
              p_chunk = v182;
              v187 = v185 + 24 * v129;
              do
              {
                v188 = *(_DWORD *)(v186 - 4);
                v186 -= 4;
                v187 -= 24;
                *(_DWORD *)(v188 + 24) = v13;
                v189 = *(_BYTE *)(v187 + 32) & 0xF1 | 2;
                *(_DWORD *)(v187 + 40) = *(_DWORD *)v188;
                v190 = *(_QWORD *)(v188 + 8);
                *(_BYTE *)(v187 + 32) = v189;
                v191 = *(_DWORD *)(v187 + 32);
                *(_QWORD *)(v187 + 24) = v190;
                *(_DWORD *)(v187 + 32) = v191 & 0xF;
              }
              while ( v186 != v184 );
              v129 = v129 - (_DWORD)s2 + p_chunk;
            }
            if ( v179 == v178 )
              break;
            v178 = *(_DWORD *)v178;
          }
          while ( v178 );
          v3 = (const char **)p_src;
          a2 = obstack;
        }
        if ( v440 != -1 )
          goto LABEL_257;
LABEL_67:
        if ( v438 == -1 )
          return (int)v13;
        v13[5] = (v438 + 7) >> 3;
        return (int)v13;
      case 'f':
        v149 = sub_2067B4(v3, a2);
        v150 = sub_2062E0(&v440, (int)a2);
        v13 = (int *)sub_170244(v149, v150);
        goto LABEL_66;
      case 'g':
        v84 = (const char *)v17;
        v85 = sub_2067B4(v3, a2);
        v86 = sub_2062E0(&v440, (int)a2);
        v13 = (int *)sub_170244(v85, v86);
        v87 = (int *)*(unsigned __int8 *)*v3;
        if ( !**v3 )
        {
          if ( dword_47AC88 > 0 )
          {
            v289 = v84 - 1;
            v193 = *(unsigned __int8 *)*v3;
            sub_F43B4(&off_46D334, "Prototyped function type didn't end arguments with `#':\n%s", v289);
            v194 = v193;
            v92 = (int *)v193;
            v88 = -1;
          }
          else
          {
            LOWORD(v193) = *(unsigned __int8 *)*v3;
            v88 = -1;
            v194 = *(unsigned __int8 *)*v3;
            v92 = v87;
          }
          goto LABEL_262;
        }
        if ( v87 == (int *)35 )
        {
          LOWORD(v193) = 0;
          ++*v3;
          v92 = 0;
          v194 = 0;
          v88 = -1;
          goto LABEL_262;
        }
        v88 = 0;
        v89 = 0;
        while ( 2 )
        {
          v90 = sub_2067B4(v3, a2);
          v91 = *v3;
          v92 = &v426;
          v426 = v90;
          v427 = v89;
          if ( *v91 )
          {
            v89 = &v426;
            if ( *v91 != 35 )
            {
              ++v88;
              continue;
            }
            v192 = v88 + 1;
            *v3 = v91 + 1;
          }
          else
          {
            v192 = v88 + 1;
            if ( dword_47AC88 > 0 )
              sub_F43B4(&off_46D334, "Prototyped function type didn't end arguments with `#':\n%s", v84 - 1);
          }
          break;
        }
        LOWORD(v193) = (_WORD)v427;
        if ( v427 || **(_BYTE **)(v426 + 24) != 10 )
        {
          LOWORD(v193) = v192;
          v194 = 24 * v192;
        }
        else
        {
          v88 = -1;
          v194 = (unsigned int)v427;
        }
LABEL_262:
        v195 = v13[6];
        if ( (*(_BYTE *)(v195 + 2) & 0x10) != 0 )
        {
          v196 = *(_DWORD *)(v195 + 16);
          v197 = *(_DWORD *)(v196 + 64);
          v198 = *(_DWORD *)(v196 + 60);
          v199 = v197 - v198;
          if ( v197 - v198 < v194 )
          {
            obstack_newchunk((struct obstack *)(v196 + 48), v194);
            v198 = *(_DWORD *)(v196 + 60);
            v197 = *(_DWORD *)(v196 + 64);
          }
          v200 = *(void **)(v196 + 56);
          v201 = (void *)(v198 + v194);
          v202 = *(_DWORD *)(v196 + 72);
          *(_DWORD *)(v196 + 60) = v201;
          v203 = v201 == v200;
          if ( v201 == v200 )
            v199 = *(_BYTE *)(v196 + 88);
          v204 = ((unsigned int)v201 + v202) & ~v202;
          *(_DWORD *)(v196 + 60) = v204;
          if ( v203 )
            *(_BYTE *)(v196 + 88) = v199 | 2;
          if ( v204 - *(_DWORD *)(v196 + 52) > (unsigned int)(v197 - *(_DWORD *)(v196 + 52)) )
          {
            v204 = v197;
            *(_DWORD *)(v196 + 60) = v197;
          }
          *(_DWORD *)(v196 + 56) = v204;
        }
        else
        {
          v200 = sub_93028(v194);
        }
        *(_DWORD *)(v13[6] + 24) = v200;
        memset(v200, 0, v194);
        v205 = v13[6];
        if ( v92 )
        {
          v206 = *(_DWORD *)(v205 + 24) + 24 * v88;
          do
          {
            v207 = *v92;
            v92 = (int *)v92[1];
            v206 -= 24;
            *(_DWORD *)(v206 + 36) = v207;
          }
          while ( v92 );
        }
        v208 = *(_BYTE *)(v205 + 1);
        *(_WORD *)(v205 + 4) = v193;
        *(_BYTE *)(v205 + 1) = v208 | 0x20;
        goto LABEL_67;
      case 'k':
        v93 = sub_2067B4(v3, a2);
        v94 = *(_DWORD *)(v93 + 16);
        v95 = sub_2062E0(&v440, (int)a2);
        v13 = (int *)((int (__fastcall *)(int, unsigned int, int, int *))loc_170478)(1, (v94 >> 1) & 1, v93, v95);
        goto LABEL_66;
      case 'r':
        p_src = &src;
        v96 = sub_1B7250((int)a2);
        v97 = *v3;
        v98 = sub_2065BC((unsigned __int8 **)v3, (int *)&src);
        if ( v98 )
          goto LABEL_226;
        if ( src == (void *)v440 )
          v98 = n - v441;
        v99 = *v3;
        if ( src == (void *)v440 )
          v98 = v98 == 0;
        v100 = *(unsigned __int8 *)v99;
        if ( v100 == 61 )
        {
          *v3 = v97;
          v247 = sub_2067B4(v3, a2);
          v99 = *v3;
          v101 = v247;
          v100 = *(unsigned __int8 *)*v3;
        }
        else
        {
          v101 = 0;
        }
        v102 = v438;
        if ( v100 == 59 )
          *v3 = v99 + 1;
        v103 = sub_2058D4((unsigned __int8 **)v3, 59, (int *)&v439, v102);
        v104 = sub_2058D4((unsigned __int8 **)v3, 59, (int *)&v439 + 1, v102);
        v105 = v104;
        if ( (_DWORD)v439 == -1 )
          goto LABEL_226;
        v106 = HIDWORD(v439);
        if ( HIDWORD(v439) == -1 )
          goto LABEL_226;
        if ( v101 )
          goto LABEL_153;
        v248 = v439 | HIDWORD(v439);
        if ( v439 )
        {
          if ( (int)v439 < SHIDWORD(v439) )
            v249 = HIDWORD(v439);
          else
            v249 = v439;
          if ( v438 >= v249 )
          {
            v106 = v438;
            v366 = (int)v439 > SHIDWORD(v439);
            if ( v438 != (_DWORD)v439 )
              v366 = 0;
            v101 = !v366;
            goto LABEL_353;
          }
          if ( (_DWORD)v439 )
          {
            if ( HIDWORD(v439) )
            {
              v106 = HIDWORD(v439) + 1;
              if ( (_DWORD)v439 == HIDWORD(v439) + 1 )
              {
LABEL_353:
                v13 = (int *)sub_173564((int)a2, v106, v101);
                goto LABEL_111;
              }
            }
            else
            {
              v406 = (_DWORD)v439 == 32;
              if ( (_DWORD)v439 == 32 )
                v406 = v104 == 0x7FFFFFFF;
              if ( v406 )
              {
                v106 = 32;
                goto LABEL_353;
              }
            }
          }
          else
          {
            v364 = v103 == 0;
            if ( !HIDWORD(v439) )
              v364 = 0;
            if ( v364 )
            {
              v101 = 1;
              goto LABEL_353;
            }
          }
LABEL_226:
          v13 = (int *)sub_205CA0((_BYTE **)v3, (int)a2);
          goto LABEL_111;
        }
        v367 = v103 == 0;
        if ( (v367 & v98) != 0 )
        {
          if ( !v104 )
          {
            v13 = (int *)((int (__fastcall *)(struct obstack *, int, int, _DWORD))loc_1734E0)(a2, 10, 8, 0);
            goto LABEL_111;
          }
          if ( v104 != -1 )
          {
            if ( v104 == 127 )
            {
              v13 = (int *)sub_173564((int)a2, 8, 0);
              v6 = v440 == -1;
              *(_BYTE *)(v13[6] + 1) |= 2u;
              if ( v6 )
                goto LABEL_67;
LABEL_112:
              *sub_2062E0(&v440, (int)a2) = (int)v13;
              goto LABEL_66;
            }
            goto LABEL_510;
          }
        }
        else
        {
          v409 = v104 == 0;
          if ( v103 > 0 && v104 == 0 )
          {
            v411 = sub_206724((int)a2, 8 * v103);
            v13 = (int *)v411;
            if ( v98 )
              v13 = (int *)sub_173644((int)a2, 0, v411);
LABEL_111:
            if ( v440 == -1 )
              goto LABEL_66;
            goto LABEL_112;
          }
          if ( !v367 || v105 != -1 )
          {
            if ( v103 )
            {
              if ( (*(_DWORD *)&v409 & ((unsigned int)v103 >> 31)) != 0 )
              {
                if ( v98 || !(v103 + ((int (__fastcall *)(int))loc_165F58)(v96) / 8) )
                {
                  v13 = (int *)sub_173564((int)a2, -8 * v103, 0);
                  goto LABEL_111;
                }
                if ( v103 != -1 )
                  goto LABEL_344;
              }
              else
              {
                if ( v103 != ~v105 )
                  goto LABEL_153;
                if ( v105 == 127 )
                {
                  v13 = (int *)sub_173564((int)a2, 8, 0);
                  goto LABEL_111;
                }
              }
              if ( v105 == 0x7FFF )
              {
                v13 = (int *)sub_173564((int)a2, 16, 0);
                goto LABEL_111;
              }
              if ( v105 == 0x7FFFFFFF )
              {
                v13 = (int *)sub_173564((int)a2, 32, 0);
                goto LABEL_111;
              }
LABEL_153:
              if ( v98 )
              {
                v107 = *(_DWORD **)(sub_1780C4((int)a2) + 12);
LABEL_155:
                if ( !v107 )
                {
                  if ( dword_47AC88 > 0 )
                    sub_F43B4(&off_46D334, "base type %d of range type is not defined", n);
                  v107 = *(_DWORD **)(sub_1780C4((int)a2) + 12);
                }
                v13 = (int *)sub_171928(0, v107, v103, v103 >> 31, v105, v105 >> 31);
                goto LABEL_111;
              }
LABEL_344:
              v107 = (_DWORD *)*sub_2062E0((int *)p_src, (int)a2);
              goto LABEL_155;
            }
LABEL_510:
            if ( v105 < 0 )
            {
              v13 = (int *)sub_173564((int)a2, -8 * v105, 1);
              goto LABEL_111;
            }
            for ( i = v105; (unsigned __int8)i == 255; i >>= 8 )
              ++v248;
            if ( !i && ((v248 - 1) & v248) == 0 )
            {
              v13 = (int *)sub_173564((int)a2, 8 * v248, 1);
              goto LABEL_111;
            }
            goto LABEL_153;
          }
        }
        if ( v438 <= 0 )
          v421 = ((int (__fastcall *)(int))loc_165E68)(v96);
        else
          v421 = v438;
        v13 = (int *)sub_173564((int)a2, v421, 1);
        goto LABEL_111;
      case 's':
      case 'u':
        v108 = sub_206770(&v440, (int)a2);
        v13 = (int *)v108;
        if ( v19 == 115 )
        {
          v109 = 3;
        }
        else if ( v19 == 117 )
        {
          v109 = 4;
        }
        else
        {
          v109 = 0;
        }
        v110 = *(_DWORD *)(v108 + 24);
        src = 0;
        n = 0;
        if ( *(_BYTE *)v110 && (*(_BYTE *)(v110 + 1) & 4) == 0 )
        {
          sub_206648((int *)v110);
          goto LABEL_66;
        }
        v111 = (char *)sub_9253C((int)nullsub_39, 0);
        v112 = v13[6];
        s2 = v111;
        v113 = v111;
        v114 = *(_WORD *)(v112 + 2);
        v115 = *(_BYTE *)(v112 + 1);
        *(_BYTE *)v112 = v109;
        *(_DWORD *)(v112 + 28) = &word_3B4A2C;
        *(_WORD *)(v112 + 2) = v114 & 0xFC7F | 0x80;
        *(_BYTE *)(v112 + 1) = v115 & 0xFB;
        v13[5] = sub_2058D4((unsigned __int8 **)v3, 0, (int *)&v439 + 1, 0);
        v116 = (struct obstack *)HIDWORD(v439);
        if ( HIDWORD(v439) )
        {
          sub_92620(v113);
          v13 = (int *)sub_205CA0((_BYTE **)v3, (int)a2);
          goto LABEL_66;
        }
        sub_2066E0(v13);
        v117 = *v3;
        v118 = *(unsigned __int8 *)*v3;
        if ( v118 != 33 )
          goto LABEL_166;
        *v3 = v117 + 1;
        sub_173008((int)v13);
        v254 = sub_2058D4((unsigned __int8 **)v3, 44, (int *)&v439 + 1, 0);
        v255 = v13[6];
        if ( (*(_WORD *)(v255 + 2) & 0x380) == 0x80 )
        {
          v365 = *(__int16 **)(v255 + 28);
          v6 = HIDWORD(v439) == 0;
          *v365 = v254;
          if ( !v6 )
            goto LABEL_177;
          v256 = *v365;
        }
        else
        {
          v256 = v254;
          word_3B4A2C = v254;
          if ( HIDWORD(v439) )
            goto LABEL_177;
        }
        v257 = v256 >> 3;
        v258 = v257 + 1;
        if ( (*(_BYTE *)(v255 + 2) & 0x10) != 0 )
        {
          v259 = *(_DWORD *)(v255 + 16);
          v260 = *(_DWORD *)(v259 + 64);
          v261 = *(_DWORD *)(v259 + 60);
          v262 = v260 - v261;
          if ( v260 - v261 < v258 )
          {
            obstack_newchunk((struct obstack *)(v259 + 48), v258);
            v260 = *(_DWORD *)(v259 + 64);
            v261 = *(_DWORD *)(v259 + 60);
          }
          v263 = *(void **)(v259 + 56);
          v264 = (void *)(v261 + v258);
          v265 = *(_DWORD *)(v259 + 72);
          *(_DWORD *)(v259 + 60) = v264;
          v266 = v264 == v263;
          if ( v264 == v263 )
            v262 = *(_BYTE *)(v259 + 88);
          v267 = ((unsigned int)v264 + v265) & ~v265;
          *(_DWORD *)(v259 + 60) = v267;
          if ( v266 )
            *(_BYTE *)(v259 + 88) = v262 | 2;
          if ( v267 - *(_DWORD *)(v259 + 52) > (unsigned int)(v260 - *(_DWORD *)(v259 + 52)) )
            *(_DWORD *)(v259 + 60) = v260;
          *(_DWORD *)(v259 + 56) = *(_DWORD *)(v259 + 60);
        }
        else
        {
          v263 = sub_93028(v257 + 1);
        }
        v268 = v13[6];
        if ( (*(_WORD *)(v268 + 2) & 0x380) == 0x80 )
        {
          v269 = *(__int16 **)(v268 + 28);
          *((_DWORD *)v269 + 4) = v263;
        }
        else
        {
          dword_3B4A3C = (int)v263;
          v269 = &word_3B4A2C;
        }
        v270 = *v269;
        p_chunk = 2121000;
        p_src = (void **)&word_3B4A2C;
        v271 = 0;
        memset(v263, 0, (v270 >> 3) + 1);
        obstack = 0;
        break;
      case 'x':
        v20 = *v17;
        v21 = (const char *)v17;
        switch ( v20 )
        {
          case 's':
            goto LABEL_27;
          case 'u':
            p_chunk = 4;
            break;
          case 'e':
            p_chunk = 5;
            break;
          default:
            if ( dword_47AC88 > 0 )
            {
              p_chunk = 3;
              sub_F43B4(&off_46D334, "Unrecognized cross-reference type `%c'", v20);
              v21 = *v3;
            }
            else
            {
LABEL_27:
              p_chunk = 3;
            }
            break;
        }
        v22 = strchr(v21, 60);
        v23 = strchr(v21, 58);
        v24 = v23;
        if ( !v23 )
          goto LABEL_16;
        v25 = 1;
        if ( v22 )
          v25 = v22 >= v23;
        if ( v25 || v23[1] != 58 )
          goto LABEL_33;
        HIDWORD(v290) = (unsigned __int8)*v22;
        if ( !*v22 )
          goto LABEL_16;
        LODWORD(v290) = 0;
        while ( 1 )
        {
          if ( HIDWORD(v290) == 60 )
          {
            LODWORD(v290) = v290 + 1;
          }
          else if ( HIDWORD(v290) == 62 )
          {
            LODWORD(v290) = v290 - 1;
          }
          else if ( v290 == 0x3A00000000LL )
          {
            v24 = v22;
LABEL_33:
            v26 = v24 - v21 + 1;
            obstack = (struct obstack *)((char *)a2 + 48);
            if ( *(_DWORD *)(dword_4788E0 + 20) != 4 )
            {
LABEL_34:
              v27 = (char *)a2[1].temp.tempint;
              v28 = a2[1].chunk_limit;
              if ( v27 - v28 < v26 )
              {
                obstack_newchunk((struct obstack *)((char *)a2 + 48), v26);
                v28 = a2[1].chunk_limit;
                v27 = (char *)a2[1].temp.tempint;
              }
              v29 = a2[1].next_free;
              v30 = &v28[v26];
              chunkfun = a2[1].chunkfun;
              a2[1].chunk_limit = v30;
              v32 = v30 == v29;
              s2 = v29;
              if ( v30 == v29 )
                LOBYTE(v29) = a2[2].chunk_size;
              v33 = ((int)chunkfun + (_DWORD)v30) & ~(unsigned int)chunkfun;
              a2[1].chunk_limit = (char *)v33;
              if ( v32 )
                LOBYTE(a2[2].chunk_size) = (unsigned __int8)v29 | 2;
              if ( v33 - (unsigned int)a2[1].object_base > v27 - a2[1].object_base )
              {
                v33 = (int)v27;
                a2[1].chunk_limit = v27;
              }
              a2[1].next_free = (char *)v33;
              v34 = *v3;
              v35 = (char *)(*v3 + 1);
              if ( v24 <= v35 )
              {
                v38 = s2;
              }
              else
              {
                v36 = s2 - 1;
                do
                {
                  v37 = *v35++;
                  *++v36 = v37;
                }
                while ( v24 != v35 );
                v38 = &v24[~(unsigned int)v34 + (_DWORD)s2];
              }
              *v38 = 0;
LABEL_47:
              *v3 = v24 + 1;
              if ( !dword_4788F0 )
                goto LABEL_225;
              p_src = (void **)a2;
              v39 = p_chunk;
              v40 = off_46DBB8;
              v41 = (_DWORD *)dword_4788F0;
              while ( 1 )
              {
                v42 = v41[1];
                if ( v42 > 0 )
                  break;
LABEL_223:
                v41 = (_DWORD *)*v41;
                if ( !v41 )
                {
                  a2 = (struct obstack *)p_src;
LABEL_225:
                  v160 = sub_206770(&v440, (int)a2);
                  v161 = *(_DWORD *)(v160 + 24);
                  v162 = *(_WORD *)(v161 + 2);
                  v13 = (int *)v160;
                  *(_BYTE *)v161 = p_chunk;
                  v163 = *(_BYTE *)(v161 + 1);
                  v164 = s2;
                  *(_DWORD *)(v161 + 28) = &word_3B4A2C;
                  *(_WORD *)(v161 + 2) = v162 & 0xFC7F | 0x80;
                  *(_DWORD *)(v161 + 12) = v164;
                  *(_BYTE *)(v161 + 1) = v163 | 4;
                  sub_205BE0(v160, &v440);
                  return (int)v13;
                }
              }
              v43 = v41 + 1;
              v44 = 0;
              while ( 1 )
              {
                v46 = v43[1];
                ++v43;
                v45 = v46;
                v47 = *(unsigned __int8 *)(v46 + 32);
                if ( v40[4 * (v47 >> 3)] == 8 && (v47 & 7) == 2 && **(char **)(*(_DWORD *)(v45 + 24) + 24) == v39 )
                {
                  v48 = *(const char **)v45;
                  v438 = *(_DWORD *)(v45 + 24);
                  if ( !strcmp(v48, s2) )
                    break;
                }
                if ( ++v44 == v42 )
                  goto LABEL_223;
              }
              v49 = (int *)p_src;
              v13 = (int *)v438;
              v50 = s2;
              if ( p_src[13] >= s2 || p_src[16] <= s2 )
              {
                obstack_free(obstack, s2);
                v13 = *(int **)(v45 + 24);
              }
              else
              {
                p_src[14] = s2;
                v49[15] = (int)v50;
              }
              if ( v440 != -1 )
                *sub_2062E0(&v440, (int)v49) = (int)v13;
              return (int)v13;
            }
            v237 = (char *)memcpy(&v428, v21, v24 - v21);
            *((_BYTE *)&v428 + v24 - v21) = 0;
            sub_FFE48((int)&src, v237);
            v238 = n;
            if ( n )
            {
              v239 = a2[1].chunk_limit;
              if ( n + 1 > a2[1].temp.tempint - (int)v239 )
              {
                obstack_newchunk((struct obstack *)((char *)a2 + 48), n + 1);
                v239 = a2[1].chunk_limit;
              }
              memcpy(v239, src, v238);
              v240 = a2[1].chunk_limit;
              a2[1].chunk_limit = &v240[v238 + 1];
              v240[v238] = 0;
              v241 = *(_QWORD *)&a2[1].next_free;
              v242 = a2[1].chunkfun;
              v243 = (char *)a2[1].temp.tempint;
              v244 = HIDWORD(v241) == (_DWORD)v241;
              s2 = a2[1].next_free;
              if ( HIDWORD(v241) == (_DWORD)v241 )
                LOBYTE(v241) = a2[2].chunk_size;
              v245 = ((unsigned int)v242 + HIDWORD(v241)) & ~(unsigned int)v242;
              a2[1].chunk_limit = (char *)v245;
              if ( v244 )
                LOBYTE(a2[2].chunk_size) = v241 | 2;
              v246 = src;
              if ( v245 - (unsigned int)a2[1].object_base > v243 - a2[1].object_base )
              {
                v245 = (int)v243;
                a2[1].chunk_limit = v243;
              }
              a2[1].next_free = (char *)v245;
              if ( v246 != v444 )
                sub_339E64(v246);
              if ( s2 )
                goto LABEL_47;
            }
            else if ( src != v444 )
            {
              sub_339E64(src);
              v26 = v24 - *v3 + 1;
              goto LABEL_34;
            }
            v26 = v24 - *v3 + 1;
            goto LABEL_34;
          }
          v291 = (unsigned __int8)*++v22;
          HIDWORD(v290) = v291;
          if ( !v291 )
            goto LABEL_16;
        }
      default:
        *v3 = (const char *)(v17 - 1);
        return sub_205CA0((_BYTE **)v3, (int)a2);
    }
    break;
  }
  while ( 1 )
  {
    v283 = v13[6];
    if ( (*(_WORD *)(v283 + 2) & 0x380) == 0x80 )
      v284 = *(void ***)(v283 + 28);
    else
      v284 = p_src;
    if ( *(__int16 *)v284 <= v271 )
    {
      v117 = *v3;
      v116 = obstack;
      v118 = *(unsigned __int8 *)*v3;
LABEL_166:
      p_src = (void **)&off_478984;
      v119 = v117;
      p_chunk = (size_t)sub_205D28;
      obstack = (struct obstack *)&dword_47AC88;
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            while ( 1 )
            {
LABEL_167:
              v120 = v118 == 59;
              if ( v118 != 59 )
                v120 = v118 == 0;
              if ( v120 )
              {
                if ( *v117 == 58 && v117[1] == 58 )
LABEL_576:
                  src = *(void **)src;
LABEL_438:
                v313 = src;
                if ( src )
                {
                  v314 = 0;
                  do
                  {
                    v315 = v313[1];
                    v116 = (struct obstack *)((char *)v116 + 1);
                    v313 = (_DWORD *)*v313;
                    if ( v315 != 50 )
                      ++v314;
                  }
                  while ( v313 );
                }
                else
                {
                  v314 = 0;
                }
                v316 = v13[6];
                v317 = *(_BYTE *)(v316 + 2);
                p_chunk = 24 * (_DWORD)v116;
                *(_WORD *)(v316 + 4) = (_WORD)v116;
                if ( (v317 & 0x10) != 0 )
                {
                  v318 = *(_DWORD *)(v316 + 16);
                  v319 = *(_DWORD *)(v318 + 64);
                  v320 = *(_DWORD *)(v318 + 60);
                  if ( v319 - v320 < (unsigned int)(24 * (_DWORD)v116) )
                  {
                    obstack_newchunk((struct obstack *)(v318 + 48), 24 * (_DWORD)v116);
                    v319 = *(_DWORD *)(v318 + 64);
                    v320 = *(_DWORD *)(v318 + 60);
                  }
                  v321 = p_chunk;
                  v322 = *(void **)(v318 + 56);
                  v323 = *(_DWORD *)(v318 + 72);
                  v324 = (void *)(v320 + p_chunk);
                  v325 = v324 == v322;
                  *(_DWORD *)(v318 + 60) = v324;
                  if ( v324 == v322 )
                    v321 = *(_BYTE *)(v318 + 88);
                  v326 = ((unsigned int)v324 + v323) & ~v323;
                  *(_DWORD *)(v318 + 60) = v326;
                  if ( v325 )
                    *(_BYTE *)(v318 + 88) = v321 | 2;
                  if ( v326 - *(_DWORD *)(v318 + 52) > (unsigned int)(v319 - *(_DWORD *)(v318 + 52)) )
                    *(_DWORD *)(v318 + 60) = v319;
                  *(_DWORD *)(v318 + 56) = *(_DWORD *)(v318 + 60);
                }
                else
                {
                  v322 = sub_93028(p_chunk);
                }
                v327 = p_chunk;
                *(_DWORD *)(v13[6] + 24) = v322;
                memset(v322, 0, v327);
                if ( v314 )
                {
                  sub_173008((int)v13);
                  v372 = v13[6];
                  v373 = ((int)v116 >> 3) + 1;
                  if ( (*(_BYTE *)(v372 + 2) & 0x10) != 0 )
                  {
                    v374 = *(_DWORD *)(v372 + 16);
                    v375 = *(_DWORD *)(v374 + 64);
                    v376 = *(_DWORD *)(v374 + 60);
                    v377 = v375 - v376;
                    if ( v375 - v376 < v373 )
                    {
                      obstack_newchunk((struct obstack *)(v374 + 48), ((int)v116 >> 3) + 1);
                      v375 = *(_DWORD *)(v374 + 64);
                      v376 = *(_DWORD *)(v374 + 60);
                    }
                    v378 = *(void **)(v374 + 56);
                    v379 = (void *)(v376 + v373);
                    v380 = *(_DWORD *)(v374 + 72);
                    *(_DWORD *)(v374 + 60) = v379;
                    v381 = v379 == v378;
                    if ( v379 == v378 )
                      v377 = *(_BYTE *)(v374 + 88);
                    v382 = ((unsigned int)v379 + v380) & ~v380;
                    *(_DWORD *)(v374 + 60) = v382;
                    if ( v381 )
                      *(_BYTE *)(v374 + 88) = v377 | 2;
                    if ( v382 - *(_DWORD *)(v374 + 52) > (unsigned int)(v375 - *(_DWORD *)(v374 + 52)) )
                      *(_DWORD *)(v374 + 60) = v375;
                    *(_DWORD *)(v374 + 56) = *(_DWORD *)(v374 + 60);
                  }
                  else
                  {
                    v378 = sub_93028(((int)v116 >> 3) + 1);
                  }
                  v383 = v13[6];
                  if ( (*(_WORD *)(v383 + 2) & 0x380) == 0x80 )
                    *(_DWORD *)(*(_DWORD *)(v383 + 28) + 20) = v378;
                  else
                    dword_3B4A40 = (int)v378;
                  memset(v378, 0, ((int)v116 >> 3) + 1);
                  v384 = v13[6];
                  if ( (*(_BYTE *)(v384 + 2) & 0x10) != 0 )
                  {
                    v385 = *(_DWORD *)(v384 + 16);
                    v386 = *(_DWORD *)(v385 + 64);
                    v387 = *(_DWORD *)(v385 + 60);
                    v388 = v386 - v387;
                    if ( v386 - v387 < v373 )
                    {
                      obstack_newchunk((struct obstack *)(v385 + 48), ((int)v116 >> 3) + 1);
                      v386 = *(_DWORD *)(v385 + 64);
                      v387 = *(_DWORD *)(v385 + 60);
                    }
                    v389 = *(void **)(v385 + 56);
                    v390 = (void *)(v387 + v373);
                    v391 = *(_DWORD *)(v385 + 72);
                    *(_DWORD *)(v385 + 60) = v390;
                    v392 = v390 == v389;
                    if ( v390 == v389 )
                      v388 = *(_BYTE *)(v385 + 88);
                    v393 = ((unsigned int)v390 + v391) & ~v391;
                    *(_DWORD *)(v385 + 60) = v393;
                    if ( v392 )
                      *(_BYTE *)(v385 + 88) = v388 | 2;
                    if ( v393 - *(_DWORD *)(v385 + 52) > (unsigned int)(v386 - *(_DWORD *)(v385 + 52)) )
                      *(_DWORD *)(v385 + 60) = v386;
                    *(_DWORD *)(v385 + 56) = *(_DWORD *)(v385 + 60);
                  }
                  else
                  {
                    v389 = sub_93028(((int)v116 >> 3) + 1);
                  }
                  v394 = v13[6];
                  if ( (*(_WORD *)(v394 + 2) & 0x380) == 0x80 )
                    *(_DWORD *)(*(_DWORD *)(v394 + 28) + 24) = v389;
                  else
                    dword_3B4A44 = (int)v389;
                  memset(v389, 0, ((int)v116 >> 3) + 1);
                  v395 = v13[6];
                  if ( (*(_BYTE *)(v395 + 2) & 0x10) != 0 )
                  {
                    v396 = *(_DWORD *)(v395 + 16);
                    v397 = *(_DWORD *)(v396 + 64);
                    v398 = *(_DWORD *)(v396 + 60);
                    v399 = v397 - v398;
                    if ( v397 - v398 < v373 )
                    {
                      obstack_newchunk((struct obstack *)(v396 + 48), ((int)v116 >> 3) + 1);
                      v397 = *(_DWORD *)(v396 + 64);
                      v398 = *(_DWORD *)(v396 + 60);
                    }
                    v400 = *(void **)(v396 + 56);
                    v401 = (void *)(v398 + v373);
                    v402 = *(_DWORD *)(v396 + 72);
                    *(_DWORD *)(v396 + 60) = v401;
                    v403 = v401 == v400;
                    if ( v401 == v400 )
                      v399 = *(_BYTE *)(v396 + 88);
                    v404 = ((unsigned int)v401 + v402) & ~v402;
                    *(_DWORD *)(v396 + 60) = v404;
                    if ( v403 )
                      *(_BYTE *)(v396 + 88) = v399 | 2;
                    if ( v404 - *(_DWORD *)(v396 + 52) > (unsigned int)(v397 - *(_DWORD *)(v396 + 52)) )
                      *(_DWORD *)(v396 + 60) = v397;
                    *(_DWORD *)(v396 + 56) = *(_DWORD *)(v396 + 60);
                  }
                  else
                  {
                    v400 = sub_93028(((int)v116 >> 3) + 1);
                  }
                  v405 = v13[6];
                  if ( (*(_WORD *)(v405 + 2) & 0x380) == 0x80 )
                    *(_DWORD *)(*(_DWORD *)(v405 + 28) + 28) = v400;
                  else
                    dword_3B4A48 = (int)v400;
                  memset(v400, 0, ((int)v116 >> 3) + 1);
                }
                v328 = (int)&v116[-1] + 43;
                if ( v116 )
                {
                  v329 = src;
                  v330 = p_chunk - 24;
                  p_chunk = (size_t)&dword_47AC88;
                  p_src = (void **)"Unknown visibility `%c' for field";
                  obstack = (struct obstack *)&off_46D334;
                  v433 = v3;
                  v432 = (int)a2;
                  do
                  {
                    v331 = v13[6];
                    v332 = v329[3];
                    v333 = v329[4];
                    v334 = v329[5];
                    v335 = v329[1];
                    v336 = (_DWORD *)(*(_DWORD *)(v331 + 24) + v330);
                    *v336 = v329[2];
                    v336[1] = v332;
                    v336[2] = v333;
                    v336[3] = v334;
                    v336 += 4;
                    v337 = v329[7];
                    *v336 = v329[6];
                    v336[1] = v337;
                    switch ( v335 )
                    {
                      case '0':
                        v338 = v328 >> 3;
                        v361 = 1 << (v328 & 7);
                        if ( (*(_WORD *)(v331 + 2) & 0x380) == 0x80 )
                        {
                          v369 = *(_DWORD *)(*(_DWORD *)(v331 + 28) + 20);
                          v338 += v369;
                          v340 = v361 | *(_BYTE *)(v369 + (v328 >> 3));
                        }
                        else
                        {
                          v340 = v361 | *(_BYTE *)(v328 >> 3);
                        }
                        goto LABEL_460;
                      case '1':
                        v338 = v328 >> 3;
                        v339 = 1 << (v328 & 7);
                        if ( (*(_WORD *)(v331 + 2) & 0x380) == 0x80 )
                        {
                          v370 = *(_DWORD *)(*(_DWORD *)(v331 + 28) + 24);
                          v338 += v370;
                          v340 = v339 | *(_BYTE *)(v370 + (v328 >> 3));
                        }
                        else
                        {
                          v340 = v339 | *(_BYTE *)(v328 >> 3);
                        }
                        goto LABEL_460;
                      case '2':
                        break;
                      case '9':
                        v338 = v328 >> 3;
                        v362 = 1 << (v328 & 7);
                        if ( (*(_WORD *)(v331 + 2) & 0x380) == 0x80 )
                        {
                          v371 = *(_DWORD *)(*(_DWORD *)(v331 + 28) + 28);
                          v338 += v371;
                          v340 = v362 | *(_BYTE *)(v371 + (v328 >> 3));
                        }
                        else
                        {
                          v340 = v362 | *(_BYTE *)(v328 >> 3);
                        }
LABEL_460:
                        *(_BYTE *)v338 = v340;
                        v329 = src;
                        break;
                      default:
                        if ( *(int *)p_chunk > 0 )
                        {
                          sub_F43B4(obstack, (char *)p_src, v335);
                          v329 = src;
                        }
                        break;
                    }
                    v329 = (_DWORD *)*v329;
                    --v328;
                    v330 -= 24;
                    src = v329;
                  }
                  while ( v328 != -1 );
                  v3 = v433;
                  a2 = (struct obstack *)v432;
                }
                if ( !sub_209490(&n, v3, v13, a2) )
                  goto LABEL_177;
                v341 = v13[6];
                v342 = (_DWORD *)n;
                v343 = *(_WORD *)(v341 + 2) & 0x380;
                if ( v343 == 128 )
                  v344 = *(_DWORD *)(v341 + 28);
                else
                  v344 = 18988;
                if ( v343 != 128 )
                  HIWORD(v344) = 59;
                if ( n )
                {
                  v345 = *(_DWORD *)(v344 + 32);
                  v346 = 12 * (*(__int16 *)(v344 + 4) - 1);
                  do
                  {
                    v347 = v342[1];
                    v348 = v342[2];
                    v349 = v342[3];
                    v350 = (_DWORD *)(v345 + v346);
                    v346 -= 12;
                    v342 = (_DWORD *)*v342;
                    *v350 = v347;
                    v350[1] = v348;
                    v350[2] = v349;
                    n = (size_t)v342;
                  }
                  while ( v342 );
                }
                v351 = *v3;
                v352 = *(unsigned __int8 *)*v3;
                if ( v352 == 92 )
                {
LABEL_473:
                  v351 = (const char *)off_478984(a2);
                  *v3 = v351;
                }
                else if ( v352 == 63 )
                {
                  if ( v351[1] )
                    goto LABEL_178;
                  goto LABEL_473;
                }
                if ( *v351 == 59 )
                  *v3 = ++v351;
                if ( *v351 != 126 )
                  goto LABEL_178;
                *v3 = v351 + 1;
                v353 = *((unsigned __int8 *)v351 + 1);
                v354 = v353 == 43;
                if ( v353 != 43 )
                  v354 = (v353 & 0xEF) == 45;
                if ( v354 )
                  *v3 = v351 + 2;
                v355 = (*v3)++;
                if ( *v355 != 37 )
                  goto LABEL_178;
                v356 = sub_2067B4(v3, a2);
                v357 = (int *)(*v3)++;
                do
                {
                  v358 = *(unsigned __int8 *)v357;
                  v359 = v357;
                  v357 = (int *)((char *)v357 + 1);
                  if ( !v358 )
                    goto LABEL_177;
                }
                while ( v358 != 59 );
                p_src = (void **)v359;
                ((void (__fastcall *)(int *, int, int *))loc_1731A4)(v13, v356, v357);
                if ( v13 != (int *)v356 )
                {
                  v360 = ((int (__fastcall *)(int))loc_1724A0)(v356);
                  ((void (__fastcall *)(int *, int))loc_173104)(v13, v360);
                  goto LABEL_487;
                }
                v422 = v13[6];
                v423 = *(__int16 *)(v422 + 4);
                obstack = (struct obstack *)"_vptr$";
                v424 = v423 - 1;
                for ( p_chunk = 24 * v424; ; p_chunk -= 24 )
                {
                  v425 = (*(_WORD *)(v422 + 2) & 0x380) == 0x80 ? *(__int16 **)(v422 + 28) : &word_3B4A2C;
                  if ( *v425 > v424 )
                    break;
                  v433 = *(const char ***)(*(_DWORD *)(v422 + 24) + p_chunk + 16);
                  if ( !strncmp((const char *)v433, (const char *)obstack, 5u) )
                  {
                    if ( sub_10A844(*((unsigned __int8 *)v433 + 5)) )
                    {
                      ((void (__fastcall *)(int *, int))loc_173104)(v13, v424);
LABEL_487:
                      *v3 = (char *)p_src + 1;
LABEL_178:
                      sub_92620(s2);
                      goto LABEL_66;
                    }
                    v422 = *(_DWORD *)(v356 + 24);
                  }
                  --v424;
                }
                if ( dword_47AC88 > 0 )
                  sub_F43B4(
                    &off_46D334,
                    "virtual function table pointer not found when defining class `%s'",
                    *(const char **)(v13[6] + 8));
                goto LABEL_177;
              }
              if ( v118 == 92 || v118 == 63 && !v119[1] )
                *v3 = (const char *)((int (__fastcall *)(struct obstack *))*p_src)(a2);
              v121 = sub_93094(1u, 0x20u);
              sub_9253C(p_chunk, (int)v121);
              v122 = src;
              v117 = *v3;
              src = v121;
              *v121 = v122;
              if ( !sub_10A844(*(unsigned __int8 *)v117) || v117[1] == 95 )
                break;
              v123 = *v3;
              if ( (*v3)[1] != 118 )
                goto LABEL_175;
              v294 = *((unsigned __int8 *)v123 + 2);
              *v3 = v123 + 3;
              v295 = sub_2067B4(v3, a2);
              if ( v294 == 98 )
              {
                if ( !sub_170CC4(v295) && obstack->chunk_size > 0 )
                  sub_F43B4(&off_46D334, "C++ abbreviated type name unknown at symtab pos %d", dword_478988);
                v408 = src;
                v408[6] = sub_16351C((int)&a2[1].chunk, "_vb$");
              }
              else if ( v294 == 102 )
              {
                v296 = sub_170CC4(v295);
                v297 = src;
                v298 = "";
                if ( v296 )
                  v298 = (char *)v296;
                v297[6] = sub_16351C((int)&a2[1].chunk, "_vptr$", v298, 0);
              }
              else
              {
                if ( obstack->chunk_size > 0 )
                  sub_F43B4(&off_46D334, "invalid C++ abbreviation `%s'", *v3);
                v407 = src;
                v407[6] = sub_16351C((int)&a2[1].chunk, "INVALID_CPLUSPLUS_ABBREV", 0);
              }
              v299 = *v3;
              v123 = *v3 + 1;
              *v3 = v123;
              if ( *v299 != 58 )
              {
LABEL_175:
                if ( dword_47AC88 > 0 )
                  sub_F43B4(&off_46D334, "invalid C++ abbreviation `%s'", v123);
                goto LABEL_177;
              }
              v300 = src;
              v301 = sub_2067B4(v3, a2);
              v302 = *v3;
              v300[5] = v301;
              if ( *v302 != 44 )
                goto LABEL_177;
              v303 = src;
              *v3 = v302 + 1;
              v303[16] &= 0xF1u;
              v304 = sub_2058D4((unsigned __int8 **)v3, 59, (int *)&v439 + 1, 0);
              v305 = HIDWORD(v439);
              v306 = src;
              v6 = HIDWORD(v439) == 0;
              *((_QWORD *)src + 1) = v304;
              if ( !v6 )
                goto LABEL_177;
              v307 = v306[4];
              v306[1] = 48;
              v306[4] = v307 & 0xF | (16 * v305);
              v119 = *v3;
              v118 = *(unsigned __int8 *)*v3;
            }
            v214 = *(unsigned __int8 *)v117;
            if ( v214 != 58 )
            {
              while ( v214 )
              {
                v215 = *(unsigned __int8 *)++v117;
                v214 = v215;
                if ( v215 == 58 )
                  goto LABEL_289;
              }
LABEL_177:
              v13 = (int *)sub_205CA0((_BYTE **)v3, (int)a2);
              goto LABEL_178;
            }
LABEL_289:
            if ( v117[1] == 58 )
            {
              if ( *v117 == 58 )
                goto LABEL_576;
              goto LABEL_438;
            }
            v216 = sub_1B7250((int)a2);
            v217 = *v3;
            v432 = v216;
            v218 = a2[1].chunk_limit;
            v219 = v117 - v217;
            v220 = a2[1].temp.tempint - (_DWORD)v218;
            v433 = (const char **)src;
            if ( v220 < v117 - v217 + 1 )
            {
              obstack_newchunk((struct obstack *)((char *)a2 + 48), v117 - v217 + 1);
              v218 = a2[1].chunk_limit;
              v217 = *v3;
            }
            memcpy(v218, v217, v219);
            v221 = a2[1].chunk_limit;
            v222 = (int)&v221[v219 + 1];
            a2[1].chunk_limit = (char *)v222;
            v221[v219] = 0;
            v223 = a2[1].chunk_limit;
            v224 = a2[1].next_free;
            v225 = (char *)a2[1].temp.tempint;
            v226 = v224 == v223;
            v227 = src;
            if ( v224 == v223 )
              LOBYTE(v222) = a2[2].chunk_size;
            v228 = (unsigned int)&v223[(unsigned int)a2[1].chunkfun] & ~(int)a2[1].chunkfun;
            a2[1].chunk_limit = (char *)v228;
            if ( v226 )
              LOBYTE(a2[2].chunk_size) = v222 | 2;
            if ( v228 - (unsigned int)a2[1].object_base > v225 - a2[1].object_base )
            {
              v228 = (int)v225;
              a2[1].chunk_limit = v225;
            }
            a2[1].next_free = (char *)v228;
            v433[6] = v224;
            *v3 = v117 + 1;
            v229 = *((unsigned __int8 *)v117 + 1);
            v230 = v229 == 47;
            if ( v229 == 47 )
              v231 = (int)(v117 + 3);
            else
              v231 = 50;
            if ( v230 )
            {
              *v3 = (const char *)v231;
              v231 = *((unsigned __int8 *)v117 + 2);
            }
            v227[1] = v231;
            v232 = sub_2067B4(v3, a2);
            v119 = *v3;
            v227[5] = v232;
            v118 = *(unsigned __int8 *)v119;
            if ( v118 != 58 )
              break;
            v250 = (unsigned __int8 *)(v119 + 1);
            *v3 = v119 + 1;
            if ( v119[1] != 59 )
            {
              do
                v251 = *++v250;
              while ( v251 != 59 );
            }
            v252 = *((_BYTE *)src + 16);
            v433 = (const char **)src;
            *((_BYTE *)src + 16) = v252 & 0xF1 | 6;
            v253 = sub_93330(*v3, v250 - (unsigned __int8 *)*v3);
            v119 = (const char *)(v250 + 1);
            v433[2] = v253;
            *v3 = (const char *)(v250 + 1);
            v118 = v250[1];
          }
          if ( v118 == 44 )
            break;
          if ( obstack->chunk_size > 0 )
          {
            sub_F43B4(&off_46D334, "%s", "bad structure-type format");
            v119 = *v3;
            v118 = *(unsigned __int8 *)*v3;
          }
        }
        v309 = src;
        *v3 = v119 + 1;
        v309[16] &= 0xF1u;
        v310 = sub_2058D4((unsigned __int8 **)v3, 44, (int *)&v439 + 1, 0);
        v311 = HIDWORD(v439);
        v6 = HIDWORD(v439) == 0;
        *((_QWORD *)src + 1) = v310;
        if ( !v6 )
          break;
        v412 = sub_2058D4((unsigned __int8 **)v3, 59, (int *)&v439 + 1, v311);
        v413 = (_DWORD **)src;
        v6 = HIDWORD(v439) == 0;
        v414 = *((_DWORD *)src + 4) & 0xF | (16 * v412);
        *((_DWORD *)src + 4) = v414;
        if ( !v6 )
          break;
        if ( *((_QWORD *)v413 + 1) || (v414 & 0xFFFFFFF0) != 0 )
        {
          v415 = sub_171258(v413[5]);
          v416 = **(char **)(v415 + 24);
          v417 = (v416 & 0xFFFFFFFB) == 8;
          if ( (v416 & 0xFFFFFFFB) != 8 )
            v417 = (v416 & 0xFFFFFFEF) == 5;
          v418 = src;
          if ( !v417 )
            *((_DWORD *)src + 4) &= 0xFu;
          v419 = v418[4] >> 4;
          if ( v419 == 8 * *(_DWORD *)(v415 + 20) )
          {
LABEL_596:
            v420 = v418[2];
            v430 = v420 & 7;
            if ( (v420 & 7) == 0 )
              v418[4] &= 0xFu;
          }
          else if ( v416 == 5 && v419 == ((int (__fastcall *)(int))loc_165E68)(v432) )
          {
            v418 = src;
            goto LABEL_596;
          }
LABEL_432:
          v119 = *v3;
          v118 = *(unsigned __int8 *)*v3;
          goto LABEL_167;
        }
        v119 = *v3;
        v413[1] = (_DWORD *)57;
        v118 = *(unsigned __int8 *)v119;
      }
      if ( obstack->chunk_size > 0 )
        sub_F43B4(&off_46D334, "%s", "bad structure-type format");
      goto LABEL_432;
    }
    v285 = sub_93094(1u, 0x20u);
    sub_9253C(p_chunk, (int)v285);
    v286 = src;
    v276 = *v3;
    v287 = v285[4] & 0xF;
    src = v285;
    *v285 = v286;
    v285[4] = v287;
    v288 = *(unsigned __int8 *)v276;
    if ( v288 == 92 )
      goto LABEL_390;
    if ( v288 == 63 )
      break;
LABEL_391:
    if ( v288 == 48 )
      goto LABEL_378;
    if ( v288 == 49 )
    {
      v272 = v13[6];
      v273 = v271 >> 3;
      v274 = 1 << (v271 & 7);
      if ( (*(_WORD *)(v272 + 2) & 0x380) == 0x80 )
      {
        v363 = *(_DWORD *)(*(_DWORD *)(v272 + 28) + 16);
        v273 += v363;
        v275 = v274 | *(_BYTE *)(v363 + (v271 >> 3));
      }
      else
      {
        v275 = v274 | *(_BYTE *)(v271 >> 3);
      }
      *(_BYTE *)v273 = v275;
      v276 = *v3;
      goto LABEL_378;
    }
LABEL_393:
    if ( dword_47AC88 > 0 )
      sub_F43B4(&off_46D334, "Unknown virtual character `%c' for baseclass", v288);
    v276 = *v3;
LABEL_378:
    *v3 = v276 + 2;
    v277 = *((unsigned __int8 *)v276 + 1);
    v285[1] = v277;
    if ( (unsigned int)(v277 - 48) > 2 )
    {
      if ( dword_47AC88 > 0 )
        sub_F43B4(&off_46D334, "Unknown visibility `%c' for baseclass", v277);
      v285[1] = 50;
    }
    *((_BYTE *)v285 + 16) &= 0xF1u;
    v278 = sub_2058D4((unsigned __int8 **)v3, 44, (int *)&v439 + 1, 0);
    v279 = HIDWORD(v439);
    *((_QWORD *)v285 + 1) = v278;
    if ( v279 )
      goto LABEL_177;
    v280 = sub_2067B4(v3, a2);
    v285[5] = v280;
    v281 = sub_170CC4(v280);
    v282 = *v3;
    v285[6] = v281;
    if ( *v282 != 59 )
      goto LABEL_177;
    ++v271;
    *v3 = v282 + 1;
  }
  if ( v276[1] )
    goto LABEL_393;
LABEL_390:
  v276 = (const char *)off_478984(a2);
  *v3 = v276;
  v288 = *(unsigned __int8 *)v276;
  goto LABEL_391;
}
