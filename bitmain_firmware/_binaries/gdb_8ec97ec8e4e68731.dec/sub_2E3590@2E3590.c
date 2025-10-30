int __fastcall sub_2E3590(int a1, int a2)
{
  int v3; // r10
  int v4; // r3
  unsigned int v5; // r6
  int v7; // r3
  int v8; // r4
  int v9; // r1
  int v10; // r2
  int v11; // r0
  int v12; // r12
  int v13; // r1
  int v14; // r2
  _BOOL4 v15; // r0
  _BOOL4 v16; // r0
  const char **v17; // r4
  const char *v18; // r5
  int v19; // r5
  int v20; // r0
  size_t v21; // r8
  char *v22; // r0
  int v23; // r3
  char *v24; // r9
  const char *v25; // r3
  int v26; // r3
  int v27; // r2
  char *v28; // r0
  int v29; // r9
  int v30; // r0
  char *v31; // r4
  int v32; // r0
  int v33; // r2
  int v34; // r10
  int v35; // r3
  char **v36; // r5
  _DWORD *v37; // r7
  char *v38; // r0
  bool v39; // zf
  void *v40; // r0
  int *v41; // r3
  unsigned int v42; // r2
  unsigned int ii; // r8
  _DWORD *v44; // r5
  __int64 v45; // r8
  char *v46; // r4
  char *v47; // r6
  int v48; // r0
  int v49; // r1
  int v50; // r3
  int v51; // r0
  int v52; // r2
  int v53; // r3
  char *v54; // r4
  _DWORD *v55; // r1
  int v56; // r2
  __int64 v57; // r2
  int v58; // r4
  unsigned int v59; // r0
  unsigned int v60; // r2
  unsigned int v61; // r3
  int *v62; // r5
  int v63; // r4
  int v64; // r3
  int **v65; // r12
  int v66; // r2
  int v67; // lr
  int **v68; // r3
  int **v69; // t1
  int v70; // r0
  int v71; // r1
  signed int v72; // r0
  int v73; // r0
  int v74; // r2
  _DWORD *v75; // r3
  size_t v76; // r0
  int v77; // r3
  unsigned int v78; // r0
  size_t v79; // r4
  unsigned int v80; // r10
  char *v81; // r0
  void *v82; // r0
  char *v83; // r3
  unsigned int v84; // r8
  int v85; // r7
  int *v86; // r10
  int v87; // r3
  int v88; // r3
  int (__fastcall *v89)(int, size_t, unsigned int, char **, int *, int *, int *); // r5
  char *v90; // r5
  unsigned int v91; // r3
  int v92; // r1
  __int16 v93; // r9
  unsigned int v94; // r9
  char **v95; // r2
  char *v96; // r6
  int v97; // r3
  int v98; // r3
  int j; // r2
  int v100; // r3
  int v102; // lr
  unsigned int v103; // r2
  int v104; // r3
  int v105; // r1
  int k; // r6
  int v107; // r9
  unsigned int v108; // r0
  _DWORD *v110; // r4
  int v111; // r8
  char m; // r5
  int v113; // r3
  _DWORD *v114; // r0
  _DWORD *v115; // r1
  _DWORD *v116; // r2
  unsigned int v117; // r3
  int v118; // r3
  int v119; // r3
  unsigned int v120; // r1
  int v121; // r2
  int v122; // r3
  _DWORD *v123; // r3
  unsigned int v124; // r1
  const char *v125; // r3
  size_t v126; // r3
  char *v127; // r1
  int v128; // r1
  char *v129; // r0
  char *v130; // r2
  char *v131; // r0
  int v132; // r0
  int v133; // r3
  char v134; // r3
  int v135; // r3
  int v136; // r3
  unsigned int v137; // r2
  int v138; // r0
  unsigned int v139; // r3
  int v140; // r1
  unsigned int v141; // r5
  unsigned int v142; // r0
  char *v143; // r2
  char *v144; // r3
  int v145; // r1
  int v146; // r2
  int v147; // r5
  int v148; // r2
  _BOOL4 v149; // r3
  char v150; // r2
  unsigned int v151; // r3
  char *v152; // r0
  int v153; // r3
  int v154; // r2
  int v155; // r3
  int v156; // r5
  int v157; // r0
  char **v158; // r2
  int v159; // r3
  char v160; // r3
  char v161; // r3
  char v162; // r3
  char v163; // r3
  int v164; // r3
  char v165; // r5
  char *v166; // r0
  int v167; // r5
  char *v168; // r0
  int v169; // r5
  int v170; // r3
  int v171; // r0
  int v172; // r1
  int v173; // r2
  int v174; // r5
  int v175; // r3
  int v176; // r2
  char *v177; // r0
  const char *v178; // r5
  int v179; // r1
  int v180; // r3
  size_t v181; // r0
  int *v182; // r0
  __int64 v183; // r2
  unsigned int v184; // r4
  int v185; // r2
  int v186; // r9
  int v187; // r5
  int v188; // r0
  int v189; // r5
  char **v190; // r7
  char *v191; // r0
  _BOOL4 v192; // r5
  void *v193; // r0
  char ***v194; // r2
  int v195; // r5
  _DWORD *v196; // r7
  char *v197; // r0
  _BOOL4 v198; // r5
  void *v199; // r0
  _DWORD *v200; // r2
  int v201; // r3
  int v202; // r3
  unsigned int v203; // r1
  _DWORD *v204; // r3
  int v205; // r3
  char *v206; // r2
  int v207; // r0
  int v208; // r3
  _DWORD *i; // r2
  int v210; // r1
  unsigned int v211; // r12
  unsigned int v212; // r0
  bool v213; // zf
  char v214; // r3
  unsigned int v215; // r0
  _BOOL4 v216; // r1
  int (__fastcall *v217)(unsigned int); // r2
  int v218; // r3
  int v219; // r1
  unsigned int v220; // r7
  char *v221; // r3
  _DWORD *v222; // r4
  size_t v223; // r2
  char *v224; // r0
  char *v225; // r0
  char ***v226; // r2
  char *v227; // r9
  int v228; // r0
  _DWORD *v229; // r4
  unsigned int *v230; // r2
  unsigned int *v231; // r3
  _DWORD *v232; // r2
  bool v233; // zf
  unsigned int v234; // r7
  int v235; // r5
  int v236; // r1
  size_t v237; // r2
  _DWORD *v238; // r3
  int v239; // r3
  bool v240; // zf
  char *v241; // r0
  char *v242; // r9
  unsigned int v243; // r4
  unsigned int v244; // r7
  char *v245; // r8
  unsigned int v246; // r4
  int v247; // r5
  int v248; // t1
  int v249; // r4
  int v250; // r3
  int v251; // r5
  unsigned int v252; // r0
  int v253; // r8
  int v254; // r7
  unsigned int v255; // r1
  unsigned int v256; // r3
  int v257; // r12
  char *v258; // lr
  int v259; // r12
  unsigned int v260; // r3
  int v261; // r2
  int v262; // t1
  char *v263; // r0
  unsigned int v264; // r1
  unsigned int v265; // r3
  _DWORD *v266; // r2
  _DWORD *v267; // t1
  char v268; // r3
  _DWORD *v269; // r3
  int v270; // r1
  int v271; // r3
  int (__fastcall *v272)(int, int); // r3
  int v273; // r4
  _DWORD *v275; // r0
  int jj; // r9
  int v277; // r4
  const char *v278; // r5
  char *v279; // r0
  size_t v280; // r5
  _BYTE *v281; // r0
  _BYTE *v282; // r7
  int v283; // r0
  int v284; // r5
  int *v285; // r2
  char v286; // r3
  _DWORD *v287; // r3
  int kk; // r2
  _DWORD *v289; // r1
  int v290; // r3
  int v291; // r3
  int v292; // r0
  char *v293; // r9
  int v294; // r4
  const char *v295; // r6
  int v296; // r0
  int v297; // r10
  int v298; // [sp+0h] [bp-134h]
  char *nmemb; // [sp+34h] [bp-100h]
  size_t nmemba; // [sp+34h] [bp-100h]
  size_t nmembb; // [sp+34h] [bp-100h]
  size_t nmembc; // [sp+34h] [bp-100h]
  int v303; // [sp+38h] [bp-FCh]
  int v304; // [sp+3Ch] [bp-F8h]
  int (__fastcall *v305)(int, int, _DWORD); // [sp+3Ch] [bp-F8h]
  char *v306; // [sp+40h] [bp-F4h]
  int v307; // [sp+40h] [bp-F4h]
  int v308; // [sp+40h] [bp-F4h]
  int v309; // [sp+40h] [bp-F4h]
  _DWORD *v310; // [sp+40h] [bp-F4h]
  int v311; // [sp+44h] [bp-F0h]
  int v312; // [sp+44h] [bp-F0h]
  int v313; // [sp+44h] [bp-F0h]
  int v314; // [sp+44h] [bp-F0h]
  int v315; // [sp+44h] [bp-F0h]
  void *v316; // [sp+48h] [bp-ECh]
  void *v317; // [sp+48h] [bp-ECh]
  char *v318; // [sp+48h] [bp-ECh]
  int v319; // [sp+48h] [bp-ECh]
  char *v320; // [sp+48h] [bp-ECh]
  char *v321; // [sp+48h] [bp-ECh]
  int v322; // [sp+4Ch] [bp-E8h]
  unsigned int v323; // [sp+4Ch] [bp-E8h]
  _DWORD *v324; // [sp+4Ch] [bp-E8h]
  int v325; // [sp+4Ch] [bp-E8h]
  int v326; // [sp+4Ch] [bp-E8h]
  char *v327; // [sp+50h] [bp-E4h]
  size_t v328; // [sp+50h] [bp-E4h]
  size_t v329; // [sp+50h] [bp-E4h]
  size_t v330; // [sp+50h] [bp-E4h]
  size_t v331; // [sp+50h] [bp-E4h]
  size_t v332; // [sp+50h] [bp-E4h]
  size_t v333; // [sp+50h] [bp-E4h]
  int v334; // [sp+58h] [bp-DCh]
  int v335; // [sp+58h] [bp-DCh]
  _BYTE *v336; // [sp+5Ch] [bp-D8h]
  void *v337; // [sp+5Ch] [bp-D8h]
  char *v338; // [sp+5Ch] [bp-D8h]
  int v339; // [sp+60h] [bp-D4h]
  unsigned int v340; // [sp+60h] [bp-D4h]
  int v341; // [sp+60h] [bp-D4h]
  char *src; // [sp+64h] [bp-D0h]
  char *srca; // [sp+64h] [bp-D0h]
  char *v344; // [sp+68h] [bp-CCh]
  char *s2; // [sp+6Ch] [bp-C8h]
  char *s2c; // [sp+6Ch] [bp-C8h]
  char *s2d; // [sp+6Ch] [bp-C8h]
  char *s2a; // [sp+6Ch] [bp-C8h]
  char *s2b; // [sp+6Ch] [bp-C8h]
  char *v350; // [sp+70h] [bp-C4h]
  size_t n; // [sp+74h] [bp-C0h]
  size_t na; // [sp+74h] [bp-C0h]
  size_t nb; // [sp+74h] [bp-C0h]
  char *ptr; // [sp+78h] [bp-BCh]
  _DWORD *v355; // [sp+7Ch] [bp-B8h]
  _BOOL4 v356; // [sp+80h] [bp-B4h]
  unsigned int v357; // [sp+84h] [bp-B0h]
  void *v358; // [sp+88h] [bp-ACh]
  int v359; // [sp+8Ch] [bp-A8h]
  char v360; // [sp+90h] [bp-A4h]
  int v361; // [sp+94h] [bp-A0h]
  int v362; // [sp+98h] [bp-9Ch]
  int v363; // [sp+A0h] [bp-94h]
  int v364; // [sp+A4h] [bp-90h]
  int **dest; // [sp+A8h] [bp-8Ch]
  int v366; // [sp+ACh] [bp-88h]
  int v367; // [sp+B0h] [bp-84h]
  int v368; // [sp+B4h] [bp-80h]
  char **v369; // [sp+C0h] [bp-74h]
  size_t v370; // [sp+C4h] [bp-70h]
  int v371; // [sp+C8h] [bp-6Ch]
  int v372; // [sp+CCh] [bp-68h]
  int v373; // [sp+D0h] [bp-64h]
  const char *v374; // [sp+D4h] [bp-60h]
  size_t v375; // [sp+D4h] [bp-60h]
  int v376; // [sp+DCh] [bp-58h] BYREF
  int v377; // [sp+E0h] [bp-54h] BYREF
  int v378; // [sp+E4h] [bp-50h] BYREF
  char *s; // [sp+E8h] [bp-4Ch] BYREF
  int v380; // [sp+ECh] [bp-48h] BYREF
  int v381; // [sp+F0h] [bp-44h] BYREF
  _BOOL4 v382; // [sp+F4h] [bp-40h] BYREF
  int v383; // [sp+F8h] [bp-3Ch] BYREF
  unsigned int v384; // [sp+FCh] [bp-38h] BYREF
  char *v385; // [sp+100h] [bp-34h] BYREF
  const char *v386; // [sp+104h] [bp-30h] BYREF
  int v387; // [sp+108h] [bp-2Ch] BYREF
  int v388; // [sp+10Ch] [bp-28h] BYREF
  int v389; // [sp+110h] [bp-24h] BYREF
  int v390; // [sp+114h] [bp-20h] BYREF
  int v391; // [sp+118h] [bp-1Ch] BYREF
  int v392; // [sp+11Ch] [bp-18h] BYREF
  char **v393; // [sp+120h] [bp-14h] BYREF
  void *v394; // [sp+124h] [bp-10h] BYREF
  int v395; // [sp+128h] [bp-Ch] BYREF
  void *v396; // [sp+12Ch] [bp-8h]

  v3 = a2;
  v4 = *(_BYTE *)(a1 + 40) & 7;
  if ( v4 != 1 )
  {
    if ( v4 != 2 )
      goto LABEL_3;
    if ( *(char *)(a1 + 43) >= 0 )
    {
      if ( sub_2A3BC8(a1) )
      {
        v5 = 0;
        ((void (__fastcall *)(int))loc_2A6C48)(8);
        return v5;
      }
      return 1;
    }
    v7 = *(_DWORD *)(a1 + 160);
    v8 = *(_DWORD *)(v7 + 20);
    if ( !v8 )
      return 1;
    v318 = (char *)sub_2AB4EC(*(_DWORD *)(v7 + 20));
    if ( !v318 )
      return 0;
    v323 = *(_DWORD *)(*(_DWORD *)(a1 + 160) + 16);
    v305 = *(int (__fastcall **)(int, int, _DWORD))(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 444) + 64);
    nmemba = v323 + 16 * v8;
LABEL_73:
    v44 = (_DWORD *)v323;
    if ( v323 >= nmemba )
      goto LABEL_157;
    v307 = 0;
    v45 = -1;
    v46 = v318 - 1;
    while ( 1 )
    {
      v47 = v46 + 1;
      if ( v46[1] )
        goto LABEL_77;
      if ( *((_QWORD *)v44 + 1) == v45 )
        break;
      v48 = v305(a1, v3, *v44);
      if ( v48 == -72 )
        goto LABEL_155;
      if ( !v48 )
        goto LABEL_77;
      v50 = *(unsigned __int8 *)(v48 + 12);
      switch ( v50 )
      {
        case 5:
          v73 = sub_2A399C(a1, v49, *((_QWORD *)v44 + 1));
          v313 = v73;
          if ( v73 && sub_2AA86C(v73, 1, v74, v73) )
          {
            if ( (*(_BYTE *)(v313 + 44) & 0x30) == 0x10 || (*(_BYTE *)(v313 + 44) & 0x30) == 0 && sub_2FBF98(v313) )
            {
              v313 = *(_DWORD *)(v313 + 48);
              v75 = *(_DWORD **)(v313 + 160);
              v334 = (int)(v75 + 18);
            }
            else
            {
              v75 = *(_DWORD **)(v313 + 160);
              if ( (*(_DWORD *)(v313 + 40) & 0x800) != 0 && v75[581] )
                v334 = (int)(v75 + 60);
              else
                v334 = (int)(v75 + 18);
            }
            v336 = v75;
            v76 = sub_347418(
                    *(_DWORD *)(v334 + 24),
                    *(unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v313 + 4) + 444) + 392) + 5));
            v328 = v76;
            if ( (v336[2341] & 0x40) != 0 )
              v77 = 0;
            else
              v77 = v334;
            if ( (v336[2341] & 0x40) == 0 )
            {
              v77 = *(_DWORD *)(v77 + 32);
              v328 = v76 - v77;
            }
            if ( v328 )
            {
              v78 = sub_2CDA08(v313, v334, v328, v77, 0, 0, 0);
              v337 = (void *)v78;
              if ( v78 )
              {
                if ( v78 >= v78 + 20 * v328 )
                  goto LABEL_153;
                src = v46;
                v79 = v78;
                v341 = v3;
                v80 = v78 + 20 * v328;
                while ( 1 )
                {
                  v81 = sub_2CD844(v313, *(_DWORD *)(v334 + 28), *(_DWORD *)(v79 + 8));
                  if ( !v81 )
                  {
LABEL_152:
                    v3 = v341;
                    goto LABEL_153;
                  }
                  if ( !strcmp(v81, (const char *)*v44) )
                    break;
                  v79 += 20;
                  if ( v80 <= v79 )
                    goto LABEL_152;
                }
                v215 = *(unsigned __int8 *)(v79 + 12);
                v333 = v79;
                v46 = src;
                v3 = v341;
                v216 = v215 >> 4 != 1;
                if ( v215 >> 4 > 9 )
                  v216 = 0;
                if ( v216
                  || (v217 = *(int (__fastcall **)(unsigned int))(*(_DWORD *)(*(_DWORD *)(v313 + 4) + 444) + 360),
                      v315 = *(_DWORD *)(*(_DWORD *)(v313 + 4) + 444),
                      v217(v215 & 0xF))
                  || !*(_DWORD *)(v333 + 16)
                  || (*(int (__fastcall **)(size_t))(v315 + 340))(v333) )
                {
LABEL_153:
                  v82 = v337;
                }
                else
                {
                  v82 = v337;
                  if ( (unsigned int)(*(_DWORD *)(v333 + 16) + 256) > 0xF0 )
                  {
                    free(v337);
LABEL_84:
                    v51 = sub_2A399C(a1, v49, *((_QWORD *)v44 + 1));
                    v395 = v51;
                    if ( !v51 || !sub_2AA86C(v51, 1, v52, v53) )
                    {
LABEL_155:
                      v5 = 0;
                      free(v318);
                      return v5;
                    }
                    v312 = *(_DWORD *)(*(_DWORD *)(v3 + 28) + 32);
                    if ( (**(int (__fastcall ***)(int, int, _DWORD, int *))(v3 + 24))(v3, v395, *v44, &v395) )
                    {
                      if ( !(*(int (**)(void))(*(_DWORD *)(v395 + 4) + 364))() )
                        goto LABEL_155;
                      v54 = v46 + 2;
                      v55 = v44;
                      v56 = v307;
                      if ( v312 != *(_DWORD *)(*(_DWORD *)(v3 + 28) + 32) )
                        v56 = 1;
                      v307 = v56;
                      while ( 1 )
                      {
                        *--v54 = 1;
                        if ( v318 == v54 )
                          break;
                        v57 = *((_QWORD *)v55 - 1);
                        v55 -= 4;
                        v45 = *((_QWORD *)v44 + 1);
                        if ( v57 != v45 )
                          goto LABEL_77;
                      }
                      v45 = *((_QWORD *)v44 + 1);
                    }
                    break;
                  }
                }
                free(v82);
              }
            }
          }
          break;
        case 1:
          goto LABEL_84;
        case 2:
          break;
        default:
          goto LABEL_76;
      }
