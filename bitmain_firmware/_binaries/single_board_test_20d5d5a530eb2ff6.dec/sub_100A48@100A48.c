void __fastcall sub_100A48(__int64 *a1, int a2, int a3)
{
  int v3; // r7
  int v4; // r2
  unsigned int v5; // r0
  int v6; // r3
  unsigned int v7; // r12
  int v8; // r9
  int v9; // lr
  __int64 v10; // r6
  __int64 v11; // r10
  int v12; // r0
  __int64 v13; // r8
  int v14; // r3
  unsigned int v15; // r2
  unsigned __int64 v16; // r6
  unsigned int v17; // r1
  unsigned __int64 v18; // r2
  int v19; // r4
  __int64 v20; // krF0_8
  int v21; // r12
  unsigned int v22; // r1
  unsigned int v23; // r5
  unsigned __int64 v24; // r0
  __int64 v25; // r8
  unsigned __int64 v26; // r10
  unsigned __int64 v27; // kr100_8
  unsigned __int64 v28; // r0
  unsigned int v29; // r12
  __int64 v30; // r8
  unsigned __int64 v31; // r0
  __int64 v32; // r4
  __int64 v33; // r4
  __int64 v34; // r10
  signed __int64 v35; // r0
  int v36; // r12
  int v37; // lr
  __int64 v38; // kr128_8
  __int64 v39; // r8
  __int64 v40; // r8
  unsigned __int64 v41; // r2
  signed __int64 v42; // r4
  int v43; // r12
  bool v44; // cf
  signed __int64 v45; // kr130_8
  unsigned __int64 v46; // r8
  __int64 v47; // r10
  char *v48; // r12
  __int64 v49; // r8
  unsigned int v50; // r3
  unsigned int v51; // r1
  __int64 v52; // r6
  unsigned int v53; // r0
  unsigned int v54; // r3
  __int64 v55; // r4
  __int64 v56; // r4
  __int64 v57; // r8
  __int64 v58; // kr138_8
  __int64 v59; // r0
  __int64 v60; // r4
  __int64 v61; // r10
  __int64 v62; // r6
  __int64 v63; // r8
  __int64 v64; // r0
  __int64 v65; // r4
  unsigned __int64 v66; // kr148_8
  __int64 v67; // kr150_8
  unsigned __int64 v68; // r8
  __int64 v69; // r10
  __int64 v70; // r10
  __int64 v71; // r8
  __int64 v72; // r6
  __int64 v73; // r6
  __int64 v74; // r10
  __int64 v75; // r0
  __int64 v76; // r4
  __int64 v77; // r0
  __int64 v78; // r2
  __int64 v79; // r6
  unsigned __int64 v80; // r10
  __int64 v81; // r10
  unsigned __int64 v82; // r0
  __int64 v83; // [sp+0h] [bp-DBCh]
  __int64 v84; // [sp+8h] [bp-DB4h]
  unsigned __int64 v85; // [sp+10h] [bp-DACh]
  unsigned __int64 v86; // [sp+10h] [bp-DACh]
  __int64 v87; // [sp+10h] [bp-DACh]
  __int64 v88; // [sp+10h] [bp-DACh]
  __int64 v89; // [sp+18h] [bp-DA4h]
  __int64 v90; // [sp+20h] [bp-D9Ch]
  __int64 v91; // [sp+20h] [bp-D9Ch]
  unsigned __int64 v92; // [sp+28h] [bp-D94h]
  __int64 v93; // [sp+28h] [bp-D94h]
  unsigned __int64 v94; // [sp+28h] [bp-D94h]
  __int64 v95; // [sp+28h] [bp-D94h]
  __int64 v96; // [sp+30h] [bp-D8Ch]
  unsigned __int64 v97; // [sp+30h] [bp-D8Ch]
  signed __int64 v98; // [sp+30h] [bp-D8Ch]
  __int64 v99; // [sp+30h] [bp-D8Ch]
  __int64 v100; // [sp+30h] [bp-D8Ch]
  unsigned __int64 v101; // [sp+38h] [bp-D84h]
  __int64 v102; // [sp+38h] [bp-D84h]
  unsigned int v103; // [sp+38h] [bp-D84h]
  unsigned __int64 v104; // [sp+40h] [bp-D7Ch]
  __int64 v105; // [sp+40h] [bp-D7Ch]
  unsigned __int64 v106; // [sp+48h] [bp-D74h]
  unsigned __int64 v107; // [sp+48h] [bp-D74h]
  __int64 v108; // [sp+48h] [bp-D74h]
  unsigned __int64 v109; // [sp+48h] [bp-D74h]
  __int64 v110; // [sp+48h] [bp-D74h]
  signed __int64 v111; // [sp+48h] [bp-D74h]
  unsigned __int64 v112; // [sp+50h] [bp-D6Ch]
  __int64 v113; // [sp+50h] [bp-D6Ch]
  unsigned __int64 v114; // [sp+50h] [bp-D6Ch]
  __int64 v115; // [sp+50h] [bp-D6Ch]
  __int64 v116; // [sp+50h] [bp-D6Ch]
  unsigned __int64 v117; // [sp+50h] [bp-D6Ch]
  __int64 v118; // [sp+50h] [bp-D6Ch]
  unsigned __int64 v119; // [sp+58h] [bp-D64h]
  __int64 v120; // [sp+58h] [bp-D64h]
  __int64 v121; // [sp+58h] [bp-D64h]
  unsigned __int64 v122; // [sp+58h] [bp-D64h]
  __int64 v123; // [sp+60h] [bp-D5Ch]
  __int64 v124; // [sp+60h] [bp-D5Ch]
  __int64 v125; // [sp+60h] [bp-D5Ch]
  unsigned __int64 v126; // [sp+60h] [bp-D5Ch]
  __int64 v127; // [sp+68h] [bp-D54h]
  __int64 v128; // [sp+70h] [bp-D4Ch]
  __int64 v129; // [sp+70h] [bp-D4Ch]
  __int64 v130; // [sp+70h] [bp-D4Ch]
  __int64 v131; // [sp+70h] [bp-D4Ch]
  __int64 v132; // [sp+70h] [bp-D4Ch]
  unsigned __int64 v133; // [sp+70h] [bp-D4Ch]
  __int64 v134; // [sp+70h] [bp-D4Ch]
  __int64 v135; // [sp+70h] [bp-D4Ch]
  unsigned __int64 v136; // [sp+70h] [bp-D4Ch]
  __int64 v137; // [sp+78h] [bp-D44h]
  __int64 v138; // [sp+78h] [bp-D44h]
  unsigned __int64 v139; // [sp+78h] [bp-D44h]
  __int64 v140; // [sp+78h] [bp-D44h]
  __int64 v141; // [sp+78h] [bp-D44h]
  __int64 v142; // [sp+78h] [bp-D44h]
  __int64 v143; // [sp+80h] [bp-D3Ch]
  __int64 v144; // [sp+80h] [bp-D3Ch]
  unsigned __int64 v145; // [sp+80h] [bp-D3Ch]
  __int64 v146; // [sp+80h] [bp-D3Ch]
  __int64 v147; // [sp+88h] [bp-D34h]
  unsigned __int64 v148; // [sp+88h] [bp-D34h]
  __int64 v149; // [sp+88h] [bp-D34h]
  __int64 v150; // [sp+90h] [bp-D2Ch]
  unsigned __int64 v151; // [sp+98h] [bp-D24h]
  __int64 v152; // [sp+98h] [bp-D24h]
  signed __int64 v153; // [sp+98h] [bp-D24h]
  unsigned __int64 v154; // [sp+98h] [bp-D24h]
  __int64 v155; // [sp+98h] [bp-D24h]
  __int64 v156; // [sp+A0h] [bp-D1Ch]
  __int64 v157; // [sp+A8h] [bp-D14h]
  __int64 v158; // [sp+A8h] [bp-D14h]
  unsigned __int64 v159; // [sp+B0h] [bp-D0Ch]
  unsigned __int64 v160; // [sp+B0h] [bp-D0Ch]
  __int64 v161; // [sp+B0h] [bp-D0Ch]
  __int64 v162; // [sp+B0h] [bp-D0Ch]
  unsigned __int64 v163; // [sp+B8h] [bp-D04h]
  __int64 v164; // [sp+B8h] [bp-D04h]
  __int64 v165; // [sp+B8h] [bp-D04h]
  unsigned __int64 v166; // [sp+B8h] [bp-D04h]
  __int64 v167; // [sp+C0h] [bp-CFCh]
  __int64 v168; // [sp+C0h] [bp-CFCh]
  signed __int64 v169; // [sp+C0h] [bp-CFCh]
  __int64 v170; // [sp+C0h] [bp-CFCh]
  __int64 v171; // [sp+C0h] [bp-CFCh]
  __int64 v172; // [sp+C8h] [bp-CF4h]
  unsigned int v173; // [sp+D0h] [bp-CECh]
  unsigned __int64 v174; // [sp+D8h] [bp-CE4h]
  __int64 v175; // [sp+D8h] [bp-CE4h]
  __int64 v176; // [sp+D8h] [bp-CE4h]
  unsigned int v177; // [sp+E0h] [bp-CDCh]
  __int64 v178; // [sp+E0h] [bp-CDCh]
  int v179; // [sp+E4h] [bp-CD8h]
  __int64 v180; // [sp+E8h] [bp-CD4h]
  unsigned int v181; // [sp+E8h] [bp-CD4h]
  __int64 v182; // [sp+178h] [bp-C44h]
  __int64 v183; // [sp+188h] [bp-C34h]
  __int64 v184; // [sp+1E0h] [bp-BDCh]
  __int64 v185; // [sp+1E8h] [bp-BD4h]
  __int64 v186; // [sp+1F0h] [bp-BCCh]
  __int64 v187; // [sp+1F8h] [bp-BC4h]
  __int64 v188; // [sp+200h] [bp-BBCh]
  unsigned __int64 v189; // [sp+208h] [bp-BB4h]
  __int64 v190; // [sp+210h] [bp-BACh]
  __int64 v191; // [sp+218h] [bp-BA4h]
  __int64 v192; // [sp+220h] [bp-B9Ch]
  __int64 v193; // [sp+228h] [bp-B94h]
  __int64 v194; // [sp+230h] [bp-B8Ch]
  __int64 v195; // [sp+238h] [bp-B84h]
  __int64 v196; // [sp+240h] [bp-B7Ch]
  __int64 v197; // [sp+248h] [bp-B74h]
  __int64 v198; // [sp+250h] [bp-B6Ch]
  __int64 v199; // [sp+258h] [bp-B64h]
  __int64 v200; // [sp+260h] [bp-B5Ch]
  __int64 v201; // [sp+268h] [bp-B54h]
  __int64 v202; // [sp+270h] [bp-B4Ch]
  __int64 v203; // [sp+278h] [bp-B44h]
  __int64 v204; // [sp+280h] [bp-B3Ch]
  __int64 v205; // [sp+288h] [bp-B34h]
  __int64 v206; // [sp+290h] [bp-B2Ch]
  __int64 v207; // [sp+298h] [bp-B24h]
  __int64 v208; // [sp+2A0h] [bp-B1Ch]
  __int64 v209; // [sp+2A8h] [bp-B14h]
  __int64 v210; // [sp+2B0h] [bp-B0Ch]
  __int64 v211; // [sp+2B8h] [bp-B04h]
  __int64 v212; // [sp+2C0h] [bp-AFCh]
  __int64 v213; // [sp+2C8h] [bp-AF4h]
  __int64 v214; // [sp+2D0h] [bp-AECh]
  __int64 v215; // [sp+2D8h] [bp-AE4h]
  __int64 v216; // [sp+2E0h] [bp-ADCh]
  __int64 v217; // [sp+2E8h] [bp-AD4h]
  __int64 v218; // [sp+2F0h] [bp-ACCh]
  __int64 v219; // [sp+2F8h] [bp-AC4h]
  __int64 v220; // [sp+300h] [bp-ABCh]
  __int64 v221; // [sp+308h] [bp-AB4h]
  __int64 v222; // [sp+310h] [bp-AACh]
  __int64 v223; // [sp+318h] [bp-AA4h]
  __int64 v224; // [sp+320h] [bp-A9Ch]
  __int64 v225; // [sp+328h] [bp-A94h]
  __int64 v226; // [sp+330h] [bp-A8Ch]
  __int64 v227; // [sp+338h] [bp-A84h]
  __int64 v228; // [sp+340h] [bp-A7Ch]
  __int64 v229; // [sp+348h] [bp-A74h]
  __int64 v230; // [sp+350h] [bp-A6Ch]
  __int64 v231; // [sp+358h] [bp-A64h]
  __int64 v232; // [sp+360h] [bp-A5Ch]
  __int64 v233; // [sp+368h] [bp-A54h]
  __int64 v234; // [sp+370h] [bp-A4Ch]
  __int64 v235; // [sp+378h] [bp-A44h]
  __int64 v236; // [sp+380h] [bp-A3Ch]
  __int64 v237; // [sp+388h] [bp-A34h]
  __int64 v238; // [sp+390h] [bp-A2Ch]
  __int64 v239; // [sp+398h] [bp-A24h]
  __int64 v240; // [sp+3A0h] [bp-A1Ch]
  __int64 v241; // [sp+3A8h] [bp-A14h]
  __int64 v242; // [sp+3B0h] [bp-A0Ch]
  __int64 v243; // [sp+3B8h] [bp-A04h]
  __int64 v244; // [sp+3C0h] [bp-9FCh]
  __int64 v245; // [sp+3C8h] [bp-9F4h]
  __int64 v246; // [sp+3D0h] [bp-9ECh]
  __int64 v247; // [sp+3D8h] [bp-9E4h]
  __int64 v248; // [sp+3E0h] [bp-9DCh]
  __int64 v249; // [sp+3E8h] [bp-9D4h]
  __int64 v250; // [sp+3F0h] [bp-9CCh]
  __int64 v251; // [sp+3F8h] [bp-9C4h]
  __int64 v252; // [sp+400h] [bp-9BCh]
  __int64 v253; // [sp+408h] [bp-9B4h]
  __int64 v254; // [sp+410h] [bp-9ACh]
  __int64 v255; // [sp+418h] [bp-9A4h]
  __int64 v256; // [sp+420h] [bp-99Ch]
  __int64 v257; // [sp+428h] [bp-994h]
  __int64 v258; // [sp+430h] [bp-98Ch]
  __int64 v259; // [sp+438h] [bp-984h]
  __int64 v260; // [sp+440h] [bp-97Ch]
  __int64 v261; // [sp+448h] [bp-974h]
  __int64 v262; // [sp+450h] [bp-96Ch]
  __int64 v263; // [sp+458h] [bp-964h]
  __int64 v264; // [sp+460h] [bp-95Ch]
  __int64 v265; // [sp+468h] [bp-954h]
  __int64 v266; // [sp+470h] [bp-94Ch]
  __int64 v267; // [sp+478h] [bp-944h]
  __int64 v268; // [sp+480h] [bp-93Ch]
  __int64 v269; // [sp+488h] [bp-934h]
  __int64 v270; // [sp+490h] [bp-92Ch]
  __int64 v271; // [sp+498h] [bp-924h]
  __int64 v272; // [sp+4A0h] [bp-91Ch]
  __int64 v273; // [sp+4A8h] [bp-914h]
  __int64 v274; // [sp+4B0h] [bp-90Ch]
  __int64 v275; // [sp+4B8h] [bp-904h]
  __int64 v276; // [sp+4C0h] [bp-8FCh]
  __int64 v277; // [sp+4C8h] [bp-8F4h]
  __int64 v278; // [sp+4D0h] [bp-8ECh]
  __int64 v279; // [sp+4D8h] [bp-8E4h]
  __int64 v280; // [sp+4E0h] [bp-8DCh]
  __int64 v281; // [sp+4E8h] [bp-8D4h]
  __int64 v282; // [sp+4F0h] [bp-8CCh]
  __int64 v283; // [sp+4F8h] [bp-8C4h]
  __int64 v284; // [sp+500h] [bp-8BCh]
  __int64 v285; // [sp+508h] [bp-8B4h]
  __int64 v286; // [sp+510h] [bp-8ACh]
  __int64 v287; // [sp+518h] [bp-8A4h]
  __int64 v288; // [sp+520h] [bp-89Ch]
  __int64 v289; // [sp+528h] [bp-894h]
  __int64 v290; // [sp+530h] [bp-88Ch]
  __int64 v291; // [sp+538h] [bp-884h]
  __int64 v292; // [sp+540h] [bp-87Ch]
  __int64 v293; // [sp+548h] [bp-874h]
  __int64 v294; // [sp+550h] [bp-86Ch]
  __int64 v295; // [sp+558h] [bp-864h]
  __int64 v296; // [sp+560h] [bp-85Ch]
  __int64 v297; // [sp+568h] [bp-854h]
  __int64 v298; // [sp+570h] [bp-84Ch]
  __int64 v299; // [sp+578h] [bp-844h]
  __int64 v300; // [sp+580h] [bp-83Ch]
  __int64 v301; // [sp+588h] [bp-834h]
  __int64 v302; // [sp+590h] [bp-82Ch]
  __int64 v303; // [sp+598h] [bp-824h]
  __int64 v304; // [sp+5A0h] [bp-81Ch]
  __int64 v305; // [sp+5A8h] [bp-814h]
  __int64 v306; // [sp+5B0h] [bp-80Ch]
  __int64 v307; // [sp+5B8h] [bp-804h]
  __int64 v308; // [sp+5C0h] [bp-7FCh]
  __int64 v309; // [sp+5C8h] [bp-7F4h]
  __int64 v310; // [sp+5D0h] [bp-7ECh]
  __int64 v311; // [sp+5D8h] [bp-7E4h]
  __int64 v312; // [sp+5E0h] [bp-7DCh]
  __int64 v313; // [sp+5E8h] [bp-7D4h]
  __int64 v314; // [sp+5F0h] [bp-7CCh]
  __int64 v315; // [sp+5F8h] [bp-7C4h]
  __int64 v316; // [sp+600h] [bp-7BCh]
  __int64 v317; // [sp+608h] [bp-7B4h]
  __int64 v318; // [sp+610h] [bp-7ACh]
  __int64 v319; // [sp+618h] [bp-7A4h]
  __int64 v320; // [sp+620h] [bp-79Ch]
  __int64 v321; // [sp+628h] [bp-794h]
  __int64 v322; // [sp+630h] [bp-78Ch]
  __int64 v323; // [sp+638h] [bp-784h]
  __int64 v324; // [sp+640h] [bp-77Ch]
  __int64 v325; // [sp+648h] [bp-774h]
  __int64 v326; // [sp+650h] [bp-76Ch]
  __int64 v327; // [sp+658h] [bp-764h]
  __int64 v328; // [sp+660h] [bp-75Ch]
  __int64 v329; // [sp+668h] [bp-754h]
  __int64 v330; // [sp+670h] [bp-74Ch]
  __int64 v331; // [sp+678h] [bp-744h]
  __int64 v332; // [sp+680h] [bp-73Ch]
  __int64 v333; // [sp+688h] [bp-734h]
  __int64 v334; // [sp+690h] [bp-72Ch]
  __int64 v335; // [sp+698h] [bp-724h]
  __int64 v336; // [sp+6A0h] [bp-71Ch]
  __int64 v337; // [sp+6A8h] [bp-714h]
  __int64 v338; // [sp+6B0h] [bp-70Ch]
  __int64 v339; // [sp+6B8h] [bp-704h]
  __int64 v340; // [sp+6C0h] [bp-6FCh]
  __int64 v341; // [sp+6C8h] [bp-6F4h]
  __int64 v342; // [sp+6D0h] [bp-6ECh]
  __int64 v343; // [sp+6D8h] [bp-6E4h]
  __int64 v344; // [sp+6E0h] [bp-6DCh]
  __int64 v345; // [sp+6E8h] [bp-6D4h]
  __int64 v346; // [sp+6F0h] [bp-6CCh]
  __int64 v347; // [sp+6F8h] [bp-6C4h]
  __int64 v348; // [sp+700h] [bp-6BCh]
  __int64 v349; // [sp+708h] [bp-6B4h]
  __int64 v350; // [sp+710h] [bp-6ACh]
  __int64 v351; // [sp+718h] [bp-6A4h]
  __int64 v352; // [sp+720h] [bp-69Ch]
  int v353; // [sp+750h] [bp-66Ch]
  unsigned __int8 v354; // [sp+754h] [bp-668h]
  int v355; // [sp+758h] [bp-664h]
  __int64 v356; // [sp+768h] [bp-654h]
  int v357; // [sp+770h] [bp-64Ch]
  __int64 v358; // [sp+7A8h] [bp-614h]
  unsigned __int64 v359; // [sp+7B0h] [bp-60Ch]
  int v360; // [sp+7B8h] [bp-604h]
  int v361; // [sp+7F0h] [bp-5CCh]
  int v362; // [sp+800h] [bp-5BCh]
  __int64 v363; // [sp+870h] [bp-54Ch]
  __int64 v364; // [sp+8A0h] [bp-51Ch]
  __int64 v365; // [sp+8A8h] [bp-514h]
  __int64 v366; // [sp+8B0h] [bp-50Ch]
  __int64 v367; // [sp+8B8h] [bp-504h]
  __int64 v368; // [sp+8D8h] [bp-4E4h]
  __int64 v369; // [sp+8E0h] [bp-4DCh]
  __int64 v370; // [sp+8E8h] [bp-4D4h]
  __int64 v371; // [sp+8F0h] [bp-4CCh]
  __int64 v372; // [sp+8F8h] [bp-4C4h]
  _BYTE v373[24]; // [sp+900h] [bp-4BCh]
  __int64 v374; // [sp+928h] [bp-494h]
  __int64 v375; // [sp+930h] [bp-48Ch]
  __int64 v376; // [sp+938h] [bp-484h]
  __int64 v377; // [sp+940h] [bp-47Ch]
  __int64 v378; // [sp+948h] [bp-474h]
  __int64 v379; // [sp+950h] [bp-46Ch]
  __int64 v380; // [sp+958h] [bp-464h]
  __int64 v381; // [sp+960h] [bp-45Ch]
  unsigned int v382; // [sp+974h] [bp-448h]
  __int64 v383; // [sp+978h] [bp-444h]
  __int64 v384; // [sp+980h] [bp-43Ch]
  __int64 v385; // [sp+988h] [bp-434h]
  __int64 v386; // [sp+990h] [bp-42Ch]
  __int64 v387; // [sp+998h] [bp-424h]
  __int64 v388; // [sp+9A0h] [bp-41Ch]
  unsigned __int64 v389; // [sp+9B8h] [bp-404h]
  __int64 v390; // [sp+9C0h] [bp-3FCh]
  __int64 v391; // [sp+9C8h] [bp-3F4h]
  __int64 v392; // [sp+9D0h] [bp-3ECh]
  __int64 v393; // [sp+9D8h] [bp-3E4h]
  __int64 v394; // [sp+9E0h] [bp-3DCh]
  __int64 v395; // [sp+9E8h] [bp-3D4h]
  __int64 v396; // [sp+9F0h] [bp-3CCh]
  __int64 v397; // [sp+A18h] [bp-3A4h]
  __int64 v398; // [sp+A20h] [bp-39Ch]
  __int64 v399; // [sp+A28h] [bp-394h]
  __int64 v400; // [sp+A30h] [bp-38Ch]
  __int64 v401; // [sp+A38h] [bp-384h]
  __int64 v402; // [sp+A40h] [bp-37Ch]
  __int64 v403; // [sp+A58h] [bp-364h]
  __int64 v404; // [sp+A60h] [bp-35Ch]
  __int64 v405; // [sp+A68h] [bp-354h]
  __int64 v406; // [sp+A70h] [bp-34Ch]
  __int64 v407; // [sp+A78h] [bp-344h]
  __int64 v408; // [sp+A80h] [bp-33Ch]
  __int64 v409; // [sp+A88h] [bp-334h]
  __int64 v410; // [sp+A90h] [bp-32Ch]
  __int64 v411; // [sp+AB8h] [bp-304h]
  __int64 v412; // [sp+AC0h] [bp-2FCh]
  __int64 v413; // [sp+AC8h] [bp-2F4h]
  __int64 v414; // [sp+AD0h] [bp-2ECh]
  __int64 v415; // [sp+AD8h] [bp-2E4h]
  __int64 v416; // [sp+AE0h] [bp-2DCh]
  __int64 v417; // [sp+AE8h] [bp-2D4h]
  __int64 v418; // [sp+AF0h] [bp-2CCh]
  __int64 v419; // [sp+B08h] [bp-2B4h]
  __int64 v420; // [sp+B10h] [bp-2ACh]
  __int64 v421; // [sp+B18h] [bp-2A4h]
  __int64 v422; // [sp+B20h] [bp-29Ch]
  __int64 v423; // [sp+B28h] [bp-294h]
  __int64 v424; // [sp+B30h] [bp-28Ch]
  __int64 v425; // [sp+B38h] [bp-284h]
  __int64 v426; // [sp+B40h] [bp-27Ch]
  __int64 v427; // [sp+B58h] [bp-264h]
  __int64 v428; // [sp+B60h] [bp-25Ch]
  __int64 v429; // [sp+B68h] [bp-254h]
  __int64 v430; // [sp+B70h] [bp-24Ch]
  __int64 v431; // [sp+B78h] [bp-244h]
  __int64 v432; // [sp+B80h] [bp-23Ch]
  __int64 v433; // [sp+B98h] [bp-224h]
  __int64 v434; // [sp+BA8h] [bp-214h]
  __int64 v435; // [sp+BB0h] [bp-20Ch]
  __int64 v436; // [sp+BB8h] [bp-204h]
  __int64 v437; // [sp+BC0h] [bp-1FCh]
  __int64 v438; // [sp+BC8h] [bp-1F4h]
  __int64 v439; // [sp+BD0h] [bp-1ECh]
  __int64 v440; // [sp+BD8h] [bp-1E4h]
  unsigned __int64 v441; // [sp+BE0h] [bp-1DCh]
  __int64 v442; // [sp+BF0h] [bp-1CCh]
  __int64 v443; // [sp+BF8h] [bp-1C4h]
  __int64 v444; // [sp+C00h] [bp-1BCh]
  __int64 v445; // [sp+C08h] [bp-1B4h]
  __int64 v446; // [sp+C10h] [bp-1ACh]
  unsigned __int64 v447; // [sp+C18h] [bp-1A4h]
  __int64 v448; // [sp+C20h] [bp-19Ch]
  __int64 v449; // [sp+C28h] [bp-194h]
  __int64 v450; // [sp+C30h] [bp-18Ch]
  __int64 v451; // [sp+C48h] [bp-174h]
  __int64 v452; // [sp+C50h] [bp-16Ch]
  __int64 v453; // [sp+C58h] [bp-164h]
  __int64 v454; // [sp+C60h] [bp-15Ch]
  __int64 v455; // [sp+C68h] [bp-154h]
  __int64 v456; // [sp+C70h] [bp-14Ch]
  __int64 v457; // [sp+C78h] [bp-144h]
  __int64 v458; // [sp+C90h] [bp-12Ch]
  __int64 v459; // [sp+C98h] [bp-124h]
  __int64 v460; // [sp+CA0h] [bp-11Ch]
  __int64 v461; // [sp+CA8h] [bp-114h]
  __int64 v462; // [sp+CB0h] [bp-10Ch]
  __int64 v463; // [sp+CB8h] [bp-104h]
  __int64 v464; // [sp+CC0h] [bp-FCh]
  __int64 v465; // [sp+CC8h] [bp-F4h]
  __int64 v466; // [sp+CD0h] [bp-ECh]
  int v467; // [sp+CDCh] [bp-E0h]
  __int64 v468; // [sp+CE8h] [bp-D4h]
  __int64 v469; // [sp+CF0h] [bp-CCh]
  __int64 v470; // [sp+CF8h] [bp-C4h]
  int v471; // [sp+D04h] [bp-B8h]
  __int64 v472; // [sp+D10h] [bp-ACh]
  int v473; // [sp+D1Ch] [bp-A0h]
  __int64 v474; // [sp+D20h] [bp-9Ch]
  __int64 v475; // [sp+D28h] [bp-94h]
  __int64 v476; // [sp+D30h] [bp-8Ch]
  __int64 v477; // [sp+D38h] [bp-84h]
  __int64 v478; // [sp+D40h] [bp-7Ch]
  __int64 v479; // [sp+D48h] [bp-74h]
  __int64 v480; // [sp+D50h] [bp-6Ch]
  __int64 v481; // [sp+D70h] [bp-4Ch]
  __int64 v482; // [sp+D78h] [bp-44h]
  __int64 v483; // [sp+D80h] [bp-3Ch]
  __int64 v484; // [sp+D88h] [bp-34h]
  __int64 v485; // [sp+D90h] [bp-2Ch]
  __int64 v486; // [sp+D98h] [bp-24h]
  int v487; // [sp+DA0h] [bp-1Ch]
  _QWORD *v488; // [sp+DA4h] [bp-18h]

  if ( a3 )
  {
    v186 = *a1;
    LODWORD(v128) = a2 + 128;
    v348 = a1[1];
    v351 = a1[2];
    v366 = a1[3];
    v187 = a1[4];
    v350 = a1[5];
    v352 = a1[6];
    v367 = a1[7];
    do
    {
      HIDWORD(v150) = *(unsigned __int8 *)(v128 - 128) << 24;
      LODWORD(v368) = v187 >> 14;
      LODWORD(v150) = 0;
      LODWORD(v369) = v187 >> 18;
      HIDWORD(v370) = v187 >> 9;
      HIDWORD(v368) = (HIDWORD(v187) >> 14) | ((_DWORD)v187 << 18);
      HIDWORD(v369) = (HIDWORD(v187) >> 18) | ((_DWORD)v187 << 14);
      LODWORD(v370) = ((_DWORD)v187 << 23) | (HIDWORD(v187) >> 9);
      LODWORD(v371) = v186 >> 28;
      HIDWORD(v372) = v186 >> 2;
      *(_QWORD *)&v373[4] = (unsigned int)(v186 >> 7);
      v174 = (*(unsigned __int8 *)(v128 - 122) << 8)
           | __PAIR64__(
               _byteswap_ulong(*(_DWORD *)(v128 - 128)),
               (*(unsigned __int8 *)(v128 - 123) << 16)
             | (*(unsigned __int8 *)(v128 - 124) << 24)
             | (unsigned int)*(unsigned __int8 *)(v128 - 121));
      *(_DWORD *)&v373[20] = *(unsigned __int8 *)(v128 - 119) << 16;
      v85 = v174 + (v370 ^ v368 ^ v369) + v367 + loc_1018C0 + (v187 & v350 ^ v352 & ~v187);
      *(_QWORD *)&v373[12] = *(unsigned __int8 *)(v128 - 120) << 24;
      LODWORD(v372) = ((_DWORD)v186 << 30) | (HIDWORD(v186) >> 2);
      HIDWORD(v371) = (HIDWORD(v186) >> 28) | (16 * v186);
      *(_DWORD *)v373 = ((_DWORD)v186 << 25) | (HIDWORD(v186) >> 7);
      LODWORD(v374) = (__int64)(v85 + v366) >> 14;
      v96 = v186 & v348;
      LODWORD(v375) = (__int64)(v85 + v366) >> 18;
      v354 = 0;
      HIDWORD(v376) = (__int64)(v85 + v366) >> 9;
      HIDWORD(v375) = ((unsigned int)((v85 + v366) >> 32) >> 18) | (((_DWORD)v85 + (_DWORD)v366) << 14);
      HIDWORD(v374) = ((unsigned int)((v85 + v366) >> 32) >> 14) | (((_DWORD)v85 + (_DWORD)v366) << 18);
      LODWORD(v376) = (((_DWORD)v85 + (_DWORD)v366) << 23) | ((unsigned int)((v85 + v366) >> 32) >> 9);
      v119 = v85 + v366;
      v353 = *(unsigned __int8 *)(v128 - 115) << 16;
      v355 = *(unsigned __int8 *)(v128 - 114) << 8;
      v3 = v128;
      v4 = *(unsigned __int8 *)(v128 - 113);
      v5 = v85 + (v348 & v351 ^ v186 & v348 ^ v186 & v351) + (*(_DWORD *)v373 ^ v371 ^ v372);
      v6 = *(unsigned __int8 *)(v128 - 117)
         | (*(unsigned __int8 *)(v128 - 118) << 8)
         | ((*(_QWORD *)&v373[8] | *(_QWORD *)&v373[16]) >> 32);
      v7 = (v85 + (v348 & v351 ^ v186 & v348 ^ v186 & v351) + (*(_QWORD *)v373 ^ v371 ^ v372)) >> 32;
      v8 = *(unsigned __int8 *)(v128 - 116) << 24;
      v382 = *(unsigned __int8 *)(v128 - 109);
      __pld((void *)v128);
      LODWORD(v377) = (v5 >> 28) | (16 * v7);
      HIDWORD(v378) = (v7 << 30) | (v5 >> 2);
      HIDWORD(v379) = (v7 << 25) | (v5 >> 7);
      __pld((void *)(v3 + 1));
      LODWORD(v379) = (v5 << 25) | (v7 >> 7);
      v104 = v85 + (v348 & v351 ^ v186 & v348 ^ v186 & v351) + (*(_QWORD *)v373 ^ v371 ^ v372);
      HIDWORD(v377) = (v7 >> 28) | (16 * v5);
      LODWORD(v378) = (v5 << 30) | (v7 >> 2);
      v9 = v3;
      HIDWORD(v10) = v354 | v6;
      LODWORD(v10) = v355 | v353 | v8 | v4;
      v89 = v10;
      v11 = v376 ^ v374 ^ v375;
      v12 = *(unsigned __int8 *)(v9 - 111);
      v13 = v10 + loc_1018C8 + v352;
      v14 = HIDWORD(v350) & ~HIDWORD(v119);
      HIDWORD(v10) = HIDWORD(v187) & HIDWORD(v119);
      HIDWORD(v380) = *(unsigned __int8 *)(v9 - 112) << 24;
      v15 = v350 & ~(_DWORD)v119 ^ v187 & v119;
      __pld((void *)(v9 + 2));
      HIDWORD(v381) = v12 << 16;
      v16 = v13 + v11 + __PAIR64__((unsigned int)v14 ^ HIDWORD(v10), v15);
      v101 = v16;
      LODWORD(v380) = (unsigned __int8)v150;
      LODWORD(v381) = (unsigned __int8)v150;
      LODWORD(v383) = (__int64)(v16 + v351) >> 14;
      v17 = (unsigned int)((v16 + v351) >> 32) >> 14;
      LODWORD(v384) = (__int64)(v16 + v351) >> 18;
      HIDWORD(v385) = (__int64)(v16 + v351) >> 9;
      v356 = *(unsigned __int8 *)(v9 - 107) << 16;
      LODWORD(v11) = (v16 + (v96 ^ v104 & (v186 ^ v348)) + (v379 ^ v377 ^ v378)) >> 32;
      HIDWORD(v13) = v16 + (v96 ^ v104 & (v186 ^ v348)) + (v379 ^ v377 ^ v378);
      LODWORD(v13) = (v16 + v351) >> 32;
      HIDWORD(v16) = v16 + v351;
      v92 = __PAIR64__(v13, (int)v16 + (int)v351);
      HIDWORD(v383) = v17 | (((_DWORD)v16 + (_DWORD)v351) << 18);
      HIDWORD(v384) = ((unsigned int)v13 >> 18) | (((_DWORD)v16 + (_DWORD)v351) << 14);
      LODWORD(v386) = (__int64)(v101 + (v96 ^ v104 & (v186 ^ v348)) + (v379 ^ v377 ^ v378)) >> 28;
      HIDWORD(v387) = (__int64)(v101 + (v96 ^ v104 & (v186 ^ v348)) + (v379 ^ v377 ^ v378)) >> 2;
      v357 = *(unsigned __int8 *)(v9 - 106) << 8;
      LODWORD(v16) = v101 + (v96 ^ v104 & (v186 ^ v348)) + (v379 ^ v377 ^ v378);
      LODWORD(v385) = (HIDWORD(v16) << 23) | ((unsigned int)v13 >> 9);
      HIDWORD(v388) = (__int64)(v101 + (v96 ^ v104 & (v186 ^ v348)) + (v379 ^ v377 ^ v378)) >> 7;
      v18 = __PAIR64__(v382, (unsigned __int8)v150)
          | __PAIR64__(*(unsigned __int8 *)(v9 - 110) << 8, (unsigned __int8)v150)
          | v380
          | v381
          | *(unsigned __int8 *)(v9 - 105);
      HIDWORD(v386) = ((unsigned int)((v101 + (v96 ^ v104 & (v186 ^ v348)) + (v379 ^ v377 ^ v378)) >> 32) >> 28)
                    | (16 * HIDWORD(v13));
      LODWORD(v387) = ((_DWORD)v16 << 30) | ((unsigned int)v11 >> 2);
      v19 = v128;
      v20 = *(unsigned __int8 *)(v9 - 108) << 24;
      __pld((void *)(v128 + 3));
      LODWORD(v388) = ((_DWORD)v16 << 25) | ((unsigned int)v11 >> 7);
      v106 = __PAIR64__(v11, HIDWORD(v13));
      v102 = v356 | v20 | v18 | (unsigned int)v357;
      v86 = v102
          + loc_1018D0
          + v350
          + (v385 ^ v383 ^ v384)
          + (__PAIR64__(HIDWORD(v187) & (unsigned int)~(_DWORD)v13, (unsigned int)v187 & ~HIDWORD(v16))
           ^ v119
           & __PAIR64__(v13, HIDWORD(v16)));
      HIDWORD(v389) = *(unsigned __int8 *)(v128 - 102) << 8;
      HIDWORD(v390) = *(unsigned __int8 *)(v128 - 101);
      v21 = (v86 + v348) >> 32 << 23;
      LODWORD(v391) = (__int64)(v86 + v348) >> 14;
      v22 = (unsigned int)((v86 + v348) >> 32) >> 14;
      v112 = (v186 & v104 ^ (v186 ^ v104) & __PAIR64__(v11, HIDWORD(v13))) + (v386 ^ v387 ^ v388);
      v23 = (unsigned int)((v86 + v348) >> 32) >> 18;
      v97 = v86 + v348;
      LODWORD(v392) = (__int64)(v86 + v348) >> 18;
      LODWORD(v389) = (unsigned __int8)v150;
      LODWORD(v390) = (unsigned __int8)v150;
      LODWORD(v11) = *(unsigned __int8 *)(v128 - 97) | (unsigned __int8)v150;
      HIDWORD(v11) = (*(unsigned __int8 *)(v19 - 104) << 24) | (*(unsigned __int8 *)(v19 - 103) << 16);
      v87 = v86 + v112;
      HIDWORD(v393) = v21 | ((unsigned int)v97 >> 9);
      LODWORD(v393) = ((_DWORD)v97 << 23) | (HIDWORD(v97) >> 9);
      LODWORD(v394) = v87 >> 28;
      HIDWORD(v391) = v22 | ((_DWORD)v97 << 18);
      HIDWORD(v395) = v87 >> 2;
      HIDWORD(v396) = v87 >> 7;
      HIDWORD(v392) = v23 | ((_DWORD)v97 << 14);
      HIDWORD(v394) = (HIDWORD(v87) >> 28) | (16 * v87);
      v123 = v87;
      LODWORD(v395) = ((_DWORD)v87 << 30) | (HIDWORD(v87) >> 2);
      LODWORD(v396) = ((_DWORD)v87 << 25) | (HIDWORD(v87) >> 7);
      LODWORD(v24) = (*(unsigned __int8 *)(v128 - 100) << 24) | v11;
      HIDWORD(v24) = (v390 | v11 | v389) >> 32;
      HIDWORD(v404) = *(unsigned __int8 *)(v128 - 85);
      v88 = (*(unsigned __int8 *)(v128 - 99) << 16) | v24 | (*(unsigned __int8 *)(v128 - 98) << 8);
      v113 = v186 + v88 + v187 + loc_1018D8 + (v393 ^ v391 ^ v392) + (v119 & ~v97 ^ v92 & v97);
      v25 = v88
          + v187
          + loc_1018D8
          + (v393 ^ v391 ^ v392)
          + (v119 & ~v97 ^ v92 & v97)
          + (v396 ^ v394 ^ v395)
          + (v123 & (v106 ^ v104) ^ v106 & v104);
      LODWORD(v397) = v113 >> 14;
      HIDWORD(v11) = v186 + v88 + v187 + loc_1018D8 + (v393 ^ v391 ^ v392) + (v119 & ~(_DWORD)v97 ^ v92 & v97);
      LODWORD(v398) = v113 >> 18;
      HIDWORD(v397) = (HIDWORD(v113) >> 14) | (HIDWORD(v11) << 18);
      HIDWORD(v398) = (HIDWORD(v113) >> 18) | (HIDWORD(v11) << 14);
      HIDWORD(v16) = v88
                   + v187
                   + loc_1018D8
                   + (v393 ^ v391 ^ v392)
                   + (v119 & ~(_DWORD)v97 ^ v92 & v97)
                   + (v396 ^ v394 ^ v395)
                   + (v123 & (v106 ^ v104) ^ v106 & v104);
      HIDWORD(v399) = v113 >> 9;
      LODWORD(v400) = v25 >> 28;
      HIDWORD(v401) = v25 >> 2;
      LODWORD(v399) = (HIDWORD(v11) << 23) | (HIDWORD(v113) >> 9);
      v143 = v25;
      HIDWORD(v402) = v25 >> 7;
      HIDWORD(v400) = (HIDWORD(v25) >> 28) | (16 * HIDWORD(v16));
      LODWORD(v401) = ((_DWORD)v25 << 30) | (HIDWORD(v25) >> 2);
      LODWORD(v402) = (HIDWORD(v16) << 25) | (HIDWORD(v25) >> 7);
      v26 = v119
          + __PAIR64__(
              ((unsigned __int64)*(unsigned __int8 *)(v128 - 90) >> 24) | _byteswap_ulong(*(_DWORD *)(v128 - 96)),
              (*(unsigned __int8 *)(v128 - 90) << 8)
            | (*(unsigned __int8 *)(v128 - 91) << 16)
            | (*(unsigned __int8 *)(v128 - 92) << 24)
            | (unsigned __int8)v150
            | (unsigned int)*(unsigned __int8 *)(v128 - 89))
          + 0x3956C25BF348B538LL
          + (v399 ^ v397 ^ v398);
      v27 = (v402 ^ v400 ^ v401) + ((v106 ^ v123) & v25 ^ v106 & v123);
      HIDWORD(v403) = *(unsigned __int8 *)(v128 - 86) << 8;
      LODWORD(v25) = *(unsigned __int8 *)(v128 - 84);
      LODWORD(v403) = (unsigned __int8)v150;
      LODWORD(v404) = (unsigned __int8)v150;
      v147 = v104 + v26 + (v92 & ~v113 ^ v97 & v113);
      v358 = (unsigned int)((_DWORD)v25 << 24);
      HIDWORD(v18) = (*(unsigned __int8 *)(v128 - 88) << 24) | (*(unsigned __int8 *)(v128 - 87) << 16);
      LODWORD(v18) = *(unsigned __int8 *)(v128 - 81) | (unsigned __int8)v150;
      v359 = (unsigned __int64)*(unsigned __int8 *)(v128 - 83) << 16;
      LODWORD(v405) = v147 >> 14;
      LODWORD(v406) = v147 >> 18;
      HIDWORD(v407) = v147 >> 9;
      v360 = *(unsigned __int8 *)(v128 - 82) << 8;
      HIDWORD(v406) = (HIDWORD(v147) >> 18) | ((_DWORD)v147 << 14);
      HIDWORD(v405) = (HIDWORD(v147) >> 14) | ((_DWORD)v147 << 18);
      LODWORD(v407) = ((_DWORD)v147 << 23) | (HIDWORD(v147) >> 9);
      LODWORD(v105) = v360 | v359 | ((_DWORD)v25 << 24) | v18;
      HIDWORD(v105) = (v359 | v358 | v404 | v403 | v18) >> 32;
      v28 = v92 + ((unsigned int)v360 | v359 | v358 | v404 | v403 | v18) + 0x59F111F1B605D019LL;
      v93 = v27 + v26 + (v92 & ~v113 ^ v97 & v113);
      v29 = ((v97 & ~v147 ^ v113 & v147) + v28 + (v407 ^ v405 ^ v406)) >> 32;
      HIDWORD(v26) = (v97 & ~(_DWORD)v147 ^ v113 & v147) + v28 + (v407 ^ v405 ^ v406);
      v120 = v106 + (v97 & ~v147 ^ v113 & v147) + v28 + (v407 ^ v405 ^ v406);
      LODWORD(v408) = v93 >> 28;
      HIDWORD(v409) = v93 >> 2;
      HIDWORD(v410) = v93 >> 7;
      LODWORD(v411) = v120 >> 14;
      LODWORD(v412) = v120 >> 18;
      HIDWORD(v408) = (HIDWORD(v93) >> 28) | (16 * v93);
      LODWORD(v409) = ((_DWORD)v93 << 30) | (HIDWORD(v93) >> 2);
      HIDWORD(v413) = v120 >> 9;
      LODWORD(v410) = ((_DWORD)v93 << 25) | (HIDWORD(v93) >> 7);
      HIDWORD(v411) = (HIDWORD(v120) >> 14) | (((_DWORD)v106 + HIDWORD(v26)) << 18);
      HIDWORD(v412) = (HIDWORD(v120) >> 18) | (((_DWORD)v106 + HIDWORD(v26)) << 14);
      LODWORD(v413) = (((_DWORD)v106 + HIDWORD(v26)) << 23) | (HIDWORD(v120) >> 9);
      LODWORD(v28) = (*(unsigned __int8 *)(v128 - 76) << 24) | (unsigned __int8)v150 | *(unsigned __int8 *)(v128 - 73);
      HIDWORD(v28) = _byteswap_ulong(*(_DWORD *)(v128 - 80));
      v127 = (*(unsigned __int8 *)(v128 - 74) << 8) | (*(unsigned __int8 *)(v128 - 75) << 16) | v28;
      v30 = v97 + loc_102590 + v127;
      HIDWORD(v417) = *(unsigned __int8 *)(v128 - 72) << 24;
      HIDWORD(v418) = *(unsigned __int8 *)(v128 - 71) << 16;
      v98 = __PAIR64__(v29, HIDWORD(v26)) + (v410 ^ v408 ^ v409) + (v93 & (v143 ^ v123) ^ v143 & v123);
      v137 = (v413 ^ v411 ^ v412) + v30 + (v147 & v120 ^ v113 & ~v120);
      LODWORD(v417) = (unsigned __int8)v150;
      LODWORD(v418) = (unsigned __int8)v150;
      v124 = v137 + v123;
      LODWORD(v414) = v98 >> 28;
      HIDWORD(v415) = v98 >> 2;
      HIDWORD(v414) = (HIDWORD(v98) >> 28) | (16 * v98);
      LODWORD(v415) = ((_DWORD)v98 << 30) | (HIDWORD(v98) >> 2);
      HIDWORD(v416) = v98 >> 7;
      LODWORD(v419) = v124 >> 14;
      LODWORD(v420) = v124 >> 18;
      LODWORD(v416) = ((_DWORD)v98 << 25) | (HIDWORD(v98) >> 7);
      HIDWORD(v421) = v124 >> 9;
      HIDWORD(v420) = (HIDWORD(v124) >> 18) | ((_DWORD)v124 << 14);
      v31 = v417 | v418 | *(unsigned __int8 *)(v128 - 65);
      HIDWORD(v419) = (HIDWORD(v124) >> 14) | ((_DWORD)v124 << 18);
      HIDWORD(v442) = *(unsigned __int8 *)(v128 - 45);
      LODWORD(v421) = ((_DWORD)v124 << 23) | (HIDWORD(v124) >> 9);
      LODWORD(v31) = (*(unsigned __int8 *)(v128 - 67) << 16)
                   | (*(unsigned __int8 *)(v128 - 68) << 24)
                   | (unsigned __int8)v150
                   | (unsigned int)v31;
      HIDWORD(v31) |= *(unsigned __int8 *)(v128 - 69) | (*(unsigned __int8 *)(v128 - 70) << 8);
      v107 = (*(unsigned __int8 *)(v128 - 66) << 8) | v31;
      v138 = v137 + (v98 & (v143 ^ v93) ^ v143 & v93) + (v416 ^ v414 ^ v415);
      HIDWORD(v425) = *(unsigned __int8 *)(v128 - 64) << 24;
      HIDWORD(v426) = *(unsigned __int8 *)(v128 - 63) << 16;
      LODWORD(v422) = v138 >> 28;
      HIDWORD(v423) = v138 >> 2;
      HIDWORD(v424) = v138 >> 7;
      HIDWORD(v422) = (HIDWORD(v138) >> 28) | (16 * v138);
      LODWORD(v423) = ((_DWORD)v138 << 30) | (HIDWORD(v138) >> 2);
      LODWORD(v424) = ((_DWORD)v138 << 25) | (HIDWORD(v138) >> 7);
      HIDWORD(v18) = *(unsigned __int8 *)(v128 - 62) << 8;
      LODWORD(v425) = (unsigned __int8)v150;
      LODWORD(v426) = (unsigned __int8)v150;
      v32 = v143;
      v144 = (v421 ^ v419 ^ v420) + v113 + loc_102598 + v107 + (v147 & ~v124 ^ v120 & v124);
      v33 = v144 + v32;
      LODWORD(v427) = v33 >> 14;
      LODWORD(v113) = *(unsigned __int8 *)(v128 - 59);
      v361 = *(unsigned __int8 *)(v128 - 60) << 24;
      LODWORD(v18) = *(unsigned __int8 *)(v128 - 57);
      LODWORD(v428) = v33 >> 18;
      HIDWORD(v429) = v33 >> 9;
      v362 = *(unsigned __int8 *)(v128 - 58) << 8;
      HIDWORD(v427) = (HIDWORD(v33) >> 14) | ((_DWORD)v33 << 18);
      HIDWORD(v428) = (HIDWORD(v33) >> 18) | ((_DWORD)v33 << 14);
      LODWORD(v429) = ((_DWORD)v33 << 23) | (HIDWORD(v33) >> 9);
      v151 = (unsigned int)v362
           | (unsigned int)((_DWORD)v113 << 16)
           | (unsigned int)v361
           | __PAIR64__(*(unsigned __int8 *)(v128 - 61), (unsigned __int8)v150)
           | v18
           | v425
           | v426;
      v34 = v144 + (v138 & (v98 ^ v93) ^ v98 & v93) + (v424 ^ v422 ^ v423);
      LODWORD(v430) = v34 >> 28;
      HIDWORD(v431) = v34 >> 2;
      HIDWORD(v432) = v34 >> 7;
      HIDWORD(v430) = (HIDWORD(v34) >> 28) | (16 * v34);
      LODWORD(v431) = ((_DWORD)v34 << 30) | (HIDWORD(v34) >> 2);
      LODWORD(v432) = ((_DWORD)v34 << 25) | (HIDWORD(v34) >> 7);
      v145 = (v429 ^ v427 ^ v428)
           + v147
           + loc_1025A0
           + __PAIR64__(
               *(unsigned __int8 *)(v128 - 61) | (unsigned int)((v18 | v425 | v426) >> 32),
               v362 | ((_DWORD)v113 << 16) | v361 | (unsigned int)v18 | (unsigned __int8)v150)
           + (v120 & ~v33 ^ v124 & v33);
      HIDWORD(v433) = *(unsigned __int8 *)(v128 - 54) << 8;
      HIDWORD(v18) = (*(unsigned __int8 *)(v128 - 56) << 24) | (*(unsigned __int8 *)(v128 - 55) << 16);
      LODWORD(v18) = *(unsigned __int8 *)(v128 - 49) | (unsigned __int8)v150;
      LODWORD(v434) = (__int64)(v93 + v145) >> 14;
      LODWORD(v433) = (unsigned __int8)v150;
      LODWORD(v435) = (__int64)(v93 + v145) >> 18;
      HIDWORD(v436) = (__int64)(v93 + v145) >> 9;
      HIDWORD(v434) = ((unsigned int)((v93 + v145) >> 32) >> 14) | (((_DWORD)v93 + (_DWORD)v145) << 18);
      v148 = v93 + v145;
      HIDWORD(v435) = (HIDWORD(v148) >> 18) | ((_DWORD)v148 << 14);
      v35 = (v98 & v138 ^ (v98 ^ v138) & v34) + (v432 ^ v430 ^ v431);
      LODWORD(v436) = ((_DWORD)v148 << 23) | (HIDWORD(v148) >> 9);
      v36 = (v145 + v35) >> 32 << 30;
      v37 = (v145 + v35) >> 32 << 25;
      v114 = (*(unsigned __int8 *)(v128 - 50) << 8)
           | (*(unsigned __int8 *)(v128 - 51) << 16)
           | v433
           | v18
           | __PAIR64__(*(unsigned __int8 *)(v128 - 53), (unsigned __int8)v150)
           | (*(unsigned __int8 *)(v128 - 52) << 24);
      v146 = v145 + v35;
      LODWORD(v437) = v146 >> 28;
      HIDWORD(v440) = *(unsigned __int8 *)(v128 - 48) << 24;
      HIDWORD(v441) = *(unsigned __int8 *)(v128 - 47) << 16;
      HIDWORD(v438) = v36 | ((unsigned int)v146 >> 2);
      HIDWORD(v439) = v37 | ((unsigned int)v146 >> 7);
      HIDWORD(v437) = (HIDWORD(v146) >> 28) | (16 * v146);
      LODWORD(v440) = (unsigned __int8)v150;
      LODWORD(v441) = (unsigned __int8)v150;
      v94 = (v436 ^ v434 ^ v435) + v120 + loc_103348 + v114 + (v124 & ~v148 ^ v33 & v148);
      LODWORD(v438) = ((_DWORD)v146 << 30) | (HIDWORD(v146) >> 2);
      LODWORD(v439) = ((_DWORD)v146 << 25) | (HIDWORD(v146) >> 7);
      v99 = v98 + v94;
      LODWORD(v443) = v99 >> 14;
      LODWORD(v442) = (unsigned __int8)v150;
      LODWORD(v444) = v99 >> 18;
      HIDWORD(v18) = (*(unsigned __int8 *)(v128 - 46) << 8) | ((v440 | v441) >> 32);
      LODWORD(v18) = *(unsigned __int8 *)(v128 - 41) | (unsigned __int8)v150;
      HIDWORD(v445) = v99 >> 9;
      HIDWORD(v443) = (HIDWORD(v99) >> 14) | ((_DWORD)v99 << 18);
      HIDWORD(v444) = (HIDWORD(v99) >> 18) | ((_DWORD)v99 << 14);
      v121 = (v138 & v34 ^ v146 & (v138 ^ v34)) + (v437 ^ v438 ^ v439) + v94;
      LODWORD(v445) = ((_DWORD)v99 << 23) | (HIDWORD(v99) >> 9);
      HIDWORD(v30) = (v442 | v18) >> 32;
      LODWORD(v30) = (*(unsigned __int8 *)(v128 - 42) << 8)
                   | (*(unsigned __int8 *)(v128 - 43) << 16)
                   | (*(unsigned __int8 *)(v128 - 44) << 24)
                   | v18;
      v95 = v30;
      LODWORD(v446) = v121 >> 28;
      HIDWORD(v447) = v121 >> 2;
      HIDWORD(v449) = *(unsigned __int8 *)(v128 - 40) << 24;
      HIDWORD(v450) = *(unsigned __int8 *)(v128 - 39) << 16;
      HIDWORD(v448) = v121 >> 7;
      HIDWORD(v446) = (HIDWORD(v121) >> 28) | (16 * v121);
      LODWORD(v447) = ((_DWORD)v121 << 30) | (HIDWORD(v121) >> 2);
      LODWORD(v449) = (unsigned __int8)v150;
      LODWORD(v450) = (unsigned __int8)v150;
      v38 = v124 + loc_103350 + v30 + (v443 ^ v444 ^ v445) + (v148 & v99 ^ v33 & ~v99);
      LODWORD(v448) = ((_DWORD)v121 << 25) | (HIDWORD(v121) >> 7);
      HIDWORD(v18) = v128;
      v125 = v138 + v38;
      LODWORD(v451) = (v138 + v38) >> 14;
      HIDWORD(v453) = (v138 + v38) >> 9;
      LODWORD(v452) = (v138 + v38) >> 18;
      LODWORD(v35) = v128;
      HIDWORD(v451) = (HIDWORD(v125) >> 14) | ((_DWORD)v125 << 18);
      LODWORD(v453) = ((_DWORD)v125 << 23) | (HIDWORD(v125) >> 9);
      v467 = *(unsigned __int8 *)(v128 - 21);
      HIDWORD(v452) = (HIDWORD(v125) >> 18) | ((_DWORD)v125 << 14);
      v167 = v449 | v450 | *(unsigned __int8 *)(v128 - 33);
      HIDWORD(v16) = (v146 & v34 ^ v121 & (v146 ^ v34)) + (v448 ^ v446 ^ v447) + v38;
      LODWORD(v30) = ((v146 & v34 ^ v121 & (v146 ^ v34)) + (v448 ^ v446 ^ v447) + v38) >> 32;
      LODWORD(v454) = (__int64)((v146 & v34 ^ v121 & (v146 ^ v34)) + (v448 ^ v446 ^ v447) + v38) >> 28;
      LODWORD(v138) = (*(unsigned __int8 *)(v128 - 34) << 8)
                    | (*(unsigned __int8 *)(v128 - 35) << 16)
                    | (*(unsigned __int8 *)(v128 - 36) << 24)
                    | v167
                    | (unsigned __int8)v150;
      HIDWORD(v138) = *(unsigned __int8 *)(v128 - 37) | HIDWORD(v167) | (*(unsigned __int8 *)(v128 - 38) << 8);
      HIDWORD(v455) = (__int64)((v146 & v34 ^ v121 & (v146 ^ v34)) + (v448 ^ v446 ^ v447) + v38) >> 2;
      HIDWORD(v456) = (__int64)((v146 & v34 ^ v121 & (v146 ^ v34)) + (v448 ^ v446 ^ v447) + v38) >> 7;
      HIDWORD(v454) = ((unsigned int)v30 >> 28) | (16 * HIDWORD(v16));
      LODWORD(v455) = (HIDWORD(v16) << 30) | ((unsigned int)v30 >> 2);
      v179 = *(unsigned __int8 *)(v128 - 32) << 24;
      v157 = (v146 & v34 ^ v121 & (v146 ^ v34)) + (v448 ^ v446 ^ v447) + v38;
      LODWORD(v456) = (HIDWORD(v16) << 25) | ((unsigned int)v30 >> 7);
      HIDWORD(v457) = *(unsigned __int8 *)(v128 - 31) << 16;
      v129 = (v453 ^ v451 ^ v452) + v33 + loc_103358 + v138 + (v148 & ~v125 ^ v99 & v125);
      LODWORD(v457) = 0;
      v163 = __PAIR64__(v179, 0) | v457;
      LODWORD(v458) = (v129 + v34) >> 14;
      LODWORD(v459) = (v129 + v34) >> 18;
      HIDWORD(v460) = (v129 + v34) >> 9;
      v168 = v129 + v34;
      HIDWORD(v458) = (HIDWORD(v168) >> 14) | ((_DWORD)v168 << 18);
      HIDWORD(v459) = (HIDWORD(v168) >> 18) | ((_DWORD)v168 << 14);
      LODWORD(v460) = ((_DWORD)v168 << 23) | (HIDWORD(v168) >> 9);
      v180 = (v456 ^ v454 ^ v455) + (v157 & (v146 ^ v121) ^ v146 & v121) + v129;
      LODWORD(v461) = v180 >> 28;
      HIDWORD(v462) = v180 >> 2;
      HIDWORD(v463) = v180 >> 7;
      HIDWORD(v461) = (HIDWORD(v180) >> 28) | (16 * v180);
      LODWORD(v462) = ((_DWORD)v180 << 30) | (HIDWORD(v180) >> 2);
      LODWORD(v463) = ((_DWORD)v180 << 25) | (HIDWORD(v180) >> 7);
      LODWORD(v156) = _byteswap_ulong(*(_DWORD *)(v35 - 28));
      HIDWORD(v156) = *(unsigned __int8 *)(v35 - 29) | (*(unsigned __int8 *)(v35 - 30) << 8) | v179 | HIDWORD(v457);
      HIDWORD(v464) = *(unsigned __int8 *)(v35 - 24) << 24;
      HIDWORD(v465) = *(unsigned __int8 *)(v35 - 23) << 16;
      v39 = (v460 ^ v458 ^ v459) + v148 + loc_103360 + v156 + (v99 & ~v168 ^ v125 & v168);
      HIDWORD(v466) = *(unsigned __int8 *)(v35 - 22) << 8;
      v172 = v146 + v39;
      v130 = *(unsigned __int8 *)(v35 - 20);
      LODWORD(v464) = 0;
      LODWORD(v465) = 0;
      LODWORD(v130) = v35;
      LODWORD(v468) = (v146 + v39) >> 18;
      LODWORD(v466) = 0;
      HIDWORD(v468) = (HIDWORD(v172) >> 18) | ((_DWORD)v172 << 14);
      HIDWORD(v469) = (v146 + v39) >> 9;
      v363 = *(unsigned __int8 *)(HIDWORD(v18) - 19) << 16;
      v40 = (v180 & (v157 ^ v121) ^ v157 & v121) + (v463 ^ v461 ^ v462) + v39;
      v41 = v466 | *(unsigned __int8 *)(HIDWORD(v18) - 17) | v464 | v465;
      LODWORD(v470) = v40 >> 28;
      HIDWORD(v41) |= v467;
      v471 = v40 >> 2;
      LODWORD(v469) = ((_DWORD)v172 << 23) | (HIDWORD(v172) >> 9);
      HIDWORD(v470) = (HIDWORD(v40) >> 28) | (16 * v40);
      v349 = v40;
      v159 = ((unsigned __int64)*(unsigned __int8 *)(v35 - 18) << 8)
           | v363
           | (*(unsigned __int8 *)(v35 - 20) << 24)
           | v41;
      v100 = v99 + loc_103368 + v159;
      v149 = v125 & ~v172;
      v90 = (v138 ^ v168 & v172) + v100 + v130;
      LODWORD(v40) = *(unsigned __int8 *)(v125 - 12);
      LODWORD(v16) = v125;
      HIDWORD(v472) = *(unsigned __int8 *)(v125 - 14) << 8;
      v126 = (v347 & (v157 ^ v180) ^ v157 & v174) + (v470 ^ v468 ^ v469);
      HIDWORD(v34) = (v90 + v107) >> 32;
      HIDWORD(v40) = v90 + v107;
      HIDWORD(v33) = v471 | (*(unsigned __int8 *)(v35 - 15) << 16);
      LODWORD(v33) = v173 | *(unsigned __int8 *)(v16 - 9);
      LODWORD(v472) = v173;
      v128 = v90 + v126;
      LODWORD(v474) = (__int64)(v90 + v107) >> 14;
      LODWORD(v475) = (__int64)(v90 + v107) >> 18;
      HIDWORD(v476) = (__int64)(v90 + v107) >> 9;
      HIDWORD(v474) = (HIDWORD(v34) >> 14) | (((_DWORD)v90 + (_DWORD)v107) << 18);
      HIDWORD(v475) = (HIDWORD(v34) >> 18) | (((_DWORD)v90 + (_DWORD)v107) << 14);
      LODWORD(v477) = (__int64)(v90 + v126) >> 28;
      HIDWORD(v478) = (__int64)(v90 + v126) >> 2;
      LODWORD(v476) = (((_DWORD)v90 + (_DWORD)v107) << 23) | (HIDWORD(v34) >> 9);
      HIDWORD(v477) = ((unsigned int)((v90 + v126) >> 32) >> 28) | (16 * (v90 + v126));
      HIDWORD(v479) = (__int64)(v90 + v126) >> 7;
      v139 = v90 + v107;
      LODWORD(v478) = (((_DWORD)v90 + (_DWORD)v126) << 30) | ((unsigned int)((v90 + v126) >> 32) >> 2);
      LODWORD(v479) = (((_DWORD)v90 + (_DWORD)v126) << 25) | ((unsigned int)((v90 + v126) >> 32) >> 7);
      LODWORD(v91) = (*(unsigned __int8 *)(v16 - 10) << 8)
                   | (*(unsigned __int8 *)(v16 - 11) << 16)
                   | ((_DWORD)v40 << 24)
                   | v33;
      HIDWORD(v91) = v473 | ((v472 | (unsigned __int64)v33) >> 32);
      LODWORD(v126) = v16;
      HIDWORD(v480) = *(unsigned __int8 *)(v16 - 8) << 24;
      v42 = (v476 ^ v474 ^ v475)
          + v114
          + loc_103988
          + __PAIR64__(
              ((HIDWORD(v40) >> 14) | (HIDWORD(v34) << 18)) ^ ((HIDWORD(v40) >> 18) | (HIDWORD(v34) << 14)),
              v91)
          + (v159 & ~v139 ^ (__PAIR64__(v179, 0) | v457) & v139);
      v43 = HIDWORD(v151);
      v44 = __CFADD__((_DWORD)v151, (v476 ^ v474 ^ v475) + v114 + loc_103988 + v91 + (v159 & ~HIDWORD(v40)));
      LODWORD(v480) = v173;
      v152 = v151 + v42;
      LODWORD(v42) = v152;
      v45 = (v347 & v174 ^ v128 & (v347 ^ v174))
          + (v479 ^ v477 ^ v478)
          + __PAIR64__(HIDWORD(v42), (v476 ^ v474 ^ v475) + v114 + loc_103988 + v91 + (v159 & ~HIDWORD(v40)));
      HIDWORD(v42) += v44 + v43;
      v169 = v45;
      LODWORD(v481) = __SPAIR64__(HIDWORD(v42), v152) >> 14;
      LODWORD(v482) = __SPAIR64__(HIDWORD(v42), v152) >> 18;
      LODWORD(v484) = v45 >> 28;
      HIDWORD(v483) = v42 >> 9;
      HIDWORD(v481) = (HIDWORD(v42) >> 14) | ((_DWORD)v152 << 18);
      HIDWORD(v482) = (HIDWORD(v42) >> 18) | ((_DWORD)v152 << 14);
      HIDWORD(v485) = v45 >> 2;
      LODWORD(v483) = ((_DWORD)v152 << 23) | (HIDWORD(v42) >> 9);
      LODWORD(v485) = ((_DWORD)v45 << 30) | (HIDWORD(v45) >> 2);
      HIDWORD(v484) = (HIDWORD(v45) >> 28) | (16 * v45);
      HIDWORD(v486) = v45 >> 7;
      LODWORD(v486) = ((_DWORD)v45 << 25) | (HIDWORD(v45) >> 7);
      HIDWORD(v41) = *(unsigned __int8 *)(v126 - 5)
                   | (*(unsigned __int8 *)(v126 - 6) << 8)
                   | ((v480 | __PAIR64__(*(unsigned __int8 *)(v126 - 7) << 16, v173)) >> 32);
      LODWORD(v41) = (*(unsigned __int8 *)(v126 - 4) << 24) | *(unsigned __int8 *)(v126 - 1) | v173;
      v158 = (*(unsigned __int8 *)(v126 - 2) << 8) | (*(unsigned __int8 *)(v126 - 3) << 16) | v41;
      v46 = v159
          + loc_103990
          + v158
          + (v483 ^ v481 ^ v482)
          + (__PAIR64__(HIDWORD(v34), HIDWORD(v40)) & v42 ^ (__PAIR64__(v179, 0) | v457) & ~v42);
      v115 = v174 + v46;
      v47 = v46 + (v45 & (v347 ^ v128) ^ v347 & v128) + (v486 ^ v484 ^ v485);
      v48 = (char *)&unk_1C50D0;
      HIDWORD(v351) = "_enc";
      v49 = v347;
      do
      {
        v50 = v84;
        v51 = v84;
        v52 = v91;
        __pld(v48);
        __pld(v48 + 8);
        v177 = v50 >> 7;
        v53 = (unsigned int)v52 >> 19;
        v54 = (unsigned int)v52 >> 6;
        LODWORD(v52) = v115;
        v181 = v54;
        __pld(v48 + 16);
        __pld(v48 + 24);
        LODWORD(v186) = __SPAIR64__(HIDWORD(v84), v51) >> 1;
        LODWORD(v187) = __SPAIR64__(HIDWORD(v84), v51) >> 8;
        LODWORD(v188) = v53 | (HIDWORD(v91) << 13);
        LODWORD(v178) = v177 | (HIDWORD(v84) << 25);
        HIDWORD(v189) = (8 * HIDWORD(v52)) | ((unsigned int)v91 >> 29);
        LODWORD(v190) = __SPAIR64__(HIDWORD(v115), v52) >> 14;
        LODWORD(v191) = __SPAIR64__(HIDWORD(v115), v52) >> 18;
        HIDWORD(v186) = (HIDWORD(v84) >> 1) | ((_DWORD)v84 << 31);
        HIDWORD(v187) = (HIDWORD(v84) >> 8) | ((_DWORD)v84 << 24);
        HIDWORD(v188) = (HIDWORD(v91) >> 19) | ((_DWORD)v91 << 13);
        LODWORD(v189) = (8 * v91) | (HIDWORD(v91) >> 29);
        HIDWORD(v192) = v115 >> 9;
        HIDWORD(v191) = (HIDWORD(v115) >> 18) | ((_DWORD)v115 << 14);
        HIDWORD(v190) = (HIDWORD(v115) >> 14) | ((_DWORD)v115 << 18);
        LODWORD(v192) = ((_DWORD)v115 << 23) | (HIDWORD(v115) >> 9);
        HIDWORD(v178) = HIDWORD(v84) >> 7;
        HIDWORD(v55) = (HIDWORD(v91) >> 6) ^ ((v188 ^ v189) >> 32);
        LODWORD(v55) = (v181 | (HIDWORD(v91) << 26)) ^ v188 ^ v189;
        v108 = v55 + (v178 ^ v186 ^ v187);
        v56 = *((_QWORD *)v48 - 16);
        v48 += 128;
        v172 += v108 + v105;
        LODWORD(v196) = v95 >> 1;
        v160 = v163 + v172 + v56 + (v115 & v152 ^ v139 & ~v115) + (v192 ^ v190 ^ v191);
        LODWORD(v197) = v95 >> 8;
        v109 = v160 + v49;
        HIDWORD(v196) = (HIDWORD(v95) >> 1) | ((_DWORD)v95 << 31);
        LODWORD(v198) = v158 >> 19;
        HIDWORD(v197) = (HIDWORD(v95) >> 8) | ((_DWORD)v95 << 24);
        LODWORD(v193) = v47 >> 28;
        HIDWORD(v199) = v158 >> 29;
        HIDWORD(v194) = v47 >> 2;
        HIDWORD(v198) = (HIDWORD(v158) >> 19) | ((_DWORD)v158 << 13);
        LODWORD(v199) = (8 * v158) | (HIDWORD(v158) >> 29);
        LODWORD(v194) = ((_DWORD)v47 << 30) | (HIDWORD(v47) >> 2);
        LODWORD(v200) = (__int64)(v160 + v49) >> 14;
        HIDWORD(v202) = (__int64)(v160 + v49) >> 9;
        LODWORD(v201) = (__int64)(v160 + v49) >> 18;
        HIDWORD(v193) = (HIDWORD(v47) >> 28) | (16 * v47);
        HIDWORD(v200) = (HIDWORD(v109) >> 14) | ((_DWORD)v109 << 18);
        HIDWORD(v195) = v47 >> 7;
        HIDWORD(v201) = (HIDWORD(v109) >> 18) | ((_DWORD)v109 << 14);
        LODWORD(v195) = ((_DWORD)v47 << 25) | (HIDWORD(v47) >> 7);
        LODWORD(v202) = ((_DWORD)v109 << 23) | (HIDWORD(v109) >> 9);
        LODWORD(v208) = v172 >> 19;
        HIDWORD(v209) = v172 >> 29;
        HIDWORD(v208) = (HIDWORD(v172) >> 19) | ((_DWORD)v172 << 13);
        LODWORD(v209) = (8 * v172) | (HIDWORD(v172) >> 29);
        v84 += (((unsigned __int64)v158 >> 6) ^ v198 ^ v199) + v89 + (((unsigned __int64)v95 >> 7) ^ v196 ^ v197);
        v57 = v160 + (v195 ^ v193 ^ v194) + (v169 & v128 ^ v169 & v47 ^ v128 & v47);
        LODWORD(v203) = v57 >> 28;
        LODWORD(v206) = v83 >> 1;
        LODWORD(v207) = v83 >> 8;
        HIDWORD(v204) = v57 >> 2;
        HIDWORD(v206) = (HIDWORD(v83) >> 1) | ((_DWORD)v83 << 31);
        LODWORD(v204) = ((_DWORD)v57 << 30) | (HIDWORD(v57) >> 2);
        HIDWORD(v207) = (HIDWORD(v83) >> 8) | ((_DWORD)v83 << 24);
        HIDWORD(v205) = v57 >> 7;
        HIDWORD(v203) = (HIDWORD(v57) >> 28) | (16 * v57);
        LODWORD(v205) = ((_DWORD)v57 << 25) | (HIDWORD(v57) >> 7);
        LODWORD(v216) = v88 >> 1;
        LODWORD(v217) = v88 >> 8;
        LODWORD(v218) = v84 >> 19;
        HIDWORD(v219) = v84 >> 29;
        HIDWORD(v216) = (HIDWORD(v88) >> 1) | ((_DWORD)v88 << 31);
        HIDWORD(v217) = (HIDWORD(v88) >> 8) | ((_DWORD)v88 << 24);
        LODWORD(v219) = (8 * v84) | (HIDWORD(v84) >> 29);
        HIDWORD(v218) = (HIDWORD(v84) >> 19) | ((_DWORD)v84 << 13);
        LODWORD(v226) = v100 >> 1;
        LODWORD(v227) = v100 >> 8;
        HIDWORD(v227) = (HIDWORD(v100) >> 8) | ((_DWORD)v100 << 24);
        HIDWORD(v226) = (HIDWORD(v100) >> 1) | ((_DWORD)v100 << 31);
        LODWORD(v236) = v121 >> 1;
        LODWORD(v237) = v121 >> 8;
        HIDWORD(v237) = (HIDWORD(v121) >> 8) | ((_DWORD)v121 << 24);
        HIDWORD(v236) = (HIDWORD(v121) >> 1) | ((_DWORD)v121 << 31);
        LODWORD(v246) = v102 >> 1;
        LODWORD(v247) = v102 >> 8;
        HIDWORD(v247) = (HIDWORD(v102) >> 8) | ((_DWORD)v102 << 24);
        HIDWORD(v246) = (HIDWORD(v102) >> 1) | ((_DWORD)v102 << 31);
        LODWORD(v256) = v149 >> 1;
        LODWORD(v257) = v149 >> 8;
        HIDWORD(v257) = (HIDWORD(v149) >> 8) | ((_DWORD)v149 << 24);
        HIDWORD(v256) = (HIDWORD(v149) >> 1) | ((_DWORD)v149 << 31);
        LODWORD(v266) = v105 >> 1;
        LODWORD(v267) = v105 >> 8;
        HIDWORD(v267) = (HIDWORD(v105) >> 8) | ((_DWORD)v105 << 24);
        HIDWORD(v266) = (HIDWORD(v105) >> 1) | ((_DWORD)v105 << 31);
        LODWORD(v276) = v89 >> 1;
        LODWORD(v277) = v89 >> 8;
        HIDWORD(v277) = (HIDWORD(v89) >> 8) | ((_DWORD)v89 << 24);
        HIDWORD(v276) = (HIDWORD(v89) >> 1) | ((_DWORD)v89 << 31);
        LODWORD(v286) = v127 >> 1;
        LODWORD(v287) = v127 >> 8;
        HIDWORD(v287) = (HIDWORD(v127) >> 8) | ((_DWORD)v127 << 24);
        HIDWORD(v286) = (HIDWORD(v127) >> 1) | ((_DWORD)v127 << 31);
        LODWORD(v296) = v150 >> 1;
        LODWORD(v297) = v150 >> 8;
        HIDWORD(v297) = (HIDWORD(v150) >> 8) | ((_DWORD)v150 << 24);
        HIDWORD(v296) = (HIDWORD(v150) >> 1) | ((_DWORD)v150 << 31);
        LODWORD(v306) = v156 >> 1;
        LODWORD(v307) = v156 >> 8;
        HIDWORD(v307) = (HIDWORD(v156) >> 8) | ((_DWORD)v156 << 24);
        HIDWORD(v306) = (HIDWORD(v156) >> 1) | ((_DWORD)v156 << 31);
        LODWORD(v336) = v172 >> 1;
        v58 = v128;
        LODWORD(v316) = v91 >> 1;
        v131 = v84 + *((_QWORD *)v48 - 31) + v139 + (v202 ^ v200 ^ v201) + (v152 & ~v109 ^ v115 & v109);
        HIDWORD(v336) = (HIDWORD(v172) >> 1) | ((_DWORD)v172 << 31);
        v59 = v58 + v131;
        LODWORD(v337) = v172 >> 8;
        HIDWORD(v337) = (HIDWORD(v172) >> 8) | ((_DWORD)v172 << 24);
        LODWORD(v210) = (v58 + v131) >> 14;
        LODWORD(v211) = (v58 + v131) >> 18;
        HIDWORD(v212) = (v58 + v131) >> 9;
        HIDWORD(v210) = (HIDWORD(v59) >> 14) | ((_DWORD)v59 << 18);
        HIDWORD(v211) = (HIDWORD(v59) >> 18) | ((_DWORD)v59 << 14);
        LODWORD(v212) = ((_DWORD)v59 << 23) | (HIDWORD(v59) >> 9);
        v95 += (v208 ^ v209 ^ ((unsigned __int64)v172 >> 6)) + v127 + (((unsigned __int64)v83 >> 7) ^ v206 ^ v207);
        v132 = (v169 & v47 ^ (v169 ^ v47) & v57) + (v205 ^ v203 ^ v204) + v131;
        v140 = v95 + *((_QWORD *)v48 - 30) + v152 + (v212 ^ v210 ^ v211) + (v115 & ~v59 ^ v109 & v59);
        LODWORD(v213) = v132 >> 28;
        HIDWORD(v214) = v132 >> 2;
        HIDWORD(v215) = v132 >> 7;
        HIDWORD(v213) = (HIDWORD(v132) >> 28) | (16 * v132);
        LODWORD(v214) = ((_DWORD)v132 << 30) | (HIDWORD(v132) >> 2);
        LODWORD(v215) = ((_DWORD)v132 << 25) | (HIDWORD(v132) >> 7);
        LODWORD(v228) = v95 >> 19;
        HIDWORD(v229) = v95 >> 29;
        HIDWORD(v228) = (HIDWORD(v95) >> 19) | ((_DWORD)v95 << 13);
        LODWORD(v52) = (unsigned __int64)(v169 + v140) >> 32;
        v153 = v169 + v140;
        LODWORD(v220) = (v169 + v140) >> 14;
        LODWORD(v229) = (8 * v95) | (HIDWORD(v95) >> 29);
        LODWORD(v221) = (v169 + v140) >> 18;
        HIDWORD(v221) = ((unsigned int)v52 >> 18) | (((_DWORD)v169 + (_DWORD)v140) << 14);
        HIDWORD(v222) = (v169 + v140) >> 9;
        HIDWORD(v220) = ((unsigned int)v52 >> 14) | (((_DWORD)v169 + (_DWORD)v140) << 18);
        HIDWORD(v52) = (((_DWORD)v169 + (_DWORD)v140) << 23) | ((unsigned int)v52 >> 9);
        LODWORD(v52) = v57 ^ v47;
        LODWORD(v222) = HIDWORD(v52);
        HIDWORD(v52) = HIDWORD(v57) ^ HIDWORD(v47);
        v141 = (v57 & v47 ^ v132 & v52) + (v213 ^ v214 ^ v215) + v140;
        v83 += (((unsigned __int64)v84 >> 6) ^ v218 ^ v219) + v150 + (((unsigned __int64)v88 >> 7) ^ v216 ^ v217);
        v164 = v83 + v115 + *((_QWORD *)v48 - 29) + (v222 ^ v220 ^ v221) + (v109 & ~v153 ^ v59 & v153);
        v116 = v164 + v47;
        LODWORD(v223) = v141 >> 28;
        HIDWORD(v224) = v141 >> 2;
        LODWORD(v230) = (v164 + v47) >> 14;
        LODWORD(v231) = (v164 + v47) >> 18;
        HIDWORD(v225) = v141 >> 7;
        HIDWORD(v232) = (v164 + v47) >> 9;
        HIDWORD(v223) = (HIDWORD(v141) >> 28) | (16 * v141);
        LODWORD(v224) = ((_DWORD)v141 << 30) | (HIDWORD(v141) >> 2);
        LODWORD(v225) = ((_DWORD)v141 << 25) | (HIDWORD(v141) >> 7);
        HIDWORD(v230) = ((unsigned int)((unsigned __int64)(v164 + v47) >> 32) >> 14)
                      | (((_DWORD)v164 + (_DWORD)v47) << 18);
        HIDWORD(v231) = (HIDWORD(v116) >> 18) | ((_DWORD)v116 << 14);
        LODWORD(v232) = ((_DWORD)v116 << 23) | (HIDWORD(v116) >> 9);
        v88 += v156 + (((unsigned __int64)v100 >> 7) ^ v226 ^ v227) + (((unsigned __int64)v95 >> 6) ^ v228 ^ v229);
        v175 = *((_QWORD *)v48 - 28) + v109 + v88;
        v60 = v59 & ~(v164 + v47) ^ v153 & (v164 + v47);
        v61 = (v132 & v57 ^ v141 & (v132 ^ v57)) + (v223 ^ v224 ^ v225) + v164;
        LODWORD(v238) = v83 >> 19;
        HIDWORD(v239) = v83 >> 29;
        LODWORD(v233) = v61 >> 28;
        HIDWORD(v234) = v61 >> 2;
        HIDWORD(v238) = (HIDWORD(v83) >> 19) | ((_DWORD)v83 << 13);
        HIDWORD(v235) = v61 >> 7;
        LODWORD(v239) = (8 * v83) | (HIDWORD(v83) >> 29);
        v62 = (v232 ^ v230 ^ v231) + v175 + v60 + v57;
        LODWORD(v235) = ((_DWORD)v61 << 25) | (HIDWORD(v61) >> 7);
        HIDWORD(v233) = (HIDWORD(v61) >> 28) | (16 * v61);
        LODWORD(v234) = ((_DWORD)v61 << 30) | (HIDWORD(v61) >> 2);
        v165 = v62;
        LODWORD(v240) = v62 >> 14;
        HIDWORD(v240) = (HIDWORD(v62) >> 14) | ((_DWORD)v62 << 18);
        LODWORD(v241) = v62 >> 18;
        HIDWORD(v241) = (HIDWORD(v62) >> 18) | ((_DWORD)v62 << 14);
        LODWORD(v242) = ((_DWORD)v62 << 23) | (HIDWORD(v62) >> 9);
        HIDWORD(v242) = v62 >> 9;
        LODWORD(v248) = v88 >> 19;
        v100 += (((unsigned __int64)v83 >> 6) ^ v238 ^ v239) + v91 + (((unsigned __int64)v121 >> 7) ^ v236 ^ v237);
        v63 = ((v132 ^ v141) & v61 ^ v132 & v141) + (v235 ^ v233 ^ v234) + (v232 ^ v230 ^ v231) + v175 + v60;
        HIDWORD(v249) = v88 >> 29;
        LODWORD(v243) = v63 >> 28;
        HIDWORD(v244) = v63 >> 2;
        HIDWORD(v245) = v63 >> 7;
        HIDWORD(v248) = (HIDWORD(v88) >> 19) | ((_DWORD)v88 << 13);
        LODWORD(v249) = (8 * v88) | (HIDWORD(v88) >> 29);
        HIDWORD(v243) = (HIDWORD(v63) >> 28) | (16 * v63);
        LODWORD(v244) = ((_DWORD)v63 << 30) | (HIDWORD(v63) >> 2);
        LODWORD(v245) = ((_DWORD)v63 << 25) | (HIDWORD(v63) >> 7);
        v64 = (v116 & v165 ^ v153 & ~v165) + (v242 ^ v240 ^ v241) + *((_QWORD *)v48 - 27) + v100 + v59;
        v65 = v132 + v64;
        LODWORD(v250) = (v132 + v64) >> 14;
        LODWORD(v251) = (v132 + v64) >> 18;
        HIDWORD(v252) = (v132 + v64) >> 9;
        HIDWORD(v250) = (HIDWORD(v65) >> 14) | ((_DWORD)v65 << 18);
        HIDWORD(v251) = (HIDWORD(v65) >> 18) | ((_DWORD)v65 << 14);
        LODWORD(v258) = v100 >> 19;
        v170 = v132 + v64;
        LODWORD(v252) = ((_DWORD)v65 << 23) | (HIDWORD(v65) >> 9);
        v161 = v63;
        v122 = v121 + v158 + (((unsigned __int64)v102 >> 7) ^ v246 ^ v247);
        HIDWORD(v62) = v122 + (((unsigned __int64)v88 >> 6) ^ v248 ^ v249);
        v121 = v122 + (((unsigned __int64)v88 >> 6) ^ v248 ^ v249);
        v133 = v153
             + *((_QWORD *)v48 - 26)
             + __PAIR64__(HIDWORD(v121), HIDWORD(v62))
             + (v252 ^ v250 ^ v251)
             + (v116 & ~v170 ^ v165 & v170);
        v110 = (v141 & v61 ^ v63 & (v141 ^ v61)) + (v245 ^ v243 ^ v244) + v64;
        LODWORD(v253) = v110 >> 28;
        HIDWORD(v254) = v110 >> 2;
        HIDWORD(v259) = v100 >> 29;
        HIDWORD(v255) = v110 >> 7;
        HIDWORD(v253) = (HIDWORD(v110) >> 28) | (16 * v110);
        LODWORD(v254) = ((_DWORD)v110 << 30) | (HIDWORD(v110) >> 2);
        HIDWORD(v258) = (HIDWORD(v100) >> 19) | ((_DWORD)v100 << 13);
        LODWORD(v259) = (8 * v100) | (HIDWORD(v100) >> 29);
        LODWORD(v255) = ((_DWORD)v110 << 25) | (HIDWORD(v110) >> 7);
        HIDWORD(v62) = (v133 + v141) >> 32;
        LODWORD(v260) = (__int64)(v133 + v141) >> 14;
        LODWORD(v261) = (__int64)(v133 + v141) >> 18;
        LODWORD(v268) = v121 >> 19;
        HIDWORD(v262) = (__int64)(v133 + v141) >> 9;
        LODWORD(v262) = (((_DWORD)v133 + (_DWORD)v141) << 23) | (HIDWORD(v62) >> 9);
        HIDWORD(v260) = (HIDWORD(v62) >> 14) | (((_DWORD)v133 + (_DWORD)v141) << 18);
        v154 = v133 + v141;
        HIDWORD(v261) = (HIDWORD(v62) >> 18) | (((_DWORD)v133 + (_DWORD)v141) << 14);
        HIDWORD(v269) = v121 >> 29;
        v66 = (((unsigned __int64)v100 >> 6) ^ v258 ^ v259)
            + v172
            + (((unsigned __int64)v149 >> 7) ^ v256 ^ v257)
            + v102;
        v103 = (((unsigned __int64)v100 >> 6) ^ v258 ^ v259)
             + v172
             + (((unsigned __int64)v149 >> 7) ^ v256 ^ v257)
             + v102;
        v67 = v133 + (v110 & (v161 ^ v61) ^ v161 & v61) + (v253 ^ v254 ^ v255);
        LODWORD(v263) = v67 >> 28;
        HIDWORD(v264) = v67 >> 2;
        HIDWORD(v265) = v67 >> 7;
        HIDWORD(v263) = (HIDWORD(v67) >> 28) | (16 * v67);
        LODWORD(v264) = ((_DWORD)v67 << 30) | (HIDWORD(v67) >> 2);
        LODWORD(v265) = ((_DWORD)v67 << 25) | (HIDWORD(v67) >> 7);
        HIDWORD(v268) = (HIDWORD(v121) >> 19) | ((_DWORD)v121 << 13);
        LODWORD(v269) = (8 * v121) | (HIDWORD(v121) >> 29);
        LODWORD(v182) = (v103 >> 6) | (HIDWORD(v66) << 26);
        LODWORD(v278) = (v103 >> 19) | (HIDWORD(v66) << 13);
        HIDWORD(v182) = HIDWORD(v66) >> 6;
        v102 = __PAIR64__(HIDWORD(v66), v103);
        v68 = (v260 ^ v261 ^ v262) + v116 + *((_QWORD *)v48 - 25) + v66 + (v165 & ~v154 ^ v170 & v154);
        v69 = v61 + v68;
        HIDWORD(v279) = v102 >> 29;
        LODWORD(v270) = v69 >> 14;
        LODWORD(v271) = v69 >> 18;
        HIDWORD(v272) = v69 >> 9;
        HIDWORD(v270) = (HIDWORD(v69) >> 14) | ((_DWORD)v69 << 18);
        v142 = v69;
        HIDWORD(v271) = (HIDWORD(v69) >> 18) | ((_DWORD)v69 << 14);
        LODWORD(v272) = ((_DWORD)v69 << 23) | (HIDWORD(v69) >> 9);
        HIDWORD(v278) = (HIDWORD(v102) >> 19) | ((_DWORD)v102 << 13);
        v70 = (v161 & v110 ^ v67 & (v161 ^ v110)) + (v265 ^ v263 ^ v264) + v68;
        LODWORD(v273) = v70 >> 28;
        HIDWORD(v274) = v70 >> 2;
        HIDWORD(v275) = v70 >> 7;
        HIDWORD(v65) = (((unsigned __int64)v121 >> 6) ^ v268 ^ v269)
                     + v149
                     + v84
                     + (((unsigned __int64)v105 >> 7) ^ v266 ^ v267);
        HIDWORD(v273) = (HIDWORD(v70) >> 28) | (16 * v70);
        LODWORD(v274) = ((_DWORD)v70 << 30) | (HIDWORD(v70) >> 2);
        LODWORD(v275) = ((_DWORD)v70 << 25) | (HIDWORD(v70) >> 7);
        LODWORD(v279) = (8 * v102) | (HIDWORD(v102) >> 29);
        LODWORD(v288) = (__int64)((((unsigned __int64)v121 >> 6) ^ v268 ^ v269)
                                + v149
                                + v84
                                + (((unsigned __int64)v105 >> 7) ^ v266 ^ v267)) >> 19;
        HIDWORD(v289) = (__int64)((((unsigned __int64)v121 >> 6) ^ v268 ^ v269)
                                + v149
                                + v84
                                + (((unsigned __int64)v105 >> 7) ^ v266 ^ v267)) >> 29;
        v149 += (((unsigned __int64)v121 >> 6) ^ v268 ^ v269) + v84 + (((unsigned __int64)v105 >> 7) ^ v266 ^ v267);
        LODWORD(v183) = (HIDWORD(v65) >> 6) | (HIDWORD(v149) << 26);
        HIDWORD(v288) = (HIDWORD(v149) >> 19) | (HIDWORD(v65) << 13);
        LODWORD(v289) = (8 * HIDWORD(v65)) | (HIDWORD(v149) >> 29);
        HIDWORD(v183) = HIDWORD(v149) >> 6;
        v117 = (v272 ^ v270 ^ v271)
             + v165
             + *((_QWORD *)v48 - 24)
             + __PAIR64__(HIDWORD(v149), HIDWORD(v65))
             + (v154 & v142 ^ v170 & ~v142);
        v166 = v117 + v161;
        LODWORD(v280) = (__int64)(v117 + v161) >> 14;
        LODWORD(v281) = (__int64)(v117 + v161) >> 18;
        HIDWORD(v282) = (__int64)(v117 + v161) >> 9;
        HIDWORD(v280) = (HIDWORD(v166) >> 14) | ((_DWORD)v166 << 18);
        HIDWORD(v281) = (HIDWORD(v166) >> 18) | ((_DWORD)v166 << 14);
        v71 = v117 + ((v67 ^ v110) & v70 ^ v67 & v110) + (v275 ^ v273 ^ v274);
        LODWORD(v283) = v71 >> 28;
        LODWORD(v282) = (((_DWORD)v117 + (_DWORD)v161) << 23) | ((unsigned int)((v117 + v161) >> 32) >> 9);
        HIDWORD(v284) = v71 >> 2;
        HIDWORD(v283) = (HIDWORD(v71) >> 28) | (16 * v71);
        HIDWORD(v285) = v71 >> 7;
        LODWORD(v284) = ((_DWORD)v71 << 30) | (HIDWORD(v71) >> 2);
        LODWORD(v285) = ((_DWORD)v71 << 25) | (HIDWORD(v71) >> 7);
        v105 += (v182 ^ v278 ^ v279) + v95 + (((unsigned __int64)v89 >> 7) ^ v276 ^ v277);
        LODWORD(v298) = v105 >> 19;
        v72 = (v282 ^ v280 ^ v281) + v170 + *((_QWORD *)v48 - 23) + v105 + (v154 & ~v166 ^ v142 & v166);
        v171 = v72 + v110;
        HIDWORD(v299) = v105 >> 29;
        LODWORD(v290) = (v72 + v110) >> 14;
        LODWORD(v291) = (v72 + v110) >> 18;
        HIDWORD(v292) = (v72 + v110) >> 9;
        HIDWORD(v290) = (HIDWORD(v171) >> 14) | ((_DWORD)v171 << 18);
        HIDWORD(v291) = (HIDWORD(v171) >> 18) | ((_DWORD)v171 << 14);
        LODWORD(v292) = ((_DWORD)v171 << 23) | (HIDWORD(v171) >> 9);
        HIDWORD(v298) = (HIDWORD(v105) >> 19) | ((_DWORD)v105 << 13);
        v118 = v72 + (v285 ^ v283 ^ v284) + ((v67 ^ v70) & v71 ^ v67 & v70);
        v89 += (v183 ^ v288 ^ v289) + v83 + (((unsigned __int64)v127 >> 7) ^ v286 ^ v287);
        LODWORD(v293) = v118 >> 28;
        HIDWORD(v294) = v118 >> 2;
        HIDWORD(v293) = (HIDWORD(v118) >> 28) | (16 * v118);
        HIDWORD(v295) = v118 >> 7;
        LODWORD(v294) = ((_DWORD)v118 << 30) | (HIDWORD(v118) >> 2);
        LODWORD(v295) = ((_DWORD)v118 << 25) | (HIDWORD(v118) >> 7);
        LODWORD(v299) = (8 * v105) | (HIDWORD(v105) >> 29);
        LODWORD(v308) = v89 >> 19;
        v73 = (v166 & v171 ^ v142 & ~v171) + (v292 ^ v290 ^ v291) + v154 + *((_QWORD *)v48 - 22) + v89;
        LODWORD(v110) = (v166 & v171 ^ v142 & ~(_DWORD)v171) + (v292 ^ v290 ^ v291) + v154 + *((_DWORD *)v48 - 44) + v89;
        v155 = v73 + v67;
        HIDWORD(v309) = v89 >> 29;
        LODWORD(v300) = (v73 + v67) >> 14;
        LODWORD(v301) = (v73 + v67) >> 18;
        HIDWORD(v302) = (v73 + v67) >> 9;
        HIDWORD(v300) = (HIDWORD(v155) >> 14) | ((_DWORD)v155 << 18);
        HIDWORD(v301) = (HIDWORD(v155) >> 18) | ((_DWORD)v155 << 14);
        LODWORD(v302) = ((_DWORD)v155 << 23) | (HIDWORD(v155) >> 9);
        HIDWORD(v308) = (HIDWORD(v89) >> 19) | ((_DWORD)v89 << 13);
        v111 = __PAIR64__(HIDWORD(v73), v110) + (v295 ^ v293 ^ v294) + (v70 & v71 ^ v118 & (v70 ^ v71));
        LODWORD(v309) = (8 * v89) | (HIDWORD(v89) >> 29);
        LODWORD(v303) = v111 >> 28;
        HIDWORD(v304) = v111 >> 2;
        HIDWORD(v305) = v111 >> 7;
        HIDWORD(v303) = (HIDWORD(v111) >> 28) | (16 * v111);
        LODWORD(v304) = ((_DWORD)v111 << 30) | (HIDWORD(v111) >> 2);
        v127 += (v298 ^ v299 ^ ((unsigned __int64)v105 >> 6)) + (((unsigned __int64)v150 >> 7) ^ v296 ^ v297) + v88;
        LODWORD(v305) = ((_DWORD)v111 << 25) | (HIDWORD(v111) >> 7);
        v134 = (v171 & v155 ^ v166 & ~v155) + v142 + *((_QWORD *)v48 - 21) + v127 + (v302 ^ v300 ^ v301);
        v74 = v134 + v70;
        LODWORD(v311) = v74 >> 18;
        LODWORD(v310) = v74 >> 14;
        HIDWORD(v312) = v74 >> 9;
        HIDWORD(v310) = (HIDWORD(v74) >> 14) | ((_DWORD)v74 << 18);
        v176 = v74;
        HIDWORD(v311) = (HIDWORD(v74) >> 18) | ((_DWORD)v74 << 14);
        LODWORD(v312) = ((_DWORD)v74 << 23) | (HIDWORD(v74) >> 9);
        LODWORD(v318) = v127 >> 19;
        HIDWORD(v319) = v127 >> 29;
        LODWORD(v319) = (8 * v127) | (HIDWORD(v127) >> 29);
        HIDWORD(v318) = (HIDWORD(v127) >> 19) | ((_DWORD)v127 << 13);
        HIDWORD(v316) = (HIDWORD(v91) >> 1) | ((_DWORD)v91 << 31);
        LODWORD(v317) = v91 >> 8;
        v75 = v134 + (v118 & v71 ^ v111 & (v118 ^ v71)) + (v305 ^ v303 ^ v304);
        HIDWORD(v317) = (HIDWORD(v91) >> 8) | ((_DWORD)v91 << 24);
        v162 = v75;
        LODWORD(v313) = v75 >> 28;
        HIDWORD(v314) = v75 >> 2;
        HIDWORD(v315) = v75 >> 7;
        HIDWORD(v313) = (HIDWORD(v75) >> 28) | (16 * v75);
        LODWORD(v314) = ((_DWORD)v75 << 30) | (HIDWORD(v75) >> 2);
        LODWORD(v315) = ((_DWORD)v75 << 25) | (HIDWORD(v75) >> 7);
        v150 += (((unsigned __int64)v89 >> 6) ^ v308 ^ v309) + v100 + (((unsigned __int64)v156 >> 7) ^ v306 ^ v307);
        v135 = (v171 & ~v176 ^ (v73 + v67) & v176) + v166 + *((_QWORD *)v48 - 20) + v150 + (v312 ^ v310 ^ v311);
        LODWORD(v320) = (v135 + v71) >> 14;
        LODWORD(v321) = (v135 + v71) >> 18;
        HIDWORD(v322) = (v135 + v71) >> 9;
        HIDWORD(v320) = ((unsigned int)((unsigned __int64)(v135 + v71) >> 32) >> 14)
                      | (((_DWORD)v135 + (_DWORD)v71) << 18);
        HIDWORD(v321) = ((unsigned int)((unsigned __int64)(v135 + v71) >> 32) >> 18)
                      | (((_DWORD)v135 + (_DWORD)v71) << 14);
        v163 = v135 + v71;
        LODWORD(v322) = (((_DWORD)v135 + (_DWORD)v71) << 23)
                      | ((unsigned int)((unsigned __int64)(v135 + v71) >> 32) >> 9);
        LODWORD(v328) = v150 >> 19;
        HIDWORD(v328) = (HIDWORD(v150) >> 19) | ((_DWORD)v150 << 13);
        HIDWORD(v329) = v150 >> 29;
        LODWORD(v329) = (8 * v150) | (HIDWORD(v150) >> 29);
        v49 = v135 + (v315 ^ v313 ^ v314) + (v75 & (v118 ^ v111) ^ v118 & v111);
        LODWORD(v323) = v49 >> 28;
        HIDWORD(v324) = v49 >> 2;
        v156 += (((unsigned __int64)v127 >> 6) ^ v318 ^ v319) + v121 + (((unsigned __int64)v91 >> 7) ^ v316 ^ v317);
        HIDWORD(v323) = (HIDWORD(v49) >> 28) | (16 * v49);
        HIDWORD(v325) = v49 >> 7;
        LODWORD(v324) = ((_DWORD)v49 << 30) | (HIDWORD(v49) >> 2);
        LODWORD(v325) = ((_DWORD)v49 << 25) | (HIDWORD(v49) >> 7);
        LODWORD(v326) = v158 >> 1;
        LODWORD(v327) = v158 >> 8;
        HIDWORD(v326) = (HIDWORD(v158) >> 1) | ((_DWORD)v158 << 31);
        HIDWORD(v327) = (HIDWORD(v158) >> 8) | ((_DWORD)v158 << 24);
        LODWORD(v338) = v156 >> 19;
        HIDWORD(v339) = v156 >> 29;
        LODWORD(v339) = (8 * v156) | (HIDWORD(v156) >> 29);
        HIDWORD(v338) = (HIDWORD(v156) >> 19) | ((_DWORD)v156 << 13);
        v76 = (v75 ^ v111) & v49;
        v136 = (v322 ^ v320 ^ v321) + v171 + *((_QWORD *)v48 - 19) + v156 + ((v73 + v67) & ~v163 ^ v74 & v163);
        v139 = v136 + v118;
        v77 = v325 ^ v323 ^ v324;
        LODWORD(v78) = (v162 & v111 ^ v76) + v77;
        v79 = (v162 & v111 ^ v76) + v77;
        HIDWORD(v77) = (v136 + v118) >> 32 << 23;
        HIDWORD(v78) = HIDWORD(v79);
        LODWORD(v76) = (unsigned int)(v136 + v118) >> 14;
        HIDWORD(v76) = (unsigned int)(v136 + v118) >> 18;
        v128 = v136 + v78;
        LODWORD(v330) = v76 | (HIDWORD(v139) << 18);
        LODWORD(v331) = HIDWORD(v76) | (HIDWORD(v139) << 14);
        HIDWORD(v332) = HIDWORD(v77) | ((unsigned int)v139 >> 9);
        HIDWORD(v330) = (HIDWORD(v139) >> 14) | ((_DWORD)v139 << 18);
        HIDWORD(v331) = (HIDWORD(v139) >> 18) | ((_DWORD)v139 << 14);
        LODWORD(v333) = v128 >> 28;
        HIDWORD(v334) = v128 >> 2;
        LODWORD(v332) = ((_DWORD)v139 << 23) | (HIDWORD(v139) >> 9);
        HIDWORD(v335) = v128 >> 7;
        HIDWORD(v333) = (HIDWORD(v128) >> 28) | (16 * v128);
        LODWORD(v334) = ((_DWORD)v128 << 30) | (HIDWORD(v128) >> 2);
        LODWORD(v335) = ((_DWORD)v128 << 25) | (HIDWORD(v128) >> 7);
        v91 += (((unsigned __int64)v150 >> 6) ^ v328 ^ v329) + v102 + (((unsigned __int64)v158 >> 7) ^ v326 ^ v327);
        v80 = v155 + *((_QWORD *)v48 - 18) + v91 + (v332 ^ v330 ^ v331) + (v163 & v139 ^ v74 & ~v139);
        LODWORD(v77) = (unsigned int)(v111 + v80) >> 18;
        HIDWORD(v77) = (unsigned int)(v111 + v80) >> 14;
        v152 = v111 + v80;
        v81 = (v335 ^ v333 ^ v334) + (v128 & (v162 ^ v49) ^ v162 & v49) + v80;
        LODWORD(v343) = v81 >> 28;
        HIDWORD(v344) = v81 >> 2;
        LODWORD(v340) = HIDWORD(v77) | (HIDWORD(v152) << 18);
        HIDWORD(v342) = v152 >> 9;
        HIDWORD(v340) = (HIDWORD(v152) >> 14) | ((_DWORD)v152 << 18);
        LODWORD(v341) = v77 | (HIDWORD(v152) << 14);
        LODWORD(v344) = ((_DWORD)v81 << 30) | (HIDWORD(v81) >> 2);
        HIDWORD(v341) = (HIDWORD(v152) >> 18) | ((_DWORD)v152 << 14);
        LODWORD(v342) = ((_DWORD)v152 << 23) | (HIDWORD(v152) >> 9);
        v169 = v81;
        LODWORD(v345) = ((_DWORD)v81 << 25) | (HIDWORD(v81) >> 7);
        HIDWORD(v343) = (HIDWORD(v81) >> 28) | (16 * v81);
        HIDWORD(v345) = v81 >> 7;
        v158 += (((unsigned __int64)v156 >> 6) ^ v338 ^ v339) + v149 + (((unsigned __int64)v172 >> 7) ^ v336 ^ v337);
        v82 = (v342 ^ v340 ^ v341) + v176 + *((_QWORD *)v48 - 17) + v158 + (v163 & ~v152 ^ v139 & v152);
        v115 = v162 + v82;
        v47 = v82 + (v81 & (v128 ^ v49) ^ v128 & v49) + (v345 ^ v343 ^ v344);
      }
      while ( "_enc" != v48 );
      v184 += v47;
      v346 += v169;
      v364 += v49;
      v185 += v115;
      v348 += v152;
      v350 += v139;
      v365 += v163;
      *v488 = v184;
      --v487;
      v488[1] = v346;
      v488[2] = v128 + v349;
      v488[3] = v364;
      v488[4] = v185;
      v488[5] = v348;
      v488[6] = v350;
      v488[7] = v365;
    }
    while ( v487 != -1 );
  }
  __asm { POP.W           {R4-R11,PC} }
}
