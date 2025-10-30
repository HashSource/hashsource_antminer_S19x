int __fastcall sub_13D09C(int a1, FILE *a2, FILE *a3)
{
  __int64 v3; // r0
  int v4; // r1
  int v5; // r0
  _DWORD *v6; // r2
  int v7; // r12
  unsigned int v8; // r7
  const char *v9; // r5
  _DWORD *v10; // r0
  int v11; // r4
  void *v12; // r6
  int v13; // r2
  _DWORD *v14; // r7
  unsigned __int8 *v15; // r9
  unsigned __int8 v16; // r0
  int v17; // t1
  int v18; // r9
  int *v19; // r0
  int v20; // r7
  unsigned int v21; // r0
  int v22; // r3
  unsigned int v23; // r4
  int v24; // r6
  int v25; // r0
  int v26; // r7
  int v27; // r3
  int v28; // r0
  int v29; // r5
  int v30; // r4
  int v31; // r6
  int v32; // r7
  int v33; // r0
  int v34; // r6
  int v35; // r3
  unsigned int v36; // r0
  unsigned int v37; // r0
  unsigned int v38; // r3
  int v39; // r4
  unsigned int v40; // r0
  unsigned int v41; // r3
  int v42; // r4
  unsigned int v43; // r0
  unsigned int v44; // r0
  unsigned int v45; // r3
  unsigned int v46; // r0
  bool v47; // cf
  int v48; // r4
  unsigned int v49; // r3
  unsigned int v50; // r0
  bool v51; // cf
  int v52; // r4
  int v53; // r4
  unsigned int v54; // r3
  unsigned int v55; // r0
  unsigned int v56; // r3
  unsigned int v57; // r0
  unsigned int v58; // r2
  _DWORD *v59; // r0
  _DWORD *v60; // r4
  int v62; // r2
  bool v63; // cc
  int v64; // r5
  int v65; // r2
  char *v66; // r5
  int v67; // r3
  int v68; // r7
  int nn; // r2
  int v70; // t1
  char v71; // r3
  unsigned __int8 v72; // r3
  _DWORD *v73; // r0
  int v74; // r3
  _DWORD *v75; // r8
  char *v76; // r2
  int *v77; // r12
  int *v78; // r0
  int v79; // r1
  int v80; // r2
  unsigned __int8 *v81; // r6
  int v82; // r4
  unsigned __int8 v83; // r0
  int v84; // t1
  int v85; // r9
  const char ***v86; // r6
  const char *v87; // r5
  const char **v88; // r11
  int v89; // r6
  int v90; // r5
  int v91; // r2
  char *v92; // r5
  int v93; // r3
  int v94; // r8
  int i1; // r2
  int v96; // t1
  char v97; // r3
  unsigned __int8 v98; // r3
  char *v99; // r0
  int v100; // r3
  char *v101; // r7
  char *v102; // r2
  void **v103; // r12
  int *v104; // r0
  int v105; // r1
  int v106; // r2
  unsigned __int8 *v107; // r6
  int v108; // r4
  unsigned __int8 v109; // r0
  int v110; // t1
  int v111; // r9
  const char ***v112; // r6
  const char **v113; // r5
  const char *v114; // r7
  int v115; // r6
  unsigned int v116; // r3
  unsigned int v117; // r3
  int v118; // r3
  int v119; // r5
  int v120; // r2
  char *v121; // r5
  int v122; // r3
  char *v123; // r7
  int kk; // r2
  int v125; // t1
  char v126; // r3
  unsigned __int8 v127; // r3
  _DWORD *v128; // r0
  int v129; // r3
  _DWORD *v130; // r8
  char *v131; // r2
  int *v132; // r12
  int *v133; // r0
  int v134; // r1
  int v135; // r2
  unsigned __int8 *v136; // r6
  int v137; // r4
  unsigned __int8 v138; // r0
  int v139; // t1
  int v140; // r9
  const char ***v141; // r6
  const char **v142; // r5
  const char *v143; // r7
  int v144; // r6
  int v145; // r5
  int v146; // r2
  char *v147; // r5
  int v148; // r3
  char *v149; // r7
  int mm; // r2
  int v151; // t1
  char v152; // r3
  unsigned __int8 v153; // r3
  _DWORD *v154; // r0
  int v155; // r3
  _DWORD *v156; // r8
  char *v157; // r2
  int *v158; // r12
  int *v159; // r0
  int v160; // r1
  int v161; // r2
  unsigned __int8 *v162; // r6
  int v163; // r4
  unsigned __int8 v164; // r0
  int v165; // t1
  int v166; // r9
  const char ***v167; // r6
  const char **v168; // r5
  char *v169; // r10
  const char *v170; // r7
  int v171; // r6
  unsigned int v172; // r3
  unsigned int v173; // r3
  int v174; // r3
  int v175; // r5
  int v176; // r2
  char *v177; // r5
  int v178; // r3
  char *v179; // r7
  int ii; // r2
  int v181; // t1
  char v182; // r3
  unsigned __int8 v183; // r3
  _DWORD *v184; // r0
  int v185; // r3
  _DWORD *v186; // r8
  char *v187; // r2
  int *v188; // r12
  int *v189; // r0
  int v190; // r1
  int v191; // r2
  unsigned __int8 *v192; // r6
  int v193; // r4
  unsigned __int8 v194; // r0
  int v195; // t1
  int v196; // r9
  const char ***v197; // r6
  const char **v198; // r5
  char *v199; // r10
  const char *v200; // r7
  int v201; // r6
  int v202; // r5
  int v203; // r2
  char *v204; // r5
  int v205; // r3
  char *v206; // r7
  int jj; // r2
  int v208; // t1
  char v209; // r3
  unsigned __int8 v210; // r3
  _DWORD *v211; // r0
  int v212; // r3
  _DWORD *v213; // r9
  char *v214; // r2
  int *v215; // r12
  int *v216; // r0
  int v217; // r1
  int v218; // r2
  unsigned __int8 *v219; // r6
  int v220; // r4
  unsigned __int8 v221; // r0
  int v222; // t1
  int v223; // r8
  const char ***v224; // r6
  const char **v225; // r5
  char *v226; // r10
  const char *v227; // r7
  int v228; // r6
  unsigned int v229; // r3
  unsigned int v230; // r3
  int v231; // r3
  __int64 v232; // r0
  int v233; // r5
  int v234; // r2
  char *v235; // r5
  int v236; // r3
  char *v237; // r7
  int m; // r2
  int v239; // t1
  char v240; // r3
  unsigned __int8 v241; // r3
  _DWORD *v242; // r0
  int v243; // r3
  _DWORD *v244; // r9
  char *v245; // r2
  int *v246; // r12
  int *v247; // r0
  int v248; // r1
  int v249; // r2
  unsigned __int8 *v250; // r6
  int v251; // r4
  unsigned __int8 v252; // r0
  int v253; // t1
  int v254; // r8
  const char ***v255; // r6
  const char **v256; // r5
  char *v257; // r10
  const char *v258; // r7
  int v259; // r6
  int v260; // r5
  int v261; // r2
  char *v262; // r5
  int v263; // r3
  int v264; // r7
  int n; // r2
  int v266; // t1
  char v267; // r3
  unsigned __int8 v268; // r3
  _DWORD *v269; // r0
  int v270; // r3
  _DWORD *v271; // r8
  char *v272; // r2
  int *v273; // r12
  int *v274; // r0
  int v275; // r1
  int v276; // r2
  unsigned __int8 *v277; // r6
  int v278; // r4
  unsigned __int8 v279; // r0
  int v280; // t1
  int v281; // r9
  const char ***v282; // r6
  const char *v283; // r5
  const char **v284; // r11
  int v285; // r6
  unsigned int v286; // r3
  unsigned int v287; // r3
  int v288; // r3
  int i; // r4
  int v290; // r5
  int v291; // r2
  int v292; // r5
  int v293; // r3
  int v294; // r7
  int j; // r2
  int v296; // t1
  char v297; // r3
  unsigned __int8 v298; // r3
  _DWORD *v299; // r0
  int v300; // r3
  _DWORD *v301; // r9
  char *v302; // r2
  int *v303; // r12
  int *v304; // r0
  int v305; // r1
  int v306; // r2
  unsigned __int8 *v307; // r6
  int v308; // r4
  unsigned __int8 v309; // r0
  int v310; // t1
  int v311; // r8
  const char ***v312; // r6
  const char **v313; // r5
  int v314; // r10
  const char *v315; // r7
  int v316; // r6
  int v317; // r5
  int v318; // r2
  char *v319; // r5
  int v320; // r3
  int v321; // r7
  int k; // r2
  int v323; // t1
  char v324; // r3
  unsigned __int8 v325; // r3
  _DWORD *v326; // r0
  int v327; // r3
  _DWORD *v328; // r8
  char *v329; // r2
  int *v330; // r12
  int *v331; // r0
  int v332; // r1
  int v333; // r2
  unsigned __int8 *v334; // r6
  int v335; // r4
  unsigned __int8 v336; // r0
  int v337; // t1
  int v338; // r9
  const char ***v339; // r6
  const char **v340; // r5
  int v341; // r10
  const char *v342; // r7
  int v343; // r6
  unsigned int v344; // r3
  unsigned int v345; // r3
  void *v346; // r0
  int v347; // [sp+10h] [bp-40Ch]
  int v348; // [sp+14h] [bp-408h]
  char *v349; // [sp+18h] [bp-404h]
  char *v350; // [sp+18h] [bp-404h]
  int *v351; // [sp+20h] [bp-3FCh]
  char *s1; // [sp+28h] [bp-3F4h]
  char *s1a; // [sp+28h] [bp-3F4h]
  char *s1b; // [sp+28h] [bp-3F4h]
  char *v356; // [sp+30h] [bp-3ECh]
  char *v357; // [sp+30h] [bp-3ECh]
  char *v358; // [sp+30h] [bp-3ECh]
  char *v359; // [sp+30h] [bp-3ECh]
  int v360; // [sp+34h] [bp-3E8h]
  int v361; // [sp+34h] [bp-3E8h]
  char *v362; // [sp+34h] [bp-3E8h]
  char *v363; // [sp+34h] [bp-3E8h]
  char *v364; // [sp+34h] [bp-3E8h]
  char *v365; // [sp+38h] [bp-3E4h]
  char *v366; // [sp+38h] [bp-3E4h]
  char *v367; // [sp+38h] [bp-3E4h]
  char *v368; // [sp+38h] [bp-3E4h]
  char *v369; // [sp+38h] [bp-3E4h]
  char *v370; // [sp+38h] [bp-3E4h]
  char *v371; // [sp+38h] [bp-3E4h]
  char *v372; // [sp+40h] [bp-3DCh]
  int v373; // [sp+40h] [bp-3DCh]
  char *v374; // [sp+40h] [bp-3DCh]
  char *v375; // [sp+40h] [bp-3DCh]
  char *v376; // [sp+40h] [bp-3DCh]
  int v377; // [sp+44h] [bp-3D8h]
  char *v378; // [sp+44h] [bp-3D8h]
  char *v379; // [sp+44h] [bp-3D8h]
  char *v380; // [sp+44h] [bp-3D8h]
  char *v381; // [sp+44h] [bp-3D8h]
  char *v382; // [sp+44h] [bp-3D8h]
  char *v384; // [sp+4Ch] [bp-3D0h]
  char *v385; // [sp+4Ch] [bp-3D0h]
  char *v386; // [sp+4Ch] [bp-3D0h]
  int v387; // [sp+4Ch] [bp-3D0h]
  char *v388; // [sp+4Ch] [bp-3D0h]
  char *v389; // [sp+4Ch] [bp-3D0h]
  char *v390; // [sp+4Ch] [bp-3D0h]
  int v392; // [sp+54h] [bp-3C8h]
  char *v393; // [sp+54h] [bp-3C8h]
  char *v394; // [sp+54h] [bp-3C8h]
  int v395; // [sp+54h] [bp-3C8h]
  char *v396; // [sp+54h] [bp-3C8h]
  char *v397; // [sp+58h] [bp-3C4h]
  char *v398; // [sp+58h] [bp-3C4h]
  char *v399; // [sp+58h] [bp-3C4h]
  char *v400; // [sp+58h] [bp-3C4h]
  char *v401; // [sp+58h] [bp-3C4h]
  int v402; // [sp+5Ch] [bp-3C0h]
  int v403; // [sp+5Ch] [bp-3C0h]
  int v404; // [sp+5Ch] [bp-3C0h]
  int v405; // [sp+5Ch] [bp-3C0h]
  int v406; // [sp+60h] [bp-3BCh]
  int v407; // [sp+60h] [bp-3BCh]
  int v408; // [sp+60h] [bp-3BCh]
  int v409; // [sp+64h] [bp-3B8h]
  char v410[4]; // [sp+6Ch] [bp-3B0h] BYREF
  char v411[4]; // [sp+70h] [bp-3ACh] BYREF
  char v412[4]; // [sp+74h] [bp-3A8h] BYREF
  int v413; // [sp+78h] [bp-3A4h] BYREF
  int v414; // [sp+7Ch] [bp-3A0h] BYREF
  int v415; // [sp+80h] [bp-39Ch] BYREF
  int v416; // [sp+84h] [bp-398h] BYREF
  int v417; // [sp+88h] [bp-394h] BYREF
  int v418; // [sp+8Ch] [bp-390h] BYREF
  int v419; // [sp+90h] [bp-38Ch] BYREF
  int v420; // [sp+94h] [bp-388h] BYREF
  int v421; // [sp+98h] [bp-384h] BYREF
  int v422; // [sp+9Ch] [bp-380h] BYREF
  _BYTE v423[8]; // [sp+A0h] [bp-37Ch] BYREF
  char v424[8]; // [sp+A8h] [bp-374h] BYREF
  _BYTE v425[8]; // [sp+B0h] [bp-36Ch] BYREF
  char v426[8]; // [sp+B8h] [bp-364h] BYREF
  _BYTE v427[8]; // [sp+C0h] [bp-35Ch] BYREF
  char v428[8]; // [sp+C8h] [bp-354h] BYREF
  _BYTE v429[8]; // [sp+D0h] [bp-34Ch] BYREF
  char v430[8]; // [sp+D8h] [bp-344h] BYREF
  _BYTE v431[8]; // [sp+E0h] [bp-33Ch] BYREF
  char v432[8]; // [sp+E8h] [bp-334h] BYREF
  _BYTE v433[8]; // [sp+F0h] [bp-32Ch] BYREF
  char v434[8]; // [sp+F8h] [bp-324h] BYREF
  _BYTE v435[8]; // [sp+100h] [bp-31Ch] BYREF
  char v436[8]; // [sp+108h] [bp-314h] BYREF
  _BYTE v437[8]; // [sp+110h] [bp-30Ch] BYREF
  char v438[8]; // [sp+118h] [bp-304h] BYREF
  _BYTE v439[8]; // [sp+120h] [bp-2FCh] BYREF
  char v440[8]; // [sp+128h] [bp-2F4h] BYREF
  _BYTE v441[8]; // [sp+130h] [bp-2ECh] BYREF
  char v442[8]; // [sp+138h] [bp-2E4h] BYREF
  void *v443; // [sp+140h] [bp-2DCh] BYREF
  int v444; // [sp+144h] [bp-2D8h]
  int v445; // [sp+148h] [bp-2D4h]
  void *v446; // [sp+14Ch] [bp-2D0h] BYREF
  int v447; // [sp+150h] [bp-2CCh]
  int v448; // [sp+154h] [bp-2C8h]
  void *ptr; // [sp+158h] [bp-2C4h] BYREF
  unsigned int v450; // [sp+15Ch] [bp-2C0h]
  int v451; // [sp+160h] [bp-2BCh]
  _DWORD v452[2]; // [sp+164h] [bp-2B8h] BYREF
  char v453; // [sp+16Ch] [bp-2B0h]
  int v454; // [sp+170h] [bp-2ACh]
  _DWORD v455[2]; // [sp+174h] [bp-2A8h] BYREF
  char v456; // [sp+17Ch] [bp-2A0h]
  int v457; // [sp+180h] [bp-29Ch]
  _DWORD v458[2]; // [sp+184h] [bp-298h] BYREF
  char v459; // [sp+18Ch] [bp-290h]
  int v460; // [sp+190h] [bp-28Ch]
  _DWORD v461[2]; // [sp+194h] [bp-288h] BYREF
  char v462; // [sp+19Ch] [bp-280h]
  int v463; // [sp+1A0h] [bp-27Ch]
  _DWORD v464[2]; // [sp+1A4h] [bp-278h] BYREF
  char v465; // [sp+1ACh] [bp-270h]
  int v466; // [sp+1B0h] [bp-26Ch]
  _DWORD v467[2]; // [sp+1B4h] [bp-268h] BYREF
  char v468; // [sp+1BCh] [bp-260h]
  int v469; // [sp+1C0h] [bp-25Ch]
  _DWORD v470[2]; // [sp+1C4h] [bp-258h] BYREF
  char v471; // [sp+1CCh] [bp-250h]
  int v472; // [sp+1D0h] [bp-24Ch]
  _DWORD v473[2]; // [sp+1D4h] [bp-248h] BYREF
  char v474; // [sp+1DCh] [bp-240h]
  int v475; // [sp+1E0h] [bp-23Ch]
  _DWORD v476[2]; // [sp+1E4h] [bp-238h] BYREF
  char v477; // [sp+1ECh] [bp-230h]
  int v478; // [sp+1F0h] [bp-22Ch]
  _DWORD v479[2]; // [sp+1F4h] [bp-228h] BYREF
  char v480; // [sp+1FCh] [bp-220h]
  int v481; // [sp+200h] [bp-21Ch]
  int v482; // [sp+204h] [bp-218h] BYREF
  int v483; // [sp+208h] [bp-214h] BYREF
  int v484; // [sp+20Ch] [bp-210h]
  int *v485; // [sp+210h] [bp-20Ch]
  int *v486; // [sp+214h] [bp-208h]
  int v487; // [sp+218h] [bp-204h]
  int v488; // [sp+21Ch] [bp-200h] BYREF
  int v489; // [sp+220h] [bp-1FCh] BYREF
  int v490; // [sp+224h] [bp-1F8h]
  int *v491; // [sp+228h] [bp-1F4h]
  int *v492; // [sp+22Ch] [bp-1F0h]
  int v493; // [sp+230h] [bp-1ECh]
  int v494; // [sp+234h] [bp-1E8h] BYREF
  int v495; // [sp+238h] [bp-1E4h] BYREF
  int v496; // [sp+23Ch] [bp-1E0h]
  int *v497; // [sp+240h] [bp-1DCh]
  int *v498; // [sp+244h] [bp-1D8h]
  int v499; // [sp+248h] [bp-1D4h]
  int v500; // [sp+24Ch] [bp-1D0h] BYREF
  int v501; // [sp+250h] [bp-1CCh] BYREF
  int v502; // [sp+254h] [bp-1C8h]
  int *v503; // [sp+258h] [bp-1C4h]
  int *v504; // [sp+25Ch] [bp-1C0h]
  int v505; // [sp+260h] [bp-1BCh]
  int v506; // [sp+264h] [bp-1B8h] BYREF
  int v507; // [sp+268h] [bp-1B4h] BYREF
  int v508; // [sp+26Ch] [bp-1B0h]
  int *v509; // [sp+270h] [bp-1ACh]
  int *v510; // [sp+274h] [bp-1A8h]
  int v511; // [sp+278h] [bp-1A4h]
  int v512; // [sp+27Ch] [bp-1A0h] BYREF
  int v513; // [sp+280h] [bp-19Ch] BYREF
  int v514; // [sp+284h] [bp-198h]
  int *v515; // [sp+288h] [bp-194h]
  int *v516; // [sp+28Ch] [bp-190h]
  int v517; // [sp+290h] [bp-18Ch]
  int v518; // [sp+294h] [bp-188h] BYREF
  int v519; // [sp+298h] [bp-184h] BYREF
  int v520; // [sp+29Ch] [bp-180h]
  int *v521; // [sp+2A0h] [bp-17Ch]
  int *v522; // [sp+2A4h] [bp-178h]
  int v523; // [sp+2A8h] [bp-174h]
  int v524; // [sp+2ACh] [bp-170h] BYREF
  int v525; // [sp+2B0h] [bp-16Ch] BYREF
  int v526; // [sp+2B4h] [bp-168h]
  int *v527; // [sp+2B8h] [bp-164h]
  int *v528; // [sp+2BCh] [bp-160h]
  int v529; // [sp+2C0h] [bp-15Ch]
  int v530; // [sp+2C4h] [bp-158h] BYREF
  int v531; // [sp+2C8h] [bp-154h] BYREF
  int v532; // [sp+2CCh] [bp-150h]
  int *v533; // [sp+2D0h] [bp-14Ch]
  int *v534; // [sp+2D4h] [bp-148h]
  int v535; // [sp+2D8h] [bp-144h]
  int **v536; // [sp+2DCh] [bp-140h] BYREF
  int v537; // [sp+2E0h] [bp-13Ch] BYREF
  int v538; // [sp+2E4h] [bp-138h]
  void **v539; // [sp+2E8h] [bp-134h]
  int *v540; // [sp+2ECh] [bp-130h]
  int v541; // [sp+2F0h] [bp-12Ch]
  _DWORD v542[7]; // [sp+2F4h] [bp-128h] BYREF
  int *v543; // [sp+310h] [bp-10Ch] BYREF
  int v544; // [sp+314h] [bp-108h]
  int v545; // [sp+318h] [bp-104h]
  int v546; // [sp+31Ch] [bp-100h]
  int v547; // [sp+320h] [bp-FCh]
  int v548; // [sp+324h] [bp-F8h]
  int v549; // [sp+328h] [bp-F4h] BYREF
  void *v550; // [sp+32Ch] [bp-F0h]
  int v551; // [sp+330h] [bp-ECh]
  int v552; // [sp+334h] [bp-E8h]
  void *v553; // [sp+338h] [bp-E4h]
  int v554; // [sp+33Ch] [bp-E0h]
  int v555; // [sp+340h] [bp-DCh]
  int v556; // [sp+344h] [bp-D8h]
  _DWORD v557[2]; // [sp+348h] [bp-D4h] BYREF
  _DWORD v558[2]; // [sp+350h] [bp-CCh] BYREF
  void *v559; // [sp+358h] [bp-C4h]
  int v560; // [sp+35Ch] [bp-C0h]
  int v561; // [sp+360h] [bp-BCh]
  _DWORD v562[2]; // [sp+364h] [bp-B8h] BYREF
  void *v563; // [sp+36Ch] [bp-B0h]
  int v564; // [sp+370h] [bp-ACh]
  int v565; // [sp+374h] [bp-A8h]
  _DWORD v566[2]; // [sp+378h] [bp-A4h] BYREF
  _DWORD v567[2]; // [sp+380h] [bp-9Ch] BYREF
  void *v568; // [sp+388h] [bp-94h]
  int v569; // [sp+38Ch] [bp-90h]
  int v570; // [sp+390h] [bp-8Ch]
  _DWORD v571[2]; // [sp+394h] [bp-88h] BYREF
  void *v572; // [sp+39Ch] [bp-80h]
  int v573; // [sp+3A0h] [bp-7Ch]
  int v574; // [sp+3A4h] [bp-78h]
  _DWORD *v575; // [sp+3A8h] [bp-74h]
  _DWORD *v576; // [sp+3ACh] [bp-70h]
  _DWORD *v577; // [sp+3B0h] [bp-6Ch]
  int *v578; // [sp+3B4h] [bp-68h] BYREF
  int v579; // [sp+3B8h] [bp-64h]
  int v580; // [sp+3BCh] [bp-60h]
  int v581; // [sp+3C0h] [bp-5Ch]
  int v582; // [sp+3C4h] [bp-58h]
  int v583; // [sp+3C8h] [bp-54h]
  int v584; // [sp+3CCh] [bp-50h] BYREF
  _DWORD *v585; // [sp+3D0h] [bp-4Ch]
  void *v586; // [sp+3D4h] [bp-48h]
  int v587; // [sp+3D8h] [bp-44h]
  int v588; // [sp+3DCh] [bp-40h]
  void *s; // [sp+3E0h] [bp-3Ch]
  int v590; // [sp+3E4h] [bp-38h]
  void *v591; // [sp+3E8h] [bp-34h]
  int v592; // [sp+3ECh] [bp-30h]
  int v593; // [sp+3F0h] [bp-2Ch]
  int v594; // [sp+3F4h] [bp-28h]
  _DWORD v595[2]; // [sp+3F8h] [bp-24h] BYREF
  void *v596; // [sp+400h] [bp-1Ch]
  _BYTE *v597; // [sp+404h] [bp-18h]
  int v598; // [sp+408h] [bp-14h]
  void *v599; // [sp+40Ch] [bp-10h]
  int v600; // [sp+410h] [bp-Ch]
  int v601; // [sp+414h] [bp-8h]

  v3 = sub_1B7250(a1);
  v348 = ((int (__fastcall *)(_DWORD, _DWORD))loc_165BB8)(v3, HIDWORD(v3));
  v543 = &v549;
  v558[0] = &off_39EA40;
  v562[0] = &off_39EA40;
  v544 = 1;
  v557[0] = v558;
  v557[1] = v562;
  v556 = v348;
  v558[1] = v348;
  v562[1] = v348;
  v567[1] = v348;
  v547 = 1065353216;
  v443 = 0;
  v444 = 0;
  v445 = 0;
  v545 = 0;
  v546 = 0;
  v548 = 0;
  v549 = 0;
  v550 = 0;
  v551 = 0;
  v552 = 0;
  v553 = 0;
  v554 = 0;
  v555 = 0;
  v559 = 0;
  v560 = 0;
  v561 = 0;
  v563 = 0;
  v564 = 0;
  v565 = 0;
  v566[0] = v567;
  v566[1] = v571;
  v4 = dword_4872D8;
  v576 = v558;
  v579 = 1;
  v5 = *(_DWORD *)(dword_4872D8 + 344);
  v582 = 1065353216;
  v577 = v562;
  v6 = *(_DWORD **)(v5 + 36);
  v580 = 0;
  v581 = 0;
  v585 = v6;
  v583 = 0;
  v584 = 0;
  v586 = 0;
  v587 = 0;
  v588 = 0;
  v578 = &v584;
  v7 = *(unsigned __int8 *)(dword_4872D8 + 156);
  v568 = 0;
  v569 = 0;
  v567[0] = &off_39EA58;
  v570 = 0;
  v571[1] = v348;
  v571[0] = &off_39EA58;
  v572 = 0;
  v573 = 0;
  v574 = 0;
  v575 = v557;
  if ( !v7 )
  {
    ((void (*)(void))loc_11FFD0)();
    v4 = dword_4872D8;
  }
  v8 = *(_DWORD *)(v4 + 144);
  if ( v8 && v8 < v8 + *(_DWORD *)(v4 + 148) )
  {
    v9 = *(const char **)(v4 + 144);
    do
    {
      v10 = sub_9836C(0x10u);
      v11 = 0;
      v10[1] = v9;
      v10[2] = &v9[-v8];
      *v10 = 0;
      v12 = v10;
      v13 = *(unsigned __int8 *)v9;
      v14 = v10 + 1;
      v15 = (unsigned __int8 *)(v9 + 1);
      if ( *v9 )
      {
        do
        {
          v16 = tolower(v13);
          v17 = *v15++;
          v13 = v17;
          v11 = v16 + 67 * v11 - 113;
        }
        while ( v17 );
      }
      else
      {
        v11 = *(unsigned __int8 *)v9;
      }
      v18 = (unsigned __int64)sub_347674(v11, v579) >> 32;
      v19 = (int *)sub_149BCC(&v578, v18, v14, v11);
      if ( v19 && (v20 = *v19) != 0 )
      {
        sub_339E64(v12);
        v542[0] = v20;
        if ( dword_47AC88 > 0 )
          sub_F43B4(&off_46D334, "Duplicate string \"%s\" in .debug_str section [in module %s]", v9, *v585);
      }
      else
      {
        sub_14A5C8(&v578, v18, v11, v12);
      }
      v9 += strlen(v9) + 1;
      v8 = *(_DWORD *)(dword_4872D8 + 144);
    }
    while ( (unsigned int)v9 < v8 + *(_DWORD *)(dword_4872D8 + 148) );
  }
  v593 = 1065353216;
  v590 = 1;
  s = v595;
  v595[1] = 1;
  v591 = 0;
  v592 = 0;
  v594 = 0;
  v595[0] = 0;
  v596 = 0;
  v597 = 0;
  v598 = 0;
  v599 = 0;
  v600 = 0;
  v601 = 0;
  v21 = sub_11C568();
  sub_149930(v542, v21, &v524, v410, v411, &v530, v412, &v536);
  v22 = dword_4872D8;
  if ( *(int *)(dword_4872D8 + 352) > 0 )
  {
    v347 = 0;
    while ( 1 )
    {
      v351 = *(int **)(*(_DWORD *)(v22 + 348) + 4 * v347);
      v349 = (char *)v351[6];
      if ( v349 )
        break;
LABEL_21:
      v22 = dword_4872D8;
      if ( *(_DWORD *)(dword_4872D8 + 352) <= ++v347 )
        goto LABEL_28;
    }
    if ( *((_DWORD *)v349 + 6) )
    {
LABEL_24:
      if ( v575 == v566 )
      {
        v23 = 8;
        v24 = 8;
      }
      else
      {
        v23 = 4;
        v24 = 4;
      }
      v25 = v444;
      v26 = *v351;
      v27 = v444 - (_DWORD)v443;
      if ( v444 - (int)v443 < v444 - (_DWORD)v443 + v23 )
      {
        sub_AF660((char **)&v443, v23);
        v25 = v444;
      }
      else if ( __CFADD__(v444 - (_DWORD)v443, v23) )
      {
        v25 = v444 + v23;
        v444 += v23;
      }
      sub_15C34C(v25 - v23, v24, v348, v27, v26, 0);
      goto LABEL_21;
    }
    v62 = *((_DWORD *)v349 + 8);
    if ( v62 > 0 )
    {
      s1 = (char *)*((_DWORD *)v349 + 6);
      while ( 1 )
      {
        v356 = *(char **)(*((_DWORD *)v349 + 7) + 4 * (_DWORD)s1);
        if ( *((_DWORD *)v356 + 6) )
          break;
LABEL_103:
        v63 = v62 <= (int)++s1;
        if ( v63 )
          goto LABEL_105;
      }
      v118 = *((_DWORD *)v356 + 8);
      if ( v118 > 0 )
      {
        v362 = 0;
        while ( 1 )
        {
          v367 = *(char **)(*((_DWORD *)v356 + 7) + 4 * (_DWORD)v362);
          if ( *((_DWORD *)v367 + 6) )
            break;
LABEL_172:
          v63 = v118 <= (int)++v362;
          if ( v63 )
            goto LABEL_174;
        }
        v174 = *((_DWORD *)v367 + 8);
        if ( v174 > 0 )
        {
          v374 = 0;
          while ( 1 )
          {
            v378 = *(char **)(*((_DWORD *)v367 + 7) + 4 * (_DWORD)v374);
            if ( *((_DWORD *)v378 + 6) )
              break;
LABEL_246:
            v63 = v174 <= (int)++v374;
            if ( v63 )
              goto LABEL_248;
          }
          v231 = *((_DWORD *)v378 + 8);
          if ( v231 > 0 )
          {
            v388 = 0;
            while ( 1 )
            {
              HIDWORD(v232) = v388;
              v393 = *(char **)(*((_DWORD *)v378 + 7) + 4 * (_DWORD)v388);
              if ( *((_DWORD *)v393 + 6) )
                break;
LABEL_316:
              v63 = v231 <= (int)++v388;
              if ( v63 )
                goto LABEL_318;
            }
            v288 = *((_DWORD *)v393 + 8);
            if ( v288 > 0 )
            {
              for ( i = 0; i < v288; ++i )
              {
                HIDWORD(v232) = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)v393 + 7) + 4 * i) + 24);
                if ( HIDWORD(v232) )
                {
                  sub_14BE20(&v543, a1);
                  v288 = *((_DWORD *)v393 + 8);
                }
              }
            }
            v290 = *((_DWORD *)v393 + 10);
            v291 = *((_DWORD *)v393 + 9);
            v63 = v290 <= 0;
            v292 = v290 - 1;
            v293 = *(_DWORD *)(a1 + 108);
            v294 = v293 + 4 * v291;
            if ( !v63 )
            {
              for ( j = *(_DWORD *)(v293 + 4 * v291); ; j = v296 )
              {
                v297 = *(_BYTE *)(j + 20);
                v413 = j;
                if ( (v297 & 0x1F) == 0xE )
                  goto LABEL_472;
                sub_13CA20((int)v423, v542, &v413);
                if ( !v423[4] )
                  break;
                v298 = *(_BYTE *)(v413 + 24);
                if ( (v298 & 7) == 1 )
                {
                  v344 = (unsigned __int8)((v298 >> 3) - 1);
                  if ( v344 > 0xD )
                  {
                    v409 = 52;
                  }
                  else
                  {
                    v409 = *(_DWORD *)&aWhetherToAlway[4 * v344 - 2728];
                    if ( !v409 )
                      break;
                  }
                }
                else
                {
                  if ( (v298 & 7) != 2 )
                    break;
                  v409 = 19;
                }
                v400 = (char *)sub_21B7DC(v413);
                v482 = 0;
                v483 = 0;
                v484 = 0;
                v485 = &v483;
                v486 = &v483;
                v487 = 0;
                v299 = sub_9836C(0x24u);
                v300 = v484;
                v301 = v299;
                *v299 = 0;
                v302 = (char *)(v299 + 3);
                v299[1] = v400;
                if ( v300 )
                {
                  v303 = v485;
                  v304 = v486;
                  v301[3] = v483;
                  v305 = v487;
                  v301[4] = v300;
                  v301[5] = v303;
                  v301[6] = v304;
                  *(_DWORD *)(v300 + 4) = v302;
                  v484 = 0;
                  v485 = &v483;
                  v486 = &v483;
                  v301[7] = v305;
                  v487 = 0;
                }
                else
                {
                  v299[3] = 0;
                  v299[4] = 0;
                  v299[5] = v302;
                  *((_QWORD *)v299 + 3) = (unsigned int)v302;
                }
                v306 = (unsigned __int8)*v400;
                v307 = (unsigned __int8 *)(v400 + 1);
                if ( *v400 )
                {
                  v308 = 0;
                  do
                  {
                    v309 = tolower(v306);
                    v310 = *v307++;
                    v306 = v310;
                    v308 = v309 + 67 * v308 - 113;
                  }
                  while ( v310 );
                }
                else
                {
                  v308 = (unsigned __int8)*v400;
                }
                v406 = v544;
                v311 = (unsigned __int64)sub_347674(v308, v544) >> 32;
                v312 = (const char ***)v543[v311];
                if ( v312 )
                {
                  v403 = v292;
                  v313 = *v312;
                  v314 = v406;
                  v407 = v294;
                  v315 = (*v312)[8];
                  while ( (const char *)v308 != v315 || strcmp(v400, v313[1]) )
                  {
                    if ( *v313 )
                    {
                      v315 = (const char *)*((_DWORD *)*v313 + 8);
                      v312 = (const char ***)v313;
                      v313 = (const char **)*v313;
                      if ( v311 == (unsigned __int64)sub_347674(v315, v314) >> 32 )
                        continue;
                    }
                    v292 = v403;
                    v294 = v407;
                    goto LABEL_446;
                  }
                  v316 = (int)*v312;
                  v292 = v403;
                  v294 = v407;
                  if ( !v316 )
                    goto LABEL_446;
                  sub_149088(v301 + 2, v301[4]);
                  sub_339E64(v301);
                }
                else
                {
LABEL_446:
                  v316 = sub_14B5EC(&v543, v311, v308, v301);
                }
                sub_149088(&v482, v484);
                v452[0] = v409;
                v452[1] = v347;
                v453 = 0;
                v454 = 0;
                sub_149250(v424, v316 + 8, v452);
                v47 = v292-- != 0;
                if ( !v47 )
                  goto LABEL_418;
LABEL_397:
                v296 = *(_DWORD *)(v294 + 4);
                v294 += 4;
              }
              v47 = v292-- != 0;
              if ( !v47 )
                goto LABEL_418;
              goto LABEL_397;
            }
LABEL_418:
            v317 = *((_DWORD *)v393 + 12);
            v318 = *((_DWORD *)v393 + 11);
            v63 = v317 <= 0;
            v319 = (char *)(v317 - 1);
            v320 = *(_DWORD *)(a1 + 120);
            v321 = v320 + 4 * v318;
            if ( v63 )
            {
LABEL_444:
              v231 = *((_DWORD *)v378 + 8);
              goto LABEL_316;
            }
            for ( k = *(_DWORD *)(v320 + 4 * v318); ; k = v323 )
            {
              v324 = *(_BYTE *)(k + 20);
              v414 = k;
              if ( (v324 & 0x1F) == 0xE )
                sub_946E0("Ada is not currently supported by the index");
              sub_13CA20((int)v425, v542, &v414);
              if ( !v425[4] )
                break;
              v325 = *(_BYTE *)(v414 + 24);
              if ( (v325 & 7) == 1 )
              {
                v345 = (unsigned __int8)((v325 >> 3) - 1);
                if ( v345 > 0xD )
                {
                  v408 = 52;
                }
                else
                {
                  v408 = *(_DWORD *)&aWhetherToAlway[4 * v345 - 2728];
                  if ( !v408 )
                    break;
                }
              }
              else
              {
                if ( (v325 & 7) != 2 )
                  break;
                v408 = 19;
              }
              v396 = (char *)sub_21B7DC(v414);
              v488 = 0;
              v489 = 0;
              v490 = 0;
              v491 = &v489;
              v492 = &v489;
              v493 = 0;
              v326 = sub_9836C(0x24u);
              v327 = v490;
              v328 = v326;
              *v326 = 0;
              v329 = (char *)(v326 + 3);
              v326[1] = v396;
              if ( v327 )
              {
                v330 = v491;
                v331 = v492;
                v328[3] = v489;
                v332 = v493;
                v328[4] = v327;
                v328[5] = v330;
                v328[6] = v331;
                *(_DWORD *)(v327 + 4) = v329;
                v490 = 0;
                v491 = &v489;
                v492 = &v489;
                v328[7] = v332;
                v493 = 0;
              }
              else
              {
                v326[3] = 0;
                v326[4] = 0;
                v326[5] = v329;
                *((_QWORD *)v326 + 3) = (unsigned int)v329;
              }
              v333 = (unsigned __int8)*v396;
              v334 = (unsigned __int8 *)(v396 + 1);
              if ( *v396 )
              {
                v335 = 0;
                do
                {
                  v336 = tolower(v333);
                  v337 = *v334++;
                  v333 = v337;
                  v335 = v336 + 67 * v335 - 113;
                }
                while ( v337 );
              }
              else
              {
                v335 = (unsigned __int8)*v396;
              }
              v404 = v544;
              v338 = (unsigned __int64)sub_347674(v335, v544) >> 32;
              v339 = (const char ***)v543[v338];
              if ( v339 )
              {
                v401 = v319;
                v340 = *v339;
                v341 = v404;
                v405 = v321;
                v342 = (*v339)[8];
                while ( (const char *)v335 != v342 || strcmp(v396, v340[1]) )
                {
                  if ( *v340 )
                  {
                    v342 = (const char *)*((_DWORD *)*v340 + 8);
                    v339 = (const char ***)v340;
                    v340 = (const char **)*v340;
                    if ( v338 == (unsigned __int64)sub_347674(v342, v341) >> 32 )
                      continue;
                  }
                  v319 = v401;
                  v321 = v405;
                  goto LABEL_451;
                }
                v343 = (int)*v339;
                v319 = v401;
                v321 = v405;
                if ( !v343 )
                  goto LABEL_451;
                sub_149088(v328 + 2, v328[4]);
                sub_339E64(v328);
              }
              else
              {
LABEL_451:
                v343 = sub_14B5EC(&v543, v338, v335, v328);
              }
              sub_149088(&v488, v490);
              v456 = 1;
              v455[0] = v408;
              v455[1] = v347;
              v457 = 0;
              sub_149250(v426, v343 + 8, v455);
              v47 = v319-- != 0;
              if ( !v47 )
                goto LABEL_444;
LABEL_423:
              v323 = *(_DWORD *)(v321 + 4);
              v321 += 4;
            }
            v47 = v319-- != 0;
            if ( !v47 )
              goto LABEL_444;
            goto LABEL_423;
          }
LABEL_318:
          v233 = *((_DWORD *)v378 + 10);
          v234 = *((_DWORD *)v378 + 9);
          v63 = v233 <= 0;
          v235 = (char *)(v233 - 1);
          v236 = *(_DWORD *)(a1 + 108);
          v237 = (char *)(v236 + 4 * v234);
          if ( !v63 )
          {
            for ( m = *(_DWORD *)(v236 + 4 * v234); ; m = v239 )
            {
              v240 = *(_BYTE *)(m + 20);
              v415 = m;
              if ( (v240 & 0x1F) == 0xE )
                sub_946E0("Ada is not currently supported by the index");
              sub_13CA20((int)v427, v542, &v415);
              if ( !v427[4] )
                break;
              v241 = *(_BYTE *)(v415 + 24);
              if ( (v241 & 7) == 1 )
              {
                v286 = (unsigned __int8)((v241 >> 3) - 1);
                if ( v286 <= 0xD )
                {
                  v402 = *(_DWORD *)&aWhetherToAlway[4 * v286 - 2728];
                  if ( !v402 )
                    break;
                }
                else
                {
                  v402 = 52;
                }
              }
              else
              {
                if ( (v241 & 7) != 2 )
                  break;
                v402 = 19;
              }
              v389 = (char *)sub_21B7DC(v415);
              v494 = 0;
              v495 = 0;
              v496 = 0;
              v497 = &v495;
              v498 = &v495;
              v499 = 0;
              v242 = sub_9836C(0x24u);
              v243 = v496;
              v244 = v242;
              *v242 = 0;
              v245 = (char *)(v242 + 3);
              v242[1] = v389;
              if ( v243 )
              {
                v246 = v497;
                v247 = v498;
                v244[3] = v495;
                v248 = v499;
                v244[4] = v243;
                v244[5] = v246;
                v244[6] = v247;
                *(_DWORD *)(v243 + 4) = v245;
                v496 = 0;
                v497 = &v495;
                v498 = &v495;
                v244[7] = v248;
                v499 = 0;
              }
              else
              {
                v242[3] = 0;
                v242[4] = 0;
                v242[5] = v245;
                *((_QWORD *)v242 + 3) = (unsigned int)v245;
              }
              v249 = (unsigned __int8)*v389;
              v250 = (unsigned __int8 *)(v389 + 1);
              if ( *v389 )
              {
                v251 = 0;
                do
                {
                  v252 = tolower(v249);
                  v253 = *v250++;
                  v249 = v253;
                  v251 = v252 + 67 * v251 - 113;
                }
                while ( v253 );
              }
              else
              {
                v251 = (unsigned __int8)*v389;
              }
              v397 = (char *)v544;
              v254 = (unsigned __int64)sub_347674(v251, v544) >> 32;
              v255 = (const char ***)v543[v254];
              if ( v255 )
              {
                v394 = v235;
                v256 = *v255;
                v257 = v397;
                v398 = v237;
                v258 = (*v255)[8];
                while ( (const char *)v251 != v258 || strcmp(v389, v256[1]) )
                {
                  if ( *v256 )
                  {
                    v258 = (const char *)*((_DWORD *)*v256 + 8);
                    v255 = (const char ***)v256;
                    v256 = (const char **)*v256;
                    if ( v254 == (unsigned __int64)sub_347674(v258, v257) >> 32 )
                      continue;
                  }
                  v235 = v394;
                  v237 = v398;
                  goto LABEL_372;
                }
                v259 = (int)*v255;
                v235 = v394;
                v237 = v398;
                if ( !v259 )
                  goto LABEL_372;
                sub_149088(v244 + 2, v244[4]);
                sub_339E64(v244);
              }
              else
              {
LABEL_372:
                v259 = sub_14B5EC(&v543, v254, v251, v244);
              }
              sub_149088(&v494, v496);
              v458[0] = v402;
              v458[1] = v347;
              v459 = 0;
              v460 = 0;
              sub_149250(v428, v259 + 8, v458);
              v47 = v235-- != 0;
              if ( !v47 )
                goto LABEL_344;
LABEL_323:
              v239 = *((_DWORD *)v237 + 1);
              v237 += 4;
            }
            v47 = v235-- != 0;
            if ( !v47 )
              goto LABEL_344;
            goto LABEL_323;
          }
LABEL_344:
          v260 = *((_DWORD *)v378 + 12);
          v261 = *((_DWORD *)v378 + 11);
          v63 = v260 <= 0;
          v262 = (char *)(v260 - 1);
          v263 = *(_DWORD *)(a1 + 120);
          v264 = v263 + 4 * v261;
          if ( v63 )
          {
LABEL_370:
            v174 = *((_DWORD *)v367 + 8);
            goto LABEL_246;
          }
          for ( n = *(_DWORD *)(v263 + 4 * v261); ; n = v266 )
          {
            v267 = *(_BYTE *)(n + 20);
            v416 = n;
            if ( (v267 & 0x1F) == 0xE )
              sub_946E0("Ada is not currently supported by the index");
            sub_13CA20((int)v429, v542, &v416);
            if ( !v429[4] )
              break;
            v268 = *(_BYTE *)(v416 + 24);
            if ( (v268 & 7) == 1 )
            {
              v287 = (unsigned __int8)((v268 >> 3) - 1);
              if ( v287 <= 0xD )
              {
                v395 = *(_DWORD *)&aWhetherToAlway[4 * v287 - 2728];
                if ( !v395 )
                  break;
              }
              else
              {
                v395 = 52;
              }
            }
            else
            {
              if ( (v268 & 7) != 2 )
                break;
              v395 = 19;
            }
            v382 = (char *)sub_21B7DC(v416);
            v500 = 0;
            v501 = 0;
            v502 = 0;
            v503 = &v501;
            v504 = &v501;
            v505 = 0;
            v269 = sub_9836C(0x24u);
            v270 = v502;
            v271 = v269;
            *v269 = 0;
            v272 = (char *)(v269 + 3);
            v269[1] = v382;
            if ( v270 )
            {
              v273 = v503;
              v274 = v504;
              v271[3] = v501;
              v275 = v505;
              v271[4] = v270;
              v271[5] = v273;
              v271[6] = v274;
              *(_DWORD *)(v270 + 4) = v272;
              v502 = 0;
              v503 = &v501;
              v504 = &v501;
              v271[7] = v275;
              v505 = 0;
            }
            else
            {
              v269[3] = 0;
              v269[4] = 0;
              v269[5] = v272;
              *((_QWORD *)v269 + 3) = (unsigned int)v272;
            }
            v276 = (unsigned __int8)*v382;
            v277 = (unsigned __int8 *)(v382 + 1);
            if ( *v382 )
            {
              v278 = 0;
              do
              {
                v279 = tolower(v276);
                v280 = *v277++;
                v276 = v280;
                v278 = v279 + 67 * v278 - 113;
              }
              while ( v280 );
            }
            else
            {
              v278 = (unsigned __int8)*v382;
            }
            v399 = (char *)v544;
            v281 = (unsigned __int64)sub_347674(v278, v544) >> 32;
            v282 = (const char ***)v543[v281];
            if ( v282 )
            {
              v390 = v262;
              v283 = (*v282)[8];
              v284 = *v282;
              while ( (const char *)v278 != v283 || strcmp(v382, v284[1]) )
              {
                if ( *v284 )
                {
                  v283 = (const char *)*((_DWORD *)*v284 + 8);
                  v282 = (const char ***)v284;
                  v284 = (const char **)*v284;
                  if ( v281 == (unsigned __int64)sub_347674(v283, v399) >> 32 )
                    continue;
                }
                v262 = v390;
                goto LABEL_376;
              }
              v285 = (int)*v282;
              v262 = v390;
              if ( !v285 )
                goto LABEL_376;
              sub_149088(v271 + 2, v271[4]);
              sub_339E64(v271);
            }
            else
            {
LABEL_376:
              v285 = sub_14B5EC(&v543, v281, v278, v271);
            }
            sub_149088(&v500, v502);
            v462 = 1;
            v461[0] = v395;
            v461[1] = v347;
            v463 = 0;
            sub_149250(v430, v285 + 8, v461);
            v47 = v262-- != 0;
            if ( !v47 )
              goto LABEL_370;
LABEL_349:
            v266 = *(_DWORD *)(v264 + 4);
            v264 += 4;
          }
          v47 = v262-- != 0;
          if ( !v47 )
            goto LABEL_370;
          goto LABEL_349;
        }