LABEL_77:
      v44 += 4;
      v46 = v47;
      if ( nmemba <= (unsigned int)v44 )
      {
        if ( !v307 )
        {
LABEL_157:
          v5 = 1;
          free(v318);
          return v5;
        }
        goto LABEL_73;
      }
    }
LABEL_76:
    *v47 = 1;
    goto LABEL_77;
  }
  v9 = *(_DWORD *)(a2 + 28);
  v10 = *(_DWORD *)(a1 + 4);
  v303 = v9;
  if ( ((*(_DWORD *)(a1 + 40) >> 5) & 0x40) != 0 )
  {
    if ( (*(_BYTE *)v3 & 3) == 2 )
    {
      v5 = 0;
      ((void (__fastcall *)(int))loc_2A6C48)(5);
      return v5;
    }
    if ( *(_DWORD *)(v9 + 40) != 1 || v10 != *(_DWORD *)(*(_DWORD *)(v3 + 48) + 4) )
    {
LABEL_3:
      v5 = 0;
      ((void (__fastcall *)(int))loc_2A6C48)(3);
      return v5;
    }
    v5 = *(_DWORD *)(v9 + 40);
  }
  else
  {
    v5 = 0;
  }
  v11 = *(_DWORD *)(v10 + 444);
  v304 = v11;
  if ( (*(_BYTE *)(v3 + 6) & 2) != 0 )
  {
    v12 = *(_DWORD *)(v10 + 444);
    v13 = *(unsigned __int16 *)(*(_DWORD *)(a1 + 160) + 38);
    if ( *(_DWORD *)(v11 + 8) != v13 )
    {
      v14 = *(_DWORD *)(v11 + 384);
      v15 = v13 == v14;
      if ( !v14 )
        v15 = 0;
      if ( v15 )
        goto LABEL_18;
      v16 = v13 == *(_DWORD *)(v12 + 388);
      if ( !*(_DWORD *)(v12 + 388) )
        v16 = 0;
      if ( v16 )
LABEL_18:
        (*(void (**)(const char *, ...))(*(_DWORD *)(v3 + 24) + 44))("%P: alternate ELF machine code found (%d) in %B, expecting %d\n");
    }
  }
  v17 = *(const char ***)(a1 + 100);
  if ( v17 )
  {
    do
    {
      v18 = *v17;
      if ( !strncmp(*v17, ".gnu.warning.", 0xDu) )
      {
        v19 = (int)(v18 + 13);
        if ( !v5
          || (v298 = 1, (v20 = sub_2FC920(v303, v19, 0)) == 0)
          || (unsigned int)*(unsigned __int8 *)(v20 + 12) - 3 > 1 )
        {
          v21 = (size_t)v17[9];
          v22 = (char *)sub_2ACBF4(a1, v21 + 1);
          v24 = v22;
          if ( !v22 )
            return 0;
          if ( !sub_2ADEDC(a1, v17, v22, v23, 0, v21) )
            return 0;
          v24[v21] = 0;
          if ( !sub_2FD6C4(v3, a1, v19, 4096, (int)v17, 0, v24, 0, *(_BYTE *)(v304 + 464) & 1, 0) )
            return 0;
          if ( (*(_BYTE *)v3 & 3u) <= 1 )
          {
            v25 = v17[5];
            v17[9] = 0;
            v17[5] = (const char *)((unsigned int)v25 | 0x8000);
          }
        }
      }
      v17 = (const char **)v17[3];
    }
    while ( v17 );
    v26 = *(_DWORD *)(a1 + 100);
    if ( v26 )
    {
      if ( (*(_WORD *)(v26 + 24) & 0x380) == 0x200 )
      {
        if ( v5 )
        {
          if ( *(_DWORD *)(v303 + 40) == 1 )
            sub_2A6BF0((int)"elflink.c", 3927, (int)"elf_link_add_object_symbols");
          return 0;
        }
        v58 = *(_DWORD *)(a1 + 160);
        v360 = 1;
        v356 = 1;
        goto LABEL_102;
      }
    }
  }
  if ( !v5 )
  {
    if ( ((*(_BYTE *)v3 & 1) != 0
       || (*(_BYTE *)v3 & 3) != 2
       && (*(_BYTE *)(v3 + 7) & 1) != 0
       && ((*(_BYTE *)v3 & 0x10) != 0 || (*(_BYTE *)(v3 + 5) & 0x10) != 0))
      && *(_DWORD *)(v303 + 40) == 1
      && *(_DWORD *)(*(_DWORD *)(v3 + 48) + 4) == *(_DWORD *)(a1 + 4)
      && !*(_DWORD *)(v303 + 48) )
    {
      if ( !sub_2E03E8((_DWORD *)a1, v3) )
        return 0;
      v356 = 1;
      v360 = 0;
      v58 = *(_DWORD *)(a1 + 160);
    }
    else
    {
      v58 = *(_DWORD *)(a1 + 160);
      v360 = 0;
      v356 = 1;
    }
    goto LABEL_102;
  }
  if ( *(_DWORD *)(v303 + 40) != 1 )
    return 0;
  v27 = *(_DWORD *)(a1 + 160);
  v392 = 0;
  v393 = 0;
  v311 = (*(unsigned __int16 *)(v27 + 2340) >> 6) & 0xF;
  v28 = sub_2AD7AC(a1, ".dynamic");
  v29 = (int)v28;
  if ( v28 )
  {
    if ( !sub_2ADFDC(a1, (int)v28, (int *)&v394) || (v30 = sub_2D4B7C(a1, v29), v30 == -257) )
    {
LABEL_548:
      free(v394);
      return 0;
    }
    v31 = (char *)v394;
    v32 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 160) + 64) + 4 * v30) + 28);
    if ( v394 >= (char *)v394 + *(_DWORD *)(v29 + 36) )
    {
      nmemb = 0;
      free(v394);
      v306 = 0;
    }
    else
    {
      v339 = v3;
      v33 = *(_DWORD *)(v304 + 392);
      v306 = 0;
      v34 = v32;
      nmemb = 0;
      do
      {
        (*(void (__fastcall **)(int, char *, int *))(v33 + 48))(a1, v31, &v395);
        v35 = v395;
        if ( v395 == 14 )
        {
          nmemb = sub_2CD844(a1, v34, (int)v396);
          if ( !nmemb )
            goto LABEL_548;
          v35 = v395;
        }
        if ( v35 == 1 )
        {
          v195 = (int)v396;
          v196 = (_DWORD *)sub_2ACBF4(a1, 12);
          v197 = sub_2CD844(a1, v34, v195);
          v198 = v197 == 0;
          if ( !v196 )
            v198 = 1;
          v321 = v197;
          if ( v198 )
            goto LABEL_548;
          v332 = strlen(v197) + 1;
          v199 = (void *)sub_2ACBF4(a1, v332);
          v326 = (int)v199;
          if ( !v199 )
            goto LABEL_548;
          memcpy(v199, v321, v332);
          *v196 = 0;
          v200 = *(_DWORD **)(v303 + 104);
          v196[1] = a1;
          v196[2] = v326;
          if ( v200 )
          {
            while ( *v200 )
              v200 = (_DWORD *)*v200;
          }
          else
          {
            v200 = (_DWORD *)(v303 + 104);
          }
          v35 = v395;
          *v200 = v196;
        }
        if ( v35 == 29 )
        {
          v189 = (int)v396;
          v190 = (char **)sub_2ACBF4(a1, 12);
          v191 = sub_2CD844(a1, v34, v189);
          v192 = v191 == 0;
          if ( !v190 )
            v192 = 1;
          v320 = v191;
          if ( v192 )
            goto LABEL_548;
          v331 = strlen(v191) + 1;
          v193 = (void *)sub_2ACBF4(a1, v331);
          v325 = (int)v193;
          if ( !v193 )
            goto LABEL_548;
          memcpy(v193, v320, v331);
          *v190 = 0;
          v194 = (char ***)v393;
          v190[1] = (char *)a1;
          v190[2] = (char *)v325;
          if ( v194 )
          {
            while ( *v194 )
              v194 = (char ***)*v194;
          }
          else
          {
            v194 = &v393;
          }
          v35 = v395;
          *v194 = v190;
        }
        v36 = v393;
        if ( !v393 && v35 == 15 )
        {
          v316 = v396;
          v37 = (_DWORD *)sub_2ACBF4(a1, 12);
          v38 = sub_2CD844(a1, v34, (int)v316);
          v39 = v38 == 0;
          if ( v38 )
            v39 = v37 == 0;
          v327 = v38;
          if ( v39 )
            goto LABEL_548;
          v322 = strlen(v38) + 1;
          v40 = (void *)sub_2ACBF4(a1, v322);
          v317 = v40;
          if ( !v40 )
            goto LABEL_548;
          memcpy(v40, v327, v322);
          *v37 = 0;
          v41 = (int *)v392;
          v37[1] = a1;
          v37[2] = v317;
          if ( v41 )
          {
            while ( *v41 )
              v41 = (int *)*v41;
            v285 = v41;
          }
          else
          {
            v285 = &v392;
          }
          v35 = v395;
          *v285 = (int)v37;
        }
        if ( v35 == 1879047932 )
          v306 = sub_2CD844(a1, v34, (int)v396);
        v33 = *(_DWORD *)(v304 + 392);
        v31 += *(unsigned __int8 *)(v33 + 6);
      }
      while ( v31 < (char *)v394 + *(_DWORD *)(v29 + 36) );
      v3 = v339;
      free(v394);
      if ( v36 )
      {
        v392 = (int)v36;
LABEL_610:
        v226 = *(char ****)(v303 + 200);
        if ( v226 )
        {
          while ( *v226 )
            v226 = (char ***)*v226;
        }
        else
        {
          v226 = (char ***)(v303 + 200);
        }
        *v226 = v36;
        goto LABEL_536;
      }
    }
    v36 = (char **)v392;
    if ( v392 )
      goto LABEL_610;
  }
  else
  {
    v306 = 0;
    nmemb = 0;
  }
