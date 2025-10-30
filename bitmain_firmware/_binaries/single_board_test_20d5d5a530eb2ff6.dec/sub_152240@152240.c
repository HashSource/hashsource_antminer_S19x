int __fastcall sub_152240(int a1, int a2, int a3)
{
  int v3; // r3
  int i; // r2
  int v5; // r1
  int v6; // r4
  int v7; // r5
  int v8; // r12
  int v9; // lr
  int v10; // r6
  int v11; // r4
  int v12; // r1
  int v13; // r0
  int v14; // r2
  int v15; // r0
  int v16; // r12
  int v17; // lr
  int v18; // r6
  int v19; // r5
  int v20; // r3
  int v21; // r0
  int v22; // r1
  int v23; // r2
  int v24; // r11
  int v25; // r2
  int v26; // lr
  int v27; // r8
  int v28; // r6
  int v29; // r2
  int v30; // lr
  int v31; // r2
  int v32; // r1
  int v33; // r2
  int v34; // r9
  int v35; // r2
  int v36; // r12
  int v37; // r2
  int v38; // r12
  int v39; // r5
  int v40; // r0
  int v41; // r5
  unsigned int v42; // r2
  unsigned int v43; // lr
  unsigned int v44; // r6
  int v45; // r0
  int v46; // r9
  int v47; // r0
  unsigned int v48; // r5
  int v49; // r3
  int v50; // r1
  int v51; // r3
  int v52; // r1
  int v53; // r3
  unsigned int v54; // r4
  int v55; // r11
  unsigned int v56; // r5
  unsigned int v57; // r3
  unsigned int v58; // r2
  unsigned int v59; // r4
  unsigned int v60; // r5
  unsigned int v61; // r0
  unsigned int v62; // r6
  unsigned int v63; // lr
  unsigned int v64; // r12
  unsigned int v65; // r3
  unsigned int v66; // r12
  unsigned int v67; // r3
  unsigned int v68; // r4
  unsigned int v69; // r5
  int v70; // r4
  int *v71; // r6
  int v72; // r4
  int v73; // r5
  int *v74; // r0
  unsigned int v75; // r12
  unsigned int v76; // r4
  unsigned int v77; // r6
  int v78; // r0
  int v79; // r1
  int v80; // r5
  int v81; // r2
  int v82; // r3
  int v83; // r2
  int v84; // r3
  int v85; // r5
  int v86; // r3
  int v87; // r2
  int v88; // r3
  int v89; // r2
  int v90; // r3
  int v91; // r5
  int v92; // r2
  int v93; // r3
  int v94; // r2
  int v95; // r3
  int v96; // r5
  int v97; // r3
  int v98; // r2
  int v99; // r3
  int v100; // r2
  int v101; // r3
  int v102; // r5
  int v103; // r2
  int v104; // r3
  int v105; // r2
  int v106; // r3
  int v107; // r5
  int v108; // r3
  int v109; // r2
  int v110; // r3
  int v111; // r2
  int v112; // r3
  int v113; // r5
  int v114; // r3
  int v115; // r6
  int v116; // r3
  int v117; // r2
  int v118; // r3
  int v119; // r5
  int v120; // r3
  int v121; // r3
  unsigned int *v122; // r11
  int v123; // r3
  int v124; // r2
  int v125; // r4
  unsigned int v126; // r1
  unsigned int v127; // r2
  unsigned int v128; // r3
  unsigned int v129; // r1
  unsigned int v130; // r2
  unsigned int v131; // r3
  unsigned int v132; // r1
  unsigned int v133; // r2
  unsigned int v134; // r3
  unsigned int v135; // r1
  unsigned int v136; // r2
  unsigned int v137; // r3
  int *v138; // r8
  void *v139; // r6
  int v140; // r4
  _DWORD v142[16]; // [sp+0h] [bp-250h] BYREF
  _BYTE v143[64]; // [sp+40h] [bp-210h] BYREF
  unsigned int v144; // [sp+80h] [bp-1D0h] BYREF
  int v145; // [sp+84h] [bp-1CCh]
  int v146; // [sp+88h] [bp-1C8h]
  int v147; // [sp+8Ch] [bp-1C4h]
  int v148; // [sp+90h] [bp-1C0h]
  int v149; // [sp+94h] [bp-1BCh]
  int v150; // [sp+98h] [bp-1B8h]
  int v151; // [sp+9Ch] [bp-1B4h]
  int v152; // [sp+A0h] [bp-1B0h]
  int v153; // [sp+A4h] [bp-1ACh]
  int v154; // [sp+A8h] [bp-1A8h]
  int v155; // [sp+ACh] [bp-1A4h]
  int v156; // [sp+B0h] [bp-1A0h]
  int v157; // [sp+B4h] [bp-19Ch]
  int v158; // [sp+B8h] [bp-198h]
  unsigned int v159; // [sp+BCh] [bp-194h]
  int v160; // [sp+C0h] [bp-190h] BYREF
  int v161; // [sp+C4h] [bp-18Ch]
  int v162; // [sp+C8h] [bp-188h]
  int v163; // [sp+CCh] [bp-184h]
  int v164; // [sp+D0h] [bp-180h]
  unsigned int v165; // [sp+D4h] [bp-17Ch]
  unsigned int v166; // [sp+D8h] [bp-178h]
  unsigned int v167; // [sp+DCh] [bp-174h]
  unsigned int v168; // [sp+E0h] [bp-170h]
  unsigned int v169; // [sp+E4h] [bp-16Ch]
  unsigned int v170; // [sp+E8h] [bp-168h]
  int v171; // [sp+ECh] [bp-164h]
  unsigned int v172; // [sp+F0h] [bp-160h]
  unsigned int v173; // [sp+F4h] [bp-15Ch]
  unsigned int v174; // [sp+F8h] [bp-158h]
  int v175; // [sp+FCh] [bp-154h]
  int v176; // [sp+100h] [bp-150h] BYREF
  int v177; // [sp+104h] [bp-14Ch]
  int v178; // [sp+108h] [bp-148h]
  int v179; // [sp+10Ch] [bp-144h]
  int v180; // [sp+110h] [bp-140h]
  int v181; // [sp+114h] [bp-13Ch]
  int v182; // [sp+118h] [bp-138h]
  int v183; // [sp+11Ch] [bp-134h]
  int v184; // [sp+120h] [bp-130h]
  unsigned int v185; // [sp+124h] [bp-12Ch]
  unsigned int v186; // [sp+128h] [bp-128h]
  int v187; // [sp+12Ch] [bp-124h]
  int v188; // [sp+130h] [bp-120h]
  unsigned int v189; // [sp+134h] [bp-11Ch]
  int v190; // [sp+138h] [bp-118h]
  unsigned int v191; // [sp+13Ch] [bp-114h]
  int v192; // [sp+140h] [bp-110h] BYREF
  int v193; // [sp+144h] [bp-10Ch]
  int v194; // [sp+148h] [bp-108h]
  int v195; // [sp+14Ch] [bp-104h]
  int v196; // [sp+150h] [bp-100h]
  int v197; // [sp+154h] [bp-FCh]
  int v198; // [sp+158h] [bp-F8h]
  int v199; // [sp+15Ch] [bp-F4h]
  int v200; // [sp+160h] [bp-F0h]
  int v201; // [sp+164h] [bp-ECh]
  int v202; // [sp+168h] [bp-E8h]
  int v203; // [sp+16Ch] [bp-E4h]
  int v204; // [sp+170h] [bp-E0h]
  int v205; // [sp+174h] [bp-DCh]
  int v206; // [sp+178h] [bp-D8h]
  int v207; // [sp+17Ch] [bp-D4h]
  unsigned int v208; // [sp+180h] [bp-D0h] BYREF
  int v209; // [sp+184h] [bp-CCh]
  int v210; // [sp+188h] [bp-C8h]
  int v211; // [sp+18Ch] [bp-C4h]
  int v212; // [sp+190h] [bp-C0h]
  int v213; // [sp+194h] [bp-BCh]
  int v214; // [sp+198h] [bp-B8h]
  int v215; // [sp+19Ch] [bp-B4h]
  int v216; // [sp+1A0h] [bp-B0h]
  int v217; // [sp+1A4h] [bp-ACh]
  int v218; // [sp+1A8h] [bp-A8h]
  int v219; // [sp+1ACh] [bp-A4h]
  int v220; // [sp+1B0h] [bp-A0h]
  int v221; // [sp+1B4h] [bp-9Ch]
  unsigned int v222; // [sp+1B8h] [bp-98h]
  int v223; // [sp+1BCh] [bp-94h]
  int v224; // [sp+1C0h] [bp-90h] BYREF
  int v225; // [sp+1C4h] [bp-8Ch]
  int v226; // [sp+1C8h] [bp-88h]
  int v227; // [sp+1CCh] [bp-84h]
  int v228; // [sp+1D0h] [bp-80h]
  unsigned int v229; // [sp+1D4h] [bp-7Ch]
  unsigned int v230; // [sp+1D8h] [bp-78h]
  unsigned int v231; // [sp+1DCh] [bp-74h]
  unsigned int v232; // [sp+1E0h] [bp-70h]
  unsigned int v233; // [sp+1E4h] [bp-6Ch]
  unsigned int v234; // [sp+1E8h] [bp-68h]
  int v235; // [sp+1ECh] [bp-64h]
  unsigned int v236; // [sp+1F0h] [bp-60h]
  unsigned int v237; // [sp+1F4h] [bp-5Ch]
  unsigned int v238; // [sp+1F8h] [bp-58h]
  int v239; // [sp+1FCh] [bp-54h]
  _DWORD v240[20]; // [sp+200h] [bp-50h] BYREF
  int v241; // [sp+250h] [bp+0h]
  int v242; // [sp+254h] [bp+4h]
  int v243; // [sp+258h] [bp+8h]
  _DWORD *v244; // [sp+25Ch] [bp+Ch]
  int v245; // [sp+260h] [bp+10h]
  int v246; // [sp+264h] [bp+14h]
  int v247; // [sp+268h] [bp+18h]
  int v248; // [sp+26Ch] [bp+1Ch]
  int v249; // [sp+270h] [bp+20h]
  unsigned int v250; // [sp+274h] [bp+24h]
  unsigned int v251; // [sp+278h] [bp+28h]
  unsigned int v252; // [sp+27Ch] [bp+2Ch]
  unsigned int v253; // [sp+280h] [bp+30h]
  unsigned int v254; // [sp+284h] [bp+34h]
  unsigned int v255; // [sp+288h] [bp+38h]
  unsigned int v256; // [sp+28Ch] [bp+3Ch]
  unsigned int v257; // [sp+290h] [bp+40h]
  int v258; // [sp+294h] [bp+44h]
  int v259; // [sp+298h] [bp+48h]
  int *v260; // [sp+29Ch] [bp+4Ch]
  unsigned int *v261; // [sp+2A0h] [bp+50h]
  int v262; // [sp+2A4h] [bp+54h]
  int v263; // [sp+2A8h] [bp+58h]
  unsigned int v264; // [sp+2ACh] [bp+5Ch]
  int v265; // [sp+2B0h] [bp+60h]
  int v266; // [sp+2B4h] [bp+64h]
  int v267; // [sp+2B8h] [bp+68h]
  int v268; // [sp+2BCh] [bp+6Ch]
  int v269; // [sp+2C0h] [bp+70h]
  int v270; // [sp+2C4h] [bp+74h]
  int v271; // [sp+2C8h] [bp+78h]
  int v272; // [sp+2CCh] [bp+7Ch]
  int *v273; // [sp+2D0h] [bp+80h]
  unsigned int v274; // [sp+2D4h] [bp+84h]
  unsigned int v275; // [sp+2D8h] [bp+88h]
  unsigned int v276; // [sp+2DCh] [bp+8Ch]
  unsigned int v277; // [sp+2E0h] [bp+90h]
  unsigned int v278; // [sp+2E4h] [bp+94h]
  unsigned int v279; // [sp+2E8h] [bp+98h]
  int v280; // [sp+2ECh] [bp+9Ch]
  unsigned int v281; // [sp+2F0h] [bp+A0h]
  unsigned int v282; // [sp+2F4h] [bp+A4h]
  unsigned int v283; // [sp+2F8h] [bp+A8h]
  unsigned int v284; // [sp+2FCh] [bp+ACh]
  unsigned int v285; // [sp+300h] [bp+B0h]
  unsigned int v286; // [sp+304h] [bp+B4h]
  unsigned int v287; // [sp+308h] [bp+B8h]
  unsigned int v288; // [sp+30Ch] [bp+BCh]
  unsigned int v289; // [sp+310h] [bp+C0h]
  unsigned int v290; // [sp+314h] [bp+C4h]
  unsigned int v291; // [sp+318h] [bp+C8h]
  unsigned int v292; // [sp+31Ch] [bp+CCh]
  unsigned int v293; // [sp+320h] [bp+D0h]
  unsigned int v294; // [sp+324h] [bp+D4h]
  int *v295; // [sp+328h] [bp+D8h]
  int v296; // [sp+32Ch] [bp+DCh]
  int v297; // [sp+330h] [bp+E0h]
  int v298; // [sp+334h] [bp+E4h]

  v242 = a3;
  v241 = a1;
  v244 = v240;
  v260 = &v224;
  sub_155FE4(v240, a2, 1, 0);
  v261 = &v208;
  v262 = (int)&v192;
  v263 = (int)&v176;
  v224 = 1;
  v225 = 0;
  v226 = 0;
  v227 = 0;
  v228 = 0;
  v229 = 0;
  v230 = 0;
  v231 = 0;
  v232 = 0;
  v233 = 0;
  v234 = 0;
  v235 = 0;
  v236 = 0;
  v237 = 0;
  v238 = 0;
  v239 = 0;
  v273 = &v160;
  v208 = 0;
  v209 = 0;
  v210 = 0;
  v211 = 0;
  v212 = 0;
  v213 = 0;
  v214 = 0;
  v215 = 0;
  v216 = 0;
  v217 = 0;
  v218 = 0;
  v219 = 0;
  v220 = 0;
  v221 = 0;
  v222 = 0;
  v223 = 0;
  v296 = 447;
  v192 = v240[0];
  v193 = v240[1];
  v194 = v240[2];
  v195 = v240[3];
  v196 = v240[4];
  v197 = v240[5];
  v198 = v240[6];
  v199 = v240[7];
  v200 = v240[8];
  v201 = v240[9];
  v202 = v240[10];
  v203 = v240[11];
  v243 = (int)&v160;
  v259 = (int)&v144;
  v204 = v240[12];
  v205 = v240[13];
  v206 = v240[14];
  v207 = v240[15];
  v176 = 1;
  v177 = 0;
  v178 = 0;
  v179 = 0;
  v180 = 0;
  v181 = 0;
  v182 = 0;
  v183 = 0;
  v184 = 0;
  v185 = 0;
  v186 = 0;
  v187 = 0;
  v188 = 0;
  v189 = 0;
  v190 = 0;
  v191 = 0;
  v3 = 0;
  for ( i = 447; ; i = v296 )
  {
    v5 = *(unsigned __int8 *)(v242 + (i >> 3));
    if ( (unsigned int)(i + 7) > 0xE )
    {
      if ( v296 == 447 )
        v5 = 255;
      v6 = v296;
    }
    else
    {
      v6 = v296;
      v5 &= 0xFCu;
    }
    v296 = v6 - 1;
    v258 = v5 >> (v6 & 7) << 31 >> 31;
    v7 = (v224 ^ v192) & (v3 ^ v258);
    v8 = (v3 ^ v258) & (v225 ^ v193);
    v9 = (v3 ^ v258) & (v226 ^ v194);
    v10 = (v227 ^ v195) & (v3 ^ v258);
    v11 = (v228 ^ v196) & (v3 ^ v258);
    v298 = v3 ^ v258;
    v12 = (v230 ^ v198) & (v3 ^ v258);
    v13 = (v229 ^ v197) & (v3 ^ v258);
    v14 = (v231 ^ v199) & (v3 ^ v258);
    v193 ^= v8;
    v195 ^= v10;
    v224 ^= v7;
    v265 = v224;
    v194 ^= v9;
    v225 ^= v8;
    v196 ^= v11;
    v264 = v229 ^ v13;
    v15 = v13 ^ v197;
    v192 ^= v7;
    v226 ^= v9;
    v227 ^= v10;
    v228 ^= v11;
    v293 = v228;
    v229 = v264;
    v199 ^= v14;
    v279 = v15 + 536870910;
    v251 = (v198 ^ v12) + 536870910;
    v197 = v15;
    v16 = (v3 ^ v258) & (v232 ^ v200);
    v17 = (v3 ^ v258) & (v233 ^ v201);
    v18 = (v234 ^ v202) & (v3 ^ v258);
    v19 = (v203 ^ v235) & (v3 ^ v258);
    v230 ^= v12;
    v292 = v230;
    v20 = (v3 ^ v258) & (v236 ^ v204);
    v198 ^= v12;
    v231 ^= v14;
    v291 = v231;
    v21 = (v237 ^ v205) & v298;
    v22 = (v238 ^ v206) & v298;
    v200 ^= v16;
    v23 = (v239 ^ v207) & v298;
    v232 ^= v16;
    v290 = v232;
    v24 = v239 ^ v23;
    v25 = v207 ^ v23;
    v245 = v25 + 536870910;
    v233 ^= v17;
    v289 = v233;
    v201 ^= v17;
    v203 ^= v19;
    v234 ^= v18;
    v288 = v234;
    v204 ^= v20;
    v207 = v25;
    v202 ^= v18;
    v206 ^= v22;
    v235 ^= v19;
    v287 = v235;
    v236 ^= v20;
    v286 = v236;
    v26 = (v238 ^ v22) + 0x20000000;
    v238 ^= v22;
    v284 = v238;
    v237 ^= v21;
    v285 = v237;
    v247 = v201 + 536870910;
    v246 = v203 + 536870910;
    v205 ^= v21;
    v239 = v24;
    v248 = v26 - 2;
    v27 = v298 & (v208 ^ v176);
    v28 = (v211 ^ v179) & v298;
    v29 = (v209 ^ v177) & v298;
    v30 = v298 & (v210 ^ v178);
    v177 ^= v29;
    v176 ^= v27;
    v178 ^= v30;
    v272 = v210 ^ v30;
    v271 = v211 ^ v28;
    v257 = v193 + 536870910 - v177;
    v256 = v194 + 536870910 - v178;
    v31 = v29 ^ v209;
    v255 = v195 + 536870910 - (v179 ^ v28);
    v249 = v208 ^ v27;
    v250 = v225 + 536870910 - v31;
    v179 ^= v28;
    v32 = (v212 ^ v180) & v298;
    v282 = v192 + 536870910 - v176;
    v180 ^= v32;
    v161 = v31 + v225;
    v33 = (v213 ^ v181) & v298;
    v297 = v212 ^ v32;
    v34 = v298 & (v214 ^ v182);
    v181 ^= v33;
    v281 = v213 ^ v33;
    v35 = (v215 ^ v183) & v298;
    v182 ^= v34;
    v270 = v214 ^ v34;
    v183 ^= v35;
    v36 = v298 & (v216 ^ v184);
    v269 = v215 ^ v35;
    v184 ^= v36;
    v37 = (v217 ^ v185) & v298;
    v268 = v216 ^ v36;
    v185 ^= v37;
    v38 = v298 & (v218 ^ v186);
    v267 = v217 ^ v37;
    v186 ^= v38;
    v254 = v196 + 536870910 - v180;
    v266 = v218 ^ v38;
    v253 = v279 - v181;
    v252 = v251 - v182;
    v39 = v298 & (v223 ^ v191);
    v40 = v191 ^ v39;
    v41 = v39 ^ v223;
    v42 = v24 + 536870910 - v41;
    v251 = v199 + 536870910 - v183;
    v43 = v201 + 536870910 - v185;
    v280 = (v245 - v40) & 0xFFFFFFF;
    v279 = v200 + 536870908 - v184 + ((unsigned int)(v245 - v40) >> 28);
    v44 = v202 + 536870910 - v186;
    v191 = v40;
    v175 = v41 + v24;
    v208 = ((unsigned int)(v245 - v40) >> 28) + (v282 & 0xFFFFFFF);
    v45 = (v222 ^ v190) & v298;
    v46 = v222 ^ v45;
    v47 = v190 ^ v45;
    v48 = v206 + 536870910 - v47;
    v49 = v280;
    v190 = v47;
    v50 = v298 & (v221 ^ v189);
    v280 = v221 ^ v50;
    v189 ^= v50;
    v223 = v49 + (v48 >> 28);
    v222 = (v48 & 0xFFFFFFF) + ((v205 + 536870910 - v189) >> 28);
    v51 = v298;
    v52 = (v187 ^ v219) & v298;
    v298 = v219 ^ v52;
    v53 = v51 & (v220 ^ v188);
    v54 = v203 + 536870910 - (v52 ^ v187);
    v55 = v188 ^ v53;
    v56 = v204 + 536870910 - (v188 ^ v53);
    v283 = v220 ^ v53;
    v278 = v42 >> 28;
    v277 = v232 + 536870908 - v268 + (v42 >> 28);
    v159 = (v42 & 0xFFFFFFF) + ((unsigned int)(v248 - v46) >> 28);
    v221 = ((v205 + 536870910 - v189) & 0xFFFFFFF) + (v56 >> 28);
    v57 = v237 + 536870910 - v280;
    v188 = v55;
    v276 = v226 + 536870910 - v272;
    v158 = ((v248 - v46) & 0xFFFFFFF) + (v57 >> 28);
    v220 = (v56 & 0xFFFFFFF) + (v54 >> 28);
    v248 = v57 & 0xFFFFFFF;
    v187 ^= v52;
    v275 = v227 + 536870910 - v271;
    v219 = (v54 & 0xFFFFFFF) + (v44 >> 28);
    v274 = v228 + 536870910 - v297;
    v58 = v264;
    v174 = v46 + v238;
    v218 = (v44 & 0xFFFFFFF) + (v43 >> 28);
    v59 = v230 + 536870910 - v270;
    v217 = (v43 & 0xFFFFFFF) + (v279 >> 28);
    v264 = v264 + 536870910 - v281;
    v216 = (v279 & 0xFFFFFFF) + (v251 >> 28);
    v60 = v231 + 536870910 - v269;
    v215 = (v251 & 0xFFFFFFF) + (v252 >> 28);
    v214 = (v252 & 0xFFFFFFF) + (v253 >> 28);
    v213 = (v253 & 0xFFFFFFF) + (v254 >> 28);
    v212 = (v254 & 0xFFFFFFF) + (v255 >> 28);
    v211 = (v255 & 0xFFFFFFF) + (v256 >> 28);
    v210 = (v256 & 0xFFFFFFF) + (v257 >> 28);
    v209 = (v257 & 0xFFFFFFF) + (v282 >> 28);
    v61 = v233 + 536870910 - v267;
    v162 = v272 + v226;
    v163 = v271 + v227;
    v62 = v234 + 536870910 - v266;
    v63 = v235 + 536870910 - v298;
    v173 = v280 + v237;
    v165 = v281 + v58;
    v64 = v236 + 536870910 - v283;
    v155 = (v63 & 0xFFFFFFF) + (v62 >> 28);
    v154 = (v62 & 0xFFFFFFF) + (v61 >> 28);
    v157 = (v57 & 0xFFFFFFF) + (v64 >> 28);
    v65 = v224 + 536870910 - v249;
    v153 = (v61 & 0xFFFFFFF) + (v277 >> 28);
    v156 = (v64 & 0xFFFFFFF) + (v63 >> 28);
    v152 = (v277 & 0xFFFFFFF) + (v60 >> 28);
    v151 = (v60 & 0xFFFFFFF) + (v59 >> 28);
    v150 = (v59 & 0xFFFFFFF) + (v264 >> 28);
    v160 = v249 + v224;
    v149 = (v264 & 0xFFFFFFF) + (v274 >> 28);
    v148 = (v274 & 0xFFFFFFF) + (v275 >> 28);
    v147 = (v275 & 0xFFFFFFF) + (v276 >> 28);
    v146 = (v276 & 0xFFFFFFF) + (v250 >> 28);
    v145 = (v250 & 0xFFFFFFF) + (v65 >> 28);
    v164 = v297 + v228;
    v166 = v270 + v230;
    v167 = v269 + v231;
    v168 = v268 + v232;
    v169 = v267 + v233;
    v294 = (v65 & 0xFFFFFFF) + v278;
    v170 = v266 + v234;
    v171 = v298 + v235;
    v298 = (int)v261;
    v172 = v283 + v236;
    v295 = v273;
    v297 = v259;
    v144 = v294;
    sub_17B628(v260, v273, v261);
    v294 = v177 + v193;
    v208 = v176 + v192;
    v293 = v201 + v185;
    v209 = v177 + v193;
    v210 = v178 + v194;
    v214 = v182 + v198;
    v218 = v186 + v202;
    v217 = v201 + v185;
    v215 = v183 + v199;
    v216 = v200 + v184;
    v211 = v179 + v195;
    v220 = v188 + v204;
    v212 = v180 + v196;
    v213 = v181 + v197;
    v219 = v187 + v203;
    v221 = v205 + v189;
    v222 = v206 + v190;
    v223 = v191 + v207;
    sub_17B628(v262, v297, v298);
    v282 = v239 + 536870910 - v207;
    v287 = v282 >> 28;
    v286 = v232 + 536870908 - v200 + (v282 >> 28);
    v288 = v225 + 536870910 - v193;
    v293 = v226 + 536870910 - v194;
    v292 = v227 + 536870910 - v195;
    v291 = v228 + 536870910 - v196;
    v285 = v229 + 536870910 - v197;
    v284 = v230 + 536870910 - v198;
    v290 = v231 + 536870910 - v199;
    v294 = v224 + 536870910 - v192;
    v66 = v234 + 536870910 - v202;
    v67 = v235 + 536870910 - v203;
    v282 = v67 & 0xFFFFFFF;
    v281 = (v233 + 536870910 - v201) & 0xFFFFFFF;
    v68 = v236 + 536870910 - v204;
    v280 = v286 & 0xFFFFFFF;
    v69 = v237 + 536870910 - v205;
    v279 = v290 & 0xFFFFFFF;
    v278 = v284 & 0xFFFFFFF;
    v277 = v285 & 0xFFFFFFF;
    v276 = v291 & 0xFFFFFFF;
    v275 = v292 & 0xFFFFFFF;
    v274 = v293 & 0xFFFFFFF;
    v273 = (int *)(v288 & 0xFFFFFFF);
    v272 = v294 & 0xFFFFFFF;
    v283 = (v69 & 0xFFFFFFF) + (v68 >> 28);
    v289 = (v66 & 0xFFFFFFF) + ((v233 + 536870910 - v201) >> 28);
    v191 = ((v239 + 536870910 - v207) & 0xFFFFFFF) + ((v238 + 536870910 - v206) >> 28);
    v185 = v281 + (v286 >> 28);
    v180 = (v291 & 0xFFFFFFF) + (v292 >> 28);
    v179 = (v292 & 0xFFFFFFF) + (v293 >> 28);
    v178 = (v293 & 0xFFFFFFF) + (v288 >> 28);
    v177 = (v288 & 0xFFFFFFF) + (v294 >> 28);
    v187 = (v67 & 0xFFFFFFF) + (v66 >> 28);
    v184 = (v286 & 0xFFFFFFF) + (v290 >> 28);
    v176 = (v294 & 0xFFFFFFF) + v287;
    v190 = ((v238 + 536870910 - v206) & 0xFFFFFFF) + (v69 >> 28);
    v189 = v283;
    v188 = (v68 & 0xFFFFFFF) + (v67 >> 28);
    v186 = v289;
    v183 = (v290 & 0xFFFFFFF) + (v284 >> 28);
    v182 = (v284 & 0xFFFFFFF) + (v285 >> 28);
    v181 = (v285 & 0xFFFFFFF) + (v291 >> 28);
    sub_17BE0C(v298);
    v70 = v298;
    sub_17B628(v263, v244, v298);
    v298 = v70;
    v294 = v225 + v193;
    v212 = v228 + v196;
    v208 = v224 + v192;
    v210 = v226 + v194;
    v293 = v201 + v233;
    v211 = v227 + v195;
    v209 = v225 + v193;
    v213 = v229 + v197;
    v215 = v231 + v199;
    v216 = v200 + v232;
    v217 = v201 + v233;
    v218 = v234 + v202;
    v214 = v230 + v198;
    v219 = v203 + v235;
    v220 = v236 + v204;
    v221 = v237 + v205;
    v222 = v206 + v238;
    v223 = v207 + v239;
    sub_17BE0C(v262);
    v71 = v295;
    v72 = v298;
    sub_17BE0C(v298);
    v73 = v297;
    sub_17BE0C(v71);
    v298 = v72;
    sub_17B628(v260, v72, v71);
    v74 = v71;
    v297 = v73;
    v295 = v71;
    v281 = v223 + 536870910 - v175;
    v286 = v281 >> 28;
    v285 = v216 + 536870908 - v168 + (v281 >> 28);
    v287 = v209 + 536870910 - v161;
    v293 = v210 + 536870910 - v162;
    v292 = v211 + 536870910 - v163;
    v291 = v212 + 536870910 - v164;
    v290 = v213 + 536870910 - v165;
    v284 = v214 + 536870910 - v166;
    v289 = v215 + 536870910 - v167;
    v288 = v217 + 536870910 - v169;
    v75 = v218 + 536870910 - v170;
    v76 = v219 + 536870910 - v171;
    v283 = v220 + 536870910 - v172;
    v77 = v221 + 536870910 - v173;
    v294 = v208 + 536870910 - v160;
    v281 = v76 & 0xFFFFFFF;
    v280 = v288 & 0xFFFFFFF;
    v279 = v285 & 0xFFFFFFF;
    v278 = v289 & 0xFFFFFFF;
    v277 = v284 & 0xFFFFFFF;
    v276 = v290 & 0xFFFFFFF;
    v275 = v291 & 0xFFFFFFF;
    v274 = v292 & 0xFFFFFFF;
    v288 = (v75 & 0xFFFFFFF) + (v288 >> 28);
    v272 = v287 & 0xFFFFFFF;
    v271 = v294 & 0xFFFFFFF;
    v282 = ((v222 + 536870910 - v174) & 0xFFFFFFF) + (v77 >> 28);
    v153 = v280 + (v285 >> 28);
    v149 = (v290 & 0xFFFFFFF) + (v291 >> 28);
    v148 = (v291 & 0xFFFFFFF) + (v292 >> 28);
    v159 = ((v223 + 536870910 - v175) & 0xFFFFFFF) + ((v222 + 536870910 - v174) >> 28);
    v157 = (v77 & 0xFFFFFFF) + (v283 >> 28);
    v156 = (v283 & 0xFFFFFFF) + (v76 >> 28);
    v147 = (v292 & 0xFFFFFFF) + (v293 >> 28);
    v155 = (v76 & 0xFFFFFFF) + (v75 >> 28);
    v152 = (v285 & 0xFFFFFFF) + (v289 >> 28);
    v151 = (v289 & 0xFFFFFFF) + (v284 >> 28);
    v150 = (v284 & 0xFFFFFFF) + (v290 >> 28);
    v146 = (v293 & 0xFFFFFFF) + (v287 >> 28);
    v145 = (v287 & 0xFFFFFFF) + (v294 >> 28);
    v144 = (v294 & 0xFFFFFFF) + v286;
    v259 = (int)&v144;
    v158 = v282;
    v154 = (v75 & 0xFFFFFFF) + ((v217 + 536870910 - v169) >> 28);
    v261 = &v208;
    v273 = (int *)v243;
    sub_17BBF0(v74, v73, 39081);
    v78 = v298;
    v160 += v208;
    v298 = v161 + v209;
    v79 = v297;
    v162 += v210;
    v163 += v211;
    v297 = v217 + v169;
    v161 += v209;
    v164 += v212;
    v167 += v215;
    v170 += v218;
    v169 += v217;
    v168 += v216;
    v166 += v214;
    v171 += v219;
    v165 += v213;
    v172 += v220;
    v173 += v221;
    v174 += v222;
    v175 += v223;
    sub_17B628(v78, v79, v295);
    if ( v296 == -1 )
      break;
    v3 = v258;
  }
  v298 = (int)v143;
  v80 = (v192 ^ v224) & v258;
  v192 ^= v80;
  v81 = (v193 ^ v225) & v258;
  v224 ^= v80;
  v225 ^= v81;
  v82 = (v194 ^ v226) & v258;
  v193 ^= v81;
  v83 = v82 ^ v226;
  v194 ^= v82;
  v84 = (v195 ^ v227) & v258;
  v85 = v227 ^ v84;
  v195 ^= v84;
  v86 = (v196 ^ v228) & v258;
  v226 = v83;
  v87 = v86 ^ v228;
  v196 ^= v86;
  v88 = (v197 ^ v229) & v258;
  v228 = v87;
  v227 = v85;
  v229 ^= v88;
  v89 = (v198 ^ v230) & v258;
  v197 ^= v88;
  v230 ^= v89;
  v90 = (v199 ^ v231) & v258;
  v198 ^= v89;
  v231 ^= v90;
  v199 ^= v90;
  v91 = (v200 ^ v232) & v258;
  v200 ^= v91;
  v92 = (v201 ^ v233) & v258;
  v232 ^= v91;
  v233 ^= v92;
  v93 = (v202 ^ v234) & v258;
  v201 ^= v92;
  v94 = v93 ^ v234;
  v202 ^= v93;
  v95 = (v203 ^ v235) & v258;
  v96 = v235 ^ v95;
  v203 ^= v95;
  v97 = (v204 ^ v236) & v258;
  v234 = v94;
  v98 = v97 ^ v236;
  v204 ^= v97;
  v99 = (v205 ^ v237) & v258;
  v236 = v98;
  v235 = v96;
  v237 ^= v99;
  v100 = (v206 ^ v238) & v258;
  v205 ^= v99;
  v238 ^= v100;
  v101 = (v239 ^ v207) & v258;
  v206 ^= v100;
  v239 ^= v101;
  v207 ^= v101;
  v102 = (v176 ^ v208) & v258;
  v176 ^= v102;
  v103 = (v177 ^ v209) & v258;
  v208 ^= v102;
  v209 ^= v103;
  v104 = (v178 ^ v210) & v258;
  v177 ^= v103;
  v105 = v104 ^ v210;
  v178 ^= v104;
  v106 = (v179 ^ v211) & v258;
  v107 = v211 ^ v106;
  v179 ^= v106;
  v108 = (v180 ^ v212) & v258;
  v210 = v105;
  v109 = v108 ^ v212;
  v180 ^= v108;
  v110 = (v181 ^ v213) & v258;
  v212 = v109;
  v211 = v107;
  v213 ^= v110;
  v111 = (v182 ^ v214) & v258;
  v181 ^= v110;
  v214 ^= v111;
  v112 = (v183 ^ v215) & v258;
  v182 ^= v111;
  v215 ^= v112;
  v183 ^= v112;
  v113 = (v184 ^ v216) & v258;
  v184 ^= v113;
  v114 = (v185 ^ v217) & v258;
  v115 = v217 ^ v114;
  v185 ^= v114;
  v116 = (v186 ^ v218) & v258;
  v216 ^= v113;
  v117 = v116 ^ v218;
  v217 = v115;
  v186 ^= v116;
  v118 = (v187 ^ v219) & v258;
  v119 = v219 ^ v118;
  v218 = v117;
  v187 ^= v118;
  v120 = (v188 ^ v220) & v258;
  v219 = v119;
  v220 ^= v120;
  v188 ^= v120;
  v121 = (v189 ^ v221) & v258;
  v122 = v261;
  v221 ^= v121;
  v189 ^= v121;
  v123 = (v190 ^ v222) & v258;
  v124 = (v223 ^ v191) & v258;
  v190 ^= v123;
  v222 ^= v123;
  v223 ^= v124;
  v191 ^= v124;
  sub_17BE0C(v143);
  v125 = v298;
  sub_1561BC(v142, v298);
  sub_17BE0C(v125);
  sub_17B628(v142, v125, v122);
  v126 = v142[1];
  v127 = v142[2];
  v128 = v142[3];
  *v122 = v142[0];
  v122[1] = v126;
  v122[2] = v127;
  v122[3] = v128;
  v129 = v142[5];
  v130 = v142[6];
  v131 = v142[7];
  v122[4] = v142[4];
  v122[5] = v129;
  v122[6] = v130;
  v122[7] = v131;
  v132 = v142[9];
  v133 = v142[10];
  v134 = v142[11];
  v122[8] = v142[8];
  v122[9] = v132;
  v122[10] = v133;
  v122[11] = v134;
  v135 = v142[13];
  v136 = v142[14];
  v137 = v142[15];
  v122[12] = v142[12];
  v122[13] = v135;
  v122[14] = v136;
  v122[15] = v137;
  v138 = v260;
  v139 = v244;
  sub_17B628(v244, v260, v122);
  sub_155BC4(v241, v139, 1);
  v140 = sub_156154(v139, &unk_1D6460);
  sub_E07F8(v139, 0x40u);
  sub_E07F8(v138, 0x40u);
  sub_E07F8(v122, 0x40u);
  sub_E07F8((void *)v262, 0x40u);
  sub_E07F8((void *)v263, 0x40u);
  sub_E07F8((void *)v243, 0x40u);
  sub_E07F8((void *)v259, 0x40u);
  return ~v140;
}