LABEL_248:
        v175 = *((_DWORD *)v367 + 10);
        v176 = *((_DWORD *)v367 + 9);
        v63 = v175 <= 0;
        v177 = (char *)(v175 - 1);
        v178 = *(_DWORD *)(a1 + 108);
        v179 = (char *)(v178 + 4 * v176);
        if ( !v63 )
        {
          for ( ii = *(_DWORD *)(v178 + 4 * v176); ; ii = v181 )
          {
            v182 = *(_BYTE *)(ii + 20);
            v417 = ii;
            if ( (v182 & 0x1F) == 0xE )
              sub_946E0("Ada is not currently supported by the index");
            sub_13CA20((int)v431, v542, &v417);
            if ( !v431[4] )
              break;
            v183 = *(_BYTE *)(v417 + 24);
            if ( (v183 & 7) == 1 )
            {
              v229 = (unsigned __int8)((v183 >> 3) - 1);
              if ( v229 > 0xD )
              {
                v392 = 52;
              }
              else
              {
                v392 = *(_DWORD *)&aWhetherToAlway[4 * v229 - 2728];
                if ( !v392 )
                  break;
              }
            }
            else
            {
              if ( (v183 & 7) != 2 )
                break;
              v392 = 19;
            }
            v375 = (char *)sub_21B7DC(v417);
            v506 = 0;
            v507 = 0;
            v508 = 0;
            v509 = &v507;
            v510 = &v507;
            v511 = 0;
            v184 = sub_9836C(0x24u);
            v185 = v508;
            v186 = v184;
            *v184 = 0;
            v187 = (char *)(v184 + 3);
            v184[1] = v375;
            if ( v185 )
            {
              v188 = v509;
              v189 = v510;
              v186[3] = v507;
              v190 = v511;
              v186[4] = v185;
              v186[5] = v188;
              v186[6] = v189;
              *(_DWORD *)(v185 + 4) = v187;
              v508 = 0;
              v509 = &v507;
              v510 = &v507;
              v186[7] = v190;
              v511 = 0;
            }
            else
            {
              v184[3] = 0;
              v184[4] = 0;
              v184[5] = v187;
              *((_QWORD *)v184 + 3) = (unsigned int)v187;
            }
            v191 = (unsigned __int8)*v375;
            v192 = (unsigned __int8 *)(v375 + 1);
            if ( *v375 )
            {
              v193 = 0;
              do
              {
                v194 = tolower(v191);
                v195 = *v192++;
                v191 = v195;
                v193 = v194 + 67 * v193 - 113;
              }
              while ( v195 );
            }
            else
            {
              v193 = (unsigned __int8)*v375;
            }
            v385 = (char *)v544;
            v196 = (unsigned __int64)sub_347674(v193, v544) >> 32;
            v197 = (const char ***)v543[v196];
            if ( v197 )
            {
              v379 = v177;
              v198 = *v197;
              v199 = v385;
              v386 = v179;
              v200 = (*v197)[8];
              while ( (const char *)v193 != v200 || strcmp(v375, v198[1]) )
              {
                if ( *v198 )
                {
                  v200 = (const char *)*((_DWORD *)*v198 + 8);
                  v197 = (const char ***)v198;
                  v198 = (const char **)*v198;
                  if ( v196 == (unsigned __int64)sub_347674(v200, v199) >> 32 )
                    continue;
                }
                v177 = v379;
                v179 = v386;
                goto LABEL_302;
              }
              v201 = (int)*v197;
              v177 = v379;
              v179 = v386;
              if ( !v201 )
                goto LABEL_302;
              sub_149088(v186 + 2, v186[4]);
              sub_339E64(v186);
            }
            else
            {
LABEL_302:
              v201 = sub_14B5EC(&v543, v196, v193, v186);
            }
            sub_149088(&v506, v508);
            v464[0] = v392;
            v464[1] = v347;
            v465 = 0;
            v466 = 0;
            sub_149250(v432, v201 + 8, v464);
            v47 = v177-- != 0;
            if ( !v47 )
              goto LABEL_274;
LABEL_253:
            v181 = *((_DWORD *)v179 + 1);
            v179 += 4;
          }
          v47 = v177-- != 0;
          if ( !v47 )
            goto LABEL_274;
          goto LABEL_253;
        }