LABEL_536:
  v202 = *(_DWORD *)(a1 + 160);
  v203 = *(_DWORD *)(v202 + 68);
  v204 = (_DWORD *)(v203 + 32 * *(_DWORD *)(v202 + 48));
  while ( 1 )
  {
    v204 -= 8;
    if ( v203 > (unsigned int)v204 )
      break;
    if ( *v204 == 1685382482 )
    {
      for ( i = *(_DWORD **)(a1 + 100); i; i = (_DWORD *)i[3] )
      {
        v210 = i[5];
        if ( (v210 & 1) != 0 )
        {
          v211 = i[7];
          v212 = v204[3];
          if ( v211 >= v212 && v211 + i[9] <= v212 + v204[6] )
            i[5] = v210 | 8;
        }
      }
      break;
    }
  }
  sub_2AD778(a1);
  if ( nmemb )
  {
    v205 = *(_DWORD *)(a1 + 160);
    if ( *nmemb )
      goto LABEL_544;
  }
  else
  {
    v205 = *(_DWORD *)(a1 + 160);
  }
  v206 = *(char **)(v205 + 544);
  nmemb = v206;
  if ( !v206 || !*v206 )
    nmemb = *(char **)a1;
LABEL_544:
  *(_DWORD *)(v205 + 544) = nmemb;
  v356 = (v311 & 0xB) == 0;
  v207 = sub_2E3134((_DWORD *)a1, v3, (int)nmemb, v356);
  v360 = v207;
  if ( v207 < 0 )
    return 0;
  if ( v207 )
    return v5;
  v58 = *(_DWORD *)(a1 + 160);
  v208 = *(_DWORD *)(v58 + 2324);
  *(_DWORD *)(v58 + 548) = v306;
  if ( v208 )
  {
    v324 = (_DWORD *)(v58 + 240);
    goto LABEL_103;
  }
