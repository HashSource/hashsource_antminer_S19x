int __fastcall sub_1AC028(int a1, int a2, int a3, int a4, int a5, _DWORD *a6)
{
  int v6; // r9
  signed int v9; // r8
  char *v10; // r6
  int v11; // r7
  __int64 v12; // r0
  int v13; // r12
  int v14; // r3
  int v15; // r2
  char v16; // r3
  int v17; // r2
  int v18; // r1
  bool v19; // zf
  int *v20; // r3
  int v22; // r3
  unsigned int v23; // r10
  int v24; // r9
  char *v25; // r4
  int v26; // r3
  bool v27; // zf
  int v28; // r2
  int v29; // r3
  int v30; // r0
  char v31; // r10
  _BOOL4 v32; // r1
  int v33; // r1
  _DWORD *v34; // r3
  int v35; // r0
  int v36; // r3
  int v37; // r4
  int v38; // r4
  int v39; // r2
  bool v40; // zf
  char v41; // r2
  int v42; // r3
  unsigned int v43; // r10
  int v44; // r4
  int v45; // r1
  int v46; // r3
  char *v47; // r9
  char *v48; // r10
  int v49; // r0
  int v50; // r2
  bool v51; // zf
  unsigned int v52; // r10
  int v53; // r3
  int v54; // r2
  int v55; // r0
  _DWORD *v56; // r3
  int v57; // r4
  int v58; // r0
  int v59; // r3
  _DWORD *v60; // r6
  int v61; // r5
  char *v62; // r3
  int v63; // r2
  bool v64; // zf
  int v65; // r4
  int v66; // r0
  int v67; // r0
  int v68; // r3
  int v69; // r4
  int v70; // r0
  int v71; // r5
  int v72; // r1
  int v73; // r6
  int v74; // r0
  __int16 v75; // r2
  int v76; // r3
  char v77; // r12
  int v78; // r3
  const char *v79; // r1
  int v80; // r0
  char v81; // r2
  int v82; // r6
  char v83; // r2
  unsigned int v84; // r3
  int v85; // r3
  unsigned int v86; // r2
  int v87; // r0
  int v88; // r0
  int v89; // r3
  int v90; // r4
  int v91; // r4
  int v92; // r0
  int v93; // r5
  int v94; // r0
  int v95; // r3
  int v96; // r5
  unsigned int v97; // r2
  int v98; // r4
  int v99; // r0
  int v100; // r2
  int v101; // r3
  int v102; // r1
  int v103; // r3
  _BOOL4 v104; // r1
  int v105; // r9
  int v106; // r3
  int v107; // r2
  int v108; // r3
  bool v109; // zf
  int v110; // r7
  char *v111; // r11
  int v112; // r1
  int v113; // r2
  int v114; // r3
  int v115; // r12
  int v116; // r1
  bool v117; // zf
  int v118; // r3
  unsigned int v119; // r2
  int v120; // r1
  int v121; // r4
  int v122; // r1
  int v123; // r2
  int v124; // r1
  int v125; // r0
  unsigned int v126; // lr
  int v127; // r3
  int v128; // r1
  int v129; // r10
  int v130; // r4
  size_t v131; // r8
  void *v132; // r0
  const void *v133; // r1
  int v134; // r3
  int v135; // r0
  __int16 v136; // r3
  int v137; // r6
  int v138; // r3
  bool v139; // zf
  int v140; // r2
  int v141; // r3
  _DWORD *v142; // r4
  int v143; // r7
  int v144; // r0
  char v145; // r3
  int v146; // r7
  _DWORD *v147; // r4
  _DWORD *v148; // r0
  int v149; // r2
  int v150; // r3
  int v151; // r1
  int v152; // r12
  int v153; // r3
  bool v154; // zf
  int v155; // r7
  _DWORD *v156; // r3
  int v157; // r12
  int v158; // r0
  unsigned int v159; // r0
  int v160; // r0
  int v161; // r3
  int v162; // r5
  int v163; // r3
  int v164; // r2
  int v165; // r6
  _DWORD *v166; // r4
  _DWORD *v167; // r0
  _DWORD *v168; // r3
  int v169; // r2
  int v170; // r12
  int v171; // r1
  int *v172; // r8
  int v173; // r9
  _DWORD *v174; // r0
  int v175; // r4
  int v176; // r2
  int v177; // r3
  char v178; // r1
  _WORD *v179; // r10
  _WORD *v180; // r3
  int v181; // r0
  bool v182; // zf
  int v183; // r3
  _DWORD *v184; // r3
  int v185; // r2
  int v186; // r4
  int v187; // r0
  _DWORD *v188; // r8
  int v189; // r1
  _DWORD *v190; // r2
  int v191; // t1
  int v192; // r12
  int v193; // r2
  char v194; // r1
  int v195; // r4
  int v196; // r1
  int v197; // r3
  void *v198; // r2
  void *v199; // r3
  int v200; // r0
  int v201; // r3
  int v202; // r4
  int i; // r0
  int v204; // r2
  int v205; // r3
  bool v206; // zf
  int v207; // [sp+4h] [bp-60h]
  int v208; // [sp+8h] [bp-5Ch]
  const char *v209; // [sp+Ch] [bp-58h]
  char *s2; // [sp+10h] [bp-54h]
  int src; // [sp+14h] [bp-50h]
  int srca; // [sp+14h] [bp-50h]
  int v213; // [sp+18h] [bp-4Ch]
  int v214; // [sp+18h] [bp-4Ch]
  int v215; // [sp+1Ch] [bp-48h]
  void (__fastcall *v216)(int, char *, int *); // [sp+1Ch] [bp-48h]
  int v220; // [sp+2Ch] [bp-38h]
  int v221; // [sp+38h] [bp-2Ch]
  _BYTE v222[4]; // [sp+44h] [bp-20h] BYREF
  int v223; // [sp+48h] [bp-1Ch] BYREF
  unsigned int v224; // [sp+4Ch] [bp-18h]
  unsigned int v225; // [sp+50h] [bp-14h]

  v220 = sub_1B7250(a6);
  v9 = *(_DWORD *)(a1 + 4);
  v10 = *(char **)(dword_487AA8 + 20);
  v11 = *(_DWORD *)(dword_487AA8 + 52);
  LODWORD(v12) = *(_DWORD *)a1;
  if ( a3 )
    s2 = (char *)(*(_DWORD *)(dword_487AA4 + 120) + *(_DWORD *)(dword_487AB4 + 8) + *(_DWORD *)a1);
  else
    s2 = (char *)(*(_DWORD *)(dword_487AA4 + 124) + *(_DWORD *)a1);
  HIDWORD(v12) = *(unsigned __int16 *)(a1 + 8);
  v13 = (HIDWORD(v12) >> 6) & 0x1F;
  switch ( v13 )
  {
    case 1:
    case 27:
      goto LABEL_9;
    case 2:
    case 13:
    case 15:
    case 24:
    case 25:
      v14 = a6[39];
      if ( v14 != -1 )
        goto LABEL_5;
      v12 = sub_94700((int)"mdebugread.c", 630, "sect_index_data not initialized");
LABEL_9:
      v16 = *(_BYTE *)(a1 + 8);
      if ( (v16 & 0x3Fu) - 7 <= 1 )
        goto LABEL_6;
      v17 = a6[38];
      if ( v17 == -1 )
        goto LABEL_240;
      *(_DWORD *)(a1 + 4) = *(_DWORD *)(a5 + 4 * v17) + v9;
      goto LABEL_6;
    case 3:
    case 14:
      v14 = a6[40];
      if ( v14 == -1 )
      {
        sub_94700((int)"mdebugread.c", 634, "Section index is uninitialized");
LABEL_240:
        sub_94700((int)"mdebugread.c", 623, "sect_index_text not initialized");
LABEL_241:
        v198 = sub_93028(v9);
LABEL_230:
        v202 = 0;
        *(_DWORD *)(*(_DWORD *)(v11 + 24) + 24) = v198;
        for ( i = sub_C28A8(v10, &v223); ; i = sub_C28E4((int)&v223) )
        {
          v206 = i == 0;
          if ( i )
            v206 = v202 == v6;
          if ( v206 )
            break;
          if ( (*(_BYTE *)(i + 33) & 2) != 0 )
          {
            v204 = 3 * v202++;
            v205 = *(_DWORD *)(*(_DWORD *)(v11 + 24) + 24) + 8 * v204;
            LOBYTE(v204) = *(_BYTE *)(v205 + 8);
            *(_DWORD *)(v205 + 12) = *(_DWORD *)(i + 24);
            *(_BYTE *)(v205 + 8) = v204 & 0xFE;
          }
        }
LABEL_18:
        v20 = (int *)dword_487AC4;
LABEL_19:
        if ( v20 )
        {
LABEL_161:
          v134 = *v20;
          if ( v134 )
          {
            dword_487AC4 = v134;
            return 1;
          }
        }
        return 1;
      }
LABEL_5:
      v15 = *(_DWORD *)(a5 + 4 * v14);
      v16 = *(_BYTE *)(a1 + 8);
      *(_DWORD *)(a1 + 4) = v15 + v9;
LABEL_6:
      switch ( v16 & 0x3F )
      {
        case 0:
        case 0xC:
        case 0xD:
        case 0xF:
        case 0x22:
          return 1;
        case 1:
          src = 1;
          v65 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(dword_487AC4 + 8) + 4) + 32) + 8);
          v66 = sub_1A74F4(s2);
          *(_DWORD *)(v66 + 8) = *(_DWORD *)(a1 + 4);
          sub_1ABF50(a1, a2, a4, v66, 2, v65, (int)a6, s2);
          return src;
        case 2:
          v91 = *(_DWORD *)(dword_487AC4 + 12);
          v92 = sub_1A74F4(s2);
          v93 = v92;
          if ( (((*(_WORD *)(a1 + 8) & 0x7C0) - 1088) & 0xFF80) != 0 )
          {
            *(_DWORD *)(v92 + 8) = *(_DWORD *)(a1 + 4);
          }
          else
          {
            v159 = sub_E645C(*(char **)v92);
            *(_DWORD *)(v93 + 8) = dword_489454[v159];
            dword_489454[v159] = v93;
          }
          v77 = 2;
          v207 = v91;
          v209 = s2;
          v208 = (int)a6;
          v76 = v93;
          goto LABEL_105;
        case 3:
          dword_487ACC = 1;
          v78 = *(_DWORD *)(dword_487AC4 + 32) + 1;
          ++dword_487AD0;
          *(_DWORD *)(dword_487AC4 + 32) = v78;
          if ( sub_10A844((unsigned __int8)*s2) && s2[1] == 116 )
          {
            v79 = s2;
            if ( !s2[2] )
              v79 = "this";
            s2 = (char *)v79;
          }
          v80 = sub_1A74F4(s2);
          v81 = *(_BYTE *)(v80 + 32);
          v82 = v80;
          *(_BYTE *)(v80 + 33) |= 2u;
          v83 = v81 & 0xF8 | 1;
          v84 = *(unsigned __int16 *)(a1 + 8);
          *(_BYTE *)(v80 + 32) = v83;
          v85 = (v84 >> 6) & 0x1F;
          switch ( v85 )
          {
            case 16:
              *(_BYTE *)(v80 + 32) = *(_BYTE *)(v80 + 32) & 7 | 0x28;
              break;
            case 19:
              *(_BYTE *)(v80 + 32) = *(_BYTE *)(v80 + 32) & 7 | (8 * (dword_487ADC & 0x1F));
              break;
            case 4:
              *(_BYTE *)(v80 + 32) = v83 & 7 | (8 * (dword_487AD8 & 0x1F));
              break;
            default:
              *(_BYTE *)(v80 + 32) = *(_BYTE *)(v80 + 32) & 7 | 0x20;
              break;
          }
          v86 = *(_DWORD *)(a1 + 8);
          v87 = dword_487AD4;
          *(_QWORD *)(v82 + 8) = v9;
          src = 1;
          v88 = sub_1AAC98(v87, a2, v86 >> 12, 0, a4, s2);
          v89 = dword_487AC4;
          *(_DWORD *)(v82 + 24) = v88;
          v90 = *(_DWORD *)(v89 + 12);
          ((void (__fastcall *)(int, _DWORD))loc_2209F8)(v82, *(_DWORD *)(v89 + 8));
          sub_10B4AC(*(_DWORD *)(v90 + 16));
          return src;
        case 4:
          v73 = *(_DWORD *)(dword_487AC4 + 12);
          v74 = sub_1A74F4(s2);
          v75 = *(_WORD *)(a1 + 8);
          v76 = v74;
          *(_QWORD *)(v74 + 8) = v9;
          if ( (v75 & 0x7C0) == 0x100 )
          {
            src = 1;
            sub_1ABF50(a1, a2, a4, v74, dword_487AD8, v73, (int)a6, s2);
            return src;
          }
          v77 = 7;
          v207 = v73;
          v209 = s2;
          v208 = (int)a6;
