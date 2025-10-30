int __fastcall sub_14DF30(void *a1, size_t a2, unsigned __int8 *a3, int a4)
{
  unsigned int v6; // r7
  int v7; // r4
  int *v8; // r6
  int v9; // r4
  int v10; // r4
  int v11; // r4
  int v12; // r4
  int v13; // r4
  int v14; // r4
  int *v15; // r10
  int *v16; // r2
  int *v17; // r1
  int v18; // r3
  int v19; // t1
  int v21; // t1
  _BYTE *v22; // r8
  int *v23; // r11
  int v24; // t1
  bool v25; // zf
  int v26; // r2
  size_t v27; // r1
  int v28; // r12
  int v29; // r1
  int v30; // lr
  int v31; // r0
  int v32; // r3
  int v33; // r2
  int v34; // r3
  int v35; // r3
  int v36; // r3
  int v37; // r12
  int v38; // lr
  int v39; // r0
  int v40; // t1
  int v41; // r4
  int v42; // r1
  int v43; // r12
  int v44; // lr
  int v45; // r1
  int result; // r0
  unsigned int v47; // r2
  unsigned int v48; // r2
  unsigned int v49; // r2
  unsigned int v50; // r2
  unsigned int v51; // r2
  unsigned int v52; // r2
  unsigned int v53; // r2
  unsigned int v54; // r2
  unsigned int v55; // r2
  unsigned int v56; // r2
  unsigned int v57; // r2
  unsigned int v58; // r2
  unsigned int v59; // r2
  unsigned int v60; // r2
  int v62; // [sp+20h] [bp-B54h]
  int v63; // [sp+28h] [bp-B4Ch]
  int v64; // [sp+28h] [bp-B4Ch]
  size_t na; // [sp+30h] [bp-B44h]
  size_t nb; // [sp+30h] [bp-B44h]
  int v69; // [sp+34h] [bp-B40h]
  int v70; // [sp+34h] [bp-B40h]
  int v71; // [sp+38h] [bp-B3Ch]
  int v72; // [sp+38h] [bp-B3Ch]
  int v73; // [sp+44h] [bp-B30h]
  unsigned __int8 v75[64]; // [sp+60h] [bp-B14h] BYREF
  int v76[10]; // [sp+A0h] [bp-AD4h] BYREF
  int v77[10]; // [sp+C8h] [bp-AACh] BYREF
  _DWORD v78[10]; // [sp+F0h] [bp-A84h] BYREF
  int v79; // [sp+118h] [bp-A5Ch] BYREF
  int v80; // [sp+11Ch] [bp-A58h]
  int v81; // [sp+120h] [bp-A54h]
  int v82; // [sp+124h] [bp-A50h]
  int v83; // [sp+128h] [bp-A4Ch]
  int v84; // [sp+12Ch] [bp-A48h]
  int v85; // [sp+130h] [bp-A44h]
  int v86; // [sp+134h] [bp-A40h]
  int v87; // [sp+138h] [bp-A3Ch]
  int v88; // [sp+13Ch] [bp-A38h]
  int v89; // [sp+140h] [bp-A34h] BYREF
  int v90; // [sp+144h] [bp-A30h]
  int v91; // [sp+148h] [bp-A2Ch]
  int v92; // [sp+14Ch] [bp-A28h]
  int v93; // [sp+150h] [bp-A24h]
  int v94; // [sp+154h] [bp-A20h]
  int v95; // [sp+158h] [bp-A1Ch]
  int v96; // [sp+15Ch] [bp-A18h]
  int v97; // [sp+160h] [bp-A14h]
  int v98; // [sp+164h] [bp-A10h]
  _DWORD v99[10]; // [sp+168h] [bp-A0Ch] BYREF
  int v100; // [sp+190h] [bp-9E4h] BYREF
  int v101; // [sp+194h] [bp-9E0h]
  int v102; // [sp+198h] [bp-9DCh]
  int v103; // [sp+19Ch] [bp-9D8h]
  int v104; // [sp+1A0h] [bp-9D4h]
  int v105; // [sp+1A4h] [bp-9D0h]
  int v106; // [sp+1A8h] [bp-9CCh]
  int v107; // [sp+1ACh] [bp-9C8h]
  int v108; // [sp+1B0h] [bp-9C4h]
  int v109; // [sp+1B4h] [bp-9C0h]
  size_t v110; // [sp+1B8h] [bp-9BCh] BYREF
  int v111; // [sp+1BCh] [bp-9B8h]
  int v112; // [sp+1C0h] [bp-9B4h]
  int v113; // [sp+1C4h] [bp-9B0h]
  int v114; // [sp+1C8h] [bp-9ACh]
  int v115; // [sp+1CCh] [bp-9A8h]
  int v116; // [sp+1D0h] [bp-9A4h]
  int v117; // [sp+1D4h] [bp-9A0h]
  int v118; // [sp+1D8h] [bp-99Ch]
  int v119; // [sp+1DCh] [bp-998h]
  int v120; // [sp+1E0h] [bp-994h] BYREF
  int v121; // [sp+1E4h] [bp-990h]
  int v122; // [sp+1E8h] [bp-98Ch]
  int v123; // [sp+1ECh] [bp-988h]
  int v124; // [sp+1F0h] [bp-984h]
  int v125; // [sp+1F4h] [bp-980h]
  int v126; // [sp+1F8h] [bp-97Ch]
  int v127; // [sp+1FCh] [bp-978h]
  int v128; // [sp+200h] [bp-974h]
  int v129; // [sp+204h] [bp-970h]
  int v130; // [sp+208h] [bp-96Ch] BYREF
  int v131; // [sp+20Ch] [bp-968h]
  int v132; // [sp+210h] [bp-964h]
  int v133; // [sp+214h] [bp-960h]
  int v134; // [sp+218h] [bp-95Ch]
  int v135; // [sp+21Ch] [bp-958h]
  int v136; // [sp+220h] [bp-954h]
  int v137; // [sp+224h] [bp-950h]
  int v138; // [sp+228h] [bp-94Ch]
  int v139; // [sp+22Ch] [bp-948h]
  int v140; // [sp+230h] [bp-944h] BYREF
  int v141; // [sp+234h] [bp-940h]
  int v142; // [sp+238h] [bp-93Ch]
  int v143; // [sp+23Ch] [bp-938h]
  int v144; // [sp+240h] [bp-934h]
  int v145; // [sp+244h] [bp-930h]
  int v146; // [sp+248h] [bp-92Ch]
  int v147; // [sp+24Ch] [bp-928h]
  int v148; // [sp+250h] [bp-924h]
  int v149; // [sp+254h] [bp-920h]
  int v150; // [sp+258h] [bp-91Ch] BYREF
  int v151; // [sp+25Ch] [bp-918h]
  int v152; // [sp+260h] [bp-914h]
  int v153; // [sp+264h] [bp-910h]
  int v154; // [sp+268h] [bp-90Ch]
  int v155; // [sp+26Ch] [bp-908h]
  int v156; // [sp+270h] [bp-904h]
  int v157; // [sp+274h] [bp-900h]
  int v158; // [sp+278h] [bp-8FCh]
  int v159; // [sp+27Ch] [bp-8F8h]
  int v160; // [sp+280h] [bp-8F4h] BYREF
  int v161; // [sp+284h] [bp-8F0h]
  int v162; // [sp+288h] [bp-8ECh]
  int v163; // [sp+28Ch] [bp-8E8h]
  int v164; // [sp+290h] [bp-8E4h]
  int v165; // [sp+294h] [bp-8E0h]
  int v166; // [sp+298h] [bp-8DCh]
  int v167; // [sp+29Ch] [bp-8D8h]
  int v168; // [sp+2A0h] [bp-8D4h]
  int v169; // [sp+2A4h] [bp-8D0h]
  int v170; // [sp+2A8h] [bp-8CCh] BYREF
  int v171; // [sp+2ACh] [bp-8C8h]
  int v172; // [sp+2B0h] [bp-8C4h]
  int v173; // [sp+2B4h] [bp-8C0h]
  int v174; // [sp+2B8h] [bp-8BCh]
  int v175; // [sp+2BCh] [bp-8B8h]
  int v176; // [sp+2C0h] [bp-8B4h]
  int v177; // [sp+2C4h] [bp-8B0h]
  int v178; // [sp+2C8h] [bp-8ACh]
  int v179; // [sp+2CCh] [bp-8A8h]
  int v180[10]; // [sp+2D0h] [bp-8A4h] BYREF
  int v181; // [sp+2F8h] [bp-87Ch] BYREF
  int v182; // [sp+2FCh] [bp-878h]
  int v183; // [sp+300h] [bp-874h]
  int v184; // [sp+304h] [bp-870h]
  int v185; // [sp+308h] [bp-86Ch]
  int v186; // [sp+30Ch] [bp-868h]
  int v187; // [sp+310h] [bp-864h]
  int v188; // [sp+314h] [bp-860h]
  int v189; // [sp+318h] [bp-85Ch]
  int v190; // [sp+31Ch] [bp-858h]
  _DWORD v191[10]; // [sp+320h] [bp-854h] BYREF
  _DWORD v192[10]; // [sp+348h] [bp-82Ch] BYREF
  _DWORD v193[10]; // [sp+370h] [bp-804h] BYREF
  int v194[54]; // [sp+398h] [bp-7DCh] BYREF
  int v195[64]; // [sp+470h] [bp-704h] BYREF
  int v196; // [sp+570h] [bp-604h] BYREF
  int v197; // [sp+574h] [bp-600h]
  int v198; // [sp+578h] [bp-5FCh]
  int v199; // [sp+57Ch] [bp-5F8h]
  int v200; // [sp+580h] [bp-5F4h]
  int v201; // [sp+584h] [bp-5F0h]
  int v202; // [sp+588h] [bp-5ECh]
  int v203; // [sp+58Ch] [bp-5E8h]
  int v204; // [sp+590h] [bp-5E4h]
  int v205; // [sp+594h] [bp-5E0h]
  int v206; // [sp+670h] [bp-504h] BYREF
  int v207; // [sp+674h] [bp-500h]
  int v208; // [sp+678h] [bp-4FCh]
  int v209; // [sp+67Ch] [bp-4F8h]
  int v210; // [sp+680h] [bp-4F4h]
  int v211; // [sp+684h] [bp-4F0h]
  int v212; // [sp+688h] [bp-4ECh]
  int v213; // [sp+68Ch] [bp-4E8h]
  int v214; // [sp+690h] [bp-4E4h]
  int v215; // [sp+694h] [bp-4E0h]
  int v216; // [sp+698h] [bp-4DCh]
  int v217; // [sp+69Ch] [bp-4D8h]
  int v218; // [sp+6A0h] [bp-4D4h]
  int v219; // [sp+6A4h] [bp-4D0h]
  int v220; // [sp+6A8h] [bp-4CCh]
  int v221; // [sp+6ACh] [bp-4C8h]
  int v222; // [sp+6B0h] [bp-4C4h]
  int v223; // [sp+6B4h] [bp-4C0h]
  int v224; // [sp+6B8h] [bp-4BCh]
  int v225; // [sp+6BCh] [bp-4B8h]
  int v226; // [sp+6C0h] [bp-4B4h]
  int v227; // [sp+6C4h] [bp-4B0h]
  int v228; // [sp+6C8h] [bp-4ACh]
  int v229; // [sp+6CCh] [bp-4A8h]
  int v230; // [sp+6D0h] [bp-4A4h]
  int v231; // [sp+6D4h] [bp-4A0h]
  int v232; // [sp+6D8h] [bp-49Ch]
  int v233; // [sp+6DCh] [bp-498h]
  int v234; // [sp+6E0h] [bp-494h]
  int v235; // [sp+6E4h] [bp-490h]
  _DWORD v236[10]; // [sp+6E8h] [bp-48Ch] BYREF
  int v237[30]; // [sp+710h] [bp-464h] BYREF
  _DWORD v238[10]; // [sp+788h] [bp-3ECh] BYREF
  int v239[30]; // [sp+7B0h] [bp-3C4h] BYREF
  _DWORD v240[10]; // [sp+828h] [bp-34Ch] BYREF
  int v241[30]; // [sp+850h] [bp-324h] BYREF
  _DWORD v242[10]; // [sp+8C8h] [bp-2ACh] BYREF
  int v243[30]; // [sp+8F0h] [bp-284h] BYREF
  _DWORD v244[10]; // [sp+968h] [bp-20Ch] BYREF
  int v245[30]; // [sp+990h] [bp-1E4h] BYREF
  _DWORD v246[10]; // [sp+A08h] [bp-16Ch] BYREF
  int v247[30]; // [sp+A30h] [bp-144h] BYREF
  _DWORD v248[40]; // [sp+AA8h] [bp-CCh] BYREF
  _DWORD v249[11]; // [sp+B48h] [bp-2Ch] BYREF

  v6 = a3[63];
  if ( v6 > 0x10 )
    return 0;
  v62 = (int)(a3 + 32);
  if ( v6 == 16 )
  {
    result = memcmp(a3 + 48, &unk_6E1C94, 0xFu);
    if ( !result )
    {
      v47 = a3[47];
      if ( v47 >= 0x14 )
      {
        if ( v47 > 0x14 )
          return result;
        v48 = a3[46];
        if ( v48 >= 0xDE )
        {
          if ( v48 > 0xDE )
            return result;
          v49 = a3[45];
          if ( v49 >= 0xF9 )
          {
            if ( v49 > 0xF9 )
              return result;
            v50 = a3[44];
            if ( v50 >= 0xDE )
            {
              if ( v50 > 0xDE )
                return result;
              v51 = a3[43];
              if ( v51 >= 0xA2 )
              {
                if ( v51 > 0xA2 )
                  return result;
                v52 = a3[42];
                if ( v52 >= 0xF7 )
                {
                  if ( v52 > 0xF7 )
                    return result;
                  v53 = a3[41];
                  if ( v53 >= 0x9C )
                  {
                    if ( v53 > 0x9C )
                      return result;
                    v54 = a3[40];
                    if ( v54 >= 0xD6 )
                    {
                      if ( v54 > 0xD6 )
                        return result;
                      v55 = a3[39];
                      if ( v55 >= 0x58 )
                      {
                        if ( v55 > 0x58 )
                          return result;
                        v56 = a3[38];
                        if ( v56 >= 0x12 )
                        {
                          if ( v56 > 0x12 )
                            return result;
                          v57 = a3[37];
                          if ( v57 >= 0x63 )
                          {
                            if ( v57 > 0x63 )
                              return result;
                            v58 = a3[36];
                            if ( v58 >= 0x1A )
                            {
                              if ( v58 > 0x1A )
                                return result;
                              v59 = a3[35];
                              if ( v59 >= 0x5C )
                              {
                                if ( v59 > 0x5C )
                                  return result;
                                v60 = a3[34];
                                if ( v60 >= 0xF5 && (v60 > 0xF5 || __PAIR64__(a3[33], a3[32]) >= 0xD3000000EDLL) )
                                  return result;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto LABEL_3;
    }
    return 0;
  }
LABEL_3:
  sub_1414F4(&v89, (unsigned int *)a4);
  memset(v99, 0, sizeof(v99));
  v99[0] = 1;
  sub_142808(&v150, &v89);
  sub_141D74(&v181, &v150, dword_1D5FE4);
  v181 += v99[0];
  v152 -= v99[2];
  v150 -= v99[0];
  v153 -= v99[3];
  v155 -= v99[5];
  v151 -= v99[1];
  v154 -= v99[4];
  v156 -= v99[6];
  v158 -= v99[8];
  v159 -= v99[9];
  v157 -= v99[7];
  v182 += v99[1];
  v185 += v99[4];
  v7 = 4;
  v183 += v99[2];
  v184 += v99[3];
  v187 += v99[6];
  v186 += v99[5];
  v188 += v99[7];
  v189 += v99[8];
  v190 += v99[9];
  sub_142808(v194, &v181);
  sub_141D74(v194, v194, &v181);
  sub_142808(&v79, v194);
  sub_141D74(&v79, &v79, &v181);
  sub_141D74(&v79, &v79, &v150);
  v8 = v195;
  sub_142808(v195, &v79);
  sub_142808(&v196, v195);
  sub_142808(&v196, &v196);
  sub_141D74(&v196, &v79, &v196);
  sub_141D74(v8, v8, &v196);
  sub_142808(v8, v8);
  sub_141D74(v8, &v196, v8);
  sub_142808(&v196, v195);
  do
  {
    sub_142808(&v196, &v196);
    --v7;
  }
  while ( v7 );
  v9 = 9;
  sub_141D74(v195, &v196, v195);
  sub_142808(&v196, v195);
  do
  {
    sub_142808(&v196, &v196);
    --v9;
  }
  while ( v9 );
  sub_141D74(&v196, &v196, v195);
  v10 = 19;
  sub_142808(&v206, &v196);
  do
  {
    sub_142808(&v206, &v206);
    --v10;
  }
  while ( v10 );
  v11 = 9;
  sub_141D74(&v196, &v206, &v196);
  sub_142808(&v196, &v196);
  do
  {
    sub_142808(&v196, &v196);
    --v11;
  }
  while ( v11 );
  v12 = 49;
  sub_141D74(v195, &v196, v195);
  sub_142808(&v196, v195);
  do
  {
    sub_142808(&v196, &v196);
    --v12;
  }
  while ( v12 );
  v13 = 99;
  sub_141D74(&v196, &v196, v195);
  sub_142808(&v206, &v196);
  do
  {
    sub_142808(&v206, &v206);
    --v13;
  }
  while ( v13 );
  v14 = 49;
  sub_141D74(&v196, &v206, &v196);
  sub_142808(&v196, &v196);
  do
  {
    sub_142808(&v196, &v196);
    --v14;
  }
  while ( v14 );
  v15 = v195;
  sub_141D74(v195, &v196, v195);
  sub_142808(v15, v15);
  sub_142808(v15, v15);
  sub_141D74(&v79, v195, &v79);
  sub_141D74(&v79, &v79, v194);
  sub_141D74(&v79, &v79, &v150);
  sub_142808(&v196, &v79);
  sub_141D74(&v196, &v196, &v181);
  v206 = v196 - v150;
  v207 = v197 - v151;
  v208 = v198 - v152;
  v209 = v199 - v153;
  v210 = v200 - v154;
  v211 = v201 - v155;
  v212 = v202 - v156;
  v213 = v203 - v157;
  v214 = v204 - v158;
  v215 = v205 - v159;
  sub_141BC4(v195, &v206);
  if ( !sub_BC33C((unsigned __int8 *)v195, byte_1D600C, 32) )
  {
LABEL_20:
    sub_141BC4(v195, &v79);
    if ( (v195[0] & 1) != *(unsigned __int8 *)(a4 + 31) >> 7 )
    {
      v79 = -v79;
      v80 = -v80;
      v81 = -v81;
      v82 = -v82;
      v83 = -v83;
      v84 = -v84;
      v85 = -v85;
      v86 = -v86;
      v87 = -v87;
      v88 = -v88;
    }
    sub_141D74(&v100, &v79, &v89);
    v80 = -v80;
    v79 = -v79;
    v81 = -v81;
    v83 = -v83;
    v84 = -v84;
    v82 = -v82;
    v87 = -v87;
    v85 = -v85;
    v102 = -v102;
    v88 = -v88;
    v86 = -v86;
    v100 = -v100;
    v104 = -v104;
    v105 = -v105;
    v103 = -v103;
    v109 = -v109;
    v101 = -v101;
    v106 = -v106;
    v107 = -v107;
    v108 = -v108;
    sub_1065B8((int)v194);
    sub_106AB8((int)v194, a3, 0x20u);
    sub_106AB8((int)v194, (void *)a4, 0x20u);
    sub_106AB8((int)v194, a1, a2);
    sub_106678(v75, v194);
    sub_143E0C(v75);
    sub_143D74(v195, (int)v75);
    sub_143D74(&v196, v62);
    v216 = v89 - v79;
    v207 = v90 + v80;
    v217 = v90 - v80;
    v209 = v92 + v82;
    v206 = v89 + v79;
    v218 = v91 - v81;
    v210 = v93 + v83;
    v211 = v94 + v84;
    v212 = v95 + v85;
    v208 = v91 + v81;
    v213 = v96 + v86;
    v219 = v92 - v82;
    v223 = v96 - v86;
    v220 = v93 - v83;
    v221 = v94 - v84;
    v214 = v97 + v87;
    v224 = v97 - v87;
    v222 = v95 - v85;
    v225 = v98 - v88;
    v215 = v98 + v88;
    v226 = v99[0];
    v227 = v99[1];
    v228 = v99[2];
    v229 = v99[3];
    v230 = v99[4];
    v231 = v99[5];
    v232 = v99[6];
    v233 = v99[7];
    v234 = v99[8];
    v235 = v99[9];
    sub_141D74(v236, &v100, dword_1D6054);
    v181 = v79;
    v182 = v80;
    v183 = v81;
    v184 = v82;
    v185 = v83;
    v186 = v84;
    v187 = v85;
    v188 = v86;
    v189 = v87;
    v190 = v88;
    v191[0] = v89;
    v191[1] = v90;
    v191[2] = v91;
    v191[3] = v92;
    v191[4] = v93;
    v191[5] = v94;
    v191[6] = v95;
    v191[7] = v96;
    v191[8] = v97;
    v191[9] = v98;
    v192[0] = v99[0];
    v192[1] = v99[1];
    v192[2] = v99[2];
    v192[3] = v99[3];
    v192[4] = v99[4];
    v192[5] = v99[5];
    v192[6] = v99[6];
    v192[7] = v99[7];
    v192[8] = v99[8];
    v192[9] = v99[9];
    sub_142E68(&v110, &v181);
    sub_141D74(&v181, (int *)&v110, &v140);
    sub_141D74(v191, &v120, &v130);
    sub_141D74(v192, &v130, &v140);
    sub_141D74(v193, (int *)&v110, &v120);
    sub_143A58((int *)&v110, &v181, &v206);
    sub_141D74(&v150, (int *)&v110, &v140);
    sub_141D74(&v160, &v120, &v130);
    sub_141D74(&v170, &v130, &v140);
    sub_141D74(v180, (int *)&v110, &v120);
    v237[11] = v161 - v151;
    v237[2] = v162 + v152;
    v237[3] = v163 + v153;
    v237[10] = v160 - v150;
    v237[4] = v164 + v154;
    v237[1] = v161 + v151;
    v237[5] = v165 + v155;
    v237[6] = v166 + v156;
    v237[0] = v160 + v150;
    v237[7] = v167 + v157;
    v237[14] = v164 - v154;
    v237[15] = v165 - v155;
    v237[12] = v162 - v152;
    v237[13] = v163 - v153;
    v237[16] = v166 - v156;
    v237[8] = v168 + v158;
    v237[17] = v167 - v157;
    v237[9] = v169 + v159;
    v237[18] = v168 - v158;
    v237[19] = v169 - v159;
    v237[20] = v170;
    v237[21] = v171;
    v237[22] = v172;
    v237[23] = v173;
    v237[24] = v174;
    v237[25] = v175;
    v237[26] = v176;
    v237[27] = v177;
    v237[28] = v178;
    v237[29] = v179;
    sub_141D74(v238, v180, dword_1D6054);
    sub_143A58((int *)&v110, &v181, v237);
    sub_141D74(&v150, (int *)&v110, &v140);
    sub_141D74(&v160, &v120, &v130);
    sub_141D74(&v170, &v130, &v140);
    sub_141D74(v180, (int *)&v110, &v120);
    v239[11] = v161 - v151;
    v239[2] = v162 + v152;
    v239[0] = v160 + v150;
    v239[10] = v160 - v150;
    v239[3] = v163 + v153;
    v239[1] = v161 + v151;
    v239[4] = v164 + v154;
    v239[5] = v165 + v155;
    v239[6] = v166 + v156;
    v239[7] = v167 + v157;
    v239[13] = v163 - v153;
    v239[16] = v166 - v156;
    v239[17] = v167 - v157;
    v239[15] = v165 - v155;
    v239[8] = v168 + v158;
    v239[12] = v162 - v152;
    v239[18] = v168 - v158;
    v239[9] = v169 + v159;
    v239[14] = v164 - v154;
    v239[19] = v169 - v159;
    v239[20] = v170;
    v239[21] = v171;
    v239[22] = v172;
    v239[23] = v173;
    v239[24] = v174;
    v239[25] = v175;
    v239[26] = v176;
    v239[27] = v177;
    v239[28] = v178;
    v239[29] = v179;
    sub_141D74(v240, v180, dword_1D6054);
    sub_143A58((int *)&v110, &v181, v239);
    sub_141D74(&v150, (int *)&v110, &v140);
    sub_141D74(&v160, &v120, &v130);
    sub_141D74(&v170, &v130, &v140);
    sub_141D74(v180, (int *)&v110, &v120);
    v241[11] = v161 - v151;
    v241[2] = v152 + v162;
    v241[0] = v150 + v160;
    v241[10] = v160 - v150;
    v241[3] = v153 + v163;
    v241[1] = v151 + v161;
    v241[4] = v154 + v164;
    v241[5] = v155 + v165;
    v241[6] = v156 + v166;
    v241[7] = v157 + v167;
    v241[13] = v163 - v153;
    v241[16] = v166 - v156;
    v241[17] = v167 - v157;
    v241[15] = v165 - v155;
    v241[8] = v158 + v168;
    v241[12] = v162 - v152;
    v241[18] = v168 - v158;
    v241[9] = v169 + v159;
    v241[14] = v164 - v154;
    v241[19] = v169 - v159;
    v241[20] = v170;
    v241[21] = v171;
    v241[22] = v172;
    v241[23] = v173;
    v241[24] = v174;
    v241[25] = v175;
    v241[26] = v176;
    v241[27] = v177;
    v241[28] = v178;
    v241[29] = v179;
    sub_141D74(v242, v180, dword_1D6054);
    sub_143A58((int *)&v110, &v181, v241);
    sub_141D74(&v150, (int *)&v110, &v140);
    sub_141D74(&v160, &v120, &v130);
    sub_141D74(&v170, &v130, &v140);
    sub_141D74(v180, (int *)&v110, &v120);
    v243[11] = v161 - v151;
    v243[0] = v160 + v150;
    v243[2] = v152 + v162;
    v243[10] = v160 - v150;
    v243[3] = v153 + v163;
    v243[1] = v151 + v161;
    v243[4] = v154 + v164;
    v243[5] = v155 + v165;
    v243[6] = v156 + v166;
    v243[7] = v157 + v167;
    v243[13] = v163 - v153;
    v243[12] = v162 - v152;
    v243[15] = v165 - v155;
    v243[16] = v166 - v156;
    v243[17] = v167 - v157;
    v243[14] = v164 - v154;
    v243[8] = v158 + v168;
    v243[9] = v169 + v159;
    v243[18] = v168 - v158;
    v243[19] = v169 - v159;
    v243[20] = v170;
    v243[21] = v171;
    v243[22] = v172;
    v243[23] = v173;
    v243[24] = v174;
    v243[25] = v175;
    v243[26] = v176;
    v243[27] = v177;
    v243[28] = v178;
    v243[29] = v179;
    sub_141D74(v244, v180, dword_1D6054);
    sub_143A58((int *)&v110, &v181, v243);
    sub_141D74(&v150, (int *)&v110, &v140);
    sub_141D74(&v160, &v120, &v130);
    sub_141D74(&v170, &v130, &v140);
    sub_141D74(v180, (int *)&v110, &v120);
    v245[11] = v161 - v151;
    v245[2] = v152 + v162;
    v245[0] = v150 + v160;
    v245[10] = v160 - v150;
    v245[3] = v153 + v163;
    v245[1] = v151 + v161;
    v245[4] = v154 + v164;
    v245[5] = v155 + v165;
    v245[6] = v166 + v156;
    v245[7] = v167 + v157;
    v245[13] = v163 - v153;
    v245[16] = v166 - v156;
    v245[17] = v167 - v157;
    v245[15] = v165 - v155;
    v245[12] = v162 - v152;
    v245[8] = v168 + v158;
    v245[9] = v169 + v159;
    v245[14] = v164 - v154;
    v245[18] = v168 - v158;
    v245[19] = v169 - v159;
    v245[20] = v170;
    v245[21] = v171;
    v245[22] = v172;
    v245[23] = v173;
    v245[24] = v174;
    v245[25] = v175;
    v245[26] = v176;
    v245[27] = v177;
    v245[28] = v178;
    v245[29] = v179;
    sub_141D74(v246, v180, dword_1D6054);
    sub_143A58((int *)&v110, &v181, v245);
    sub_141D74(&v150, (int *)&v110, &v140);
    sub_141D74(&v160, &v120, &v130);
    sub_141D74(&v170, &v130, &v140);
    sub_141D74(v180, (int *)&v110, &v120);
    v247[11] = v161 - v151;
    v247[2] = v162 + v152;
    v247[0] = v150 + v160;
    v247[10] = v160 - v150;
    v247[3] = v153 + v163;
    v247[1] = v151 + v161;
    v247[4] = v154 + v164;
    v247[5] = v155 + v165;
    v247[6] = v156 + v166;
    v247[7] = v157 + v167;
    v247[13] = v163 - v153;
    v247[16] = v166 - v156;
    v247[17] = v167 - v157;
    v247[15] = v165 - v155;
    v247[12] = v162 - v152;
    v247[8] = v158 + v168;
    v247[9] = v169 + v159;
    v247[14] = v164 - v154;
    v247[18] = v168 - v158;
    v247[19] = v169 - v159;
    v247[20] = v170;
    v247[21] = v171;
    v247[22] = v172;
    v247[23] = v173;
    v247[24] = v174;
    v247[25] = v175;
    v247[26] = v176;
    v247[27] = v177;
    v247[28] = v178;
    v247[29] = v179;
    sub_141D74(v248, v180, dword_1D6054);
    sub_143A58((int *)&v110, &v181, v247);
    sub_141D74(&v150, (int *)&v110, &v140);
    sub_141D74(&v160, &v120, &v130);
    sub_141D74(&v170, &v130, &v140);
    sub_141D74(v180, (int *)&v110, &v120);
    v248[21] = v161 - v151;
    v248[10] = v150 + v160;
    v248[11] = v151 + v161;
    v248[13] = v163 + v153;
    v248[14] = v154 + v164;
    v248[20] = v160 - v150;
    v248[15] = v155 + v165;
    v248[22] = v162 - v152;
    v248[12] = v152 + v162;
    v248[16] = v156 + v166;
    v248[17] = v157 + v167;
    v248[23] = v163 - v153;
    v248[24] = v164 - v154;
    v248[26] = v166 - v156;
    v248[18] = v158 + v168;
    v248[27] = v167 - v157;
    v248[28] = v168 - v158;
    v248[29] = v169 - v159;
    v248[19] = v169 + v159;
    v248[25] = v165 - v155;
    v248[30] = v170;
    v248[31] = v171;
    v248[32] = v172;
    v248[33] = v173;
    v248[34] = v174;
    v248[35] = v175;
    v248[36] = v176;
    v248[37] = v177;
    v248[38] = v178;
    v248[39] = v179;
    sub_141D74(v249, v180, dword_1D6054);
    memset(v76, 0, sizeof(v76));
    memset(v77, 0, sizeof(v77));
    v77[0] = 1;
    memset(v78, 0, sizeof(v78));
    v16 = &v196;
    v78[0] = 1;
    v17 = &v206;
    v18 = 255;
    while ( 1 )
    {
      v21 = *((char *)v16 - 1);
      v16 = (int *)((char *)v16 - 1);
      if ( v21 )
        break;
      v19 = *((char *)v17 - 1);
      v17 = (int *)((char *)v17 - 1);
      if ( v19 )
        break;
      if ( v18-- == 0 )
      {
LABEL_40:
        sub_14622C(v195, v78);
        sub_141D74(&v196, v76, v195);
        sub_141D74(&v206, v77, v195);
        sub_141BC4(&v150, &v206);
        sub_141BC4(&v181, &v196);
        HIBYTE(v157) ^= (v181 & 1) << 7;
        return sub_BC33C((unsigned __int8 *)&v150, a3, 32) == 0;
      }
    }
    v22 = (char *)v195 + v18;
    v23 = (int *)((char *)&v196 + v18 + 1);
    while ( 1 )
    {
      sub_142E68(&v110, v76);
      if ( (char)*v22 > 0 )
        break;
      if ( !*v22 )
        goto LABEL_29;
      sub_141D74(&v150, (int *)&v110, &v140);
      sub_141D74(&v160, &v120, &v130);
      sub_141D74(&v170, &v130, &v140);
      sub_141D74(v180, (int *)&v110, &v120);
      v26 = (char)*v22 / 2;
      v110 = v160 + v150;
      v111 = v161 + v151;
      v63 = -160 * v26;
      v121 = v161 - v151;
      v112 = v162 + v152;
      v122 = v162 - v152;
      v120 = v160 - v150;
      v113 = v163 + v153;
      v123 = v163 - v153;
      v114 = v164 + v154;
      v124 = v164 - v154;
      v115 = v165 + v155;
      v125 = v165 - v155;
      v126 = v166 - v156;
      v116 = v166 + v156;
      v117 = v167 + v157;
      v127 = v167 - v157;
      v118 = v168 + v158;
      v128 = v168 - v158;
      v119 = v169 + v159;
      v129 = v169 - v159;
      sub_141D74(&v130, (int *)&v110, &v206 - 40 * v26 + 10);
      sub_141D74(&v120, &v120, (int *)((char *)&v206 + v63));
      sub_141D74(&v140, (int *)((char *)&v206 + v63 + 120), v180);
      sub_141D74(&v110, &v170, (int *)((char *)&v206 + v63 + 80));
      v27 = v130 - v120;
      v120 += v130;
      v69 = v131 - v121;
      na = v27;
      v28 = v133 - v123;
      v121 += v131;
      v123 += v133;
      v29 = v125;
      v71 = v132 - v122;
      v122 += v132;
      v30 = v134 - v124;
      v125 += v135;
      v124 += v134;
      v64 = 2 * v112;
      v31 = 2 * v110;
      v110 = na;
      v32 = v113;
      v113 = v28;
      v33 = 2 * v111;
      nb = 2 * v32;
      v111 = v69;
      v34 = v114;
      v114 = v30;
      v70 = 2 * v34;
      v112 = v71;
      v35 = v115;
      v115 = v135 - v29;
      v72 = 2 * v35;
      v36 = v116;
      v116 = v136 - v126;
      v73 = 2 * v117;
      v37 = 2 * v118;
      v38 = 2 * v119;
      v126 += v136;
      v130 = v31 - v140;
      v131 = v33 - v141;
      v132 = v64 - v142;
      v133 = nb - v143;
      v134 = v70 - v144;
      v135 = v72 - v145;
      v136 = 2 * v36 - v146;
      v117 = v137 - v127;
      v127 += v137;
      v140 += v31;
      v141 += v33;
      v118 = v138 - v128;
      v119 = v139 - v129;
      v128 += v138;
      v142 += v64;
      v143 += nb;
      v129 += v139;
      v144 += v70;
      v145 += v72;
      v146 += 2 * v36;
      v137 = v73 - v147;
      v39 = v38 - v149;
      v149 += v38;
      v40 = *((char *)v23 - 1);
      v23 = (int *)((char *)v23 - 1);
      v147 += v73;
      v138 = v37 - v148;
      v25 = v40 == 0;
      v148 += v37;
      v139 = v39;
      if ( v40 <= 0 )
      {
LABEL_35:
        if ( !v25 )
        {
          sub_141D74(&v150, (int *)&v110, &v140);
          sub_141D74(&v160, &v120, &v130);
          sub_141D74(&v170, &v130, &v140);
          sub_141D74(v180, (int *)&v110, &v120);
          v41 = *(char *)v23 / 2;
          v110 = v160 + v150;
          v121 = v161 - v151;
          v111 = v161 + v151;
          v112 = v162 + v152;
          v122 = v162 - v152;
          v123 = v163 - v153;
          v120 = v160 - v150;
          v114 = v164 + v154;
          v124 = v164 - v154;
          v113 = v163 + v153;
          v115 = v165 + v155;
          v125 = v165 - v155;
          v126 = v166 - v156;
          v116 = v166 + v156;
          v117 = v167 + v157;
          v127 = v167 - v157;
          v118 = v168 + v158;
          v128 = v168 - v158;
          v129 = v169 - v159;
          v119 = v169 + v159;
          sub_141D74(&v130, (int *)&v110, &dword_1D607C[-30 * v41 + 10]);
          v41 *= -120;
          sub_141D74(&v120, &v120, (int *)((char *)dword_1D607C + v41));
          sub_141D74(&v140, (int *)((char *)&dword_1D607C[20] + v41), v180);
          v42 = v130 - v120;
          v120 += v130;
          v110 = v42;
          v111 = v131 - v121;
          v121 += v131;
          v43 = v133 - v123;
          v112 = v132 - v122;
          v123 += v133;
          v122 += v132;
          v44 = v134 - v124;
          v45 = v125;
          v125 += v135;
          v124 += v134;
          v116 = v136 - v126;
          v113 = v43;
          v114 = v44;
          v115 = v135 - v45;
          v126 += v136;
          v130 = 2 * v170 - v140;
          v131 = 2 * v171 - v141;
          v132 = 2 * v172 - v142;
          v133 = 2 * v173 - v143;
          v134 = 2 * v174 - v144;
          v135 = 2 * v175 - v145;
          v136 = 2 * v176 - v146;
          v117 = v137 - v127;
          v127 += v137;
          v140 += 2 * v170;
          v141 += 2 * v171;
          v118 = v138 - v128;
          v119 = v139 - v129;
          v128 += v138;
          v129 += v139;
          v142 += 2 * v172;
          v143 += 2 * v173;
          v144 += 2 * v174;
          v145 += 2 * v175;
          v146 += 2 * v176;
          v137 = 2 * v177 - v147;
          v147 += 2 * v177;
          v138 = 2 * v178 - v148;
          v148 += 2 * v178;
          v139 = 2 * v179 - v149;
          v149 += 2 * v179;
        }
        goto LABEL_31;
      }
LABEL_30:
      sub_141D74(&v150, (int *)&v110, &v140);
      sub_141D74(&v160, &v120, &v130);
      sub_141D74(&v170, &v130, &v140);
      sub_141D74(v180, (int *)&v110, &v120);
      sub_14374C((int *)&v110, &v150, &dword_1D607C[30 * (*(char *)v23 / 2)]);
LABEL_31:
      --v22;
      sub_141D74(v76, (int *)&v110, &v140);
      sub_141D74(v77, &v120, &v130);
      sub_141D74(v78, &v130, &v140);
      if ( &v196 == v23 )
        goto LABEL_40;
    }
    sub_141D74(&v150, (int *)&v110, &v140);
    sub_141D74(&v160, &v120, &v130);
    sub_141D74(&v170, &v130, &v140);
    sub_141D74(v180, (int *)&v110, &v120);
    sub_143A58((int *)&v110, &v150, &v206 + 40 * ((char)*v22 / 2));
LABEL_29:
    v24 = *((char *)v23 - 1);
    v23 = (int *)((char *)v23 - 1);
    v25 = v24 == 0;
    if ( v24 <= 0 )
      goto LABEL_35;
    goto LABEL_30;
  }
  v206 = v150 + v196;
  v207 = v197 + v151;
  v208 = v198 + v152;
  v209 = v153 + v199;
  v210 = v200 + v154;
  v211 = v201 + v155;
  v212 = v156 + v202;
  v213 = v203 + v157;
  v214 = v204 + v158;
  v215 = v159 + v205;
  sub_141BC4(v195, &v206);
  if ( !sub_BC33C((unsigned __int8 *)v195, byte_1D600C, 32) )
  {
    sub_141D74(&v79, &v79, dword_1D602C);
    goto LABEL_20;
  }
  return 0;
}
