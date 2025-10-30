int __fastcall sub_148BC4(_BYTE *a1, void *a2, size_t a3, void *a4, void *src)
{
  unsigned __int64 v9; // r2
  int v10; // r1
  unsigned __int64 v11; // kr1A8_8
  int v12; // r7
  __int64 v13; // r8
  __int64 v14; // r6
  __int64 v15; // kr220_8
  __int64 v16; // r10
  __int64 v17; // r8
  __int64 v18; // r10
  __int64 v19; // r2
  __int64 v20; // r6
  __int64 v21; // r8
  __int64 v22; // r10
  unsigned __int64 v23; // r4
  unsigned __int64 v24; // r8
  __int64 v25; // r8
  __int64 v26; // r6
  unsigned __int64 v27; // kr228_8
  __int64 v28; // r4
  __int64 v29; // r8
  __int64 v30; // r2
  unsigned __int64 v31; // r4
  unsigned __int64 v32; // kr230_8
  __int64 v33; // r4
  __int64 v34; // r6
  int v35; // lr
  __int64 v36; // r4
  __int64 v37; // r6
  signed __int64 v38; // r8
  __int64 v39; // r4
  __int64 v41; // [sp+0h] [bp-318h]
  __int64 v42; // [sp+0h] [bp-318h]
  __int64 v43; // [sp+0h] [bp-318h]
  __int64 v44; // [sp+0h] [bp-318h]
  __int64 v45; // [sp+0h] [bp-318h]
  __int64 v46; // [sp+0h] [bp-318h]
  unsigned __int64 v47; // [sp+0h] [bp-318h]
  __int64 v48; // [sp+8h] [bp-310h]
  __int64 v49; // [sp+8h] [bp-310h]
  __int64 v50; // [sp+8h] [bp-310h]
  __int64 v51; // [sp+8h] [bp-310h]
  __int64 v52; // [sp+10h] [bp-308h]
  __int64 v53; // [sp+10h] [bp-308h]
  __int64 v54; // [sp+10h] [bp-308h]
  __int64 v55; // [sp+18h] [bp-300h]
  unsigned __int64 v56; // [sp+18h] [bp-300h]
  __int64 v57; // [sp+18h] [bp-300h]
  __int64 v58; // [sp+18h] [bp-300h]
  __int64 v59; // [sp+20h] [bp-2F8h]
  __int64 v60; // [sp+20h] [bp-2F8h]
  __int64 v61; // [sp+20h] [bp-2F8h]
  __int64 v62; // [sp+20h] [bp-2F8h]
  __int64 v63; // [sp+20h] [bp-2F8h]
  __int64 v64; // [sp+20h] [bp-2F8h]
  __int64 v65; // [sp+28h] [bp-2F0h]
  __int64 v66; // [sp+28h] [bp-2F0h]
  __int64 v67; // [sp+28h] [bp-2F0h]
  __int64 v68; // [sp+28h] [bp-2F0h]
  __int64 v69; // [sp+30h] [bp-2E8h]
  __int64 v70; // [sp+30h] [bp-2E8h]
  __int64 v71; // [sp+30h] [bp-2E8h]
  __int64 v72; // [sp+30h] [bp-2E8h]
  __int64 v73; // [sp+30h] [bp-2E8h]
  __int64 v74; // [sp+30h] [bp-2E8h]
  __int64 v75; // [sp+38h] [bp-2E0h]
  __int64 v76; // [sp+38h] [bp-2E0h]
  __int64 v77; // [sp+38h] [bp-2E0h]
  __int64 v78; // [sp+38h] [bp-2E0h]
  __int64 v79; // [sp+40h] [bp-2D8h]
  __int64 v80; // [sp+40h] [bp-2D8h]
  unsigned __int64 v81; // [sp+40h] [bp-2D8h]
  __int64 v82; // [sp+48h] [bp-2D0h]
  __int64 v83; // [sp+48h] [bp-2D0h]
  __int64 v84; // [sp+50h] [bp-2C8h]
  unsigned __int64 v85; // [sp+50h] [bp-2C8h]
  __int64 v86; // [sp+50h] [bp-2C8h]
  __int64 v87; // [sp+50h] [bp-2C8h]
  __int64 v88; // [sp+58h] [bp-2C0h]
  __int64 v89; // [sp+58h] [bp-2C0h]
  __int64 v90; // [sp+58h] [bp-2C0h]
  __int64 v91; // [sp+60h] [bp-2B8h]
  unsigned __int64 v92; // [sp+60h] [bp-2B8h]
  unsigned __int64 v93; // [sp+60h] [bp-2B8h]
  __int64 v94; // [sp+68h] [bp-2B0h]
  __int64 v95; // [sp+68h] [bp-2B0h]
  __int64 v96; // [sp+70h] [bp-2A8h]
  __int64 v97; // [sp+70h] [bp-2A8h]
  unsigned __int64 v98; // [sp+70h] [bp-2A8h]
  __int64 v99; // [sp+70h] [bp-2A8h]
  __int64 v100; // [sp+78h] [bp-2A0h]
  __int64 v101; // [sp+78h] [bp-2A0h]
  __int64 v102; // [sp+80h] [bp-298h]
  __int64 v103; // [sp+80h] [bp-298h]
  __int64 v104; // [sp+80h] [bp-298h]
  unsigned __int64 v105; // [sp+80h] [bp-298h]
  __int64 v106; // [sp+80h] [bp-298h]
  __int64 v107; // [sp+88h] [bp-290h]
  __int64 v108; // [sp+88h] [bp-290h]
  __int64 v109; // [sp+88h] [bp-290h]
  __int64 v110; // [sp+90h] [bp-288h]
  __int64 v111; // [sp+90h] [bp-288h]
  __int64 v112; // [sp+90h] [bp-288h]
  __int64 v113; // [sp+90h] [bp-288h]
  __int64 v114; // [sp+90h] [bp-288h]
  __int64 v115; // [sp+90h] [bp-288h]
  __int64 v116; // [sp+98h] [bp-280h]
  __int64 v117; // [sp+98h] [bp-280h]
  __int64 v118; // [sp+98h] [bp-280h]
  __int64 v119; // [sp+98h] [bp-280h]
  unsigned __int64 v120; // [sp+B0h] [bp-268h]
  unsigned int v121; // [sp+B8h] [bp-260h]
  unsigned __int64 v122; // [sp+B8h] [bp-260h]
  __int64 v123; // [sp+B8h] [bp-260h]
  unsigned __int64 v124; // [sp+B8h] [bp-260h]
  unsigned int v125; // [sp+C0h] [bp-258h]
  __int64 v126; // [sp+C0h] [bp-258h]
  __int64 v127; // [sp+C0h] [bp-258h]
  __int64 v128; // [sp+C0h] [bp-258h]
  __int64 v129; // [sp+D0h] [bp-248h]
  __int64 v130; // [sp+D0h] [bp-248h]
  __int64 v131; // [sp+D0h] [bp-248h]
  __int64 v132; // [sp+D0h] [bp-248h]
  unsigned __int64 v133; // [sp+D0h] [bp-248h]
  __int64 v134; // [sp+D0h] [bp-248h]
  unsigned __int64 v135; // [sp+D8h] [bp-240h]
  __int64 v136; // [sp+D8h] [bp-240h]
  __int64 v137; // [sp+D8h] [bp-240h]
  __int64 v138; // [sp+E0h] [bp-238h]
  unsigned __int64 v139; // [sp+E0h] [bp-238h]
  __int64 v140; // [sp+E0h] [bp-238h]
  __int64 v141; // [sp+E8h] [bp-230h]
  __int64 v142; // [sp+E8h] [bp-230h]
  unsigned __int64 v143; // [sp+E8h] [bp-230h]
  __int64 v144; // [sp+E8h] [bp-230h]
  __int64 v145; // [sp+E8h] [bp-230h]
  _BYTE *v146; // [sp+F4h] [bp-224h]
  __int64 v147; // [sp+F8h] [bp-220h]
  unsigned __int64 v148; // [sp+F8h] [bp-220h]
  __int64 v149; // [sp+F8h] [bp-220h]
  unsigned __int64 v150; // [sp+F8h] [bp-220h]
  __int64 v151; // [sp+100h] [bp-218h]
  unsigned __int64 v152; // [sp+100h] [bp-218h]
  __int64 v153; // [sp+100h] [bp-218h]
  __int64 v154; // [sp+100h] [bp-218h]
  __int64 v155; // [sp+108h] [bp-210h]
  unsigned __int64 v156; // [sp+108h] [bp-210h]
  __int64 v157; // [sp+108h] [bp-210h]
  __int64 v158; // [sp+110h] [bp-208h]
  __int64 v159; // [sp+110h] [bp-208h]
  __int64 v160; // [sp+110h] [bp-208h]
  __int64 v161; // [sp+118h] [bp-200h]
  __int64 v162; // [sp+118h] [bp-200h]
  __int64 v163; // [sp+118h] [bp-200h]
  __int64 v164; // [sp+118h] [bp-200h]
  __int64 v165; // [sp+120h] [bp-1F8h]
  __int64 v166; // [sp+120h] [bp-1F8h]
  __int64 v167; // [sp+120h] [bp-1F8h]
  unsigned __int64 v168; // [sp+120h] [bp-1F8h]
  __int64 v169; // [sp+128h] [bp-1F0h]
  __int64 v170; // [sp+128h] [bp-1F0h]
  __int64 v171; // [sp+128h] [bp-1F0h]
  __int64 v172; // [sp+130h] [bp-1E8h]
  unsigned __int64 v173; // [sp+130h] [bp-1E8h]
  __int64 v174; // [sp+130h] [bp-1E8h]
  __int64 v175; // [sp+130h] [bp-1E8h]
  __int64 v176; // [sp+130h] [bp-1E8h]
  unsigned __int64 v177; // [sp+130h] [bp-1E8h]
  unsigned __int64 v178; // [sp+130h] [bp-1E8h]
  __int64 v179; // [sp+138h] [bp-1E0h]
  __int64 v180; // [sp+138h] [bp-1E0h]
  unsigned __int64 v181; // [sp+138h] [bp-1E0h]
  __int64 v182; // [sp+138h] [bp-1E0h]
  __int64 v183; // [sp+138h] [bp-1E0h]
  unsigned __int64 v184; // [sp+138h] [bp-1E0h]
  unsigned __int64 v185; // [sp+140h] [bp-1D8h]
  __int64 v186; // [sp+140h] [bp-1D8h]
  __int64 v187; // [sp+140h] [bp-1D8h]
  unsigned __int64 v188; // [sp+140h] [bp-1D8h]
  __int64 v189; // [sp+148h] [bp-1D0h]
  __int64 v190; // [sp+148h] [bp-1D0h]
  __int64 v191; // [sp+148h] [bp-1D0h]
  unsigned __int64 v192; // [sp+148h] [bp-1D0h]
  unsigned __int64 v193; // [sp+150h] [bp-1C8h]
  __int64 v194; // [sp+158h] [bp-1C0h]
  __int64 v195; // [sp+158h] [bp-1C0h]
  unsigned __int64 v196; // [sp+158h] [bp-1C0h]
  __int64 v197; // [sp+158h] [bp-1C0h]
  __int64 v198; // [sp+158h] [bp-1C0h]
  __int64 v199; // [sp+158h] [bp-1C0h]
  __int64 v200; // [sp+160h] [bp-1B8h]
  __int64 v201; // [sp+160h] [bp-1B8h]
  __int64 v202; // [sp+160h] [bp-1B8h]
  unsigned __int64 v203; // [sp+160h] [bp-1B8h]
  unsigned __int64 v204; // [sp+168h] [bp-1B0h]
  __int64 v205; // [sp+168h] [bp-1B0h]
  unsigned __int64 v206; // [sp+168h] [bp-1B0h]
  unsigned __int64 v207; // [sp+168h] [bp-1B0h]
  __int64 v208; // [sp+170h] [bp-1A8h]
  __int64 v209; // [sp+170h] [bp-1A8h]
  unsigned __int64 v210; // [sp+170h] [bp-1A8h]
  __int64 v211; // [sp+170h] [bp-1A8h]
  __int64 v212; // [sp+178h] [bp-1A0h]
  __int64 v213; // [sp+178h] [bp-1A0h]
  __int64 v214; // [sp+178h] [bp-1A0h]
  __int64 v215; // [sp+178h] [bp-1A0h]
  __int64 v216; // [sp+178h] [bp-1A0h]
  __int64 v217; // [sp+178h] [bp-1A0h]
  __int64 v218; // [sp+180h] [bp-198h]
  __int64 v219; // [sp+180h] [bp-198h]
  __int64 v220; // [sp+180h] [bp-198h]
  __int64 v221; // [sp+188h] [bp-190h]
  unsigned __int64 v222; // [sp+188h] [bp-190h]
  __int64 v223; // [sp+190h] [bp-188h]
  __int64 v224; // [sp+198h] [bp-180h]
  __int64 v225; // [sp+198h] [bp-180h]
  __int64 v226; // [sp+198h] [bp-180h]
  unsigned __int64 v227; // [sp+1A0h] [bp-178h]
  unsigned __int64 v228; // [sp+1A0h] [bp-178h]
  __int64 v229; // [sp+1B0h] [bp-168h]
  char v230[32]; // [sp+1E8h] [bp-130h] BYREF
  int v231[10]; // [sp+208h] [bp-110h] BYREF
  _DWORD v232[10]; // [sp+230h] [bp-E8h] BYREF
  _BYTE v233[2]; // [sp+258h] [bp-C0h] BYREF
  unsigned int v234; // [sp+25Ah] [bp-BEh]
  unsigned __int8 v235; // [sp+25Eh] [bp-BAh]
  _BYTE v236[7]; // [sp+25Fh] [bp-B9h]
  unsigned __int8 v237; // [sp+266h] [bp-B2h]
  unsigned int v238; // [sp+267h] [bp-B1h]
  unsigned __int8 v239; // [sp+26Bh] [bp-ADh]
  unsigned __int8 v240; // [sp+26Ch] [bp-ACh]
  unsigned __int8 v241; // [sp+26Dh] [bp-ABh]
  unsigned __int8 v242; // [sp+26Eh] [bp-AAh]
  unsigned int v243; // [sp+26Fh] [bp-A9h]
  unsigned __int8 v244; // [sp+273h] [bp-A5h]
  unsigned int v245; // [sp+274h] [bp-A4h]
  char v246[32]; // [sp+278h] [bp-A0h] BYREF
  unsigned __int8 v247[2]; // [sp+298h] [bp-80h] BYREF
  unsigned int v248; // [sp+29Ah] [bp-7Eh]
  unsigned __int8 v249; // [sp+29Eh] [bp-7Ah]
  _BYTE v250[7]; // [sp+29Fh] [bp-79h]
  unsigned __int8 v251; // [sp+2A6h] [bp-72h]
  unsigned int v252; // [sp+2A7h] [bp-71h]
  unsigned __int8 v253; // [sp+2ABh] [bp-6Dh]
  unsigned __int8 v254; // [sp+2ACh] [bp-6Ch]
  unsigned __int8 v255; // [sp+2ADh] [bp-6Bh]
  unsigned __int8 v256; // [sp+2AEh] [bp-6Ah]
  unsigned int v257; // [sp+2AFh] [bp-69h]
  unsigned __int8 v258; // [sp+2B3h] [bp-65h]
  unsigned int v259; // [sp+2B4h] [bp-64h]
  unsigned __int8 v260; // [sp+2D8h] [bp-40h] BYREF
  unsigned __int8 v261; // [sp+2D9h] [bp-3Fh]
  unsigned int v262; // [sp+2DAh] [bp-3Eh]
  unsigned __int8 v263; // [sp+2DEh] [bp-3Ah]
  _BYTE v264[7]; // [sp+2DFh] [bp-39h]
  unsigned __int8 v265; // [sp+2E6h] [bp-32h]
  unsigned int v266; // [sp+2E7h] [bp-31h]
  unsigned __int8 v267; // [sp+2EBh] [bp-2Dh]
  unsigned __int8 v268; // [sp+2ECh] [bp-2Ch]
  unsigned __int8 v269; // [sp+2EDh] [bp-2Bh]
  unsigned __int8 v270; // [sp+2EEh] [bp-2Ah]
  unsigned int v271; // [sp+2EFh] [bp-29h]
  unsigned __int8 v272; // [sp+2F3h] [bp-25h]
  unsigned int v273; // [sp+2F4h] [bp-24h]
  int v274; // [sp+318h] [bp+0h] BYREF
  int v275; // [sp+340h] [bp+28h] BYREF
  char v276[80]; // [sp+368h] [bp+50h] BYREF
  int v277[55]; // [sp+3B8h] [bp+A0h] BYREF

  sub_1065B8((int)v277);
  sub_106AB8((int)v277, src, 0x20u);
  sub_106678(v233, v277);
  HIBYTE(v245) = HIBYTE(v245) & 0x3F | 0x40;
  v233[0] &= 0xF8u;
  sub_1065B8((int)v277);
  sub_106AB8((int)v277, v246, 0x20u);
  sub_106AB8((int)v277, a2, a3);
  sub_106678(v247, v277);
  sub_143E0C(v247);
  sub_148968(&v274, (int)v247);
  sub_14622C(v231, v276);
  sub_141D74(v232, &v274, v231);
  sub_141D74(&v260, &v275, v231);
  sub_141BC4(a1, &v260);
  sub_141BC4(v230, v232);
  a1[31] ^= (v230[0] & 1) << 7;
  sub_1065B8((int)v277);
  v146 = a1;
  sub_106AB8((int)v277, a1, 0x20u);
  sub_106AB8((int)v277, a4, 0x20u);
  sub_106AB8((int)v277, a2, a3);
  sub_106678(&v260, v277);
  sub_143E0C(&v260);
  v107 = (*(_DWORD *)v236 >> 7) & 0x1FFFFF;
  v100 = (v260 | (v261 << 8) | ((unsigned __int8)v262 << 16)) & 0x1FFFFFLL;
  v102 = (((v236[0] << 16) | (v235 << 8) | (unsigned int)HIBYTE(v234)) >> 2) & 0x1FFFFFLL;
  v96 = (v262 >> 5) & 0x1FFFFF;
  v59 = (((v263 << 8) | (v264[0] << 16) | (unsigned int)HIBYTE(v262)) >> 2) & 0x1FFFFFLL;
  v116 = (v234 >> 5) & 0x1FFFFF;
  v110 = (v233[0] | (v233[1] << 8) | ((unsigned __int8)v234 << 16)) & 0x1FFFFF;
  v41 = (*(_DWORD *)v264 >> 7) & 0x1FFFFFLL;
  v55 = (*(_DWORD *)&v236[3] >> 4) & 0x1FFFFFLL;
  v75 = (v238 >> 6) & 0x1FFFFFLL;
  v121 = (unsigned int)(HIBYTE(v238) | (v239 << 8) | (v240 << 16)) >> 3;
  v79 = (v241 | ((unsigned __int8)v243 << 16) | (v242 << 8)) & 0x1FFFFFLL;
  v91 = (((v237 << 8) | ((unsigned __int8)v238 << 16) | (unsigned int)v236[6]) >> 1) & 0x1FFFFF;
  v125 = (__int64)(HIBYTE(v266) | (v267 << 8) | (unsigned __int64)(v268 << 16)) >> 3;
  v48 = (*(_DWORD *)&v264[3] >> 4) & 0x1FFFFF;
  v52 = ((unsigned int)(v264[6] | (v265 << 8) | ((unsigned __int8)v266 << 16)) >> 1) & 0x1FFFFF;
  v82 = ((unsigned int)(HIBYTE(v243) | ((unsigned __int8)v245 << 16) | (v244 << 8)) >> 2) & 0x1FFFFFLL;
  v65 = (v266 >> 6) & 0x1FFFFF;
  LODWORD(v9) = (v251 << 8) | ((unsigned __int8)v252 << 16) | v250[6];
  HIDWORD(v9) = (unsigned __int64)v251 >> 24;
  v165 = v96 * (unsigned int)v116
       + v100 * (unsigned int)v102
       + ((((v249 << 8) | (v250[0] << 16) | (unsigned int)HIBYTE(v248)) >> 2) & 0x1FFFFFLL)
       + v59 * (unsigned int)v110;
  v194 = v59 * (unsigned int)v116
       + v96 * (unsigned int)v102
       + v100 * (unsigned int)v107
       + ((*(_DWORD *)v250 >> 7) & 0x1FFFFF)
       + v41 * (unsigned int)v110;
  v189 = v100 * (unsigned int)v116 + ((v248 >> 5) & 0x1FFFFF) + v96 * (unsigned int)v110;
  v84 = (v243 >> 5) & 0x1FFFFFLL;
  v161 = ((((unsigned __int8)v248 << 16) | (v247[1] << 8) | v247[0]) & 0x1FFFFF) + v100 * (unsigned int)v110;
  v229 = ((v255 | (v256 << 8) | ((unsigned __int8)v257 << 16)) & 0x1FFFFFLL) + v79 * v100;
  v69 = (v269 | ((unsigned __int8)v271 << 16) | (v270 << 8)) & 0x1FFFFFLL;
  v88 = ((__int64)(HIBYTE(v271) | ((unsigned __int64)v272 << 8) | ((unsigned __int64)(unsigned __int8)v273 << 16)) >> 2)
      & 0x1FFFFF;
  v94 = (v271 >> 5) & 0x1FFFFFLL;
  v204 = v116 * v65
       + v59 * (unsigned int)v91
       + v96 * (unsigned int)v75
       + (((v253 << 8) | (unsigned __int64)(v254 << 16) | HIBYTE(v252)) >> 3)
       + v100 * v121
       + v41 * v55
       + v107 * v48
       + v102 * v52
       + v125 * v110;
  v169 = ((*(_DWORD *)&v250[3] >> 4) & 0x1FFFFFLL)
       + v100 * (unsigned int)v55
       + v107 * v96
       + v59 * v102
       + v116 * v41
       + v110 * v48;
  v172 = v116 * v52
       + v100 * (unsigned int)v75
       + ((v252 >> 6) & 0x1FFFFF)
       + v96 * (unsigned int)v91
       + v55 * v59
       + v41 * v107
       + v102 * v48
       + v110 * v65;
  v200 = ((v9 >> 1) & 0x1FFFFF)
       + v100 * (unsigned int)v91
       + v55 * v96
       + v107 * v59
       + v102 * v41
       + v116 * v48
       + v110 * v52;
  v10 = v100 * HIDWORD(v84) + v84 * HIDWORD(v100);
  v151 = v84 * v96
       + (((((unsigned __int8)v259 << 16) | (v258 << 8) | (unsigned int)HIBYTE(v257)) >> 2) & 0x1FFFFFLL)
       + v100 * v82;
  v11 = (unsigned int)v100 * (unsigned __int64)(unsigned int)v84;
  LODWORD(v100) = v100 * v84;
  HIDWORD(v100) = v10 + HIDWORD(v11);
  v179 = v229 + v121 * v96 + v75 * v59 + v91 * v41 + v55 * v48 + v107 * v52 + v65 * v102 + v125 * v116 + v110 * v69;
  v185 = v151
       + v79 * v59
       + __PAIR64__(
           (((unsigned int)v41 * (unsigned __int64)v121) >> 32) + v121 * HIDWORD(v41),
           (unsigned int)v41 * v121)
       + v75 * v48
       + v52 * v91
       + v65 * v55
       + v107 * v125
       + v102 * v69
       + v116 * v94
       + v88 * v110;
  v208 = v100
       + ((v257 >> 5) & 0x1FFFFF)
       + v79 * v96
       + v59 * v121
       + v41 * v75
       + v48 * v91
       + v52 * v55
       + v65 * v107
       + v102 * v125
       + v116 * v69
       + v110 * v94;
  v158 = ((v260 | (v261 << 8) | ((unsigned __int8)v262 << 16)) & 0x1FFFFFLL) * (v245 >> 7)
       + (v259 >> 7)
       + v82 * v96
       + v59 * v84
       + v79 * v41
       + v48 * v121
       + v75 * v52
       + v91 * v65
       + v55 * v125
       + v69 * v107
       + v102 * v94
       + v88 * v116
       + v110 * (v273 >> 7);
  v212 = v59 * (v245 >> 7)
       + v82 * v41
       + v84 * v48
       + v79 * v52
       + v65 * v121
       + v125 * v75
       + v91 * v69
       + v55 * v94
       + v107 * v88
       + v102 * (v273 >> 7);
  v152 = v107 * (v273 >> 7)
       + v55 * v88
       + v91 * v94
       + v84 * v52
       + v41 * (v245 >> 7)
       + v82 * v48
       + v79 * v65
       + v125 * (unsigned __int64)v121
       + v75 * v69;
  v147 = v116 * (v273 >> 7)
       + v96 * (v245 >> 7)
       + v82 * v59
       + v41 * v84
       + v79 * v48
       + v52 * v121
       + v75 * v65
       + v125 * v91
       + v69 * v55
       + v107 * v94
       + v102 * v88;
  v155 = v189 + ((v161 + 0x100000) >> 21);
  v97 = (v165 + 0x100000) >> 21;
  v103 = v69 * v121 + v84 * v65 + v48 * (v245 >> 7) + v52 * v82 + v125 * v79;
  v12 = v88 * HIDWORD(v84) + v84 * HIDWORD(v88);
  v111 = v84 * (v273 >> 7);
  v224 = v65 * (v245 >> 7) + v82 * v125 + v84 * v69;
  v190 = v52 * (v245 >> 7) + v82 * v65 + v125 * v84 + v79 * v69 + v94 * v121;
  LODWORD(v65) = v88 * v84;
  v85 = v125 * (unsigned __int64)(v245 >> 7) + v69 * v82 + v84 * v94;
  HIDWORD(v65) = v12 + ((v88 * (unsigned __int64)((v243 >> 5) & 0x1FFFFF)) >> 32);
  v117 = v88 * (v245 >> 7);
  v126 = v82 * (v273 >> 7);
  v141 = v55 * (v273 >> 7) + v103 + v94 * v75 + v91 * v88;
  v223 = v161 - ((v161 + 0x100000) >> 21 << 21);
  v129 = v91 * (v273 >> 7) + v190 + v75 * v88;
  v42 = v88 * v121;
  v122 = v121 * (unsigned __int64)(v273 >> 7) + v85 + v79 * v88;
  v135 = (v273 >> 7) * (unsigned __int64)(v245 >> 7);
  v218 = v75 * (v273 >> 7) + v42 + v224 + v79 * v94;
  v112 = v111 + v94 * (v245 >> 7) + v82 * v88;
  v221 = v65 + v69 * (v245 >> 7) + v82 * v94 + v79 * (v273 >> 7);
  v138 = v194 + v97;
  v70 = (__int64)(v122 + 0x100000) >> 21;
  v43 = (v169 + 0x100000) >> 21;
  v76 = (v112 + 0x100000) >> 21;
  HIDWORD(v13) = (v185 + 0x100000) >> 32;
  HIDWORD(v91) = (unsigned __int64)(v147 + 0x100000) >> 32;
  HIDWORD(v14) = (v152 + 0x100000) >> 32;
  HIDWORD(v88) = (unsigned __int64)(v179 + 0x100000) >> 32;
  HIDWORD(v94) = (unsigned __int64)(v129 + 0x100000) >> 32;
  HIDWORD(v82) = (unsigned __int64)(v172 + 0x100000) >> 32;
  LODWORD(v13) = (unsigned int)((__int64)(v185 + 0x100000) >> 21) << 21;
  LODWORD(v91) = (unsigned int)((v147 + 0x100000) >> 21) << 21;
  LODWORD(v14) = (unsigned int)((__int64)(v152 + 0x100000) >> 21) << 21;
  LODWORD(v88) = (unsigned int)((v179 + 0x100000) >> 21) << 21;
  LODWORD(v94) = (unsigned int)((v129 + 0x100000) >> 21) << 21;
  LODWORD(v82) = (unsigned int)((v172 + 0x100000) >> 21) << 21;
  v15 = v126 + v117;
  v118 = v165 - (v97 << 21);
  HIDWORD(v97) = (v122 + 0x100000) >> 32;
  v159 = v158 + ((__int64)(v185 + 0x100000) >> 21);
  HIDWORD(v9) = (unsigned __int64)(v169 + 0x100000) >> 32;
  LODWORD(v97) = (_DWORD)v70 << 21;
  LODWORD(v9) = (_DWORD)v43 << 21;
  HIDWORD(v16) = (unsigned __int64)(v112 + 0x100000) >> 32;
  v225 = v185 - v13;
  LODWORD(v16) = (_DWORD)v76 << 21;
  v162 = v212 + ((v147 + 0x100000) >> 21);
  v213 = v147 - v91;
  v166 = v141 + ((__int64)(v152 + 0x100000) >> 21);
  v227 = v152 - v14;
  v153 = v208 + ((v179 + 0x100000) >> 21);
  v195 = v179 - v88;
  v180 = ((v129 + 0x100000) >> 21) + v218;
  v209 = v129 - v94;
  v148 = v204 + ((v172 + 0x100000) >> 21);
  v186 = v172 - v82;
  v71 = v70 + v221;
  v142 = v200 + v43;
  v173 = v169 - v9;
  v86 = v112 - v16;
  v201 = v118 + ((v155 + 0x100000) >> 21);
  v17 = (v76 + v15 + 0x100000) >> 21;
  v18 = (v71 + 0x100000) >> 21;
  HIDWORD(v52) = (unsigned __int64)(v71 + 0x100000) >> 32;
  LODWORD(v52) = (_DWORD)v18 << 21;
  v19 = (v159 + 0x100000) >> 21;
  v56 = v135 - ((__int64)(v135 + 0x100000) >> 21 << 21) + v17;
  LODWORD(v14) = (_DWORD)v19 << 21;
  v44 = v76 + v15 - (v17 << 21);
  HIDWORD(v14) = (unsigned __int64)(v159 + 0x100000) >> 32;
  v53 = v71 - v52;
  v60 = v122 - v97 + ((v180 + 0x100000) >> 21);
  v219 = v213 + v19;
  v72 = (__int64)(v148 + 0x100000) >> 21;
  v214 = v225 + ((v153 + 0x100000) >> 21);
  v66 = (v138 + 0x100000) >> 21;
  HIDWORD(v94) = (unsigned __int64)(v155 + 0x100000) >> 32;
  LODWORD(v94) = (unsigned int)((v155 + 0x100000) >> 21) << 21;
  v205 = v155 - v94;
  v226 = v227 + ((v162 + 0x100000) >> 21);
  v191 = v72 + v195;
  v196 = v162 - __PAIR64__((unsigned __int64)(v162 + 0x100000) >> 32, (unsigned int)((v162 + 0x100000) >> 21) << 21);
  v156 = v66 + v173;
  v174 = v153 - ((v153 + 0x100000) >> 21 << 21);
  v181 = v180 - __PAIR64__((unsigned __int64)(v180 + 0x100000) >> 32, (unsigned int)((v180 + 0x100000) >> 21) << 21);
  v154 = v138 - (v66 << 21);
  v163 = v142 - ((v142 + 0x100000) >> 21 << 21);
  v127 = 666643 * v56 + v214;
  v215 = ((__int64)(v135 + 0x100000) >> 21) * (unsigned int)&loc_72D18 + v219 + v56 * (unsigned int)&loc_9FB66;
  v220 = v174 + 666643 * v44;
  v175 = 136657 * ((__int64)(v135 + 0x100000) >> 21) + v166 - ((v166 + 0x100000) >> 21 << 21) - 683901 * v56;
  v197 = -683901 * (v86 + v18)
       + -997805LL * v56
       + ((__int64)(v135 + 0x100000) >> 21) * (unsigned int)&loc_9FB66
       + v196
       + 136657 * v44;
  v113 = -683901 * v44 + 136657 * v56 + -997805 * ((__int64)(v135 + 0x100000) >> 21) + v226;
  v98 = 136657 * v53
      + 666643 * ((__int64)(v135 + 0x100000) >> 21)
      + v159
      - v14
      + v56 * (unsigned int)&loc_72D18
      + v44 * (unsigned int)&loc_9FB66
      + __PAIR64__(
          ((4293969491u * (unsigned __int64)(unsigned int)(v86 + v18)) >> 32)
        + -997805 * ((unsigned __int64)(v86 + v18) >> 32)
        - (v86
         + v18),
          -997805 * ((int)v86 + (int)v18));
  v119 = 136657 * (v86 + v18) + -997805 * v44 + v215 - 683901 * v53;
  v108 = -683901 * ((__int64)(v135 + 0x100000) >> 21) + v209 + ((v166 + 0x100000) >> 21);
  v130 = ((v142 + 0x100000) >> 21) + v186 + 666643 * v60;
  v136 = v60 * (unsigned int)&loc_9FB66 + v53 * (unsigned int)&loc_72D18 + v191 + 666643 * (v86 + v18);
  v139 = 136657 * v60
       + __PAIR64__(
           (((unsigned int)(v86 + v18) * (unsigned __int64)(unsigned int)&loc_9FB66) >> 32)
         + (_DWORD)&loc_9FB66 * ((unsigned __int64)(v86 + v18) >> 32),
           ((int)v86 + (int)v18) * (int)&loc_9FB66)
       + v127
       + v44 * (unsigned int)&loc_72D18
       - 997805 * v53;
  v49 = (v136 + 0x100000) >> 21;
  v57 = (__int64)(v139 + 0x100000) >> 21;
  v143 = v57 + -683901 * v60 + v98;
  v128 = v49 + -997805 * v60 + v53 * (unsigned int)&loc_9FB66 + (v86 + v18) * (unsigned int)&loc_72D18 + v220;
  v123 = ((v130 + 0x100000) >> 21) + v60 * (unsigned int)&loc_72D18 + v148 - (v72 << 21) + 666643 * v53;
  v80 = (v128 + 0x100000) >> 21;
  v77 = (v123 + 0x100000) >> 21;
  v73 = (v108 + 0x100000) >> 21;
  v61 = (__int64)(v143 + 0x100000) >> 21;
  v160 = v197 + ((v119 + 0x100000) >> 21);
  HIDWORD(v18) = (unsigned __int64)(v119 + 0x100000) >> 32;
  HIDWORD(v88) = (unsigned __int64)(v113 + 0x100000) >> 32;
  HIDWORD(v98) = (unsigned __int64)(v128 + 0x100000) >> 32;
  HIDWORD(v86) = (unsigned __int64)(v130 + 0x100000) >> 32;
  HIDWORD(v91) = (unsigned __int64)(v108 + 0x100000) >> 32;
  LODWORD(v18) = (unsigned int)((v119 + 0x100000) >> 21) << 21;
  LODWORD(v88) = (unsigned int)((v113 + 0x100000) >> 21) << 21;
  v83 = (v160 + 0x100000) >> 21;
  LODWORD(v98) = (_DWORD)v80 << 21;
  LODWORD(v86) = (unsigned int)((v130 + 0x100000) >> 21) << 21;
  LODWORD(v91) = (_DWORD)v73 << 21;
  v67 = v175 + ((v113 + 0x100000) >> 21);
  v210 = v143 - (v61 << 21);
  v62 = v61 + v119 - v18;
  v149 = v130 - v86;
  v167 = v136 - (v49 << 21) + v77;
  v50 = v83 + v113 - v88;
  v20 = (v67 + 0x100000) >> 21;
  v45 = v108 - v91 + v20;
  v54 = v160 - (v83 << 21);
  LODWORD(v186) = ((_DWORD)v83 << 21) - v160;
  v131 = v45 * (unsigned int)&loc_9FB66;
  LODWORD(v160) = ((_DWORD)v20 << 21) - v67;
  v104 = 136657 * v45;
  v216 = v45 * (unsigned int)&loc_72D18 + v163 + 666643 * (v181 + v73);
  v222 = (v67 - __PAIR64__((unsigned __int64)(v67 + 0x100000) >> 32, (_DWORD)v20 << 21)) * (unsigned int)&loc_72D18
       + v156
       + 666643 * v45;
  v198 = -683901 * v45 + v128 - v98 + 136657 * (v181 + v73);
  v164 = v62 * (unsigned int)&loc_9FB66;
  v228 = __PAIR64__(
           ((4294283395u * (unsigned __int64)(unsigned int)v50) >> 32) + -(v83 + v113 - v88) - 683901 * HIDWORD(v50),
           -683901 * (int)v50)
       + 136657 * (v67 - __PAIR64__((unsigned __int64)(v67 + 0x100000) >> 32, (_DWORD)v20 << 21))
       + v123
       - (v77 << 21)
       + (v181 + v73) * (unsigned int)&loc_9FB66
       - 997805 * v45;
  v176 = v80 + v139 - (v57 << 21) - 683901 * (v181 + v73);
  v46 = 4294283395LL * (unsigned int)(v67 - ((_DWORD)v20 << 21));
  v193 = v131
       + v149
       + (v181 + v73) * (unsigned int)&loc_72D18
       + __PAIR64__(
           ((4293969491u * (unsigned __int64)(unsigned int)(v67 - ((_DWORD)v20 << 21))) >> 32)
         + v160
         - 997805 * ((v67 - __PAIR64__((unsigned __int64)(v67 + 0x100000) >> 32, (_DWORD)v20 << 21)) >> 32),
           -997805 * ((int)v67 - ((_DWORD)v20 << 21)));
  v144 = 4293969491LL * (unsigned int)v54;
  v170 = 136657 * v62;
  HIDWORD(v46) += v160
                - 683901 * ((v67 - __PAIR64__((unsigned __int64)(v67 + 0x100000) >> 32, (_DWORD)v20 << 21)) >> 32);
  v182 = v46 + v104 + -997805LL * (v181 + v73) + v167;
  v202 = v54 * (unsigned int)&loc_72D18 + v201 + 666643 * v50;
  HIDWORD(v144) += v186 - 997805 * HIDWORD(v54);
  v132 = 4294283395LL * (unsigned int)v54;
  v137 = 4294283395LL * (unsigned int)v62;
  v140 = v205 + 666643 * v54;
  v206 = v144 + v50 * (unsigned int)&loc_9FB66 + v222;
  v21 = (v176 + 0x100000) >> 21;
  HIDWORD(v108) = (unsigned __int64)(v182 + 0x100000) >> 32;
  LODWORD(v108) = (unsigned int)((v182 + 0x100000) >> 21) << 21;
  HIDWORD(v46) = (unsigned __int64)(v223 + 666643 * v62 + 0x100000) >> 32;
  v150 = v210 + v21;
  v145 = ((v182 + 0x100000) >> 21) + v198;
  LODWORD(v46) = (unsigned int)((v223 + 666643 * v62 + 0x100000) >> 21) << 21;
  v177 = v176 - __PAIR64__((unsigned __int64)(v176 + 0x100000) >> 32, (_DWORD)v21 << 21);
  v157 = v223 + 666643 * v62 - v46;
  HIDWORD(v132) += v186 - 683901 * HIDWORD(v54);
  v92 = v132 + 136657 * v50 + v193;
  v22 = 136657 * v62 + v206 + 0x100000;
  v114 = ((v223 + 666643 * v62 + 0x100000) >> 21) + v62 * (unsigned int)&loc_72D18 + v140;
  v133 = -997805 * v62
       + __PAIR64__(
           (((unsigned int)v50 * (unsigned __int64)(unsigned int)&loc_72D18) >> 32) + (_DWORD)&loc_72D18 * HIDWORD(v50),
           (int)v50 * (int)&loc_72D18)
       + v154
       + 666643 * (v67 - __PAIR64__((unsigned __int64)(v67 + 0x100000) >> 32, (_DWORD)v20 << 21))
       + v54 * (unsigned int)&loc_9FB66
       + ((v164 + v202 + 0x100000) >> 21);
  v78 = (__int64)(v133 + 0x100000) >> 21;
  HIDWORD(v83) = SHIDWORD(v22) >> 21;
  HIDWORD(v22) = v22 >> 21;
  HIDWORD(v94) = (unsigned __int64)(v164 + v202 + 0x100000) >> 32;
  HIDWORD(v123) = (v133 + 0x100000) >> 32;
  HIDWORD(v119) = (unsigned __int64)(v114 + 0x100000) >> 32;
  LODWORD(v94) = (unsigned int)((v164 + v202 + 0x100000) >> 21) << 21;
  LODWORD(v123) = (_DWORD)v78 << 21;
  LODWORD(v119) = (unsigned int)((v114 + 0x100000) >> 21) << 21;
  v105 = __PAIR64__((v92 + 0x100000) >> 32, (unsigned int)((__int64)(v92 + 0x100000) >> 21) << 21);
  HIDWORD(v19) = -(int)v62 - 683901 * HIDWORD(v62);
  v63 = v164 + v202 - v94;
  HIDWORD(v137) += HIDWORD(v19);
  v168 = v78 + v170 + v206 - (__PAIR64__(HIDWORD(v83), HIDWORD(v22)) << 21);
  v23 = __PAIR64__(HIDWORD(v83), HIDWORD(v22))
      + v137
      + -997805 * v50
      + (v67 - __PAIR64__((unsigned __int64)(v67 + 0x100000) >> 32, (_DWORD)v20 << 21)) * (unsigned int)&loc_9FB66
      + v216
      + 136657 * v54;
  v81 = v23;
  v24 = v92;
  v93 = ((__int64)(v92 + 0x100000) >> 21) + v228;
  HIDWORD(v23) = (v23 + 0x100000) >> 32;
  HIDWORD(v73) = (SHIDWORD(v23) >> 21 << 21) | ((((unsigned int)(v23 + 0x100000) >> 21) | (HIDWORD(v23) << 11)) >> 11);
  LODWORD(v73) = (((unsigned int)(v23 + 0x100000) >> 21) | (HIDWORD(v23) << 11)) << 21;
  v187 = (__SPAIR64__(HIDWORD(v23), (int)v23 + 0x100000) >> 21) + v24 - v105;
  LODWORD(v46) = (__int64)(v93 + 0x100000) >> 21;
  HIDWORD(v46) = (int)((v93 + 0x100000) >> 32) >> 21;
  v25 = (v145 + 0x100000) >> 21;
  v183 = v46 + v182 - v108;
  v58 = (v157 + 666643 * ((__int64)(v150 + 0x100000) >> 21)) >> 21;
  v203 = v150 - ((__int64)(v150 + 0x100000) >> 21 << 21);
  v26 = v58 + v114 - v119 + ((__int64)(v150 + 0x100000) >> 21) * (unsigned int)&loc_72D18;
  HIDWORD(v86) = (unsigned __int64)(v157 + 666643 * ((__int64)(v150 + 0x100000) >> 21)) >> 32;
  v178 = v177 + v25;
  LODWORD(v86) = (_DWORD)v58 << 21;
  v199 = v145 - (v25 << 21);
  v207 = v157 + 666643 * ((__int64)(v150 + 0x100000) >> 21) - v86;
  v27 = v63
      + ((v114 + 0x100000) >> 21)
      + __PAIR64__(
          (((unsigned int)((__int64)(v150 + 0x100000) >> 21) * (unsigned __int64)(unsigned int)&loc_9FB66) >> 32)
        + (_DWORD)&loc_9FB66 * ((int)((v150 + 0x100000) >> 32) >> 21),
          (unsigned int)((__int64)(v150 + 0x100000) >> 21) * (unsigned int)&loc_9FB66);
  v89 = (__int64)((v26 >> 21) + v27) >> 21;
  v171 = v26 - (v26 >> 21 << 21);
  v211 = (v26 >> 21) + v27 - (v89 << 21);
  v28 = ((__int64)(v89 + v133 - v123 - 997805 * ((__int64)(v150 + 0x100000) >> 21)) >> 21)
      + v168
      + 136657 * ((__int64)(v150 + 0x100000) >> 21);
  v29 = v81 - v73 - 683901 * ((__int64)(v150 + 0x100000) >> 21);
  v192 = (unsigned int)v89
       + (_DWORD)v133
       - ((_DWORD)v78 << 21)
       - 997805 * (unsigned int)((__int64)(v150 + 0x100000) >> 21)
       - (unsigned __int64)((unsigned int)((__int64)(v89 + v133 - v123 - 997805 * ((__int64)(v150 + 0x100000) >> 21)) >> 21) << 21);
  v68 = ((v28 >> 21) + v29) >> 21;
  v217 = v28 - (v28 >> 21 << 21);
  v30 = v68 + v187;
  v31 = (v28 >> 21) + v29 - __PAIR64__((unsigned __int64)((v28 >> 21) + v29) >> 32, (_DWORD)v68 << 21);
  HIDWORD(v26) = (v68 + v187) >> 21;
  LODWORD(v29) = (int)((unsigned __int64)(v68 + v187) >> 32) >> 21;
  v188 = v31;
  LODWORD(v78) = (__int64)(__PAIR64__(v29, HIDWORD(v26)) + v93 - __PAIR64__((v93 + 0x100000) >> 32, (_DWORD)v46 << 21)) >> 21;
  v124 = v30 - (__PAIR64__(v29, HIDWORD(v26)) << 21);
  HIDWORD(v29) = (((__int64)(__PAIR64__(v29, HIDWORD(v26)) + v93 - __PAIR64__((v93 + 0x100000) >> 32, (_DWORD)v46 << 21)) >> 21)
                + v183) >> 21;
  v32 = __PAIR64__(v29, HIDWORD(v26))
      + v93
      - __PAIR64__((v93 + 0x100000) >> 32, (_DWORD)v46 << 21)
      - __PAIR64__(
          (__PAIR64__(v29, HIDWORD(v26)) + v93 - __PAIR64__((v93 + 0x100000) >> 32, (_DWORD)v46 << 21)) >> 32,
          (_DWORD)v78 << 21);
  v33 = v199
      + ((__int64)(__PAIR64__(
                     (int)((__PAIR64__(v29, HIDWORD(v26)) + v93 - __PAIR64__((v93 + 0x100000) >> 32, (_DWORD)v46 << 21)) >> 32) >> 21,
                     v78)
                 + v183) >> 21);
  HIDWORD(v108) = (__PAIR64__(
                     (int)((__PAIR64__(v29, HIDWORD(v26)) + v93 - __PAIR64__((v93 + 0x100000) >> 32, (_DWORD)v46 << 21)) >> 32) >> 21,
                     v78)
                 + v183) >> 32;
  LODWORD(v108) = HIDWORD(v29) << 21;
  v184 = __PAIR64__(
           (int)((__PAIR64__(v29, HIDWORD(v26)) + v93 - __PAIR64__((v93 + 0x100000) >> 32, (_DWORD)v46 << 21)) >> 32) >> 21,
           v78)
       + v183
       - v108;
  v34 = v178 + (__SPAIR64__(HIDWORD(v33), (int)v199 + HIDWORD(v29)) >> 21);
  v134 = v33 - (v33 >> 21 << 21);
  LODWORD(v54) = (int)((v203 + (v34 >> 21)) >> 32) >> 21;
  LODWORD(v29) = (__int64)(v203 + (v34 >> 21)) >> 21;
  v35 = -(int)v29;
  HIDWORD(v114) = (v203 + (v34 >> 21)) >> 32;
  v120 = v34 - __PAIR64__((v178 + (v33 >> 21)) >> 32, (unsigned int)(v34 >> 21) << 21);
  LODWORD(v114) = (_DWORD)v29 << 21;
  v115 = v203 + (v34 >> 21) - v114;
  v87 = 4293969491LL * (unsigned int)v29;
  v101 = 136657 * ((__int64)(v203 + (v34 >> 21)) >> 21);
  v109 = 4294283395LL * (unsigned int)v29;
  v36 = v207 + 666643 * ((__int64)(v203 + (v34 >> 21)) >> 21);
  v37 = (v36 >> 21) + ((__int64)(v203 + (v34 >> 21)) >> 21) * (unsigned int)&loc_72D18 + v171;
  LODWORD(v36) = v36 - ((unsigned int)(v36 >> 21) << 21);
  v146[32] = v36;
  v38 = (v37 >> 21) + v211 + __PAIR64__(v54, v29) * (unsigned int)&loc_9FB66;
  v146[33] = BYTE1(v36);
  LODWORD(v37) = v37 - ((unsigned int)(v37 >> 21) << 21);
  v51 = v38 >> 21;
  HIDWORD(v87) += v35 - 997805 * v54;
  v146[34] = BYTE2(v36) | (32 * v37);
  v146[35] = (unsigned int)v37 >> 3;
  v146[36] = (unsigned int)v37 >> 11;
  LODWORD(v22) = (v38 >> 21) + v192 + v87;
  LODWORD(v38) = v38 - ((unsigned int)(v38 >> 21) << 21);
  v146[37] = ((unsigned int)v37 >> 19) | (4 * v38);
  v90 = (__int64)(v51 + v192 + v87) >> 21;
  v146[38] = (unsigned int)v38 >> 6;
  HIDWORD(v109) += v35 - 683901 * v54;
  v95 = (v90 + v217 + v101) >> 21;
  LODWORD(v46) = v95 + v188 + v109;
  LODWORD(v54) = v22 - ((_DWORD)v90 << 21);
  v99 = (__int64)(v95 + v188 + v109) >> 21;
  v146[39] = ((unsigned int)v38 >> 14) | ((_BYTE)v22 << 7);
  v146[41] = (unsigned int)v54 >> 9;
  HIDWORD(v36) = v90 + v217 + v101 - ((_DWORD)v95 << 21);
  v146[42] = ((unsigned int)v54 >> 17) | (16 * (v90 + v217 + v101));
  v146[43] = HIDWORD(v36) >> 4;
  LOBYTE(v37) = (unsigned int)(v46 - ((_DWORD)v99 << 21)) >> 15;
  HIDWORD(v160) = (v99 + v124) >> 32;
  LOBYTE(v83) = ((v90 + v217 + v101 - (v95 << 21)) >> 20) | (2 * v46);
  LODWORD(v160) = (unsigned int)((__int64)(v99 + v124) >> 21) << 21;
  v64 = (__int64)(((__int64)(v99 + v124) >> 21) + v32) >> 21;
  LODWORD(v87) = (unsigned int)(v46 - ((_DWORD)v99 << 21)) >> 7;
  LODWORD(v22) = v64;
  LODWORD(v46) = v64 + v184;
  v146[44] = HIDWORD(v36) >> 12;
  LODWORD(v30) = v99 + v124 - v160;
  LOBYTE(v37) = v37 | ((_BYTE)v30 << 6);
  v106 = (__int64)(v64 + v184) >> 21;
  LODWORD(v64) = (unsigned int)v30 >> 2;
  LODWORD(v90) = (unsigned int)v30 >> 10;
  LODWORD(v30) = ((__int64)(v99 + v124) >> 21) + v32 - ((_DWORD)v22 << 21);
  LODWORD(v95) = (unsigned int)v30 >> 13;
  LODWORD(v93) = (unsigned int)v30 >> 5;
  v146[45] = v83;
  v146[47] = v37;
  LODWORD(v30) = v46 - ((_DWORD)v106 << 21);
  v39 = (v106 + v134) >> 21;
  v146[46] = v87;
  v146[53] = v46;
  v47 = v39 + v120;
  v74 = (__int64)(v39 + v120) >> 21;
  v146[40] = (unsigned int)v54 >> 1;
  LODWORD(v39) = v106 + v134 - ((_DWORD)v39 << 21);
  v146[48] = v64;
  v146[49] = v90;
  v146[57] = (unsigned int)v39 >> 11;
  v146[50] = ((__int64)(v99 + v124 - v160) >> 18) | (8 * (((__int64)(v99 + v124) >> 21) + v32));
  v146[55] = BYTE2(v30) | (32 * v39);
  v146[51] = v93;
  v146[52] = v95;
  v146[54] = BYTE1(v30);
  v146[56] = (unsigned int)v39 >> 3;
  v146[59] = (unsigned int)(v47 - ((_DWORD)v74 << 21)) >> 6;
  v146[63] = (unsigned int)(v74 + v115) >> 17;
  v146[58] = ((unsigned int)v39 >> 19) | (4 * v47);
  v146[62] = (unsigned int)(v74 + v115) >> 9;
  v146[60] = ((__int64)(v47 - (v74 << 21)) >> 14) | (((_BYTE)v74 + (_BYTE)v115) << 7);
  v146[61] = (v74 + v115) >> 1;
  sub_E07F8(v277, 0xD8u);
  sub_E07F8(v247, 0x40u);
  sub_E07F8(v233, 0x40u);
  return 1;
}