LABEL_105:
          sub_1ABF50(a1, a2, a4, v76, v77, v207, v208, v209);
          return 1;
        case 5:
          src = 1;
          v67 = sub_1A74F4(s2);
          v68 = *(_DWORD *)(a1 + 4);
          v69 = v67;
          *(_BYTE *)(v67 + 32) = 73;
          *(_DWORD *)(v67 + 8) = v68;
          v70 = sub_1780C4((int)a6);
          v71 = *(_DWORD *)(dword_487AC4 + 12);
          v72 = *(_DWORD *)(dword_487AC4 + 8);
          *(_DWORD *)(v69 + 24) = *(_DWORD *)(v70 + 12);
          ((void (__fastcall *)(int, int))loc_2209F8)(v69, v72);
          sub_10B4AC(*(_DWORD *)(v71 + 16));
          return src;
        case 6:
        case 0xE:
          if ( (v16 & 0x3F) == 6 && (WORD2(v12) & 0x7C0) != 0x40 )
          {
            v105 = a3;
            src = 1;
            while ( 1 )
            {
              do
              {
                v105 += (int)v10;
                ((void (__fastcall *)(int, int, int *))v11)(dword_487AAC, v105, &v223);
                v106 = v225 & 0x3F;
                ++src;
              }
              while ( v106 == 3 );
              if ( v106 == 8 )
                break;
              if ( dword_47AC88 > 0 )
                sub_F43B4(&off_46D334, "unknown symbol type 0x%x", *(_BYTE *)(a1 + 8) & 0x3F);
            }
            return src;
          }
          v135 = sub_1A74F4(s2);
          v136 = *(_WORD *)(a1 + 8);
          *(_BYTE *)(v135 + 32) = 81;
          v137 = v135;
          v138 = v136 & 0x7C0;
          v139 = v138 == 384;
          if ( v138 != 384 )
            v139 = v138 == 1344;
          v140 = v139;
          if ( v138 )
            v141 = v140;
          else
            v141 = 1;
          if ( v141 )
          {
            v142 = *(_DWORD **)(sub_1780C4((int)a6) + 12);
          }
          else
          {
            v142 = (_DWORD *)sub_1AAC98(dword_487AD4, a2, (*(_DWORD *)(a1 + 8) >> 12) + 1, 0, a4, s2);
            if ( !strcmp(s2, "malloc") && *(_BYTE *)v142[6] == 10 )
              v142 = sub_170090(v142, 0);
          }
          v143 = *(_DWORD *)(dword_487AC4 + 12);
          if ( (*(_BYTE *)(a1 + 8) & 0x3F) == 6 )
          {
            v163 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(dword_487AC4 + 8) + 4) + 32);
            if ( v143 == *(_DWORD *)(v163 + 12) || *(_DWORD *)(a1 + 4) == *(_DWORD *)(dword_487AC4 + 28) )
              v143 = *(_DWORD *)(v163 + 8);
          }
          ((void (__fastcall *)(int))loc_2209F8)(v137);
          sub_10B4AC(*(_DWORD *)(v143 + 16));
          v144 = sub_170358((int)v142);
          v145 = *(_BYTE *)(v137 + 20);
          *(_DWORD *)(v137 + 24) = v144;
          v146 = v145 & 0x1F;
          if ( v146 == 4 )
            *(_BYTE *)(*(_DWORD *)(v144 + 24) + 1) |= 0x20u;
          v147 = sub_93094(1u, 0x18u);
          v148 = sub_10B450(v146);
          v149 = dword_487AC4;
          v150 = *(_DWORD *)(a1 + 4);
          v147[4] = v148;
          v151 = *(_DWORD *)(v149 + 8);
          v152 = *(_DWORD *)(v149 + 12);
          *(_DWORD *)(v137 + 8) = v147;
          v147[1] = v150;
          *v147 = v150;
          v147[2] = v137;
          v147[3] = v152;
          sub_1A7C0C((int)v147, v151 + 4);
          v153 = *(_WORD *)(a1 + 8) & 0x7C0;
          v154 = v153 == 384;
          if ( v153 != 384 )
            v154 = v153 == 1344;
          v155 = v154;
          if ( (*(_WORD *)(a1 + 8) & 0x7C0) == 0 )
            v155 = 1;
          if ( !v155 )
          {
            sub_1A7554();
            v156 = (_DWORD *)dword_487AC4;
            v157 = *(_DWORD *)(v137 + 24);
            v158 = *(_DWORD *)(a1 + 4);
            *(_DWORD *)(dword_487AC4 + 16) = *(_BYTE *)(a1 + 8) & 0x3F;
            v156[3] = v147;
            src = 1;
            v156[5] = v157;
            v156[7] = v158;
            v156[8] = 0;
            v156[6] = -1;
            return src;
          }
          return 1;
        case 7:
          v102 = WORD2(v12) & 0x7C0;
          v103 = ((_WORD)v102 - 1088) & 0xFF80;
          v104 = v102 != 704;
          if ( v103 )
            v22 = v104;
          else
            v22 = 0;
          if ( !v22 )
            goto LABEL_25;
          dword_487ACC = 1;
          sub_1A7554();
          if ( (*(_DWORD *)(dword_487AC4 + 16) & 0xFFFFFFF7) == 6 )
          {
            src = 1;
            *(_DWORD *)(dword_487AC4 + 16) = 0;
          }
          else
          {
            v165 = dword_487AC0;
            *(_DWORD *)(dword_487AC4 + 16) = 7;
            src = 1;
            v166 = sub_93094(1u, 0x18u);
            v167 = sub_10B25C(v165);
            v168 = (_DWORD *)dword_487AC4;
            v169 = *(_DWORD *)(a1 + 4);
            v166[4] = v167;
            v170 = v168[3];
            v171 = v168[2];
            *v166 = v169 + v168[7];
            v166[3] = v170;
            v168[3] = v166;
            sub_1A7C0C((int)v166, v171 + 4);
          }
          return src;
        case 8:
          v18 = WORD2(v12) & 0x7C0;
          v19 = v18 == 704;
          if ( v18 != 704 )
            v19 = ((v18 - 1088) & 0xFF80) == 0;
          if ( v19 )
          {
            v20 = (int *)dword_487AC4;
            *(_DWORD *)(dword_487AC4 + 20) = 0;
            goto LABEL_161;
          }
          if ( v18 != 64 )
            goto LABEL_16;
          v20 = (int *)dword_487AC4;
          v164 = *(_DWORD *)(dword_487AC4 + 16);
          if ( (v164 & 0xFFFFFFF7) != 6 )
          {
            if ( v164 == 7 )
            {
              *(_DWORD *)(*(_DWORD *)(dword_487AC4 + 12) + 4) = *(_DWORD *)(a1 + 4) + *(_DWORD *)(dword_487AC4 + 28);
              goto LABEL_161;
            }
            if ( v164 && v164 != 11 )
            {
LABEL_16:
              if ( dword_47AC88 > 0 )
                sub_F43B4(&off_46D334, "stEnd with storage class %d not handled", v13);
              goto LABEL_18;
            }
            goto LABEL_161;
          }
          v10 = *(char **)(dword_487AC4 + 12);
          v11 = *(_DWORD *)(dword_487AC4 + 20);
          v172 = *(int **)(*(_DWORD *)(*(_DWORD *)(dword_487AC4 + 8) + 4) + 32);
          *((_DWORD *)v10 + 1) += *(_DWORD *)(a1 + 4);
          v173 = sub_1A74F4("__GDB_EFI_INFO__");
          *(_BYTE *)(v173 + 32) = 12;
          v174 = (_DWORD *)sub_1780C4(dword_487ABC);
          v175 = dword_487ABC;
          v176 = *(_DWORD *)(dword_487ABC + 64);
          v177 = *(_DWORD *)(dword_487ABC + 60);
          *(_DWORD *)(v173 + 24) = *v174;
          v178 = v176 - v177;
          if ( (unsigned int)(v176 - v177) <= 0x3B )
          {
            obstack_newchunk((struct obstack *)(v175 + 48), 60);
            v177 = *(_DWORD *)(v175 + 60);
            v176 = *(_DWORD *)(v175 + 64);
          }
          v179 = *(_WORD **)(v175 + 56);
          v180 = (_WORD *)(v177 + 60);
          v181 = *(_DWORD *)(v175 + 72);
          *(_DWORD *)(v175 + 60) = v180;
          v182 = v180 == v179;
          if ( v180 == v179 )
            v178 = *(_BYTE *)(v175 + 88);
          v183 = ((unsigned int)v180 + v181) & ~v181;
          *(_DWORD *)(v175 + 60) = v183;
          if ( v182 )
            *(_BYTE *)(v175 + 88) = v178 | 2;
          if ( v183 - *(_DWORD *)(v175 + 52) > (unsigned int)(v176 - *(_DWORD *)(v175 + 52)) )
          {
            v183 = v176;
            *(_DWORD *)(v175 + 60) = v176;
          }
          *(_DWORD *)(v175 + 56) = v183;
          memset(v179, 0, 0x3Cu);
          v184 = (_DWORD *)dword_487AC4;
          *(_DWORD *)(v173 + 8) = v179;
          v185 = v184[8];
          v186 = v184[3];
          v179[20] = -1;
          *(_DWORD *)v179 = v185;
          ((void (__fastcall *)(int, _DWORD))loc_2209F8)(v173, v184[2]);
          sub_10B4AC(*(_DWORD *)(v186 + 16));
          v187 = *v172;
          v20 = (int *)dword_487AC4;
          if ( *v172 > 0 )
          {
            v188 = v172 + 1;
            v189 = 0;
            do
            {
              v191 = v188[1];
              ++v188;
              v190 = (_DWORD *)v191;
              if ( v10 == *(char **)(v191 + 12) && *v190 == v20[7] && *v190 == v190[1] )
              {
                v192 = *((_DWORD *)v10 + 1);
                *v190 = *(_DWORD *)v10;
                v190[1] = v192;
              }
              ++v189;
            }
            while ( v189 != v187 );
          }
          v193 = *(_DWORD *)(v11 + 24);
          if ( *(__int16 *)(v193 + 4) > 0 )
            goto LABEL_19;
          v6 = v20[8];
          if ( v6 <= 0 )
            goto LABEL_161;
          v194 = *(_BYTE *)(v193 + 2);
          *(_WORD *)(v193 + 4) = v6;
          v9 = 24 * v6;
          if ( (v194 & 0x10) != 0 )
          {
            v195 = *(_DWORD *)(v193 + 16);
            v196 = *(_DWORD *)(v195 + 64);
            v197 = *(_DWORD *)(v195 + 60);
            if ( v196 - v197 < (unsigned int)v9 )
            {
              obstack_newchunk((struct obstack *)(v195 + 48), 24 * v6);
              v196 = *(_DWORD *)(v195 + 64);
              v197 = *(_DWORD *)(v195 + 60);
            }
            v198 = *(void **)(v195 + 56);
            v199 = (void *)(v197 + v9);
            *(_DWORD *)(v195 + 60) = v199;
            if ( v199 == v198 )
              *(_BYTE *)(v195 + 88) |= 2u;
            v200 = *(_DWORD *)(v195 + 52);
            v201 = ((unsigned int)v199 + *(_DWORD *)(v195 + 72)) & ~*(_DWORD *)(v195 + 72);
            *(_DWORD *)(v195 + 60) = v201;
            if ( v201 - v200 > (unsigned int)(v196 - v200) )
              *(_DWORD *)(v195 + 60) = v196;
            *(_DWORD *)(v195 + 56) = *(_DWORD *)(v195 + 60);
            goto LABEL_230;
          }
          goto LABEL_241;
        case 9:
          v94 = dword_487AD4;
          v95 = *(_DWORD *)(dword_487AC4 + 24);
          v96 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(dword_487AC4 + 20) + 24) + 24);
          *(_DWORD *)(dword_487AC4 + 24) = v95 + 1;
          v97 = *(_DWORD *)(a1 + 8);
          v98 = v96 + 24 * v95;
          LOBYTE(v95) = *(_BYTE *)(v98 + 8);
          *(_DWORD *)(v98 + 16) = s2;
          *(_BYTE *)(v98 + 8) = v95 & 0xF1;
          *(_DWORD *)v98 = *(_DWORD *)(a1 + 4);
          src = 1;
          *(_DWORD *)(v98 + 4) = 0;
          v223 = 0;
          v99 = sub_1AAC98(v94, a2, v97 >> 12, &v223, a4, s2);
          v100 = v223;
          v101 = *(_DWORD *)(v98 + 8);
          *(_DWORD *)(v98 + 12) = v99;
          *(_DWORD *)(v98 + 8) = v101 & 0xF | (16 * v100);
          return src;
        case 0xA:
          dword_487ACC = 1;
          if ( !(_DWORD)v12 )
            return 1;
          v55 = dword_487AB4;
          v56 = *(_DWORD **)(dword_487AB8 - 477218588 * ((dword_487AB4 - *(_DWORD *)(dword_487AA4 + 152)) >> 3));
          if ( !v56 )
            goto LABEL_91;
          if ( a3 == v56[1] )
            goto LABEL_189;
          do
          {
            v56 = (_DWORD *)*v56;
            if ( !v56 )
            {
LABEL_91:
              v57 = sub_1AAC98(dword_487AD4, a2, *(_DWORD *)(a1 + 8) >> 12, 0, a4, s2);
              sub_1A7318(dword_487AB4, a3, v57);
              v55 = dword_487AB4;
              goto LABEL_92;
            }
          }
          while ( a3 != v56[1] );