LABEL_102:
  v324 = (_DWORD *)(v58 + 72);
LABEL_103:
  v59 = sub_347418(v324[6], *(unsigned __int8 *)(*(_DWORD *)(v304 + 392) + 5));
  v340 = v59;
  if ( (*(_BYTE *)(v58 + 2341) & 0x40) != 0 )
  {
    v61 = 0;
    v357 = 0;
  }
  else
  {
    v61 = v324[8];
  }
  v62 = *(int **)(v58 + 536);
  if ( (*(_BYTE *)(v58 + 2341) & 0x40) == 0 )
  {
    v357 = v61;
    v340 = v59 - v61;
  }
  if ( v340 )
  {
    v344 = (char *)sub_2CDA08(a1, (int)v324, v340, v357, 0, 0, 0);
    if ( !v344 )
      return 0;
    if ( !v62 )
    {
      v182 = (int *)sub_2AD09C(a1, 4 * v340);
      v62 = v182;
      if ( !v182 )
        goto LABEL_129;
      *(_DWORD *)(*(_DWORD *)(a1 + 160) + 536) = v182;
    }
  }
  else
  {
    v344 = 0;
  }
  if ( v5 )
  {
    if ( !sub_2D6E9C(a1, (*(unsigned __int8 *)(v3 + 4) >> 6) & 1) )
      goto LABEL_128;
    v63 = *(_DWORD *)(a1 + 160);
    if ( *(_DWORD *)(v63 + 2328) )
    {
      v350 = (char *)sub_2AB368(*(_DWORD *)(v63 + 376));
      if ( !v350 )
        goto LABEL_128;
      v183 = *(_QWORD *)(v63 + 368);
      v184 = *(_DWORD *)(v63 + 376);
      if ( sub_2A8A04(a1, v183, 0) || v184 != sub_2A87D8((int)v350, v184, a1) )
        goto LABEL_127;
      v63 = *(_DWORD *)(a1 + 160);
    }
    else
    {
      v350 = 0;
    }
  }
  else
  {
    v63 = *(_DWORD *)(a1 + 160);
    v350 = 0;
  }
  if ( ((*(unsigned __int16 *)(v63 + 2340) >> 6) & 1) != 0 )
  {
    v64 = *(_DWORD *)(v303 + 12);
    if ( v64 )
    {
      v65 = *(int ***)v303;
      v66 = 0;
      v359 = 4 * v64;
      v67 = 4 * v64 + *(_DWORD *)v303;
      do
      {
        v69 = (int **)*v65++;
        v68 = v69;
        if ( v69 )
        {
          v70 = *(_DWORD *)(v303 + 20);
          do
          {
            v71 = *((unsigned __int8 *)v68 + 12);
            v66 += v70;
            v68 = (int **)*v68;
            if ( v71 == 7 )
              v66 += v70;
          }
          while ( v68 );
        }
      }
      while ( (int **)v67 != v65 );
      v72 = v66 + v359;
    }
    else
    {
      v72 = 0;
      v359 = 0;
    }
    ptr = (char *)sub_2AB368(v72);
    if ( !ptr )
      goto LABEL_126;
    if ( !sub_2AAEC8(v303, 1)
      || !(*(int (__fastcall **)(int, int, _DWORD))(v304 + 128))(a1, v3, 0)
      || (memcpy(ptr, *(const void **)v303, v359),
          v363 = *(_DWORD *)(v303 + 28),
          v367 = *(_DWORD *)(v303 + 16),
          v364 = *(_DWORD *)(v303 + 32),
          dest = *(int ***)v303,
          v366 = *(_DWORD *)(v303 + 12),
          (v358 = (void *)sub_2F03BC(*(_DWORD *)(v303 + 84))) == 0) )
    {
      free(ptr);
      goto LABEL_126;
    }
    v60 = *(_DWORD *)(v303 + 12);
    if ( v60 )
    {
      v220 = 0;
      v221 = &ptr[v359];
      do
      {
        v222 = *(_DWORD **)(*(_DWORD *)v303 + 4 * v220);
        if ( v222 )
        {
          v223 = *(_DWORD *)(v303 + 20);
          do
          {
            v224 = (char *)memcpy(v221, v222, v223);
            v223 = *(_DWORD *)(v303 + 20);
            v221 = &v224[v223];
            if ( *((_BYTE *)v222 + 12) == 7 )
            {
              v225 = (char *)memcpy(&v224[v223], (const void *)v222[5], v223);
              v223 = *(_DWORD *)(v303 + 20);
              v221 = &v225[v223];
            }
            v222 = (_DWORD *)*v222;
          }
          while ( v222 );
          v60 = *(_DWORD *)(v303 + 12);
        }
        ++v220;
      }
      while ( v220 < v60 );
    }
  }
  else
  {
    v359 = 0;
    v358 = 0;
    v364 = 0;
    v363 = 0;
    ptr = 0;
    v367 = 0;
    v366 = 0;
    dest = 0;
  }
  v83 = v350;
  v84 = (unsigned int)v344;
  if ( v350 )
    v60 = v357;
  else
    v83 = 0;
  if ( v350 )
    v83 += 2 * v60;
  v368 = 4 * v340;
  v338 = &v344[20 * v340];
  v361 = 0;
  if ( v344 < v338 )
  {
    nmembb = v3;
    v85 = (int)v83;
    v86 = v62;
    v355 = 0;
    v362 = 0;
    v335 = v5;
    while ( 1 )
    {
      v87 = *(_DWORD *)v84;
      v383 = 0;
      v378 = 0;
      v376 = v87;
      v377 = 0;
      v314 = (*(int (__fastcall **)(unsigned int))(v304 + 340))(v84);
      if ( !v314 )
      {
        v308 = *(unsigned __int8 *)(v84 + 12) >> 4;
LABEL_283:
        switch ( v308 )
        {
          case 0:
            goto LABEL_238;
          case 1:
            v120 = *(_DWORD *)(v84 + 16);
            v122 = v120;
            if ( v120 )
              v122 = 1;
            if ( v314 )
              v122 = 0;
            if ( v122 )
              v378 = 2;
            goto LABEL_286;
          case 2:
            v120 = *(_DWORD *)(v84 + 16);
            v378 = 128;
            goto LABEL_286;
          case 10:
            v120 = *(_DWORD *)(v84 + 16);
            goto LABEL_285;
          default:
            v120 = *(_DWORD *)(v84 + 16);
            goto LABEL_286;
        }
      }
      v88 = *(unsigned __int8 *)(v84 + 12) >> 4;
      v308 = v88;
      if ( (*(_BYTE *)(nmembb + 7) & 8) == 0 )
        goto LABEL_283;
      *(_DWORD *)(v84 + 16) = 0;
      if ( v88 == 2 )
        break;
      if ( v88 != 10 )
      {
        if ( !v88 )
          goto LABEL_238;
        v314 = 0;
        goto LABEL_177;
      }
      v120 = 0;
      v314 = 0;
LABEL_285:
      v308 = 10;
      v378 = 0x800000;
LABEL_286:
      switch ( v120 )
      {
        case 0u:
          goto LABEL_177;
        case 0xFFFFFFF1:
          v329 = 0;
          v377 = (int)&off_470950;
          break;
        case 0xFFFFFFF2:
          v121 = *(_DWORD *)(v84 + 4);
          v377 = (int)&off_470800;
          v329 = 0;
          v376 = v121;
          break;
        default:
          v157 = sub_2CFEF4(a1, v120);
          v377 = v157;
          if ( v157 )
          {
            if ( (char **)v157 != &off_470950
              && (v158 = *(char ***)(v157 + 60), v158 == &off_470950)
              && (((*(_WORD *)(v157 + 24) & 0x380) - 256) & 0xFEFF) != 0 )
            {
              v377 = (int)(v158 - 42);
              v329 = 1;
              *(_DWORD *)(v84 + 16) = 0;
            }
            else
            {
              v159 = (*(_DWORD *)(a1 + 40) >> 5) & 0x42;
              if ( v159 )
              {
                v158 = *(char ***)(v157 + 28);
                v329 = 0;
                v159 = v376;
              }
              else
              {
                v329 = 0;
              }
              if ( ((*(_DWORD *)(a1 + 40) >> 5) & 0x42) != 0 )
                v376 = v159 - (_DWORD)v158;
            }
          }
          else
          {
            v329 = 0;
            v377 = (int)&off_470950;
          }
          break;
      }
LABEL_178:
      s = sub_2CD844(a1, v324[7], *(_DWORD *)(v84 + 8));
      if ( !s )
        goto LABEL_468;
      if ( *(_DWORD *)(v84 + 16) == -14 )
      {
        if ( (*(_DWORD *)(a1 + 40) & 0x200000) != 0 )
        {
          v90 = sub_2AD7AC(a1, "COMMON");
          if ( !v90 )
          {
            v90 = (char *)sub_2ADBE8(a1, "COMMON", (int)&loc_209000 + 1);
            if ( !v90 )
              goto LABEL_468;
          }
          goto LABEL_303;
        }
        if ( (*(_BYTE *)(v84 + 12) & 0xF) == 6 && (*(_BYTE *)nmembb & 3) != 2 )
        {
          v90 = sub_2AD7AC(a1, ".tcommon");
          if ( !v90 )
          {
            v90 = (char *)sub_2ADBE8(a1, ".tcommon", (int)&loc_101400 + 1);
            if ( !v90 )
              goto LABEL_468;
          }
LABEL_303:
          v377 = (int)v90;
          goto LABEL_184;
        }
      }
      v89 = *(int (__fastcall **)(int, size_t, unsigned int, char **, int *, int *, int *))(v304 + 100);
      if ( v89 )
      {
        if ( !v89(a1, nmembb, v84, &s, &v378, &v377, &v376) )
          goto LABEL_468;
        if ( !s )
          goto LABEL_238;
      }
      v90 = (char *)v377;
      if ( !v377 )
        goto LABEL_564;
LABEL_184:
      if ( (*(_BYTE *)(v84 + 12) & 0xF) == 6 && (*((_WORD *)v90 + 12) & 0x380) == 0x200 )
        goto LABEL_238;
      if ( v90 == (char *)&off_4708A8 )
        v91 = 0;
      else
        v91 = *((_DWORD *)v90 + 5);
      v381 = (*(unsigned __int8 *)(v304 + 464) >> 1) & 1;
      if ( v90 != (char *)&off_4708A8 )
        v91 = ((v91 ^ 0x1000) >> 12) & 1;
      v319 = v91;
      v92 = *(_DWORD *)(v303 + 40);
      v380 = 0;
      v382 = 0;
      v386 = 0;
      v384 = 0;
      v385 = 0;
      if ( v92 != 1 )
      {
        v102 = (int)v90;
        goto LABEL_219;
      }
      if ( v85 )
      {
        sub_2CD6C0(a1, v85, &v394);
        v93 = (__int16)v394;
      }
      else
      {
        if ( (*(_BYTE *)(nmembb + 4) & 0x40) == 0 )
        {
          v95 = (char **)v90;
          LOWORD(v394) = 0;
          v94 = 0;
          v96 = s;
          goto LABEL_200;
        }
        v93 = *(_DWORD *)(*(_DWORD *)(a1 + 160) + 568);
        LOWORD(v394) = v93;
      }
      v39 = (v93 & 0x8000) == 0;
      v94 = v93 & 0x7FFF;
      if ( !v39 )
        goto LABEL_304;
      v95 = (char **)v377;
      if ( v94 > 1 )
      {
        if ( (char **)v377 != &off_470950 || (*(int (__fastcall **)(int))(v304 + 360))(*(_BYTE *)(v84 + 12) & 0xF) )
        {
LABEL_304:
          v123 = *(_DWORD **)(a1 + 160);
          if ( *(_DWORD *)(v84 + 16) )
          {
            v124 = v123[142];
            if ( v94 > v124 )
              goto LABEL_563;
            if ( v94 <= 1 )
            {
              s2 = 0;
              srca = "";
            }
            else
            {
              v125 = *(const char **)(v123[144] + 40 * v94 - 16);
              srca = (char *)v125;
              if ( !v125 )
              {
LABEL_563:
                sub_2A6A5C("%B: %s: invalid version %u (max %d)", a1, s, v94, v124);
LABEL_564:
                ((void (__fastcall *)(int))loc_2A6C48)(17);
LABEL_468:
                if ( !ptr )
                {
LABEL_278:
                  if ( v358 )
                    goto LABEL_279;
                  goto LABEL_280;
                }
LABEL_277:
                free(ptr);
                goto LABEL_278;
              }
              s2 = (char *)strlen(v125);
            }
            v126 = strlen(s);
            v127 = &s2[v126];
            if ( (__int16)v394 >= 0 )
            {
              v128 = (int)(v127 + 3);
LABEL_312:
              n = v126;
              v129 = (char *)sub_2AAEC8(v303, v128);
              v96 = v129;
              if ( !v129 )
                goto LABEL_468;
              memcpy(v129, s, n);
              v130 = &v96[n];
              v96[n] = 64;
              v131 = &v96[n + 1];
              if ( (__int16)v394 >= 0 && *(_DWORD *)(v84 + 16) )
              {
                v131 = v130 + 2;
                v130[1] = 64;
              }
              memcpy(v131, srca, (size_t)(s2 + 1));
              v95 = (char **)v377;
              s = v96;
              goto LABEL_200;
            }
          }
          else
          {
            v179 = v123[145];
            if ( !v179 )
              goto LABEL_478;
            while ( 1 )
            {
              v180 = *(_DWORD *)(v179 + 24);
              if ( v180 )
                break;
LABEL_477:
              v179 = *(_DWORD *)(v179 + 28);
              if ( !v179 )
                goto LABEL_478;
            }
            while ( *(unsigned __int16 *)(v180 + 6) != v94 )
            {
              v180 = *(_DWORD *)(v180 + 20);
              if ( !v180 )
                goto LABEL_477;
            }
            srca = *(char **)(v180 + 16);
            if ( !srca )
            {
LABEL_478:
              sub_2A6A5C("%B: %s: invalid needed version %d", a1, s, v94, v298);
              ((void (__fastcall *)(int))loc_2A6C48)(17);
              goto LABEL_468;
            }
            nb = strlen(s);
            v181 = strlen(srca);
            v126 = nb;
            s2 = (char *)v181;
            v127 = (char *)(v181 + nb);
          }
          v128 = (int)(v127 + 2);
          goto LABEL_312;
        }
        v95 = (char **)v377;
      }
      v96 = s;
LABEL_200:
      if ( v95 == &off_4708A8 )
        v97 = 0;
      else
        v97 = ((unsigned __int8)v335 ^ 1) & 1;
      if ( v97 )
      {
        if ( (*(_BYTE *)(a1 + 43) & 0x20) != 0 )
        {
          v134 = *(_BYTE *)(v84 + 13);
          if ( (v134 & 3) != 1 )
            *(_BYTE *)(v84 + 13) = v134 & 0xFC | 2;
        }
      }
      if ( !sub_2E0958(
              a1,
              nmembb,
              v96,
              v84,
              (char ***)&v377,
              (unsigned int *)&v376,
              v86,
              &v385,
              &v382,
              &v384,
              &v395,
              &v383,
              &v381,
              &v380,
              &v386) )
        goto LABEL_468;
      if ( v395 )
        goto LABEL_238;
      if ( v383 )
      {
        v98 = v319;
        if ( v386 )
          v98 = 0;
        v319 = v98;
      }
      for ( j = *v86; (unsigned int)*(unsigned __int8 *)(j + 12) - 6 <= 1; j = *(_DWORD *)(j + 20) )
        ;
      v100 = *(_DWORD *)(*(_DWORD *)(a1 + 160) + 576);
      if ( v100 )
      {
        if ( v94 > 1 && v319 & 1 )
          *(_DWORD *)(j + 64) = v100 + 40 * v94 - 40;
      }
      v102 = v377;
LABEL_219:
      if ( !sub_2FD6C4(nmembb, a1, (int)s, v378, v102, v376, 0, 0, *(_BYTE *)(v304 + 464) & 1, (int)v86) )
        goto LABEL_468;
      v103 = v378;
      if ( (v378 & 0x800000) != 0 && (*(_DWORD *)(a1 + 40) & 0x800) == 0 )
      {
        v104 = *(_DWORD *)(nmembb + 48);
        if ( *(_DWORD *)(*(_DWORD *)(v104 + 4) + 4) == 5 )
          *(_BYTE *)(*(_DWORD *)(v104 + 160) + 2341) |= 0x14u;
      }
      v105 = *v86;
      for ( k = *v86; (unsigned int)*(unsigned __int8 *)(k + 12) - 6 <= 1; k = *(_DWORD *)(k + 20) )
        ;
      if ( v329 )
        *(_DWORD *)(k + 28) = -3;
      *v86 = k;
      v107 = v319 & 1;
      v330 = v103 & 0x80;
      if ( (v335 & (v103 >> 7) & (unsigned __int8)v107) != 0 )
      {
        s2d = (char *)v105;
        v132 = (*(int (__fastcall **)(int))(v304 + 360))(*(_BYTE *)(v84 + 12) & 0xF);
        v105 = (int)s2d;
        if ( !v132 && *(_DWORD *)(v303 + 40) == 1 && !*(_DWORD *)(k + 60) )
        {
          v133 = v362;
          v362 = k;
          *(_DWORD *)(k + 60) = v133;
        }
      }
      if ( v314 )
      {
        if ( *(_BYTE *)(k + 12) != 5 )
          goto LABEL_237;
        s2c = (char *)v105;
        v108 = sub_2ABAF4(*(_DWORD *)v84);
        v105 = (int)s2c;
      }
      else
      {
        if ( (*(_DWORD *)(v377 + 20) & 0x1000) == 0 || *(_BYTE *)(k + 12) != 5 )
          goto LABEL_237;
        v108 = *((_DWORD *)v90 + 16);
      }
      if ( v108 < v384 )
        v108 = v384;
      **(_DWORD **)(k + 20) = v108;
LABEL_237:
      if ( *(_DWORD *)(v303 + 40) == 1 )
      {
        if ( (*(_DWORD *)(a1 + 40) & 0x200000) == 0 )
        {
          if ( v335 )
          {
            v160 = *(_BYTE *)(k + 51);
            if ( v319 )
              v161 = v160 | 8;
            else
              v161 = v160 | 4;
            *(_BYTE *)(k + 51) = v161;
            v162 = *(_BYTE *)(v105 + 51);
            if ( v319 )
              v163 = v162 | 8;
            else
              v163 = v162 | 4;
            *(_BYTE *)(v105 + 51) = v163;
            if ( v105 == k || (*(_BYTE *)(v105 + 52) & 8) == 0 )
            {
              if ( (*(_BYTE *)(k + 51) & 3) != 0 )
                goto LABEL_343;
              if ( (*(_BYTE *)(k + 53) & 0x20) != 0 )
              {
                v164 = k;
                do
                  v164 = *(_DWORD *)(v164 + 60);
                while ( (*(_BYTE *)(v164 + 53) & 0x20) != 0 );
                if ( *(_DWORD *)(v164 + 32) != -1 )
                  goto LABEL_343;
              }
            }
          }
          else
          {
            if ( v319 )
            {
              v39 = (*(_BYTE *)(k + 51) & 8) == 0;
              v214 = *(_BYTE *)(k + 51) | 2;
              *(_BYTE *)(k + 51) = v214;
              if ( !v39 )
                *(_BYTE *)(k + 51) = v214 & 0xF3 | 4;
            }
            else
            {
              v135 = *(_BYTE *)(k + 51) | 1;
              *(_BYTE *)(k + 51) = v135;
              if ( v308 != 2 )
                *(_BYTE *)(k + 51) = v135 | 0x10;
            }
            if ( (v105 == k || (*(_BYTE *)(v105 + 52) & 8) == 0)
              && ((*(_BYTE *)nmembb & 3) == 3 || (*(_BYTE *)(k + 51) & 0xC) != 0) )
            {
LABEL_343:
              v309 = 1;
              goto LABEL_344;
            }
          }
        }
        v309 = 0;
LABEL_344:
        if ( v319 )
          goto LABEL_427;
        if ( !v383 )
        {
          v136 = *(unsigned __int8 *)(k + 12);
          if ( v136 != 5 )
          {
            v137 = v384;
            if ( v314 | v384 )
              goto LABEL_348;
            v145 = *(_DWORD *)(v84 + 4);
            if ( !v145 )
            {
              v147 = *(_BYTE *)(v84 + 12) & 0xF;
              if ( (*(_BYTE *)(v84 + 12) & 0xF) != 0 )
              {
                v148 = *(unsigned __int8 *)(k + 48);
                goto LABEL_370;
              }
LABEL_383:
              sub_2DC5D8(*(_DWORD *)(a1 + 4), k, v84, (_DWORD *)(v377 + 20), v319, v335);
              if ( v319 )
              {
                if ( (*(_DWORD *)(v377 + 20) & 0x2000) == 0 || (*(_BYTE *)nmembb & 3) == 2 )
                {
                  v201 = v309;
                  if ( ((*(_DWORD *)(a1 + 40) >> 5) & 0x10000) != 0 )
                    v201 = 0;
                  v309 = v201;
                }
                else
                {
                  v309 = 0;
                }
                v150 = *(_BYTE *)(k + 53);
                v151 = ((unsigned int)v378 >> 23) & 1;
                *(_BYTE *)(k + 50) = *(_BYTE *)(v84 + 14);
                *(_BYTE *)(k + 53) = v150 & 0xFB | (4 * (v151 & 1));
                if ( v335 != 1 )
                {
                  v152 = strchr(s, 64);
                  if ( v152 )
                  {
                    if ( v152[1] != 64 )
                    {
                      if ( !v355 )
                      {
                        v355 = sub_2AB368(4 * (-858993459 * ((int)&v338[-v84] >> 2) + 1));
                        if ( !v355 )
                          goto LABEL_468;
                      }
                      v355[v361++] = k;
                    }
                  }
                }
LABEL_393:
                v153 = *(_DWORD *)(k + 32);
                if ( v309 )
                {
                  if ( v153 != -1 )
                    goto LABEL_395;
                  if ( !sub_2E0858(nmembb, k) )
                    goto LABEL_468;
                  if ( (*(_BYTE *)(k + 53) & 0x20) != 0 )
                  {
                    v218 = k;
                    do
                      v218 = *(_DWORD *)(v218 + 60);
                    while ( (*(_BYTE *)(v218 + 53) & 0x20) != 0 );
                    if ( *(_DWORD *)(v218 + 32) == -1 )
                    {
                      v219 = k;
                      do
                        v219 = *(_DWORD *)(v219 + 60);
                      while ( (*(_BYTE *)(v219 + 53) & 0x20) != 0 );
                      if ( !sub_2E0858(nmembb, v219) )
                        goto LABEL_468;
                    }
                  }
                  goto LABEL_494;
                }
              }
              else
              {
                if ( (*(_DWORD *)(a1 + 40) & 0x200000) == 0 )
                  goto LABEL_393;
                v153 = *(_DWORD *)(k + 32);
              }
              v309 = 0;
              if ( v153 == -1 )
                goto LABEL_494;
LABEL_395:
              if ( (*(_BYTE *)(k + 49) & 3u) - 1 > 1 )
              {
LABEL_494:
                if ( v356 )
                  goto LABEL_238;
                v185 = v319 & 1;
                if ( !v386 )
                  v185 = 0;
                if ( !v185 )
                  goto LABEL_238;
                if ( !v309 || (*(_BYTE *)(k + 51) & 0x10) == 0 || v385 && (*((_DWORD *)v385 + 10) & 0x200000) != 0 )
                  goto LABEL_400;
                v156 = *(_DWORD *)(a1 + 160);
              }
              else
              {
                (*(void (__fastcall **)(size_t, int, int))(v304 + 224))(nmembb, k, 1);
                if ( v356 )
                  goto LABEL_238;
                v154 = v319 & 1;
                if ( !v386 )
                  v154 = 0;
                if ( !v154 )
                  goto LABEL_238;
LABEL_400:
                v155 = *(_BYTE *)(k + 53) & 1;
                if ( (*(_BYTE *)(k + 53) & 1) == 0
                  || (v156 = *(_DWORD *)(a1 + 160), (v155 = (*(unsigned __int16 *)(v156 + 2340) >> 6) & 1) == 0) )
                {
LABEL_402:
                  v356 = v155;
                  goto LABEL_238;
                }
                if ( sub_2DBC5C(*(const char **)(v156 + 544), *(int **)(v303 + 104), 0) )
                {
                  v356 = 0;
                  goto LABEL_238;
                }
              }
              v186 = *(_DWORD *)(v156 + 544);
              (*(void (**)(const char *, ...))(*(_DWORD *)(nmembb + 24) + 52))("%!", v186, v385, *(_DWORD *)(k + 4));
              v187 = *(_DWORD *)(a1 + 160);
              if ( v385 && (*(_WORD *)(v187 + 2340) & 0x200) != 0 )
              {
                sub_2A6A5C("%B: undefined reference to symbol '%s'");
                ((void (__fastcall *)(int))loc_2A6C48)(11);
                goto LABEL_468;
              }
              *(_WORD *)(v187 + 2340) = *(_WORD *)(v187 + 2340) & 0xFC3F | (((*(_WORD *)(v187 + 2340) >> 6) & 0xE) << 6);
              v188 = sub_2E3134((_DWORD *)a1, nmembb, v186, 1);
              if ( v188 < 0 )
                goto LABEL_468;
              if ( v188 )
              {
                v356 = 1;
                sub_2A6BBC("elflink.c", 4946);
                goto LABEL_238;
              }
              v155 = 1;
              goto LABEL_402;
            }
LABEL_361:
            if ( *(_DWORD *)(v84 + 16) )
            {
LABEL_362:
              v146 = *(_DWORD *)(k + 44);
              if ( v319 )
              {
                v213 = v146 == v145;
                if ( v146 != v145 )
                  v213 = v146 == 0;
                if ( !v213 && !v380 )
                {
                  sub_2A6A5C("Warning: size of symbol `%s' changed from %Lu in %B to %Lu in %B", s);
                  v145 = *(_DWORD *)(v84 + 4);
                }
LABEL_364:
                *(_DWORD *)(k + 44) = v145;
              }
              else if ( !v146 )
              {
                goto LABEL_364;
              }
            }
LABEL_365:
            v136 = *(unsigned __int8 *)(k + 12);
            if ( v136 != 5 )
            {
LABEL_366:
              v147 = *(_BYTE *)(v84 + 12) & 0xF;
              if ( (*(_BYTE *)(v84 + 12) & 0xF) == 0 )
                goto LABEL_383;
              v148 = *(unsigned __int8 *)(k + 48);
              if ( v330 )
                v107 = 0;
              if ( !v107 )
              {
LABEL_370:
                v149 = v136 == 5;
                if ( !v382 )
                  v149 = 0;
                if ( !v149 && v148 )
                  goto LABEL_383;
              }
              if ( v147 == 10 )
              {
                if ( (*(_DWORD *)(a1 + 40) & 0x800) != 0 )
                  v147 = 2;
                else
                  v147 = 10;
              }
              if ( v148 != v147 )
              {
                if ( v148 && !v381 )
                  sub_2A6A5C("Warning: type of symbol `%s' changed from %d to %d in %B", s);
                *(_BYTE *)(k + 48) = v147;
              }
              goto LABEL_383;
            }
LABEL_464:
            v136 = 5;
            *(_DWORD *)(k + 44) = *(_DWORD *)(k + 24);
            goto LABEL_366;
          }
LABEL_427:
          v165 = *(_BYTE *)(k + 52);
          v387 = v376;
          s2b = s;
          v369 = (char **)v377;
          if ( (v165 & 2) == 0 )
          {
            v166 = strchr(s, 64);
            na = (size_t)v166;
            if ( (v165 & 6) != 0 )
            {
              if ( v166 )
                goto LABEL_434;
            }
            else
            {
              if ( !v166 )
              {
                *(_BYTE *)(k + 52) = v165 & 0xF9 | 2;
                goto LABEL_460;
              }
              if ( v166[1] != 64 )
              {
                *(_BYTE *)(k + 52) = v165 | 6;
                goto LABEL_460;
              }
              *(_BYTE *)(k + 52) = v165 & 0xF9 | 4;
LABEL_434:
              v371 = *(_DWORD *)(*(_DWORD *)(a1 + 4) + 444);
              v167 = (*(_DWORD *)(a1 + 40) >> 5) & 0xFFFFF;
              v370 = v166 - s2b;
              v372 = *(_BYTE *)(v371 + 464) & 1;
              v168 = (char *)sub_2AAEC8(*(_DWORD *)(nmembb + 28), v166 - s2b + 1);
              v374 = v168;
              if ( !v168 )
                goto LABEL_468;
              memcpy(v168, s2b, v370);
              v374[v370] = 0;
              v388 = 0;
              v389 = 0;
              v393 = v369;
              v394 = (void *)1;
              if ( !sub_2E0958(
                      a1,
                      nmembb,
                      v374,
                      v84,
                      &v393,
                      (unsigned int *)&v387,
                      &v391,
                      &v385,
                      0,
                      0,
                      &v390,
                      &v392,
                      &v388,
                      &v389,
                      (const char **)&v394) )
                goto LABEL_468;
              v373 = v167 & 0x40;
              if ( !v390 )
              {
                v169 = v391;
                if ( (*(_BYTE *)(v391 + 51) & 2) == 0 )
                  goto LABEL_443;
                v170 = *(_DWORD *)(v391 + 64);
                if ( v170 )
                  goto LABEL_439;
                v296 = *(_DWORD *)(nmembb + 132);
                if ( !v296 )
                  goto LABEL_443;
                *(_DWORD *)(v169 + 64) = sub_2FF548(v296, *(_DWORD *)(v391 + 4), &v395);
                v169 = v391;
                v170 = *(_DWORD *)(v391 + 64);
                if ( !v170 )
                  goto LABEL_443;
                if ( v395 )
                {
                  (*(void (__fastcall **)(size_t, int, int))(v371 + 224))(nmembb, v391, 1);
                  goto LABEL_454;
                }
LABEL_439:
                v171 = *(_BYTE *)(na + 1) == 64 ? 2 : 1;
                if ( !strcmp((const char *)(na + v171), *(const char **)(v170 + 4)) )
                {
LABEL_443:
                  v172 = v169;
                  if ( v392 )
                  {
                    if ( (unsigned int)*(unsigned __int8 *)(v169 + 12) - 6 <= 1 )
                    {
                      do
                        v172 = *(_DWORD *)(v172 + 20);
                      while ( (unsigned int)*(unsigned __int8 *)(v172 + 12) - 6 <= 1 );
                      v391 = v172;
                    }
                    v286 = *(_BYTE *)(k + 51);
                    *(_DWORD *)(k + 20) = v172;
                    *(_BYTE *)(k + 12) = 6;
                    if ( (v286 & 8) != 0 )
                    {
                      *(_BYTE *)(k + 51) = v286 & 0xF7;
                      v39 = (*(_BYTE *)(v172 + 51) & 3) == 0;
                      *(_BYTE *)(v172 + 51) |= 4u;
                      if ( !v39 && !sub_2E0858(nmembb, v172) )
                        goto LABEL_468;
                    }
                    v391 = k;
                    v169 = k;
                  }
                  else if ( (*(_BYTE *)nmembb & 3) != 2 )
                  {
                    v395 = v169;
                    if ( !sub_2FD6C4(nmembb, a1, (int)v374, 0x2000, (int)&off_4709F8, v392, s2b, v392, v372, (int)&v395) )
                      goto LABEL_468;
                    v169 = v395;
                    v391 = v395;
                  }
                  if ( *(_BYTE *)(v169 + 12) == 7 )
                  {
                    v169 = *(_DWORD *)(v169 + 20);
                    v391 = v169;
                  }
                  if ( *(_BYTE *)(v169 + 12) == 6 )
                  {
                    v173 = v169;
                    v174 = *(_DWORD *)(v169 + 20);
                    (*(void (__fastcall **)(size_t, int, int))(v371 + 220))(nmembb, v174, v173);
                    v175 = v391;
                    v176 = (*(unsigned __int8 *)(v174 + 52) >> 7) & 1;
                    *(_BYTE *)(v174 + 53) = *(_BYTE *)(v174 + 53) & 0xFE
                                          | *(_BYTE *)(v174 + 53) & 1
                                          | *(_BYTE *)(v391 + 53) & 1;
                    *(_BYTE *)(v175 + 52) = *(_BYTE *)(v175 + 52) & 0x7F
                                          | ((v176 & 1 | (*(_BYTE *)(v175 + 52) >> 7)) << 7);
                    if ( v309 )
                      goto LABEL_453;
                    if ( v373 )
                    {
                      v309 = *(_BYTE *)(v175 + 51) & 1;
                    }
                    else if ( (*(_BYTE *)nmembb & 3u) <= 1 )
                    {
                      v309 = (*(_BYTE *)(v175 + 51) & 0xC) != 0;
                    }
                    else
                    {
LABEL_453:
                      v309 = 1;
                    }
                  }
                }
              }
LABEL_454:
              v375 = strlen(s2b);
              v177 = (char *)sub_2AAEC8(*(_DWORD *)(nmembb + 28), v375);
              v178 = v177;
              if ( !v177 )
                goto LABEL_468;
              memcpy(v177, s2b, v370);
              memcpy((void *)&v178[v370], (const void *)(na + 1), v375 - v370);
              v393 = v369;
              v388 = 0;
              v389 = 0;
              if ( !sub_2E0958(
                      a1,
                      nmembb,
                      v178,
                      v84,
                      &v393,
                      (unsigned int *)&v387,
                      &v391,
                      &v385,
                      0,
                      0,
                      &v390,
                      &v392,
                      &v388,
                      &v389,
                      (const char **)&v394) )
                goto LABEL_468;
              if ( !v390 )
              {
                if ( v392 )
                {
                  if ( (unsigned int)*(unsigned __int8 *)(v391 + 12) - 3 > 1 )
                    sub_2A6A5C("%B: unexpected redefinition of indirect versioned symbol `%s'", a1, v178);
                }
                else
                {
                  v395 = v391;
                  if ( !sub_2FD6C4(nmembb, a1, (int)v178, 0x2000, (int)&off_4709F8, 0, s2b, 0, v372, (int)&v395) )
                    goto LABEL_468;
                  v290 = *(unsigned __int8 *)(v395 + 12);
                  v391 = v395;
                  if ( v290 == 6 )
                  {
                    (*(void (__fastcall **)(size_t, int))(v371 + 220))(nmembb, k);
                    v291 = v391;
                    v292 = (*(unsigned __int8 *)(k + 52) >> 7) & 1;
                    *(_BYTE *)(k + 53) = *(_BYTE *)(k + 53) & 0xFE | *(_BYTE *)(k + 53) & 1 | *(_BYTE *)(v391 + 53) & 1;
                    *(_BYTE *)(v291 + 52) = *(_BYTE *)(v291 + 52) & 0x7F
                                          | ((v292 & 1 | (*(_BYTE *)(v291 + 52) >> 7)) << 7);
                    if ( !v309 )
                    {
                      if ( v373 )
                      {
                        if ( (*(_BYTE *)(v291 + 51) & 1) == 0 )
                          goto LABEL_460;
                      }
                      else if ( (*(_BYTE *)nmembb & 3u) <= 1 && (*(_BYTE *)(v291 + 51) & 4) == 0 )
                      {
                        goto LABEL_460;
                      }
                    }
                    v309 = 1;
                  }
                }
              }
            }
          }
        }
LABEL_460:
        v137 = v384;
        if ( v314 | v384 )
        {
          v136 = *(unsigned __int8 *)(k + 12);
          if ( v136 == 5 )
          {
            v145 = *(_DWORD *)(v84 + 4);
            if ( v145 && *(_DWORD *)(v84 + 16) )
              goto LABEL_362;
            goto LABEL_464;
          }
LABEL_348:
          if ( (unsigned int)(v136 - 3) > 1 )
          {
            sub_2A6BBC("elflink.c", 4740);
            v137 = v384;
          }
          v138 = *(_DWORD *)(k + 20);
          v139 = *(_DWORD *)(k + 24);
          v140 = *(_DWORD *)(v138 + 148);
          v141 = __clz(__rbit32(v139));
          if ( !v139 )
            v141 = -1;
          if ( v140
            && ((unsigned int)&dword_10040 & (*(_DWORD *)(v140 + 40) >> 5)) == 0
            && v141 >= *(_DWORD *)(v138 + 64) )
          {
            v141 = *(_DWORD *)(v138 + 64);
          }
          LOBYTE(v142) = v137;
          if ( v137 )
          {
            if ( v137 > v141 )
            {
              v143 = v385;
              v144 = (char *)a1;
              s2a = s;
              goto LABEL_359;
            }
          }
          else
          {
            v142 = sub_2ABAF4(*(_DWORD *)v84);
            if ( v142 > v141 )
            {
              v144 = v385;
              s2a = s;
              if ( v385 )
              {
                v143 = (char *)a1;
LABEL_359:
                sub_2A6A5C(
                  "Warning: alignment %u of symbol `%s' in %B is smaller than %u in %B",
                  1 << v141,
                  s2a,
                  v144,
                  1 << v142,
                  v143);
              }
              else
              {
                sub_2A6A5C(
                  "Warning: alignment %u of common symbol `%s' in %B is greater than the alignment (%u) of its section %A",
                  1 << v142);
              }
            }
          }
        }
        v145 = *(_DWORD *)(v84 + 4);
        if ( v145 )
          goto LABEL_361;
        goto LABEL_365;
      }
LABEL_238:
      v84 += 20;
      if ( v85 )
        v85 += 2;
      ++v86;
      if ( (unsigned int)v338 <= v84 )
      {
        v5 = v335;
        v3 = nmembb;
        goto LABEL_242;
      }
    }
    v314 = 0;
    v378 = 128;
LABEL_177:
    v377 = (int)&off_4708A8;
    v329 = 0;
    goto LABEL_178;
  }
  v355 = 0;
  v362 = 0;