LABEL_274:
        v202 = *((_DWORD *)v367 + 12);
        v203 = *((_DWORD *)v367 + 11);
        v63 = v202 <= 0;
        v204 = (char *)(v202 - 1);
        v205 = *(_DWORD *)(a1 + 120);
        v206 = (char *)(v205 + 4 * v203);
        if ( v63 )
        {
LABEL_300:
          v118 = *((_DWORD *)v356 + 8);
          goto LABEL_172;
        }
        for ( jj = *(_DWORD *)(v205 + 4 * v203); ; jj = v208 )
        {
          v209 = *(_BYTE *)(jj + 20);
          v418 = jj;
          if ( (v209 & 0x1F) == 0xE )
            sub_946E0("Ada is not currently supported by the index");
          sub_13CA20((int)v433, v542, &v418);
          if ( !v433[4] )
            break;
          v210 = *(_BYTE *)(v418 + 24);
          if ( (v210 & 7) == 1 )
          {
            v230 = (unsigned __int8)((v210 >> 3) - 1);
            if ( v230 > 0xD )
            {
              v387 = 52;
            }
            else
            {
              v387 = *(_DWORD *)&aWhetherToAlway[4 * v230 - 2728];
              if ( !v387 )
                break;
            }
          }
          else
          {
            if ( (v210 & 7) != 2 )
              break;
            v387 = 19;
          }
          v371 = (char *)sub_21B7DC(v418);
          v512 = 0;
          v513 = 0;
          v514 = 0;
          v515 = &v513;
          v516 = &v513;
          v517 = 0;
          v211 = sub_9836C(0x24u);
          v212 = v514;
          v213 = v211;
          *v211 = 0;
          v214 = (char *)(v211 + 3);
          v211[1] = v371;
          if ( v212 )
          {
            v215 = v515;
            v216 = v516;
            v213[3] = v513;
            v217 = v517;
            v213[4] = v212;
            v213[5] = v215;
            v213[6] = v216;
            *(_DWORD *)(v212 + 4) = v214;
            v514 = 0;
            v515 = &v513;
            v516 = &v513;
            v213[7] = v217;
            v517 = 0;
          }
          else
          {
            v211[3] = 0;
            v211[4] = 0;
            v211[5] = v214;
            *((_QWORD *)v211 + 3) = (unsigned int)v214;
          }
          v218 = (unsigned __int8)*v371;
          v219 = (unsigned __int8 *)(v371 + 1);
          if ( *v371 )
          {
            v220 = 0;
            do
            {
              v221 = tolower(v218);
              v222 = *v219++;
              v218 = v222;
              v220 = v221 + 67 * v220 - 113;
            }
            while ( v222 );
          }
          else
          {
            v220 = (unsigned __int8)*v371;
          }
          v380 = (char *)v544;
          v223 = (unsigned __int64)sub_347674(v220, v544) >> 32;
          v224 = (const char ***)v543[v223];
          if ( v224 )
          {
            v376 = v204;
            v225 = *v224;
            v226 = v380;
            v381 = v206;
            v227 = (*v224)[8];
            while ( (const char *)v220 != v227 || strcmp(v371, v225[1]) )
            {
              if ( *v225 )
              {
                v227 = (const char *)*((_DWORD *)*v225 + 8);
                v224 = (const char ***)v225;
                v225 = (const char **)*v225;
                if ( v223 == (unsigned __int64)sub_347674(v227, v226) >> 32 )
                  continue;
              }
              v204 = v376;
              v206 = v381;
              goto LABEL_307;
            }
            v228 = (int)*v224;
            v204 = v376;
            v206 = v381;
            if ( !v228 )
              goto LABEL_307;
            sub_149088(v213 + 2, v213[4]);
            sub_339E64(v213);
          }
          else
          {
LABEL_307:
            v228 = sub_14B5EC(&v543, v223, v220, v213);
          }
          sub_149088(&v512, v514);
          v468 = 1;
          v467[0] = v387;
          v467[1] = v347;
          v469 = 0;
          sub_149250(v434, v228 + 8, v467);
          v47 = v204-- != 0;
          if ( !v47 )
            goto LABEL_300;
LABEL_279:
          v208 = *((_DWORD *)v206 + 1);
          v206 += 4;
        }
        v47 = v204-- != 0;
        if ( !v47 )
          goto LABEL_300;
        goto LABEL_279;
      }