LABEL_189:
          v57 = v56[2];
LABEL_92:
          if ( sub_1A7410(v55, a1) )
            return 1;
          v58 = sub_1A74F4(s2);
          v59 = dword_487AC4;
          v60 = (_DWORD *)v58;
          *(_BYTE *)(v58 + 32) = 65;
          v61 = *(_DWORD *)(v59 + 12);
          *(_DWORD *)(v58 + 24) = v57;
          *(_DWORD *)(v58 + 8) = v61;
          ((void (*)(void))loc_2209F8)();
          sub_10B4AC(*(_DWORD *)(v61 + 16));
          v62 = *(char **)(v60[6] + 24);
          if ( *((_DWORD *)v62 + 2) )
            return 1;
          v63 = *v62;
          if ( !*((_WORD *)v62 + 2) && (unsigned __int8)(v63 - 3) <= 1u )
            return 1;
          v64 = v63 == 1;
          if ( v63 != 1 )
            v64 = v63 == 7;
          if ( v64 )
            return 1;
          src = 1;
          *((_DWORD *)v62 + 2) = *v60;
          return src;
        case 0xB:
          sub_1A7554();
          src = 1;
          *(_DWORD *)(dword_487AC4 + 16) = *(_BYTE *)(a1 + 8) & 0x3F;
          return src;
        case 0x1A:
          srca = 3;
          goto LABEL_26;
        case 0x1B:
          v22 = 4;