LABEL_242:
  if ( (*(_BYTE *)(v3 + 1) & 2) != 0
    && (*(_BYTE *)v3 & 3) != 2
    && (*(_DWORD *)(a1 + 40) & 0x200000) == 0
    && v340
    && ((unsigned __int8)v360 ^ 1) & 1 )
  {
    v110 = *(_DWORD **)(a1 + 100);
    v111 = *(_DWORD *)(*(_DWORD *)(a1 + 160) + 536);
    for ( m = *(_BYTE *)(*(_DWORD *)(v304 + 392) + 10) == 32 ? 8 : 32; v110; v110 = (_DWORD *)v110[3] )
    {
      v113 = v110[5];
      if ( (v113 & 4) != 0
        && v110[19]
        && (v113 & 0x8000) == 0
        && ((*(_BYTE *)(v3 + 1) & 0x20) == 0 || (v113 & 0x2000) == 0) )
      {
        v114 = sub_2E2758(a1, (int)v110, 0, 0, (*(unsigned __int8 *)(v3 + 3) >> 2) & 1);
        if ( !v114 )
          goto LABEL_468;
        v115 = &v114[3 * v110[19]];
        if ( v114 < v115 )
        {
          v116 = v114;
          do
          {
            v117 = v116[1] >> m;
            if ( v357 <= v117 )
            {
              v118 = *(_DWORD *)(v111 + 4 * (v117 - v357));
              if ( v118 )
                *(_BYTE *)(v118 + 13) |= 1u;
            }
            v116 += 3;
          }
          while ( v115 > v116 );
        }
        if ( v114 != *(_DWORD **)(v110[35] + 104) )
          free(v114);
      }
    }
  }
  if ( v350 )
    free(v350);
  if ( v344 )
    free(v344);
  v119 = *(_DWORD *)(a1 + 160);
  if ( (*(_WORD *)(v119 + 2340) & 0x40) != 0 )
  {
    memset(*(void **)(v119 + 536), 0, v368);
    v227 = &ptr[v359];
    *(_DWORD *)v303 = dest;
    *(_DWORD *)(v303 + 16) = v367;
    *(_DWORD *)(v303 + 12) = v366;
    memcpy(dest, ptr, v359);
    v228 = *(_DWORD *)(v303 + 84);
    *(_DWORD *)(v303 + 28) = v363;
    *(_DWORD *)(v303 + 32) = v364;
    sub_2F0410(v228, v358);
    free(v358);
    v42 = *(_DWORD *)(v303 + 12);
    if ( v42 )
    {
      for ( ii = 0; ii < v42; ++ii )
      {
        v229 = *(_DWORD **)(*(_DWORD *)v303 + 4 * ii);
        if ( v229 )
        {
          do
          {
            v231 = (unsigned int *)*((unsigned __int8 *)v229 + 12);
            if ( v231 == (unsigned int *)7 )
              v232 = (_DWORD *)v229[5];
            else
              v232 = v229;
            if ( v231 == (unsigned int *)7 )
              v231 = (unsigned int *)*((unsigned __int8 *)v232 + 12);
            v233 = v231 == (unsigned int *)5;
            if ( v231 == (unsigned int *)5 )
              v231 = (unsigned int *)v232[5];
            else
              v5 = 0;
            if ( v233 )
              v234 = v232[6];
            else
              v234 = v5;
            v235 = (*((unsigned __int8 *)v232 + 13) >> 1) & 1;
            if ( v233 )
              v5 = *v231;
            memcpy(v229, v227, *(_DWORD *)(v303 + 20));
            v236 = *((unsigned __int8 *)v229 + 12);
            v237 = *(_DWORD *)(v303 + 20);
            v227 += v237;
            if ( v236 == 7 )
            {
              memcpy((void *)v229[5], v227, v237);
              v238 = (_DWORD *)v229[5];
              v227 += *(_DWORD *)(v303 + 20);
              v236 = *((unsigned __int8 *)v238 + 12);
            }
            else
            {
              v238 = v229;
            }
            if ( v236 == 5 )
            {
              v230 = (unsigned int *)v238[5];
              if ( v238[6] < v234 )
                v238[6] = v234;
              if ( *v230 < v5 )
                *v230 = v5;
            }
            *((_BYTE *)v238 + 13) = *((_BYTE *)v238 + 13) & 0xFD | (2 * (v235 & 1));
            v229 = (_DWORD *)*v229;
          }
          while ( v229 );
          v42 = *(_DWORD *)(v303 + 12);
        }
      }
    }
    if ( !(*(int (__fastcall **)(int, int, int))(v304 + 128))(a1, v3, 1) )
    {
      free(ptr);
      if ( v355 )
        free(v355);
      return 0;
    }
    free(ptr);
    sub_324D80(*(_DWORD *)(v303 + 8));
    if ( v355 )
    {
      v5 = 1;
      free(v355);
      return v5;
    }
    return 1;
  }
  if ( ptr )
  {
    if ( !(*(int (__fastcall **)(int, int, int))(v304 + 128))(a1, v3, 2) )
    {
      v344 = 0;
      v350 = 0;
      goto LABEL_277;
    }
    free(ptr);
  }
  v239 = *(_BYTE *)v3 & 3;
  v240 = v239 == 2;
  if ( v239 != 2 )
    v240 = v355 == 0;
  if ( !v240 )
  {
    if ( v361 )
    {
      for ( jj = 0; jj != v361; ++jj )
      {
        v277 = v355[jj];
        v278 = *(const char **)(v277 + 4);
        v279 = strchr(v278, 64);
        if ( v279 && (unsigned int)*(unsigned __int8 *)(v277 + 12) - 3 <= 1 )
        {
          v280 = v279 - v278;
          v281 = sub_2AB368(v280 + 1);
          v282 = v281;
          if ( !v281 )
          {
            if ( !v358 )
            {
              v344 = 0;
              v350 = 0;
LABEL_281:
              free(v355);
LABEL_126:
              if ( v350 )
LABEL_127:
                free(v350);
LABEL_128:
              if ( !v344 )
                return 0;
LABEL_129:
              v5 = 0;
              free(v344);
              return v5;
            }
            v344 = 0;
            v350 = 0;
LABEL_279:
            free(v358);
LABEL_280:
            if ( v355 )
              goto LABEL_281;
            goto LABEL_126;
          }
          memcpy(v281, *(const void **)(v277 + 4), v280);
          v282[v280] = 0;
          v283 = sub_2FC920(v303, v282, 0);
          v284 = v283;
          if ( v283 )
          {
            if ( *(unsigned __int8 *)(v283 + 12) == *(unsigned __int8 *)(v277 + 12)
              && *(_DWORD *)(v283 + 24) == *(_DWORD *)(v277 + 24)
              && *(_DWORD *)(v283 + 20) == *(_DWORD *)(v277 + 20) )
            {
              (*(void (__fastcall **)(int, int, int))(v304 + 224))(v3, v283, 1);
              *(_BYTE *)(v284 + 12) = 6;
              *(_DWORD *)(v284 + 20) = v277;
              (*(void (__fastcall **)(int, int, int))(v304 + 220))(v3, v277, v284);
              v287 = *(_DWORD **)(*(_DWORD *)(a1 + 160) + 536);
              if ( v287 )
              {
                for ( kk = 0; v340 != kk; ++kk )
                {
                  v289 = v287++;
                  if ( v284 == *v289 )
                  {
                    *v289 = v277;
                    break;
                  }
                }
              }
            }
          }
          free(v282);
        }
      }
    }
    free(v355);
  }
  if ( !v362 )
    goto LABEL_697;
  v241 = (char *)sub_2AB368(v368);
  v242 = v241;
  if ( !v241 )
    return 0;
  v243 = *(_DWORD *)(*(_DWORD *)(a1 + 160) + 536);
  if ( v243 >= v243 + v368 )
  {
    nmembc = 0;
    qsort(v241, 0, 4u, (__compar_fn_t)sub_2DB80C);
  }
  else
  {
    v244 = v243 - 4;
    v245 = v241;
    v246 = v243 + ((v243 + v368 + ~v243) & 0xFFFFFFFC);
    nmembc = 0;
    do
    {
      v248 = *(_DWORD *)(v244 + 4);
      v244 += 4;
      v247 = v248;
      if ( v248
        && *(_BYTE *)(v247 + 12) == 3
        && !(*(int (__fastcall **)(_DWORD))(v304 + 360))(*(unsigned __int8 *)(v247 + 48)) )
      {
        *(_DWORD *)v245 = v247;
        v245 += 4;
        ++nmembc;
      }
    }
    while ( v246 != v244 );
    qsort(v242, nmembc, 4u, (__compar_fn_t)sub_2DB80C);
  }
  v249 = v362;
  while ( 2 )
  {
    v250 = *(unsigned __int8 *)(v249 + 12);
    v251 = *(_DWORD *)(v249 + 60);
    *(_DWORD *)(v249 + 60) = 0;
    if ( (unsigned int)(v250 - 3) > 1 )
      goto LABEL_661;
    v252 = nmembc;
    v253 = *(_DWORD *)(v249 + 20);
    v254 = *(_DWORD *)(v249 + 24);
    if ( !nmembc )
      goto LABEL_661;
    v255 = 0;
    while ( 1 )
    {
      v256 = (v252 + v255) >> 1;
      v257 = *(_DWORD *)&v242[4 * v256];
      v258 = &v242[4 * v256];
      if ( v254 - *(_DWORD *)(v257 + 24) < 0 )
        goto LABEL_670;
      if ( v254 == *(_DWORD *)(v257 + 24) )
        break;
      v255 = v256 + 1;
LABEL_668:
      if ( v252 == v255 )
        goto LABEL_661;
    }
    v259 = *(_DWORD *)(*(_DWORD *)(v257 + 20) + 4);
    if ( *(_DWORD *)(v253 + 4) - v259 < 0 )
    {
LABEL_670:
      v252 = (v252 + v255) >> 1;
      goto LABEL_668;
    }
    v260 = v256 + 1;
    if ( *(_DWORD *)(v253 + 4) != v259 )
    {
      v255 = v260;
      goto LABEL_668;
    }
    while ( v260 != v252 )
    {
      v262 = *((_DWORD *)v258 + 1);
      v258 += 4;
      v261 = v262;
      if ( v253 != *(_DWORD *)(v262 + 20) || v254 != *(_DWORD *)(v261 + 24) )
        break;
      ++v260;
    }
    v263 = &v242[4 * v260];
    v264 = v255 - 1;
    v265 = v260 - 1;
    do
    {
      if ( v265 == v264 )
        goto LABEL_661;
      v267 = (_DWORD *)*((_DWORD *)v263 - 1);
      v263 -= 4;
      v266 = v267;
      if ( v253 != v267[5] || v254 != v266[6] )
        goto LABEL_661;
      --v265;
    }
    while ( v266 == (_DWORD *)v249 );
    v268 = *(_BYTE *)(v249 + 53);
    *(_DWORD *)(v249 + 60) = v266;
    *(_BYTE *)(v249 + 53) = v268 | 0x20;
    v269 = v266;
    if ( v266[15] )
    {
      while ( v266 != (_DWORD *)v269[15] )
        v269 = (_DWORD *)v269[15];
    }
    v270 = *(_DWORD *)(v249 + 32);
    v269[15] = v249;
    v271 = v266[8];
    if ( v270 == -1 )
    {
      if ( v271 == -1 )
        goto LABEL_661;
LABEL_692:
      if ( sub_2E0858(v3, v249) )
        goto LABEL_661;
LABEL_693:
      v5 = 0;
      free(v242);
      return v5;
    }
    if ( v271 != -1 )
      goto LABEL_661;
    v310 = v266;
    if ( !sub_2E0858(v3, (int)v266) )
      goto LABEL_693;
    if ( v310[8] != -1 && *(_DWORD *)(v249 + 32) == -1 )
      goto LABEL_692;
LABEL_661:
    v249 = v251;
    if ( v251 )
      continue;
    break;
  }
  free(v242);