LABEL_174:
      v119 = *((_DWORD *)v356 + 10);
      v120 = *((_DWORD *)v356 + 9);
      v63 = v119 <= 0;
      v121 = (char *)(v119 - 1);
      v122 = *(_DWORD *)(a1 + 108);
      v123 = (char *)(v122 + 4 * v120);
      if ( !v63 )
      {
        for ( kk = *(_DWORD *)(v122 + 4 * v120); ; kk = v125 )
        {
          v126 = *(_BYTE *)(kk + 20);
          v419 = kk;
          if ( (v126 & 0x1F) == 0xE )
            sub_946E0("Ada is not currently supported by the index");
          sub_13CA20((int)v435, v542, &v419);
          if ( !v435[4] )
            break;
          v127 = *(_BYTE *)(v419 + 24);
          if ( (v127 & 7) == 1 )
          {
            v172 = (unsigned __int8)((v127 >> 3) - 1);
            if ( v172 <= 0xD )
            {
              v377 = *(_DWORD *)&aWhetherToAlway[4 * v172 - 2728];
              if ( !v377 )
                break;
            }
            else
            {
              v377 = 52;
            }
          }
          else
          {
            if ( (v127 & 7) != 2 )
              break;
            v377 = 19;
          }
          v363 = (char *)sub_21B7DC(v419);
          v518 = 0;
          v519 = 0;
          v520 = 0;
          v521 = &v519;
          v522 = &v519;
          v523 = 0;
          v128 = sub_9836C(0x24u);
          v129 = v520;
          v130 = v128;
          *v128 = 0;
          v131 = (char *)(v128 + 3);
          v128[1] = v363;
          if ( v129 )
          {
            v132 = v521;
            v133 = v522;
            v130[3] = v519;
            v134 = v523;
            v130[4] = v129;
            v130[5] = v132;
            v130[6] = v133;
            *(_DWORD *)(v129 + 4) = v131;
            v520 = 0;
            v521 = &v519;
            v522 = &v519;
            v130[7] = v134;
            v523 = 0;
          }
          else
          {
            v128[3] = 0;
            v128[4] = 0;
            v128[5] = v131;
            *((_QWORD *)v128 + 3) = (unsigned int)v131;
          }
          v135 = (unsigned __int8)*v363;
          v136 = (unsigned __int8 *)(v363 + 1);
          if ( *v363 )
          {
            v137 = 0;
            do
            {
              v138 = tolower(v135);
              v139 = *v136++;
              v135 = v139;
              v137 = v138 + 67 * v137 - 113;
            }
            while ( v139 );
          }
          else
          {
            v137 = (unsigned __int8)*v363;
          }
          v384 = (char *)v544;
          v140 = (unsigned __int64)sub_347674(v137, v544) >> 32;
          v141 = (const char ***)v543[v140];
          if ( v141 )
          {
            v368 = v121;
            v372 = v123;
            v142 = *v141;
            v143 = (*v141)[8];
            while ( (const char *)v137 != v143 || strcmp(v363, v142[1]) )
            {
              if ( *v142 )
              {
                v143 = (const char *)*((_DWORD *)*v142 + 8);
                v141 = (const char ***)v142;
                v142 = (const char **)*v142;
                if ( v140 == (unsigned __int64)sub_347674(v143, v384) >> 32 )
                  continue;
              }
              v121 = v368;
              v123 = v372;
              goto LABEL_228;
            }
            v144 = (int)*v141;
            v121 = v368;
            v123 = v372;
            if ( !v144 )
              goto LABEL_228;
            sub_149088(v130 + 2, v130[4]);
            sub_339E64(v130);
          }
          else
          {
LABEL_228:
            v144 = sub_14B5EC(&v543, v140, v137, v130);
          }
          sub_149088(&v518, v520);
          v470[0] = v377;
          v470[1] = v347;
          v471 = 0;
          v472 = 0;
          sub_149250(v436, v144 + 8, v470);
          v47 = v121-- != 0;
          if ( !v47 )
            goto LABEL_200;
LABEL_179:
          v125 = *((_DWORD *)v123 + 1);
          v123 += 4;
        }
        v47 = v121-- != 0;
        if ( !v47 )
          goto LABEL_200;
        goto LABEL_179;
      }