LABEL_25:
          srca = v22;
          goto LABEL_26;
        case 0x1C:
          srca = 5;
LABEL_26:
          dword_487ACC = 1;
          v23 = 0;
          v24 = 0;
          v25 = &v10[a3];
          sub_1A7554();
          v221 = a1;
          *(_DWORD *)(dword_487AC4 + 16) = 7;
          while ( 2 )
          {
            ((void (__fastcall *)(int, char *, int *))v11)(dword_487AAC, v25, &v223);
            switch ( v225 & 0x3F )
            {
              case 7u:
              case 0x1Au:
              case 0x1Bu:
              case 0x1Cu:
                if ( (v225 & 0xFFFFF000) == 0 )
                  goto LABEL_40;
                v25 = &v10[*(_DWORD *)(dword_487AA4 + 108)
                         + (_DWORD)v10 * (*(_DWORD *)(dword_487AB4 + 16) + (v225 >> 12) - 1)];
                continue;
              case 8u:
                v28 = dword_487AA4;
                v29 = dword_487AB4;
                if ( v223 )
                {
                  v215 = dword_487AB4;
                  v213 = dword_487AA4;
                  v30 = strcmp(
                          (const char *)(*(_DWORD *)(dword_487AA4 + 120) + v223 + *(_DWORD *)(dword_487AB4 + 8)),
                          s2);
                  v28 = v213;
                  v29 = v215;
                  if ( v30 )
                    goto LABEL_40;
                }
                if ( srca )
                {
                  v31 = srca;
                }
                else
                {
                  v32 = v24 > 1;
                  if ( v23 )
                    v32 = 0;
                  if ( v32 )
                    v33 = 4;
                  else
                    v33 = 3;
                  v31 = v33;
                  srca = v33;
                }
                v34 = *(_DWORD **)(dword_487AB8 - 477218588 * ((v29 - *(_DWORD *)(v28 + 152)) >> 3));
                if ( !v34 )
                  goto LABEL_56;
                if ( a3 == v34[1] )
                  goto LABEL_135;
                break;
              case 9u:
                if ( srca | v24 )
                  goto LABEL_38;
                if ( (v225 & 0xFFFFF000) == 0xFFFFF000 || (v225 & 0xFFFFF000) == 0 && !*(_DWORD *)(a1 + 4) )
                  goto LABEL_37;
                (*(void (__fastcall **)(int, unsigned int, _BYTE *))(dword_487AA8 + 72))(
                  a4,
                  a2 + 4 * (v225 >> 12),
                  v222);
                v26 = v222[0] & 0xFC;
                v27 = v26 == 0;
                if ( (v222[0] & 0xFC) != 0 )
                  v27 = v26 == 104;
                if ( v27 || v26 == 56 && !*(_DWORD *)(a1 + 4) )
                {
                  if ( (v222[2] & 0xF) != 0 )
                    srca = 0;
                  else
LABEL_37:
                    srca = 5;
                }
                else
                {
                  srca = 0;
                }
LABEL_38:
                ++v24;
                if ( v23 < v224 )
                  v23 = v224;
LABEL_40:
                v25 = &v10[(_DWORD)v25];
                continue;
              case 0xAu:
              case 0x22u:
                goto LABEL_40;
              default:
                if ( dword_47AC88 <= 0 )
                  goto LABEL_40;
                v25 = &v10[(_DWORD)v25];
                sub_F43B4(&off_46D334, "declaration block contains unhandled symbol type %d");
                continue;
            }
            break;
          }
          break;
        default:
          if ( dword_47AC88 <= 0 )
            return 1;
          src = 1;
          sub_F43B4(&off_46D334, "unknown symbol type 0x%x", v16 & 0x3F);
          return src;
      }
      do
      {
        v34 = (_DWORD *)*v34;
        if ( !v34 )
        {
LABEL_56:
          v35 = ((int (__fastcall *)(int))loc_16FD44)(dword_487ABC);
          v36 = *(_DWORD *)(v35 + 24);
          v37 = v35;
          v214 = v35;
          LOWORD(v35) = *(_WORD *)(v36 + 2);
          *(_DWORD *)(v36 + 28) = &word_3B4A2C;
          *(_DWORD *)(v36 + 8) = 0;
          *(_WORD *)(v36 + 2) = v35 & 0xFC7F | 0x80;
          sub_1A7318(dword_487AB4, a3, v37);
          goto LABEL_57;
        }
      }
      while ( a3 != v34[1] );