LABEL_697:
  v272 = *(int (__fastcall **)(int, int))(v304 + 124);
  if ( v272 && !v272(a1, v3) )
    return 0;
  if ( v5 )
    goto LABEL_733;
  v273 = *(_DWORD *)(v303 + 40);
  if ( (*(_BYTE *)(v3 + 4) & 0x10) != 0 )
    goto LABEL_703;
  if ( v273 != 1 )
    return 1;
  if ( (*(_BYTE *)(v3 + 1) & 0x20) != 0 )
    goto LABEL_703;
  v293 = sub_2AD7AC(a1, ".stabstr");
  if ( v293 )
  {
    v294 = *(_DWORD *)(a1 + 100);
    v395 = 0;
    while ( v294 )
    {
      v295 = *(const char **)v294;
      if ( !strncmp(*(const char **)v294, ".stab", 5u)
        && (!v295[5] || v295[5] == 46 && (word_438898[*((unsigned __int8 *)v295 + 6)] & 4) != 0)
        && (*(_DWORD *)(v294 + 20) & 0x800000) == 0
        && *(char ***)(v294 + 60) != &off_470950 )
      {
        v297 = *(_DWORD *)(v294 + 140);
        if ( !sub_301CE4(a1, v303 + 132, v294, v293, v297 + 136, &v395) )
          return 0;
        if ( *(_DWORD *)(v297 + 136) )
          *(_WORD *)(v294 + 24) = *(_WORD *)(v294 + 24) & 0xFC7F | 0x80;
      }
      v294 = *(_DWORD *)(v294 + 12);
    }
  }
LABEL_733:
  v273 = *(_DWORD *)(v303 + 40);
LABEL_703:
  if ( v273 != 1 || !v356 )
    return 1;
  v275 = (_DWORD *)sub_2ACBF4(a1, 8);
  if ( v275 )
  {
    v5 = 1;
    *v275 = *(_DWORD *)(v303 + 212);
    v275[1] = a1;
    *(_DWORD *)(v303 + 212) = v275;
    return v5;
  }
  return 0;
}
