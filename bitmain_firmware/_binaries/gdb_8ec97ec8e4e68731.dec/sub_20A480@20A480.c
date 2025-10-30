int *__fastcall sub_20A480(unsigned int a1, char *a2, char *a3, int *a4, int a5)
{
  int v7; // r7
  int v8; // r0
  int v9; // r8
  char *v10; // r0
  char *v11; // r4
  _BOOL4 v12; // r5
  char *v13; // r0
  int v14; // r0
  int *v15; // r8
  int *v16; // r4
  char v17; // r3
  char *v18; // r2
  int v19; // r3
  bool v20; // zf
  unsigned int v21; // r3
  int v22; // r6
  int v23; // r0
  int v24; // r6
  unsigned int v25; // r3
  int v26; // r2
  char *v28; // r1
  int v29; // r0
  _BYTE *v30; // r3
  size_t v31; // r2
  char v32; // r12
  char v33; // r2
  int v34; // r0
  char *v35; // r3
  int *v36; // r3
  char v37; // r12
  _BYTE *v38; // r3
  char *v39; // r3
  int v40; // r2
  char *v41; // r1
  int v42; // r9
  int v43; // t1
  int v44; // r2
  unsigned int v45; // r9
  int v46; // r8
  int v47; // r1
  int v48; // r2
  void *v49; // r0
  void *v50; // r2
  int v51; // lr
  bool v52; // zf
  int v53; // r2
  int v54; // r12
  int v55; // r8
  __int16 v56; // r9
  int v57; // r2
  int v58; // r2
  char v59; // r1
  int v60; // r0
  int v61; // r0
  int v62; // r2
  int v63; // r0
  unsigned __int8 *v64; // r9
  int v65; // r3
  int v66; // r3
  int v67; // r1
  char v68; // r0
  int v69; // r12
  __int64 v70; // r0
  char v71; // r3
  unsigned int v72; // r5
  int v73; // r0
  _BYTE *v74; // r3
  int v75; // r0
  char v76; // r3
  int v77; // r0
  int v78; // r0
  int v79; // r6
  int v80; // r1
  char v81; // r3
  __int16 *v82; // r5
  int v83; // r0
  int v84; // r3
  int v85; // r2
  int v86; // r6
  int v87; // r0
  int v88; // r8
  int v89; // r3
  int v90; // r3
  char v91; // r7
  int v92; // r6
  int *v93; // r12
  int v94; // r0
  int v95; // r1
  int v96; // r2
  int v97; // r3
  int *v98; // lr
  _DWORD *v99; // r12
  int v100; // r0
  int v101; // r1
  int v102; // r2
  int v103; // r3
  _DWORD *v104; // lr
  int v105; // r1
  int v106; // r2
  int v107; // r3
  int v108; // r3
  unsigned int v109; // r2
  int v110; // r5
  int v111; // r0
  int v112; // r6
  int v113; // r1
  char v114; // r3
  __int16 *v115; // r5
  int v116; // r0
  int v117; // r3
  int v118; // r2
  char *v119; // r5
  int v120; // r8
  bool v121; // zf
  int v122; // r9
  int v123; // r2
  int v124; // r5
  int v125; // r2
  int v126; // r3
  unsigned int v127; // r8
  char v128; // r1
  int v129; // r6
  int v130; // r3
  int v131; // r0
  bool v132; // zf
  char *v133; // r8
  int v134; // r3
  void *v135; // r0
  size_t v136; // r7
  void **v137; // r2
  char v138; // r3
  int v139; // r3
  int v140; // r0
  char v141; // r3
  int v142; // r0
  char *v143; // r3
  char v144; // r3
  int v145; // r0
  char v146; // r3
  int v147; // r0
  int v148; // r0
  _DWORD *v149; // r0
  int v150; // r3
  int v151; // r8
  int *v152; // r6
  int v153; // r4
  int v154; // r5
  int v155; // r10
  int v156; // r0
  int v157; // r3
  int v158; // r3
  int v159; // r5
  unsigned int v160; // r6
  __int64 v161; // r2
  __int16 *v162; // r3
  unsigned int v163; // r5
  int v164; // r0
  _DWORD *v165; // r9
  int v166; // r0
  int v167; // r0
  int v168; // r2
  int v169; // r3
  char v170; // r1
  void *v171; // r8
  void *v172; // r3
  int v173; // r0
  bool v174; // zf
  int v175; // r3
  char *v176; // r3
  char v177; // r2
  void *v178; // r0
  char *v179; // r0
  _BYTE v180[4]; // [sp+8h] [bp-7Ch] BYREF
  unsigned int v181; // [sp+Ch] [bp-78h] BYREF
  void **v182; // [sp+10h] [bp-74h]
  struct obstack *v183; // [sp+14h] [bp-70h]
  size_t n; // [sp+18h] [bp-6Ch]
  int *v185; // [sp+1Ch] [bp-68h]
  unsigned int v186; // [sp+20h] [bp-64h]
  int v187; // [sp+24h] [bp-60h]
  char *s; // [sp+2Ch] [bp-58h] BYREF
  void *ptr; // [sp+30h] [bp-54h] BYREF
  size_t v190[5]; // [sp+34h] [bp-50h] BYREF
  void *v191; // [sp+48h] [bp-3Ch] BYREF
  _QWORD v192[2]; // [sp+4Ch] [bp-38h] BYREF

  v7 = a5;
  v186 = a1;
  v185 = a4;
  v8 = sub_1B7250(a5);
  v9 = (unsigned __int8)*a2;
  v187 = v8;
  if ( ((v9 - 43) & 0xFD) != 0 )
  {
    v11 = strchr(a2, 58);
  }
  else
  {
    if ( a2[1] != 91 || (v10 = strchr(a2, 93)) == 0 )
      sub_946E0("invalid symbol name \"%s\"", a2);
    v11 = strchr(v10, 58);
  }
  v12 = v9 == 0;
  if ( !v11 )
    v12 = 1;
  s = v11;
  if ( v12 )
    return 0;
  v13 = v11;
  do
  {
    if ( v13[1] != 58 )
    {
      if ( a2 == v13 )
      {
        v12 = 1;
      }
      else if ( v9 == 32 )
      {
        v12 = a2[1] == 58;
      }
      v14 = sub_220854(a5);
      v15 = &dword_4788E0;
      v16 = (int *)v14;
      v183 = (struct obstack *)(a5 + 48);
      if ( !byte_47898D )
        a3 = 0;
      *(_WORD *)(v14 + 34) = (_WORD)a3;
      ((void (*)(void))loc_21AEC4)();
      if ( sub_10A844((unsigned __int8)*a2) )
      {
        switch ( a2[1] )
        {
          case 'X':
            if ( ((int (__fastcall *)(int))loc_16C4C0)(v187) )
              break;
            goto LABEL_21;
          case '_':
          case 'v':
            break;
          case 'e':
            *v16 = (int)"eh_throw";
            goto LABEL_29;
          case 't':
            *v16 = (int)"this";
            goto LABEL_29;
          default:
LABEL_21:
            if ( dword_47AC88 > 0 )
              sub_F43B4(&off_46D334, "Unknown C++ symbol name `%s'", a2);
            break;
        }
      }
      a3 = 0;
      LOBYTE(v190[1]) = 0;
      v17 = *((_BYTE *)v16 + 20);
      v190[0] = 0;
      n = s - a2;
      ptr = &v190[1];
      if ( (v17 & 0x1F) != 4 )
        goto LABEL_24;
      v182 = &v191;
      v181 = ((unsigned int)&v181 + 3) >> 3;
      v28 = (char *)memcpy(v180, a2, n);
      v29 = (int)v182;
      *(_BYTE *)(n + 8 * v181) = 0;
      sub_FFE48(v29, v28);
      a3 = (char *)v192 + 4;
      v30 = ptr;
      if ( v191 == (char *)v192 + 4 )
      {
        sub_33B48C(&ptr, v182);
        v30 = v191;
        goto LABEL_54;
      }
      if ( ptr == &v190[1] )
      {
        ptr = v191;
        *(_QWORD *)v190 = v192[0];
      }
      else
      {
        ptr = v191;
        v31 = v190[1];
        *(_QWORD *)v190 = v192[0];
        if ( v30 )
        {
          v191 = v30;
          HIDWORD(v192[0]) = v31;
LABEL_54:
          LODWORD(v192[0]) = 0;
          *v30 = 0;
          if ( v191 != (char *)v192 + 4 )
            sub_339E64(v191);
          if ( v190[0] )
          {
            sub_21AF48((int)v16, ptr, v190[0], 1, a5);
            goto LABEL_25;
          }
          n = s - a2;
LABEL_24:
          sub_21AF48((int)v16, a2, n, 1, a5);
LABEL_25:
          if ( (v16[5] & 0x1F) == 4 )
            sub_FD0B0((int)v16, a5);
          if ( ptr != &v190[1] )
            sub_339E64(ptr);
LABEL_29:
          v18 = s++;
          v19 = (unsigned __int8)*s;
          v20 = v19 == 45;
          if ( v19 != 45 )
            v20 = v19 == 40;
          v21 = v19 - 48;
          v22 = v20;
          if ( v21 <= 9 )
            v22 |= 1u;
          if ( v22 )
          {
LABEL_37:
            v16[6] = sub_2067B4((unsigned __int8 **)&s, (struct obstack *)a5);
            v23 = v186;
            v16[3] = 0;
            *((_BYTE *)v16 + 32) = 57;
            v16[2] = v23;
            sub_E5AA8(v16, (_DWORD **)&dword_4788E8);
            v24 = v16[6];
LABEL_38:
            if ( ((int (__fastcall *)(int, int))loc_169DA4)(v187, v24) && (*((_BYTE *)v16 + 33) & 2) != 0 )
            {
              v25 = *((unsigned __int8 *)v16 + 32);
              v26 = *((_DWORD *)off_46DBB8 + 4 * (v25 >> 3));
              if ( v26 == 3 )
              {
                *((_BYTE *)v16 + 32) = v25 & 7 | 0x30;
              }
              else if ( v26 == 4 )
              {
                *((_BYTE *)v16 + 32) = v25 & 7 | 0x28;
              }
            }
            return v16;
          }
          s = v18 + 2;
          switch ( v18[1] )
          {
            case 'C':
              v61 = sub_2067B4((unsigned __int8 **)&s, (struct obstack *)a5);
              v62 = v186;
              v16[6] = v61;
              v16[2] = v62;
              *((_BYTE *)v16 + 32) = 73;
              sub_E5AA8(v16, (_DWORD **)&dword_4788E8);
              v24 = v16[6];
              goto LABEL_38;
            case 'F':
              v16[6] = sub_2067B4((unsigned __int8 **)&s, (struct obstack *)a5);
              *((_BYTE *)v16 + 32) = 81;
              sub_E5AA8(v16, (_DWORD **)&dword_4788F4);
              goto LABEL_70;
            case 'G':
              v34 = sub_2067B4((unsigned __int8 **)&s, (struct obstack *)a5);
              v35 = (char *)*v16;
              v16[6] = v34;
              *((_BYTE *)v16 + 32) = 17;
              if ( v35 && *v35 != 35 )
              {
                v36 = &dword_489414[sub_E645C(v35)];
                v16[2] = v36[16];
                v36[16] = (int)v16;
              }
              sub_E5AA8(v16, (_DWORD **)&dword_4788F4);
              v24 = v16[6];
              goto LABEL_38;
            case 'P':
              goto LABEL_62;
            case 'R':
              goto LABEL_63;
            case 'S':
              v111 = sub_2067B4((unsigned __int8 **)&s, (struct obstack *)a5);
              v112 = v187;
              v113 = v186;
              v114 = v16[8] & 7 | 0x10;
              v16[6] = v111;
              *((_BYTE *)v16 + 32) = v114;
              v16[2] = v113;
              if ( ((int (__fastcall *)(int))loc_16C4C0)(v112) )
              {
                if ( *v16 != ((int (__fastcall *)(int, int))loc_16C50C)(v112, *v16) )
                {
                  sub_1B141C((int *)&v191, (char *)*v16, 0, (_DWORD *)a5);
                  v115 = (__int16 *)v191;
                  if ( v191 )
                  {
                    v116 = ((int (__fastcall *)(int, int))loc_16C50C)(v112, *v16);
                    v117 = v115[11];
                    v118 = *((_DWORD *)v115 + 2);
                    *v16 = v116;
                    if ( v117 == -1 )
                    {
                      sub_94700((int)"stabsread.c", 1200, "Section index is uninitialized");
                      v178 = v191;
                      if ( v191 != a3 )
                        sub_339E64(v191);
                      sub_338FFC(v178);
                    }
                    v16[2] = *(_DWORD *)(*(_DWORD *)(LODWORD(v192[0]) + 144) + 4 * v117) + v118;
                  }
                }
              }
              *((_BYTE *)v16 + 32) = v16[8] & 0xF8 | 1;
              sub_E5AA8(v16, (_DWORD **)&dword_4788F0);
              v24 = v16[6];
              goto LABEL_38;
            case 'T':
              v86 = (unsigned __int8)v18[2];
              if ( v86 == 116 )
                s = v18 + 3;
              v87 = sub_2067B4((unsigned __int8 **)&s, (struct obstack *)a5);
              v16[6] = v87;
              if ( v12 )
                return 0;
              v88 = *(_DWORD *)(v87 + 24);
              v89 = v186;
              v16[3] = 0;
              v16[2] = v89;
              v90 = *(_DWORD *)(v88 + 12);
              *((_BYTE *)v16 + 32) = 66;
              if ( !v90 )
                *(_DWORD *)(v88 + 12) = sub_16351C((int)v183, *v16, 0);
              sub_E5AA8(v16, (_DWORD **)&dword_4788F0);
              if ( v86 != 116 )
                goto LABEL_103;
              v91 = 65;
              v92 = sub_220854(a5);
              v93 = (int *)v92;
              v94 = *v16;
              v95 = v16[1];
              v96 = v16[2];
              v97 = v16[3];
              v98 = v16 + 4;
              goto LABEL_134;
            case 'V':
              v78 = sub_2067B4((unsigned __int8 **)&s, (struct obstack *)a5);
              v79 = v187;
              v80 = v186;
              v81 = v16[8] & 7 | 0x10;
              v16[6] = v78;
              *((_BYTE *)v16 + 32) = v81;
              v16[2] = v80;
              if ( !((int (__fastcall *)(int))loc_16C4C0)(v79) )
                goto LABEL_126;
              if ( *v16 == ((int (__fastcall *)(int, int))loc_16C50C)(v79, *v16) )
                goto LABEL_126;
              sub_1B141C((int *)&v191, (char *)*v16, 0, (_DWORD *)a5);
              v82 = (__int16 *)v191;
              if ( !v191 )
                goto LABEL_126;
              v83 = ((int (__fastcall *)(int, int))loc_16C50C)(v79, *v16);
              v84 = v82[11];
              v85 = *((_DWORD *)v82 + 2);
              *v16 = v83;
              if ( v84 == -1 )
              {
                sub_94700((int)"stabsread.c", 1392, "Section index is uninitialized");
LABEL_234:
                s = v143 + 1;
                *((_QWORD *)v16 + 1) = strtol(v143 + 1, 0, 10);
                goto LABEL_178;
              }
              v16[2] = *(_DWORD *)(*(_DWORD *)(LODWORD(v192[0]) + 144) + 4 * v84) + v85;
LABEL_126:
              *((_BYTE *)v16 + 32) = v16[8] & 0xF8 | 1;
              sub_E5AA8(v16, (_DWORD **)&dword_4788E8);
              v24 = v16[6];
              goto LABEL_38;
            case 'X':
            case 'l':
            case 's':
              goto LABEL_37;
            case 'a':
              v16[6] = sub_2067B4((unsigned __int8 **)&s, (struct obstack *)a5);
              v32 = dword_489654;
              goto LABEL_64;
            case 'c':
              if ( v18[2] == 61 )
              {
                s = v18 + 4;
                switch ( v18[3] )
                {
                  case 'c':
                    v139 = *(_DWORD *)(sub_1780C4(a5) + 4);
                    goto LABEL_180;
                  case 'e':
                    *((_BYTE *)v16 + 32) = v16[8] & 7 | 8;
                    v142 = sub_2067B4((unsigned __int8 **)&s, (struct obstack *)a5);
                    v143 = s;
                    v16[6] = v142;
                    if ( *v143 == 44 )
                      goto LABEL_234;
                    v16[6] = sub_205CA0(&s, a5);
                    goto LABEL_178;
                  case 'i':
                    v139 = *(_DWORD *)(sub_1780C4(a5) + 16);
LABEL_180:
                    v16[6] = v139;
                    v140 = strtol(s, 0, 10);
                    v141 = v16[8] & 7 | 8;
                    *((_QWORD *)v16 + 1) = v140;
                    *((_BYTE *)v16 + 32) = v141;
                    goto LABEL_178;
                  case 'r':
                    v124 = *(_DWORD *)(sub_1780C4(a5) + 52);
                    v125 = *(_DWORD *)(a5 + 64);
                    v126 = *(_DWORD *)(a5 + 60);
                    v127 = *(_DWORD *)(v124 + 20);
                    v128 = v125 - v126;
                    if ( v127 > v125 - v126 )
                    {
                      obstack_newchunk(v183, *(_DWORD *)(v124 + 20));
                      v125 = *(_DWORD *)(a5 + 64);
                      v126 = *(_DWORD *)(a5 + 60);
                    }
                    v129 = *(_DWORD *)(a5 + 56);
                    v130 = v126 + v127;
                    v131 = *(_DWORD *)(a5 + 72);
                    *(_DWORD *)(a5 + 60) = v130;
                    v132 = v130 == v129;
                    v133 = s;
                    if ( v130 == v129 )
                      v128 = *(_BYTE *)(a5 + 88);
                    v134 = (v130 + v131) & ~v131;
                    v191 = (char *)v192 + 4;
                    *(_DWORD *)(a5 + 60) = v134;
                    if ( v132 )
                      *(_BYTE *)(a5 + 88) = v128 | 2;
                    if ( v134 - *(_DWORD *)(a5 + 52) > (unsigned int)(v125 - *(_DWORD *)(a5 + 52)) )
                      *(_DWORD *)(a5 + 60) = v125;
                    *(_DWORD *)(a5 + 56) = *(_DWORD *)(a5 + 60);
                    v182 = &v191;
                    if ( !v133 )
                      sub_33D0B8("basic_string::_M_construct null not valid");
                    v135 = (void *)strlen(v133);
                    v136 = (size_t)v135;
                    ptr = v135;
                    if ( (unsigned int)v135 > 0xF )
                    {
                      v179 = (char *)sub_33B2BC(v182, &ptr, 0);
                      v191 = v179;
                      HIDWORD(v192[0]) = ptr;
                    }
                    else
                    {
                      if ( v135 == (void *)1 )
                      {
                        BYTE4(v192[0]) = *v133;
                        goto LABEL_175;
                      }
                      if ( !v135 )
                      {
LABEL_175:
                        v137 = v182;
                        LODWORD(v192[0]) = ptr;
                        *((_BYTE *)ptr + (_DWORD)v191) = 0;
                        sub_25286C(v129, v124, v137);
                        if ( v191 != (char *)v192 + 4 )
                          sub_339E64(v191);
                        v138 = *((_BYTE *)v16 + 32);
                        v16[6] = v124;
                        v16[2] = v129;
                        *((_BYTE *)v16 + 32) = v138 & 7 | 0x58;
LABEL_178:
                        *((_BYTE *)v16 + 32) = v16[8] & 0xF8 | 1;
                        sub_E5AA8(v16, (_DWORD **)&dword_4788F0);
                        return v16;
                      }
                      v179 = (char *)v192 + 4;
                    }
                    memcpy(v179, v133, v136);
                    goto LABEL_175;
                  case 's':
                    v119 = v18 + 5;
                    v120 = (unsigned __int8)v18[4];
                    s = v18 + 5;
                    strlen(v18 + 5);
                    v121 = v120 == 39;
                    if ( v120 != 39 )
                      v121 = v120 == 34;
                    v122 = !v121;
                    if ( !v121 )
                      break;
                    while ( 2 )
                    {
                      v123 = (unsigned __int8)*v119;
                      if ( *v119 )
                      {
                        if ( v123 != v120 )
                        {
                          if ( v123 == 92 && (unsigned __int8)v119[1] == v120 )
                          {
                            v119 += 2;
                            v180[v122] = v120;
                            s = v119;
                          }
                          else
                          {
                            ++v119;
                            v180[v122] = v123;
                            s = v119;
                          }
                          ++v122;
                          continue;
                        }
                      }
                      else if ( v120 )
                      {
                        goto LABEL_188;
                      }
                      break;
                    }
                    v180[v122] = 0;
                    v163 = v122 + 1;
                    v164 = sub_1780C4(a5);
                    v165 = (_DWORD *)sub_171928(0, *(_DWORD **)(v164 + 12), 0, 0, v122, v122 >> 31);
                    v166 = sub_1780C4(a5);
                    v167 = sub_172124(0, *(_DWORD **)(v166 + 4), v165);
                    v168 = *(_DWORD *)(a5 + 64);
                    v169 = *(_DWORD *)(a5 + 60);
                    v16[6] = v167;
                    v170 = v168 - v169;
                    if ( v163 > v168 - v169 )
                    {
                      obstack_newchunk(v183, v163);
                      v168 = *(_DWORD *)(a5 + 64);
                      v169 = *(_DWORD *)(a5 + 60);
                    }
                    v171 = *(void **)(a5 + 56);
                    v172 = (void *)(v169 + v163);
                    v173 = *(_DWORD *)(a5 + 72);
                    *(_DWORD *)(a5 + 60) = v172;
                    v174 = v172 == v171;
                    if ( v172 == v171 )
                      v170 = *(_BYTE *)(a5 + 88);
                    v175 = ((unsigned int)v172 + v173) & ~v173;
                    *(_DWORD *)(a5 + 60) = v175;
                    if ( v174 )
                      *(_BYTE *)(a5 + 88) = v170 | 2;
                    if ( v175 - *(_DWORD *)(a5 + 52) > (unsigned int)(v168 - *(_DWORD *)(a5 + 52)) )
                      *(_DWORD *)(a5 + 60) = v168;
                    *(_DWORD *)(a5 + 56) = *(_DWORD *)(a5 + 60);
                    memcpy(v171, v180, v163);
                    v176 = s;
                    v177 = *((_BYTE *)v16 + 32);
                    v16[2] = (int)v171;
                    s = v176 + 1;
                    *((_BYTE *)v16 + 32) = v177 & 7 | 0x58;
                    goto LABEL_178;
                  default:
                    *((_BYTE *)v16 + 32) = v16[8] & 7 | 8;
                    v16[6] = sub_205CA0(&s, a5);
                    goto LABEL_178;
                }
              }
LABEL_188:
              *((_BYTE *)v16 + 32) = v16[8] & 7 | 8;
              v145 = sub_205CA0(&s, a5);
              v146 = *((_BYTE *)v16 + 32);
              v16[6] = v145;
              *((_BYTE *)v16 + 32) = v146 & 0xF8 | 1;
              sub_E5AA8(v16, (_DWORD **)&dword_4788F0);
              return v16;
            case 'f':
              v16[6] = sub_2067B4((unsigned __int8 **)&s, (struct obstack *)a5);
              *((_BYTE *)v16 + 32) = 81;
              sub_E5AA8(v16, (_DWORD **)&dword_4788F0);
LABEL_70:
              v24 = v16[6];
              v38 = *(_BYTE **)(v24 + 24);
              if ( *v38 != 7 )
              {
                v24 = sub_170358(v16[6]);
                v38 = *(_BYTE **)(v24 + 24);
                v16[6] = v24;
              }
              v38[1] |= 0x20u;
              goto LABEL_73;
            case 'p':
              if ( v18[2] == 70 )
              {
                s = v18 + 3;
                v148 = sub_2067B4((unsigned __int8 **)&s, (struct obstack *)a5);
                v149 = (_DWORD *)sub_170358(v148);
                v16[6] = (int)sub_1700C0(v149);
              }
              else
              {
                v16[6] = sub_2067B4((unsigned __int8 **)&s, (struct obstack *)a5);
              }
              v70 = v186;
              v71 = *((_BYTE *)v16 + 33);
              *((_BYTE *)v16 + 32) = 33;
              *((_QWORD *)v16 + 1) = v70;
              *((_BYTE *)v16 + 33) = v71 | 2;
              sub_E5AA8(v16, (_DWORD **)&dword_4788E8);
              if ( ((int (__fastcall *)(int))loc_165BB8)(v187)
                || byte_47898D
                || ((int (__fastcall *)(int))loc_1684D0)(v187) )
              {
                goto LABEL_103;
              }
              if ( ((int (__fastcall *)(int))loc_1684D0)(v187) )
              {
LABEL_62:
                if ( v185 == (int *)36 )
                {
                  v24 = sub_2067B4((unsigned __int8 **)&s, (struct obstack *)a5);
                  v16[6] = v24;
LABEL_73:
                  v39 = s;
                  v40 = (unsigned __int8)*s;
                  if ( v40 == 59 )
                  {
                    v41 = s;
                    v42 = 0;
                    do
                    {
                      v20 = v40 == 59;
                      v43 = (unsigned __int8)*++v41;
                      v40 = v43;
                      if ( v20 )
                        ++v42;
                    }
                    while ( v40 );
                    v44 = *(_DWORD *)(v24 + 24);
                    v45 = 24 * v42;
                    if ( (*(_BYTE *)(v44 + 2) & 0x10) != 0 )
                    {
                      v46 = *(_DWORD *)(v44 + 16);
                      v47 = *(_DWORD *)(v46 + 64);
                      v48 = *(_DWORD *)(v46 + 60);
                      if ( v47 - v48 < v45 )
                      {
                        obstack_newchunk((struct obstack *)(v46 + 48), v45);
                        v48 = *(_DWORD *)(v46 + 60);
                        v47 = *(_DWORD *)(v46 + 64);
                        v39 = s;
                      }
                      v49 = *(void **)(v46 + 56);
                      v50 = (void *)(v48 + v45);
                      v51 = *(_DWORD *)(v46 + 72);
                      *(_DWORD *)(v46 + 60) = v50;
                      v52 = v50 == v49;
                      if ( v50 == v49 )
                        v37 = *(_BYTE *)(v46 + 88);
                      v53 = ((unsigned int)v50 + v51) & ~v51;
                      *(_DWORD *)(v46 + 60) = v53;
                      if ( v52 )
                        *(_BYTE *)(v46 + 88) = v37 | 2;
                      if ( v53 - *(_DWORD *)(v46 + 52) > (unsigned int)(v47 - *(_DWORD *)(v46 + 52)) )
                      {
                        v53 = v47;
                        *(_DWORD *)(v46 + 60) = v47;
                      }
                      *(_DWORD *)(v46 + 56) = v53;
                    }
                    else
                    {
                      v49 = sub_93028(v45);
                      v39 = s;
                    }
                    v54 = *(_DWORD *)(v24 + 24);
                    s = v39 + 1;
                    *(_DWORD *)(v54 + 24) = v49;
                    if ( *v39 == 59 )
                    {
                      v55 = 0;
                      v56 = 0;
                      do
                      {
                        if ( v39[1] == 48 && !v39[2] )
                          break;
                        v60 = sub_2067B4((unsigned __int8 **)&s, (struct obstack *)a5);
                        if ( **(_BYTE **)(v60 + 24) == 10 )
                          v60 = *(_DWORD *)(sub_1780C4(a5) + 12);
                        v54 = *(_DWORD *)(v24 + 24);
                        ++v56;
                        v39 = s;
                        v57 = *(_DWORD *)(v54 + 24);
                        ++s;
                        v58 = v57 + v55;
                        v55 += 24;
                        v59 = *(_BYTE *)(v58 + 8);
                        *(_DWORD *)(v58 + 12) = v60;
                        *(_BYTE *)(v58 + 8) = v59 & 0xFE;
                      }
                      while ( *v39 == 59 );
                    }
                    else
                    {
                      v56 = 0;
                    }
                    v144 = *(_BYTE *)(v54 + 1);
                    *(_WORD *)(v54 + 4) = v56;
                    *(_BYTE *)(v54 + 1) = v144 | 0x20;
                    v24 = v16[6];
                  }
                }
                else
                {
LABEL_63:
                  v16[6] = sub_2067B4((unsigned __int8 **)&s, (struct obstack *)a5);
                  v32 = dword_489650;
LABEL_64:
                  v33 = *((_BYTE *)v16 + 33);
                  v16[2] = v186;
                  v16[3] = 0;
                  *((_BYTE *)v16 + 32) = (8 * (v32 & 0x1F)) | 1;
                  *((_BYTE *)v16 + 33) = v33 | 2;
                  sub_E5AA8(v16, (_DWORD **)&dword_4788E8);
                  v24 = v16[6];
                }
              }
              else
              {
                v72 = *(_DWORD *)(v16[6] + 20);
                v73 = ((int (__fastcall *)(int))loc_165E68)(v187);
                v24 = v16[6];
                if ( v72 < v73 / 8 )
                {
                  v74 = *(_BYTE **)(v24 + 24);
                  if ( *v74 == 8 )
                  {
                    if ( (v74[1] & 1) != 0 )
                      v24 = *(_DWORD *)(sub_1780C4(a5) + 36);
                    else
                      v24 = *(_DWORD *)(sub_1780C4(a5) + 12);
                    v16[6] = v24;
                  }
                }
              }
              goto LABEL_38;
            case 'r':
              v67 = sub_2067B4((unsigned __int8 **)&s, (struct obstack *)a5);
              v68 = dword_489650;
              v20 = dword_478980 == 0;
              v69 = v186;
              v16[6] = v67;
              v16[2] = v69;
              v16[3] = 0;
              *((_BYTE *)v16 + 32) = (8 * (v68 & 0x1F)) | 1;
              if ( v20 )
              {
                sub_E5AA8(v16, (_DWORD **)&dword_4788F0);
                v24 = v16[6];
              }
              else if ( dword_4788E8
                     && *(int *)(dword_4788E8 + 4) > 0
                     && ((int (__fastcall *)(int))loc_169DA4)(v187)
                     && (v159 = *(_DWORD *)(dword_4788E8 + 4 * (*(_DWORD *)(dword_4788E8 + 4) + 1)),
                         v160 = *(unsigned __int8 *)(v159 + 32),
                         (unsigned int)(*((_DWORD *)off_46DBB8 + 4 * (v160 >> 3)) - 4) <= 1)
                     && !strcmp(*(const char **)v159, (const char *)*v16) )
              {
                *(_BYTE *)(v159 + 32) = v160 & 7 | (8 * (dword_489650 & 0x1F));
                v24 = v16[6];
                v161 = *((_QWORD *)v16 + 1);
                v16 = (int *)v159;
                *(_DWORD *)(v159 + 24) = v24;
                *(_QWORD *)(v159 + 8) = v161;
              }
              else
              {
                sub_E5AA8(v16, (_DWORD **)&dword_4788E8);
                v24 = v16[6];
              }
              goto LABEL_38;
            case 't':
              if ( (v16[5] & 0x1F) == 0xE )
                v22 = *v18 != 84;
              v63 = sub_2067B4((unsigned __int8 **)&s, (struct obstack *)a5);
              v16[6] = v63;
              if ( v12 )
                return 0;
              v64 = *(unsigned __int8 **)(v63 + 24);
              v65 = v186;
              v16[3] = 0;
              v16[2] = v65;
              v66 = *((_DWORD *)v64 + 2);
              *((_BYTE *)v16 + 32) = 65;
              if ( v66 )
              {
                if ( (unsigned int)*v64 - 3 > 1 )
                  goto LABEL_102;
                if ( (*((_WORD *)v64 + 1) & 0x380) != 0x80 )
                  goto LABEL_102;
                v162 = (__int16 *)*((_DWORD *)v64 + 7);
                if ( !*v162 )
                  goto LABEL_102;
                v150 = *v162;
                if ( v150 - 1 < 0 )
                  goto LABEL_102;
                v185 = &dword_4788E0;
                v151 = v22;
                v152 = v16;
                v153 = v150 - 1;
                v154 = 24 * (v150 - 1);
                do
                {
                  v155 = *((_DWORD *)v64 + 6) + v154;
                  if ( !*(_DWORD *)(v155 + 16) )
                  {
                    v156 = sub_170CC4(*(_DWORD *)(v155 + 12));
                    v157 = v152[6];
                    *(_DWORD *)(v155 + 16) = v156;
                    v64 = *(unsigned __int8 **)(v157 + 24);
                  }
                  --v153;
                  v154 -= 24;
                }
                while ( v153 != -1 );
                v12 = 0;
                v16 = v152;
                v7 = a5;
                v22 = v151;
                v15 = v185;
                if ( *((_DWORD *)v64 + 2) )
                  goto LABEL_102;
              }
              v158 = (char)*v64;
              if ( v158 == 1 )
              {
                if ( !strcmp((const char *)*v16, "__vtbl_ptr_type") )
                  goto LABEL_202;
              }
              else if ( v158 != 7 )
              {
                goto LABEL_202;
              }
              if ( *(_DWORD *)(*v15 + 20) != 10 )
              {
LABEL_102:
                sub_E5AA8(v16, (_DWORD **)&dword_4788F0);
                if ( v22 )
                {
                  v147 = v7;
                  v91 = 66;
                  v92 = sub_220854(v147);
                  v93 = (int *)v92;
                  v94 = *v16;
                  v95 = v16[1];
                  v96 = v16[2];
                  v97 = v16[3];
                  v98 = v16 + 4;
LABEL_134:
                  *v93 = v94;
                  v93[1] = v95;
                  v93[2] = v96;
                  v93[3] = v97;
                  v99 = v93 + 4;
                  v100 = *v98;
                  v101 = v98[1];
                  v102 = v98[2];
                  v103 = v98[3];
                  v104 = v98 + 4;
                  *v99 = v100;
                  v99[1] = v101;
                  v99[2] = v102;
                  v99[3] = v103;
                  v99 += 4;
                  v105 = v104[1];
                  v106 = v104[2];
                  v107 = v104[3];
                  *v99 = *v104;
                  v99[1] = v105;
                  v99[2] = v106;
                  v99[3] = v107;
                  *(_BYTE *)(v92 + 32) = v91;
                  v108 = v16[6];
                  v109 = v186;
                  *(_DWORD *)(v92 + 12) = v12;
                  v110 = *(_DWORD *)(v108 + 24);
                  *(_DWORD *)(v92 + 8) = v109;
                  if ( !*(_DWORD *)(v110 + 8) )
                    *(_DWORD *)(v110 + 8) = sub_16351C((int)v183, *v16);
                  sub_E5AA8((_DWORD *)v92, (_DWORD **)&dword_4788F0);
                  v24 = v16[6];
                }
                else
                {
LABEL_103:
                  v24 = v16[6];
                }
                goto LABEL_38;
              }
LABEL_202:
              *((_DWORD *)v64 + 2) = *v16;
              goto LABEL_102;
            case 'v':
              v75 = sub_2067B4((unsigned __int8 **)&s, (struct obstack *)a5);
              v76 = *((_BYTE *)v16 + 33);
              v16[6] = v75;
              v77 = v186;
              v16[3] = 0;
              *((_BYTE *)v16 + 33) = v76 | 2;
              v16[2] = v77;
              *((_BYTE *)v16 + 32) = 41;
              sub_E5AA8(v16, (_DWORD **)&dword_4788E8);
              v24 = v16[6];
              goto LABEL_38;
            default:
              v16[6] = sub_205CA0(&s, a5);
              *((_QWORD *)v16 + 1) = 0;
              *((_BYTE *)v16 + 32) = 9;
              sub_E5AA8(v16, (_DWORD **)&dword_4788F0);
              goto LABEL_103;
          }
        }
      }
      v191 = (char *)v192 + 4;
      a3 = (char *)v192 + 4;
      v30 = (char *)v192 + 4;
      goto LABEL_54;
    }
    v13 = strchr(v13 + 2, 58);
    s = v13;
  }
  while ( v13 );
  if ( dword_47AC88 <= 0 )
    return 0;
  sub_F43B4(&off_46D334, "Bad stabs string '%s'", a2);
  return 0;
}
