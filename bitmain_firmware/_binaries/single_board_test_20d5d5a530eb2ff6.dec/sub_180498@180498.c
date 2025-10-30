int __fastcall sub_180498(__int64 *a1, __int64 *a2, unsigned int a3)
{
  int *v4; // r4
  int *v5; // lr
  _QWORD *v6; // r6
  int v7; // r3
  int v8; // r0
  int v9; // r1
  _DWORD *v10; // r5
  int v11; // r2
  int v12; // r3
  __int64 v13; // r6
  __int64 v14; // r8
  unsigned int v15; // r11
  unsigned int v16; // r12
  __int64 *v17; // r2
  __int64 *v18; // r4
  __int64 v19; // r0
  __int64 v20; // r6
  __int64 v21; // r2
  __int64 v22; // r0
  unsigned int v23; // lr
  signed __int64 v24; // r8
  signed __int64 v25; // r2
  unsigned int v26; // r5
  signed __int64 v27; // r0
  __int64 v28; // r6
  __int64 v29; // kr2C0_8
  unsigned __int64 v30; // kr2C8_8
  __int64 v31; // r6
  signed __int64 v32; // r4
  unsigned __int64 v33; // r8
  __int64 v34; // r2
  __int64 v35; // r4
  __int64 v36; // r0
  __int64 v37; // r6
  __int64 v38; // r0
  unsigned __int64 v39; // r10
  __int64 v40; // r0
  __int64 v41; // r2
  __int64 v42; // r0
  unsigned __int64 v43; // r6
  __int64 v44; // r6
  unsigned __int64 v45; // r6
  unsigned __int64 v46; // r2
  __int64 v47; // r6
  __int64 v48; // r4
  __int64 v49; // r6
  __int64 v50; // r10
  unsigned int v51; // lr
  __int64 v52; // r2
  __int64 v53; // r0
  __int64 v54; // r2
  __int64 v55; // r8
  __int64 v56; // r6
  __int64 v57; // r2
  __int64 v58; // r6
  __int64 v59; // r8
  __int64 v60; // r8
  __int64 v61; // kr300_8
  unsigned int v62; // r12
  unsigned int v63; // krC4_4
  __int64 v64; // r2
  int v65; // lr
  __int64 v66; // r2
  __int64 v67; // r0
  __int64 v68; // r6
  __int64 v69; // r10
  __int64 v70; // r0
  unsigned __int64 v71; // r4
  __int64 v72; // r0
  unsigned __int64 v73; // r10
  __int64 v74; // r2
  __int64 v75; // r6
  unsigned int v76; // kr24_4
  __int64 v77; // r0
  __int64 v78; // r2
  __int64 v79; // r0
  __int64 v80; // r4
  unsigned __int64 v81; // r6
  unsigned int v82; // r12
  __int64 v83; // r0
  __int64 v84; // r2
  __int64 v85; // r2
  __int64 v86; // r0
  __int64 v87; // r2
  __int64 v88; // r8
  __int64 v89; // r6
  __int64 v90; // r2
  __int64 v91; // r8
  __int64 v92; // r0
  __int64 v93; // r4
  signed __int64 v94; // r4
  unsigned __int64 v95; // r8
  unsigned __int64 v96; // r4
  __int64 v97; // r10
  __int64 v98; // r2
  __int64 v99; // r4
  __int64 v100; // r0
  __int64 v101; // r2
  __int64 v102; // r8
  __int64 v103; // r4
  unsigned __int64 v104; // r10
  __int64 v105; // r0
  __int64 v106; // r8
  unsigned __int64 v107; // r0
  __int64 v108; // r0
  __int64 v109; // r10
  __int64 v110; // kr320_8
  __int64 v111; // r0
  __int64 v112; // r8
  __int64 v113; // r2
  __int64 v114; // r0
  __int64 v115; // r2
  unsigned __int64 v116; // r0
  __int64 v117; // r2
  int v118; // r12
  __int64 v119; // r2
  __int64 v120; // r0
  __int64 v121; // r2
  __int64 v122; // r4
  __int64 v123; // r0
  __int64 v124; // r6
  unsigned int v125; // r12
  __int64 v126; // r10
  __int64 v127; // r4
  __int64 v128; // r2
  unsigned __int64 v129; // r8
  __int64 v130; // r6
  __int64 v131; // r0
  __int64 v132; // r2
  __int64 v133; // r4
  __int64 v134; // r2
  __int64 v135; // r6
  __int64 v136; // r4
  __int64 v137; // r8
  unsigned __int64 v138; // r6
  __int64 v139; // r10
  unsigned __int64 v140; // r0
  __int64 v141; // r2
  unsigned __int64 v142; // kr340_8
  unsigned __int64 v143; // r0
  signed __int64 v144; // r2
  unsigned __int64 v145; // r4
  unsigned int v146; // r12
  __int64 v147; // kr358_8
  __int64 v148; // r0
  __int64 v149; // r6
  __int64 v150; // r2
  __int64 v151; // r2
  __int64 v152; // r6
  __int64 v153; // kr360_8
  signed __int64 v154; // r4
  __int64 v155; // r10
  __int64 v156; // r4
  __int64 v157; // r8
  __int64 v158; // r2
  __int64 v159; // r4
  __int64 v160; // r4
  __int64 v161; // r0
  __int64 v162; // kr370_8
  __int64 v163; // r8
  __int64 v164; // r4
  __int64 v165; // r10
  __int64 v166; // r4
  __int64 v167; // r2
  unsigned int v168; // lr
  __int64 v169; // r0
  __int64 v170; // r0
  unsigned __int64 v171; // r10
  unsigned __int64 v172; // r8
  unsigned __int64 v173; // r0
  __int64 v174; // r8
  __int64 v175; // r2
  __int64 v176; // r2
  __int64 v177; // kr378_8
  __int64 v178; // r2
  __int64 v179; // r0
  __int64 v180; // r2
  __int64 v181; // r2
  __int64 v182; // r0
  __int64 v183; // r4
  unsigned __int64 v184; // kr388_8
  unsigned __int64 v185; // r8
  __int64 v186; // r0
  __int64 v187; // r4
  __int64 v188; // r4
  __int64 v189; // r0
  __int64 v190; // r10
  __int64 v191; // r6
  __int64 v192; // r10
  __int64 v193; // r0
  unsigned __int64 v194; // r10
  __int64 v195; // r4
  __int64 v196; // r0
  int result; // r0
  __int64 v198; // [sp+0h] [bp-E64h]
  __int64 v199; // [sp+0h] [bp-E64h]
  unsigned __int64 v200; // [sp+0h] [bp-E64h]
  __int64 v201; // [sp+0h] [bp-E64h]
  __int64 v202; // [sp+8h] [bp-E5Ch]
  __int64 v203; // [sp+10h] [bp-E54h]
  __int64 v204; // [sp+10h] [bp-E54h]
  __int64 v205; // [sp+10h] [bp-E54h]
  __int64 v206; // [sp+18h] [bp-E4Ch]
  __int64 v207; // [sp+18h] [bp-E4Ch]
  __int64 v208; // [sp+20h] [bp-E44h]
  __int64 v209; // [sp+28h] [bp-E3Ch]
  __int64 v210; // [sp+28h] [bp-E3Ch]
  __int64 v211; // [sp+30h] [bp-E34h]
  __int64 v212; // [sp+30h] [bp-E34h]
  unsigned __int64 v213; // [sp+30h] [bp-E34h]
  unsigned __int64 v214; // [sp+30h] [bp-E34h]
  __int64 v215; // [sp+38h] [bp-E2Ch]
  __int64 v216; // [sp+38h] [bp-E2Ch]
  unsigned __int64 v217; // [sp+38h] [bp-E2Ch]
  __int64 v218; // [sp+40h] [bp-E24h]
  __int64 v219; // [sp+40h] [bp-E24h]
  unsigned __int64 v220; // [sp+40h] [bp-E24h]
  __int64 v221; // [sp+48h] [bp-E1Ch]
  int v222; // [sp+48h] [bp-E1Ch]
  __int64 v223; // [sp+48h] [bp-E1Ch]
  unsigned __int64 v224; // [sp+50h] [bp-E14h]
  __int64 v225; // [sp+50h] [bp-E14h]
  __int64 v226; // [sp+58h] [bp-E0Ch]
  __int64 v227; // [sp+58h] [bp-E0Ch]
  __int64 v228; // [sp+58h] [bp-E0Ch]
  unsigned __int64 v229; // [sp+58h] [bp-E0Ch]
  __int64 v230; // [sp+60h] [bp-E04h]
  __int64 v231; // [sp+60h] [bp-E04h]
  __int64 v232; // [sp+68h] [bp-DFCh]
  __int64 v233; // [sp+70h] [bp-DF4h]
  __int64 v234; // [sp+78h] [bp-DECh]
  unsigned __int64 v235; // [sp+88h] [bp-DDCh]
  unsigned __int64 v236; // [sp+90h] [bp-DD4h]
  __int64 v237; // [sp+90h] [bp-DD4h]
  unsigned __int64 v238; // [sp+90h] [bp-DD4h]
  __int64 v239; // [sp+90h] [bp-DD4h]
  unsigned __int64 v240; // [sp+90h] [bp-DD4h]
  __int64 v241; // [sp+90h] [bp-DD4h]
  unsigned __int64 v242; // [sp+90h] [bp-DD4h]
  __int64 v243; // [sp+90h] [bp-DD4h]
  unsigned __int64 v244; // [sp+90h] [bp-DD4h]
  __int64 v245; // [sp+90h] [bp-DD4h]
  unsigned __int64 v246; // [sp+90h] [bp-DD4h]
  __int64 v247; // [sp+90h] [bp-DD4h]
  unsigned __int64 v248; // [sp+90h] [bp-DD4h]
  unsigned __int64 v249; // [sp+90h] [bp-DD4h]
  __int64 v250; // [sp+90h] [bp-DD4h]
  unsigned __int64 v251; // [sp+90h] [bp-DD4h]
  __int64 v252; // [sp+90h] [bp-DD4h]
  unsigned __int64 v253; // [sp+90h] [bp-DD4h]
  unsigned __int64 v254; // [sp+90h] [bp-DD4h]
  __int64 v255; // [sp+90h] [bp-DD4h]
  __int64 v256; // [sp+98h] [bp-DCCh]
  __int64 v257; // [sp+A0h] [bp-DC4h]
  unsigned __int64 v258; // [sp+A8h] [bp-DBCh]
  __int64 v259; // [sp+B0h] [bp-DB4h]
  unsigned __int64 v260; // [sp+B8h] [bp-DACh]
  __int64 v261; // [sp+C0h] [bp-DA4h]
  __int64 v262; // [sp+C8h] [bp-D9Ch]
  __int64 v263; // [sp+D0h] [bp-D94h]
  unsigned __int64 v264; // [sp+D8h] [bp-D8Ch]
  __int64 v265; // [sp+E0h] [bp-D84h]
  unsigned __int64 v266; // [sp+E8h] [bp-D7Ch]
  __int64 v267; // [sp+F0h] [bp-D74h]
  __int64 v268; // [sp+100h] [bp-D64h]
  __int64 v269; // [sp+108h] [bp-D5Ch]
  __int64 v270; // [sp+110h] [bp-D54h]
  __int64 v271; // [sp+120h] [bp-D44h]
  __int64 v272; // [sp+128h] [bp-D3Ch]
  __int64 v273; // [sp+130h] [bp-D34h]
  __int64 v274; // [sp+138h] [bp-D2Ch]
  __int64 v275; // [sp+140h] [bp-D24h]
  __int64 v276; // [sp+148h] [bp-D1Ch]
  __int64 v277; // [sp+150h] [bp-D14h]
  __int64 v278; // [sp+158h] [bp-D0Ch]
  __int64 v279; // [sp+160h] [bp-D04h]
  __int64 v280; // [sp+168h] [bp-CFCh]
  __int64 v281; // [sp+170h] [bp-CF4h]
  __int64 v282; // [sp+178h] [bp-CECh]
  __int64 v283; // [sp+180h] [bp-CE4h]
  __int64 v284; // [sp+188h] [bp-CDCh]
  __int64 v285; // [sp+190h] [bp-CD4h]
  __int64 v286; // [sp+198h] [bp-CCCh]
  __int64 v287; // [sp+1A0h] [bp-CC4h]
  __int64 v288; // [sp+1A8h] [bp-CBCh]
  __int64 v289; // [sp+1B0h] [bp-CB4h]
  __int64 v290; // [sp+1B8h] [bp-CACh]
  __int64 v291; // [sp+1C0h] [bp-CA4h]
  __int64 v292; // [sp+1C8h] [bp-C9Ch]
  __int64 v293; // [sp+1D0h] [bp-C94h]
  __int64 v294; // [sp+1D8h] [bp-C8Ch]
  __int64 v295; // [sp+1E0h] [bp-C84h]
  unsigned __int64 v296; // [sp+1E8h] [bp-C7Ch]
  unsigned __int64 v297; // [sp+1F0h] [bp-C74h]
  __int64 v298; // [sp+1F8h] [bp-C6Ch]
  __int64 v299; // [sp+200h] [bp-C64h]
  __int64 v300; // [sp+208h] [bp-C5Ch]
  unsigned __int64 v301; // [sp+210h] [bp-C54h]
  __int64 v302; // [sp+218h] [bp-C4Ch]
  __int64 v303; // [sp+220h] [bp-C44h]
  __int64 v304; // [sp+228h] [bp-C3Ch]
  unsigned __int64 v305; // [sp+230h] [bp-C34h]
  __int64 v306; // [sp+238h] [bp-C2Ch]
  unsigned __int64 v307; // [sp+240h] [bp-C24h]
  __int64 v308; // [sp+248h] [bp-C1Ch]
  __int64 v309; // [sp+250h] [bp-C14h]
  __int64 v310; // [sp+258h] [bp-C0Ch]
  __int64 v311; // [sp+260h] [bp-C04h]
  __int64 v312; // [sp+268h] [bp-BFCh]
  __int64 v313; // [sp+270h] [bp-BF4h]
  __int64 v314; // [sp+278h] [bp-BECh]
  __int64 v315; // [sp+280h] [bp-BE4h]
  __int64 v316; // [sp+288h] [bp-BDCh]
  __int64 v317; // [sp+290h] [bp-BD4h]
  __int64 v318; // [sp+298h] [bp-BCCh]
  __int64 v319; // [sp+2A0h] [bp-BC4h]
  __int64 v320; // [sp+2A8h] [bp-BBCh]
  __int64 v321; // [sp+2B0h] [bp-BB4h]
  __int64 v322; // [sp+2B8h] [bp-BACh]
  __int64 v323; // [sp+2C0h] [bp-BA4h]
  __int64 v324; // [sp+2C8h] [bp-B9Ch]
  __int64 v325; // [sp+2D0h] [bp-B94h]
  __int64 v326; // [sp+2D8h] [bp-B8Ch]
  __int64 v327; // [sp+2E0h] [bp-B84h]
  __int64 v328; // [sp+2E8h] [bp-B7Ch]
  __int64 v329; // [sp+2F0h] [bp-B74h]
  __int64 v330; // [sp+2F8h] [bp-B6Ch]
  __int64 v331; // [sp+300h] [bp-B64h]
  __int64 v332; // [sp+308h] [bp-B5Ch]
  __int64 v333; // [sp+310h] [bp-B54h]
  unsigned __int64 v334; // [sp+318h] [bp-B4Ch]
  __int64 v335; // [sp+320h] [bp-B44h]
  __int64 v336; // [sp+328h] [bp-B3Ch]
  __int64 v337; // [sp+330h] [bp-B34h]
  unsigned __int64 v338; // [sp+338h] [bp-B2Ch]
  __int64 v339; // [sp+340h] [bp-B24h]
  __int64 v340; // [sp+348h] [bp-B1Ch]
  __int64 v341; // [sp+350h] [bp-B14h]
  __int64 v342; // [sp+358h] [bp-B0Ch]
  __int64 v343; // [sp+360h] [bp-B04h]
  __int64 v344; // [sp+368h] [bp-AFCh]
  __int64 v345; // [sp+370h] [bp-AF4h]
  __int64 v346; // [sp+378h] [bp-AECh]
  __int64 v347; // [sp+380h] [bp-AE4h]
  __int64 v348; // [sp+388h] [bp-ADCh]
  __int64 v349; // [sp+390h] [bp-AD4h]
  __int64 v350; // [sp+398h] [bp-ACCh]
  __int64 v351; // [sp+3A0h] [bp-AC4h]
  __int64 v352; // [sp+3A8h] [bp-ABCh]
  __int64 v353; // [sp+3B0h] [bp-AB4h]
  __int64 v354; // [sp+3B8h] [bp-AACh]
  __int64 v355; // [sp+3C0h] [bp-AA4h]
  __int64 v356; // [sp+3C8h] [bp-A9Ch]
  unsigned __int64 v357; // [sp+3D0h] [bp-A94h]
  __int64 v358; // [sp+3D8h] [bp-A8Ch]
  __int64 v359; // [sp+3E0h] [bp-A84h]
  __int64 v360; // [sp+3E8h] [bp-A7Ch]
  __int64 v361; // [sp+3F0h] [bp-A74h]
  __int64 v362; // [sp+3F8h] [bp-A6Ch]
  __int64 v363; // [sp+400h] [bp-A64h]
  __int64 v364; // [sp+408h] [bp-A5Ch]
  __int64 v365; // [sp+410h] [bp-A54h]
  unsigned __int64 v366; // [sp+418h] [bp-A4Ch]
  __int64 v367; // [sp+420h] [bp-A44h]
  unsigned __int64 v368; // [sp+428h] [bp-A3Ch]
  __int64 v369; // [sp+430h] [bp-A34h]
  __int64 v370; // [sp+438h] [bp-A2Ch]
  __int64 v371; // [sp+440h] [bp-A24h]
  __int64 v372; // [sp+448h] [bp-A1Ch]
  __int64 v373; // [sp+450h] [bp-A14h]
  __int64 v374; // [sp+458h] [bp-A0Ch]
  __int64 v375; // [sp+460h] [bp-A04h]
  __int64 v376; // [sp+468h] [bp-9FCh]
  __int64 v377; // [sp+470h] [bp-9F4h]
  __int64 v378; // [sp+478h] [bp-9ECh]
  __int64 v379; // [sp+480h] [bp-9E4h]
  unsigned __int64 v380; // [sp+488h] [bp-9DCh]
  __int64 v381; // [sp+490h] [bp-9D4h]
  __int64 v382; // [sp+498h] [bp-9CCh]
  __int64 v383; // [sp+4A0h] [bp-9C4h]
  unsigned __int64 v384; // [sp+4A8h] [bp-9BCh]
  __int64 v385; // [sp+4B0h] [bp-9B4h]
  __int64 v386; // [sp+4B8h] [bp-9ACh]
  __int64 v387; // [sp+4C0h] [bp-9A4h]
  __int64 v388; // [sp+4C8h] [bp-99Ch]
  __int64 v389; // [sp+4D0h] [bp-994h]
  __int64 v390; // [sp+4D8h] [bp-98Ch]
  __int64 v391; // [sp+4E0h] [bp-984h]
  __int64 v392; // [sp+4E8h] [bp-97Ch]
  __int64 v393; // [sp+4F0h] [bp-974h]
  __int64 v394; // [sp+4F8h] [bp-96Ch]
  unsigned __int64 v395; // [sp+500h] [bp-964h]
  __int64 v396; // [sp+508h] [bp-95Ch]
  __int64 v397; // [sp+510h] [bp-954h]
  __int64 v398; // [sp+518h] [bp-94Ch]
  __int64 v399; // [sp+520h] [bp-944h]
  __int64 v400; // [sp+528h] [bp-93Ch]
  __int64 v401; // [sp+530h] [bp-934h]
  unsigned __int64 v402; // [sp+538h] [bp-92Ch]
  __int64 v403; // [sp+540h] [bp-924h]
  __int64 v404; // [sp+548h] [bp-91Ch]
  __int64 v405; // [sp+550h] [bp-914h]
  __int64 v406; // [sp+558h] [bp-90Ch]
  __int64 v407; // [sp+560h] [bp-904h]
  __int64 v408; // [sp+568h] [bp-8FCh]
  __int64 v409; // [sp+570h] [bp-8F4h]
  __int64 v410; // [sp+578h] [bp-8ECh]
  __int64 v411; // [sp+580h] [bp-8E4h]
  __int64 v412; // [sp+588h] [bp-8DCh]
  __int64 v413; // [sp+590h] [bp-8D4h]
  unsigned __int64 v414; // [sp+598h] [bp-8CCh]
  __int64 v415; // [sp+5A0h] [bp-8C4h]
  __int64 v416; // [sp+5A8h] [bp-8BCh]
  __int64 v417; // [sp+5B0h] [bp-8B4h]
  __int64 v418; // [sp+5B8h] [bp-8ACh]
  __int64 v419; // [sp+5C0h] [bp-8A4h]
  __int64 v420; // [sp+5C8h] [bp-89Ch]
  unsigned __int64 v421; // [sp+5D0h] [bp-894h]
  __int64 v422; // [sp+5D8h] [bp-88Ch]
  unsigned __int64 v423; // [sp+5E0h] [bp-884h]
  __int64 v424; // [sp+5E8h] [bp-87Ch]
  __int64 v425; // [sp+5F0h] [bp-874h]
  __int64 v426; // [sp+5F8h] [bp-86Ch]
  __int64 v427; // [sp+600h] [bp-864h]
  __int64 v428; // [sp+608h] [bp-85Ch]
  __int64 v429; // [sp+610h] [bp-854h]
  __int64 v430; // [sp+618h] [bp-84Ch]
  __int64 v431; // [sp+620h] [bp-844h]
  __int64 v432; // [sp+628h] [bp-83Ch]
  unsigned __int64 v433; // [sp+630h] [bp-834h]
  __int64 v434; // [sp+638h] [bp-82Ch]
  __int64 v435; // [sp+640h] [bp-824h]
  __int64 v436; // [sp+648h] [bp-81Ch]
  __int64 v437; // [sp+650h] [bp-814h]
  __int64 v438; // [sp+658h] [bp-80Ch]
  __int64 v439; // [sp+660h] [bp-804h]
  __int64 v440; // [sp+668h] [bp-7FCh]
  __int64 v441; // [sp+670h] [bp-7F4h]
  __int64 v442; // [sp+678h] [bp-7ECh]
  __int64 v443; // [sp+680h] [bp-7E4h]
  unsigned __int64 v444; // [sp+688h] [bp-7DCh]
  __int64 v445; // [sp+690h] [bp-7D4h]
  __int64 v446; // [sp+698h] [bp-7CCh]
  __int64 v447; // [sp+6A0h] [bp-7C4h]
  __int64 v448; // [sp+6A8h] [bp-7BCh]
  __int64 v449; // [sp+6B0h] [bp-7B4h]
  __int64 v450; // [sp+6B8h] [bp-7ACh]
  __int64 v451; // [sp+6C0h] [bp-7A4h]
  __int64 v452; // [sp+6C8h] [bp-79Ch]
  __int64 v453; // [sp+6D0h] [bp-794h]
  __int64 v454; // [sp+6D8h] [bp-78Ch]
  __int64 v455; // [sp+6E0h] [bp-784h]
  unsigned __int64 v456; // [sp+6E8h] [bp-77Ch]
  unsigned __int64 v457; // [sp+6F0h] [bp-774h]
  __int64 v458; // [sp+6F8h] [bp-76Ch]
  __int64 v459; // [sp+700h] [bp-764h]
  __int64 v460; // [sp+708h] [bp-75Ch]
  __int64 v461; // [sp+710h] [bp-754h]
  __int64 v462; // [sp+718h] [bp-74Ch]
  __int64 v463; // [sp+720h] [bp-744h]
  __int64 v464; // [sp+728h] [bp-73Ch]
  __int64 v465; // [sp+730h] [bp-734h]
  __int64 v466; // [sp+738h] [bp-72Ch]
  __int64 v467; // [sp+740h] [bp-724h]
  __int64 v468; // [sp+748h] [bp-71Ch]
  __int64 v469; // [sp+750h] [bp-714h]
  __int64 v470; // [sp+758h] [bp-70Ch]
  __int64 v471; // [sp+760h] [bp-704h]
  __int64 v472; // [sp+768h] [bp-6FCh]
  __int64 v473; // [sp+770h] [bp-6F4h]
  __int64 v474; // [sp+778h] [bp-6ECh]
  __int64 v475; // [sp+780h] [bp-6E4h]
  __int64 v476; // [sp+788h] [bp-6DCh]
  __int64 v477; // [sp+790h] [bp-6D4h]
  __int64 v478; // [sp+798h] [bp-6CCh]
  __int64 v479; // [sp+7A0h] [bp-6C4h]
  __int64 v480; // [sp+7A8h] [bp-6BCh]
  __int64 v481; // [sp+7B0h] [bp-6B4h]
  __int64 v482; // [sp+7B8h] [bp-6ACh]
  __int64 v483; // [sp+7C0h] [bp-6A4h]
  __int64 v484; // [sp+7C8h] [bp-69Ch]
  __int64 v485; // [sp+7D0h] [bp-694h]
  __int64 v486; // [sp+7D8h] [bp-68Ch]
  __int64 v487; // [sp+7E0h] [bp-684h]
  unsigned __int64 v488; // [sp+7E8h] [bp-67Ch]
  unsigned __int64 v489; // [sp+7F0h] [bp-674h]
  __int64 v490; // [sp+7F8h] [bp-66Ch]
  __int64 v491; // [sp+800h] [bp-664h]
  __int64 v492; // [sp+808h] [bp-65Ch]
  unsigned __int64 v493; // [sp+810h] [bp-654h]
  __int64 v494; // [sp+818h] [bp-64Ch]
  __int64 v495; // [sp+820h] [bp-644h]
  __int64 v496; // [sp+828h] [bp-63Ch]
  __int64 v497; // [sp+830h] [bp-634h]
  __int64 v498; // [sp+838h] [bp-62Ch]
  __int64 v499; // [sp+840h] [bp-624h]
  unsigned __int64 v500; // [sp+848h] [bp-61Ch]
  __int64 v501; // [sp+850h] [bp-614h]
  __int64 v502; // [sp+858h] [bp-60Ch]
  __int64 v503; // [sp+860h] [bp-604h]
  __int64 v504; // [sp+868h] [bp-5FCh]
  __int64 v505; // [sp+870h] [bp-5F4h]
  unsigned __int64 v506; // [sp+878h] [bp-5ECh]
  __int64 v507; // [sp+880h] [bp-5E4h]
  __int64 v508; // [sp+888h] [bp-5DCh]
  __int64 v509; // [sp+890h] [bp-5D4h]
  unsigned __int64 v510; // [sp+898h] [bp-5CCh]
  __int64 v511; // [sp+8A0h] [bp-5C4h]
  __int64 v512; // [sp+8A8h] [bp-5BCh]
  __int64 v513; // [sp+8B0h] [bp-5B4h]
  __int64 v514; // [sp+8B8h] [bp-5ACh]
  __int64 v515; // [sp+8C0h] [bp-5A4h]
  __int64 v516; // [sp+8C8h] [bp-59Ch]
  __int64 v517; // [sp+8D0h] [bp-594h]
  __int64 v518; // [sp+8D8h] [bp-58Ch]
  __int64 v519; // [sp+8E0h] [bp-584h]
  __int64 v520; // [sp+8E8h] [bp-57Ch]
  __int64 v521; // [sp+8F0h] [bp-574h]
  __int64 v522; // [sp+8F8h] [bp-56Ch]
  __int64 v523; // [sp+900h] [bp-564h]
  __int64 v524; // [sp+908h] [bp-55Ch]
  __int64 v525; // [sp+910h] [bp-554h]
  __int64 v526; // [sp+918h] [bp-54Ch]
  __int64 v527; // [sp+920h] [bp-544h]
  __int64 v528; // [sp+928h] [bp-53Ch]
  __int64 v529; // [sp+930h] [bp-534h]
  __int64 v530; // [sp+938h] [bp-52Ch]
  __int64 v531; // [sp+940h] [bp-524h]
  __int64 v532; // [sp+948h] [bp-51Ch]
  __int64 v533; // [sp+950h] [bp-514h]
  __int64 v534; // [sp+958h] [bp-50Ch]
  __int64 v535; // [sp+960h] [bp-504h]
  __int64 v536; // [sp+968h] [bp-4FCh]
  __int64 v537; // [sp+970h] [bp-4F4h]
  __int64 v538; // [sp+978h] [bp-4ECh]
  __int64 v539; // [sp+980h] [bp-4E4h]
  __int64 v540; // [sp+988h] [bp-4DCh]
  __int64 v541; // [sp+990h] [bp-4D4h]
  __int64 v542; // [sp+998h] [bp-4CCh]
  __int64 v543; // [sp+9A0h] [bp-4C4h]
  __int64 v544; // [sp+9A8h] [bp-4BCh]
  __int64 v545; // [sp+9B0h] [bp-4B4h]
  __int64 v546; // [sp+9B8h] [bp-4ACh]
  __int64 v547; // [sp+9C0h] [bp-4A4h]
  __int64 v548; // [sp+9C8h] [bp-49Ch]
  __int64 v549; // [sp+9D0h] [bp-494h]
  __int64 v550; // [sp+9D8h] [bp-48Ch]
  __int64 v551; // [sp+9E0h] [bp-484h]
  __int64 v552; // [sp+9E8h] [bp-47Ch]
  __int64 v553; // [sp+9F0h] [bp-474h]
  __int64 v554; // [sp+9F8h] [bp-46Ch]
  unsigned __int64 v555; // [sp+A00h] [bp-464h]
  __int64 v556; // [sp+A08h] [bp-45Ch]
  __int64 v557; // [sp+A10h] [bp-454h]
  __int64 v558; // [sp+A18h] [bp-44Ch]
  __int64 v559; // [sp+A20h] [bp-444h]
  __int64 v560; // [sp+A28h] [bp-43Ch]
  __int64 v561; // [sp+A30h] [bp-434h]
  __int64 v562; // [sp+A38h] [bp-42Ch]
  unsigned __int64 v563; // [sp+A40h] [bp-424h]
  __int64 v564; // [sp+A48h] [bp-41Ch]
  __int64 v565; // [sp+A50h] [bp-414h]
  unsigned __int64 v566; // [sp+A58h] [bp-40Ch]
  __int64 v567; // [sp+A60h] [bp-404h]
  __int64 v568; // [sp+A68h] [bp-3FCh]
  __int64 v569; // [sp+A70h] [bp-3F4h]
  __int64 v570; // [sp+A78h] [bp-3ECh]
  __int64 v571; // [sp+A80h] [bp-3E4h]
  __int64 v572; // [sp+A88h] [bp-3DCh]
  __int64 v573; // [sp+A90h] [bp-3D4h]
  __int64 v574; // [sp+A98h] [bp-3CCh]
  __int64 v575; // [sp+AA0h] [bp-3C4h]
  __int64 v576; // [sp+AA8h] [bp-3BCh]
  unsigned __int64 v577; // [sp+AB0h] [bp-3B4h]
  unsigned __int64 v578; // [sp+AB8h] [bp-3ACh]
  __int64 v579; // [sp+AC0h] [bp-3A4h]
  __int64 v580; // [sp+AC8h] [bp-39Ch]
  unsigned __int64 v581; // [sp+AD0h] [bp-394h]
  __int64 v582; // [sp+AD8h] [bp-38Ch]
  __int64 v583; // [sp+AE0h] [bp-384h]
  __int64 v584; // [sp+AE8h] [bp-37Ch]
  __int64 v585; // [sp+AF0h] [bp-374h]
  __int64 v586; // [sp+AF8h] [bp-36Ch]
  __int64 v587; // [sp+B00h] [bp-364h]
  __int64 v588; // [sp+B08h] [bp-35Ch]
  __int64 v589; // [sp+B10h] [bp-354h]
  __int64 v590; // [sp+B18h] [bp-34Ch]
  __int64 v591; // [sp+B20h] [bp-344h]
  __int64 v592; // [sp+B28h] [bp-33Ch]
  __int64 v593; // [sp+B30h] [bp-334h]
  __int64 v594; // [sp+B38h] [bp-32Ch]
  __int64 v595; // [sp+B40h] [bp-324h]
  __int64 v596; // [sp+B48h] [bp-31Ch]
  __int64 v597; // [sp+B50h] [bp-314h]
  __int64 v598; // [sp+B58h] [bp-30Ch]
  __int64 v599; // [sp+B60h] [bp-304h]
  __int64 v600; // [sp+B68h] [bp-2FCh]
  __int64 v601; // [sp+B70h] [bp-2F4h]
  __int64 v602; // [sp+B78h] [bp-2ECh]
  __int64 v603; // [sp+B80h] [bp-2E4h]
  __int64 v604; // [sp+B88h] [bp-2DCh]
  __int64 v605; // [sp+B90h] [bp-2D4h]
  __int64 v606; // [sp+B98h] [bp-2CCh]
  __int64 v607; // [sp+BA0h] [bp-2C4h]
  __int64 v608; // [sp+BA8h] [bp-2BCh]
  __int64 v609; // [sp+BB0h] [bp-2B4h]
  __int64 v610; // [sp+BB8h] [bp-2ACh]
  __int64 v611; // [sp+BC0h] [bp-2A4h]
  __int64 v612; // [sp+BC8h] [bp-29Ch]
  __int64 v613; // [sp+BD0h] [bp-294h]
  __int64 v614; // [sp+BD8h] [bp-28Ch]
  __int64 v615; // [sp+BE0h] [bp-284h]
  __int64 v616; // [sp+BE8h] [bp-27Ch]
  __int64 v619; // [sp+BF8h] [bp-26Ch]
  __int64 v620; // [sp+C00h] [bp-264h]
  unsigned __int64 v621; // [sp+C00h] [bp-264h]
  __int64 v622; // [sp+C00h] [bp-264h]
  __int64 v623; // [sp+C00h] [bp-264h]
  unsigned __int64 v624; // [sp+C00h] [bp-264h]
  __int64 v625; // [sp+C00h] [bp-264h]
  unsigned __int64 v626; // [sp+C00h] [bp-264h]
  __int64 v627; // [sp+C00h] [bp-264h]
  unsigned __int64 v628; // [sp+C00h] [bp-264h]
  unsigned __int64 v629; // [sp+C00h] [bp-264h]
  __int64 v630; // [sp+C00h] [bp-264h]
  __int64 v631; // [sp+C00h] [bp-264h]
  __int64 v632; // [sp+C00h] [bp-264h]
  __int64 v633; // [sp+C00h] [bp-264h]
  unsigned __int64 v634; // [sp+C00h] [bp-264h]
  __int64 v635; // [sp+C00h] [bp-264h]
  __int64 v636; // [sp+C00h] [bp-264h]
  __int64 v637; // [sp+C00h] [bp-264h]
  __int64 v638; // [sp+C00h] [bp-264h]
  unsigned __int64 v639; // [sp+C00h] [bp-264h]
  unsigned __int64 v640; // [sp+C00h] [bp-264h]
  __int64 v641; // [sp+C00h] [bp-264h]
  __int64 v642; // [sp+C08h] [bp-25Ch]
  __int64 v643; // [sp+C08h] [bp-25Ch]
  __int64 v644; // [sp+C08h] [bp-25Ch]
  __int64 v645; // [sp+C08h] [bp-25Ch]
  unsigned __int64 v646; // [sp+C08h] [bp-25Ch]
  unsigned __int64 v647; // [sp+C08h] [bp-25Ch]
  unsigned __int64 v648; // [sp+C08h] [bp-25Ch]
  __int64 v649; // [sp+C08h] [bp-25Ch]
  __int64 v650; // [sp+C08h] [bp-25Ch]
  __int64 v651; // [sp+C08h] [bp-25Ch]
  __int64 v652; // [sp+C08h] [bp-25Ch]
  __int64 v653; // [sp+C08h] [bp-25Ch]
  unsigned __int64 v654; // [sp+C08h] [bp-25Ch]
  __int64 v655; // [sp+C08h] [bp-25Ch]
  __int64 v656; // [sp+C08h] [bp-25Ch]
  unsigned __int64 v657; // [sp+C08h] [bp-25Ch]
  __int64 v658; // [sp+C08h] [bp-25Ch]
  unsigned __int64 v659; // [sp+C08h] [bp-25Ch]
  unsigned __int64 v660; // [sp+C08h] [bp-25Ch]
  unsigned __int64 v661; // [sp+C08h] [bp-25Ch]
  unsigned __int64 v662; // [sp+C08h] [bp-25Ch]
  unsigned __int64 v663; // [sp+C08h] [bp-25Ch]
  unsigned __int64 v664; // [sp+C08h] [bp-25Ch]
  __int64 v665; // [sp+C08h] [bp-25Ch]
  unsigned __int64 v666; // [sp+C08h] [bp-25Ch]
  unsigned __int64 v667; // [sp+C08h] [bp-25Ch]
  unsigned __int64 v668; // [sp+C08h] [bp-25Ch]
  __int64 v669; // [sp+C08h] [bp-25Ch]
  __int64 v670; // [sp+C08h] [bp-25Ch]
  __int64 v671; // [sp+C08h] [bp-25Ch]
  __int64 v672; // [sp+C08h] [bp-25Ch]
  __int64 v673; // [sp+C08h] [bp-25Ch]
  __int64 v674; // [sp+C10h] [bp-254h]
  unsigned __int64 v675; // [sp+C18h] [bp-24Ch]
  __int64 v676; // [sp+C20h] [bp-244h]
  __int64 v677; // [sp+C20h] [bp-244h]
  unsigned __int64 v678; // [sp+C20h] [bp-244h]
  __int64 v679; // [sp+C20h] [bp-244h]
  __int64 v680; // [sp+C20h] [bp-244h]
  __int64 v681; // [sp+C20h] [bp-244h]
  __int64 v682; // [sp+C20h] [bp-244h]
  __int64 v683; // [sp+C20h] [bp-244h]
  __int64 v684; // [sp+C20h] [bp-244h]
  __int64 v685; // [sp+C20h] [bp-244h]
  unsigned __int64 v686; // [sp+C20h] [bp-244h]
  unsigned __int64 v687; // [sp+C20h] [bp-244h]
  unsigned __int64 v688; // [sp+C20h] [bp-244h]
  __int64 v689; // [sp+C20h] [bp-244h]
  __int64 v690; // [sp+C20h] [bp-244h]
  unsigned __int64 v691; // [sp+C20h] [bp-244h]
  __int64 v692; // [sp+C20h] [bp-244h]
  __int64 v693; // [sp+C20h] [bp-244h]
  __int64 v694; // [sp+C20h] [bp-244h]
  unsigned __int64 v695; // [sp+C20h] [bp-244h]
  __int64 v696; // [sp+C20h] [bp-244h]
  __int64 v697; // [sp+C20h] [bp-244h]
  __int64 v698; // [sp+C20h] [bp-244h]
  __int64 v699; // [sp+C20h] [bp-244h]
  __int64 v700; // [sp+C20h] [bp-244h]
  unsigned __int64 v701; // [sp+C20h] [bp-244h]
  __int64 v702; // [sp+C20h] [bp-244h]
  unsigned __int64 v703; // [sp+C20h] [bp-244h]
  unsigned __int64 v704; // [sp+C20h] [bp-244h]
  unsigned __int64 v705; // [sp+C20h] [bp-244h]
  __int64 v706; // [sp+C28h] [bp-23Ch]
  __int64 v707; // [sp+C30h] [bp-234h]
  unsigned __int64 v708; // [sp+C30h] [bp-234h]
  __int64 v709; // [sp+C30h] [bp-234h]
  __int64 v710; // [sp+C30h] [bp-234h]
  unsigned __int64 v711; // [sp+C30h] [bp-234h]
  __int64 v712; // [sp+C30h] [bp-234h]
  __int64 v713; // [sp+C30h] [bp-234h]
  unsigned __int64 v714; // [sp+C30h] [bp-234h]
  unsigned __int64 v715; // [sp+C30h] [bp-234h]
  __int64 v716; // [sp+C30h] [bp-234h]
  __int64 v717; // [sp+C30h] [bp-234h]
  __int64 v718; // [sp+C30h] [bp-234h]
  unsigned __int64 v719; // [sp+C30h] [bp-234h]
  __int64 v720; // [sp+C30h] [bp-234h]
  __int64 v721; // [sp+C30h] [bp-234h]
  unsigned __int64 v722; // [sp+C30h] [bp-234h]
  __int64 v723; // [sp+C30h] [bp-234h]
  __int64 v724; // [sp+C30h] [bp-234h]
  __int64 v725; // [sp+C30h] [bp-234h]
  unsigned __int64 v726; // [sp+C30h] [bp-234h]
  __int64 v727; // [sp+C30h] [bp-234h]
  unsigned __int64 v728; // [sp+C30h] [bp-234h]
  __int64 v729; // [sp+C30h] [bp-234h]
  __int64 v730; // [sp+C30h] [bp-234h]
  unsigned __int64 v731; // [sp+C30h] [bp-234h]
  unsigned __int64 v732; // [sp+C30h] [bp-234h]
  __int64 v733; // [sp+C30h] [bp-234h]
  __int64 v734; // [sp+C30h] [bp-234h]
  unsigned __int64 v735; // [sp+C30h] [bp-234h]
  __int64 v736; // [sp+C30h] [bp-234h]
  __int64 v737; // [sp+C30h] [bp-234h]
  __int64 v738; // [sp+C38h] [bp-22Ch]
  __int64 v739; // [sp+C40h] [bp-224h]
  __int64 v740; // [sp+C48h] [bp-21Ch]
  __int64 v741; // [sp+C50h] [bp-214h]
  unsigned __int64 v742; // [sp+C58h] [bp-20Ch]
  __int64 v743; // [sp+C60h] [bp-204h]
  __int64 v744; // [sp+C68h] [bp-1FCh]
  __int64 v745; // [sp+C70h] [bp-1F4h]
  __int64 v746; // [sp+C78h] [bp-1ECh]
  __int64 v747; // [sp+C80h] [bp-1E4h]
  unsigned __int64 v748; // [sp+C80h] [bp-1E4h]
  __int64 v749; // [sp+C80h] [bp-1E4h]
  unsigned __int64 v750; // [sp+C80h] [bp-1E4h]
  unsigned __int64 v751; // [sp+C80h] [bp-1E4h]
  __int64 v752; // [sp+C80h] [bp-1E4h]
  __int64 v753; // [sp+C80h] [bp-1E4h]
  __int64 v754; // [sp+C80h] [bp-1E4h]
  __int64 v755; // [sp+C80h] [bp-1E4h]
  __int64 v756; // [sp+C80h] [bp-1E4h]
  __int64 v757; // [sp+C80h] [bp-1E4h]
  unsigned __int64 v758; // [sp+C80h] [bp-1E4h]
  __int64 v759; // [sp+C80h] [bp-1E4h]
  __int64 v760; // [sp+C80h] [bp-1E4h]
  __int64 v761; // [sp+C80h] [bp-1E4h]
  __int64 v762; // [sp+C80h] [bp-1E4h]
  unsigned __int64 v763; // [sp+C80h] [bp-1E4h]
  __int64 v764; // [sp+C80h] [bp-1E4h]
  __int64 v765; // [sp+C80h] [bp-1E4h]
  __int64 v766; // [sp+C80h] [bp-1E4h]
  __int64 v767; // [sp+C80h] [bp-1E4h]
  __int64 v768; // [sp+C88h] [bp-1DCh]
  __int64 v769; // [sp+C90h] [bp-1D4h]
  __int64 v770; // [sp+C98h] [bp-1CCh]
  __int64 v771; // [sp+CA0h] [bp-1C4h]
  __int64 v772; // [sp+CA8h] [bp-1BCh]
  __int64 v773; // [sp+CB0h] [bp-1B4h]
  __int64 v774; // [sp+CB8h] [bp-1ACh]
  __int64 v775; // [sp+CC0h] [bp-1A4h]
  __int64 v776; // [sp+CC8h] [bp-19Ch]
  unsigned int v777; // [sp+CD0h] [bp-194h]
  int v778; // [sp+CD4h] [bp-190h]
  __int64 v779; // [sp+CE0h] [bp-184h]
  __int64 v780; // [sp+CE0h] [bp-184h]
  unsigned __int64 v781; // [sp+CE0h] [bp-184h]
  __int64 v782; // [sp+CE0h] [bp-184h]
  unsigned __int64 v783; // [sp+CE0h] [bp-184h]
  unsigned __int64 v784; // [sp+CE0h] [bp-184h]
  unsigned __int64 v785; // [sp+CE0h] [bp-184h]
  __int64 v786; // [sp+CE0h] [bp-184h]
  unsigned __int64 v787; // [sp+CE0h] [bp-184h]
  __int64 v788; // [sp+CE0h] [bp-184h]
  unsigned __int64 v789; // [sp+CE0h] [bp-184h]
  unsigned __int64 v790; // [sp+CE0h] [bp-184h]
  unsigned __int64 v791; // [sp+CE0h] [bp-184h]
  __int64 v792; // [sp+CE0h] [bp-184h]
  __int64 v793; // [sp+CE0h] [bp-184h]
  unsigned __int64 v794; // [sp+CE0h] [bp-184h]
  __int64 v795; // [sp+CE0h] [bp-184h]
  __int64 v796; // [sp+CE0h] [bp-184h]
  __int64 v797; // [sp+CE0h] [bp-184h]
  unsigned __int64 v798; // [sp+CE0h] [bp-184h]
  __int64 v799; // [sp+CE0h] [bp-184h]
  __int64 v800; // [sp+CE0h] [bp-184h]
  unsigned __int64 v801; // [sp+CE8h] [bp-17Ch]
  unsigned __int64 v802; // [sp+CE8h] [bp-17Ch]
  __int64 v803; // [sp+CE8h] [bp-17Ch]
  unsigned __int64 v804; // [sp+CE8h] [bp-17Ch]
  unsigned __int64 v805; // [sp+CE8h] [bp-17Ch]
  unsigned __int64 v806; // [sp+CE8h] [bp-17Ch]
  __int64 v807; // [sp+CE8h] [bp-17Ch]
  __int64 v808; // [sp+CE8h] [bp-17Ch]
  unsigned __int64 v809; // [sp+CE8h] [bp-17Ch]
  __int64 v810; // [sp+CE8h] [bp-17Ch]
  __int64 v811; // [sp+CE8h] [bp-17Ch]
  __int64 v812; // [sp+CE8h] [bp-17Ch]
  __int64 v813; // [sp+CE8h] [bp-17Ch]
  __int64 v814; // [sp+CE8h] [bp-17Ch]
  __int64 v815; // [sp+CE8h] [bp-17Ch]
  __int64 v816; // [sp+CE8h] [bp-17Ch]
  unsigned __int64 v817; // [sp+CE8h] [bp-17Ch]
  __int64 v818; // [sp+CE8h] [bp-17Ch]
  __int64 v819; // [sp+CE8h] [bp-17Ch]
  __int64 v820; // [sp+CE8h] [bp-17Ch]
  __int64 v821; // [sp+CE8h] [bp-17Ch]
  __int64 v822; // [sp+CE8h] [bp-17Ch]
  __int64 v823; // [sp+CE8h] [bp-17Ch]
  __int64 v824; // [sp+CF0h] [bp-174h]
  unsigned __int64 v825; // [sp+CF0h] [bp-174h]
  __int64 v826; // [sp+CF0h] [bp-174h]
  __int64 v827; // [sp+CF0h] [bp-174h]
  __int64 v828; // [sp+CF0h] [bp-174h]
  unsigned __int64 v829; // [sp+CF0h] [bp-174h]
  unsigned __int64 v830; // [sp+CF0h] [bp-174h]
  __int64 v831; // [sp+CF0h] [bp-174h]
  __int64 v832; // [sp+CF0h] [bp-174h]
  __int64 v833; // [sp+CF0h] [bp-174h]
  __int64 v834; // [sp+CF0h] [bp-174h]
  __int64 v835; // [sp+CF0h] [bp-174h]
  __int64 v836; // [sp+CF0h] [bp-174h]
  __int64 v837; // [sp+CF0h] [bp-174h]
  unsigned __int64 v838; // [sp+CF0h] [bp-174h]
  __int64 v839; // [sp+CF8h] [bp-16Ch]
  __int64 v840; // [sp+CF8h] [bp-16Ch]
  unsigned __int64 v841; // [sp+CF8h] [bp-16Ch]
  __int64 v842; // [sp+D00h] [bp-164h]
  __int64 v843; // [sp+D08h] [bp-15Ch]
  __int64 v844; // [sp+D10h] [bp-154h]
  unsigned __int64 v845; // [sp+D18h] [bp-14Ch]
  __int64 v846; // [sp+D20h] [bp-144h]
  __int64 v847; // [sp+D28h] [bp-13Ch]
  __int64 v848; // [sp+D30h] [bp-134h]
  __int64 v849; // [sp+D38h] [bp-12Ch]
  __int64 v850; // [sp+D40h] [bp-124h]
  unsigned __int64 v851; // [sp+D48h] [bp-11Ch]
  __int64 v852; // [sp+D58h] [bp-10Ch] BYREF
  __int64 v853; // [sp+D60h] [bp-104h]
  __int64 v854; // [sp+D68h] [bp-FCh]
  __int64 v855; // [sp+D70h] [bp-F4h]
  __int64 v856; // [sp+D78h] [bp-ECh]
  __int64 v857; // [sp+D80h] [bp-E4h]
  __int64 v858; // [sp+D88h] [bp-DCh]
  __int64 v859; // [sp+D90h] [bp-D4h]
  __int64 v860; // [sp+D98h] [bp-CCh]
  __int64 v861; // [sp+DA0h] [bp-C4h]
  __int64 v862; // [sp+DA8h] [bp-BCh]
  __int64 v863; // [sp+DB0h] [bp-B4h]
  __int64 v864; // [sp+DB8h] [bp-ACh]
  __int64 v865; // [sp+DC0h] [bp-A4h]
  __int64 v866; // [sp+DC8h] [bp-9Ch]
  __int64 v867; // [sp+DD0h] [bp-94h]
  __int64 v868; // [sp+DD8h] [bp-8Ch] BYREF
  _QWORD v869[3]; // [sp+DE0h] [bp-84h] BYREF
  unsigned int v870; // [sp+DF8h] [bp-6Ch]
  unsigned int v871; // [sp+DFCh] [bp-68h]
  __int64 v872; // [sp+E00h] [bp-64h]
  __int64 v873; // [sp+E08h] [bp-5Ch]
  __int64 v874; // [sp+E10h] [bp-54h]
  __int64 v875; // [sp+E18h] [bp-4Ch]

  v4 = (int *)a1;
  v5 = (int *)(a1 + 8);
  v6 = v869;
  v7 = a3;
  if ( a3 >= 0x80 )
    v7 = 128;
  v778 = v7;
  do
  {
    v8 = *v4;
    v4 += 4;
    v9 = *(v4 - 3);
    v10 = v6;
    v11 = *(v4 - 2);
    v6 += 2;
    v12 = *(v4 - 1);
    *v10 = v8;
    v10[1] = v9;
    v10[2] = v11;
    v10[3] = v12;
  }
  while ( v4 != v5 );
  v777 = a3 - v778;
  v850 = a1[10] ^ 0x1F83D9ABFB41BD6BLL;
  v619 = a1[9];
  v851 = __PAIR64__(loc_181054, loc_181050) ^ a1[11];
  v221 = v869[0];
  v235 = (unsigned int)v778 + a1[8];
  v211 = v872;
  v13 = v869[1];
  v206 = v873;
  v14 = v869[2];
  v215 = v874;
  v16 = v871;
  v15 = v870;
  v218 = v875;
  v842 = *a1;
  v843 = a1[1];
  v844 = a1[2];
  v845 = a1[3];
  v846 = a1[4];
  v847 = a1[5];
  v848 = a1[6];
  v849 = a1[7];
  while ( 1 )
  {
    v17 = a2;
    v18 = &v852;
    do
    {
      v19 = *v17++;
      v852 = v19;
      v18[1] = v19;
      ++v18;
    }
    while ( v18 != &v868 );
    v234 = v855;
    v20 = v206 + v13;
    v208 = v859;
    v619 += v235 < (unsigned int)v778;
    v202 = v856;
    v260 = __PAIR64__(
             v619 ^ (v855 + v20) ^ loc_181058,
             HIDWORD(v619) ^ (unsigned int)(((v855 + v20) ^ __PAIR64__(loc_18105C, loc_181058)) >> 32));
    v203 = v857;
    v224 = __PAIR64__(
             v619 ^ (v855 + v20) ^ loc_181058,
             HIDWORD(v619) ^ (unsigned int)(((v855 + v20) ^ __PAIR64__(loc_18105C, loc_181058)) >> 32))
         + loc_181060;
    v676 = v859 + v218 + __PAIR64__(v16, v15);
    v198 = v855 + v20 + v856;
    LODWORD(v261) = (__int64)((__PAIR64__(
                                 v619 ^ (v855 + v20) ^ loc_181058,
                                 HIDWORD(v619)
                               ^ (unsigned int)(((v855 + v20) ^ __PAIR64__(loc_18105C, loc_181058)) >> 32))
                             + loc_181060)
                            ^ v206) >> 24;
    v233 = v853;
    v226 = v857 + v14 + v215;
    HIDWORD(v261) = ((unsigned int)(HIDWORD(v224) ^ HIDWORD(v206)) >> 24)
                  | (((unsigned int)v224 ^ (unsigned int)v206) << 8);
    v209 = v860;
    v207 = v858;
    v21 = v226 ^ v850;
    v264 = __PAIR64__(v21, HIDWORD(v21));
    v642 = v198 + v261;
    v22 = v221 + v211;
    v222 = HIDWORD(v619) ^ (((v855 + v20) ^ __PAIR64__(loc_18105C, loc_181058)) >> 32) ^ (v198 + v261);
    v23 = ((unsigned int)v619 ^ ((_DWORD)v855 + (_DWORD)v20) ^ loc_181058 ^ ((unsigned __int64)(v198 + v261) >> 32)) >> 16;
    v230 = v853 + v22;
    LODWORD(v262) = (__int64)(__PAIR64__(
                                v619 ^ (v855 + v20) ^ loc_181058,
                                HIDWORD(v619)
                              ^ (unsigned int)(((v855 + v20) ^ __PAIR64__(loc_18105C, loc_181058)) >> 32))
                            ^ (v198 + v261)) >> 16;
    v199 = v854;
    v24 = v218 ^ (__PAIR64__((unsigned int)v851 ^ (unsigned int)v676, HIDWORD(v851) ^ HIDWORD(v676)) + loc_181068);
    LODWORD(v256) = ((unsigned __int64)(v853 + v22) >> 32) ^ loc_181074 ^ HIDWORD(v235);
    LODWORD(v268) = v24 >> 24;
    HIDWORD(v256) = (v853 + v22) ^ loc_181070 ^ v235;
    HIDWORD(v262) = v23 | (v222 << 16);
    v25 = v215 ^ (__PAIR64__(v21, HIDWORD(v21)) + loc_181078);
    HIDWORD(v268) = ((HIDWORD(v218)
                    ^ ((__PAIR64__((unsigned int)v851 ^ (unsigned int)v676, HIDWORD(v851) ^ HIDWORD(v676)) + loc_181068) >> 32)) >> 24)
                  | ((_DWORD)v24 << 8);
    HIDWORD(v24) = v211 ^ (v256 - 205731576);
    LODWORD(v265) = v25 >> 24;
    v26 = HIDWORD(v211) ^ ((unsigned __int64)(v256 + 0x6A09E667F3BCC908LL) >> 32);
    HIDWORD(v265) = HIBYTE(HIDWORD(v25)) | ((_DWORD)v25 << 8);
    v212 = v861;
    LODWORD(v257) = __SPAIR64__(v26, HIDWORD(v24)) >> 24;
    v216 = v862;
    v27 = v261
        ^ (__PAIR64__(
             v619 ^ (v855 + v20) ^ loc_181058,
             HIDWORD(v619) ^ (unsigned int)(((v855 + v20) ^ __PAIR64__(loc_18105C, loc_181058)) >> 32))
         + loc_181060
         + v262);
    v747 = v268 + v676 + v860;
    HIDWORD(v263) = v27 >> 31;
    HIDWORD(v25) = v851 ^ v676 ^ HIDWORD(v747);
    v707 = v265 + v226 + v858;
    HIDWORD(v257) = HIBYTE(v26) | (HIDWORD(v24) << 8);
    LODWORD(v269) = __SPAIR64__(HIDWORD(v25), HIDWORD(v851) ^ HIDWORD(v676) ^ (unsigned int)v747) >> 16;
    LODWORD(v263) = (2 * v27) | (HIDWORD(v27) >> 31);
    v219 = v863;
    HIDWORD(v269) = HIWORD(HIDWORD(v25)) | ((HIDWORD(v851) ^ HIDWORD(v676) ^ (unsigned int)v747) << 16);
    v28 = v257 + v230 + v854;
    v266 = __PAIR64__(
             ((unsigned int)((v264 ^ (v265 + v226 + v207)) >> 32) >> 16)
           | (((unsigned int)v264 ^ ((_DWORD)v265 + (_DWORD)v226 + (_DWORD)v207)) << 16),
             (__int64)(v264 ^ (v265 + v226 + v207)) >> 16);
    v29 = ((2 * v27) | (HIDWORD(v27) >> 31)) + v861 + v28;
    v231 = v867;
    v225 = v865;
    v30 = __PAIR64__((unsigned int)v29 ^ (unsigned int)v269, HIDWORD(v29) ^ HIDWORD(v269))
        + __PAIR64__(
            ((unsigned int)((v264 ^ (v265 + v226 + v207)) >> 32) >> 16)
          | (((unsigned int)v264 ^ ((_DWORD)v265 + (_DWORD)v226 + (_DWORD)v207)) << 16),
            (__int64)(v264 ^ (v265 + v226 + v207)) >> 16)
        + v264
        + loc_181078;
    v31 = v256 ^ v28;
    LODWORD(v258) = v31 >> 16;
    LODWORD(v271) = (__int64)(v263 ^ v30) >> 24;
    v232 = v868;
    HIDWORD(v258) = HIWORD(HIDWORD(v31)) | ((_DWORD)v31 << 16);
    HIDWORD(v271) = ((unsigned int)((v263 ^ v30) >> 32) >> 24) | (((unsigned int)v263 ^ (unsigned int)v30) << 8);
    v32 = v265
        ^ (__PAIR64__(
             ((unsigned int)((v264 ^ (v265 + v226 + v207)) >> 32) >> 16)
           | (((unsigned int)v264 ^ ((_DWORD)v265 + (_DWORD)v226 + (_DWORD)v207)) << 16),
             (__int64)(v264 ^ (v265 + v226 + v207)) >> 16)
         + v264
         + loc_181078);
    HIDWORD(v267) = v32 >> 31;
    v779 = v271 + v29 + v862;
    LODWORD(v272) = (__int64)(__PAIR64__((unsigned int)v29 ^ (unsigned int)v269, HIDWORD(v29) ^ HIDWORD(v269)) ^ v779) >> 16;
    LODWORD(v267) = (2 * v32) | (HIDWORD(v32) >> 31);
    HIDWORD(v259) = (__int64)(v257 ^ (v258 + v256 + 0x6A09E667F3BCC908LL)) >> 31;
    HIDWORD(v272) = (((unsigned int)v29 ^ (unsigned int)v269 ^ HIDWORD(v779)) >> 16)
                  | ((HIDWORD(v29) ^ HIDWORD(v269) ^ (unsigned int)v779) << 16);
    v223 = v864;
    LODWORD(v259) = (2 * (v257 ^ (v258 + v256 - 205731576)))
                  | ((unsigned int)((v257 ^ (v258 + v256 + 0x6A09E667F3BCC908LL)) >> 32) >> 31);
    v227 = v866;
    v33 = v269 + __PAIR64__((unsigned int)v851 ^ (unsigned int)v676, HIDWORD(v851) ^ HIDWORD(v676)) + loc_181068;
    v643 = v267 + v642 + v863;
    v34 = v259 + v747 + v867;
    LODWORD(v280) = HIDWORD(v266) ^ HIDWORD(v34);
    HIDWORD(v280) = v266 ^ v34;
    a1[9] = v619;
    a1[8] = v235;
    v270 = (2 * (v268 ^ v33)) | ((unsigned int)((v268 ^ v33) >> 32) >> 31);
    v748 = v280 + v260 + loc_181060 + v262;
    LODWORD(v281) = (__int64)(v259 ^ v748) >> 24;
    HIDWORD(v281) = ((unsigned int)((v259 ^ v748) >> 32) >> 24) | (((unsigned int)v259 ^ (unsigned int)v748) << 8);
    LODWORD(v274) = (v643 ^ v258) >> 32;
    HIDWORD(v274) = v643 ^ v258;
    v677 = v270 + v707 + v225;
    LODWORD(v277) = HIDWORD(v677) ^ HIDWORD(v262);
    HIDWORD(v277) = (v270 + v707 + v225) ^ v262;
    v801 = v281 + v232 + v34;
    v35 = v267 ^ (v274 + v33);
    HIDWORD(v282) = ((unsigned int)((v280 ^ v801) >> 32) >> 16)
                  | ((HIDWORD(v266) ^ HIDWORD(v34) ^ (unsigned int)v801) << 16);
    LODWORD(v282) = (__int64)(v280 ^ v801) >> 16;
    v644 = v643 + v223;
    LODWORD(v275) = v35 >> 24;
    v824 = v270 ^ (v277 + v274 + v33);
    LODWORD(v278) = v824 >> 24;
    HIDWORD(v273) = (__int64)(v271 ^ (v272 + v30)) >> 31;
    v780 = v779 + v231;
    HIDWORD(v275) = ((HIDWORD(v267) ^ ((v274 + v33) >> 32)) >> 24) | ((_DWORD)v35 << 8);
    LODWORD(v273) = (2 * (v271 ^ (v272 + v30))) | ((unsigned int)((v271 ^ (v272 + v30)) >> 32) >> 31);
    HIDWORD(v278) = HIBYTE(HIDWORD(v824)) | ((_DWORD)v824 << 8);
    v678 = v278 + v677 + v227;
    v36 = v281 ^ (v282 + v748);
    HIDWORD(v283) = v36 >> 31;
    LODWORD(v674) = (v274 ^ (v644 + v275)) >> 16;
    LODWORD(v675) = (__int64)(v277 ^ v678) >> 16;
    HIDWORD(v674) = ((HIDWORD(v274) ^ ((unsigned __int64)(v644 + v275) >> 32)) >> 16)
                  | (((unsigned int)v274 ^ ((_DWORD)v644 + (_DWORD)v275)) << 16);
    LODWORD(v283) = (2 * v36) | (HIDWORD(v36) >> 31);
    v645 = v273 + v203 + v644 + v275;
    HIDWORD(v675) = ((unsigned int)((v277 ^ v678) >> 32) >> 16) | (((unsigned int)v277 ^ (unsigned int)v678) << 16);
    LODWORD(v284) = HIDWORD(v674) ^ ((unsigned __int64)(v283 + v780) >> 32);
    LODWORD(v288) = (v645 ^ v675) >> 32;
    HIDWORD(v288) = v645 ^ v675;
    HIDWORD(v284) = v674 ^ (v283 + v780);
    v708 = v675 + v277 + v274 + v33;
    LODWORD(v289) = (__int64)((v288 + v282 + v748) ^ v273) >> 24;
    LODWORD(v285) = (__int64)(v283 ^ (v284 + v708)) >> 24;
    HIDWORD(v289) = ((((v288 + v282 + v748) >> 32) ^ HIDWORD(v273)) >> 24)
                  | ((((_DWORD)v288 + (_DWORD)v282 + (_DWORD)v748) ^ (unsigned int)v273) << 8);
    HIDWORD(v285) = ((unsigned int)((v283 ^ (v284 + v708)) >> 32) >> 24)
                  | (((unsigned int)v283 ^ ((_DWORD)v284 + (_DWORD)v708)) << 8);
    HIDWORD(v276) = (__int64)(v275 ^ (v674 + v274 + v33)) >> 31;
    v825 = v289 + v645 + v212;
    LODWORD(v290) = (__int64)(v288 ^ v825) >> 16;
    LODWORD(v276) = (2 * (v275 ^ (v674 + v274 + v33))) | ((HIDWORD(v275) ^ ((v674 + v274 + v33) >> 32)) >> 31);
    v37 = v276 + v216 + v678;
    a2 = (__int64 *)((char *)a2 + v778);
    HIDWORD(v290) = ((unsigned int)((v288 ^ v825) >> 32) >> 16) | (((unsigned int)v288 ^ (unsigned int)v825) << 16);
    LODWORD(v286) = (v284 ^ (v285 + v219 + v283 + v780)) >> 16;
    HIDWORD(v279) = (__int64)(v278 ^ v708) >> 31;
    HIDWORD(v292) = v282 ^ v37;
    HIDWORD(v286) = ((HIDWORD(v284) ^ ((unsigned __int64)(v285 + v219 + v283 + v780) >> 32)) >> 16)
                  | (((unsigned int)v284 ^ ((_DWORD)v285 + (_DWORD)v219 + (_DWORD)v283 + (_DWORD)v780)) << 16);
    LODWORD(v292) = HIDWORD(v282) ^ HIDWORD(v37);
    LODWORD(v279) = (2 * (v278 ^ v708)) | ((unsigned int)((v278 ^ v708) >> 32) >> 31);
    v679 = v288 + v282 + v748 + v290;
    v646 = v286 + v284 + v708;
    v38 = v272;
    v749 = v292 + v272 + v30;
    v296 = __PAIR64__(v38 ^ (v279 + v227 + v801), (v38 ^ (v279 + v227 + v801)) >> 32);
    v236 = __PAIR64__(v38 ^ (v279 + v227 + v801), (v38 ^ (v279 + v227 + v801)) >> 32) + v674 + v274 + v33;
    LODWORD(v293) = (v276 ^ v749) >> 24;
    HIDWORD(v291) = (v289 ^ v679) >> 31;
    LODWORD(v297) = (__int64)(v236 ^ v279) >> 24;
    LODWORD(v291) = (2 * (v289 ^ v679)) | ((unsigned int)(HIDWORD(v289) ^ HIDWORD(v679)) >> 31);
    HIDWORD(v297) = ((unsigned int)((v236 ^ v279) >> 32) >> 24) | (((unsigned int)v236 ^ (unsigned int)v279) << 8);
    HIDWORD(v293) = ((unsigned int)(HIDWORD(v276) ^ HIDWORD(v749)) >> 24)
                  | (((unsigned int)v276 ^ (unsigned int)v749) << 8);
    v39 = v297 + v208 + v279 + v227 + v801;
    v40 = v292 ^ (v232 + v37 + v293);
    LODWORD(v706) = (__int64)(v296 ^ v39) >> 16;
    v620 = v291 + v199 + v285 + v219 + v283 + v780;
    LODWORD(v294) = v40 >> 16;
    HIDWORD(v706) = ((unsigned int)((v296 ^ v39) >> 32) >> 16) | (((unsigned int)v296 ^ (unsigned int)v39) << 16);
    HIDWORD(v294) = HIWORD(HIDWORD(v40)) | ((_DWORD)v40 << 16);
    v237 = v236 + v706;
    v41 = v293 ^ (v294 + v749);
    LODWORD(v299) = HIDWORD(v706) ^ HIDWORD(v620);
    HIDWORD(v287) = (__int64)(v285 ^ v646) >> 31;
    HIDWORD(v299) = v706 ^ v620;
    HIDWORD(v295) = v41 >> 31;
    v750 = v299 + v294 + v749;
    LODWORD(v295) = (2 * v41) | (HIDWORD(v41) >> 31);
    HIDWORD(v298) = (__int64)(v237 ^ v297) >> 31;
    LODWORD(v298) = (2 * (v237 ^ v297)) | ((unsigned int)((v237 ^ v297) >> 32) >> 31);
    LODWORD(v300) = (__int64)(v291 ^ v750) >> 24;
    LODWORD(v287) = (2 * (v285 ^ v646)) | ((unsigned int)((v285 ^ v646) >> 32) >> 31);
    HIDWORD(v300) = ((unsigned int)((v291 ^ v750) >> 32) >> 24) | (((unsigned int)v291 ^ (unsigned int)v750) << 8);
    v42 = v295 + v233 + v825;
    v43 = v298 + v223 + v232 + v37 + v293;
    HIDWORD(v307) = v290 ^ v43;
    LODWORD(v303) = HIDWORD(v286) ^ HIDWORD(v42);
    v826 = v287 + v207 + v39;
    HIDWORD(v303) = v286 ^ v42;
    v802 = v43;
    LODWORD(v307) = (v290 ^ v43) >> 32;
    LODWORD(v311) = HIDWORD(v826) ^ HIDWORD(v294);
    HIDWORD(v311) = v826 ^ v294;
    v647 = v307 + v646;
    v709 = v311 + v679;
    v44 = v295 ^ (v237 + v303);
    v781 = v300 + v225 + v620;
    LODWORD(v301) = (__int64)(v299 ^ v781) >> 16;
    HIDWORD(v301) = ((unsigned int)((v299 ^ v781) >> 32) >> 16)
                  | ((HIDWORD(v706) ^ HIDWORD(v620) ^ (unsigned int)v781) << 16);
    LODWORD(v304) = v44 >> 24;
    LODWORD(v308) = (__int64)(v298 ^ v647) >> 24;
    LODWORD(v312) = (v287 ^ (v311 + v679)) >> 24;
    HIDWORD(v304) = HIBYTE(HIDWORD(v44)) | ((_DWORD)v44 << 8);
    HIDWORD(v308) = ((unsigned int)((v298 ^ v647) >> 32) >> 24) | (((unsigned int)v298 ^ (unsigned int)v647) << 8);
    v45 = v304 + v234 + v42;
    HIDWORD(v312) = ((unsigned int)(HIDWORD(v287) ^ HIDWORD(v709)) >> 24)
                  | (((unsigned int)v287 ^ (unsigned int)v709) << 8);
    v680 = v308 + v209 + v802;
    HIDWORD(v302) = (__int64)(v300 ^ (v301 + v750)) >> 31;
    LODWORD(v302) = (2 * (v300 ^ (v301 + v750))) | ((unsigned int)((v300 ^ (v301 + v750)) >> 32) >> 31);
    LODWORD(v305) = (__int64)(v303 ^ v45) >> 16;
    LODWORD(v309) = (__int64)(v680 ^ v307) >> 16;
    HIDWORD(v305) = ((unsigned int)((v303 ^ v45) >> 32) >> 16)
                  | ((HIDWORD(v286) ^ HIDWORD(v42) ^ (unsigned int)v45) << 16);
    LODWORD(v313) = (v311 ^ (v312 + v826 + v202)) >> 16;
    HIDWORD(v309) = ((unsigned int)((v680 ^ v307) >> 32) >> 16) | (((unsigned int)v680 ^ (unsigned int)v307) << 16);
    HIDWORD(v313) = ((unsigned int)((v311 ^ (unsigned __int64)(v312 + v826 + v202)) >> 32) >> 16)
                  | ((HIDWORD(v826) ^ HIDWORD(v294) ^ ((_DWORD)v312 + (_DWORD)v826 + (_DWORD)v202)) << 16);
    v621 = v305 + v237 + v303;
    v46 = v313 + v709;
    v648 = v309 + v647;
    v710 = v302 + v225 + v45;
    HIDWORD(v319) = (v302 + v225 + v45) ^ v309;
    LODWORD(v319) = HIDWORD(v710) ^ HIDWORD(v309);
    HIDWORD(v310) = (__int64)(v308 ^ v648) >> 31;
    LODWORD(v310) = (2 * (v308 ^ v648)) | ((unsigned int)((v308 ^ v648) >> 32) >> 31);
    v47 = v302 ^ (v319 + v46);
    HIDWORD(v306) = (__int64)(v304 ^ v621) >> 31;
    LODWORD(v42) = v302 ^ ((HIDWORD(v710) ^ HIDWORD(v309)) + v46);
    LODWORD(v320) = __SPAIR64__(HIDWORD(v47), v42) >> 24;
    v314 = (2 * (v312 ^ v46)) | ((unsigned int)((v312 ^ v46) >> 32) >> 31);
    LODWORD(v306) = (2 * (v304 ^ v621)) | ((unsigned int)((v304 ^ v621) >> 32) >> 31);
    HIDWORD(v320) = HIBYTE(HIDWORD(v47)) | ((_DWORD)v42 << 8);
    v48 = v680 + v207;
    v681 = v310 + v232 + v312 + v826 + v202;
    LODWORD(v327) = (v681 ^ v301) >> 32;
    HIDWORD(v327) = v681 ^ v301;
    v711 = v320 + v710 + v233;
    LODWORD(v323) = (v313 ^ (unsigned __int64)(v306 + v48)) >> 32;
    HIDWORD(v323) = v313 ^ (v306 + v48);
    v49 = v327 + v621;
    v622 = v314 + v223 + v781;
    v827 = v49;
    LODWORD(v321) = (__int64)(v319 ^ v711) >> 16;
    HIDWORD(v321) = ((unsigned int)((v319 ^ v711) >> 32) >> 16) | (((unsigned int)v319 ^ (unsigned int)v711) << 16);
    v782 = v323 + v301 + v750;
    LODWORD(v328) = (v310 ^ v49) >> 24;
    LODWORD(v315) = (v622 ^ v305) >> 32;
    HIDWORD(v315) = v622 ^ v305;
    HIDWORD(v328) = ((unsigned int)((v310 ^ (unsigned __int64)v49) >> 32) >> 24)
                  | (((unsigned int)v310 ^ (unsigned int)v49) << 8);
    LODWORD(v324) = (v306 ^ v782) >> 24;
    v238 = v321 + v319 + v46;
    HIDWORD(v324) = ((unsigned int)(HIDWORD(v306) ^ HIDWORD(v782)) >> 24)
                  | (((unsigned int)v306 ^ ((_DWORD)v323 + (_DWORD)v301 + (_DWORD)v750)) << 8);
    v50 = v681 + v227;
    v682 = v315 + v648;
    LODWORD(v33) = (unsigned __int64)(v328 + v50) >> 32;
    HIDWORD(v50) = v328 + v50;
    HIDWORD(v322) = (__int64)(v320 ^ v238) >> 31;
    LODWORD(v316) = (__int64)(v314 ^ (v315 + v648)) >> 24;
    v51 = ((HIDWORD(v314) ^ ((v315 + v648) >> 32)) >> 24) | (((unsigned int)v314 ^ ((_DWORD)v315 + (_DWORD)v648)) << 8);
    v649 = v324 + v234 + v306 + v48;
    LODWORD(v50) = HIDWORD(v327);
    HIDWORD(v33) = v327;
    v751 = __PAIR64__(v33, HIDWORD(v50));
    LODWORD(v49) = v327 ^ HIDWORD(v50);
    HIDWORD(v316) = v51;
    LODWORD(v322) = (2 * (v320 ^ v238)) | ((unsigned int)((v320 ^ v238) >> 32) >> 31);
    HIDWORD(v49) = HIDWORD(v327) ^ v33;
    LODWORD(v329) = v49 >> 16;
    v52 = v316 + v622 + v212;
    HIDWORD(v329) = (__int64)(v50 ^ v33) >> 16;
    v53 = v322 + v219 + v52;
    LODWORD(v325) = (v323 ^ v649) >> 16;
    v54 = v315 ^ v52;
    HIDWORD(v325) = ((unsigned int)(HIDWORD(v323) ^ HIDWORD(v649)) >> 16)
                  | (((unsigned int)v323 ^ (unsigned int)v649) << 16);
    LODWORD(v317) = v54 >> 16;
    HIDWORD(v331) = v329 ^ v53;
    LODWORD(v331) = HIDWORD(v329) ^ HIDWORD(v53);
    v55 = v202 + v711;
    HIDWORD(v317) = HIWORD(HIDWORD(v54)) | ((_DWORD)v54 << 16);
    v623 = v331 + v325 + v782;
    LODWORD(v332) = __SPAIR64__(HIDWORD(v623) ^ HIDWORD(v322), ((HIDWORD(v329) ^ HIDWORD(v53)) + v325 + v782) ^ v322) >> 24;
    HIDWORD(v332) = ((unsigned int)(HIDWORD(v623) ^ HIDWORD(v322)) >> 24)
                  | ((((HIDWORD(v329) ^ HIDWORD(v53)) + (_DWORD)v325 + (_DWORD)v782) ^ (unsigned int)v322) << 8);
    v56 = v324 ^ (v325 + v782);
    HIDWORD(v326) = v56 >> 31;
    v712 = v317 + v682;
    v57 = v316 ^ (v317 + v682);
    v783 = v332 + v231 + v53;
    LODWORD(v326) = (2 * v56) | (HIDWORD(v56) >> 31);
    LODWORD(v333) = (__int64)(v331 ^ v783) >> 16;
    HIDWORD(v318) = v57 >> 31;
    HIDWORD(v333) = ((unsigned int)((v331 ^ v783) >> 32) >> 16)
                  | ((HIDWORD(v329) ^ HIDWORD(v53) ^ (unsigned int)v783) << 16);
    LODWORD(v318) = (2 * v57) | (HIDWORD(v57) >> 31);
    v624 = v623 + v333;
    v683 = v326 + v55;
    v58 = v328 ^ (v329 + v827);
    v59 = v318 + v216 + v751;
    HIDWORD(v340) = v325 ^ (v318 + v216 + v751);
    LODWORD(v340) = HIDWORD(v325) ^ HIDWORD(v59);
    HIDWORD(v330) = v58 >> 31;
    LODWORD(v330) = (2 * v58) | (HIDWORD(v58) >> 31);
    v752 = v340 + v238;
    LODWORD(v341) = (__int64)(v318 ^ (v340 + v238)) >> 24;
    HIDWORD(v334) = (__int64)(v332 ^ v624) >> 31;
    HIDWORD(v341) = ((HIDWORD(v318) ^ ((v340 + v238) >> 32)) >> 24)
                  | (((unsigned int)v318 ^ ((HIDWORD(v325) ^ HIDWORD(v59)) + (_DWORD)v238)) << 8);
    LODWORD(v334) = (2 * (v332 ^ v624)) | ((unsigned int)((v332 ^ v624) >> 32) >> 31);
    LODWORD(v335) = HIDWORD(v317) ^ HIDWORD(v683);
    v650 = v209 + v649 + v330;
    v338 = __PAIR64__((unsigned int)v650 ^ (unsigned int)v321, HIDWORD(v650) ^ HIDWORD(v321));
    HIDWORD(v335) = v317 ^ v683;
    v239 = v335 + v329 + v827;
    v803 = v203 + v59 + v341;
    LODWORD(v342) = (v340 ^ v803) >> 16;
    LODWORD(v336) = (v326 ^ v239) >> 24;
    LODWORD(v57) = v330 ^ ((HIDWORD(v650) ^ HIDWORD(v321)) + v712);
    HIDWORD(v336) = ((unsigned int)(HIDWORD(v326) ^ HIDWORD(v239)) >> 24)
                  | (((unsigned int)v326 ^ ((HIDWORD(v317) ^ HIDWORD(v683)) + (_DWORD)v329 + (_DWORD)v827)) << 8);
    LODWORD(v339) = (__int64)(v330
                            ^ (__PAIR64__((unsigned int)v650 ^ (unsigned int)v321, HIDWORD(v650) ^ HIDWORD(v321)) + v712)) >> 24;
    v713 = __PAIR64__((unsigned int)v650 ^ (unsigned int)v321, HIDWORD(v650) ^ HIDWORD(v321)) + v712;
    HIDWORD(v342) = ((unsigned int)(HIDWORD(v340) ^ HIDWORD(v803)) >> 16)
                  | ((HIDWORD(v325) ^ HIDWORD(v59) ^ (unsigned int)v803) << 16);
    HIDWORD(v339) = ((unsigned int)(HIDWORD(v330) ^ HIDWORD(v713)) >> 24) | ((_DWORD)v57 << 8);
    v60 = v336 + v208 + v683;
    HIDWORD(v343) = ((v342 + v752) ^ v341) >> 31;
    v651 = v339 + v650 + v199;
    LODWORD(v738) = (v335 ^ v60) >> 16;
    HIDWORD(v738) = (((unsigned int)v317 ^ (unsigned int)v683 ^ HIDWORD(v60)) >> 16)
                  | ((HIDWORD(v317) ^ HIDWORD(v683) ^ (unsigned int)v60) << 16);
    LODWORD(v739) = (__int64)(v338 ^ v651) >> 16;
    LODWORD(v343) = (2 * ((v342 + v752) ^ v341)) | ((((unsigned __int64)(v342 + v752) >> 32) ^ HIDWORD(v341)) >> 31);
    HIDWORD(v739) = ((unsigned int)((v338 ^ v651) >> 32) >> 16) | (((unsigned int)v338 ^ (unsigned int)v651) << 16);
    v61 = v343 + v209 + v783;
    LODWORD(v348) = ((v334 + v202 + v60) >> 32) ^ HIDWORD(v739);
    LODWORD(v344) = HIDWORD(v738) ^ HIDWORD(v61);
    HIDWORD(v348) = (v334 + v202 + v60) ^ v739;
    HIDWORD(v344) = v738 ^ v61;
    v714 = v739 + v713;
    v62 = HIDWORD(v714);
    v63 = v714;
    v828 = v342 + v752 + v348;
    v64 = v343 ^ (v344 + v714);
    LODWORD(v349) = (__int64)(v828 ^ v334) >> 24;
    LODWORD(v345) = v64 >> 24;
    HIDWORD(v349) = ((unsigned int)((v828 ^ v334) >> 32) >> 24) | (((unsigned int)v828 ^ (unsigned int)v334) << 8);
    v684 = v738 + v239;
    HIDWORD(v345) = HIBYTE(HIDWORD(v64)) | ((_DWORD)v64 << 8);
    v784 = v349 + v334 + v202 + v60 + v199;
    LODWORD(v350) = (__int64)(v348 ^ v784) >> 16;
    HIDWORD(v350) = ((unsigned int)((v348 ^ v784) >> 32) >> 16) | (((unsigned int)v348 ^ (unsigned int)v784) << 16);
    v337 = (2 * (v336 ^ (v738 + v239))) | ((unsigned int)((v336 ^ (unsigned __int64)(v738 + v239)) >> 32) >> 31);
    HIDWORD(v740) = (__int64)(v339 ^ v714) >> 31;
    v65 = (2 * (v339 ^ v714)) | ((unsigned int)((v339 ^ v714) >> 32) >> 31);
    v715 = v345 + v216 + v61;
    LODWORD(v740) = v65;
    LODWORD(v346) = (__int64)(v344 ^ v715) >> 16;
    HIDWORD(v346) = ((unsigned int)((v344 ^ v715) >> 32) >> 16)
                  | ((HIDWORD(v738) ^ HIDWORD(v61) ^ (unsigned int)v715) << 16);
    v66 = v227 + v651 + v337;
    LODWORD(v352) = (v342 ^ (unsigned __int64)v66) >> 32;
    HIDWORD(v352) = v342 ^ (v227 + v651 + v337);
    v652 = v828 + v350;
    v240 = v346 + v344 + __PAIR64__(v62, v63);
    LODWORD(v356) = HIDWORD(v333) ^ ((unsigned __int64)(v740 + v223 + v803) >> 32);
    HIDWORD(v356) = v333 ^ (v65 + v223 + v803);
    LODWORD(v353) = (__int64)(v337 ^ (v352 + v624)) >> 24;
    HIDWORD(v353) = ((HIDWORD(v337) ^ ((v352 + v624) >> 32)) >> 24)
                  | (((unsigned int)v337 ^ ((_DWORD)v352 + (_DWORD)v624)) << 8);
    v67 = v231 + v740 + v223 + v803;
    LODWORD(v357) = (v740 ^ (v356 + v684)) >> 24;
    HIDWORD(v357) = ((unsigned int)((v740 ^ (unsigned __int64)(v356 + v684)) >> 32) >> 24)
                  | ((v65 ^ ((_DWORD)v356 + (_DWORD)v684)) << 8);
    v804 = v225 + v66 + v353;
    LODWORD(v354) = (__int64)(v352 ^ v804) >> 16;
    v68 = (v357 + v67) ^ v356;
    HIDWORD(v351) = (v349 ^ (v828 + v350)) >> 31;
    LODWORD(v358) = v68 >> 16;
    LODWORD(v351) = (2 * (v349 ^ v652)) | ((unsigned int)(HIDWORD(v349) ^ HIDWORD(v652)) >> 31);
    HIDWORD(v358) = HIWORD(HIDWORD(v68)) | ((_DWORD)v68 << 16);
    HIDWORD(v354) = ((unsigned int)((v352 ^ v804) >> 32) >> 16) | (((unsigned int)v352 ^ (unsigned int)v804) << 16);
    v685 = v358 + v356 + v684;
    v69 = v353 ^ (v354 + v352 + v624);
    LODWORD(v360) = HIDWORD(v358) ^ ((v351 + v234 + v715) >> 32);
    HIDWORD(v360) = v358 ^ (v351 + v234 + v715);
    HIDWORD(v347) = (__int64)(v345 ^ v240) >> 31;
    HIDWORD(v355) = v69 >> 31;
    LODWORD(v355) = (2 * v69) | (HIDWORD(v69) >> 31);
    HIDWORD(v359) = (__int64)(v685 ^ v357) >> 31;
    v829 = v360 + v354 + v352 + v624;
    LODWORD(v359) = (2 * (v685 ^ v357)) | ((unsigned int)((v685 ^ v357) >> 32) >> 31);
    v625 = v357 + v67 + v232;
    LODWORD(v361) = (__int64)(v351 ^ v829) >> 24;
    LODWORD(v347) = (2 * (v345 ^ v240)) | ((unsigned int)((v345 ^ v240) >> 32) >> 31);
    HIDWORD(v361) = ((unsigned int)((v351 ^ v829) >> 32) >> 24) | (((unsigned int)v351 ^ (unsigned int)v829) << 8);
    v70 = v355 + v207 + v784;
    v785 = v359 + v203 + v804;
    LODWORD(v364) = HIDWORD(v346) ^ HIDWORD(v70);
    v839 = v625 + v347;
    HIDWORD(v364) = v346 ^ v70;
    v368 = __PAIR64__(v350 ^ (v359 + v203 + v804), (v350 ^ v785) >> 32);
    LODWORD(v372) = ((unsigned __int64)(v625 + v347) >> 32) ^ HIDWORD(v354);
    HIDWORD(v372) = (v625 + v347) ^ v354;
    v71 = v685 + v364;
    v686 = v372 + v652;
    v716 = v361 + v208 + v351 + v234 + v715;
    v805 = __PAIR64__(v350 ^ (v359 + v203 + v804), (v350 ^ v785) >> 32) + v240;
    LODWORD(v362) = (v360 ^ v716) >> 16;
    HIDWORD(v362) = ((unsigned int)(HIDWORD(v360) ^ HIDWORD(v716)) >> 16)
                  | (((unsigned int)v360 ^ (unsigned int)v716) << 16);
    v72 = v219 + v70;
    LODWORD(v365) = (__int64)(v355 ^ v71) >> 24;
    LODWORD(v369) = (__int64)(v359 ^ v805) >> 24;
    LODWORD(v373) = (v347 ^ (v372 + v652)) >> 24;
    HIDWORD(v365) = ((unsigned int)((v355 ^ v71) >> 32) >> 24) | (((unsigned int)v355 ^ (unsigned int)v71) << 8);
    HIDWORD(v369) = ((unsigned int)(HIDWORD(v359) ^ HIDWORD(v805)) >> 24)
                  | (((unsigned int)v359 ^ (unsigned int)v805) << 8);
    HIDWORD(v373) = ((unsigned int)((v347 ^ v686) >> 32) >> 24) | (((unsigned int)v347 ^ (unsigned int)v686) << 8);
    v653 = v369 + v233 + v785;
    v73 = v373 + v625 + v347 + v212;
    HIDWORD(v363) = (__int64)(v361 ^ (v362 + v829)) >> 31;
    LODWORD(v363) = (2 * (v361 ^ (v362 + v829))) | ((unsigned int)((v361 ^ (v362 + v829)) >> 32) >> 31);
    LODWORD(v366) = (v364 ^ (v365 + v72)) >> 16;
    LODWORD(v370) = (__int64)(v653 ^ v368) >> 16;
    HIDWORD(v366) = ((HIDWORD(v364) ^ ((unsigned __int64)(v365 + v72) >> 32)) >> 16)
                  | (((unsigned int)v364 ^ ((_DWORD)v365 + (_DWORD)v72)) << 16);
    LODWORD(v374) = (__int64)(v372 ^ v73) >> 16;
    HIDWORD(v370) = ((unsigned int)((v653 ^ v368) >> 32) >> 16) | (((unsigned int)v653 ^ (unsigned int)v368) << 16);
    HIDWORD(v374) = ((unsigned int)((v372 ^ v73) >> 32) >> 16) | (((unsigned int)v372 ^ (unsigned int)v73) << 16);
    v626 = v366 + v71;
    v74 = v374 + v686;
    v75 = v207 + v365 + v72;
    v753 = v370 + v805;
    v76 = v207 + v365 + v72;
    v77 = v369 ^ (v370 + v805);
    v380 = __PAIR64__((v363 + v76) ^ v370, ((v363 + __PAIR64__(HIDWORD(v75), v76)) ^ v370) >> 32);
    HIDWORD(v371) = v77 >> 31;
    v687 = __PAIR64__((v363 + v76) ^ v370, ((v363 + __PAIR64__(HIDWORD(v75), v76)) ^ v370) >> 32) + v374 + v686;
    LODWORD(v371) = (2 * v77) | (HIDWORD(v77) >> 31);
    v78 = v373 ^ v74;
    HIDWORD(v367) = (__int64)(v365 ^ (v366 + v71)) >> 31;
    HIDWORD(v375) = v78 >> 31;
    LODWORD(v381) = (__int64)(v363 ^ v687) >> 24;
    LODWORD(v375) = (2 * v78) | (HIDWORD(v78) >> 31);
    LODWORD(v367) = (2 * (v365 ^ v626)) | ((unsigned int)(HIDWORD(v365) ^ HIDWORD(v626)) >> 31);
    v79 = v363 + __PAIR64__(HIDWORD(v75), v76);
    HIDWORD(v60) = v219 + v73 + v371;
    LODWORD(v75) = (v219 + v73 + v371) >> 32;
    HIDWORD(v381) = ((unsigned int)((v363 ^ v687) >> 32) >> 24) | (((unsigned int)v363 ^ (unsigned int)v687) << 8);
    LODWORD(v60) = HIDWORD(v362);
    HIDWORD(v75) = v362;
    v388 = v75 ^ v60;
    v654 = v367 + v653 + v234;
    v80 = v380 ^ (v381 + v79 + v209);
    v786 = v381 + v79 + v209;
    v384 = __PAIR64__((unsigned int)v374 ^ (unsigned int)v654, (v374 ^ v654) >> 32);
    v81 = (v75 ^ v60) + v626;
    HIDWORD(v73) = v388 + v626;
    v82 = (v388 + v626) >> 32;
    v627 = v375 + v216 + v716;
    HIDWORD(v79) = HIDWORD(v371) ^ HIDWORD(v81);
    LODWORD(v382) = v80 >> 16;
    LODWORD(v79) = v371 ^ HIDWORD(v73);
    HIDWORD(v382) = HIWORD(HIDWORD(v80)) | ((_DWORD)v80 << 16);
    LODWORD(v376) = (v627 ^ v366) >> 32;
    HIDWORD(v376) = v627 ^ v366;
    v806 = __PAIR64__((unsigned int)v374 ^ (unsigned int)v654, (v374 ^ v654) >> 32) + v362 + v829;
    LODWORD(v389) = v79 >> 24;
    HIDWORD(v389) = ((unsigned int)(HIDWORD(v371) ^ HIDWORD(v81)) >> 24) | (((unsigned int)v371 ^ HIDWORD(v73)) << 8);
    v241 = v382 + v687;
    LODWORD(v385) = (__int64)(v367 ^ v806) >> 24;
    HIDWORD(v385) = ((unsigned int)((v367 ^ v806) >> 32) >> 24) | (((unsigned int)v367 ^ (unsigned int)v806) << 8);
    v83 = v381 ^ (v382 + v687);
    v688 = v389 + v219 + v373 + v839 + v212 + v371 + v232;
    v717 = v376 + v753;
    v84 = v375 ^ (v376 + v753);
    HIDWORD(v383) = v83 >> 31;
    LODWORD(v377) = v84 >> 24;
    v655 = v385 + v203 + v654;
    HIDWORD(v377) = HIBYTE(HIDWORD(v84)) | ((_DWORD)v84 << 8);
    LODWORD(v383) = (2 * v83) | (HIDWORD(v83) >> 31);
    LODWORD(v390) = (__int64)(v388 ^ v688) >> 16;
    v85 = v377 + v627 + v233;
    HIDWORD(v390) = ((unsigned int)((v388 ^ v688) >> 32) >> 16) | (((unsigned int)v388 ^ (unsigned int)v688) << 16);
    LODWORD(v386) = (__int64)(v384 ^ v655) >> 16;
    v86 = v383 + v231 + v85;
    v87 = v376 ^ v85;
    HIDWORD(v386) = ((unsigned int)((v384 ^ v655) >> 32) >> 16) | (((unsigned int)v384 ^ (unsigned int)v655) << 16);
    HIDWORD(v392) = v390 ^ v86;
    v88 = v223 + v786;
    LODWORD(v378) = v87 >> 16;
    LODWORD(v392) = HIDWORD(v390) ^ HIDWORD(v86);
    HIDWORD(v378) = HIWORD(HIDWORD(v87)) | ((_DWORD)v87 << 16);
    LODWORD(v393) = __SPAIR64__(
                      (unsigned int)((v392 + v386 + v806) >> 32) ^ HIDWORD(v383),
                      ((HIDWORD(v390) ^ HIDWORD(v86)) + v386 + v806) ^ v383) >> 24;
    HIDWORD(v393) = ((((v392 + v386 + v806) >> 32) ^ HIDWORD(v383)) >> 24)
                  | ((((HIDWORD(v390) ^ HIDWORD(v86)) + (_DWORD)v386 + (_DWORD)v806) ^ (unsigned int)v383) << 8);
    v89 = v385 ^ (v386 + v806);
    HIDWORD(v387) = v89 >> 31;
    v754 = v378 + v376 + v753;
    v90 = v377 ^ (v378 + v717);
    v787 = v393 + v199 + v86;
    LODWORD(v387) = (2 * v89) | (HIDWORD(v89) >> 31);
    LODWORD(v394) = (__int64)(v392 ^ v787) >> 16;
    HIDWORD(v379) = v90 >> 31;
    HIDWORD(v394) = ((unsigned int)((v392 ^ v787) >> 32) >> 16)
                  | ((HIDWORD(v390) ^ HIDWORD(v86) ^ (unsigned int)v787) << 16);
    v628 = v392 + v386 + v806 + v394;
    LODWORD(v379) = (2 * v90) | (HIDWORD(v90) >> 31);
    v718 = v387 + v88;
    v91 = v379 + v202 + v688;
    HIDWORD(v401) = v386 ^ (v379 + v202 + v688);
    LODWORD(v401) = HIDWORD(v386) ^ HIDWORD(v91);
    v92 = v208 + v655;
    HIDWORD(v391) = (__int64)(v389 ^ (v390 + __PAIR64__(v82, HIDWORD(v73)))) >> 31;
    LODWORD(v391) = (2 * (v389 ^ (v390 + HIDWORD(v73))))
                  | ((HIDWORD(v389) ^ ((v390 + __PAIR64__(v82, HIDWORD(v73))) >> 32)) >> 31);
    v807 = v401 + v241;
    v93 = v379 ^ (v401 + v241);
    LODWORD(v402) = v93 >> 24;
    HIDWORD(v395) = (__int64)(v393 ^ v628) >> 31;
    HIDWORD(v402) = HIBYTE(HIDWORD(v93)) | ((_DWORD)v93 << 8);
    LODWORD(v395) = (2 * (v393 ^ v628)) | ((unsigned int)((v393 ^ v628) >> 32) >> 31);
    LODWORD(v396) = HIDWORD(v378) ^ HIDWORD(v718);
    LODWORD(v399) = ((unsigned __int64)(v391 + v208 + v655) >> 32) ^ HIDWORD(v382);
    HIDWORD(v399) = (v391 + v208 + v655) ^ v382;
    HIDWORD(v396) = v378 ^ v718;
    v830 = v227 + v91 + v402;
    v94 = v387 ^ (v396 + v390 + __PAIR64__(v82, HIDWORD(v73)));
    v656 = v396 + v390 + __PAIR64__(v82, HIDWORD(v73));
    LODWORD(v397) = v94 >> 24;
    v689 = v399 + v754;
    HIDWORD(v397) = HIBYTE(HIDWORD(v94)) | ((_DWORD)v94 << 8);
    LODWORD(v403) = (__int64)(__PAIR64__(HIDWORD(v401), HIDWORD(v386) ^ HIDWORD(v91)) ^ v830) >> 16;
    LODWORD(v400) = (v391 ^ (v399 + v754)) >> 24;
    HIDWORD(v403) = ((unsigned int)(HIDWORD(v401) ^ HIDWORD(v830)) >> 16)
                  | ((HIDWORD(v386) ^ HIDWORD(v91) ^ ((_DWORD)v227 + (_DWORD)v91 + (_DWORD)v402)) << 16);
    HIDWORD(v400) = ((unsigned int)((v391 ^ (unsigned __int64)(v399 + v754)) >> 32) >> 24)
                  | (((unsigned int)v391 ^ ((_DWORD)v399 + (_DWORD)v754)) << 8);
    v95 = v397 + v225 + v718;
    HIDWORD(v73) = v400 + v391 + v92 + v212;
    HIDWORD(v404) = (__int64)((v403 + v401 + v241) ^ v402) >> 31;
    v755 = v400 + v391 + v92 + v212;
    LODWORD(v741) = (__int64)(v396 ^ v95) >> 16;
    HIDWORD(v741) = ((unsigned int)((v396 ^ v95) >> 32) >> 16)
                  | ((HIDWORD(v378) ^ HIDWORD(v718) ^ (unsigned int)v95) << 16);
    LODWORD(v742) = __SPAIR64__(HIDWORD(v399) ^ HIDWORD(v755), (unsigned int)v399 ^ HIDWORD(v73)) >> 16;
    LODWORD(v404) = (2 * ((v403 + v807) ^ v402)) | ((unsigned int)(((v403 + v807) ^ v402) >> 32) >> 31);
    HIDWORD(v742) = ((unsigned int)(HIDWORD(v399) ^ HIDWORD(v755)) >> 16) | (((unsigned int)v399 ^ HIDWORD(v73)) << 16);
    v242 = v395 + v208 + v95;
    v96 = v404 + v234 + v787;
    HIDWORD(v409) = v242 ^ v742;
    LODWORD(v409) = (v242 ^ v742) >> 32;
    LODWORD(v405) = (v741 ^ v96) >> 32;
    HIDWORD(v405) = v741 ^ v96;
    v690 = v742 + v689;
    v808 = v403 + v807 + v409;
    LODWORD(v410) = (__int64)(v808 ^ v395) >> 24;
    v97 = v741 + v656;
    LODWORD(v406) = (v404 ^ (v405 + v690)) >> 24;
    HIDWORD(v410) = ((unsigned int)((v808 ^ v395) >> 32) >> 24) | (((unsigned int)v808 ^ (unsigned int)v395) << 8);
    HIDWORD(v406) = ((HIDWORD(v404) ^ ((unsigned __int64)(v405 + v690) >> 32)) >> 24)
                  | (((unsigned int)v404 ^ ((_DWORD)v405 + (_DWORD)v690)) << 8);
    HIDWORD(v398) = (v397 ^ (v741 + v656)) >> 31;
    v98 = v225 + v96;
    v99 = v410 + v242 + v219;
    HIDWORD(v92) = v410 + v242 + v219;
    v243 = v406 + v98;
    v840 = v99;
    HIDWORD(v99) ^= HIDWORD(v409);
    LODWORD(v411) = __SPAIR64__(HIDWORD(v99), (unsigned int)v409 ^ HIDWORD(v92)) >> 16;
    HIDWORD(v411) = HIWORD(HIDWORD(v99)) | (((unsigned int)v409 ^ HIDWORD(v92)) << 16);
    LODWORD(v398) = (2 * (v397 ^ (v741 + v656))) | ((HIDWORD(v397) ^ ((unsigned __int64)(v741 + v656) >> 32)) >> 31);
    HIDWORD(v743) = (v400 ^ v690) >> 31;
    LODWORD(v743) = (2 * (v400 ^ v690)) | ((unsigned int)(HIDWORD(v400) ^ HIDWORD(v690)) >> 31);
    v100 = v233 + v755 + v398;
    LODWORD(v407) = (v405 ^ (v406 + v98)) >> 16;
    LODWORD(v413) = HIDWORD(v403) ^ HIDWORD(v100);
    HIDWORD(v413) = v403 ^ v100;
    HIDWORD(v407) = ((HIDWORD(v405) ^ ((unsigned __int64)(v406 + v98) >> 32)) >> 16)
                  | (((unsigned int)v405 ^ ((_DWORD)v406 + (_DWORD)v98)) << 16);
    v657 = v407 + v405 + v690;
    v629 = v413 + v628;
    v101 = v743 + v212 + v830;
    LODWORD(v414) = (__int64)(v398 ^ v629) >> 24;
    HIDWORD(v417) = v394 ^ v101;
    LODWORD(v417) = HIDWORD(v394) ^ HIDWORD(v101);
    HIDWORD(v414) = ((unsigned int)((v398 ^ v629) >> 32) >> 24) | (((unsigned int)v398 ^ (unsigned int)v629) << 8);
    v102 = v417 + v97;
    v103 = v743 ^ (v417 + v97);
    LODWORD(v418) = v103 >> 24;
    v719 = v223 + v100 + v414;
    HIDWORD(v418) = HIBYTE(HIDWORD(v103)) | ((_DWORD)v103 << 8);
    HIDWORD(v412) = (v410 ^ (v808 + v411)) >> 31;
    v104 = v418 + v202 + v101;
    LODWORD(v415) = (__int64)(v413 ^ v719) >> 16;
    LODWORD(v412) = (2 * (v410 ^ (v808 + v411)))
                  | ((unsigned int)((v410 ^ (unsigned __int64)(v808 + v411)) >> 32) >> 31);
    LODWORD(v419) = (__int64)(v417 ^ v104) >> 16;
    HIDWORD(v419) = ((unsigned int)((v417 ^ v104) >> 32) >> 16)
                  | ((HIDWORD(v394) ^ HIDWORD(v101) ^ (unsigned int)v104) << 16);
    HIDWORD(v415) = ((unsigned int)((v413 ^ v719) >> 32) >> 16)
                  | ((HIDWORD(v403) ^ HIDWORD(v100) ^ (unsigned int)v719) << 16);
    v756 = v419 + v102;
    v788 = v203 + v243 + v412;
    v105 = v419 ^ v788;
    v421 = __PAIR64__(v105, HIDWORD(v105));
    v244 = v415 + v629 + __PAIR64__(v105, HIDWORD(v105));
    HIDWORD(v408) = (__int64)(v406 ^ v657) >> 31;
    v416 = (2 * ((v415 + v629) ^ v414)) | ((unsigned int)(((v415 + v629) ^ v414) >> 32) >> 31);
    v420 = (2 * (v418 ^ (v419 + v102))) | ((unsigned int)((v418 ^ (unsigned __int64)(v419 + v102)) >> 32) >> 31);
    LODWORD(v408) = (2 * (v406 ^ v657)) | ((unsigned int)((v406 ^ v657) >> 32) >> 31);
    LODWORD(v422) = (__int64)(v412 ^ v244) >> 24;
    v106 = v199 + v104;
    v107 = v420 + v719;
    LODWORD(v104) = v199 + v104;
    HIDWORD(v422) = ((unsigned int)((v412 ^ v244) >> 32) >> 24) | (((unsigned int)v412 ^ (unsigned int)v244) << 8);
    v630 = v416 + v209 + v840;
    v720 = v408 + __PAIR64__(HIDWORD(v106), v104);
    v108 = v232 + v107;
    LODWORD(v429) = HIDWORD(v411) ^ HIDWORD(v108);
    HIDWORD(v425) = v407 ^ v630;
    LODWORD(v425) = HIDWORD(v407) ^ HIDWORD(v630);
    HIDWORD(v429) = v411 ^ v108;
    LODWORD(v433) = ((v408 + __PAIR64__(HIDWORD(v106), v104)) ^ v415) >> 32;
    HIDWORD(v433) = (v408 + v104) ^ v415;
    HIDWORD(v89) = (HIDWORD(v411) ^ HIDWORD(v108)) + v657;
    LODWORD(v106) = (v429 + v657) >> 32;
    v658 = v425 + v756;
    v691 = v433 + v808 + v411;
    v757 = v422 + v227 + v788;
    v809 = __PAIR64__(v106, HIDWORD(v89));
    HIDWORD(v106) = HIDWORD(v420) ^ v106;
    LODWORD(v106) = v420 ^ HIDWORD(v89);
    LODWORD(v423) = (__int64)(v421 ^ v757) >> 16;
    LODWORD(v430) = v106 >> 24;
    HIDWORD(v430) = HIBYTE(HIDWORD(v106)) | (((unsigned int)v420 ^ HIDWORD(v89)) << 8);
    HIDWORD(v423) = ((unsigned int)((v421 ^ v757) >> 32) >> 16) | (((unsigned int)v421 ^ (unsigned int)v757) << 16);
    LODWORD(v426) = (v416 ^ v658) >> 24;
    LODWORD(v434) = (__int64)(v408 ^ v691) >> 24;
    v631 = v207 + v630;
    v789 = v423 + v244;
    HIDWORD(v424) = (__int64)(v422 ^ (v423 + v244)) >> 31;
    HIDWORD(v426) = ((unsigned int)(HIDWORD(v416) ^ HIDWORD(v658)) >> 24)
                  | (((unsigned int)v416 ^ (unsigned int)v658) << 8);
    LODWORD(v424) = (2 * (v422 ^ (v423 + v244))) | ((HIDWORD(v422) ^ ((v423 + v244) >> 32)) >> 31);
    HIDWORD(v434) = ((unsigned int)((v408 ^ v691) >> 32) >> 24) | (((unsigned int)v408 ^ (unsigned int)v691) << 8);
    v721 = v720 + v216 + v434;
    v831 = v430 + v231 + v108;
    HIDWORD(v89) = v411 ^ v108 ^ HIDWORD(v831);
    LODWORD(v89) = HIDWORD(v411) ^ HIDWORD(v108) ^ v831;
    v109 = v631 + v426;
    LODWORD(v427) = ((v631 + v426) ^ v425) >> 16;
    LODWORD(v431) = v89 >> 16;
    HIDWORD(v431) = HIWORD(HIDWORD(v89)) | ((_DWORD)v89 << 16);
    LODWORD(v435) = (__int64)(v721 ^ v433) >> 16;
    HIDWORD(v427) = ((((unsigned __int64)(v631 + v426) >> 32) ^ HIDWORD(v425)) >> 16)
                  | ((((_DWORD)v631 + (_DWORD)v426) ^ (unsigned int)v425) << 16);
    v632 = v431 + v809;
    HIDWORD(v435) = ((unsigned int)((v721 ^ v433) >> 32) >> 16) | (((unsigned int)v721 ^ (unsigned int)v433) << 16);
    v245 = v427 + v658;
    HIDWORD(v106) = v199 + v109 + v424;
    LODWORD(v109) = (unsigned __int64)(v199 + v109 + v424) >> 32;
    HIDWORD(v441) = HIDWORD(v106) ^ v431;
    LODWORD(v441) = v109 ^ HIDWORD(v431);
    v110 = v427 + v658;
    HIDWORD(v432) = (__int64)(v430 ^ (v431 + v809)) >> 31;
    LODWORD(v432) = (2 * (v430 ^ (v431 + v809))) | ((unsigned int)((v430 ^ (v431 + v809)) >> 32) >> 31);
    v659 = v441 + v435 + v691;
    HIDWORD(v428) = (v110 ^ v426) >> 31;
    LODWORD(v442) = (__int64)(v424 ^ v659) >> 24;
    v436 = (2 * (v434 ^ (v435 + v691))) | ((HIDWORD(v434) ^ ((v435 + v691) >> 32)) >> 31);
    LODWORD(v428) = (2 * (v110 ^ v426)) | ((unsigned int)(HIDWORD(v110) ^ HIDWORD(v426)) >> 31);
    v692 = v721 + v203 + v432;
    LODWORD(v449) = (v692 ^ v423) >> 32;
    HIDWORD(v442) = ((unsigned int)((v424 ^ v659) >> 32) >> 24) | (((unsigned int)v424 ^ (unsigned int)v659) << 8);
    HIDWORD(v449) = v692 ^ v423;
    v810 = v428 + v231 + v831;
    LODWORD(v445) = HIDWORD(v435) ^ HIDWORD(v810);
    HIDWORD(v445) = v435 ^ v810;
    v722 = v442 + __PAIR64__(v109, HIDWORD(v106)) + v232;
    v832 = v245 + v449;
    v111 = v432 ^ (v245 + v449);
    v112 = v436 + v225 + v757;
    LODWORD(v443) = (__int64)(v441 ^ v722) >> 16;
    HIDWORD(v443) = ((unsigned int)((v441 ^ v722) >> 32) >> 16)
                  | (((unsigned int)v109 ^ HIDWORD(v431) ^ (unsigned int)v722) << 16);
    LODWORD(v437) = (v427 ^ (unsigned __int64)v112) >> 32;
    HIDWORD(v437) = v427 ^ v112;
    LODWORD(v450) = v111 >> 24;
    v113 = v428 ^ (v445 + v789);
    v246 = v437 + v632;
    HIDWORD(v450) = HIBYTE(HIDWORD(v111)) | ((_DWORD)v111 << 8);
    v633 = v443 + v659;
    LODWORD(v446) = v113 >> 24;
    v114 = v442 ^ (v443 + v659);
    v693 = v450 + v692 + v219;
    HIDWORD(v446) = HIBYTE(HIDWORD(v113)) | ((_DWORD)v113 << 8);
    HIDWORD(v444) = v114 >> 31;
    LODWORD(v438) = (__int64)(v436 ^ v246) >> 24;
    v660 = v446 + v227 + v810;
    HIDWORD(v438) = ((unsigned int)((v436 ^ v246) >> 32) >> 24) | (((unsigned int)v436 ^ (unsigned int)v246) << 8);
    LODWORD(v444) = (2 * v114) | (HIDWORD(v114) >> 31);
    LODWORD(v451) = (v449 ^ v693) >> 16;
    v115 = v438 + v207 + v112;
    LODWORD(v103) = HIDWORD(v435) ^ HIDWORD(v810) ^ (v446 + v227 + v810);
    HIDWORD(v451) = ((unsigned int)(HIDWORD(v449) ^ HIDWORD(v693)) >> 16)
                  | (((unsigned int)v449 ^ (unsigned int)v693) << 16);
    v116 = v444 + v233 + v115;
    LODWORD(v447) = (__int64)(v445 ^ v660) >> 16;
    v117 = v437 ^ v115;
    v811 = v208 + v722;
    HIDWORD(v447) = ((unsigned int)((v445 ^ v660) >> 32) >> 16) | ((_DWORD)v103 << 16);
    LODWORD(v439) = v117 >> 16;
    LODWORD(v453) = (v451 ^ v116) >> 32;
    HIDWORD(v453) = v451 ^ v116;
    HIDWORD(v439) = HIWORD(HIDWORD(v117)) | ((_DWORD)v117 << 16);
    v723 = v453 + v447 + v445 + v789;
    HIDWORD(v454) = ((unsigned int)((v723 ^ v444) >> 32) >> 24) | (((unsigned int)v723 ^ (unsigned int)v444) << 8);
    LODWORD(v454) = (__int64)(v723 ^ v444) >> 24;
    LODWORD(v89) = v446 ^ (v447 + v445 + v789);
    v118 = 2 * (HIDWORD(v446) ^ ((v447 + v445 + v789) >> 32));
    LODWORD(v448) = (2 * v89) | ((HIDWORD(v446) ^ ((v447 + v445 + v789) >> 32)) >> 31);
    v119 = v438 ^ (v439 + v246);
    v790 = v454 + v209 + v116;
    HIDWORD(v448) = v118 | ((unsigned int)v89 >> 31);
    LODWORD(v455) = (__int64)(v453 ^ v790) >> 16;
    HIDWORD(v440) = v119 >> 31;
    HIDWORD(v455) = ((unsigned int)((v453 ^ v790) >> 32) >> 16) | (((unsigned int)v453 ^ (unsigned int)v790) << 16);
    LODWORD(v440) = (2 * v119) | (HIDWORD(v119) >> 31);
    v120 = v723 + v455;
    v724 = v811 + v448;
    v121 = v440 + v212 + v693;
    v122 = (v451 + v832) ^ v450;
    HIDWORD(v463) = v447 ^ v121;
    v694 = v120;
    LODWORD(v463) = HIDWORD(v447) ^ HIDWORD(v121);
    v123 = v454 ^ v120;
    HIDWORD(v452) = v122 >> 31;
    HIDWORD(v456) = v123 >> 31;
    LODWORD(v452) = (2 * v122) | (HIDWORD(v122) >> 31);
    v812 = v463 + v633;
    v124 = v440 ^ (v463 + v633);
    LODWORD(v456) = (2 * v123) | (HIDWORD(v123) >> 31);
    LODWORD(v464) = v124 >> 24;
    LODWORD(v109) = (v216 + v452 + v660) >> 32;
    HIDWORD(v112) = v216 + v452 + v660;
    HIDWORD(v464) = HIBYTE(HIDWORD(v124)) | ((_DWORD)v124 << 8);
    LODWORD(v461) = HIDWORD(v443) ^ v109;
    HIDWORD(v461) = v443 ^ HIDWORD(v112);
    LODWORD(v457) = HIDWORD(v724) ^ HIDWORD(v439);
    HIDWORD(v457) = v724 ^ v439;
    v758 = v464 + v223 + v121;
    v634 = v451 + v832 + v457;
    v661 = v461 + v439 + v246;
    LODWORD(v465) = (__int64)(v463 ^ v758) >> 16;
    LODWORD(v458) = (__int64)(v448 ^ v634) >> 24;
    LODWORD(v462) = (__int64)(v452 ^ v661) >> 24;
    HIDWORD(v458) = ((unsigned int)(HIDWORD(v448) ^ HIDWORD(v634)) >> 24)
                  | (((unsigned int)v448 ^ (unsigned int)v634) << 8);
    HIDWORD(v465) = ((unsigned int)((v463 ^ v758) >> 32) >> 16)
                  | ((HIDWORD(v447) ^ HIDWORD(v121) ^ (unsigned int)v758) << 16);
    HIDWORD(v462) = ((unsigned int)((v452 ^ v661) >> 32) >> 24)
                  | (((unsigned int)v452 ^ ((HIDWORD(v443) ^ (unsigned int)v109) + (_DWORD)v439 + (_DWORD)v246)) << 8);
    v125 = (v234 + __PAIR64__(v109, HIDWORD(v112))) >> 32;
    v126 = v458 + v724 + v202;
    v127 = (v465 + v812) ^ v464;
    v725 = v462 + __PAIR64__(v125, (int)v234 + HIDWORD(v112));
    LODWORD(v459) = (__int64)(v126 ^ v457) >> 16;
    HIDWORD(v466) = v127 >> 31;
    LODWORD(v744) = (__int64)(v461 ^ (v462 + __PAIR64__(v125, (int)v234 + HIDWORD(v112)))) >> 16;
    HIDWORD(v459) = ((unsigned int)((v126 ^ v457) >> 32) >> 16) | (((unsigned int)v126 ^ (unsigned int)v457) << 16);
    LODWORD(v466) = (2 * v127) | (HIDWORD(v127) >> 31);
    HIDWORD(v744) = ((unsigned int)((v461 ^ (v462 + __PAIR64__(v125, (int)v234 + HIDWORD(v112)))) >> 32) >> 16)
                  | (((unsigned int)v461 ^ ((_DWORD)v462 + (_DWORD)v234 + HIDWORD(v112))) << 16);
    v128 = v209 + v126 + v456;
    v129 = v466 + v227 + v790;
    LODWORD(v471) = HIDWORD(v744) ^ HIDWORD(v128);
    LODWORD(v467) = (v459 ^ v129) >> 32;
    HIDWORD(v471) = v744 ^ v128;
    HIDWORD(v467) = v459 ^ v129;
    v813 = v465 + v812 + v471;
    v791 = v467 + v744 + v661;
    LODWORD(v472) = (__int64)(v813 ^ v456) >> 24;
    LODWORD(v468) = (__int64)(v466 ^ v791) >> 24;
    HIDWORD(v472) = ((unsigned int)((v813 ^ v456) >> 32) >> 24) | (((unsigned int)v813 ^ (unsigned int)v456) << 8);
    v130 = v458 ^ (v459 + v634);
    HIDWORD(v468) = ((unsigned int)((v466 ^ v791) >> 32) >> 24) | (((unsigned int)v466 ^ (unsigned int)v791) << 8);
    v833 = v472 + v231 + v128;
    HIDWORD(v460) = v130 >> 31;
    HIDWORD(v127) = v744 ^ v128 ^ HIDWORD(v833);
    LODWORD(v473) = __SPAIR64__(HIDWORD(v127), HIDWORD(v744) ^ HIDWORD(v128) ^ (unsigned int)v833) >> 16;
    v247 = v225 + v725;
    HIDWORD(v473) = HIWORD(HIDWORD(v127)) | ((HIDWORD(v744) ^ HIDWORD(v128) ^ (unsigned int)v833) << 16);
    v726 = v468 + v223 + v129;
    LODWORD(v460) = (2 * v130) | (HIDWORD(v130) >> 31);
    HIDWORD(v745) = (__int64)(v462 ^ (v744 + v661)) >> 31;
    LODWORD(v745) = (2 * (v462 ^ (v744 + v661))) | ((unsigned int)((v462 ^ (v744 + v661)) >> 32) >> 31);
    LODWORD(v469) = (__int64)(v467 ^ v726) >> 16;
    LODWORD(v475) = (v465 ^ (unsigned __int64)(v247 + v460)) >> 32;
    v131 = v247 + v460;
    HIDWORD(v475) = v465 ^ (v247 + v460);
    HIDWORD(v469) = ((unsigned int)((v467 ^ v726) >> 32) >> 16) | (((unsigned int)v467 ^ (unsigned int)v726) << 16);
    v248 = v469 + v791;
    v695 = v475 + v694;
    v132 = v745 + v202 + v758;
    LODWORD(v479) = HIDWORD(v455) ^ HIDWORD(v132);
    HIDWORD(v479) = v455 ^ v132;
    LODWORD(v476) = (__int64)(v460 ^ v695) >> 24;
    HIDWORD(v476) = ((unsigned int)((v460 ^ v695) >> 32) >> 24) | (((unsigned int)v460 ^ (unsigned int)v695) << 8);
    v133 = v745 ^ (v479 + v459 + v634);
    v134 = v216 + v132;
    v662 = v199 + v131 + v476;
    HIDWORD(v480) = HIBYTE(HIDWORD(v133)) | ((_DWORD)v133 << 8);
    v135 = v472 ^ (v813 + v473);
    LODWORD(v480) = v133 >> 24;
    HIDWORD(v474) = v135 >> 31;
    v759 = v207 + v726;
    v727 = v480 + v134;
    v136 = (v480 + v134) ^ v479;
    LODWORD(v134) = (v480 + v134) ^ v479;
    LODWORD(v477) = (__int64)(v475 ^ v662) >> 16;
    LODWORD(v474) = (2 * v135) | (HIDWORD(v135) >> 31);
    LODWORD(v481) = __SPAIR64__(HIDWORD(v136), v134) >> 16;
    HIDWORD(v481) = HIWORD(HIDWORD(v136)) | ((_DWORD)v134 << 16);
    HIDWORD(v477) = ((unsigned int)((v475 ^ v662) >> 32) >> 16) | (((unsigned int)v475 ^ (unsigned int)v662) << 16);
    v137 = v759 + v474;
    v138 = v477 + v695;
    v696 = v481 + v479 + v459 + v634;
    v760 = v137;
    LODWORD(v483) = HIDWORD(v481) ^ HIDWORD(v137);
    HIDWORD(v483) = v481 ^ v137;
    HIDWORD(v482) = (v480 ^ v696) >> 31;
    HIDWORD(v478) = (__int64)(v476 ^ v138) >> 31;
    LODWORD(v126) = (v483 + v138) >> 32;
    HIDWORD(v470) = (__int64)(v468 ^ (v469 + v791)) >> 31;
    LODWORD(v478) = (2 * (v476 ^ v138)) | ((unsigned int)((v476 ^ v138) >> 32) >> 31);
    LODWORD(v482) = (2 * (v480 ^ v696)) | ((unsigned int)(HIDWORD(v480) ^ HIDWORD(v696)) >> 31);
    LODWORD(v137) = HIDWORD(v474) ^ v126;
    v792 = v483 + v138;
    HIDWORD(v138) = v474 ^ ((HIDWORD(v481) ^ HIDWORD(v137)) + v138);
    LODWORD(v470) = (2 * (v468 ^ v248)) | ((unsigned int)((v468 ^ v248) >> 32) >> 31);
    LODWORD(v484) = __SPAIR64__(HIDWORD(v474) ^ (unsigned int)v126, HIDWORD(v138)) >> 24;
    v139 = v727 + v234;
    HIDWORD(v484) = BYTE3(v137) | (HIDWORD(v138) << 8);
    v728 = v478 + v232 + v833;
    v140 = v212 + v482 + v662;
    HIDWORD(v487) = v469 ^ v728;
    LODWORD(v491) = (v473 ^ v140) >> 32;
    LODWORD(v487) = (v469 ^ v728) >> 32;
    HIDWORD(v491) = v473 ^ v140;
    LODWORD(v495) = ((unsigned __int64)(v470 + v139) >> 32) ^ HIDWORD(v477);
    HIDWORD(v495) = (v470 + v139) ^ v477;
    LODWORD(v138) = (v491 + v248) >> 32;
    HIDWORD(v136) = v491 + v248;
    v663 = v495 + v813 + v473;
    v141 = v483 ^ (v484 + v233 + v760);
    LODWORD(v485) = v141 >> 16;
    HIDWORD(v492) = ((unsigned int)((v482 ^ (v491 + v248)) >> 32) >> 24)
                  | (((unsigned int)v482 ^ ((_DWORD)v491 + (_DWORD)v248)) << 8);
    v834 = v208 + v140;
    LODWORD(v492) = (__int64)(v482 ^ (v491 + v248)) >> 24;
    HIDWORD(v485) = HIWORD(HIDWORD(v141)) | ((_DWORD)v141 << 16);
    LODWORD(v488) = (v478 ^ (v487 + v696)) >> 24;
    LODWORD(v140) = v470 ^ (v495 + v813 + v473);
    LODWORD(v746) = (__int64)(v470 ^ v663) >> 24;
    v635 = v203 + v728;
    v814 = v470 + v139 + v219;
    v729 = v485 + v792;
    HIDWORD(v486) = (v484 ^ (v485 + v792)) >> 31;
    HIDWORD(v488) = ((unsigned int)((v478 ^ (unsigned __int64)(v487 + v696)) >> 32) >> 24)
                  | (((unsigned int)v478 ^ ((_DWORD)v487 + (_DWORD)v696)) << 8);
    LODWORD(v486) = (2 * (v484 ^ (v485 + v792))) | ((HIDWORD(v484) ^ ((unsigned __int64)(v485 + v792) >> 32)) >> 31);
    HIDWORD(v746) = ((unsigned int)((v470 ^ v663) >> 32) >> 24) | ((_DWORD)v140 << 8);
    v636 = v635 + v488;
    LODWORD(v493) = (v491 ^ (v492 + v834)) >> 16;
    LODWORD(v489) = (v636 ^ v487) >> 16;
    HIDWORD(v493) = ((HIDWORD(v491) ^ ((unsigned __int64)(v492 + v834) >> 32)) >> 16)
                  | (((unsigned int)v491 ^ ((_DWORD)v492 + (_DWORD)v834)) << 16);
    LODWORD(v496) = (v495 ^ (v814 + v746)) >> 16;
    HIDWORD(v489) = ((unsigned int)(HIDWORD(v636) ^ HIDWORD(v487)) >> 16)
                  | (((unsigned int)v636 ^ (unsigned int)v487) << 16);
    HIDWORD(v496) = ((HIDWORD(v495) ^ ((unsigned __int64)(v814 + v746) >> 32)) >> 16)
                  | (((unsigned int)v495 ^ ((_DWORD)v814 + (_DWORD)v746)) << 16);
    v249 = v489 + v487 + v696;
    v142 = v663;
    v664 = v493 + __PAIR64__(v138, HIDWORD(v136));
    v143 = v496 + v142;
    v637 = v231 + v636 + v486;
    v144 = v492 ^ (v493 + __PAIR64__(v138, HIDWORD(v136)));
    LODWORD(v502) = (v637 ^ v493) >> 32;
    HIDWORD(v502) = v637 ^ v493;
    v815 = v233 + v814 + v746;
    HIDWORD(v494) = v144 >> 31;
    LODWORD(v494) = (2 * v144) | (HIDWORD(v144) >> 31);
    HIDWORD(v490) = (__int64)(v249 ^ v488) >> 31;
    LODWORD(v503) = (__int64)(v486 ^ (v502 + v496 + v142)) >> 24;
    v497 = (2 * (v746 ^ v143)) | ((unsigned int)((v746 ^ v143) >> 32) >> 31);
    LODWORD(v490) = (2 * (v249 ^ v488)) | ((unsigned int)((v249 ^ v488) >> 32) >> 31);
    HIDWORD(v503) = ((HIDWORD(v486) ^ ((v502 + v143) >> 32)) >> 24)
                  | (((unsigned int)v486 ^ ((_DWORD)v502 + (_DWORD)v143)) << 8);
    v793 = v815 + v494;
    v510 = __PAIR64__((v815 + v494) ^ v485, (unsigned int)((unsigned __int64)(v815 + v494) >> 32) ^ HIDWORD(v485));
    v638 = v503 + v637 + v216;
    v816 = v490 + v223 + v492 + v834;
    v506 = __PAIR64__(v496 ^ (v490 + v223 + v492 + v834), HIDWORD(v496) ^ HIDWORD(v816));
    v145 = v249 + v510;
    HIDWORD(v139) = v249 + v510;
    v146 = (v249 + v510) >> 32;
    LODWORD(v504) = (v502 ^ v638) >> 16;
    v250 = v497 + v208 + v484 + v233 + v760;
    v841 = __PAIR64__(v146, HIDWORD(v139));
    HIDWORD(v504) = ((unsigned int)(HIDWORD(v502) ^ HIDWORD(v638)) >> 16)
                  | (((unsigned int)v502 ^ (unsigned int)v638) << 16);
    LODWORD(v511) = (__int64)(v494 ^ __PAIR64__(HIDWORD(v145), HIDWORD(v139))) >> 24;
    v835 = __PAIR64__(v496 ^ (v490 + v223 + v492 + v834), HIDWORD(v496) ^ HIDWORD(v816)) + v729;
    LODWORD(v498) = (v250 ^ v489) >> 32;
    HIDWORD(v498) = v250 ^ v489;
    HIDWORD(v511) = ((unsigned int)(HIDWORD(v494) ^ HIDWORD(v145)) >> 24) | (((unsigned int)v494 ^ HIDWORD(v139)) << 8);
    LODWORD(v137) = (v498 + v664) >> 32;
    HIDWORD(v138) = v498 + v664;
    LODWORD(v507) = (v490 ^ v835) >> 24;
    v147 = v793;
    v794 = v504 + v502 + v496 + v142;
    HIDWORD(v507) = ((unsigned int)(HIDWORD(v490) ^ HIDWORD(v835)) >> 24)
                  | (((unsigned int)v490 ^ (unsigned int)v835) << 8);
    v730 = v498 + v664;
    v697 = v511 + v147 + v212;
    HIDWORD(v505) = (__int64)(v503 ^ v794) >> 31;
    LODWORD(v499) = (__int64)(v497 ^ (v498 + v664)) >> 24;
    v665 = v507 + v202 + v816;
    HIDWORD(v499) = ((HIDWORD(v497) ^ (unsigned int)v137) >> 24) | (((unsigned int)v497 ^ HIDWORD(v138)) << 8);
    LODWORD(v505) = (2 * (v503 ^ (v504 + v502 + v496 + v142))) | ((unsigned int)((v503 ^ v794) >> 32) >> 31);
    LODWORD(v512) = (__int64)(v510 ^ v697) >> 16;
    HIDWORD(v512) = ((unsigned int)((v510 ^ v697) >> 32) >> 16) | (((unsigned int)v510 ^ (unsigned int)v697) << 16);
    LODWORD(v508) = (__int64)(v506 ^ v665) >> 16;
    v148 = v505 + v225 + v499 + v250 + v232;
    HIDWORD(v508) = ((unsigned int)((v506 ^ v665) >> 32) >> 16) | (((unsigned int)v506 ^ (unsigned int)v665) << 16);
    HIDWORD(v514) = v512 ^ v148;
    LODWORD(v514) = HIDWORD(v512) ^ HIDWORD(v148);
    LODWORD(v500) = (v498 ^ (v499 + v250 + v232)) >> 16;
    HIDWORD(v500) = (((unsigned int)v250 ^ (unsigned int)v489 ^ ((unsigned __int64)(v499 + v250 + v232) >> 32)) >> 16)
                  | (((unsigned int)v498 ^ ((_DWORD)v499 + (_DWORD)v250 + (_DWORD)v232)) << 16);
    LODWORD(v515) = __SPAIR64__(
                      (unsigned int)((unsigned __int64)(v514 + v508 + v835) >> 32) ^ HIDWORD(v505),
                      ((HIDWORD(v512) ^ HIDWORD(v148)) + v508 + v835) ^ v505) >> 24;
    HIDWORD(v515) = ((((unsigned __int64)(v514 + v508 + v835) >> 32) ^ HIDWORD(v505)) >> 24)
                  | ((((HIDWORD(v512) ^ HIDWORD(v148)) + (_DWORD)v508 + (_DWORD)v835) ^ (unsigned int)v505) << 8);
    v251 = v500 + __PAIR64__(v137, HIDWORD(v138));
    v149 = v507 ^ (v508 + v835);
    HIDWORD(v509) = v149 >> 31;
    LODWORD(v509) = (2 * v149) | (HIDWORD(v149) >> 31);
    v150 = v499 ^ (v500 + v730);
    v817 = v515 + v234 + v148;
    LODWORD(v516) = (__int64)(v514 ^ v817) >> 16;
    HIDWORD(v501) = v150 >> 31;
    HIDWORD(v516) = ((unsigned int)((v514 ^ v817) >> 32) >> 16)
                  | ((HIDWORD(v512) ^ HIDWORD(v148) ^ (unsigned int)v817) << 16);
    LODWORD(v501) = (2 * v150) | (HIDWORD(v150) >> 31);
    v731 = v514 + v508 + v835 + v516;
    v761 = v509 + v227 + v638;
    v151 = v501 + v219 + v697;
    LODWORD(v525) = (v508 ^ (unsigned __int64)v151) >> 32;
    HIDWORD(v525) = v508 ^ v151;
    HIDWORD(v513) = (__int64)((v512 + __PAIR64__(v146, HIDWORD(v139))) ^ v511) >> 31;
    HIDWORD(v517) = (__int64)(v515 ^ v731) >> 31;
    LODWORD(v513) = (2 * ((v512 + v841) ^ v511)) | ((unsigned int)(((v512 + v841) ^ v511) >> 32) >> 31);
    v698 = v525 + v794;
    v152 = v501 ^ (v525 + v794);
    LODWORD(v517) = (2 * (v515 ^ v731)) | ((unsigned int)((v515 ^ v731) >> 32) >> 31);
    LODWORD(v526) = v152 >> 24;
    HIDWORD(v526) = HIBYTE(HIDWORD(v152)) | ((_DWORD)v152 << 8);
    v153 = v199 + v513 + v665;
    HIDWORD(v518) = v761 ^ v500;
    LODWORD(v518) = (v761 ^ v500) >> 32;
    HIDWORD(v522) = v504 ^ v153;
    LODWORD(v522) = HIDWORD(v504) ^ HIDWORD(v153);
    HIDWORD(v137) = (HIDWORD(v504) ^ HIDWORD(v153)) + v251;
    LODWORD(v139) = (v522 + v251) >> 32;
    v795 = v526 + v207 + v151;
    LODWORD(v137) = v508 ^ v151 ^ HIDWORD(v795);
    v154 = v509 ^ (v512 + __PAIR64__(v146, HIDWORD(v139)) + v518);
    v666 = __PAIR64__(v139, HIDWORD(v137));
    LODWORD(v151) = v513 ^ HIDWORD(v137);
    HIDWORD(v151) = HIDWORD(v513) ^ v139;
    LODWORD(v527) = (((unsigned int)v525 ^ (unsigned int)v795) >> 16) | ((_DWORD)v137 << 16);
    LODWORD(v519) = v154 >> 24;
    LODWORD(v523) = v151 >> 24;
    HIDWORD(v519) = HIBYTE(HIDWORD(v154)) | ((_DWORD)v154 << 8);
    HIDWORD(v527) = WORD1(v137) | (((unsigned int)v525 ^ (unsigned int)v795) << 16);
    HIDWORD(v523) = ((HIDWORD(v513) ^ (unsigned int)v139) >> 24) | (((unsigned int)v513 ^ HIDWORD(v137)) << 8);
    v155 = v519 + v761 + v209;
    v762 = v527 + v698;
    v156 = (v527 + v698) ^ v526;
    v699 = v523 + v203 + v153;
    LODWORD(v520) = (v155 ^ v518) >> 16;
    LODWORD(v768) = (v522 ^ v699) >> 16;
    HIDWORD(v520) = ((unsigned int)(HIDWORD(v155) ^ HIDWORD(v518)) >> 16)
                  | (((unsigned int)v155 ^ (unsigned int)v518) << 16);
    v528 = (2 * v156) | (HIDWORD(v156) >> 31);
    HIDWORD(v768) = (((unsigned int)v504 ^ (unsigned int)v153 ^ HIDWORD(v699)) >> 16)
                  | ((HIDWORD(v504) ^ HIDWORD(v153) ^ (unsigned int)v699) << 16);
    v157 = v528 + v219 + v817;
    v158 = v212 + v155 + v517;
    LODWORD(v529) = HIDWORD(v520) ^ HIDWORD(v157);
    LODWORD(v533) = HIDWORD(v768) ^ HIDWORD(v158);
    HIDWORD(v533) = v768 ^ v158;
    HIDWORD(v529) = v520 ^ v157;
    v639 = v768 + v666;
    v818 = v762 + v533;
    v159 = (v762 + v533) ^ v517;
    v763 = v529 + v768 + v666;
    LODWORD(v534) = v159 >> 24;
    LODWORD(v530) = (__int64)(v528 ^ v763) >> 24;
    HIDWORD(v534) = HIBYTE(HIDWORD(v159)) | ((_DWORD)v159 << 8);
    v667 = v520 + v512 + v841 + v518;
    HIDWORD(v530) = ((unsigned int)((v528 ^ v763) >> 32) >> 24) | (((unsigned int)v528 ^ (unsigned int)v763) << 8);
    v160 = v234 + v157;
    v836 = v534 + v203 + v158;
    HIDWORD(v157) = HIDWORD(v768) ^ HIDWORD(v158) ^ (v534 + v203 + v158);
    HIDWORD(v521) = (__int64)(v519 ^ v667) >> 31;
    LODWORD(v155) = v768 ^ v158 ^ HIDWORD(v836);
    LODWORD(v535) = HIWORD(HIDWORD(v157)) | ((_DWORD)v155 << 16);
    v252 = v209 + v699;
    LODWORD(v521) = (2 * (v519 ^ v667)) | ((unsigned int)((v519 ^ v667) >> 32) >> 31);
    v700 = v530 + __PAIR64__(HIDWORD(v160), (int)v234 + (int)v157);
    HIDWORD(v535) = WORD1(v155) | (HIDWORD(v157) << 16);
    HIDWORD(v524) = (__int64)(v523 ^ v639) >> 31;
    LODWORD(v524) = (2 * (v523 ^ v639)) | ((unsigned int)((v523 ^ v639) >> 32) >> 31);
    v161 = v252 + v521;
    LODWORD(v537) = (v527 ^ (unsigned __int64)(v252 + v521)) >> 32;
    HIDWORD(v537) = v527 ^ (v252 + v521);
    LODWORD(v531) = (__int64)(v529 ^ (v530 + __PAIR64__(HIDWORD(v160), (int)v234 + (int)v157))) >> 16;
    HIDWORD(v531) = (((unsigned int)v520
                    ^ (unsigned int)v157
                    ^ ((v530 + __PAIR64__(HIDWORD(v160), (int)v234 + (int)v157)) >> 32)) >> 16)
                  | (((unsigned int)v529 ^ ((_DWORD)v530 + (_DWORD)v234 + (_DWORD)v157)) << 16);
    v253 = v531 + v763;
    v732 = v537 + v731;
    v162 = v524 + v199 + v795;
    LODWORD(v541) = HIDWORD(v516) ^ HIDWORD(v162);
    HIDWORD(v541) = v516 ^ v162;
    v163 = v541 + v667;
    LODWORD(v538) = (__int64)(v521 ^ v732) >> 24;
    HIDWORD(v538) = ((unsigned int)((v521 ^ v732) >> 32) >> 24) | (((unsigned int)v521 ^ (unsigned int)v732) << 8);
    v164 = v524 ^ (v541 + v667);
    LODWORD(v542) = v164 >> 24;
    HIDWORD(v542) = HIBYTE(HIDWORD(v164)) | ((_DWORD)v164 << 8);
    v668 = v208 + v161 + v538;
    HIDWORD(v536) = (v534 ^ (v818 + v535)) >> 31;
    LODWORD(v536) = (2 * (v534 ^ (v818 + v535)))
                  | ((unsigned int)((v534 ^ (unsigned __int64)(v818 + v535)) >> 32) >> 31);
    v165 = v542 + v207 + v162;
    LODWORD(v539) = (__int64)(v537 ^ v668) >> 16;
    LODWORD(v543) = (v541 ^ v165) >> 16;
    HIDWORD(v543) = (((unsigned int)v516 ^ (unsigned int)v162 ^ HIDWORD(v165)) >> 16)
                  | ((HIDWORD(v516) ^ HIDWORD(v162) ^ (unsigned int)v165) << 16);
    HIDWORD(v539) = ((unsigned int)((v537 ^ v668) >> 32) >> 16) | (((unsigned int)v537 ^ (unsigned int)v668) << 16);
    v701 = v232 + v700 + v536;
    v166 = v542 ^ (v543 + v163);
    LODWORD(v545) = (v543 ^ v701) >> 32;
    HIDWORD(v545) = v543 ^ v701;
    v167 = v538 ^ (v539 + v732);
    HIDWORD(v544) = v166 >> 31;
    HIDWORD(v540) = v167 >> 31;
    HIDWORD(v532) = (__int64)(v530 ^ (v531 + v763)) >> 31;
    LODWORD(v540) = (2 * v167) | (HIDWORD(v167) >> 31);
    v796 = v545 + v539 + v732;
    LODWORD(v544) = (2 * v166) | (HIDWORD(v166) >> 31);
    LODWORD(v532) = (2 * (v530 ^ v253)) | ((unsigned int)((v530 ^ v253) >> 32) >> 31);
    LODWORD(v546) = (v536 ^ v796) >> 24;
    v168 = ((unsigned int)(HIDWORD(v536) ^ HIDWORD(v796)) >> 24)
         | (((unsigned int)v536 ^ ((_DWORD)v545 + (_DWORD)v539 + (_DWORD)v732)) << 8);
    v169 = v544 + v668;
    v669 = v540 + v216 + v836;
    v170 = v202 + v169;
    v733 = v532 + v227 + v165;
    HIDWORD(v546) = v168;
    LODWORD(v553) = HIDWORD(v535) ^ HIDWORD(v170);
    HIDWORD(v553) = v535 ^ v170;
    HIDWORD(v549) = v531 ^ v669;
    LODWORD(v549) = HIDWORD(v531) ^ HIDWORD(v669);
    LODWORD(v557) = HIDWORD(v733) ^ HIDWORD(v539);
    HIDWORD(v557) = v733 ^ v539;
    v171 = v546 + v223 + v701;
    v702 = v557 + v818 + v535;
    LODWORD(v547) = (__int64)(v545 ^ v171) >> 16;
    LODWORD(v554) = (__int64)(v544 ^ (v553 + v531 + v763)) >> 24;
    HIDWORD(v547) = ((unsigned int)((v545 ^ v171) >> 32) >> 16) | (((unsigned int)v545 ^ (unsigned int)v171) << 16);
    LODWORD(v550) = (v540 ^ (v549 + v543 + v163)) >> 24;
    v837 = v231 + v669;
    LODWORD(v558) = (v532 ^ v702) >> 24;
    v734 = v733 + v233;
    v670 = v547 + v796;
    HIDWORD(v548) = (v546 ^ (v547 + v796)) >> 31;
    HIDWORD(v554) = ((HIDWORD(v544) ^ ((v553 + v253) >> 32)) >> 24)
                  | (((unsigned int)v544 ^ ((HIDWORD(v535) ^ HIDWORD(v170)) + (_DWORD)v253)) << 8);
    HIDWORD(v550) = ((HIDWORD(v540) ^ ((unsigned __int64)(v549 + v543 + v163) >> 32)) >> 24)
                  | (((unsigned int)v540 ^ ((_DWORD)v549 + (_DWORD)v543 + (_DWORD)v163)) << 8);
    LODWORD(v548) = (2 * (v546 ^ (v547 + v796))) | ((v168 ^ ((unsigned __int64)(v547 + v796) >> 32)) >> 31);
    HIDWORD(v558) = ((unsigned int)(HIDWORD(v532) ^ HIDWORD(v702)) >> 24)
                  | (((unsigned int)v532 ^ (unsigned int)v702) << 8);
    v797 = v554 + v225 + v170;
    LODWORD(v551) = ((v837 + v550) ^ v549) >> 16;
    LODWORD(v555) = (v553 ^ v797) >> 16;
    LODWORD(v559) = (v557 ^ (v734 + v558)) >> 16;
    HIDWORD(v555) = (((unsigned int)v535 ^ (unsigned int)v170 ^ HIDWORD(v797)) >> 16)
                  | ((HIDWORD(v535) ^ HIDWORD(v170) ^ ((_DWORD)v554 + (_DWORD)v225 + (_DWORD)v170)) << 16);
    HIDWORD(v551) = ((((unsigned __int64)(v837 + v550) >> 32) ^ HIDWORD(v549)) >> 16)
                  | ((((_DWORD)v837 + (_DWORD)v550) ^ (unsigned int)v549) << 16);
    HIDWORD(v559) = ((unsigned int)((v557 ^ (unsigned __int64)(v734 + v558)) >> 32) >> 16)
                  | (((unsigned int)v557 ^ ((_DWORD)v734 + (_DWORD)v558)) << 16);
    v172 = v551 + v549 + v543 + v163;
    v173 = v559 + v702;
    LODWORD(v564) = ((v234 + v837 + v550 + v548) ^ v555) >> 32;
    HIDWORD(v564) = (v234 + v837 + v550 + v548) ^ v555;
    HIDWORD(v556) = (__int64)(v554 ^ (v555 + v553 + v531 + v763)) >> 31;
    LODWORD(v556) = (2 * (v554 ^ (v555 + v553 + v253))) | ((unsigned int)((v554 ^ (v555 + v553 + v253)) >> 32) >> 31);
    HIDWORD(v552) = (__int64)(v550 ^ v172) >> 31;
    LODWORD(v565) = (v548 ^ (v564 + v559 + v702)) >> 24;
    v560 = (2 * (v558 ^ v173)) | ((unsigned int)((v558 ^ v173) >> 32) >> 31);
    LODWORD(v552) = (2 * (v550 ^ v172)) | ((unsigned int)((v550 ^ v172) >> 32) >> 31);
    HIDWORD(v565) = ((unsigned int)((v548 ^ (v564 + v173)) >> 32) >> 24)
                  | (((unsigned int)v548 ^ ((_DWORD)v564 + (_DWORD)v173)) << 8);
    v819 = v208 + v734 + v558 + v556;
    LODWORD(v572) = HIDWORD(v819) ^ HIDWORD(v547);
    HIDWORD(v572) = (v208 + v734 + v558 + v556) ^ v547;
    v798 = v552 + v203 + v797;
    v735 = v565 + v234 + v837 + v550 + v548 + v202;
    LODWORD(v568) = (v559 ^ v798) >> 32;
    HIDWORD(v568) = v559 ^ v798;
    v838 = v572 + v172;
    v174 = v560 + v233 + v171;
    LODWORD(v566) = (__int64)(v564 ^ v735) >> 16;
    HIDWORD(v566) = ((unsigned int)((v564 ^ v735) >> 32) >> 16) | (((unsigned int)v564 ^ (unsigned int)v735) << 16);
    HIDWORD(v561) = v551 ^ v174;
    LODWORD(v561) = HIDWORD(v551) ^ HIDWORD(v174);
    v764 = v568 + v670;
    v175 = v552 ^ (v568 + v670);
    LODWORD(v573) = (__int64)(v556 ^ v838) >> 24;
    v254 = v561 + v555 + v553 + v253;
    HIDWORD(v573) = ((unsigned int)((v556 ^ v838) >> 32) >> 24) | (((unsigned int)v556 ^ (unsigned int)v838) << 8);
    LODWORD(v569) = v175 >> 24;
    v640 = v566 + v564 + v559 + v702;
    HIDWORD(v569) = HIBYTE(HIDWORD(v175)) | ((_DWORD)v175 << 8);
    v671 = v573 + v819 + v209;
    HIDWORD(v567) = (__int64)(v565 ^ v640) >> 31;
    LODWORD(v562) = (__int64)(v560 ^ v254) >> 24;
    HIDWORD(v562) = ((unsigned int)((v560 ^ v254) >> 32) >> 24) | (((unsigned int)v560 ^ (unsigned int)v254) << 8);
    LODWORD(v567) = (2 * (v565 ^ v640)) | ((unsigned int)((v565 ^ v640) >> 32) >> 31);
    LODWORD(v574) = (v572 ^ v671) >> 16;
    v176 = v562 + v199 + v174;
    v799 = v569 + v207 + v798;
    HIDWORD(v574) = ((unsigned int)(HIDWORD(v572) ^ HIDWORD(v671)) >> 16)
                  | ((HIDWORD(v819) ^ HIDWORD(v547) ^ (unsigned int)v671) << 16);
    LODWORD(v570) = (v799 ^ v568) >> 16;
    LODWORD(v173) = v567 + v212 + v176;
    v177 = v567 + v212 + v176;
    v178 = v561 ^ v176;
    HIDWORD(v173) = HIDWORD(v177);
    v820 = v219 + v735;
    HIDWORD(v570) = ((unsigned int)(HIDWORD(v799) ^ HIDWORD(v568)) >> 16)
                  | (((unsigned int)v799 ^ (unsigned int)v568) << 16);
    LODWORD(v563) = v178 >> 16;
    HIDWORD(v576) = v574 ^ v173;
    LODWORD(v576) = HIDWORD(v574) ^ HIDWORD(v177);
    HIDWORD(v563) = HIWORD(HIDWORD(v178)) | ((_DWORD)v178 << 16);
    v736 = v576 + v570 + v764;
    v179 = v216 + v173;
    v577 = __PAIR64__(
             ((unsigned int)(HIDWORD(v736) ^ HIDWORD(v567)) >> 24)
           | ((((HIDWORD(v574) ^ HIDWORD(v177)) + (_DWORD)v570 + (_DWORD)v764) ^ (unsigned int)v567) << 8),
             (v736 ^ v567) >> 24);
    v703 = v563 + v254;
    v180 = v562 ^ (v563 + v254);
    v571 = (2 * (v569 ^ (v570 + v764))) | ((unsigned int)((v569 ^ (unsigned __int64)(v570 + v764)) >> 32) >> 31);
    HIDWORD(v769) = v180 >> 31;
    v765 = __PAIR64__(
             ((unsigned int)(HIDWORD(v736) ^ HIDWORD(v567)) >> 24)
           | ((((HIDWORD(v574) ^ HIDWORD(v177)) + (_DWORD)v570 + (_DWORD)v764) ^ (unsigned int)v567) << 8),
             (v736 ^ v567) >> 24)
         + v179;
    HIDWORD(v152) = HIDWORD(v574) ^ HIDWORD(v177) ^ (v577 + v179);
    HIDWORD(v179) = HIDWORD(v576) ^ ((v577 + v179) >> 32);
    LODWORD(v578) = HIWORD(HIDWORD(v152)) | (HIDWORD(v179) << 16);
    HIDWORD(v578) = HIWORD(HIDWORD(v179)) | (HIDWORD(v152) << 16);
    LODWORD(v769) = (2 * v180) | ((HIDWORD(v562) ^ ((v563 + v254) >> 32)) >> 31);
    v255 = v736 + v578;
    v737 = v571 + v820;
    v181 = v769 + v231 + v671;
    HIDWORD(v575) = (__int64)(v573 ^ (v574 + v838)) >> 31;
    LODWORD(v585) = HIDWORD(v570) ^ HIDWORD(v181);
    HIDWORD(v585) = v570 ^ v181;
    LODWORD(v575) = (2 * (v573 ^ (v574 + v838))) | ((HIDWORD(v573) ^ ((v574 + v838) >> 32)) >> 31);
    v821 = v585 + v640;
    LODWORD(v586) = (__int64)(v769 ^ (v585 + v640)) >> 24;
    HIDWORD(v586) = ((unsigned int)((v769 ^ (v585 + v640)) >> 32) >> 24)
                  | (((unsigned int)v769 ^ ((HIDWORD(v570) ^ HIDWORD(v181)) + (_DWORD)v640)) << 8);
    v672 = v225 + v799 + v575;
    LODWORD(v579) = (v737 ^ v563) >> 32;
    HIDWORD(v579) = v737 ^ v563;
    LODWORD(v582) = (v672 ^ v566) >> 32;
    HIDWORD(v582) = v672 ^ v566;
    v641 = v579 + v574 + v838;
    v704 = v582 + v703;
    v800 = v586 + v232 + v181;
    LODWORD(v587) = (v585 ^ v800) >> 16;
    LODWORD(v580) = (v571 ^ v641) >> 24;
    LODWORD(v583) = (__int64)(v575 ^ v704) >> 24;
    HIDWORD(v587) = (((unsigned int)v570 ^ (unsigned int)v181 ^ HIDWORD(v800)) >> 16)
                  | ((HIDWORD(v570) ^ HIDWORD(v181) ^ (unsigned int)v800) << 16);
    HIDWORD(v580) = ((unsigned int)(HIDWORD(v571) ^ HIDWORD(v641)) >> 24)
                  | (((unsigned int)v571 ^ (unsigned int)v641) << 8);
    HIDWORD(v583) = ((unsigned int)((v575 ^ v704) >> 32) >> 24) | (((unsigned int)v575 ^ (unsigned int)v704) << 8);
    v182 = v672 + v227;
    LODWORD(v770) = (2 * (v577 ^ v255)) | ((unsigned int)(HIDWORD(v577) ^ HIDWORD(v255)) >> 31);
    HIDWORD(v770) = (__int64)(v577 ^ v255) >> 31;
    v822 = v587 + v821;
    v183 = (v580 + v737 + v223) ^ v579;
    HIDWORD(v588) = (v822 ^ v586) >> 31;
    LODWORD(v772) = (v582 ^ (v583 + v672 + v227)) >> 16;
    LODWORD(v588) = (2 * (v822 ^ v586)) | ((unsigned int)(HIDWORD(v822) ^ HIDWORD(v586)) >> 31);
    HIDWORD(v772) = (((unsigned int)v672 ^ (unsigned int)v566 ^ ((unsigned __int64)(v583 + v182) >> 32)) >> 16)
                  | (((unsigned int)v582 ^ ((_DWORD)v583 + (_DWORD)v182)) << 16);
    LODWORD(v771) = v183 >> 16;
    v204 = v203 + v580 + v737 + v223 + v770;
    LODWORD(v593) = HIDWORD(v204) ^ HIDWORD(v772);
    HIDWORD(v771) = HIWORD(HIDWORD(v183)) | ((_DWORD)v183 << 16);
    v766 = v231 + v765 + v588;
    LODWORD(v589) = HIDWORD(v766) ^ HIDWORD(v771);
    HIDWORD(v593) = v204 ^ v772;
    HIDWORD(v589) = v766 ^ v771;
    v673 = v772 + v704;
    v823 = v822 + v593;
    v705 = v589 + v772 + v704;
    LODWORD(v594) = (v823 ^ v770) >> 24;
    LODWORD(v590) = (__int64)(v588 ^ v705) >> 24;
    HIDWORD(v594) = ((unsigned int)(HIDWORD(v823) ^ HIDWORD(v770)) >> 24)
                  | (((unsigned int)v823 ^ (unsigned int)v770) << 8);
    HIDWORD(v590) = ((unsigned int)((v588 ^ v705) >> 32) >> 24) | (((unsigned int)v588 ^ (unsigned int)v705) << 8);
    HIDWORD(v581) = (v580 ^ (v771 + v641)) >> 31;
    v184 = v590 + v766 + v219;
    v767 = v594 + v204 + v212;
    LODWORD(v183) = HIDWORD(v204) ^ HIDWORD(v772) ^ (v594 + v204 + v212);
    HIDWORD(v183) = v204 ^ v772 ^ HIDWORD(v767);
    LODWORD(v581) = (2 * (v580 ^ (v771 + v641))) | ((HIDWORD(v580) ^ ((unsigned __int64)(v771 + v641) >> 32)) >> 31);
    LODWORD(v591) = (__int64)(v589 ^ v184) >> 16;
    HIDWORD(v584) = (v583 ^ v673) >> 31;
    HIDWORD(v595) = HIWORD(HIDWORD(v183)) | ((_DWORD)v183 << 16);
    LODWORD(v595) = v183 >> 16;
    HIDWORD(v591) = ((unsigned int)((v589 ^ v184) >> 32) >> 16) | (((unsigned int)v589 ^ (unsigned int)v184) << 16);
    LODWORD(v584) = (2 * (v583 ^ v673)) | ((unsigned int)(HIDWORD(v583) ^ HIDWORD(v673)) >> 31);
    v185 = v581 + v216 + v583 + v182;
    LODWORD(v597) = (v587 ^ v185) >> 32;
    HIDWORD(v597) = v587 ^ v185;
    v186 = v590 ^ (v591 + v705);
    HIDWORD(v598) = ((unsigned int)(((v597 + v255) ^ v581) >> 32) >> 24)
                  | ((((_DWORD)v597 + (_DWORD)v255) ^ (unsigned int)v581) << 8);
    LODWORD(v598) = (__int64)((v597 + v255) ^ v581) >> 24;
    v228 = v584 + v227 + v800;
    LODWORD(v601) = (v228 ^ v578) >> 32;
    HIDWORD(v601) = v228 ^ v578;
    HIDWORD(v592) = v186 >> 31;
    v187 = v584 ^ (v601 + v771 + v641);
    LODWORD(v602) = v187 >> 24;
    LODWORD(v592) = (2 * v186) | (HIDWORD(v186) >> 31);
    HIDWORD(v602) = HIBYTE(HIDWORD(v187)) | ((_DWORD)v187 << 8);
    HIDWORD(v152) = v232 + v185 + v598;
    LODWORD(v171) = (v232 + v185 + v598) >> 32;
    LODWORD(v599) = (((unsigned int)v597 ^ HIDWORD(v152)) >> 16)
                  | (((unsigned int)v587 ^ (unsigned int)v185 ^ (unsigned int)v171) << 16);
    v188 = v601 ^ (v602 + v228 + v208);
    HIDWORD(v599) = (((unsigned int)v587 ^ (unsigned int)v185 ^ (unsigned int)v171) >> 16)
                  | (((unsigned int)v597 ^ HIDWORD(v152)) << 16);
    LODWORD(v603) = v188 >> 16;
    HIDWORD(v603) = HIWORD(HIDWORD(v188)) | ((_DWORD)v188 << 16);
    HIDWORD(v596) = (v594 ^ (v823 + v595)) >> 31;
    v189 = v598 ^ (v597 + v255 + v599);
    HIDWORD(v600) = v189 >> 31;
    LODWORD(v596) = (2 * (v594 ^ (v823 + v595)))
                  | ((unsigned int)((v594 ^ (unsigned __int64)(v823 + v595)) >> 32) >> 31);
    v190 = v603 + v601 + v771 + v641;
    LODWORD(v600) = (2 * v189) | (HIDWORD(v189) >> 31);
    HIDWORD(v604) = (v602 ^ v190) >> 31;
    LODWORD(v604) = (2 * (v602 ^ v190)) | ((unsigned int)(HIDWORD(v602) ^ HIDWORD(v190)) >> 31);
    v213 = v592 + v207 + v602 + v228 + v208;
    v200 = v596 + v199 + v184;
    v220 = v223 + v604 + v232 + v185 + v598;
    LODWORD(v611) = (v595 ^ v220) >> 32;
    HIDWORD(v611) = v595 ^ v220;
    HIDWORD(v608) = v591 ^ (v600 + v233 + v767);
    LODWORD(v614) = (v599 ^ v213) >> 32;
    HIDWORD(v614) = v599 ^ v213;
    LODWORD(v605) = (v603 ^ v200) >> 32;
    HIDWORD(v605) = v603 ^ v200;
    LODWORD(v608) = (v591 ^ (unsigned __int64)(v600 + v233 + v767)) >> 32;
    v229 = v614 + v823 + v595;
    HIDWORD(v185) = v608 + v190;
    LODWORD(v190) = (unsigned __int64)(v608 + v190) >> 32;
    v191 = v604 ^ (v611 + v591 + v705);
    v217 = __PAIR64__(v190, HIDWORD(v185));
    LODWORD(v609) = __SPAIR64__(HIDWORD(v600) ^ (unsigned int)v190, (unsigned int)v600 ^ HIDWORD(v185)) >> 24;
    LODWORD(v612) = v191 >> 24;
    LODWORD(v615) = (__int64)(v592 ^ v229) >> 24;
    LODWORD(v606) = (__int64)(v596 ^ (v605 + __PAIR64__(v602, (int)v597 + (int)v255 + (int)v599))) >> 24;
    HIDWORD(v612) = HIBYTE(HIDWORD(v191)) | ((_DWORD)v191 << 8);
    HIDWORD(v606) = ((unsigned int)((v596 ^ (v605 + __PAIR64__(v602, (int)v597 + (int)v255 + (int)v599))) >> 32) >> 24)
                  | (((unsigned int)v596 ^ ((_DWORD)v605 + (_DWORD)v597 + (_DWORD)v255 + (_DWORD)v599)) << 8);
    HIDWORD(v609) = ((HIDWORD(v600) ^ (unsigned int)v190) >> 24) | (((unsigned int)v600 ^ HIDWORD(v185)) << 8);
    HIDWORD(v615) = ((unsigned int)((v592 ^ v229) >> 32) >> 24) | (((unsigned int)v592 ^ (unsigned int)v229) << 8);
    v192 = v202 + v213;
    v214 = v612 + v209 + v220;
    v210 = v606 + v225 + v200;
    v193 = v608 ^ (v609 + v234 + v600 + v233 + v767);
    v205 = v615 + v192;
    LODWORD(v613) = (__int64)(v611 ^ v214) >> 16;
    LODWORD(v607) = (v605 ^ v210) >> 16;
    LODWORD(v610) = v193 >> 16;
    LODWORD(v616) = (v614 ^ (v615 + v192)) >> 16;
    HIDWORD(v613) = ((unsigned int)((v611 ^ v214) >> 32) >> 16) | (((unsigned int)v611 ^ (unsigned int)v214) << 16);
    HIDWORD(v607) = (((unsigned int)v603 ^ (unsigned int)v200 ^ HIDWORD(v210)) >> 16)
                  | (((unsigned int)v605 ^ (unsigned int)v210) << 16);
    HIDWORD(v610) = HIWORD(HIDWORD(v193)) | ((_DWORD)v193 << 16);
    HIDWORD(v616) = ((unsigned int)(HIDWORD(v614) ^ HIDWORD(v205)) >> 16)
                  | (((unsigned int)v614 ^ (unsigned int)v205) << 16);
    v194 = v607 + v605 + __PAIR64__(v602, (int)v597 + (int)v255 + (int)v599);
    v195 = v612 ^ (v613 + v611 + v591 + v705);
    v196 = v609 ^ (v610 + v217);
    HIDWORD(v774) = (__int64)(v606 ^ v194) >> 31;
    HIDWORD(v776) = v195 >> 31;
    HIDWORD(v775) = v196 >> 31;
    HIDWORD(v773) = (__int64)(v615 ^ (v616 + v229)) >> 31;
    LODWORD(v774) = (2 * (v606 ^ v194)) | ((unsigned int)((v606 ^ v194) >> 32) >> 31);
    LODWORD(v776) = (2 * v195) | (HIDWORD(v195) >> 31);
    LODWORD(v775) = (2 * v196) | (HIDWORD(v196) >> 31);
    LODWORD(v773) = (2 * (v615 ^ (v616 + v229))) | ((unsigned int)((v615 ^ (v616 + v229)) >> 32) >> 31);
    v221 = v210 ^ (v613 + v611 + v591 + v705) ^ v842;
    v201 = v844 ^ v214 ^ v194;
    v206 = v847 ^ v774 ^ v613;
    v218 = v776 ^ v607 ^ v849;
    v16 = HIDWORD(v845) ^ HIDWORD(v205) ^ ((v610 + v217) >> 32);
    v15 = v845 ^ v205 ^ (v610 + v217);
    v13 = v843 ^ (v609 + v234 + v600 + v233 + v767) ^ (v616 + v229);
    v215 = v848 ^ v775 ^ v616;
    v211 = v846 ^ v773 ^ v610;
    *a1 = v221;
    *((_DWORD *)a1 + 6) = v15;
    *((_DWORD *)a1 + 7) = v16;
    a1[2] = v201;
    a1[1] = v13;
    result = v847 ^ v774 ^ v613;
    v235 += (unsigned int)v778;
    a1[5] = v206;
    HIDWORD(v196) = v777;
    v777 -= v778;
    a1[7] = v218;
    a1[6] = v215;
    a1[4] = v211;
    if ( !HIDWORD(v196) )
      break;
    v14 = v201;
    v849 ^= v776 ^ v607;
    v848 ^= v775 ^ v616;
    v847 ^= v774 ^ v613;
    v846 ^= v773 ^ v610;
    v845 = __PAIR64__(v16, v15);
    v844 = v201;
    v843 ^= (v609 + v234 + v600 + v233 + v767) ^ (v616 + v229);
    v842 ^= v210 ^ (v613 + v611 + v591 + v705);
  }
  return result;
}