LABEL_200:
      v145 = *((_DWORD *)v356 + 12);
      v146 = *((_DWORD *)v356 + 11);
      v63 = v145 <= 0;
      v147 = (char *)(v145 - 1);
      v148 = *(_DWORD *)(a1 + 120);
      v149 = (char *)(v148 + 4 * v146);
      if ( v63 )
      {
LABEL_226:
        v62 = *((_DWORD *)v349 + 8);
        goto LABEL_103;
      }
      for ( mm = *(_DWORD *)(v148 + 4 * v146); ; mm = v151 )
      {
        v152 = *(_BYTE *)(mm + 20);
        v420 = mm;
        if ( (v152 & 0x1F) == 0xE )
          sub_946E0("Ada is not currently supported by the index");
        sub_13CA20((int)v437, v542, &v420);
        if ( !v437[4] )
          break;
        v153 = *(_BYTE *)(v420 + 24);
        if ( (v153 & 7) == 1 )
        {
          v173 = (unsigned __int8)((v153 >> 3) - 1);
          if ( v173 <= 0xD )
          {
            v373 = *(_DWORD *)&aWhetherToAlway[4 * v173 - 2728];
            if ( !v373 )
              break;
          }
          else
          {
            v373 = 52;
          }
        }
        else
        {
          if ( (v153 & 7) != 2 )
            break;
          v373 = 19;
        }
        v359 = (char *)sub_21B7DC(v420);
        v524 = 0;
        v525 = 0;
        v526 = 0;
        v527 = &v525;
        v528 = &v525;
        v529 = 0;
        v154 = sub_9836C(0x24u);
        v155 = v526;
        v156 = v154;
        *v154 = 0;
        v157 = (char *)(v154 + 3);
        v154[1] = v359;
        if ( v155 )
        {
          v158 = v527;
          v159 = v528;
          v156[3] = v525;
          v160 = v529;
          v156[4] = v155;
          v156[5] = v158;
          v156[6] = v159;
          *(_DWORD *)(v155 + 4) = v157;
          v526 = 0;
          v527 = &v525;
          v528 = &v525;
          v156[7] = v160;
          v529 = 0;
        }
        else
        {
          v154[3] = 0;
          v154[4] = 0;
          v154[5] = v157;
          *((_QWORD *)v154 + 3) = (unsigned int)v157;
        }
        v161 = (unsigned __int8)*v359;
        v162 = (unsigned __int8 *)(v359 + 1);
        if ( *v359 )
        {
          v163 = 0;
          do
          {
            v164 = tolower(v161);
            v165 = *v162++;
            v161 = v165;
            v163 = v164 + 67 * v163 - 113;
          }
          while ( v165 );
        }
        else
        {
          v163 = (unsigned __int8)*v359;
        }
        v369 = (char *)v544;
        v166 = (unsigned __int64)sub_347674(v163, v544) >> 32;
        v167 = (const char ***)v543[v166];
        if ( v167 )
        {
          v364 = v147;
          v168 = *v167;
          v169 = v369;
          v370 = v149;
          v170 = (*v167)[8];
          while ( (const char *)v163 != v170 || strcmp(v359, v168[1]) )
          {
            if ( *v168 )
            {
              v170 = (const char *)*((_DWORD *)*v168 + 8);
              v167 = (const char ***)v168;
              v168 = (const char **)*v168;
              if ( v166 == (unsigned __int64)sub_347674(v170, v169) >> 32 )
                continue;
            }
            v147 = v364;
            v149 = v370;
            goto LABEL_232;
          }
          v171 = (int)*v167;
          v147 = v364;
          v149 = v370;
          if ( !v171 )
            goto LABEL_232;
          sub_149088(v156 + 2, v156[4]);
          sub_339E64(v156);
        }
        else
        {
LABEL_232:
          v171 = sub_14B5EC(&v543, v166, v163, v156);
        }
        sub_149088(&v524, v526);
        v474 = 1;
        v473[0] = v373;
        v473[1] = v347;
        v475 = 0;
        sub_149250(v438, v171 + 8, v473);
        v47 = v147-- != 0;
        if ( !v47 )
          goto LABEL_226;
LABEL_205:
        v151 = *((_DWORD *)v149 + 1);
        v149 += 4;
      }
      v47 = v147-- != 0;
      if ( !v47 )
        goto LABEL_226;
      goto LABEL_205;
    }