LABEL_135:
      v214 = v34[2];
LABEL_57:
      v38 = *(_DWORD *)(v214 + 24);
      if ( !*(_DWORD *)a1 )
        goto LABEL_62;
      v39 = (unsigned __int8)*s2;
      v40 = v39 == 0;
      if ( *s2 )
        v40 = v39 == 46;
      if ( v40 )
      {
LABEL_62:
        *(_DWORD *)(v38 + 12) = 0;
      }
      else
      {
        *(_DWORD *)(v38 + 12) = sub_16351C(dword_487ABC + 48, s2, 0);
        v38 = *(_DWORD *)(v214 + 24);
      }
      v41 = *(_BYTE *)(v38 + 2);
      v42 = *(_DWORD *)(a1 + 4);
      *(_BYTE *)v38 = v31;
      v43 = 24 * v24;
      *(_DWORD *)(v214 + 20) = v42;
      *(_WORD *)(v38 + 4) = v24;
      if ( (v41 & 0x10) != 0 )
      {
        v44 = *(_DWORD *)(v38 + 16);
        v45 = *(_DWORD *)(v44 + 64);
        v46 = *(_DWORD *)(v44 + 60);
        if ( v45 - v46 < v43 )
        {
          obstack_newchunk((struct obstack *)(v44 + 48), 24 * v24);
          v46 = *(_DWORD *)(v44 + 60);
          v45 = *(_DWORD *)(v44 + 64);
        }
        v47 = *(char **)(v44 + 56);
        v48 = (char *)(v46 + v43);
        v49 = *(_DWORD *)(v44 + 72);
        v50 = *(_DWORD *)(v44 + 52);
        v51 = v48 == v47;
        *(_DWORD *)(v44 + 60) = v48;
        if ( v48 == v47 )
          LOBYTE(v46) = *(_BYTE *)(v44 + 88);
        v52 = (unsigned int)&v48[v49];
        if ( v51 )
          *(_BYTE *)(v44 + 88) = v46 | 2;
        v53 = v52 & ~v49;
        *(_DWORD *)(v44 + 60) = v53;
        if ( v53 - v50 > (unsigned int)(v45 - v50) )
        {
          v53 = v45;
          *(_DWORD *)(v44 + 60) = v45;
        }
        *(_DWORD *)(v44 + 56) = v53;
      }
      else
      {
        v47 = (char *)sub_93028(24 * v24);
      }
      v54 = *(_DWORD *)(v214 + 24);
      *(_DWORD *)(v54 + 24) = v47;
      if ( srca == 5 )
      {
        v107 = *(__int16 *)(v54 + 4);
        v108 = *(_DWORD *)(v214 + 20);
        v109 = v108 == 0;
        if ( v108 )
          v109 = v107 == v108;
        if ( v109 )
          *(_DWORD *)(v214 + 20) = ((int (__fastcall *)(int))loc_165E68)(v220) / 8;
        v216 = (void (__fastcall *)(int, char *, int *))v11;
        v110 = 1;
        v111 = &v10[a3];
        v216(dword_487AAC, &v10[a3], &v223);
        while ( (v225 & 0x3F) == 9 )
        {
          v123 = dword_487AB4;
          v124 = dword_487AA4;
          v125 = dword_487ABC;
          v47[8] = v47[8] & 0xF1 | 2;
          v126 = v224;
          v127 = *(_DWORD *)(v124 + 120) + *(_DWORD *)(v123 + 8) + v223;
          v128 = *((_DWORD *)v47 + 2) & 0xF;
          *((_DWORD *)v47 + 1) = 0;
          *((_DWORD *)v47 + 4) = v127;
          *(_DWORD *)v47 = v126;
          *((_DWORD *)v47 + 2) = v128;
          *((_DWORD *)v47 + 3) = v214;
          v129 = sub_220854(v125);
          v130 = dword_487ABC;
          v131 = strlen(*((const char **)v47 + 4));
          v132 = *(void **)(dword_487ABC + 60);
          v133 = (const void *)*((_DWORD *)v47 + 4);
          if ( v131 + 1 > *(_DWORD *)(dword_487ABC + 64) - (int)v132 )
          {
            obstack_newchunk((struct obstack *)(dword_487ABC + 48), v131 + 1);
            v132 = *(void **)(v130 + 60);
            v133 = (const void *)*((_DWORD *)v47 + 4);
          }
          ++v110;
          memcpy(v132, v133, v131);
          v112 = *(_DWORD *)(v130 + 60);
          v47 += 24;
          v113 = v112 + v131 + 1;
          *(_DWORD *)(v130 + 60) = v113;
          *(_BYTE *)(v112 + v131) = 0;
          v114 = *(_DWORD *)(v130 + 60);
          v115 = *(_DWORD *)(v130 + 56);
          v116 = *(_DWORD *)(v130 + 64);
          v117 = v114 == v115;
          if ( v114 == v115 )
            LOBYTE(v113) = *(_BYTE *)(v130 + 88);
          v118 = (v114 + *(_DWORD *)(v130 + 72)) & ~*(_DWORD *)(v130 + 72);
          *(_DWORD *)(v130 + 60) = v118;
          if ( v117 )
            *(_BYTE *)(v130 + 88) = v113 | 2;
          v119 = v224;
          if ( v118 - *(_DWORD *)(v130 + 52) > (unsigned int)(v116 - *(_DWORD *)(v130 + 52)) )
          {
            v118 = v116;
            *(_DWORD *)(v130 + 60) = v116;
          }
          *(_DWORD *)(v130 + 56) = v118;
          v120 = dword_487AC4;
          *(_DWORD *)v129 = v115;
          v121 = *(_DWORD *)(v120 + 12);
          v111 = &v10[(_DWORD)v111];
          *(_BYTE *)(v129 + 32) = 9;
          v122 = *(_DWORD *)(v120 + 8);
          *(_DWORD *)(v129 + 24) = v214;
          *(_DWORD *)(v129 + 8) = v119;
          *(_DWORD *)(v129 + 12) = 0;
          ((void (__fastcall *)(int, int))loc_2209F8)(v129, v122);
          sub_10B4AC(*(_DWORD *)(v121 + 16));
          v216(dword_487AAC, v111, &v223);
        }
        src = v110;
        a1 = v221;
        v54 = *(_DWORD *)(v214 + 24);
        *(_BYTE *)(v54 + 1) |= 1u;
      }
      else
      {
        src = 1;
      }
      v19 = *(_DWORD *)a1 == 0;
      *(_QWORD *)(dword_487AC4 + 20) = (unsigned int)v214;
      if ( !v19 )
      {
        if ( *(_WORD *)(v54 + 4) )
        {
          v160 = sub_1A74F4(s2);
          v161 = dword_487AC4;
          *(_BYTE *)(v160 + 32) = 66;
          v162 = *(_DWORD *)(v161 + 12);
          *(_DWORD *)(v160 + 24) = v214;
          *(_QWORD *)(v160 + 8) = 0;
          ((void (*)(void))loc_2209F8)();
          sub_10B4AC(*(_DWORD *)(v162 + 16));
        }
        else
        {
          *(_BYTE *)(v54 + 1) |= 4u;
        }
      }
      return src;
    default:
      v16 = *(_BYTE *)(a1 + 8);
      goto LABEL_6;
  }
}
