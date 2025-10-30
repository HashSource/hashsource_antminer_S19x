int __fastcall sub_14FB98(_DWORD *a1, int *a2)
{
  int v4; // r10
  int v5; // r3
  int v6; // r2
  int v7; // r3
  int v8; // r2
  int v9; // r8
  int v10; // r2
  int v11; // r3
  int v12; // r3
  int v13; // r2
  int v14; // r3
  int v15; // r12
  int v16; // r2
  int v17; // lr
  int v18; // r3
  int v19; // r8
  int v20; // r2
  int v21; // r3
  unsigned int v22; // lr
  unsigned int v23; // r12
  unsigned int v24; // r8
  unsigned int v25; // r9
  unsigned int v26; // r11
  unsigned int v27; // r10
  unsigned int v28; // r3
  int v29; // r2
  int v30; // r11
  int v31; // r6
  unsigned int v32; // r9
  int v33; // r2
  unsigned int v34; // r8
  int v35; // r6
  unsigned int v36; // r3
  unsigned int v37; // r12
  int v38; // r2
  unsigned int v39; // lr
  unsigned int v40; // r6
  int v41; // r11
  unsigned int v42; // lr
  unsigned int v43; // r3
  int v44; // r2
  unsigned int v45; // r11
  unsigned int v46; // r6
  int v47; // r8
  int v48; // r9
  unsigned int v49; // r6
  unsigned int v50; // lr
  unsigned int v51; // r3
  int v52; // r12
  unsigned int v53; // r8
  unsigned int v54; // r6
  unsigned int v55; // r12
  int v56; // lr
  int v57; // r6
  unsigned int v58; // r3
  unsigned int v59; // r11
  unsigned int v60; // r10
  unsigned int v61; // r9
  unsigned int v62; // r12
  unsigned int v63; // r8
  unsigned int v64; // r2
  unsigned int v65; // lr
  unsigned int v66; // r6
  int v67; // r3
  int v68; // r9
  int v69; // r10
  unsigned int v70; // r6
  unsigned int v71; // r3
  int v72; // r6
  unsigned int v73; // r2
  int v74; // lr
  unsigned int v75; // r3
  int v76; // r6
  unsigned int v77; // r2
  int v78; // r12
  int v79; // lr
  unsigned int v80; // r2
  int v81; // r8
  int v82; // r12
  unsigned int v83; // r2
  int v84; // r9
  int v85; // r8
  unsigned int v86; // r2
  int v87; // r10
  int v88; // r9
  unsigned int v89; // r2
  unsigned int v90; // r10
  unsigned int v91; // r11
  int v92; // r2
  int *v93; // r2
  int *v94; // r1
  int v95; // r6
  int v96; // r3
  int v97; // r6
  int v98; // r8
  int v99; // r9
  int v100; // r10
  int v101; // r12
  int v102; // lr
  int v103; // r6
  int v104; // r11
  int v105; // r6
  int v106; // r3
  int v107; // r6
  unsigned int v108; // r3
  unsigned int v109; // r3
  unsigned int v110; // r3
  int v111; // r3
  int v112; // r3
  int v113; // r11
  int v114; // r6
  int v115; // r3
  int v116; // r12
  int v117; // r6
  int v118; // r8
  int v119; // r3
  int v120; // lr
  int v121; // r6
  int v122; // r9
  unsigned int v123; // r6
  int v124; // lr
  unsigned int v125; // r6
  int v126; // r3
  unsigned int v127; // r8
  unsigned int v128; // lr
  unsigned int v129; // r9
  unsigned int v130; // r12
  int v131; // r3
  unsigned int v132; // r11
  int v133; // r9
  _DWORD *v134; // r6
  int v136; // [sp+0h] [bp-110h] BYREF
  int v137; // [sp+4h] [bp-10Ch]
  int v138; // [sp+8h] [bp-108h]
  int v139; // [sp+Ch] [bp-104h]
  int v140; // [sp+10h] [bp-100h]
  int v141; // [sp+14h] [bp-FCh]
  int v142; // [sp+18h] [bp-F8h]
  int v143; // [sp+1Ch] [bp-F4h]
  int v144; // [sp+20h] [bp-F0h]
  int v145; // [sp+24h] [bp-ECh]
  int v146; // [sp+28h] [bp-E8h]
  int v147; // [sp+2Ch] [bp-E4h]
  int v148; // [sp+30h] [bp-E0h]
  int v149; // [sp+34h] [bp-DCh]
  int v150; // [sp+38h] [bp-D8h]
  int v151; // [sp+3Ch] [bp-D4h]
  int v152; // [sp+40h] [bp-D0h] BYREF
  int v153; // [sp+44h] [bp-CCh]
  int v154; // [sp+48h] [bp-C8h]
  int v155; // [sp+4Ch] [bp-C4h]
  int v156; // [sp+50h] [bp-C0h]
  int v157; // [sp+54h] [bp-BCh]
  int v158; // [sp+58h] [bp-B8h]
  int v159; // [sp+5Ch] [bp-B4h]
  int v160; // [sp+60h] [bp-B0h]
  int v161; // [sp+64h] [bp-ACh]
  int v162; // [sp+68h] [bp-A8h]
  int v163; // [sp+6Ch] [bp-A4h]
  int v164; // [sp+70h] [bp-A0h]
  int v165; // [sp+74h] [bp-9Ch]
  int v166; // [sp+78h] [bp-98h]
  int v167; // [sp+7Ch] [bp-94h]
  int v168; // [sp+80h] [bp-90h] BYREF
  int v169; // [sp+84h] [bp-8Ch]
  int v170; // [sp+88h] [bp-88h]
  int v171; // [sp+8Ch] [bp-84h]
  unsigned int v172; // [sp+90h] [bp-80h]
  unsigned int v173; // [sp+94h] [bp-7Ch]
  int v174; // [sp+98h] [bp-78h]
  unsigned int v175; // [sp+9Ch] [bp-74h]
  unsigned int v176; // [sp+A0h] [bp-70h]
  unsigned int v177; // [sp+A4h] [bp-6Ch]
  unsigned int v178; // [sp+A8h] [bp-68h]
  unsigned int v179; // [sp+ACh] [bp-64h]
  unsigned int v180; // [sp+B0h] [bp-60h]
  unsigned int v181; // [sp+B4h] [bp-5Ch]
  int v182; // [sp+B8h] [bp-58h]
  int v183; // [sp+BCh] [bp-54h]
  int v184; // [sp+C0h] [bp-50h] BYREF
  unsigned int v185; // [sp+C4h] [bp-4Ch]
  unsigned int v186; // [sp+C8h] [bp-48h]
  int v187; // [sp+CCh] [bp-44h]
  int v188; // [sp+D0h] [bp-40h]
  int v189; // [sp+D4h] [bp-3Ch]
  int v190; // [sp+D8h] [bp-38h]
  int v191; // [sp+DCh] [bp-34h]
  int v192; // [sp+E0h] [bp-30h]
  int v193; // [sp+E4h] [bp-2Ch]
  int v194; // [sp+E8h] [bp-28h]
  int v195; // [sp+ECh] [bp-24h]
  int v196; // [sp+F0h] [bp-20h]
  int v197; // [sp+F4h] [bp-1Ch]
  int v198; // [sp+F8h] [bp-18h]
  int v199; // [sp+FCh] [bp-14h]
  unsigned int v200; // [sp+114h] [bp+4h]
  int v201; // [sp+118h] [bp+8h]
  int *v202; // [sp+11Ch] [bp+Ch]
  int v203; // [sp+120h] [bp+10h]
  unsigned int v204; // [sp+124h] [bp+14h]
  int v205; // [sp+128h] [bp+18h]
  _DWORD *v206; // [sp+12Ch] [bp+1Ch]
  unsigned int v207; // [sp+130h] [bp+20h]
  unsigned int v208; // [sp+134h] [bp+24h]
  unsigned int v209; // [sp+138h] [bp+28h]
  int *v210; // [sp+13Ch] [bp+2Ch]
  unsigned int v211; // [sp+140h] [bp+30h]
  unsigned int v212; // [sp+144h] [bp+34h]
  unsigned int v213; // [sp+148h] [bp+38h]
  unsigned int v214; // [sp+14Ch] [bp+3Ch]
  unsigned int v215; // [sp+150h] [bp+40h]
  unsigned int v216; // [sp+154h] [bp+44h]

  v206 = a1 + 48;
  v210 = &v184;
  sub_17BE0C(&v152);
  sub_17BE0C(v210);
  v202 = &v168;
  v136 = v152 + v184;
  v216 = v153 + v185;
  v138 = v154 + v186;
  v139 = v155 + v187;
  v4 = v156 + v188;
  v215 = v193 + v161;
  v137 = v153 + v185;
  v142 = v158 + v190;
  v141 = v157 + v189;
  v146 = v162 + v194;
  v5 = *a2;
  v145 = v193 + v161;
  v6 = a2[16];
  v144 = v160 + v192;
  v143 = v159 + v191;
  v7 = v5 + v6;
  v8 = v195;
  a1[48] = v7;
  v140 = v4;
  v9 = v163 + v8;
  v10 = a2[17];
  v11 = a2[1];
  v147 = v9;
  v12 = v11 + v10;
  v13 = v196;
  a1[49] = v12;
  v14 = a2[18];
  v148 = v164 + v13;
  v15 = v165 + v197;
  v16 = v198;
  a1[50] = v14 + a2[2];
  v17 = v166 + v16;
  v18 = v167;
  a1[51] = a2[19] + a2[3];
  v149 = v15;
  v150 = v17;
  v19 = v18 + v199;
  v20 = a2[4];
  v21 = a2[20];
  v151 = v19;
  a1[52] = v21 + v20;
  a1[53] = a2[5] + a2[21];
  a1[54] = a2[6] + a2[22];
  a1[55] = a2[7] + a2[23];
  a1[56] = a2[8] + a2[24];
  a1[57] = a2[9] + a2[25];
  a1[58] = a2[10] + a2[26];
  a1[59] = a2[11] + a2[27];
  a1[60] = a2[12] + a2[28];
  a1[61] = a2[13] + a2[29];
  a1[62] = a2[14] + a2[30];
  a1[63] = a2[15] + a2[31];
  sub_17BE0C(&v168);
  v204 = v183 - v151 + 805306365;
  v22 = v177 - v145 + 805306365;
  v23 = v178 - v146 + 805306365;
  v24 = v179 - v147 + 805306365;
  v25 = v180 - v148 + 805306365;
  v26 = v181 - v149 + 805306365;
  v27 = v169 - v137 + 805306365;
  v28 = v182 - v150 + 805306365;
  v183 = (v204 & 0xFFFFFFF) + (v28 >> 28);
  v29 = v26 & 0xFFFFFFF;
  v30 = (v28 & 0xFFFFFFF) + (v26 >> 28);
  v31 = v25 & 0xFFFFFFF;
  v32 = v29 + (v25 >> 28);
  v33 = v24 & 0xFFFFFFF;
  v34 = v31 + (v24 >> 28);
  v35 = v23 & 0xFFFFFFF;
  v36 = (v204 >> 28) + v176 - v144 + 805306362;
  v37 = v33 + (v23 >> 28);
  v38 = v22 & 0xFFFFFFF;
  v39 = v35 + (v22 >> 28);
  v40 = v175 - v143 + 805306365;
  v182 = v30;
  v41 = v36 & 0xFFFFFFF;
  v178 = v39;
  v42 = v38 + (v36 >> 28);
  v43 = v174 - v142 + 805306365;
  v44 = v40 & 0xFFFFFFF;
  v45 = v41 + (v40 >> 28);
  v46 = v173 - v141 + 805306365;
  v181 = v32;
  v180 = v34;
  v47 = v46 & 0xFFFFFFF;
  v179 = v37;
  v48 = (v43 & 0xFFFFFFF) + (v46 >> 28);
  v49 = v172 - v140 + 805306365;
  v177 = v42;
  v50 = v44 + (v43 >> 28);
  v51 = v170 - v138 + 805306365;
  v52 = v49 & 0xFFFFFFF;
  v175 = v50;
  v53 = v47 + (v49 >> 28);
  v54 = v171 - v139 + 805306365;
  v176 = v45;
  v174 = v48;
  v173 = v53;
  v55 = v52 + (v54 >> 28);
  v56 = (v54 & 0xFFFFFFF) + (v51 >> 28);
  v57 = (v51 & 0xFFFFFFF) + (v27 >> 28);
  v58 = v168 - v136 + 805306365;
  v172 = v55;
  v169 = (v27 & 0xFFFFFFF) + (v58 >> 28);
  v168 = (v58 & 0xFFFFFFF) + (v204 >> 28);
  v170 = v57;
  v171 = v56;
  v59 = v185 - v153 + 536870910;
  v60 = v198 - v166 + 536870910;
  v61 = v199 - v167 + 536870910;
  v205 = v61 >> 28;
  v62 = v194 - v162 + 536870910;
  v63 = v195 - v163 + 536870910;
  v64 = v193 - v161 + 536870910;
  v216 = v186 - v154 + 536870910;
  v65 = v197 - v165 + 536870910;
  v215 = v187 - v155 + 536870910;
  v214 = v188 - v156 + 536870910;
  v213 = v189 - v157 + 536870910;
  v212 = v190 - v158 + 536870910;
  v208 = v191 - v159 + 536870910;
  v207 = v192 - v160 + 536870908 + (v61 >> 28);
  v211 = v196 - v164 + 536870910;
  v66 = v184 - v152 + 536870910;
  v67 = v61 & 0xFFFFFFF;
  v68 = (v60 & 0xFFFFFFF) + (v65 >> 28);
  a1[63] = v67 + (v60 >> 28);
  a1[49] = (v59 & 0xFFFFFFF) + (v66 >> 28);
  v69 = v66 & 0xFFFFFFF;
  v70 = v211;
  v71 = v207;
  a1[62] = v68;
  v209 = v69;
  a1[61] = (v65 & 0xFFFFFFF) + (v70 >> 28);
  a1[60] = (v70 & 0xFFFFFFF) + (v63 >> 28);
  a1[59] = (v63 & 0xFFFFFFF) + (v62 >> 28);
  a1[58] = (v62 & 0xFFFFFFF) + (v64 >> 28);
  v211 = (v64 & 0xFFFFFFF) + (v71 >> 28);
  v72 = v208 & 0xFFFFFFF;
  v73 = v212;
  a1[56] = (v71 & 0xFFFFFFF) + (v208 >> 28);
  v74 = v73 & 0xFFFFFFF;
  v75 = v211;
  v76 = v72 + (v73 >> 28);
  v77 = v213;
  a1[55] = v76;
  v78 = v77 & 0xFFFFFFF;
  a1[57] = v75;
  v79 = v74 + (v77 >> 28);
  v80 = v214;
  a1[54] = v79;
  v81 = v80 & 0xFFFFFFF;
  v82 = v78 + (v80 >> 28);
  v83 = v215;
  a1[53] = v82;
  v84 = v83 & 0xFFFFFFF;
  v85 = v81 + (v83 >> 28);
  v86 = v216;
  a1[52] = v85;
  v87 = v86 & 0xFFFFFFF;
  v88 = v84 + (v86 >> 28);
  v89 = v209;
  v90 = v87 + (v59 >> 28);
  a1[51] = v88;
  v91 = v89;
  v92 = v205;
  a1[50] = v90;
  a1[48] = v91 + v92;
  sub_17BE0C(a1);
  v93 = v202;
  v94 = v210;
  v95 = 2 * *a1;
  v213 = 2 * a1[14];
  v96 = a1[1];
  v201 = v95;
  v97 = a1[5];
  v216 = 2 * v96;
  v98 = 2 * v97;
  v99 = 2 * a1[2];
  v100 = 2 * a1[6];
  v101 = 2 * a1[3];
  v102 = 2 * a1[4];
  v103 = a1[8];
  v215 = 2 * a1[7];
  v104 = 2 * v103;
  v105 = a1[9];
  v208 = 2 * a1[10];
  v106 = a1[11];
  v209 = 2 * v105;
  v107 = a1[15];
  v205 = 2 * v106;
  v107 *= 2;
  a1[46] = v213;
  v204 = 2 * a1[12];
  a1[32] = v201;
  v203 = 2 * a1[13];
  a1[33] = v216;
  v108 = v215;
  a1[34] = v99;
  a1[47] = v107;
  a1[39] = v108;
  v109 = v209;
  a1[40] = v104;
  a1[35] = v101;
  a1[41] = v109;
  v110 = v208;
  a1[36] = v102;
  a1[37] = v98;
  a1[42] = v110;
  v111 = v205;
  a1[38] = v100;
  a1[43] = v111;
  a1[44] = v204;
  a1[45] = v203;
  v112 = a1[63];
  v214 = v99 - a1[50] + 0x40000000;
  v113 = v104 - a1[56];
  v200 = v107 - v112 + 1073741820;
  v114 = a1[51];
  v115 = a1[53];
  v207 = v213 - a1[62] + 0x40000000;
  v116 = v101 - v114;
  v117 = a1[52];
  v118 = v98 - v115;
  v213 = v116 + 0x40000000;
  v119 = a1[55];
  v120 = v102 - v117;
  v121 = a1[54];
  v212 = v120 + 0x40000000;
  v211 = v118 + 0x40000000;
  v122 = v100 - v121;
  v123 = v215;
  v215 = v122 + 0x40000000;
  v124 = v123 - v119;
  v125 = v209;
  v126 = a1[57];
  v209 = v124 + 0x40000000;
  v127 = v208 - a1[58] + 1073741820;
  v128 = v205 - a1[59];
  v208 = v125 - v126 + 0x40000000;
  v128 += 1073741820;
  v129 = v204 - a1[60] + 1073741820;
  v130 = v203 - a1[61] + 1073741820;
  v131 = a1[48];
  v216 = v216 - a1[49] + 0x40000000;
  v204 = v201 - v131;
  v205 = v200 >> 28;
  v132 = v113 + 1073741816 + (v200 >> 28);
  v214 -= 4;
  v213 -= 4;
  v212 -= 4;
  v207 -= 4;
  v211 -= 4;
  v215 -= 4;
  v209 -= 4;
  v208 -= 4;
  v216 -= 4;
  v199 = (v200 & 0xFFFFFFF) + (v207 >> 28);
  v198 = (v207 & 0xFFFFFFF) + (v130 >> 28);
  v197 = (v130 & 0xFFFFFFF) + (v129 >> 28);
  v196 = (v129 & 0xFFFFFFF) + (v128 >> 28);
  v195 = (v128 & 0xFFFFFFF) + (v127 >> 28);
  v194 = (v127 & 0xFFFFFFF) + (v208 >> 28);
  v193 = (v208 & 0xFFFFFFF) + (v132 >> 28);
  v191 = (v209 & 0xFFFFFFF) + (v215 >> 28);
  v133 = (v215 & 0xFFFFFFF) + (v211 >> 28);
  v215 = (v214 & 0xFFFFFFF) + (v216 >> 28);
  v184 = ((v201 - v131 + 1073741820) & 0xFFFFFFF) + (v200 >> 28);
  v192 = (v132 & 0xFFFFFFF) + (v209 >> 28);
  v188 = (v212 & 0xFFFFFFF) + (v213 >> 28);
  v187 = (v213 & 0xFFFFFFF) + (v214 >> 28);
  v185 = (v216 & 0xFFFFFFF) + ((unsigned int)(v201 - v131 + 1073741820) >> 28);
  v186 = v215;
  v190 = v133;
  v189 = (v211 & 0xFFFFFFF) + (v212 >> 28);
  sub_17B628(a1, v94, v93);
  v134 = v206;
  sub_17B628(a1 + 32, v206, v210);
  sub_17B628(a1 + 16, v134, &v136);
  return sub_17B628(v134, v202, &v136);
}
