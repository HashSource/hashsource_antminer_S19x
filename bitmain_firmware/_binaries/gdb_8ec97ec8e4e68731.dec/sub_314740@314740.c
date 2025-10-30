unsigned int __fastcall sub_314740(unsigned int result, int a2, int a3)
{
  int v3; // r8
  int v4; // r3
  int v5; // r12
  int v6; // r3
  int v8; // r1
  int v9; // r5
  int v10; // r12
  int v11; // r7
  int *v12; // r2
  size_t v13; // r4
  _DWORD *v14; // r3
  _BYTE *v15; // r3
  int v16; // r2
  int v17; // r2
  unsigned __int8 *v18; // r3
  int v19; // r1
  int v20; // r8
  int v21; // r7
  void (__fastcall *v22)(size_t, int, _DWORD); // r3
  int v23; // r3
  int v24; // r7
  int (__fastcall *v25)(size_t, int, _DWORD); // r3
  int v26; // r3
  _DWORD *v27; // r3
  char *v28; // r7
  int v29; // r3
  int v30; // r1
  char v31; // r8
  char v32; // t1
  void (__fastcall *v33)(size_t, int, int); // r3
  int v34; // r2
  int v35; // r7
  int (__fastcall *v36)(size_t, int, _DWORD); // r3
  int v37; // r3
  char *v38; // r7
  int v39; // r3
  int v40; // r1
  char v41; // r8
  char v42; // t1
  void (__fastcall *v43)(size_t, int, int); // r3
  int v44; // r2
  int (__fastcall *v45)(size_t, int, _DWORD); // r3
  int v46; // r3
  int v47; // r2
  char *v48; // r8
  int v49; // r3
  int v50; // r1
  char v51; // r9
  char v52; // t1
  int (__fastcall *v53)(size_t, int, int); // r3
  int v54; // r2
  char *v55; // r7
  int v56; // r3
  int v57; // r1
  char v58; // r8
  char v59; // t1
  void (__fastcall *v60)(size_t, int, int); // r3
  int v61; // r2
  char *v62; // r7
  int v63; // r3
  int v64; // r1
  char v65; // r8
  char v66; // t1
  void (__fastcall *v67)(size_t, int, int); // r3
  int v68; // r2
  char *v69; // r6
  int v70; // r3
  int v71; // r1
  char v72; // r7
  char v73; // t1
  void (__fastcall *v74)(size_t, int, int); // r3
  int v75; // r2
  int v76; // r3
  char *v77; // r6
  char *v78; // r8
  int v79; // r1
  char v80; // r7
  char v81; // t1
  int (__fastcall *v82)(size_t, int, int); // r3
  int v83; // r2
  int v84; // r7
  int (__fastcall *v85)(size_t, int, _DWORD); // r3
  int v86; // r3
  char *v87; // r7
  int v88; // r3
  int v89; // r1
  char v90; // r8
  char v91; // t1
  void (__fastcall *v92)(size_t, int, int); // r3
  int v93; // r2
  int v94; // r1
  int v95; // r2
  char *v96; // r6
  int v97; // r3
  int v98; // r1
  char v99; // r7
  char v100; // t1
  void (__fastcall *v101)(size_t, int, int); // r3
  int v102; // r2
  int v103; // r3
  char *v104; // r6
  char *v105; // r8
  int v106; // r1
  char v107; // r7
  char v108; // t1
  int (__fastcall *v109)(size_t, int, int); // r3
  int v110; // r2
  int (__fastcall *v111)(size_t, int, _DWORD); // r3
  int v112; // r3
  char *v113; // r7
  int v114; // r3
  int v115; // r1
  char v116; // r8
  char v117; // t1
  void (__fastcall *v118)(size_t, int, int); // r3
  int v119; // r2
  char *v120; // r7
  int v121; // r3
  int v122; // r1
  char v123; // r8
  char v124; // t1
  void (__fastcall *v125)(size_t, int, int); // r3
  int v126; // r2
  char *v127; // r7
  int v128; // r3
  int v129; // r1
  char v130; // r8
  char v131; // t1
  void (__fastcall *v132)(size_t, int, int); // r3
  int v133; // r2
  int v134; // r7
  int (__fastcall *v135)(size_t, int, _DWORD); // r3
  int v136; // r3
  int v137; // r3
  char *v138; // r6
  char *v139; // r8
  int v140; // r1
  char v141; // r7
  char v142; // t1
  int (__fastcall *v143)(size_t, int, int); // r3
  int v144; // r2
  int v145; // r7
  char v146; // r8
  int (__fastcall *v147)(size_t, int, _DWORD); // r3
  int v148; // r3
  char *v149; // r7
  int v150; // r3
  int v151; // r1
  char v152; // r8
  char v153; // t1
  void (__fastcall *v154)(size_t, int, int); // r3
  int v155; // r2
  _DWORD *v156; // r3
  unsigned int v157; // r8
  int v158; // r7
  void (__fastcall *v159)(size_t, int, _DWORD); // r3
  int v160; // r3
  int v161; // r3
  int v162; // r3
  unsigned int v163; // r2
  int v164; // r3
  int v165; // r10
  int *v166; // r8
  int v167; // r7
  void (__fastcall *v168)(size_t, int, _DWORD); // r3
  int v169; // r3
  int v170; // r7
  void (__fastcall *v171)(size_t, int, _DWORD); // r3
  int v172; // r3
  char *v173; // r7
  int v174; // r3
  int v175; // r1
  char v176; // r8
  char v177; // t1
  void (__fastcall *v178)(size_t, int, int); // r3
  int v179; // r2
  int v180; // r2
  bool v181; // zf
  _DWORD *v182; // r2
  char *v183; // r7
  int v184; // r3
  int v185; // r1
  char v186; // r8
  char v187; // t1
  void (__fastcall *v188)(size_t, int, int); // r3
  int v189; // r2
  int v190; // r9
  char *v191; // r6
  int v192; // r3
  int v193; // r8
  int v194; // r1
  char v195; // r11
  char v196; // t1
  int (__fastcall *v197)(size_t, int, int); // r3
  int v198; // r2
  unsigned __int8 *v199; // r6
  int v200; // r3
  int v201; // r2
  int v202; // r3
  unsigned __int8 *v203; // r6
  unsigned __int8 *v204; // r8
  int v205; // r1
  char v206; // r7
  char v207; // t1
  int (__fastcall *v208)(size_t, int, int); // r3
  int v209; // r2
  int v210; // r2
  int v211; // r9
  int v212; // r7
  void (__fastcall *v213)(size_t, int, _DWORD); // r3
  int v214; // r3
  int (__fastcall *v215)(size_t, int, _DWORD); // r3
  int v216; // r3
  int v217; // r2
  int v218; // r7
  void (__fastcall *v219)(size_t, int, _DWORD); // r3
  int v220; // r3
  int v221; // r3
  char *v222; // r6
  int v223; // r1
  char v224; // r7
  char v225; // t1
  int (__fastcall *v226)(size_t, int, int); // r3
  int v227; // r2
  int v228; // r1
  int v229; // r2
  int v230; // r2
  int v231; // r2
  unsigned int v232; // r7
  int v233; // r1
  int v234; // r3
  char *v235; // r8
  unsigned int v236; // r1
  unsigned int v237; // r9
  char v238; // r10
  char v239; // t1
  void (__fastcall *v240)(size_t, unsigned int, _DWORD); // r3
  int v241; // r1
  int v242; // r6
  int v243; // lr
  int v244; // r2
  int v245; // r9
  char *v246; // lr
  unsigned int v247; // r7
  unsigned int *v248; // r12
  int v249; // r10
  _BYTE *v250; // r11
  unsigned int v251; // r1
  unsigned int v252; // r2
  unsigned int v253; // r3
  int v254; // r3
  char *v255; // r7
  int v256; // r2
  char *v257; // r7
  int v258; // r3
  int v259; // r1
  char v260; // r8
  char v261; // t1
  void (__fastcall *v262)(size_t, int, int); // r3
  int v263; // r2
  char *v264; // r7
  int v265; // r3
  int v266; // r1
  char v267; // r8
  char v268; // t1
  void (__fastcall *v269)(size_t, int, int); // r3
  int v270; // r2
  char *v271; // r7
  int v272; // r3
  int v273; // r1
  char v274; // r8
  char v275; // t1
  void (__fastcall *v276)(size_t, int, int); // r3
  int v277; // r2
  char *v278; // r7
  int v279; // r3
  int v280; // r1
  char v281; // r8
  char v282; // t1
  void (__fastcall *v283)(size_t, int, int); // r3
  int v284; // r2
  char *v285; // r7
  int v286; // r3
  int v287; // r1
  char v288; // r8
  char v289; // t1
  void (__fastcall *v290)(size_t, int, int); // r3
  int v291; // r2
  char *v292; // r7
  int v293; // r3
  int v294; // r1
  char v295; // r8
  char v296; // t1
  void (__fastcall *v297)(size_t, int, int); // r3
  int v298; // r2
  char *v299; // r7
  int v300; // r3
  int v301; // r1
  char v302; // r8
  char v303; // t1
  void (__fastcall *v304)(size_t, int, int); // r3
  int v305; // r2
  char *v306; // r7
  int v307; // r3
  int v308; // r1
  char v309; // r8
  char v310; // t1
  void (__fastcall *v311)(size_t, int, int); // r3
  int v312; // r2
  char *v313; // r7
  int v314; // r3
  int v315; // r1
  char v316; // r8
  char v317; // t1
  void (__fastcall *v318)(size_t, int, int); // r3
  int v319; // r2
  char *v320; // r7
  int v321; // r3
  int v322; // r1
  char v323; // r8
  char v324; // t1
  void (__fastcall *v325)(size_t, int, int); // r3
  int v326; // r2
  _DWORD *v327; // r9
  int v328; // r11
  int v329; // r3
  int v330; // lr
  int v331; // r3
  int v332; // r2
  int **v333; // lr
  int v334; // r1
  int v335; // r3
  _DWORD *v336; // r10
  _DWORD *v337; // r10
  int v338; // r2
  int v339; // r3
  int v340; // lr
  _DWORD *v341; // r3
  int v342; // r12
  int v343; // r0
  int v344; // r2
  int v345; // r3
  int v346; // r2
  int v347; // r6
  int v348; // r7
  int v349; // r1
  char v350; // r8
  char v351; // t1
  int (__fastcall *v352)(size_t, int, int); // r3
  int v353; // r2
  unsigned int v354; // r8
  int v355; // r2
  int **v356; // r3
  int v357; // r1
  int v358; // r2
  int v359; // r6
  int v360; // r3
  int v361; // r8
  int v362; // r6
  int v363; // r1
  char v364; // r7
  char v365; // t1
  int (__fastcall *v366)(size_t, int, int); // r3
  int v367; // r2
  char *v368; // r7
  int v369; // r3
  int v370; // r1
  char v371; // r8
  char v372; // t1
  void (__fastcall *v373)(size_t, int, int); // r3
  int v374; // r2
  char *v375; // r7
  int v376; // r3
  int v377; // r1
  char v378; // r8
  char v379; // t1
  void (__fastcall *v380)(size_t, int, int); // r3
  int v381; // r2
  char *v382; // r7
  int v383; // r3
  int v384; // r1
  char v385; // r8
  char v386; // t1
  void (__fastcall *v387)(size_t, int, int); // r3
  int v388; // r2
  char *v389; // r7
  int v390; // r3
  int v391; // r1
  char v392; // r8
  char v393; // t1
  void (__fastcall *v394)(size_t, int, int); // r3
  int v395; // r2
  int v396; // r7
  void (__fastcall *v397)(size_t, int, _DWORD); // r3
  int v398; // r3
  char *v399; // r7
  int v400; // r3
  int v401; // r1
  char v402; // r8
  char v403; // t1
  void (__fastcall *v404)(size_t, int, int); // r3
  int v405; // r2
  char *v406; // r7
  int v407; // r3
  int v408; // r1
  char v409; // r8
  char v410; // t1
  void (__fastcall *v411)(size_t, int, int); // r3
  int v412; // r2
  char *v413; // r7
  int v414; // r3
  int v415; // r1
  char v416; // r8
  char v417; // t1
  void (__fastcall *v418)(size_t, int, int); // r3
  int v419; // r2
  unsigned int *v420; // r8
  char *v421; // r2
  int v422; // r3
  int v423; // r10
  int v424; // r7
  char *v425; // r3
  unsigned int v426; // r1
  int v427; // r7
  void (__fastcall *v428)(size_t, int, _DWORD); // r3
  int v429; // r3
  _DWORD *v430; // r7
  unsigned __int8 *v431; // r7
  int v432; // r2
  int v433; // r3
  unsigned __int8 *v434; // r2
  unsigned __int8 *v435; // r8
  unsigned __int8 *v436; // r7
  int v437; // r1
  unsigned __int8 v438; // r6
  unsigned __int8 v439; // t1
  int (__fastcall *v440)(size_t, int, int); // r3
  int v441; // r2
  unsigned int v442; // r2
  _DWORD *v443; // r7
  int v444; // r7
  int v445; // r3
  char *v446; // r6
  int v447; // r1
  char v448; // r8
  char v449; // t1
  void (__fastcall *v450)(size_t, int, int); // r3
  int v451; // r2
  int v452; // r2
  int v453; // r3
  char *v454; // r6
  char *v455; // r8
  int v456; // r1
  char v457; // r7
  char v458; // t1
  int (__fastcall *v459)(size_t, int, int); // r3
  int v460; // r2
  int (__fastcall *v461)(size_t, int, _DWORD); // r3
  int v462; // r3
  int v463; // r9
  int v464; // r8
  int v465; // r7
  int v466; // r7
  void (__fastcall *v467)(size_t, int, _DWORD); // r3
  int v468; // r3
  int v469; // r7
  int (__fastcall *v470)(size_t, int, _DWORD); // r3
  int v471; // r3
  int *v472; // r12
  char *v473; // r11
  int v474; // r3
  char *v475; // lr
  unsigned int *v476; // r9
  unsigned int *v477; // r5
  unsigned int v478; // r2
  unsigned int v479; // r3
  unsigned int v480; // r1
  unsigned int v481; // r2
  unsigned int v482; // r3
  int v483; // r2
  int v484; // r6
  int v485; // r3
  int v486; // r2
  int v487; // r6
  int v488; // r7
  int v489; // r1
  char v490; // r8
  char v491; // t1
  int (__fastcall *v492)(size_t, int, int); // r3
  int v493; // r2
  char *v494; // r6
  int v495; // r1
  char v496; // r7
  char v497; // t1
  int (__fastcall *v498)(size_t, int, int); // r3
  int v499; // r2
  unsigned __int8 *v500; // r6
  int v501; // r1
  int v502; // r3
  int (__fastcall *v503)(size_t, int, int); // r3
  int v504; // r2
  int v505; // r8
  unsigned __int8 *v506; // r1
  unsigned __int8 *v507; // r10
  int v508; // r3
  int v509; // t1
  int v510; // r2
  unsigned int v511; // lr
  char *v512; // r6
  int v513; // r1
  char v514; // r8
  char v515; // t1
  int (__fastcall *v516)(size_t, int, int); // r3
  int v517; // r2
  int v518; // r7
  int v519; // r3
  _DWORD *v520; // r1
  int v521; // r2
  int v522; // r10
  _BYTE *v523; // r3
  int v524; // r9
  int v525; // r8
  int v526; // r7
  void (__fastcall *v527)(size_t, int, _DWORD); // r3
  int v528; // r3
  int v529; // r2
  unsigned __int8 *v530; // r3
  unsigned int v531; // r3
  unsigned int v532; // r1
  bool v533; // cc
  int v534; // r7
  void (__fastcall *v535)(size_t, int, _DWORD); // r3
  int v536; // r3
  int (__fastcall *v537)(size_t, int, _DWORD); // r3
  int v538; // r3
  char *v539; // r6
  int v540; // r3
  int v541; // r1
  char v542; // r7
  char v543; // t1
  void (__fastcall *v544)(size_t, int, int); // r3
  int v545; // r2
  int v546; // r3
  char *v547; // r6
  char *v548; // r7
  int v549; // r1
  char v550; // r8
  char v551; // t1
  int (__fastcall *v552)(size_t, int, int); // r3
  int v553; // r2
  int v554; // r7
  int (__fastcall *v555)(size_t, int, _DWORD); // r3
  int v556; // r3
  int v557; // r1
  int v558; // r7
  void (__fastcall *v559)(size_t, int, _DWORD); // r3
  int v560; // r3
  int v561; // r2
  int v562; // r7
  void (__fastcall *v563)(size_t, int, _DWORD); // r3
  int v564; // r3
  int v565; // r7
  int (__fastcall *v566)(size_t, int, _DWORD); // r3
  int v567; // r3
  char *v568; // r7
  int v569; // r3
  int v570; // r1
  char v571; // r9
  char v572; // t1
  void (__fastcall *v573)(size_t, int, int); // r3
  int v574; // r2
  int v575; // r7
  int v576; // r3
  void (__fastcall *v577)(size_t, int, int); // r3
  int v578; // r2
  int v579; // r2
  int v580; // r2
  char *v581; // r7
  int v582; // r3
  int v583; // r1
  char v584; // r8
  char v585; // t1
  void (__fastcall *v586)(size_t, int, int); // r3
  int v587; // r2
  int v588; // r2
  unsigned __int8 *v589; // r9
  int v590; // r3
  int v591; // r3
  _DWORD *v592; // r0
  int v593; // r3
  int v594; // r2
  bool v595; // zf
  int v596; // r3
  int v597; // r7
  void (__fastcall *v598)(size_t, int, _DWORD); // r3
  int v599; // r3
  int (__fastcall *v600)(size_t, int, _DWORD); // r3
  int v601; // r3
  void (__fastcall *v602)(size_t, int, _DWORD); // r3
  int v603; // r3
  int v604; // r2
  int v605; // r6
  int v606; // r3
  _DWORD *v607; // r0
  int v608; // r3
  int v609; // r3
  int v610; // r7
  void (__fastcall *v611)(size_t, int, _DWORD); // r3
  int v612; // r3
  int (__fastcall *v613)(size_t, int, _DWORD); // r3
  int v614; // r3
  int *v615; // r3
  _BOOL4 v616; // r1
  int v617; // r1
  int v618; // r7
  int (__fastcall *v619)(size_t, int, _DWORD); // r3
  int v620; // r3
  int v621; // r12
  int v622; // r6
  int v623; // r7
  void (__fastcall *v624)(size_t, int, _DWORD); // r3
  int v625; // r3
  int v626; // r7
  void (__fastcall *v627)(size_t, int, _DWORD); // r3
  int v628; // r3
  int v629; // r7
  int (__fastcall *v630)(size_t, int, _DWORD); // r3
  int v631; // r3
  int v632; // r7
  int (__fastcall *v633)(size_t, int, _DWORD); // r3
  int v634; // r3
  int v635; // r7
  void (__fastcall *v636)(size_t, int, _DWORD); // r3
  int v637; // r3
  bool v638; // zf
  char v639; // r8
  int (__fastcall *v640)(size_t, int, _DWORD); // r3
  int v641; // r3
  int v642; // r2
  int v643; // r7
  void (__fastcall *v644)(size_t, int, _DWORD); // r3
  int v645; // r3
  int v646; // r3
  int v647; // r3
  int (__fastcall *v648)(size_t, int, _DWORD); // r3
  int v649; // r3
  int v650; // [sp+4h] [bp-84h]
  int v651; // [sp+8h] [bp-80h]
  int v652; // [sp+8h] [bp-80h]
  int v653; // [sp+Ch] [bp-7Ch]
  int v654; // [sp+10h] [bp-78h] BYREF
  int v655; // [sp+14h] [bp-74h]
  _DWORD v656[2]; // [sp+18h] [bp-70h] BYREF
  char s[4]; // [sp+20h] [bp-68h] BYREF
  _DWORD *v658; // [sp+24h] [bp-64h]
  int v659; // [sp+28h] [bp-60h]
  int v660; // [sp+2Ch] [bp-5Ch]
  char v661; // [sp+30h] [bp-58h] BYREF
  _BYTE v662[20]; // [sp+60h] [bp-28h] BYREF
  int v663; // [sp+74h] [bp-14h]

  if ( !a3 || (v4 = *(_DWORD *)(a3 + 4), v4 > 1) || (v5 = *(_DWORD *)(result + 284), v5 > 1024) )
  {
    *(_DWORD *)(result + 280) = 1;
    return result;
  }
  v6 = v4 + 1;
  v663 = v3;
  v8 = *(_DWORD *)(result + 300);
  v9 = a3;
  *(_DWORD *)(a3 + 4) = v6;
  v10 = v5 + 1;
  v11 = *(_DWORD *)(result + 280);
  v12 = &v654;
  v13 = result;
  *(_DWORD *)(result + 284) = v10;
  v654 = v9;
  v655 = v8;
  *(_DWORD *)(result + 300) = &v654;
  if ( v11 )
    goto LABEL_24;
  result = *(_DWORD *)v9;
  switch ( *(_DWORD *)v9 )
  {
    case 0:
      v431 = *(unsigned __int8 **)(v9 + 8);
      if ( (a2 & 4) == 0 )
      {
        v432 = *(_DWORD *)(v9 + 12);
        if ( v432 )
        {
          v433 = *(_DWORD *)(v13 + 256);
          v434 = &v431[v432];
          v435 = v434 - 1;
          v436 = v431 - 1;
          do
          {
            v437 = v433;
            if ( v433 != 255 )
              v434 = (unsigned __int8 *)v433;
            result = v13;
            v439 = *++v436;
            v438 = v439;
            if ( v433 == 255 )
            {
              v440 = *(int (__fastcall **)(size_t, int, int))(v13 + 264);
              v441 = *(_DWORD *)(v13 + 268);
              *(_BYTE *)(v13 + 255) = 0;
              result = v440(v13, v437, v441);
              v433 = 1;
              v434 = 0;
              ++*(_DWORD *)(v13 + 296);
            }
            else
            {
              ++v433;
            }
            *(_DWORD *)(v13 + 256) = v433;
            v434[v13] = v438;
            *(_BYTE *)(v13 + 260) = v438;
          }
          while ( v435 != v436 );
          v8 = v655;
          v6 = *(_DWORD *)(v9 + 4);
          v10 = *(_DWORD *)(v13 + 284);
        }
        goto LABEL_24;
      }
      v500 = &v431[*(_DWORD *)(v9 + 12)];
      if ( v500 <= v431 )
        goto LABEL_24;
LABEL_513:
      v505 = *v431;
      if ( v500 - v431 <= 3 || v505 != 95 || v431[1] != 95 || v431[2] != 85 )
      {
LABEL_507:
        v501 = *(_DWORD *)(v13 + 256);
        goto LABEL_508;
      }
      v506 = v431 + 3;
      for ( result = 0; ; result = v510 + 16 * result )
      {
        v507 = v506;
        if ( v500 <= v506 )
          goto LABEL_507;
        v509 = *v506++;
        v508 = v509;
        v510 = v509 - 48;
        v511 = v509 - 65;
        if ( (unsigned __int8)(v509 - 48) > 9u )
        {
          v510 = v508 - 87;
          if ( v511 > 5 )
          {
            if ( (unsigned int)(v508 - 97) > 5 )
            {
              v638 = result == 255;
              if ( result <= 0xFF )
                v638 = v508 == 95;
              v501 = *(_DWORD *)(v13 + 256);
              if ( v638 )
              {
                v639 = result;
                if ( v501 == 255 )
                {
                  v640 = *(int (__fastcall **)(size_t, int, _DWORD))(v13 + 264);
                  *(_BYTE *)(v13 + 255) = 0;
                  result = v640(v13, 255, *(_DWORD *)(v13 + 268));
                  v641 = *(_DWORD *)(v13 + 296);
                  v501 = 0;
                  *(_DWORD *)(v13 + 256) = 0;
                  *(_DWORD *)(v13 + 296) = v641 + 1;
                }
                v431 = v507;
                *(_DWORD *)(v13 + 256) = v501 + 1;
                *(_BYTE *)(v13 + v501) = v639;
                *(_BYTE *)(v13 + 260) = v639;
              }
              else
              {
LABEL_508:
                if ( v501 == 255 )
                {
                  v503 = *(int (__fastcall **)(size_t, int, int))(v13 + 264);
                  v504 = *(_DWORD *)(v13 + 268);
                  *(_BYTE *)(v13 + 255) = 0;
                  result = v503(v13, 255, v504);
                  v502 = 1;
                  v501 = 0;
                  ++*(_DWORD *)(v13 + 296);
                }
                else
                {
                  v502 = v501 + 1;
                }
                *(_DWORD *)(v13 + 256) = v502;
                *(_BYTE *)(v13 + v501) = v505;
                *(_BYTE *)(v13 + 260) = v505;
              }
              if ( v500 <= ++v431 )
              {
                v8 = v655;
                v6 = *(_DWORD *)(v9 + 4);
                v10 = *(_DWORD *)(v13 + 284);
                goto LABEL_24;
              }
              goto LABEL_513;
            }
          }
          else
          {
            v510 = v508 - 55;
          }
        }
      }
    case 1:
    case 2:
      sub_314740(v13, a2, *(_DWORD *)(v9 + 8));
      if ( (a2 & 4) != 0 )
      {
        v427 = *(_DWORD *)(v13 + 256);
        if ( v427 == 255 )
        {
          v428 = *(void (__fastcall **)(size_t, int, _DWORD))(v13 + 264);
          *(_BYTE *)(v13 + 255) = 0;
          v427 = 0;
          v428(v13, 255, *(_DWORD *)(v13 + 268));
          v429 = *(_DWORD *)(v13 + 296);
          *(_DWORD *)(v13 + 256) = 0;
          *(_DWORD *)(v13 + 296) = v429 + 1;
        }
        *(_DWORD *)(v13 + 256) = v427 + 1;
        *(_BYTE *)(v13 + v427) = 46;
        *(_BYTE *)(v13 + 260) = 46;
      }
      else
      {
        v568 = "::";
        v569 = *(_DWORD *)(v13 + 256);
        do
        {
          v570 = v569;
          v572 = *v568++;
          v571 = v572;
          if ( v569 == 255 )
          {
            v573 = *(void (__fastcall **)(size_t, int, int))(v13 + 264);
            v574 = *(_DWORD *)(v13 + 268);
            *(_BYTE *)(v13 + 255) = 0;
            v573(v13, 255, v574);
            v569 = 1;
            v570 = 0;
            ++*(_DWORD *)(v13 + 296);
          }
          else
          {
            ++v569;
          }
          *(_DWORD *)(v13 + 256) = v569;
          *(_BYTE *)(v13 + v570) = v571;
          *(_BYTE *)(v13 + 260) = v571;
        }
        while ( "" != v568 );
      }
      v430 = *(_DWORD **)(v9 + 12);
      if ( *v430 == 70 )
      {
        sub_313BA0(v13, (int)"{default arg#", 13);
        sub_3146A8(v13, v430[3] + 1);
        sub_313BA0(v13, (int)"}::", 3);
        v430 = (_DWORD *)v430[2];
      }
      result = sub_314740(v13, a2, v430);
      v8 = v655;
      v6 = *(_DWORD *)(v9 + 4);
      v10 = *(_DWORD *)(v13 + 284);
      goto LABEL_24;
    case 3:
      v420 = *(unsigned int **)(v9 + 8);
      v421 = 0;
      v422 = *(_DWORD *)(v13 + 276);
      *(_DWORD *)(v13 + 276) = 0;
      v653 = v422;
      if ( !v420 )
        goto LABEL_424;
      v423 = *(_DWORD *)(v13 + 272);
      v424 = 0;
      v425 = s;
      while ( 2 )
      {
        v426 = *v420;
        ++v424;
        *(_DWORD *)v425 = v421;
        result = (unsigned int)v425;
        *((_DWORD *)v425 + 1) = v420;
        v421 = v425;
        *((_DWORD *)v425 + 2) = 0;
        *((_DWORD *)v425 + 3) = v423;
        if ( v426 == 76 )
          goto LABEL_421;
        if ( v426 <= 0x4C )
        {
          if ( v426 - 28 > 4 )
            break;
          goto LABEL_421;
        }
        if ( v426 - 78 <= 1 )
        {
LABEL_421:
          v420 = (unsigned int *)v420[2];
          if ( !v420 )
          {
            *(_DWORD *)(v13 + 276) = v425;
            goto LABEL_424;
          }
          v425 += 16;
          if ( v424 == 4 )
          {
            *(_DWORD *)(v13 + 276) = result;
LABEL_424:
            *(_DWORD *)(v13 + 280) = 1;
            goto LABEL_425;
          }
          continue;
        }
        break;
      }
      *(_DWORD *)(v13 + 276) = v425;
      if ( v426 == 4 )
      {
        v656[1] = v420;
        v656[0] = v423;
        *(_DWORD *)(v13 + 272) = v656;
      }
      else if ( v426 == 2 )
      {
        v472 = (int *)v420[3];
        if ( *v472 != 70 || (v472 = (int *)v472[2]) != 0 )
        {
          v652 = v9;
          v473 = &s[16 * v424 - 12];
          while ( 1 )
          {
            v474 = *v472;
            v475 = v473 + 16;
            v476 = (unsigned int *)(v473 - 4);
            v477 = (unsigned int *)(v473 + 12);
            v473 += 16;
            if ( *v472 != 76 )
            {
              v478 = v474 - 28;
              v479 = v474 - 78;
              if ( (unsigned int)*v472 > 0x4C )
              {
                if ( v479 > 1 )
                {
LABEL_599:
                  v9 = v652;
                  goto LABEL_600;
                }
              }
              else if ( v478 > 4 )
              {
                goto LABEL_599;
              }
            }
            v181 = v424++ == 4;
            if ( v181 )
              break;
            result = *v476;
            v480 = v476[1];
            v481 = v476[2];
            v482 = v476[3];
            *(_DWORD *)(v13 + 276) = v477;
            *v477 = result;
            v477[1] = v480;
            v477[2] = v481;
            v477[3] = v482;
            *((_DWORD *)v475 - 4) = v472;
            *((_DWORD *)v475 - 3) = 0;
            v472 = (int *)v472[2];
            *((_DWORD *)v475 - 1) = v476;
            *((_DWORD *)v475 - 2) = v423;
          }
          v9 = v652;
        }
        goto LABEL_424;
      }
LABEL_600:
      v575 = 4 * v424;
      result = sub_314740(v13, a2, *(_DWORD *)(v9 + 12));
      if ( *v420 == 4 )
        *(_DWORD *)(v13 + 272) = v656[0];
      do
      {
        if ( !v656[v575] )
        {
          v576 = *(_DWORD *)(v13 + 256);
          if ( v576 == 255 )
          {
            v577 = *(void (__fastcall **)(size_t, int, int))(v13 + 264);
            v578 = *(_DWORD *)(v13 + 268);
            *(_BYTE *)(v13 + 255) = 0;
            v577(v13, 255, v578);
            v579 = *(_DWORD *)(v13 + 296);
            v576 = 0;
            *(_DWORD *)(v13 + 256) = 0;
            *(_DWORD *)(v13 + 296) = v579 + 1;
          }
          v580 = v656[v575 - 1];
          *(_DWORD *)(v13 + 256) = v576 + 1;
          *(_BYTE *)(v13 + v576) = 32;
          *(_BYTE *)(v13 + 260) = 32;
          result = sub_31861C(v13, a2, v580);
        }
        v575 -= 4;
      }
      while ( v575 * 4 );
      *(_DWORD *)(v13 + 276) = v653;
LABEL_425:
      v8 = v655;
      v6 = *(_DWORD *)(v9 + 4);
      v10 = *(_DWORD *)(v13 + 284);
LABEL_24:
      *(_DWORD *)(v13 + 300) = v8;
      *(_DWORD *)(v9 + 4) = v6 - 1;
      *(_DWORD *)(v13 + 284) = v10 - 1;
      return result;
    case 4:
      v463 = *(_DWORD *)(v13 + 276);
      v464 = *(_DWORD *)(v13 + 328);
      *(_DWORD *)(v13 + 276) = 0;
      *(_DWORD *)(v13 + 328) = v9;
      v465 = *(_DWORD *)(v9 + 8);
      if ( (a2 & 4) != 0
        && !*(_DWORD *)v465
        && *(_DWORD *)(v465 + 12) == 6
        && !strncmp(*(const char **)(v465 + 8), "JArray", 6u) )
      {
        sub_314740(v13, a2, *(_DWORD *)(v9 + 12));
        result = sub_313BA0(v13, (int)&dword_433230, 2);
      }
      else
      {
        sub_314740(v13, a2, v465);
        if ( *(_BYTE *)(v13 + 260) == 60 )
        {
          v558 = *(_DWORD *)(v13 + 256);
          if ( v558 == 255 )
          {
            v559 = *(void (__fastcall **)(size_t, int, _DWORD))(v13 + 264);
            *(_BYTE *)(v13 + 255) = 0;
            v558 = 0;
            v559(v13, 255, *(_DWORD *)(v13 + 268));
            v560 = *(_DWORD *)(v13 + 296);
            *(_DWORD *)(v13 + 256) = 0;
            *(_DWORD *)(v13 + 296) = v560 + 1;
          }
          *(_DWORD *)(v13 + 256) = v558 + 1;
          *(_BYTE *)(v13 + v558) = 32;
          *(_BYTE *)(v13 + 260) = 32;
        }
        v466 = *(_DWORD *)(v13 + 256);
        if ( v466 == 255 )
        {
          v467 = *(void (__fastcall **)(size_t, int, _DWORD))(v13 + 264);
          *(_BYTE *)(v13 + 255) = 0;
          v466 = 0;
          v467(v13, 255, *(_DWORD *)(v13 + 268));
          v468 = *(_DWORD *)(v13 + 296);
          *(_DWORD *)(v13 + 256) = 0;
          *(_DWORD *)(v13 + 296) = v468 + 1;
        }
        *(_DWORD *)(v13 + 256) = v466 + 1;
        *(_BYTE *)(v13 + v466) = 60;
        *(_BYTE *)(v13 + 260) = 60;
        result = sub_314740(v13, a2, *(_DWORD *)(v9 + 12));
        if ( *(_BYTE *)(v13 + 260) == 62 )
        {
          v554 = *(_DWORD *)(v13 + 256);
          if ( v554 == 255 )
          {
            v555 = *(int (__fastcall **)(size_t, int, _DWORD))(v13 + 264);
            *(_BYTE *)(v13 + 255) = 0;
            v554 = 0;
            result = v555(v13, 255, *(_DWORD *)(v13 + 268));
            v556 = *(_DWORD *)(v13 + 296);
            *(_DWORD *)(v13 + 256) = 0;
            *(_DWORD *)(v13 + 296) = v556 + 1;
          }
          *(_DWORD *)(v13 + 256) = v554 + 1;
          *(_BYTE *)(v13 + v554) = 32;
          *(_BYTE *)(v13 + 260) = 32;
        }
        v469 = *(_DWORD *)(v13 + 256);
        if ( v469 == 255 )
        {
          v470 = *(int (__fastcall **)(size_t, int, _DWORD))(v13 + 264);
          *(_BYTE *)(v13 + 255) = 0;
          v469 = 0;
          result = v470(v13, 255, *(_DWORD *)(v13 + 268));
          v471 = *(_DWORD *)(v13 + 296);
          *(_DWORD *)(v13 + 256) = 0;
          *(_DWORD *)(v13 + 296) = v471 + 1;
        }
        *(_DWORD *)(v13 + 256) = v469 + 1;
        *(_BYTE *)(v13 + v469) = 62;
        *(_BYTE *)(v13 + 260) = 62;
      }
      *(_DWORD *)(v13 + 276) = v463;
      *(_DWORD *)(v13 + 328) = v464;
      v8 = v655;
      v6 = *(_DWORD *)(v9 + 4);
      v10 = *(_DWORD *)(v13 + 284);
      goto LABEL_24;
    case 5:
      if ( *(_DWORD *)(v13 + 288) )
      {
        v539 = "auto:";
        v540 = *(_DWORD *)(v13 + 256);
        do
        {
          v541 = v540;
          v543 = *v539++;
          v542 = v543;
          if ( v540 == 255 )
          {
            v544 = *(void (__fastcall **)(size_t, int, int))(v13 + 264);
            v545 = *(_DWORD *)(v13 + 268);
            *(_BYTE *)(v13 + 255) = 0;
            v544(v13, 255, v545);
            v540 = 1;
            v541 = 0;
            ++*(_DWORD *)(v13 + 296);
          }
          else
          {
            ++v540;
          }
          *(_DWORD *)(v13 + 256) = v540;
          *(_BYTE *)(v13 + v541) = v542;
          *(_BYTE *)(v13 + 260) = v542;
        }
        while ( "" != v539 );
        sprintf(s, "%d", *(_DWORD *)(v9 + 8) + 1);
        result = strlen(s);
        if ( result )
        {
          v546 = *(_DWORD *)(v13 + 256);
          v547 = s;
          v548 = &s[result];
          do
          {
            v549 = v546;
            result = v13;
            v551 = *v547++;
            v550 = v551;
            if ( v546 == 255 )
            {
              v552 = *(int (__fastcall **)(size_t, int, int))(v13 + 264);
              v553 = *(_DWORD *)(v13 + 268);
              *(_BYTE *)(v13 + 255) = 0;
              result = v552(v13, 255, v553);
              v546 = 1;
              v549 = 0;
              ++*(_DWORD *)(v13 + 296);
            }
            else
            {
              ++v546;
            }
            *(_DWORD *)(v13 + 256) = v546;
            *(_BYTE *)(v13 + v549) = v550;
            *(_BYTE *)(v13 + 260) = v550;
          }
          while ( v548 != v547 );
        }
        v8 = v655;
        v6 = *(_DWORD *)(v9 + 4);
        v10 = *(_DWORD *)(v13 + 284);
      }
      else
      {
        result = (unsigned int)sub_313F30(v13, (int *)(v9 + 8));
        v442 = result;
        if ( result
          && (*(_DWORD *)result != 47
           || (v557 = *(_DWORD *)(v13 + 292), v557 < 0)
           || (result = (unsigned int)sub_313ED8((_DWORD *)result, v557), (v442 = result) != 0)) )
        {
          v443 = *(_DWORD **)(v13 + 272);
          *(_DWORD *)(v13 + 272) = *v443;
          result = sub_314740(v13, a2, v442);
          *(_DWORD *)(v13 + 272) = v443;
          v8 = v655;
          v6 = *(_DWORD *)(v9 + 4);
          v10 = *(_DWORD *)(v13 + 284);
        }
        else
        {
          v8 = v655;
          *(_DWORD *)(v13 + 280) = 1;
          v10 = *(_DWORD *)(v13 + 284);
          v6 = *(_DWORD *)(v9 + 4);
        }
      }
      goto LABEL_24;
    case 6:
      v444 = *(_DWORD *)(v9 + 8);
      v445 = *(_DWORD *)(v13 + 256);
      if ( v444 )
      {
        v446 = "{parm#";
        do
        {
          v447 = v445;
          if ( v445 != 255 )
            v12 = (int *)v445;
          v449 = *v446++;
          v448 = v449;
          if ( v445 == 255 )
          {
            v450 = *(void (__fastcall **)(size_t, int, int))(v13 + 264);
            v451 = *(_DWORD *)(v13 + 268);
            *(_BYTE *)(v13 + 255) = 0;
            v450(v13, v447, v451);
            v445 = 1;
            v12 = 0;
            ++*(_DWORD *)(v13 + 296);
          }
          else
          {
            ++v445;
          }
          *(_DWORD *)(v13 + 256) = v445;
          *((_BYTE *)v12 + v13) = v448;
          *(_BYTE *)(v13 + 260) = v448;
        }
        while ( "" != v446 );
        sprintf(s, "%d", v444);
        result = strlen(s);
        if ( result )
        {
          v453 = *(_DWORD *)(v13 + 256);
          v454 = s;
          v455 = &s[result];
          do
          {
            v456 = v453;
            if ( v453 != 255 )
              v452 = v453;
            result = v13;
            v458 = *v454++;
            v457 = v458;
            if ( v453 == 255 )
            {
              v459 = *(int (__fastcall **)(size_t, int, int))(v13 + 264);
              v460 = *(_DWORD *)(v13 + 268);
              *(_BYTE *)(v13 + 255) = 0;
              result = v459(v13, v456, v460);
              v453 = 1;
              v452 = 0;
              ++*(_DWORD *)(v13 + 296);
            }
            else
            {
              ++v453;
            }
            *(_DWORD *)(v13 + 256) = v453;
            *(_BYTE *)(v13 + v452) = v457;
            *(_BYTE *)(v13 + 260) = v457;
          }
          while ( v455 != v454 );
        }
        v84 = *(_DWORD *)(v13 + 256);
        if ( v84 == 255 )
        {
          v461 = *(int (__fastcall **)(size_t, int, _DWORD))(v13 + 264);
          *(_BYTE *)(v13 + 255) = 0;
          v84 = 0;
          result = v461(v13, 255, *(_DWORD *)(v13 + 268));
          v462 = *(_DWORD *)(v13 + 296);
          *(_DWORD *)(v13 + 256) = 0;
          *(_DWORD *)(v13 + 296) = v462 + 1;
        }
        goto LABEL_465;
      }
      v512 = "this";
      do
      {
        v513 = v445;
        result = v13;
        v515 = *v512++;
        v514 = v515;
        if ( v445 == 255 )
        {
          v516 = *(int (__fastcall **)(size_t, int, int))(v13 + 264);
          v517 = *(_DWORD *)(v13 + 268);
          *(_BYTE *)(v13 + 255) = 0;
          result = v516(v13, 255, v517);
          v445 = 1;
          v513 = 0;
          ++*(_DWORD *)(v13 + 296);
        }
        else
        {
          ++v445;
        }
        *(_DWORD *)(v13 + 256) = v445;
        *(_BYTE *)(v13 + v513) = v514;
        *(_BYTE *)(v13 + 260) = v514;
      }
      while ( "" != v512 );
      v8 = v655;
      v6 = *(_DWORD *)(v9 + 4);
      v10 = *(_DWORD *)(v13 + 284);
      goto LABEL_24;
    case 7:
      goto LABEL_382;
    case 8:
      v396 = *(_DWORD *)(v13 + 256);
      if ( v396 == 255 )
      {
        v397 = *(void (__fastcall **)(size_t, int, _DWORD))(v13 + 264);
        *(_BYTE *)(v13 + 255) = 0;
        v396 = 0;
        v397(v13, 255, *(_DWORD *)(v13 + 268));
        v398 = *(_DWORD *)(v13 + 296);
        *(_DWORD *)(v13 + 256) = 0;
        *(_DWORD *)(v13 + 296) = v398 + 1;
      }
      *(_DWORD *)(v13 + 256) = v396 + 1;
      *(_BYTE *)(v13 + v396) = 126;
      *(_BYTE *)(v13 + 260) = 126;
      result = sub_314740(v13, a2, *(_DWORD *)(v9 + 12));
      v8 = v655;
      v6 = *(_DWORD *)(v9 + 4);
      v10 = *(_DWORD *)(v13 + 284);
      goto LABEL_24;
    case 9:
      v389 = "vtable for ";
      v390 = *(_DWORD *)(v13 + 256);
      do
      {
        v391 = v390;
        v393 = *v389++;
        v392 = v393;
        if ( v390 == 255 )
        {
          v394 = *(void (__fastcall **)(size_t, int, int))(v13 + 264);
          v395 = *(_DWORD *)(v13 + 268);
          *(_BYTE *)(v13 + 255) = 0;
          v394(v13, 255, v395);
          v390 = 1;
          v391 = 0;
          ++*(_DWORD *)(v13 + 296);
        }
        else
        {
          ++v390;
        }
        *(_DWORD *)(v13 + 256) = v390;
        *(_BYTE *)(v13 + v391) = v392;
        *(_BYTE *)(v13 + 260) = v392;
      }
      while ( "" != v389 );
      goto LABEL_415;
    case 0xA:
      v382 = (char *)&unk_3670D7;
      v383 = *(_DWORD *)(v13 + 256);
      do
      {
        v384 = v383;
        v386 = *++v382;
        v385 = v386;
        if ( v383 == 255 )
        {
          v387 = *(void (__fastcall **)(size_t, int, int))(v13 + 264);
          v388 = *(_DWORD *)(v13 + 268);
          *(_BYTE *)(v13 + 255) = 0;
          v387(v13, 255, v388);
          v383 = 1;
          v384 = 0;
          ++*(_DWORD *)(v13 + 296);
        }
        else
        {
          ++v383;
        }
        *(_DWORD *)(v13 + 256) = v383;
        *(_BYTE *)(v13 + v384) = v385;
        *(_BYTE *)(v13 + 260) = v385;
      }
      while ( " " != v382 );
      goto LABEL_415;
    case 0xB:
      v368 = (char *)&unk_366FDB;
      v369 = *(_DWORD *)(v13 + 256);
      do
      {
        v370 = v369;
        v372 = *++v368;
        v371 = v372;
        if ( v369 == 255 )
        {
          v373 = *(void (__fastcall **)(size_t, int, int))(v13 + 264);
          v374 = *(_DWORD *)(v13 + 268);
          *(_BYTE *)(v13 + 255) = 0;
          v373(v13, 255, v374);
          v369 = 1;
          v370 = 0;
          ++*(_DWORD *)(v13 + 296);
        }
        else
        {
          ++v369;
        }
        *(_DWORD *)(v13 + 256) = v369;
        *(_BYTE *)(v13 + v370) = v371;
        *(_BYTE *)(v13 + 260) = v371;
      }
      while ( " " != v368 );
      v375 = "-in-";
      sub_314740(v13, a2, *(_DWORD *)(v9 + 8));
      v376 = *(_DWORD *)(v13 + 256);
      do
      {
        v377 = v376;
        v379 = *v375++;
        v378 = v379;
        if ( v376 == 255 )
        {
          v380 = *(void (__fastcall **)(size_t, int, int))(v13 + 264);
          v381 = *(_DWORD *)(v13 + 268);
          *(_BYTE *)(v13 + 255) = 0;
          v380(v13, 255, v381);
          v376 = 1;
          v377 = 0;
          ++*(_DWORD *)(v13 + 296);
        }
        else
        {
          ++v376;
        }
        *(_DWORD *)(v13 + 256) = v376;
        *(_BYTE *)(v13 + v377) = v378;
        *(_BYTE *)(v13 + 260) = v378;
      }
      while ( "" != v375 );
      goto LABEL_382;
    case 0xC:
      v406 = "typeinfo for ";
      v407 = *(_DWORD *)(v13 + 256);
      do
      {
        v408 = v407;
        v410 = *v406++;
        v409 = v410;
        if ( v407 == 255 )
        {
          v411 = *(void (__fastcall **)(size_t, int, int))(v13 + 264);
          v412 = *(_DWORD *)(v13 + 268);
          *(_BYTE *)(v13 + 255) = 0;
          v411(v13, 255, v412);
          v407 = 1;
          v408 = 0;
          ++*(_DWORD *)(v13 + 296);
        }
        else
        {
          ++v407;
        }
        *(_DWORD *)(v13 + 256) = v407;
        *(_BYTE *)(v13 + v408) = v409;
        *(_BYTE *)(v13 + 260) = v409;
      }
      while ( "" != v406 );
      goto LABEL_415;
    case 0xD:
      v399 = (char *)&unk_367053;
      v400 = *(_DWORD *)(v13 + 256);
      do
      {
        v401 = v400;
        v403 = *++v399;
        v402 = v403;
        if ( v400 == 255 )
        {
          v404 = *(void (__fastcall **)(size_t, int, int))(v13 + 264);
          v405 = *(_DWORD *)(v13 + 268);
          *(_BYTE *)(v13 + 255) = 0;
          v404(v13, 255, v405);
          v400 = 1;
          v401 = 0;
          ++*(_DWORD *)(v13 + 296);
        }
        else
        {
          ++v400;
        }
        *(_DWORD *)(v13 + 256) = v400;
        *(_BYTE *)(v13 + v401) = v402;
        *(_BYTE *)(v13 + 260) = v402;
      }
      while ( " " != v399 );
      goto LABEL_415;
    case 0xE:
      v413 = (char *)&unk_36703F;
      v414 = *(_DWORD *)(v13 + 256);
      do
      {
        v415 = v414;
        v417 = *++v413;
        v416 = v417;
        if ( v414 == 255 )
        {
          v418 = *(void (__fastcall **)(size_t, int, int))(v13 + 264);
          v419 = *(_DWORD *)(v13 + 268);
          *(_BYTE *)(v13 + 255) = 0;
          v418(v13, 255, v419);
          v414 = 1;
          v415 = 0;
          ++*(_DWORD *)(v13 + 296);
        }
        else
        {
          ++v414;
        }
        *(_DWORD *)(v13 + 256) = v414;
        *(_BYTE *)(v13 + v415) = v416;
        *(_BYTE *)(v13 + 260) = v416;
      }
      while ( " " != v413 );
      goto LABEL_415;
    case 0xF:
      v257 = (char *)&unk_3670E3;
      v258 = *(_DWORD *)(v13 + 256);
      do
      {
        v259 = v258;
        v261 = *++v257;
        v260 = v261;
        if ( v258 == 255 )
        {
          v262 = *(void (__fastcall **)(size_t, int, int))(v13 + 264);
          v263 = *(_DWORD *)(v13 + 268);
          *(_BYTE *)(v13 + 255) = 0;
          v262(v13, 255, v263);
          v258 = 1;
          v259 = 0;
          ++*(_DWORD *)(v13 + 296);
        }
        else
        {
          ++v258;
        }
        *(_DWORD *)(v13 + 256) = v258;
        *(_BYTE *)(v13 + v259) = v260;
        *(_BYTE *)(v13 + 260) = v260;
      }
      while ( " " != v257 );
      goto LABEL_415;
    case 0x10:
      v320 = "-virtual thunk to ";
      v321 = *(_DWORD *)(v13 + 256);
      do
      {
        v322 = v321;
        v324 = *++v320;
        v323 = v324;
        if ( v321 == 255 )
        {
          v325 = *(void (__fastcall **)(size_t, int, int))(v13 + 264);
          v326 = *(_DWORD *)(v13 + 268);
          *(_BYTE *)(v13 + 255) = 0;
          v325(v13, 255, v326);
          v321 = 1;
          v322 = 0;
          ++*(_DWORD *)(v13 + 296);
        }
        else
        {
          ++v321;
        }
        *(_DWORD *)(v13 + 256) = v321;
        *(_BYTE *)(v13 + v322) = v323;
        *(_BYTE *)(v13 + 260) = v323;
      }
      while ( " " != v320 );
      goto LABEL_415;
    case 0x11:
      v313 = (char *)&unk_366FF7;
      v314 = *(_DWORD *)(v13 + 256);
      do
      {
        v315 = v314;
        v317 = *++v313;
        v316 = v317;
        if ( v314 == 255 )
        {
          v318 = *(void (__fastcall **)(size_t, int, int))(v13 + 264);
          v319 = *(_DWORD *)(v13 + 268);
          *(_BYTE *)(v13 + 255) = 0;
          v318(v13, 255, v319);
          v314 = 1;
          v315 = 0;
          ++*(_DWORD *)(v13 + 296);
        }
        else
        {
          ++v314;
        }
        *(_DWORD *)(v13 + 256) = v314;
        *(_BYTE *)(v13 + v315) = v316;
        *(_BYTE *)(v13 + 260) = v316;
      }
      while ( " " != v313 );
      goto LABEL_415;
    case 0x12:
      v306 = (char *)&unk_433AFB;
      v307 = *(_DWORD *)(v13 + 256);
      do
      {
        v308 = v307;
        v310 = *++v306;
        v309 = v310;
        if ( v307 == 255 )
        {
          v311 = *(void (__fastcall **)(size_t, int, int))(v13 + 264);
          v312 = *(_DWORD *)(v13 + 268);
          *(_BYTE *)(v13 + 255) = 0;
          v311(v13, 255, v312);
          v307 = 1;
          v308 = 0;
          ++*(_DWORD *)(v13 + 296);
        }
        else
        {
          ++v307;
        }
        *(_DWORD *)(v13 + 256) = v307;
        *(_BYTE *)(v13 + v308) = v309;
        *(_BYTE *)(v13 + 260) = v309;
      }
      while ( " " != v306 );
      goto LABEL_415;
    case 0x13:
      v299 = "";
      v300 = *(_DWORD *)(v13 + 256);
      do
      {
        v301 = v300;
        v303 = *++v299;
        v302 = v303;
        if ( v300 == 255 )
        {
          v304 = *(void (__fastcall **)(size_t, int, int))(v13 + 264);
          v305 = *(_DWORD *)(v13 + 268);
          *(_BYTE *)(v13 + 255) = 0;
          v304(v13, 255, v305);
          v300 = 1;
          v301 = 0;
          ++*(_DWORD *)(v13 + 296);
        }
        else
        {
          ++v300;
        }
        *(_DWORD *)(v13 + 256) = v300;
        *(_BYTE *)(v13 + v301) = v302;
        *(_BYTE *)(v13 + 260) = v302;
      }
      while ( " " != v299 );
      goto LABEL_415;
    case 0x14:
      v292 = "";
      v293 = *(_DWORD *)(v13 + 256);
      do
      {
        v294 = v293;
        v296 = *++v292;
        v295 = v296;
        if ( v293 == 255 )
        {
          v297 = *(void (__fastcall **)(size_t, int, int))(v13 + 264);
          v298 = *(_DWORD *)(v13 + 268);
          *(_BYTE *)(v13 + 255) = 0;
          v297(v13, 255, v298);
          v293 = 1;
          v294 = 0;
          ++*(_DWORD *)(v13 + 296);
        }
        else
        {
          ++v293;
        }
        *(_DWORD *)(v13 + 256) = v293;
        *(_BYTE *)(v13 + v294) = v295;
        *(_BYTE *)(v13 + 260) = v295;
      }
      while ( " " != v292 );
      goto LABEL_415;
    case 0x15:
      v285 = (char *)&unk_433B23;
      v286 = *(_DWORD *)(v13 + 256);
      do
      {
        v287 = v286;
        v289 = *++v285;
        v288 = v289;
        if ( v286 == 255 )
        {
          v290 = *(void (__fastcall **)(size_t, int, int))(v13 + 264);
          v291 = *(_DWORD *)(v13 + 268);
          *(_BYTE *)(v13 + 255) = 0;
          v290(v13, 255, v291);
          v286 = 1;
          v287 = 0;
          ++*(_DWORD *)(v13 + 296);
        }
        else
        {
          ++v286;
        }
        *(_DWORD *)(v13 + 256) = v286;
        *(_BYTE *)(v13 + v287) = v288;
        *(_BYTE *)(v13 + 260) = v288;
      }
      while ( " " != v285 );
      goto LABEL_415;
    case 0x16:
      v271 = (char *)&unk_433B3F;
      v272 = *(_DWORD *)(v13 + 256);
      do
      {
        v273 = v272;
        v275 = *++v271;
        v274 = v275;
        if ( v272 == 255 )
        {
          v276 = *(void (__fastcall **)(size_t, int, int))(v13 + 264);
          v277 = *(_DWORD *)(v13 + 268);
          *(_BYTE *)(v13 + 255) = 0;
          v276(v13, 255, v277);
          v272 = 1;
          v273 = 0;
          ++*(_DWORD *)(v13 + 296);
        }
        else
        {
          ++v272;
        }
        *(_DWORD *)(v13 + 256) = v272;
        *(_BYTE *)(v13 + v273) = v274;
        *(_BYTE *)(v13 + 260) = v274;
      }
      while ( "#" != v271 );
      v278 = " for ";
      sub_314740(v13, a2, *(_DWORD *)(v9 + 12));
      v279 = *(_DWORD *)(v13 + 256);
      do
      {
        v280 = v279;
        v282 = *v278++;
        v281 = v282;
        if ( v279 == 255 )
        {
          v283 = *(void (__fastcall **)(size_t, int, int))(v13 + 264);
          v284 = *(_DWORD *)(v13 + 268);
          *(_BYTE *)(v13 + 255) = 0;
          v283(v13, 255, v284);
          v279 = 1;
          v280 = 0;
          ++*(_DWORD *)(v13 + 296);
        }
        else
        {
          ++v279;
        }
        *(_DWORD *)(v13 + 256) = v279;
        *(_BYTE *)(v13 + v280) = v281;
        *(_BYTE *)(v13 + 260) = v281;
      }
      while ( "" != v278 );
      goto LABEL_415;
    case 0x17:
      v264 = (char *)&unk_433B57;
      v265 = *(_DWORD *)(v13 + 256);
      do
      {
        v266 = v265;
        v268 = *++v264;
        v267 = v268;
        if ( v265 == 255 )
        {
          v269 = *(void (__fastcall **)(size_t, int, int))(v13 + 264);
          v270 = *(_DWORD *)(v13 + 268);
          *(_BYTE *)(v13 + 255) = 0;
          v269(v13, 255, v270);
          v265 = 1;
          v266 = 0;
          ++*(_DWORD *)(v13 + 296);
        }
        else
        {
          ++v265;
        }
        *(_DWORD *)(v13 + 256) = v265;
        *(_BYTE *)(v13 + v266) = v267;
        *(_BYTE *)(v13 + 260) = v267;
      }
      while ( " " != v264 );
      goto LABEL_415;
    case 0x18:
      v358 = *(_DWORD *)(v9 + 12);
      v359 = *(_DWORD *)(v9 + 8);
      if ( v358 )
      {
        v360 = *(_DWORD *)(v13 + 256);
        v361 = v359 + v358 - 1;
        v362 = v359 - 1;
        do
        {
          v363 = v360;
          result = v13;
          v365 = *(_BYTE *)++v362;
          v364 = v365;
          if ( v360 == 255 )
          {
            v366 = *(int (__fastcall **)(size_t, int, int))(v13 + 264);
            v367 = *(_DWORD *)(v13 + 268);
            *(_BYTE *)(v13 + 255) = 0;
            result = v366(v13, 255, v367);
            v360 = 1;
            v363 = 0;
            ++*(_DWORD *)(v13 + 296);
          }
          else
          {
            ++v360;
          }
          *(_DWORD *)(v13 + 256) = v360;
          *(_BYTE *)(v13 + v363) = v364;
          *(_BYTE *)(v13 + 260) = v364;
        }
        while ( v361 != v362 );
        v8 = v655;
        v6 = *(_DWORD *)(v9 + 4);
        v10 = *(_DWORD *)(v13 + 284);
      }
      goto LABEL_24;
    case 0x19:
    case 0x1A:
    case 0x1B:
      v333 = *(int ***)(v13 + 276);
      v356 = v333;
      if ( !v333 )
        goto LABEL_323;
      while ( 1 )
      {
        if ( !v356[2] )
        {
          v357 = *v356[1];
          if ( (unsigned int)(v357 - 25) > 2 )
          {
            v11 = (int)v356[2];
            v327 = (_DWORD *)v9;
            goto LABEL_324;
          }
          if ( result == v357 )
          {
LABEL_415:
            result = sub_314740(v13, a2, *(_DWORD *)(v9 + 8));
            v8 = v655;
            v6 = *(_DWORD *)(v9 + 4);
            v10 = *(_DWORD *)(v13 + 284);
            goto LABEL_24;
          }
        }
        v356 = (int **)*v356;
        if ( !v356 )
        {
LABEL_323:
          v327 = (_DWORD *)v9;
          goto LABEL_324;
        }
      }
    case 0x1C:
    case 0x1D:
    case 0x1E:
    case 0x1F:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x25:
    case 0x26:
    case 0x4C:
    case 0x4E:
    case 0x4F:
      v332 = 0;
      goto LABEL_342;
    case 0x23:
    case 0x24:
      v11 = *(_DWORD *)(v13 + 288);
      v327 = *(_DWORD **)(v9 + 8);
      if ( v11 )
      {
        v11 = 0;
      }
      else if ( *v327 == 5 )
      {
        v328 = *(_DWORD *)(v13 + 304);
        v329 = *(_DWORD *)(v13 + 288);
        v330 = *(_DWORD *)(v13 + 308);
        while ( 1 )
        {
          result = v328 + 8 * v329;
          if ( v330 <= v329 )
            break;
          v336 = *(_DWORD **)(v328 + 8 * v329++);
          if ( v327 == v336 )
          {
            v615 = &v654;
            do
            {
              if ( v327 == (_DWORD *)*v615 )
                goto LABEL_339;
              v616 = v9 == *v615;
              if ( v615 == &v654 )
                v616 = 0;
              if ( v616 )
                goto LABEL_339;
              v615 = (int *)v615[1];
            }
            while ( v615 );
            v3 = *(_DWORD *)(v13 + 272);
            *(_DWORD *)(v13 + 272) = *(_DWORD *)(result + 4);
            result = (unsigned int)sub_313F30(v13, v327 + 2);
            v327 = (_DWORD *)result;
            if ( result )
            {
              v11 = 1;
              goto LABEL_691;
            }
LABEL_695:
            *(_DWORD *)(v13 + 272) = v3;
LABEL_340:
            v8 = v655;
            *(_DWORD *)(v13 + 280) = 1;
            v10 = *(_DWORD *)(v13 + 284);
            v6 = *(_DWORD *)(v9 + 4);
            goto LABEL_24;
          }
        }
        if ( v330 >= *(_DWORD *)(v13 + 312) )
        {
LABEL_742:
          *(_DWORD *)(v13 + 280) = 1;
          v6 = *(_DWORD *)(v9 + 4);
          goto LABEL_24;
        }
        *(_DWORD *)(v13 + 308) = v330 + 1;
        v337 = (_DWORD *)(v328 + 8 * v330 + 4);
        *(_DWORD *)(v328 + 8 * v330) = v327;
        for ( result = *(_DWORD *)(v13 + 272); result; result = *(_DWORD *)result )
        {
          v338 = *(_DWORD *)(v13 + 320);
          if ( v338 >= *(_DWORD *)(v13 + 324) )
            goto LABEL_742;
          v339 = *(_DWORD *)(v13 + 316);
          v340 = *(_DWORD *)(result + 4);
          *(_DWORD *)(v13 + 320) = v338 + 1;
          v341 = (_DWORD *)(v339 + 8 * v338);
          v341[1] = v340;
          *v337 = v341;
          v337 = v341;
        }
        *v337 = 0;
LABEL_339:
        result = (unsigned int)sub_313F30(v13, v327 + 2);
        v327 = (_DWORD *)result;
        if ( !result )
          goto LABEL_340;
LABEL_691:
        v331 = *v327;
        if ( *v327 == 47 )
        {
          v617 = *(_DWORD *)(v13 + 292);
          if ( v617 < 0 )
          {
LABEL_319:
            if ( *(_DWORD *)v9 != v331 )
            {
              if ( v331 != 36 )
              {
                v333 = *(int ***)(v13 + 276);
                goto LABEL_323;
              }
              v332 = v327[2];
LABEL_342:
              v342 = *(_DWORD *)(v13 + 276);
              v343 = *(_DWORD *)(v13 + 272);
              v658 = (_DWORD *)v9;
              *(_DWORD *)s = v342;
              v327 = (_DWORD *)v9;
              v660 = v343;
              *(_DWORD *)(v13 + 276) = s;
              v659 = 0;
              if ( v332 )
                goto LABEL_326;
              goto LABEL_325;
            }
LABEL_532:
            v333 = *(int ***)(v13 + 276);
LABEL_324:
            v334 = *(_DWORD *)(v13 + 272);
            *(_DWORD *)s = v333;
            v658 = v327;
            v660 = v334;
            *(_DWORD *)(v13 + 276) = s;
            v659 = 0;
LABEL_325:
            v332 = v327[2];
LABEL_326:
            result = sub_314740(v13, a2, v332);
            if ( !v659 )
              result = sub_31861C(v13, a2, v327);
            v335 = *(_DWORD *)s;
            if ( v11 )
              *(_DWORD *)(v13 + 272) = v3;
            v8 = v655;
            *(_DWORD *)(v13 + 276) = v335;
            v10 = *(_DWORD *)(v13 + 284);
            v6 = *(_DWORD *)(v9 + 4);
            goto LABEL_24;
          }
          result = (unsigned int)sub_313ED8(v327, v617);
          v327 = (_DWORD *)result;
          if ( !result )
          {
            if ( v11 )
              goto LABEL_695;
            goto LABEL_340;
          }
        }
      }
      v331 = *v327;
      if ( *v327 == 35 )
        goto LABEL_532;
      goto LABEL_319;
    case 0x27:
      result = *(_DWORD *)(v9 + 8);
      if ( (a2 & 4) != 0 )
      {
        v483 = *(_DWORD *)(result + 12);
        if ( v483 )
        {
          v484 = *(_DWORD *)(result + 8);
          v485 = *(_DWORD *)(v13 + 256);
          v486 = v484 + v483;
          v487 = v484 - 1;
          v488 = v486 - 1;
          do
          {
            v489 = v485;
            if ( v485 != 255 )
              v486 = v485;
            result = v13;
            v491 = *(_BYTE *)++v487;
            v490 = v491;
            if ( v485 == 255 )
            {
              v492 = *(int (__fastcall **)(size_t, int, int))(v13 + 264);
              v493 = *(_DWORD *)(v13 + 268);
              *(_BYTE *)(v13 + 255) = 0;
              result = v492(v13, v489, v493);
              v485 = 1;
              v486 = 0;
              ++*(_DWORD *)(v13 + 296);
            }
            else
            {
              ++v485;
            }
            *(_DWORD *)(v13 + 256) = v485;
            *(_BYTE *)(v13 + v486) = v490;
            *(_BYTE *)(v13 + 260) = v490;
          }
          while ( v488 != v487 );
          v8 = v655;
          v6 = *(_DWORD *)(v9 + 4);
          v10 = *(_DWORD *)(v13 + 284);
        }
      }
      else
      {
        v344 = *(_DWORD *)(result + 4);
        if ( v344 )
        {
          v345 = *(_DWORD *)(v13 + 256);
          v346 = *(_DWORD *)result + v344;
          v347 = *(_DWORD *)result - 1;
          v348 = v346 - 1;
          do
          {
            v349 = v345;
            if ( v345 != 255 )
              v346 = v345;
            result = v13;
            v351 = *(_BYTE *)++v347;
            v350 = v351;
            if ( v345 == 255 )
            {
              v352 = *(int (__fastcall **)(size_t, int, int))(v13 + 264);
              v353 = *(_DWORD *)(v13 + 268);
              *(_BYTE *)(v13 + 255) = 0;
              result = v352(v13, v349, v353);
              v345 = 1;
              v346 = 0;
              ++*(_DWORD *)(v13 + 296);
            }
            else
            {
              ++v345;
            }
            *(_DWORD *)(v13 + 256) = v345;
            *(_BYTE *)(v13 + v346) = v350;
            *(_BYTE *)(v13 + 260) = v350;
          }
          while ( v348 != v347 );
          v8 = v655;
          v6 = *(_DWORD *)(v9 + 4);
          v10 = *(_DWORD *)(v13 + 284);
        }
      }
      goto LABEL_24;
    case 0x28:
      goto LABEL_415;
    case 0x29:
      v354 = a2 & 0xFFFFFF9F;
      if ( (a2 & 0x20) == 0 )
      {
        v355 = *(_DWORD *)(v9 + 8);
        if ( v355 && (a2 & 0x40) == 0 )
        {
          v621 = *(_DWORD *)(v13 + 272);
          *(_DWORD *)s = *(_DWORD *)(v13 + 276);
          *(_DWORD *)(v13 + 276) = s;
          v659 = 0;
          v658 = (_DWORD *)v9;
          v660 = v621;
          result = sub_314740(v13, v354, v355);
          v622 = v659;
          v181 = v659 == 0;
          *(_DWORD *)(v13 + 276) = *(_DWORD *)s;
          if ( !v181 )
          {
            v8 = v655;
            v6 = *(_DWORD *)(v9 + 4);
            v10 = *(_DWORD *)(v13 + 284);
            goto LABEL_24;
          }
          v623 = *(_DWORD *)(v13 + 256);
          if ( v623 == 255 )
          {
            v624 = *(void (__fastcall **)(size_t, int, _DWORD))(v13 + 264);
            *(_BYTE *)(v13 + 255) = v622;
            v623 = v622;
            v624(v13, 255, *(_DWORD *)(v13 + 268));
            v625 = *(_DWORD *)(v13 + 296);
            *(_DWORD *)(v13 + 256) = v622;
            *(_DWORD *)(v13 + 296) = v625 + 1;
          }
          *(_DWORD *)(v13 + 256) = v623 + 1;
          *(_BYTE *)(v13 + v623) = 32;
          *(_BYTE *)(v13 + 260) = 32;
        }
        result = sub_318ED8(v13, v354, v9 + 12, *(_DWORD *)(v13 + 276));
        v8 = v655;
        v6 = *(_DWORD *)(v9 + 4);
        v10 = *(_DWORD *)(v13 + 284);
        goto LABEL_24;
      }
      result = sub_318ED8(v13, a2 & 0xFFFFFF9F, v9 + 12, *(_DWORD *)(v13 + 276));
      v561 = *(_DWORD *)(v9 + 8);
      if ( v561 )
        result = sub_314740(v13, a2 & 0xFFFFFF9F, v561);
      v8 = v655;
      v6 = *(_DWORD *)(v9 + 4);
      v10 = *(_DWORD *)(v13 + 284);
      goto LABEL_24;
    case 0x2A:
      v243 = *(_DWORD *)(v13 + 276);
      v244 = *(_DWORD *)(v13 + 272);
      v181 = v243 == 0;
      *(_DWORD *)s = v243;
      v245 = v243;
      *(_DWORD *)(v13 + 276) = s;
      v246 = s;
      v658 = (_DWORD *)v9;
      v660 = v244;
      v659 = 0;
      if ( !v181 && (unsigned int)(**(_DWORD **)(v245 + 4) - 25) <= 2 )
      {
        v247 = 1;
        v248 = (unsigned int *)v245;
        while ( 1 )
        {
          v249 = 16 * v247;
          v250 = &v662[16 * v247];
          if ( !v248[2] )
          {
            v533 = v247++ > 3;
            if ( v533 )
            {
              *(_DWORD *)(v13 + 280) = 1;
              goto LABEL_255;
            }
            result = *v248;
            v251 = v248[1];
            v252 = v248[2];
            v253 = v248[3];
            *((_DWORD *)v250 - 16) = *v248;
            *((_DWORD *)v250 - 15) = v251;
            *((_DWORD *)v250 - 14) = v252;
            *((_DWORD *)v250 - 13) = v253;
            *((_DWORD *)v250 - 16) = v246;
            v246 = &s[v249];
            *(_DWORD *)(v13 + 276) = &s[v249];
            v248[2] = 1;
          }
          v248 = (unsigned int *)*v248;
          if ( !v248 || (unsigned int)(*(_DWORD *)v248[1] - 25) > 2 )
          {
            result = sub_314740(v13, a2, *(_DWORD *)(v9 + 12));
            v254 = v659;
            *(_DWORD *)(v13 + 276) = v245;
            if ( v254 )
              goto LABEL_255;
            if ( v247 != 1 )
            {
              v255 = &s[16 * v247];
              do
              {
                v256 = *((_DWORD *)v255 - 3);
                v255 -= 16;
                sub_31861C(v13, a2, v256);
              }
              while ( &v661 != v255 );
            }
            goto LABEL_254;
          }
        }
      }
      result = sub_314740(v13, a2, *(_DWORD *)(v9 + 12));
      v646 = v659;
      *(_DWORD *)(v13 + 276) = v245;
      if ( !v646 )
LABEL_254:
        result = sub_31954C(v13, a2, v9 + 8, *(_DWORD *)(v13 + 276));
LABEL_255:
      v8 = v655;
      v6 = *(_DWORD *)(v9 + 4);
      v10 = *(_DWORD *)(v13 + 284);
      goto LABEL_24;
    case 0x2B:
    case 0x2D:
      v228 = *(_DWORD *)(v13 + 276);
      v229 = *(_DWORD *)(v13 + 272);
      v658 = (_DWORD *)v9;
      *(_DWORD *)s = v228;
      *(_DWORD *)(v13 + 276) = s;
      v660 = v229;
      v230 = *(_DWORD *)(v9 + 12);
      v659 = 0;
      result = sub_314740(v13, a2, v230);
      if ( !v659 )
        result = sub_31861C(v13, a2, v9);
      v6 = *(_DWORD *)(v9 + 4);
      v8 = v655;
      *(_DWORD *)(v13 + 276) = *(_DWORD *)s;
      v10 = *(_DWORD *)(v13 + 284);
      goto LABEL_24;
    case 0x2C:
      if ( *(_WORD *)(v9 + 14) )
      {
        v581 = "_Sat ";
        v582 = *(_DWORD *)(v13 + 256);
        do
        {
          v583 = v582;
          v585 = *v581++;
          v584 = v585;
          if ( v582 == 255 )
          {
            v586 = *(void (__fastcall **)(size_t, int, int))(v13 + 264);
            v587 = *(_DWORD *)(v13 + 268);
            *(_BYTE *)(v13 + 255) = 0;
            v586(v13, 255, v587);
            v582 = 1;
            v583 = 0;
            ++*(_DWORD *)(v13 + 296);
          }
          else
          {
            ++v582;
          }
          *(_DWORD *)(v13 + 256) = v582;
          *(_BYTE *)(v13 + v583) = v584;
          *(_BYTE *)(v13 + 260) = v584;
        }
        while ( "" != v581 );
      }
      v217 = *(_DWORD *)(v9 + 8);
      if ( *(_UNKNOWN ***)(v217 + 8) != &off_4334A4 )
      {
        sub_314740(v13, a2, v217);
        v218 = *(_DWORD *)(v13 + 256);
        if ( v218 == 255 )
        {
          v219 = *(void (__fastcall **)(size_t, int, _DWORD))(v13 + 264);
          *(_BYTE *)(v13 + 255) = 0;
          v218 = 0;
          v219(v13, 255, *(_DWORD *)(v13 + 268));
          v220 = *(_DWORD *)(v13 + 296);
          *(_DWORD *)(v13 + 256) = 0;
          *(_DWORD *)(v13 + 296) = v220 + 1;
        }
        v217 = v218 + 1;
        *(_DWORD *)(v13 + 256) = v218 + 1;
        *(_BYTE *)(v13 + v218) = 32;
        *(_BYTE *)(v13 + 260) = 32;
      }
      v221 = *(_DWORD *)(v13 + 256);
      if ( *(_WORD *)(v9 + 12) )
      {
        v222 = "_Accum";
        do
        {
          v223 = v221;
          if ( v221 != 255 )
            v217 = v221;
          result = v13;
          v225 = *v222++;
          v224 = v225;
          if ( v221 == 255 )
          {
            v226 = *(int (__fastcall **)(size_t, int, int))(v13 + 264);
            v227 = *(_DWORD *)(v13 + 268);
            *(_BYTE *)(v13 + 255) = 0;
            result = v226(v13, v223, v227);
            v221 = 1;
            v217 = 0;
            ++*(_DWORD *)(v13 + 296);
          }
          else
          {
            ++v221;
          }
          *(_DWORD *)(v13 + 256) = v221;
          *(_BYTE *)(v13 + v217) = v224;
          *(_BYTE *)(v13 + 260) = v224;
        }
        while ( "" != v222 );
        v8 = v655;
        v6 = *(_DWORD *)(v9 + 4);
        v10 = *(_DWORD *)(v13 + 284);
      }
      else
      {
        v494 = "_Fract";
        do
        {
          v495 = v221;
          if ( v221 != 255 )
            v217 = v221;
          result = v13;
          v497 = *v494++;
          v496 = v497;
          if ( v221 == 255 )
          {
            v498 = *(int (__fastcall **)(size_t, int, int))(v13 + 264);
            v499 = *(_DWORD *)(v13 + 268);
            *(_BYTE *)(v13 + 255) = 0;
            result = v498(v13, v495, v499);
            v221 = 1;
            v217 = 0;
            ++*(_DWORD *)(v13 + 296);
          }
          else
          {
            ++v221;
          }
          *(_DWORD *)(v13 + 256) = v221;
          *(_BYTE *)(v13 + v217) = v496;
          *(_BYTE *)(v13 + 260) = v496;
        }
        while ( "" != v494 );
        v8 = v655;
        v6 = *(_DWORD *)(v9 + 4);
        v10 = *(_DWORD *)(v13 + 284);
      }
      goto LABEL_24;
    case 0x2E:
    case 0x2F:
      v231 = *(_DWORD *)(v9 + 8);
      if ( v231 )
        result = sub_314740(v13, a2, v231);
      if ( *(_DWORD *)(v9 + 12) )
      {
        v232 = *(_DWORD *)(v13 + 256);
        if ( v232 > 0xFD )
        {
          v233 = *(_DWORD *)(v13 + 256);
          *(_BYTE *)(v13 + v232) = 0;
          v232 = 0;
          (*(void (__fastcall **)(size_t, int, _DWORD))(v13 + 264))(v13, v233, *(_DWORD *)(v13 + 268));
          v234 = *(_DWORD *)(v13 + 296);
          *(_DWORD *)(v13 + 256) = 0;
          *(_DWORD *)(v13 + 296) = v234 + 1;
        }
        v235 = ", ";
        do
        {
          v236 = v232;
          v237 = 0;
          if ( v232 != 255 )
            v237 = v232;
          v239 = *v235++;
          v238 = v239;
          if ( v232 == 255 )
          {
            v240 = *(void (__fastcall **)(size_t, unsigned int, _DWORD))(v13 + 264);
            v232 = 1;
            *(_BYTE *)(v13 + 255) = 0;
            v240(v13, v236, *(_DWORD *)(v13 + 268));
            ++*(_DWORD *)(v13 + 296);
          }
          else
          {
            ++v232;
          }
          *(_DWORD *)(v13 + 256) = v232;
          *(_BYTE *)(v13 + v237) = v238;
          *(_BYTE *)(v13 + 260) = v238;
        }
        while ( "" != v235 );
        v241 = a2;
        v242 = *(_DWORD *)(v13 + 296);
        result = sub_314740(v13, v241, *(_DWORD *)(v9 + 12));
        if ( v242 == *(_DWORD *)(v13 + 296) )
        {
          v6 = *(_DWORD *)(v9 + 4);
          v8 = v655;
          v10 = *(_DWORD *)(v13 + 284);
          if ( *(_DWORD *)(v13 + 256) == v232 )
            *(_DWORD *)(v13 + 256) = v237 - 1;
        }
        else
        {
          v8 = v655;
          v6 = *(_DWORD *)(v9 + 4);
          v10 = *(_DWORD *)(v13 + 284);
        }
      }
      else
      {
        v8 = v655;
        v6 = *(_DWORD *)(v9 + 4);
        v10 = *(_DWORD *)(v13 + 284);
      }
      goto LABEL_24;
    case 0x30:
      v210 = *(_DWORD *)(v9 + 8);
      v211 = *(_DWORD *)(v9 + 12);
      if ( v210 )
        sub_314740(v13, a2, v210);
      v212 = *(_DWORD *)(v13 + 256);
      if ( v212 == 255 )
      {
        v213 = *(void (__fastcall **)(size_t, int, _DWORD))(v13 + 264);
        *(_BYTE *)(v13 + 255) = 0;
        v212 = 0;
        v213(v13, 255, *(_DWORD *)(v13 + 268));
        v214 = *(_DWORD *)(v13 + 296);
        *(_DWORD *)(v13 + 256) = 0;
        *(_DWORD *)(v13 + 296) = v214 + 1;
      }
      *(_DWORD *)(v13 + 256) = v212 + 1;
      *(_BYTE *)(v13 + v212) = 123;
      *(_BYTE *)(v13 + 260) = 123;
      result = sub_314740(v13, a2, v211);
      v84 = *(_DWORD *)(v13 + 256);
      if ( v84 == 255 )
      {
        v215 = *(int (__fastcall **)(size_t, int, _DWORD))(v13 + 264);
        *(_BYTE *)(v13 + 255) = 0;
        v84 = 0;
        result = v215(v13, 255, *(_DWORD *)(v13 + 268));
        v216 = *(_DWORD *)(v13 + 296);
        *(_DWORD *)(v13 + 256) = 0;
        *(_DWORD *)(v13 + 296) = v216 + 1;
      }
      goto LABEL_465;
    case 0x31:
      v190 = *(_DWORD *)(v9 + 8);
      v191 = "_operator";
      v192 = *(_DWORD *)(v13 + 256);
      v193 = *(_DWORD *)(v190 + 8);
      do
      {
        v194 = v192;
        result = v13;
        v196 = *++v191;
        v195 = v196;
        if ( v192 == 255 )
        {
          v197 = *(int (__fastcall **)(size_t, int, int))(v13 + 264);
          v198 = *(_DWORD *)(v13 + 268);
          *(_BYTE *)(v13 + 255) = 0;
          result = v197(v13, 255, v198);
          v192 = 1;
          v194 = 0;
          ++*(_DWORD *)(v13 + 296);
        }
        else
        {
          ++v192;
        }
        *(_DWORD *)(v13 + 256) = v192;
        *(_BYTE *)(v13 + v194) = v195;
        *(_BYTE *)(v13 + 260) = v195;
      }
      while ( "r" != v191 );
      v199 = *(unsigned __int8 **)(v190 + 4);
      if ( (unsigned int)*v199 - 97 <= 0x19 )
      {
        if ( v192 == 255 )
        {
          *(_BYTE *)(v13 + 255) = 0;
          result = (*(int (__fastcall **)(size_t, int, _DWORD))(v13 + 264))(v13, 255, *(_DWORD *)(v13 + 268));
          v200 = *(_DWORD *)(v13 + 296);
          *(_DWORD *)(v13 + 256) = 0;
          *(_DWORD *)(v13 + 296) = v200 + 1;
        }
        v201 = *(_DWORD *)(v13 + 256);
        *(_DWORD *)(v13 + 256) = v201 + 1;
        *(_BYTE *)(v13 + v201) = 32;
        *(_BYTE *)(v13 + 260) = 32;
        v199 = *(unsigned __int8 **)(v190 + 4);
      }
      if ( v199[v193 - 1] == 32 )
        --v193;
      if ( v193 )
      {
        v202 = *(_DWORD *)(v13 + 256);
        v203 = v199 - 1;
        v204 = &v203[v193];
        do
        {
          v205 = v202;
          result = v13;
          v207 = *++v203;
          v206 = v207;
          if ( v202 == 255 )
          {
            v208 = *(int (__fastcall **)(size_t, int, int))(v13 + 264);
            v209 = *(_DWORD *)(v13 + 268);
            *(_BYTE *)(v13 + 255) = 0;
            result = v208(v13, 255, v209);
            v202 = 1;
            v205 = 0;
            ++*(_DWORD *)(v13 + 296);
          }
          else
          {
            ++v202;
          }
          *(_DWORD *)(v13 + 256) = v202;
          *(_BYTE *)(v13 + v205) = v206;
          *(_BYTE *)(v13 + 260) = v206;
        }
        while ( v204 != v203 );
        v8 = v655;
        v6 = *(_DWORD *)(v9 + 4);
        v10 = *(_DWORD *)(v13 + 284);
      }
      else
      {
        v8 = v655;
        v6 = *(_DWORD *)(v9 + 4);
        v10 = *(_DWORD *)(v13 + 284);
      }
      goto LABEL_24;
    case 0x32:
      v183 = "";
      v184 = *(_DWORD *)(v13 + 256);
      do
      {
        v185 = v184;
        v187 = *++v183;
        v186 = v187;
        if ( v184 == 255 )
        {
          v188 = *(void (__fastcall **)(size_t, int, int))(v13 + 264);
          v189 = *(_DWORD *)(v13 + 268);
          *(_BYTE *)(v13 + 255) = 0;
          v188(v13, 255, v189);
          v184 = 1;
          v185 = 0;
          ++*(_DWORD *)(v13 + 296);
        }
        else
        {
          ++v184;
        }
        *(_DWORD *)(v13 + 256) = v184;
        *(_BYTE *)(v13 + v185) = v186;
        *(_BYTE *)(v13 + 260) = v186;
      }
      while ( " " != v183 );
      goto LABEL_382;
    case 0x34:
      v173 = "";
      v174 = *(_DWORD *)(v13 + 256);
      do
      {
        v175 = v174;
        v177 = *++v173;
        v176 = v177;
        if ( v174 == 255 )
        {
          v178 = *(void (__fastcall **)(size_t, int, int))(v13 + 264);
          v179 = *(_DWORD *)(v13 + 268);
          *(_BYTE *)(v13 + 255) = 0;
          v178(v13, 255, v179);
          v174 = 1;
          v175 = 0;
          ++*(_DWORD *)(v13 + 296);
        }
        else
        {
          ++v174;
        }
        *(_DWORD *)(v13 + 256) = v174;
        *(_BYTE *)(v13 + v175) = v176;
        *(_BYTE *)(v13 + 260) = v176;
      }
      while ( " " != v173 );
      v180 = *(_DWORD *)(v13 + 328);
      v181 = v180 == 0;
      if ( v180 )
      {
        v175 = *(_DWORD *)(v13 + 272);
        v174 = (int)v662;
        v658 = *(_DWORD **)(v13 + 328);
      }
      v182 = *(_DWORD **)(v9 + 8);
      if ( !v181 )
      {
        *(_DWORD *)(v174 - 64) = v175;
        *(_DWORD *)(v13 + 272) = v174 - 64;
      }
      if ( *v182 == 4 )
      {
        sub_314740(v13, a2, v182[2]);
        if ( *(_DWORD *)(v13 + 328) )
          *(_DWORD *)(v13 + 272) = *(_DWORD *)s;
        if ( *(_BYTE *)(v13 + 260) == 60 )
        {
          v626 = *(_DWORD *)(v13 + 256);
          if ( v626 == 255 )
          {
            v627 = *(void (__fastcall **)(size_t, int, _DWORD))(v13 + 264);
            *(_BYTE *)(v13 + 255) = 0;
            v626 = 0;
            v627(v13, 255, *(_DWORD *)(v13 + 268));
            v628 = *(_DWORD *)(v13 + 296);
            *(_DWORD *)(v13 + 256) = 0;
            *(_DWORD *)(v13 + 296) = v628 + 1;
          }
          *(_DWORD *)(v13 + 256) = v626 + 1;
          *(_BYTE *)(v13 + v626) = 32;
          *(_BYTE *)(v13 + 260) = 32;
        }
        v562 = *(_DWORD *)(v13 + 256);
        if ( v562 == 255 )
        {
          v563 = *(void (__fastcall **)(size_t, int, _DWORD))(v13 + 264);
          *(_BYTE *)(v13 + 255) = 0;
          v562 = 0;
          v563(v13, 255, *(_DWORD *)(v13 + 268));
          v564 = *(_DWORD *)(v13 + 296);
          *(_DWORD *)(v13 + 256) = 0;
          *(_DWORD *)(v13 + 296) = v564 + 1;
        }
        *(_DWORD *)(v13 + 256) = v562 + 1;
        *(_BYTE *)(v13 + v562) = 60;
        *(_BYTE *)(v13 + 260) = 60;
        result = sub_314740(v13, a2, *(_DWORD *)(*(_DWORD *)(v9 + 8) + 12));
        if ( *(_BYTE *)(v13 + 260) == 62 )
        {
          v618 = *(_DWORD *)(v13 + 256);
          if ( v618 == 255 )
          {
            v619 = *(int (__fastcall **)(size_t, int, _DWORD))(v13 + 264);
            *(_BYTE *)(v13 + 255) = 0;
            v618 = 0;
            result = v619(v13, 255, *(_DWORD *)(v13 + 268));
            v620 = *(_DWORD *)(v13 + 296);
            *(_DWORD *)(v13 + 256) = 0;
            *(_DWORD *)(v13 + 296) = v620 + 1;
          }
          *(_DWORD *)(v13 + 256) = v618 + 1;
          *(_BYTE *)(v13 + v618) = 32;
          *(_BYTE *)(v13 + 260) = 32;
        }
        v565 = *(_DWORD *)(v13 + 256);
        if ( v565 == 255 )
        {
          v566 = *(int (__fastcall **)(size_t, int, _DWORD))(v13 + 264);
          *(_BYTE *)(v13 + 255) = 0;
          v565 = 0;
          result = v566(v13, 255, *(_DWORD *)(v13 + 268));
          v567 = *(_DWORD *)(v13 + 296);
          *(_DWORD *)(v13 + 256) = 0;
          *(_DWORD *)(v13 + 296) = v567 + 1;
        }
        *(_DWORD *)(v13 + 256) = v565 + 1;
        *(_BYTE *)(v13 + v565) = 62;
        *(_BYTE *)(v13 + 260) = 62;
      }
      else
      {
        result = sub_314740(v13, a2, v182);
        if ( *(_DWORD *)(v13 + 328) )
          *(_DWORD *)(v13 + 272) = *(_DWORD *)s;
      }
      v8 = v655;
      v6 = *(_DWORD *)(v9 + 4);
      v10 = *(_DWORD *)(v13 + 284);
      goto LABEL_24;
    case 0x35:
      result = sub_3197AC(v13, a2, *(_DWORD *)(v9 + 8));
      v8 = v655;
      v6 = *(_DWORD *)(v9 + 4);
      v10 = *(_DWORD *)(v13 + 284);
      goto LABEL_24;
    case 0x36:
      v165 = *(_DWORD *)(v9 + 8);
      v166 = *(int **)(v9 + 12);
      if ( *(_DWORD *)v165 == 49 )
      {
        v588 = *v166;
        v589 = **(unsigned __int8 ***)(v165 + 8);
        v590 = *v589;
        if ( v590 == 97 && v589[1] == 100 && !v589[2] && v588 == 3 )
        {
          if ( *(_DWORD *)v166[2] == 1 && *(_DWORD *)v166[3] == 41 )
            v166 = (int *)v166[2];
        }
        else
        {
          if ( v588 == 56 )
          {
            sub_31983C(v13, a2, v166[2]);
            result = sub_3197AC(v13, a2, v165);
            v8 = v655;
            v6 = *(_DWORD *)(v9 + 4);
            v10 = *(_DWORD *)(v13 + 284);
            goto LABEL_24;
          }
          if ( v590 == 115 )
          {
            v591 = v589[1];
            if ( v591 == 90 )
            {
              if ( !v589[2] )
              {
                v592 = sub_313F68(v13, *(_DWORD **)(v9 + 12));
                while ( v592 && *v592 == 47 && v592[2] )
                {
                  v592 = (_DWORD *)v592[3];
                  ++v11;
                }
                result = sub_3146A8(v13, v11);
                v8 = v655;
                v6 = *(_DWORD *)(v9 + 4);
                v10 = *(_DWORD *)(v13 + 284);
                goto LABEL_24;
              }
            }
            else if ( v591 == 80 && !v589[2] )
            {
              v605 = v589[2];
              do
              {
                if ( *v166 != 47 )
                  break;
                v606 = v166[2];
                if ( !v606 )
                  break;
                if ( *(_DWORD *)v606 == 74 )
                {
                  v607 = sub_313F68(v13, *(_DWORD **)(v606 + 8));
                  v608 = 0;
                  while ( v607 && *v607 == 47 && v607[2] )
                  {
                    v607 = (_DWORD *)v607[3];
                    ++v608;
                  }
                  v605 += v608;
                }
                else
                {
                  ++v605;
                }
                v166 = (int *)v166[3];
              }
              while ( v166 );
              result = sub_3146A8(v13, v605);
              v8 = v655;
              v6 = *(_DWORD *)(v9 + 4);
              v10 = *(_DWORD *)(v13 + 284);
              goto LABEL_24;
            }
          }
        }
      }
      else
      {
        if ( *(_DWORD *)v165 == 51 )
        {
          v167 = *(_DWORD *)(v13 + 256);
          if ( v167 == 255 )
          {
            v168 = *(void (__fastcall **)(size_t, int, _DWORD))(v13 + 264);
            *(_BYTE *)(v13 + 255) = 0;
            v167 = 0;
            v168(v13, 255, *(_DWORD *)(v13 + 268));
            v169 = *(_DWORD *)(v13 + 296);
            *(_DWORD *)(v13 + 256) = 0;
            *(_DWORD *)(v13 + 296) = v169 + 1;
          }
          *(_DWORD *)(v13 + 256) = v167 + 1;
          *(_BYTE *)(v13 + v167) = 40;
          *(_BYTE *)(v13 + 260) = 40;
          sub_314740(v13, a2, *(_DWORD *)(v165 + 8));
          v170 = *(_DWORD *)(v13 + 256);
          if ( v170 == 255 )
          {
            v171 = *(void (__fastcall **)(size_t, int, _DWORD))(v13 + 264);
            *(_BYTE *)(v13 + 255) = 0;
            v170 = 0;
            v171(v13, 255, *(_DWORD *)(v13 + 268));
            v172 = *(_DWORD *)(v13 + 296);
            *(_DWORD *)(v13 + 256) = 0;
            *(_DWORD *)(v13 + 296) = v172 + 1;
          }
          *(_DWORD *)(v13 + 256) = v170 + 1;
          *(_BYTE *)(v13 + v170) = 41;
          *(_BYTE *)(v13 + 260) = 41;
          goto LABEL_163;
        }
        v589 = 0;
      }
      sub_3197AC(v13, a2, *(_DWORD *)(v9 + 8));
      if ( !v589 )
        goto LABEL_163;
      v609 = *v589;
      if ( v609 == 103 )
      {
        if ( v589[1] == 115 && !v589[2] )
        {
          result = sub_314740(v13, a2, v166);
          v8 = v655;
          v6 = *(_DWORD *)(v9 + 4);
          v10 = *(_DWORD *)(v13 + 284);
          goto LABEL_24;
        }
LABEL_163:
        result = sub_31983C(v13, a2, v166);
        v8 = v655;
        v6 = *(_DWORD *)(v9 + 4);
        v10 = *(_DWORD *)(v13 + 284);
        goto LABEL_24;
      }
      if ( v609 != 115 || v589[1] != 116 || v589[2] )
        goto LABEL_163;
      v610 = *(_DWORD *)(v13 + 256);
      if ( v610 == 255 )
      {
        v611 = *(void (__fastcall **)(size_t, int, _DWORD))(v13 + 264);
        *(_BYTE *)(v13 + 255) = 0;
        v610 = 0;
        v611(v13, 255, *(_DWORD *)(v13 + 268));
        v612 = *(_DWORD *)(v13 + 296);
        *(_DWORD *)(v13 + 256) = 0;
        *(_DWORD *)(v13 + 296) = v612 + 1;
      }
      *(_DWORD *)(v13 + 256) = v610 + 1;
      *(_BYTE *)(v13 + v610) = 40;
      *(_BYTE *)(v13 + 260) = 40;
      result = sub_314740(v13, a2, v166);
      v134 = *(_DWORD *)(v13 + 256);
      if ( v134 == 255 )
      {
        v613 = *(int (__fastcall **)(size_t, int, _DWORD))(v13 + 264);
        *(_BYTE *)(v13 + 255) = 0;
        v134 = 0;
        result = v613(v13, 255, *(_DWORD *)(v13 + 268));
        v614 = *(_DWORD *)(v13 + 296);
        *(_DWORD *)(v13 + 256) = 0;
        *(_DWORD *)(v13 + 296) = v614 + 1;
      }
      goto LABEL_763;
    case 0x37:
      if ( **(_DWORD **)(v9 + 12) != 56 )
      {
        *(_DWORD *)(v13 + 280) = 1;
        v6 = *(_DWORD *)(v9 + 4);
        goto LABEL_24;
      }
      v529 = *(_DWORD *)(v9 + 8);
      v530 = **(unsigned __int8 ***)(v529 + 8);
      if ( v530[1] == 99 )
      {
        v531 = *v530;
        v532 = v531 - 99;
        v531 -= 114;
        v533 = v531 > 1;
        if ( v531 > 1 )
          v533 = v532 > 1;
        if ( !v533 )
        {
          sub_3197AC(v13, a2, v529);
          v534 = *(_DWORD *)(v13 + 256);
          if ( v534 == 255 )
          {
            v535 = *(void (__fastcall **)(size_t, int, _DWORD))(v13 + 264);
            *(_BYTE *)(v13 + 255) = 0;
            v534 = 0;
            v535(v13, 255, *(_DWORD *)(v13 + 268));
            v536 = *(_DWORD *)(v13 + 296);
            *(_DWORD *)(v13 + 256) = 0;
            *(_DWORD *)(v13 + 296) = v536 + 1;
          }
          *(_DWORD *)(v13 + 256) = v534 + 1;
          *(_BYTE *)(v13 + v534) = 60;
          *(_BYTE *)(v13 + 260) = 60;
          sub_314740(v13, a2, *(_DWORD *)(*(_DWORD *)(v9 + 12) + 8));
          sub_313BA0(v13, (int)">(", 2);
          result = sub_314740(v13, a2, *(_DWORD *)(*(_DWORD *)(v9 + 12) + 12));
          v134 = *(_DWORD *)(v13 + 256);
          if ( v134 == 255 )
          {
            v537 = *(int (__fastcall **)(size_t, int, _DWORD))(v13 + 264);
            *(_BYTE *)(v13 + 255) = 0;
            v134 = 0;
            result = v537(v13, 255, *(_DWORD *)(v13 + 268));
            v538 = *(_DWORD *)(v13 + 296);
            *(_DWORD *)(v13 + 256) = 0;
            *(_DWORD *)(v13 + 296) = v538 + 1;
          }
          goto LABEL_763;
        }
      }
      result = sub_319920(v13, a2, v529, v9 + 12);
      if ( result )
      {
        v8 = v655;
        v6 = *(_DWORD *)(v9 + 4);
        v10 = *(_DWORD *)(v13 + 284);
        goto LABEL_24;
      }
      v14 = *(_DWORD **)(v9 + 8);
      if ( *v14 == 49 )
      {
        v642 = v14[2];
        if ( *(_DWORD *)(v642 + 8) == 1 && **(_BYTE **)(v642 + 4) == 62 )
        {
          v643 = *(_DWORD *)(v13 + 256);
          if ( v643 == 255 )
          {
            v644 = *(void (__fastcall **)(size_t, int, _DWORD))(v13 + 264);
            *(_BYTE *)(v13 + 255) = 0;
            v643 = 0;
            v644(v13, 255, *(_DWORD *)(v13 + 268));
            v645 = *(_DWORD *)(v13 + 296);
            *(_DWORD *)(v13 + 256) = 0;
            *(_DWORD *)(v13 + 296) = v645 + 1;
          }
          *(_DWORD *)(v13 + 256) = v643 + 1;
          *(_BYTE *)(v13 + v643) = 40;
          *(_BYTE *)(v13 + 260) = 40;
          v14 = *(_DWORD **)(v9 + 8);
        }
      }
      v15 = *(_BYTE **)v14[2];
      v16 = *(_DWORD *)(*(_DWORD *)(v9 + 12) + 8);
      if ( *v15 == 99 && v15[1] == 108 && !v15[2] && *(_DWORD *)v16 == 3 )
      {
        if ( **(_DWORD **)(v16 + 12) != 41 )
          *(_DWORD *)(v13 + 280) = 1;
        sub_31983C(v13, a2, *(_DWORD *)(v16 + 8));
      }
      else
      {
        sub_31983C(v13, a2, v16);
      }
      v17 = *(_DWORD *)(v9 + 8);
      v18 = **(unsigned __int8 ***)(v17 + 8);
      v19 = *v18;
      if ( v19 == 105 )
      {
        if ( v18[1] == 120 )
        {
          v20 = v18[2];
          if ( !v18[2] )
          {
            v21 = *(_DWORD *)(v13 + 256);
            if ( v21 == 255 )
            {
              v22 = *(void (__fastcall **)(size_t, int, _DWORD))(v13 + 264);
              *(_BYTE *)(v13 + 255) = v20;
              v21 = v20;
              v22(v13, 255, *(_DWORD *)(v13 + 268));
              v23 = *(_DWORD *)(v13 + 296);
              *(_DWORD *)(v13 + 256) = v20;
              *(_DWORD *)(v13 + 296) = v23 + 1;
            }
            *(_DWORD *)(v13 + 256) = v21 + 1;
            *(_BYTE *)(v13 + v21) = 91;
            *(_BYTE *)(v13 + 260) = 91;
            result = sub_314740(v13, a2, *(_DWORD *)(*(_DWORD *)(v9 + 12) + 12));
            v24 = *(_DWORD *)(v13 + 256);
            if ( v24 == 255 )
            {
              v25 = *(int (__fastcall **)(size_t, int, _DWORD))(v13 + 264);
              *(_BYTE *)(v13 + 255) = 0;
              v24 = 0;
              result = v25(v13, 255, *(_DWORD *)(v13 + 268));
              v26 = *(_DWORD *)(v13 + 296);
              *(_DWORD *)(v13 + 256) = 0;
              *(_DWORD *)(v13 + 296) = v26 + 1;
            }
            *(_DWORD *)(v13 + 256) = v24 + 1;
            *(_BYTE *)(v13 + v24) = 93;
            *(_BYTE *)(v13 + 260) = 93;
LABEL_22:
            v27 = *(_DWORD **)(v9 + 8);
            if ( *v27 != 49 || (v647 = v27[2], *(_DWORD *)(v647 + 8) != 1) || **(_BYTE **)(v647 + 4) != 62 )
            {
              v8 = v655;
              v6 = *(_DWORD *)(v9 + 4);
              v10 = *(_DWORD *)(v13 + 284);
              goto LABEL_24;
            }
            v134 = *(_DWORD *)(v13 + 256);
            if ( v134 == 255 )
            {
              v648 = *(int (__fastcall **)(size_t, int, _DWORD))(v13 + 264);
              *(_BYTE *)(v13 + 255) = 0;
              v134 = 0;
              result = v648(v13, 255, *(_DWORD *)(v13 + 268));
              v649 = *(_DWORD *)(v13 + 296);
              *(_DWORD *)(v13 + 256) = 0;
              *(_DWORD *)(v13 + 296) = v649 + 1;
            }
LABEL_763:
            *(_DWORD *)(v13 + 256) = v134 + 1;
            v8 = v655;
            *(_BYTE *)(v13 + v134) = 41;
            *(_BYTE *)(v13 + 260) = 41;
            v10 = *(_DWORD *)(v13 + 284);
            v6 = *(_DWORD *)(v9 + 4);
            goto LABEL_24;
          }
        }
      }
      else if ( v19 == 99 && v18[1] == 108 && !v18[2] )
      {
        goto LABEL_752;
      }
      sub_3197AC(v13, a2, v17);
LABEL_752:
      result = sub_31983C(v13, a2, *(_DWORD *)(*(_DWORD *)(v9 + 12) + 12));
      goto LABEL_22;
    case 0x38:
      *(_DWORD *)(v13 + 280) = 1;
      v6 = *(_DWORD *)(v9 + 4);
      goto LABEL_24;
    case 0x39:
      v164 = *(_DWORD *)(v9 + 12);
      if ( *(_DWORD *)v164 == 58 && **(_DWORD **)(v164 + 12) == 59 )
      {
        result = sub_319920(v13, a2, *(_DWORD *)(v9 + 8), v9 + 12);
        if ( result )
        {
          v8 = v655;
          v6 = *(_DWORD *)(v9 + 4);
          v10 = *(_DWORD *)(v13 + 284);
        }
        else
        {
          v518 = *(_DWORD *)(v9 + 8);
          v519 = *(_DWORD *)(v9 + 12);
          v520 = *(_DWORD **)(v518 + 8);
          v521 = *(_DWORD *)(v519 + 12);
          v522 = *(_DWORD *)(v519 + 8);
          v523 = (_BYTE *)*v520;
          v524 = *(_DWORD *)(v521 + 8);
          v525 = *(_DWORD *)(v521 + 12);
          if ( *(_BYTE *)*v520 == 113 && v523[1] == 117 && !v523[2] )
          {
            sub_31983C(v13, a2, v522);
            sub_3197AC(v13, a2, v518);
            sub_31983C(v13, a2, v524);
            sub_313BA0(v13, (int)&off_3A6E68, 3);
            result = sub_31983C(v13, a2, v525);
            v8 = v655;
            v6 = *(_DWORD *)(v9 + 4);
            v10 = *(_DWORD *)(v13 + 284);
          }
          else
          {
            sub_313BA0(v13, (int)"new ", 4);
            if ( *(_DWORD *)(v522 + 8) )
            {
              sub_31983C(v13, a2, v522);
              v526 = *(_DWORD *)(v13 + 256);
              if ( v526 == 255 )
              {
                v527 = *(void (__fastcall **)(size_t, int, _DWORD))(v13 + 264);
                *(_BYTE *)(v13 + 255) = 0;
                v526 = 0;
                v527(v13, 255, *(_DWORD *)(v13 + 268));
                v528 = *(_DWORD *)(v13 + 296);
                *(_DWORD *)(v13 + 256) = 0;
                *(_DWORD *)(v13 + 296) = v528 + 1;
              }
              *(_DWORD *)(v13 + 256) = v526 + 1;
              *(_BYTE *)(v13 + v526) = 32;
              *(_BYTE *)(v13 + 260) = 32;
            }
            result = sub_314740(v13, a2, v524);
            if ( v525 )
              result = sub_31983C(v13, a2, v525);
            v8 = v655;
            v6 = *(_DWORD *)(v9 + 4);
            v10 = *(_DWORD *)(v13 + 284);
          }
        }
      }
      else
      {
        *(_DWORD *)(v13 + 280) = 1;
        v6 = *(_DWORD *)(v9 + 4);
      }
      goto LABEL_24;
    case 0x3A:
    case 0x3B:
      *(_DWORD *)(v13 + 280) = 1;
      v6 = *(_DWORD *)(v9 + 4);
      goto LABEL_24;
    case 0x3C:
    case 0x3D:
      v156 = *(_DWORD **)(v9 + 8);
      if ( *v156 == 39 )
      {
        v157 = *(_DWORD *)(v156[2] + 16);
        if ( v157 )
        {
          if ( v157 <= 6 )
          {
            if ( !**(_DWORD **)(v9 + 12) )
            {
              if ( result == 61 )
              {
                v635 = *(_DWORD *)(v13 + 256);
                if ( v635 == 255 )
                {
                  v636 = *(void (__fastcall **)(size_t, int, _DWORD))(v13 + 264);
                  *(_BYTE *)(v13 + 255) = 0;
                  v635 = 0;
                  v636(v13, 255, *(_DWORD *)(v13 + 268));
                  v637 = *(_DWORD *)(v13 + 296);
                  *(_DWORD *)(v13 + 256) = 0;
                  *(_DWORD *)(v13 + 296) = v637 + 1;
                }
                *(_DWORD *)(v13 + 256) = v635 + 1;
                *(_BYTE *)(v13 + v635) = 45;
                *(_BYTE *)(v13 + 260) = 45;
              }
              result = sub_314740(v13, a2, *(_DWORD *)(v9 + 12));
              switch ( v157 )
              {
                case 2u:
                  v632 = *(_DWORD *)(v13 + 256);
                  if ( v632 == 255 )
                  {
                    v633 = *(int (__fastcall **)(size_t, int, _DWORD))(v13 + 264);
                    *(_BYTE *)(v13 + 255) = 0;
                    v632 = 0;
                    result = v633(v13, 255, *(_DWORD *)(v13 + 268));
                    v634 = *(_DWORD *)(v13 + 296);
                    *(_DWORD *)(v13 + 256) = 0;
                    *(_DWORD *)(v13 + 296) = v634 + 1;
                  }
                  *(_DWORD *)(v13 + 256) = v632 + 1;
                  v8 = v655;
                  *(_BYTE *)(v13 + v632) = 117;
                  *(_BYTE *)(v13 + 260) = 117;
                  v10 = *(_DWORD *)(v13 + 284);
                  v6 = *(_DWORD *)(v9 + 4);
                  break;
                case 3u:
                  v629 = *(_DWORD *)(v13 + 256);
                  if ( v629 == 255 )
                  {
                    v630 = *(int (__fastcall **)(size_t, int, _DWORD))(v13 + 264);
                    *(_BYTE *)(v13 + 255) = 0;
                    v629 = 0;
                    result = v630(v13, 255, *(_DWORD *)(v13 + 268));
                    v631 = *(_DWORD *)(v13 + 296);
                    *(_DWORD *)(v13 + 256) = 0;
                    *(_DWORD *)(v13 + 296) = v631 + 1;
                  }
                  *(_DWORD *)(v13 + 256) = v629 + 1;
                  v8 = v655;
                  *(_BYTE *)(v13 + v629) = 108;
                  *(_BYTE *)(v13 + 260) = 108;
                  v10 = *(_DWORD *)(v13 + 284);
                  v6 = *(_DWORD *)(v9 + 4);
                  break;
                case 4u:
                  result = sub_313BA0(v13, (int)"ul", 2);
                  v8 = v655;
                  v6 = *(_DWORD *)(v9 + 4);
                  v10 = *(_DWORD *)(v13 + 284);
                  break;
                case 5u:
                  result = sub_313BA0(v13, (int)"ll", 2);
                  v8 = v655;
                  v6 = *(_DWORD *)(v9 + 4);
                  v10 = *(_DWORD *)(v13 + 284);
                  break;
                case 6u:
                  result = sub_313BA0(v13, (int)"ull", 3);
                  v8 = v655;
                  v6 = *(_DWORD *)(v9 + 4);
                  v10 = *(_DWORD *)(v13 + 284);
                  break;
                default:
                  v8 = v655;
                  v6 = *(_DWORD *)(v9 + 4);
                  v10 = *(_DWORD *)(v13 + 284);
                  break;
              }
              goto LABEL_24;
            }
          }
          else if ( v157 == 7 )
          {
            v593 = *(_DWORD *)(v9 + 12);
            if ( !*(_DWORD *)v593 )
            {
              v594 = *(_DWORD *)(v593 + 12);
              v595 = v594 == 1;
              if ( v594 == 1 )
                v595 = result == 60;
              if ( v595 )
              {
                v596 = **(unsigned __int8 **)(v593 + 8);
                if ( v596 == 48 )
                {
                  result = sub_313BA0(v13, (int)"false", 5);
                  v8 = v655;
                  v6 = *(_DWORD *)(v9 + 4);
                  v10 = *(_DWORD *)(v13 + 284);
                  goto LABEL_24;
                }
                if ( v596 == 49 )
                {
                  result = sub_313BA0(v13, (int)"true", 4);
                  v8 = v655;
                  v6 = *(_DWORD *)(v9 + 4);
                  v10 = *(_DWORD *)(v13 + 284);
                  goto LABEL_24;
                }
              }
            }
          }
        }
      }
      else
      {
        v157 = 0;
      }
      v158 = *(_DWORD *)(v13 + 256);
      if ( v158 == 255 )
      {
        v159 = *(void (__fastcall **)(size_t, int, _DWORD))(v13 + 264);
        *(_BYTE *)(v13 + 255) = 0;
        v158 = 0;
        v159(v13, 255, *(_DWORD *)(v13 + 268));
        v160 = *(_DWORD *)(v13 + 296);
        *(_DWORD *)(v13 + 256) = 0;
        *(_DWORD *)(v13 + 296) = v160 + 1;
      }
      *(_DWORD *)(v13 + 256) = v158 + 1;
      *(_BYTE *)(v13 + v158) = 40;
      *(_BYTE *)(v13 + 260) = 40;
      sub_314740(v13, a2, *(_DWORD *)(v9 + 8));
      v161 = *(_DWORD *)(v13 + 256);
      if ( v161 == 255 )
      {
        *(_BYTE *)(v13 + 255) = 0;
        (*(void (__fastcall **)(size_t, int, _DWORD))(v13 + 264))(v13, 255, *(_DWORD *)(v13 + 268));
        v162 = *(_DWORD *)(v13 + 296);
        *(_BYTE *)v13 = 41;
        *(_BYTE *)(v13 + 260) = 41;
        v163 = *(_DWORD *)v9;
        *(_DWORD *)(v13 + 296) = v162 + 1;
        *(_DWORD *)(v13 + 256) = 1;
        if ( v163 != 61 )
          goto LABEL_148;
      }
      else
      {
        *(_DWORD *)(v13 + 256) = v161 + 1;
        *(_BYTE *)(v13 + v161) = 41;
        *(_BYTE *)(v13 + 260) = 41;
        if ( *(_DWORD *)v9 != 61 )
          goto LABEL_148;
        if ( v161 == 254 )
        {
          v602 = *(void (__fastcall **)(size_t, int, _DWORD))(v13 + 264);
          *(_BYTE *)(v13 + 255) = 0;
          v602(v13, 255, *(_DWORD *)(v13 + 268));
          v603 = *(_DWORD *)(v13 + 296);
          *(_DWORD *)(v13 + 256) = 0;
          *(_DWORD *)(v13 + 296) = v603 + 1;
        }
      }
      v604 = *(_DWORD *)(v13 + 256);
      *(_DWORD *)(v13 + 256) = v604 + 1;
      *(_BYTE *)(v13 + v604) = 45;
      *(_BYTE *)(v13 + 260) = 45;
LABEL_148:
      if ( v157 == 8 )
      {
        v597 = *(_DWORD *)(v13 + 256);
        if ( v597 == 255 )
        {
          v598 = *(void (__fastcall **)(size_t, int, _DWORD))(v13 + 264);
          *(_BYTE *)(v13 + 255) = 0;
          v597 = 0;
          v598(v13, 255, *(_DWORD *)(v13 + 268));
          v599 = *(_DWORD *)(v13 + 296);
          *(_DWORD *)(v13 + 256) = 0;
          *(_DWORD *)(v13 + 296) = v599 + 1;
        }
        *(_DWORD *)(v13 + 256) = v597 + 1;
        *(_BYTE *)(v13 + v597) = 91;
        *(_BYTE *)(v13 + 260) = 91;
        result = sub_314740(v13, a2, *(_DWORD *)(v9 + 12));
        v35 = *(_DWORD *)(v13 + 256);
        if ( v35 == 255 )
        {
          v600 = *(int (__fastcall **)(size_t, int, _DWORD))(v13 + 264);
          *(_BYTE *)(v13 + 255) = 0;
          v35 = 0;
          result = v600(v13, 255, *(_DWORD *)(v13 + 268));
          v601 = *(_DWORD *)(v13 + 296);
          *(_DWORD *)(v13 + 256) = 0;
          *(_DWORD *)(v13 + 296) = v601 + 1;
        }
LABEL_642:
        *(_DWORD *)(v13 + 256) = v35 + 1;
        v8 = v655;
        *(_BYTE *)(v13 + v35) = 93;
        *(_BYTE *)(v13 + 260) = 93;
        v10 = *(_DWORD *)(v13 + 284);
        v6 = *(_DWORD *)(v9 + 4);
      }
      else
      {
LABEL_382:
        result = sub_314740(v13, a2, *(_DWORD *)(v9 + 12));
        v8 = v655;
        v6 = *(_DWORD *)(v9 + 4);
        v10 = *(_DWORD *)(v13 + 284);
      }
      goto LABEL_24;
    case 0x3E:
      v149 = (char *)&unk_433BAF;
      v150 = *(_DWORD *)(v13 + 256);
      do
      {
        v151 = v150;
        v153 = *++v149;
        v152 = v153;
        if ( v150 == 255 )
        {
          v154 = *(void (__fastcall **)(size_t, int, int))(v13 + 264);
          v155 = *(_DWORD *)(v13 + 268);
          *(_BYTE *)(v13 + 255) = 0;
          v154(v13, 255, v155);
          v150 = 1;
          v151 = 0;
          ++*(_DWORD *)(v13 + 296);
        }
        else
        {
          ++v150;
        }
        *(_DWORD *)(v13 + 256) = v150;
        *(_BYTE *)(v13 + v151) = v152;
        *(_BYTE *)(v13 + 260) = v152;
      }
      while ( " " != v149 );
      goto LABEL_415;
    case 0x3F:
      sub_314740(v13, a2, *(_DWORD *)(v9 + 8));
      result = sub_314740(v13, a2, *(_DWORD *)(v9 + 12));
      v8 = v655;
      v6 = *(_DWORD *)(v9 + 4);
      v10 = *(_DWORD *)(v13 + 284);
      goto LABEL_24;
    case 0x40:
      v145 = *(_DWORD *)(v13 + 256);
      v146 = *(_BYTE *)(v9 + 8);
      if ( v145 == 255 )
      {
        v147 = *(int (__fastcall **)(size_t, int, _DWORD))(v13 + 264);
        *(_BYTE *)(v13 + 255) = 0;
        v145 = 0;
        result = v147(v13, 255, *(_DWORD *)(v13 + 268));
        v148 = *(_DWORD *)(v13 + 296);
        *(_DWORD *)(v13 + 256) = 0;
        *(_DWORD *)(v13 + 296) = v148 + 1;
      }
      v8 = v655;
      *(_DWORD *)(v13 + 256) = v145 + 1;
      *(_BYTE *)(v13 + v145) = v146;
      *(_BYTE *)(v13 + 260) = v146;
      v10 = *(_DWORD *)(v13 + 284);
      v6 = *(_DWORD *)(v9 + 4);
      goto LABEL_24;
    case 0x41:
      sprintf(s, "%d", *(_DWORD *)(v9 + 8));
      result = strlen(s);
      if ( result )
      {
        v137 = *(_DWORD *)(v13 + 256);
        v138 = s;
        v139 = &s[result];
        do
        {
          v140 = v137;
          result = v13;
          v142 = *v138++;
          v141 = v142;
          if ( v137 == 255 )
          {
            v143 = *(int (__fastcall **)(size_t, int, int))(v13 + 264);
            v144 = *(_DWORD *)(v13 + 268);
            *(_BYTE *)(v13 + 255) = 0;
            result = v143(v13, 255, v144);
            v137 = 1;
            v140 = 0;
            ++*(_DWORD *)(v13 + 296);
          }
          else
          {
            ++v137;
          }
          *(_DWORD *)(v13 + 256) = v137;
          *(_BYTE *)(v13 + v140) = v141;
          *(_BYTE *)(v13 + 260) = v141;
        }
        while ( v139 != v138 );
      }
      v8 = v655;
      v6 = *(_DWORD *)(v9 + 4);
      v10 = *(_DWORD *)(v13 + 284);
      goto LABEL_24;
    case 0x42:
      v127 = "decltype (";
      v128 = *(_DWORD *)(v13 + 256);
      do
      {
        v129 = v128;
        v131 = *v127++;
        v130 = v131;
        if ( v128 == 255 )
        {
          v132 = *(void (__fastcall **)(size_t, int, int))(v13 + 264);
          v133 = *(_DWORD *)(v13 + 268);
          *(_BYTE *)(v13 + 255) = 0;
          v132(v13, 255, v133);
          v128 = 1;
          v129 = 0;
          ++*(_DWORD *)(v13 + 296);
        }
        else
        {
          ++v128;
        }
        *(_DWORD *)(v13 + 256) = v128;
        *(_BYTE *)(v13 + v129) = v130;
        *(_BYTE *)(v13 + 260) = v130;
      }
      while ( "" != v127 );
      result = sub_314740(v13, a2, *(_DWORD *)(v9 + 8));
      v134 = *(_DWORD *)(v13 + 256);
      if ( v134 == 255 )
      {
        v135 = *(int (__fastcall **)(size_t, int, _DWORD))(v13 + 264);
        *(_BYTE *)(v13 + 255) = 0;
        v134 = 0;
        result = v135(v13, 255, *(_DWORD *)(v13 + 268));
        v136 = *(_DWORD *)(v13 + 296);
        *(_DWORD *)(v13 + 256) = 0;
        *(_DWORD *)(v13 + 296) = v136 + 1;
      }
      goto LABEL_763;
    case 0x43:
      v120 = "";
      v121 = *(_DWORD *)(v13 + 256);
      do
      {
        v122 = v121;
        v124 = *++v120;
        v123 = v124;
        if ( v121 == 255 )
        {
          v125 = *(void (__fastcall **)(size_t, int, int))(v13 + 264);
          v126 = *(_DWORD *)(v13 + 268);
          *(_BYTE *)(v13 + 255) = 0;
          v125(v13, 255, v126);
          v121 = 1;
          v122 = 0;
          ++*(_DWORD *)(v13 + 296);
        }
        else
        {
          ++v121;
        }
        *(_DWORD *)(v13 + 256) = v121;
        *(_BYTE *)(v13 + v122) = v123;
        *(_BYTE *)(v13 + 260) = v123;
      }
      while ( " " != v120 );
      goto LABEL_415;
    case 0x44:
      v113 = (char *)&unk_36708F;
      v114 = *(_DWORD *)(v13 + 256);
      do
      {
        v115 = v114;
        v117 = *++v113;
        v116 = v117;
        if ( v114 == 255 )
        {
          v118 = *(void (__fastcall **)(size_t, int, int))(v13 + 264);
          v119 = *(_DWORD *)(v13 + 268);
          *(_BYTE *)(v13 + 255) = 0;
          v118(v13, 255, v119);
          v114 = 1;
          v115 = 0;
          ++*(_DWORD *)(v13 + 296);
        }
        else
        {
          ++v114;
        }
        *(_DWORD *)(v13 + 256) = v114;
        *(_BYTE *)(v13 + v115) = v116;
        *(_BYTE *)(v13 + 260) = v116;
      }
      while ( " " != v113 );
      goto LABEL_415;
    case 0x45:
      v87 = (char *)&unk_433BD3;
      v88 = *(_DWORD *)(v13 + 256);
      do
      {
        v89 = v88;
        v91 = *++v87;
        v90 = v91;
        if ( v88 == 255 )
        {
          v92 = *(void (__fastcall **)(size_t, int, int))(v13 + 264);
          v93 = *(_DWORD *)(v13 + 268);
          *(_BYTE *)(v13 + 255) = 0;
          v92(v13, 255, v93);
          v88 = 1;
          v89 = 0;
          ++*(_DWORD *)(v13 + 296);
        }
        else
        {
          ++v88;
        }
        *(_DWORD *)(v13 + 256) = v88;
        *(_BYTE *)(v13 + v89) = v90;
        *(_BYTE *)(v13 + 260) = v90;
      }
      while ( "(" != v87 );
      v94 = a2;
      v95 = *(_DWORD *)(v9 + 8);
      v96 = ")#";
      ++*(_DWORD *)(v13 + 288);
      sub_314740(v13, v94, v95);
      v97 = *(_DWORD *)(v13 + 256);
      --*(_DWORD *)(v13 + 288);
      do
      {
        v98 = v97;
        v100 = *v96++;
        v99 = v100;
        if ( v97 == 255 )
        {
          v101 = *(void (__fastcall **)(size_t, int, int))(v13 + 264);
          v102 = *(_DWORD *)(v13 + 268);
          *(_BYTE *)(v13 + 255) = 0;
          v101(v13, 255, v102);
          v97 = 1;
          v98 = 0;
          ++*(_DWORD *)(v13 + 296);
        }
        else
        {
          ++v97;
        }
        *(_DWORD *)(v13 + 256) = v97;
        *(_BYTE *)(v13 + v98) = v99;
        *(_BYTE *)(v13 + 260) = v99;
      }
      while ( "" != v96 );
      sprintf(s, "%d", *(_DWORD *)(v9 + 12) + 1);
      result = strlen(s);
      if ( result )
      {
        v103 = *(_DWORD *)(v13 + 256);
        v104 = s;
        v105 = &s[result];
        do
        {
          v106 = v103;
          result = v13;
          v108 = *v104++;
          v107 = v108;
          if ( v103 == 255 )
          {
            v109 = *(int (__fastcall **)(size_t, int, int))(v13 + 264);
            v110 = *(_DWORD *)(v13 + 268);
            *(_BYTE *)(v13 + 255) = 0;
            result = v109(v13, 255, v110);
            v103 = 1;
            v106 = 0;
            ++*(_DWORD *)(v13 + 296);
          }
          else
          {
            ++v103;
          }
          *(_DWORD *)(v13 + 256) = v103;
          *(_BYTE *)(v13 + v106) = v107;
          *(_BYTE *)(v13 + 260) = v107;
        }
        while ( v105 != v104 );
      }
      v84 = *(_DWORD *)(v13 + 256);
      if ( v84 == 255 )
      {
        v111 = *(int (__fastcall **)(size_t, int, _DWORD))(v13 + 264);
        *(_BYTE *)(v13 + 255) = 0;
        v84 = 0;
        result = v111(v13, 255, *(_DWORD *)(v13 + 268));
        v112 = *(_DWORD *)(v13 + 296);
        *(_DWORD *)(v13 + 256) = 0;
        *(_DWORD *)(v13 + 296) = v112 + 1;
      }
      goto LABEL_465;
    case 0x47:
      v69 = (char *)&unk_433BE3;
      v70 = *(_DWORD *)(v13 + 256);
      do
      {
        v71 = v70;
        v73 = *++v69;
        v72 = v73;
        if ( v70 == 255 )
        {
          v74 = *(void (__fastcall **)(size_t, int, int))(v13 + 264);
          v75 = *(_DWORD *)(v13 + 268);
          *(_BYTE *)(v13 + 255) = 0;
          v74(v13, 255, v75);
          v70 = 1;
          v71 = 0;
          ++*(_DWORD *)(v13 + 296);
        }
        else
        {
          ++v70;
        }
        *(_DWORD *)(v13 + 256) = v70;
        *(_BYTE *)(v13 + v71) = v72;
        *(_BYTE *)(v13 + 260) = v72;
      }
      while ( "#" != v69 );
      sprintf(s, "%d", *(_DWORD *)(v9 + 8) + 1);
      result = strlen(s);
      if ( result )
      {
        v76 = *(_DWORD *)(v13 + 256);
        v77 = s;
        v78 = &s[result];
        do
        {
          v79 = v76;
          result = v13;
          v81 = *v77++;
          v80 = v81;
          if ( v76 == 255 )
          {
            v82 = *(int (__fastcall **)(size_t, int, int))(v13 + 264);
            v83 = *(_DWORD *)(v13 + 268);
            *(_BYTE *)(v13 + 255) = 0;
            result = v82(v13, 255, v83);
            v76 = 1;
            v79 = 0;
            ++*(_DWORD *)(v13 + 296);
          }
          else
          {
            ++v76;
          }
          *(_DWORD *)(v13 + 256) = v76;
          *(_BYTE *)(v13 + v79) = v80;
          *(_BYTE *)(v13 + 260) = v80;
        }
        while ( v78 != v77 );
      }
      v84 = *(_DWORD *)(v13 + 256);
      if ( v84 == 255 )
      {
        v85 = *(int (__fastcall **)(size_t, int, _DWORD))(v13 + 264);
        *(_BYTE *)(v13 + 255) = 0;
        v84 = 0;
        result = v85(v13, 255, *(_DWORD *)(v13 + 268));
        v86 = *(_DWORD *)(v13 + 296);
        *(_DWORD *)(v13 + 256) = 0;
        *(_DWORD *)(v13 + 296) = v86 + 1;
      }
LABEL_465:
      *(_DWORD *)(v13 + 256) = v84 + 1;
      v8 = v655;
      *(_BYTE *)(v13 + v84) = 125;
      *(_BYTE *)(v13 + 260) = 125;
      v10 = *(_DWORD *)(v13 + 284);
      v6 = *(_DWORD *)(v9 + 4);
      goto LABEL_24;
    case 0x48:
      v62 = "-transaction clone for ";
      v63 = *(_DWORD *)(v13 + 256);
      do
      {
        v64 = v63;
        v66 = *++v62;
        v65 = v66;
        if ( v63 == 255 )
        {
          v67 = *(void (__fastcall **)(size_t, int, int))(v13 + 264);
          v68 = *(_DWORD *)(v13 + 268);
          *(_BYTE *)(v13 + 255) = 0;
          v67(v13, 255, v68);
          v63 = 1;
          v64 = 0;
          ++*(_DWORD *)(v13 + 296);
        }
        else
        {
          ++v63;
        }
        *(_DWORD *)(v13 + 256) = v63;
        *(_BYTE *)(v13 + v64) = v65;
        *(_BYTE *)(v13 + 260) = v65;
      }
      while ( " " != v62 );
      goto LABEL_415;
    case 0x49:
      v55 = (char *)&unk_433B6B;
      v56 = *(_DWORD *)(v13 + 256);
      do
      {
        v57 = v56;
        v59 = *++v55;
        v58 = v59;
        if ( v56 == 255 )
        {
          v60 = *(void (__fastcall **)(size_t, int, int))(v13 + 264);
          v61 = *(_DWORD *)(v13 + 268);
          *(_BYTE *)(v13 + 255) = 0;
          v60(v13, 255, v61);
          v56 = 1;
          v57 = 0;
          ++*(_DWORD *)(v13 + 296);
        }
        else
        {
          ++v56;
        }
        *(_DWORD *)(v13 + 256) = v56;
        *(_BYTE *)(v13 + v57) = v58;
        *(_BYTE *)(v13 + 260) = v58;
      }
      while ( " " != v55 );
      goto LABEL_415;
    case 0x4A:
      result = (unsigned int)sub_313F68(v13, *(_DWORD **)(v9 + 8));
      if ( !result )
      {
        sub_31983C(v13, a2, *(_DWORD *)(v9 + 8));
        result = sub_313BA0(v13, (int)"...", 3);
        v8 = v655;
        v6 = *(_DWORD *)(v9 + 4);
        v10 = *(_DWORD *)(v13 + 284);
        goto LABEL_24;
      }
      v47 = 0;
      while ( *(_DWORD *)result == 47 && *(_DWORD *)(result + 8) )
      {
        result = *(_DWORD *)(result + 12);
        ++v47;
        if ( !result )
        {
          v650 = v47;
          v651 = *(_DWORD *)(v9 + 8);
          do
          {
LABEL_51:
            *(_DWORD *)(v13 + 292) = v11;
            result = sub_314740(v13, a2, v651);
            if ( v11 < v650 - 1 )
            {
              v48 = ", ";
              v49 = *(_DWORD *)(v13 + 256);
              do
              {
                v50 = v49;
                result = v13;
                v52 = *v48++;
                v51 = v52;
                if ( v49 == 255 )
                {
                  v53 = *(int (__fastcall **)(size_t, int, int))(v13 + 264);
                  v54 = *(_DWORD *)(v13 + 268);
                  *(_BYTE *)(v13 + 255) = 0;
                  result = v53(v13, 255, v54);
                  v49 = 1;
                  v50 = 0;
                  ++*(_DWORD *)(v13 + 296);
                }
                else
                {
                  ++v49;
                }
                *(_DWORD *)(v13 + 256) = v49;
                *(_BYTE *)(v13 + v50) = v51;
                *(_BYTE *)(v13 + 260) = v51;
              }
              while ( "" != v48 );
            }
            ++v11;
          }
          while ( v11 != v650 );
          v8 = v655;
          v6 = *(_DWORD *)(v9 + 4);
          v10 = *(_DWORD *)(v13 + 284);
          goto LABEL_24;
        }
      }
      v650 = v47;
      if ( !v47 )
        v8 = v655;
      v651 = *(_DWORD *)(v9 + 8);
      if ( !v47 )
      {
        v10 = *(_DWORD *)(v13 + 284);
        v6 = *(_DWORD *)(v9 + 4);
        goto LABEL_24;
      }
      goto LABEL_51;
    case 0x4B:
      v38 = "[abi:";
      sub_314740(v13, a2, *(_DWORD *)(v9 + 8));
      v39 = *(_DWORD *)(v13 + 256);
      do
      {
        v40 = v39;
        v42 = *v38++;
        v41 = v42;
        if ( v39 == 255 )
        {
          v43 = *(void (__fastcall **)(size_t, int, int))(v13 + 264);
          v44 = *(_DWORD *)(v13 + 268);
          *(_BYTE *)(v13 + 255) = 0;
          v43(v13, 255, v44);
          v39 = 1;
          v40 = 0;
          ++*(_DWORD *)(v13 + 296);
        }
        else
        {
          ++v39;
        }
        *(_DWORD *)(v13 + 256) = v39;
        *(_BYTE *)(v13 + v40) = v41;
        *(_BYTE *)(v13 + 260) = v41;
      }
      while ( "" != v38 );
      result = sub_314740(v13, a2, *(_DWORD *)(v9 + 12));
      v35 = *(_DWORD *)(v13 + 256);
      if ( v35 == 255 )
      {
        v45 = *(int (__fastcall **)(size_t, int, _DWORD))(v13 + 264);
        *(_BYTE *)(v13 + 255) = 0;
        v35 = 0;
        result = v45(v13, 255, *(_DWORD *)(v13 + 268));
        v46 = *(_DWORD *)(v13 + 296);
        *(_DWORD *)(v13 + 256) = 0;
        *(_DWORD *)(v13 + 296) = v46 + 1;
      }
      goto LABEL_642;
    case 0x4D:
      v28 = (char *)&unk_433BF3;
      sub_314740(v13, a2, *(_DWORD *)(v9 + 8));
      v29 = *(_DWORD *)(v13 + 256);
      do
      {
        v30 = v29;
        v32 = *++v28;
        v31 = v32;
        if ( v29 == 255 )
        {
          v33 = *(void (__fastcall **)(size_t, int, int))(v13 + 264);
          v34 = *(_DWORD *)(v13 + 268);
          *(_BYTE *)(v13 + 255) = 0;
          v33(v13, 255, v34);
          v29 = 1;
          v30 = 0;
          ++*(_DWORD *)(v13 + 296);
        }
        else
        {
          ++v29;
        }
        *(_DWORD *)(v13 + 256) = v29;
        *(_BYTE *)(v13 + v30) = v31;
        *(_BYTE *)(v13 + 260) = v31;
      }
      while ( " " != v28 );
      result = sub_314740(v13, a2, *(_DWORD *)(v9 + 12));
      v35 = *(_DWORD *)(v13 + 256);
      if ( v35 == 255 )
      {
        v36 = *(int (__fastcall **)(size_t, int, _DWORD))(v13 + 264);
        *(_BYTE *)(v13 + 255) = 0;
        v35 = 0;
        result = v36(v13, 255, *(_DWORD *)(v13 + 268));
        v37 = *(_DWORD *)(v13 + 296);
        *(_DWORD *)(v13 + 256) = 0;
        *(_DWORD *)(v13 + 296) = v37 + 1;
      }
      goto LABEL_642;
    default:
      *(_DWORD *)(v13 + 280) = 1;
      v6 = *(_DWORD *)(v9 + 4);
      goto LABEL_24;
  }
}