LABEL_105:
    v64 = *((_DWORD *)v349 + 10);
    v65 = *((_DWORD *)v349 + 9);
    v63 = v64 <= 0;
    v66 = (char *)(v64 - 1);
    v67 = *(_DWORD *)(a1 + 108);
    v68 = v67 + 4 * v65;
    if ( !v63 )
    {
      for ( nn = *(_DWORD *)(v67 + 4 * v65); ; nn = v70 )
      {
        v71 = *(_BYTE *)(nn + 20);
        v421 = nn;
        if ( (v71 & 0x1F) == 0xE )
          sub_946E0("Ada is not currently supported by the index");
        sub_13CA20((int)v439, v542, &v421);
        if ( !v439[4] )
          break;
        v72 = *(_BYTE *)(v421 + 24);
        if ( (v72 & 7) == 1 )
        {
          v116 = (unsigned __int8)((v72 >> 3) - 1);
          if ( v116 > 0xD )
          {
            v360 = 52;
          }
          else
          {
            v360 = *(_DWORD *)&aWhetherToAlway[4 * v116 - 2728];
            if ( !v360 )
              break;
          }
        }
        else
        {
          if ( (v72 & 7) != 2 )
            break;
          v360 = 19;
        }
        s1a = (char *)sub_21B7DC(v421);
        v530 = 0;
        v531 = 0;
        v532 = 0;
        v533 = &v531;
        v534 = &v531;
        v535 = 0;
        v73 = sub_9836C(0x24u);
        v74 = v532;
        v75 = v73;
        *v73 = 0;
        v76 = (char *)(v73 + 3);
        v73[1] = s1a;
        if ( v74 )
        {
          v77 = v533;
          v78 = v534;
          v75[3] = v531;
          v79 = v535;
          v75[4] = v74;
          v75[5] = v77;
          v75[6] = v78;
          *(_DWORD *)(v74 + 4) = v76;
          v532 = 0;
          v533 = &v531;
          v534 = &v531;
          v75[7] = v79;
          v535 = 0;
        }
        else
        {
          v73[3] = 0;
          v73[4] = 0;
          v73[5] = v76;
          *((_QWORD *)v73 + 3) = (unsigned int)v76;
        }
        v80 = (unsigned __int8)*s1a;
        v81 = (unsigned __int8 *)(s1a + 1);
        if ( *s1a )
        {
          v82 = 0;
          do
          {
            v83 = tolower(v80);
            v84 = *v81++;
            v80 = v84;
            v82 = v83 + 67 * v82 - 113;
          }
          while ( v84 );
        }
        else
        {
          v82 = (unsigned __int8)*s1a;
        }
        v365 = (char *)v544;
        v85 = (unsigned __int64)sub_347674(v82, v544) >> 32;
        v86 = (const char ***)v543[v85];
        if ( v86 )
        {
          v357 = v66;
          v87 = (*v86)[8];
          v88 = *v86;
          while ( (const char *)v82 != v87 || strcmp(s1a, v88[1]) )
          {
            if ( *v88 )
            {
              v87 = (const char *)*((_DWORD *)*v88 + 8);
              v86 = (const char ***)v88;
              v88 = (const char **)*v88;
              if ( v85 == (unsigned __int64)sub_347674(v87, v365) >> 32 )
                continue;
            }
            v66 = v357;
            goto LABEL_158;
          }
          v89 = (int)*v86;
          v66 = v357;
          if ( !v89 )
            goto LABEL_158;
          sub_149088(v75 + 2, v75[4]);
          sub_339E64(v75);
        }
        else
        {
LABEL_158:
          v89 = sub_14B5EC(&v543, v85, v82, v75);
        }
        sub_149088(&v530, v532);
        v476[0] = v360;
        v476[1] = v347;
        v477 = 0;
        v478 = 0;
        sub_149250(v440, v89 + 8, v476);
        v47 = v66-- != 0;
        if ( !v47 )
          goto LABEL_131;
LABEL_110:
        v70 = *(_DWORD *)(v68 + 4);
        v68 += 4;
      }
      v47 = v66-- != 0;
      if ( !v47 )
        goto LABEL_131;
      goto LABEL_110;
    }
LABEL_131:
    v90 = *((_DWORD *)v349 + 12);
    v91 = *((_DWORD *)v349 + 11);
    v63 = v90 <= 0;
    v92 = (char *)(v90 - 1);
    v93 = *(_DWORD *)(a1 + 120);
    v94 = v93 + 4 * v91;
    if ( v63 )
      goto LABEL_24;
    for ( i1 = *(_DWORD *)(v93 + 4 * v91); ; i1 = v96 )
    {
      v97 = *(_BYTE *)(i1 + 20);
      v422 = i1;
      if ( (v97 & 0x1F) == 0xE )
        sub_946E0("Ada is not currently supported by the index");
      sub_13CA20((int)v441, v542, &v422);
      if ( v441[4] )
      {
        v98 = *(_BYTE *)(v422 + 24);
        if ( (v98 & 7) == 1 )
        {
          v117 = (unsigned __int8)((v98 >> 3) - 1);
          if ( v117 > 0xD )
          {
            v361 = 52;
          }
          else
          {
            v361 = *(_DWORD *)&aWhetherToAlway[4 * v117 - 2728];
            if ( !v361 )
              goto LABEL_134;
          }
        }
        else
        {
          if ( (v98 & 7) != 2 )
            goto LABEL_134;
          v361 = 19;
        }
        v350 = (char *)sub_21B7DC(v422);
        v536 = 0;
        v537 = 0;
        v538 = 0;
        v539 = (void **)&v537;
        v540 = &v537;
        v541 = 0;
        v99 = (char *)sub_9836C(0x24u);
        v100 = v538;
        v101 = v99;
        *(_DWORD *)v99 = 0;
        v102 = v99 + 12;
        *((_DWORD *)v99 + 1) = v350;
        if ( v100 )
        {
          v103 = v539;
          v104 = v540;
          *((_DWORD *)v101 + 3) = v537;
          v105 = v541;
          *((_DWORD *)v101 + 4) = v100;
          *((_DWORD *)v101 + 5) = v103;
          *((_DWORD *)v101 + 6) = v104;
          *(_DWORD *)(v100 + 4) = v102;
          v538 = 0;
          v539 = (void **)&v537;
          v540 = &v537;
          *((_DWORD *)v101 + 7) = v105;
          v541 = 0;
        }
        else
        {
          *((_DWORD *)v99 + 3) = 0;
          *((_DWORD *)v99 + 4) = 0;
          *((_DWORD *)v99 + 5) = v102;
          *((_QWORD *)v99 + 3) = (unsigned int)v102;
        }
        v106 = (unsigned __int8)*v350;
        v107 = (unsigned __int8 *)(v350 + 1);
        if ( *v350 )
        {
          v108 = 0;
          do
          {
            v109 = tolower(v106);
            v110 = *v107++;
            v106 = v110;
            v108 = v109 + 67 * v108 - 113;
          }
          while ( v110 );
        }
        else
        {
          v108 = (unsigned __int8)*v350;
        }
        v366 = (char *)v544;
        v111 = (unsigned __int64)sub_347674(v108, v544) >> 32;
        v112 = (const char ***)v543[v111];
        if ( v112 )
        {
          s1b = v92;
          v358 = v101;
          v113 = *v112;
          v114 = (*v112)[8];
          while ( (const char *)v108 != v114 || strcmp(v350, v113[1]) )
          {
            if ( *v113 )
            {
              v114 = (const char *)*((_DWORD *)*v113 + 8);
              v112 = (const char ***)v113;
              v113 = (const char **)*v113;
              if ( v111 == (unsigned __int64)sub_347674(v114, v366) >> 32 )
                continue;
            }
            v92 = s1b;
            v101 = v358;
            goto LABEL_163;
          }
          v115 = (int)*v112;
          v92 = s1b;
          v101 = v358;
          if ( !v115 )
            goto LABEL_163;
          sub_149088(v358 + 8, *((_DWORD *)v358 + 4));
          sub_339E64(v358);
        }
        else
        {
LABEL_163:
          v115 = sub_14B5EC(&v543, v111, v108, v101);
        }
        sub_149088(&v536, v538);
        v480 = 1;
        v479[0] = v361;
        v479[1] = v347;
        v481 = 0;
        sub_149250(v442, v115 + 8, v479);
      }
LABEL_134:
      v47 = v92-- != 0;
      if ( !v47 )
        goto LABEL_24;
      v96 = *(_DWORD *)(v94 + 4);
      v94 += 4;
    }
  }
LABEL_28:
  v28 = *(_DWORD *)(v22 + 372);
  v446 = 0;
  v447 = 0;
  v448 = 0;
  if ( v28 )
  {
    v540 = v542;
    v536 = &v543;
    v538 = 0;
    v537 = a1;
    v541 = 0;
    v539 = &v446;
    sub_324138(v28, sub_14B6F0, &v536);
  }
  sub_14A6C0(&v543);
  v29 = v447 - (_DWORD)v446 + v444 - (_DWORD)v443 + 40;
  if ( v596 == v597 )
  {
    sub_94700(
      (int)"dwarf2read.c",
      26239,
      "%s: Assertion `%s' failed.",
      "size_t debug_names::bytes() const",
      "!m_abbrev_table.empty ()");
    sub_149088(&v488, v490);
    goto LABEL_460;
  }
  v30 = v551 - (_DWORD)v550;
  v31 = v554 - (_DWORD)v553;
  v32 = (*(int (__fastcall **)(_DWORD *))(*v576 + 8))(v576);
  v33 = (*(int (__fastcall **)(_DWORD *))(*v577 + 8))(v577);
  ptr = 0;
  v450 = 0;
  v451 = 0;
  v34 = v597 - (_BYTE *)v596 + v30 + v29 + v31 + v600 - (_DWORD)v599 + v32 + v33;
  if ( (unsigned int)(v34 - 4) > 0xFFFFFFEF )
  {
    sub_94700(
      (int)"dwarf2read.c",
      26862,
      "%s: Assertion `%s' failed.",
      "size_t write_debug_names(objfile*, FILE*, FILE*)",
      "size64 < 0xfffffff0");
    sub_149088(&v506, v508);
    goto LABEL_460;
  }
  sub_AF660((char **)&ptr, 4u);
  sub_15C34C(v450 - 4, 4, v348, v35, v34 - 4, 0);
  if ( v450 - (unsigned int)ptr < v450 - (unsigned int)ptr + 2 )
  {
    sub_AF660((char **)&ptr, 2u);
    v36 = v450;
  }
  else
  {
    v36 = v450 + 2;
    v450 += 2;
  }
  sub_15C34C(v36 - 2, 2, v348, 0, 5, 0);
  if ( v450 - (unsigned int)ptr < v450 - (unsigned int)ptr + 2 )
  {
    sub_AF660((char **)&ptr, 2u);
    v37 = v450;
  }
  else
  {
    v37 = v450 + 2;
    v450 += 2;
  }
  sub_15C34C(v37 - 2, 2, v348, 0, 0, 0);
  v38 = v450 - (_DWORD)ptr;
  v39 = *(_DWORD *)(dword_4872D8 + 352);
  if ( v450 - (unsigned int)ptr < v450 - (unsigned int)ptr + 4 )
  {
    sub_AF660((char **)&ptr, 4u);
    v40 = v450;
  }
  else
  {
    v40 = v450 + 4;
    v450 += 4;
  }
  sub_15C34C(v40 - 4, 4, v348, v38, v39, v39 >> 31);
  v41 = v450 - (_DWORD)ptr;
  v42 = *(_DWORD *)(dword_4872D8 + 356);
  if ( v450 - (unsigned int)ptr < v450 - (unsigned int)ptr + 4 )
  {
    sub_AF660((char **)&ptr, 4u);
    v43 = v450;
  }
  else
  {
    v43 = v450 + 4;
    v450 += 4;
  }
  sub_15C34C(v43 - 4, 4, v348, v41, v42, v42 >> 31);
  if ( v450 - (unsigned int)ptr < v450 - (unsigned int)ptr + 4 )
  {
    sub_AF660((char **)&ptr, 4u);
    v44 = v450;
  }
  else
  {
    v44 = v450 + 4;
    v450 += 4;
  }
  sub_15C34C(v44 - 4, 4, v348, 0, 0, 0);
  if ( v596 == v597 )
  {
    sub_94700(
      (int)"dwarf2read.c",
      26184,
      "%s: Assertion `%s' failed.",
      "uint32_t debug_names::bucket_count() const",
      "!m_abbrev_table.empty ()");
    sub_149088(&v536, v538);
    goto LABEL_460;
  }
  v45 = v450 - (_DWORD)ptr;
  v46 = v450 - (_DWORD)ptr + 4;
  v47 = v450 - (unsigned int)ptr >= v46;
  if ( v450 - (unsigned int)ptr >= v46 )
    v46 = v450 + 4;
  v48 = (v551 - (int)v550) >> 2;
  if ( v47 )
  {
    v450 = v46;
  }
  else
  {
    sub_AF660((char **)&ptr, 4u);
    v46 = v450;
  }
  sub_15C34C(v46 - 4, 4, v348, v45, v48, 0);
  if ( v596 == v597 )
  {
LABEL_480:
    sub_94700(
      (int)"dwarf2read.c",
      26197,
      "%s: Assertion `%s' failed.",
      "uint32_t debug_names::name_count() const",
      "!m_abbrev_table.empty ()");
    if ( ptr )
      sub_339E64(ptr);
    if ( v446 )
      sub_339E64(v446);
LABEL_460:
    sub_1487D0(v542);
    sub_14912C(&v543);
    v346 = v443;
    if ( v443 )
      sub_339E64(v443);
    sub_338FFC(v346);
  }
  v49 = v450 - (_DWORD)ptr;
  v50 = v450 - (_DWORD)ptr + 4;
  v51 = v450 - (unsigned int)ptr >= v50;
  if ( v450 - (unsigned int)ptr >= v50 )
    v50 = v450 + 4;
  v52 = (v554 - (int)v553) >> 2;
  if ( v51 )
  {
    v450 = v50;
  }
  else
  {
    sub_AF660((char **)&ptr, 4u);
    v50 = v450;
  }
  sub_15C34C(v50 - 4, 4, v348, v49, v52, 0);
  if ( v596 == v597 )
  {
    sub_94700(
      (int)"dwarf2read.c",
      26209,
      "%s: Assertion `%s' failed.",
      "uint32_t debug_names::abbrev_table_bytes() const",
      "!m_abbrev_table.empty ()");
    goto LABEL_480;
  }
  v53 = v597 - (_BYTE *)v596;
  v54 = v450 - (_DWORD)ptr;
  if ( v450 - (unsigned int)ptr < v450 - (unsigned int)ptr + 4 )
  {
    sub_AF660((char **)&ptr, 4u);
    v55 = v450;
  }
  else
  {
    v55 = v450 + 4;
    v450 += 4;
  }
  sub_15C34C(v55 - 4, 4, v348, v54, v53, 0);
  v56 = v450 - (_DWORD)ptr;
  if ( v450 - (unsigned int)ptr < v450 - (unsigned int)ptr + 4 )
  {
    sub_AF660((char **)&ptr, 4u);
    v57 = v450;
  }
  else
  {
    v57 = v450 + 4;
    v450 += 4;
  }
  sub_15C34C(v57 - 4, 4, v348, v56, 4, 0);
  if ( v450 - (unsigned int)ptr < v450 - (unsigned int)ptr + 4 )
  {
    sub_AF660((char **)&ptr, 4u);
    v58 = v450;
  }
  else
  {
    v58 = v450 + 4;
    v450 += 4;
  }
  *(_DWORD *)(v58 - 4) = "_RELOC_ARM_ADRL_IMMEDIATE";
  if ( v450 - (_DWORD)ptr != 40 )
    goto LABEL_471;
  sub_11DF58(a2, ptr, 0x28u);
  sub_11DF58(a2, v443, v444 - (_DWORD)v443);
  sub_11DF58(a2, v446, v447 - (_DWORD)v446);
  if ( v596 == v597 )
  {
    sub_94700(
      (int)"dwarf2read.c",
      26256,
      "%s: Assertion `%s' failed.",
      "void debug_names::file_write(FILE*, FILE*) const",
      "!m_abbrev_table.empty ()");
LABEL_471:
    v232 = sub_94700(
             (int)"dwarf2read.c",
             26905,
             "%s: Assertion `%s' failed.",
             "size_t write_debug_names(objfile*, FILE*, FILE*)",
             "header.size () == bytes_of_header");
LABEL_472:
    sub_946E0("Ada is not currently supported by the index", HIDWORD(v232));
  }
  sub_11DF58(a2, v550, v551 - (_DWORD)v550);
  sub_11DF58(a2, v553, v554 - (_DWORD)v553);
  (*(void (__fastcall **)(_DWORD *, FILE *))(*v576 + 12))(v576, a2);
  (*(void (__fastcall **)(_DWORD *, FILE *))(*v577 + 12))(v577, a2);
  sub_11DF58(a2, v596, v597 - (_BYTE *)v596);
  sub_11DF58(a2, v599, v600 - (_DWORD)v599);
  sub_11DF58(a3, v586, v587 - (_DWORD)v586);
  if ( ptr )
    sub_339E64(ptr);
  if ( v446 )
    sub_339E64(v446);
  sub_1487D0(v542);
  if ( v599 )
    sub_339E64(v599);
  if ( v596 )
    sub_339E64(v596);
  v59 = v591;
  if ( v591 )
  {
    do
    {
      v60 = (_DWORD *)*v59;
      sub_339E64(v59);
      v59 = v60;
    }
    while ( v60 );
  }
  memset(s, 0, 4 * v590);
  v592 = 0;
  v591 = 0;
  if ( s != v595 )
    sub_339E64(s);
  if ( v586 )
    sub_339E64(v586);
  sub_148710(&v578);
  v571[0] = &off_39EA58;
  if ( v572 )
    sub_339E64(v572);
  v567[0] = &off_39EA58;
  if ( v568 )
    sub_339E64(v568);
  v562[0] = &off_39EA40;
  if ( v563 )
    sub_339E64(v563);
  v558[0] = &off_39EA40;
  if ( v559 )
    sub_339E64(v559);
  if ( v553 )
    sub_339E64(v553);
  if ( v550 )
    sub_339E64(v550);
  sub_1490BC(&v543);
  if ( v443 )
    sub_339E64(v443);
  return v34;
}
