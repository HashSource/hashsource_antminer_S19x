void __fastcall sub_105B24(int a1, int a2)
{
  unsigned int v2; // r7
  int v4; // r3
  int v5; // r3
  int v6; // r3
  char *v7; // r4
  __int64 v8; // r0
  int v9; // r3
  int v10; // r5
  int v11; // r7
  int v12; // r0
  unsigned __int8 v13; // r3
  int v14; // r0
  int v15; // r3
  char *v16; // r0
  int v17; // r0
  int v18; // r3
  int v19; // r0
  char *v20; // r0
  size_t v21; // r2
  char *v22; // r5
  int v23; // r3
  int v24; // r2
  int v25; // r1
  int v26; // r2
  int v27; // r3
  int v28; // r3
  int v29; // r3
  int v30; // r12
  const char *v31; // r0
  int v32; // r3
  char *v33; // r5
  unsigned int v34; // r7
  int v35; // r3
  int v36; // r6
  size_t v37; // r0
  char *v38; // r0
  unsigned int v39; // r5
  unsigned int v40; // r7
  unsigned int v41; // r6
  int v42; // r0
  int v43; // r1
  bool v44; // zf
  _DWORD *v45; // r3
  int v46; // t1
  int v47; // r2
  int v48; // r3
  int v49; // r2
  void *v50; // r1
  const char *v51; // r0
  const char *v52; // r0
  int v53; // r3
  int v54; // r2
  size_t v55; // r0
  size_t v56; // lr
  const char *v57; // r0
  int v58; // r6
  char *v59; // r0
  unsigned int v60; // r5
  const char *v61; // r5
  int v62; // r0
  int v63; // r1
  const char **v64; // r3
  const char *v65; // r6
  int v66; // r7
  char *v67; // r0
  int v68; // r1
  int v69; // r2
  int v70; // r3
  int v71; // r2
  void *v72; // r1
  int v73; // r0
  int v74; // r0
  int v75; // r6
  char *v76; // r4
  int v77; // r7
  const char *v78; // t1
  int v79; // r3
  int v80; // r12
  char *v81; // lr
  _DWORD *v82; // r3
  const char *v83; // r0
  int v84; // r5
  _BYTE *v85; // r0
  char *v86; // r2
  int v87; // r0
  char *v88; // r3
  int v89; // r12
  size_t v90; // r12
  unsigned int v91; // r1
  _BOOL4 v92; // r2
  int v93; // r0
  int v94; // r2
  int v95; // r1
  int v96; // r2
  int v97; // r3
  int v98; // r3
  int v99; // r1
  bool v100; // zf
  char v101; // r3
  int v102; // r3
  unsigned int v103; // r5
  int v104; // t1
  bool v105; // zf
  int v106; // r3
  unsigned __int8 *v107; // r5
  _BOOL4 v108; // r2
  int v109; // r1
  unsigned __int8 *v110; // r0
  int v111; // r3
  unsigned __int8 *v112; // r1
  int v113; // r3
  unsigned __int8 *i; // r2
  int v115; // t1
  bool v116; // zf
  int v117; // r1
  int v118; // t1
  char *v119; // r2
  _DWORD *v120; // r1
  void *p_ptr; // r3
  void *v122; // r0
  int v123; // r3
  int v124; // r2
  size_t v125; // r1
  __int64 v126; // r2
  int v127; // r1
  int v128; // r0
  bool v129; // zf
  int v130; // r3
  int v131; // r3
  int v132; // r6
  int v133; // r0
  char v134; // r1
  int v135; // r3
  int v136; // r0
  int *v137; // r2
  int *v138; // r3
  int v139; // r12
  bool v140; // zf
  int v141; // lr
  int v142; // r3
  int v143; // r12
  int v144; // r0
  _DWORD *v145; // r5
  int v146; // r3
  int v147; // r0
  int v148; // r3
  int v149; // r2
  int v150; // r0
  int v151; // r0
  int v152; // r0
  int v153; // r0
  _DWORD *v154; // r0
  char *v155; // r3
  char *v156; // r0
  size_t v157; // r2
  char *v158; // r5
  int v159; // r3
  void *v160; // r0
  int v161; // [sp+Ch] [bp-1C0h]
  int v162; // [sp+Ch] [bp-1C0h]
  int v163; // [sp+Ch] [bp-1C0h]
  _BYTE dest[128]; // [sp+18h] [bp-1B4h] BYREF
  char v165; // [sp+98h] [bp-134h] BYREF
  int v166; // [sp+118h] [bp-B4h]
  int (__fastcall **v167)(int); // [sp+11Ch] [bp-B0h]
  size_t n; // [sp+120h] [bp-ACh]
  int v169; // [sp+124h] [bp-A8h]
  void *v170; // [sp+128h] [bp-A4h]
  int v171; // [sp+12Ch] [bp-A0h]
  int v172; // [sp+130h] [bp-9Ch]
  unsigned int v173; // [sp+134h] [bp-98h]
  size_t v174; // [sp+138h] [bp-94h]
  int v175; // [sp+13Ch] [bp-90h]
  int v176; // [sp+140h] [bp-8Ch]
  int v177; // [sp+144h] [bp-88h]
  void *src; // [sp+148h] [bp-84h]
  int v179; // [sp+14Ch] [bp-80h]
  int v180; // [sp+150h] [bp-7Ch]
  int v181; // [sp+154h] [bp-78h]
  void *v182; // [sp+158h] [bp-74h]
  char *s1; // [sp+15Ch] [bp-70h]
  int v184; // [sp+160h] [bp-6Ch]
  int v185; // [sp+164h] [bp-68h]
  int v186; // [sp+16Ch] [bp-60h] BYREF
  unsigned __int8 v187; // [sp+170h] [bp-5Ch]
  char v188; // [sp+171h] [bp-5Bh]
  __int16 v189; // [sp+172h] [bp-5Ah]
  unsigned int v190; // [sp+174h] [bp-58h]
  void *v191[2]; // [sp+178h] [bp-54h] BYREF
  _DWORD v192[4]; // [sp+180h] [bp-4Ch] BYREF
  void *ptr; // [sp+190h] [bp-3Ch] BYREF
  size_t v194; // [sp+194h] [bp-38h]
  _BYTE v195[20]; // [sp+198h] [bp-34h] BYREF

  v177 = a1;
  v175 = sub_1B7250(a2);
  v4 = *(_DWORD *)sub_1B6B24(a2, dword_47B26C);
  v167 = (int (__fastcall **)(int))&off_478984;
  v166 = v4;
  v5 = *(_DWORD *)(sub_1B6B24(a2, dword_47B26C) + 4);
  dword_47B268 = 0;
  v169 = v5;
  dword_47B278 = 0;
  dword_47B264 = *(_DWORD *)(sub_1B6B24(a2, dword_47B26C) + 12);
  src = dest;
  v182 = &v165;
  dword_47B23C = 20;
  dword_47B238 = (int)sub_93028(0xF0u);
  dword_47B27C = dword_47B238;
  v170 = sub_9253C((int)sub_104BC8, a2);
  sub_E6538(0);
  v6 = *(_DWORD *)(a2 + 156);
  v7 = *(char **)(a2 + 36);
  dword_47B25C = 0;
  v171 = v6;
  dword_47B254 = 0;
  dword_47B274 = 0;
  dword_47B280 = -1;
  dword_47B260 = (int)v7;
  off_478984 = (_UNKNOWN *)sub_10508C;
  if ( v6 == -1 )
  {
    v171 = *(_DWORD *)(a2 + 160);
    if ( v171 == -1 )
    {
      v171 = *(_DWORD *)(a2 + 164);
      if ( v171 == -1 )
      {
        v8 = sub_94700((int)"dbxread.c", 1105, "sect_index_rodata not initialized");
LABEL_277:
        v131 = *(_DWORD *)(a2 + 152);
        if ( v131 != -1 )
        {
          v89 = v166 + *(_DWORD *)(*(_DWORD *)(a2 + 144) + 4 * v131);
          goto LABEL_140;
        }
LABEL_341:
        sub_94700((int)"dbxread.c", 1977, "sect_index_text not initialized");
LABEL_342:
        sub_946E0("string table offset backs up at %d", v2);
      }
    }
  }
  v172 = 30;
  v181 = 0;
  v184 = 0;
  v185 = 0;
  v173 = 0;
  v179 = 0;
  v176 = 30;
  v180 = 1;
  dword_478988 = 0;
  while ( 2 )
  {
    LODWORD(v8) = sub_1B6B24(a2, dword_47B26C);
    HIDWORD(v8) = dword_478988;
    if ( *(_DWORD *)(v8 + 8) <= (unsigned int)dword_478988 )
    {
      if ( !v185 )
      {
LABEL_143:
        sub_92620(v170);
        return;
      }
      v89 = dword_47B280;
      if ( dword_47B280 != -1 )
      {
LABEL_140:
        v90 = v169 + v89;
        if ( v90 < *(_DWORD *)(v185 + 20) )
          v90 = *(_DWORD *)(v185 + 20);
        sub_1056A4(a2, (_DWORD *)v185, (int)v182, (_DWORD *)v184, dword_47B258 * HIDWORD(v8), v90, src, v181, v180);
        goto LABEL_143;
      }
      goto LABEL_277;
    }
    sub_258BD4(v8);
    v9 = dword_47B25C;
    if ( dword_47B25C == dword_47B254 )
    {
      sub_104F0C(v7);
      v9 = dword_47B25C;
    }
    v10 = 12 * v9;
    dword_47B25C = v9 + 1;
    v11 = 12 * v9 + 4;
    if ( *((_BYTE *)&unk_47B2A4 + v11) == 68 )
    {
      v2 = dword_478988;
      dword_47B274 = 1;
      goto LABEL_30;
    }
    v12 = (*(int (__fastcall **)(char *))(*((_DWORD *)v7 + 1) + 76))((char *)&unk_47B2A4 + v10);
    v13 = *((_BYTE *)&unk_47B2A4 + v11);
    v188 = 0;
    v186 = v12;
    v187 = v13;
    v189 = (*(int (__fastcall **)(char *))(*((_DWORD *)v7 + 1) + 88))((char *)&unk_47B2A4 + v10 + 6);
    v14 = sub_2A78D4(v7);
    v15 = *((_DWORD *)v7 + 1);
    v44 = v14 == 0;
    v16 = (char *)&unk_47B2A4 + v10 + 8;
    if ( v44 )
      v17 = (*(int (__fastcall **)(char *))(v15 + 76))(v16);
    else
      v17 = (*(int (__fastcall **)(char *))(v15 + 80))(v16);
    v18 = *(_DWORD *)(a2 + 196);
    v190 = v17;
    v19 = v187;
    *(_DWORD *)(a2 + 196) = v18 + 1;
    switch ( v19 )
    {
      case 0:
        v2 = dword_478988;
        if ( !byte_47898C || v186 != 1 )
          goto LABEL_30;
        v73 = 0;
        dword_47B268 = dword_47B278;
        if ( __CFADD__(dword_47B278, v190) )
          v73 = v186;
        dword_47B278 += v190;
        if ( !v73 )
          goto LABEL_87;
        goto LABEL_342;
      case 1:
      case 2:
      case 10:
      case 11:
      case 20:
      case 21:
      case 22:
      case 23:
      case 24:
      case 25:
      case 26:
      case 27:
      case 28:
      case 34:
      case 42:
      case 46:
      case 50:
      case 56:
      case 60:
      case 64:
      case 68:
      case 70:
      case 72:
      case 74:
      case 78:
      case 80:
      case 84:
      case 96:
      case 108:
      case 160:
      case 162:
      case 164:
      case 192:
      case 208:
      case 224:
      case 226:
      case 228:
      case 232:
      case 242:
      case 244:
      case 254:
        goto LABEL_29;
      case 3:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
      case 29:
      case 241:
      case 243:
      case 245:
        goto LABEL_31;
      case 4:
      case 12:
      case 31:
      case 240:
        v51 = sub_105530(a2, &v186);
        if ( *v51 == 45 && v51[1] == 108 || (v52 = &v51[strlen(v51)], *(v52 - 1) == 111) && *(v52 - 2) == 46 )
        {
          v53 = *(_DWORD *)(a2 + 152);
          if ( v53 == -1 )
            goto LABEL_338;
          v54 = v179;
          if ( !v185 )
            v54 = 0;
          v55 = *(_DWORD *)(*(_DWORD *)(a2 + 144) + 4 * v53) + v190;
          v190 = v55;
          if ( v54 && v55 >= *(_DWORD *)(v185 + 16) )
          {
            v161 = v181;
            v181 = 0;
            v56 = *(_DWORD *)(v185 + 20);
            v179 = 1;
            if ( v55 < v56 )
              v55 = v56;
            sub_1056A4(a2, (_DWORD *)v185, (int)v182, (_DWORD *)v184, dword_47B258 * dword_478988, v55, src, v161, v180);
            v184 = 0;
            dword_47B274 = 0;
            v185 = 0;
            v2 = dword_478988;
          }
          else
          {
LABEL_118:
            v2 = dword_478988;
LABEL_87:
            v179 = 1;
          }
LABEL_30:
          dword_478988 = ++v2;
          continue;
        }
LABEL_31:
        v31 = sub_105530(a2, &v186);
        v32 = v187;
        v33 = (char *)v31;
        v34 = v190;
        if ( v187 == 8 )
        {
          v35 = *(_DWORD *)(a2 + 160);
          v36 = 10;
          goto LABEL_39;
        }
        if ( v187 > 8u )
        {
          if ( v187 == 28 )
          {
            v35 = *(_DWORD *)(a2 + 156);
            if ( v35 == -1 )
              goto LABEL_344;
            v36 = 9;
            goto LABEL_39;
          }
          if ( v187 <= 0x1Cu )
          {
            if ( v187 == 9 )
            {
              v35 = *(_DWORD *)(a2 + 160);
              v36 = 5;
              goto LABEL_39;
            }
          }
          else
          {
            if ( v187 == 31 || v187 == 240 )
              goto LABEL_150;
            if ( v187 != 29 )
              goto LABEL_129;
            v35 = *(_DWORD *)(a2 + 156);
            if ( v35 != -1 )
              goto LABEL_38;
            sub_94700((int)"dbxread.c", 455, "sect_index_data not initialized");
          }
          if ( v32 != 12 )
            goto LABEL_129;
        }
        else
        {
          if ( v187 == 5 )
            goto LABEL_171;
          if ( v187 > 5u )
          {
            if ( v187 != 6 )
            {
              if ( v187 == 7 )
              {
                v35 = *(_DWORD *)(a2 + 156);
                if ( v35 == -1 )
                  goto LABEL_346;
LABEL_38:
                v36 = 4;
LABEL_39:
                s1 = (char *)v35;
                v37 = strlen(v33);
                sub_1B25B4(v177, v33, v37, 1, v34, v36, (int)s1);
                v2 = dword_478988;
                goto LABEL_30;
              }
LABEL_129:
              v35 = -1;
              v36 = 0;
              goto LABEL_39;
            }
            if ( v31[8] == 67 )
            {
              if ( !strcmp("__DYNAMIC", v31) )
                v36 = 4;
              else
                v36 = 9;
            }
            else
            {
              v36 = 9;
            }
            v93 = sub_FC54C();
            v35 = *(_DWORD *)(a2 + 156);
            if ( v93 )
            {
              if ( v35 != -1 )
                goto LABEL_38;
            }
            else if ( v35 != -1 )
            {
              goto LABEL_39;
            }
            sub_94700((int)"dbxread.c", 491, "sect_index_data not initialized");
LABEL_171:
            v35 = *(_DWORD *)(a2 + 152);
            if ( v35 == -1 )
              goto LABEL_345;
            v36 = 1;
LABEL_152:
            if ( dword_47B280 > v34 )
              dword_47B280 = v34;
            goto LABEL_39;
          }
          if ( v187 == 3 )
          {
            v35 = -1;
            v36 = 6;
            goto LABEL_39;
          }
          if ( v187 != 4 )
            goto LABEL_129;
        }
LABEL_150:
        v35 = *(_DWORD *)(a2 + 152);
        if ( v35 != -1 )
        {
          v36 = 8;
          goto LABEL_152;
        }
        sub_94700((int)"dbxread.c", 470, "sect_index_text not initialized");
LABEL_344:
        sub_94700((int)"dbxread.c", 462, "sect_index_data not initialized");
LABEL_345:
        sub_94700((int)"dbxread.c", 438, "sect_index_text not initialized");
LABEL_346:
        sub_94700((int)"dbxread.c", 442, "sect_index_data not initialized");
        sub_107848();
        return;
      case 32:
      case 36:
      case 38:
      case 40:
      case 44:
      case 48:
      case 66:
      case 128:
      case 196:
      case 246:
      case 248:
        v57 = sub_105530(a2, &v186);
        v58 = (int)v57;
        if ( v185 && v187 == 36 && !*v57 )
        {
          v91 = *(_DWORD *)(v185 + 20);
          v2 = dword_478988;
          v92 = v91 < v173 + v190;
          if ( !v91 )
            v92 = 1;
          if ( v92 )
            *(_DWORD *)(v185 + 20) = v173 + v190;
          goto LABEL_30;
        }
        v59 = strchr(v57, 58);
        v60 = (unsigned int)v59;
        if ( !v59 )
        {
LABEL_29:
          v2 = dword_478988;
          goto LABEL_30;
        }
        v2 = (unsigned int)&v59[-v58];
        if ( dword_47B28C != 4 )
        {
LABEL_71:
          v174 = v60 - v58;
          s1 = (char *)v58;
          goto LABEL_72;
        }
        ptr = &v59[-v58];
        v119 = &v59[-v58];
        v191[0] = v192;
        if ( v2 > 0xF )
        {
          s1 = (char *)&ptr;
          v154 = (_DWORD *)sub_33B2BC(v191, &ptr, 0);
          v155 = s1;
          v191[0] = v154;
          v192[0] = ptr;
        }
        else
        {
          if ( v2 == 1 )
          {
            v120 = v192;
            p_ptr = &ptr;
            LOBYTE(v192[0]) = *(_BYTE *)v58;
LABEL_258:
            v191[1] = v119;
            v119[(_DWORD)v120] = 0;
            sub_FFE48((int)p_ptr, (char *)v191[0]);
            n = v194;
            if ( v194 )
            {
              v122 = *(void **)(a2 + 60);
              v123 = *(_DWORD *)(a2 + 64);
              v174 = v194;
              if ( v194 + 1 > v123 - (int)v122 )
              {
                obstack_newchunk((struct obstack *)(a2 + 48), v194 + 1);
                v122 = *(void **)(a2 + 60);
              }
              memcpy(v122, ptr, n);
              v124 = *(_DWORD *)(a2 + 60);
              v125 = n;
              *(_DWORD *)(a2 + 60) = v124 + n + 1;
              *(_BYTE *)(v124 + v125) = 0;
              v126 = *(_QWORD *)(a2 + 56);
              v127 = *(_DWORD *)(a2 + 72);
              v128 = *(_DWORD *)(a2 + 64);
              v129 = HIDWORD(v126) == (_DWORD)v126;
              s1 = *(char **)(a2 + 56);
              if ( HIDWORD(v126) == (_DWORD)v126 )
                LOBYTE(v126) = *(_BYTE *)(a2 + 88);
              v130 = (HIDWORD(v126) + v127) & ~v127;
              *(_DWORD *)(a2 + 60) = v130;
              if ( v129 )
                *(_BYTE *)(a2 + 88) = v126 | 2;
              if ( v130 - *(_DWORD *)(a2 + 52) > (unsigned int)(v128 - *(_DWORD *)(a2 + 52)) )
              {
                v130 = v128;
                *(_DWORD *)(a2 + 60) = v128;
              }
              *(_DWORD *)(a2 + 56) = v130;
            }
            else
            {
              v174 = 0;
              s1 = 0;
            }
            if ( ptr != v195 )
              sub_339E64(ptr);
            if ( v191[0] != v192 )
              sub_339E64(v191[0]);
            if ( !n )
              goto LABEL_71;
LABEL_72:
            switch ( *(_BYTE *)(v60 + 1) )
            {
              case '#':
              case '(':
              case '-':
              case '0':
              case '1':
              case '2':
              case '3':
              case '4':
              case '5':
              case '6':
              case '7':
              case '8':
              case '9':
              case ':':
              case 'V':
                goto LABEL_29;
              case 'F':
                if ( !v185 )
                {
                  v20 = (char *)sub_93028(v2 + 1);
                  v21 = v60 - v58;
                  v22 = v20;
                  memcpy(v20, (const void *)v58, v21);
                  v23 = dword_47AC88;
                  v22[v2] = v185;
                  if ( v23 > 0 )
                    sub_F43B4(&off_46D334, "function `%s' appears to be defined outside of all compilation units", v22);
                  free(v22);
                }
                v24 = *(_DWORD *)(a2 + 152);
                if ( v24 == -1 )
                  goto LABEL_339;
                v25 = *(_DWORD *)(a2 + 144);
                dword_47B270 = v58;
                v26 = *(_DWORD *)(v25 + 4 * v24);
                v190 += v26;
                if ( v190 == v26 && ((int (__fastcall *)(int))loc_16C5C4)(v175) )
                {
                  if ( v185 )
                  {
                    v153 = sub_104C88((const char *)v58, *(_DWORD *)(v185 + 4));
                    v27 = v180 & 1;
                    if ( !v153 )
                    {
                      if ( v180 )
                        goto LABEL_295;
                      v173 = v190;
                      goto LABEL_23;
                    }
                  }
                  else
                  {
                    v153 = sub_104C88((const char *)v58, 0);
                    if ( !v153 )
                    {
                      v173 = v190;
                      goto LABEL_27;
                    }
                    v27 = v180 & 1;
                  }
                  v190 = v153;
                }
                else
                {
                  v27 = v180 & 1;
                }
                if ( !v185 )
                  v27 = 0;
                if ( v27 )
                {
LABEL_295:
                  v150 = ((int (__fastcall *)(int))loc_16C5C4)(v175);
                  v173 = v190;
                  if ( !v150 )
                    goto LABEL_26;
                  v180 = 0;
                  *(_DWORD *)(v185 + 16) = v190;
                  goto LABEL_27;
                }
                v173 = v190;
                if ( !v185 )
                  goto LABEL_27;
                if ( v180 )
                {
LABEL_26:
                  v180 = 0;
                  *(_DWORD *)(v185 + 16) = v173;
                  goto LABEL_27;
                }
LABEL_23:
                if ( *(_DWORD *)(v185 + 16) > v173 )
                {
                  v28 = *(_DWORD *)(a2 + 152);
                  if ( v28 == -1 )
                  {
                    sub_94700((int)"dbxread.c", 1794, "sect_index_text not initialized");
                    goto LABEL_341;
                  }
                  if ( *(_DWORD *)(*(_DWORD *)(a2 + 144) + 4 * v28) != v173 )
                    goto LABEL_26;
                }
LABEL_27:
                v29 = dword_47B28C;
                v30 = a2 + 108;
LABEL_28:
                sub_1D2258(s1, v174, 1, 1, 10, v30, v173, v29, a2);
                goto LABEL_29;
              case 'G':
                v190 += *(_DWORD *)(*(_DWORD *)(a2 + 144) + 4 * v171);
                sub_1D2258(s1, v174, 1, 1, 2, a2 + 108, v190, dword_47B28C, a2);
                v2 = dword_478988;
                goto LABEL_30;
              case 'S':
                v190 += *(_DWORD *)(*(_DWORD *)(a2 + 144) + 4 * v171);
                if ( ((int (__fastcall *)(int))loc_16C4C0)(v175) )
                  ((void (__fastcall *)(int, int))loc_16C50C)(v175, v58);
                sub_1D2258(s1, v174, 1, 1, 2, a2 + 120, v190, dword_47B28C, a2);
                v2 = dword_478988;
                goto LABEL_30;
              case 'T':
                if ( v60 >= v58 + 2 )
                  goto LABEL_201;
                if ( v60 == v58 + 1 )
                {
                  if ( *(_BYTE *)v58 == 32 )
                  {
                    v99 = *(unsigned __int8 *)(v58 + 3);
                  }
                  else
                  {
LABEL_201:
                    sub_1D2258(s1, v174, 1, 2, 8, a2 + 120, 0, dword_47B28C, a2);
                    v99 = *(unsigned __int8 *)(v60 + 2);
                    if ( v99 == 116 )
                    {
                      ++v60;
                      sub_1D2258(s1, v174, 1, 1, 8, a2 + 120, 0, dword_47B28C, a2);
                      v99 = *(unsigned __int8 *)(v60 + 2);
                    }
                  }
                }
                else
                {
LABEL_205:
                  v99 = *(unsigned __int8 *)(v60 + 2);
                }
                v100 = v99 == 61;
                if ( v99 != 61 )
                  v100 = v99 == 44;
                v101 = !v100;
                if ( (unsigned int)(v99 - 40) <= 1 )
                  v101 = 0;
                if ( (unsigned int)(v99 - 48) > 9 )
                  v102 = v101 & 1;
                else
                  v102 = 0;
                v103 = v60 + 2;
                while ( !v102 )
                {
                  v104 = *(unsigned __int8 *)++v103;
                  v99 = v104;
                  v105 = v104 == 61;
                  if ( v104 != 61 )
                    v105 = v99 == 44;
                  LOBYTE(v102) = !v105;
                  if ( (unsigned int)(v99 - 40) <= 1 )
                    LOBYTE(v102) = 0;
                  if ( (unsigned int)(v99 - 48) <= 9 )
                    v102 = 0;
                }
                if ( v99 != 101 )
                  goto LABEL_29;
                v106 = *(unsigned __int8 *)(v103 + 1);
                v107 = (unsigned __int8 *)(v103 + 1);
                if ( v106 == 45 )
                {
                  while ( v107[1] != 58 )
                    ++v107;
                  v106 = v107[2];
                  v107 += 2;
                }
LABEL_229:
                while ( 2 )
                {
                  v108 = v106 == 0;
                  v109 = v106 == 59 || v106 == 0;
                  if ( v106 == 44 )
                    v109 |= 1u;
                  if ( v109 )
                    goto LABEL_29;
                  if ( v106 == 92 )
                    goto LABEL_236;
                  if ( v106 == 63 )
                  {
                    v113 = v107[1];
                    if ( v107[1] )
                    {
                      v112 = v107;
                      v110 = v107;
                      goto LABEL_242;
                    }
LABEL_236:
                    v110 = (unsigned __int8 *)(*v167)(a2);
                    v106 = *v110;
                    v108 = v106 == 0;
                  }
                  else
                  {
                    v110 = v107;
                  }
                  if ( v106 == 58 )
                    v111 = v108 | 1;
                  else
                    v111 = v108;
                  v112 = v110;
                  if ( v111 )
                  {
                    v107 = v110;
                    v117 = 0;
LABEL_248:
                    sub_1D2258(v110, v117, 1, 1, 1, a2 + 120, 0, dword_47B28C, a2);
                    v106 = *v107;
                    if ( !*v107 )
                      continue;
                    while ( v106 != 44 )
                    {
                      v118 = *++v107;
                      v106 = v118;
                      if ( !v118 )
                        goto LABEL_229;
                    }
                    v106 = *++v107;
                    continue;
                  }
                  break;
                }
                v113 = v110[1];
LABEL_242:
                for ( i = v110 + 1; ; ++i )
                {
                  v116 = v113 == 0;
                  if ( v113 )
                    v116 = v113 == 58;
                  v107 = i;
                  if ( v116 )
                    break;
                  v115 = i[1];
                  v113 = v115;
                }
                v117 = i - v112;
                goto LABEL_248;
              case 'c':
                sub_1D2258(s1, v174, 1, 1, 1, a2 + 120, 0, dword_47B28C, a2);
                v2 = dword_478988;
                goto LABEL_30;
              case 'f':
                if ( !v185 )
                {
                  v156 = (char *)sub_93028(v2 + 1);
                  v157 = v60 - v58;
                  v158 = v156;
                  memcpy(v156, (const void *)v58, v157);
                  v159 = dword_47AC88;
                  v158[v2] = v185;
                  if ( v159 > 0 )
                    sub_F43B4(&off_46D334, "function `%s' appears to be defined outside of all compilation units", v158);
                  free(v158);
                }
                v94 = *(_DWORD *)(a2 + 152);
                if ( v94 == -1 )
                {
                  sub_94700((int)"dbxread.c", 1682, "sect_index_text not initialized");
LABEL_332:
                  sub_94700((int)"dbxread.c", 1289, "sect_index_text not initialized");
                  if ( ptr != v195 )
                    sub_339E64(ptr);
                  goto LABEL_334;
                }
                v95 = *(_DWORD *)(a2 + 144);
                dword_47B270 = v58;
                v96 = *(_DWORD *)(v95 + 4 * v94);
                v190 += v96;
                if ( v190 == v96 && ((int (__fastcall *)(int))loc_16C5C4)(v175) )
                {
                  if ( v185 )
                  {
                    v152 = sub_104C88((const char *)v58, *(_DWORD *)(v185 + 4));
                    v97 = v180 & 1;
                    if ( !v152 )
                    {
                      if ( v180 )
                        goto LABEL_297;
                      v173 = v190;
                      goto LABEL_187;
                    }
                  }
                  else
                  {
                    v152 = sub_104C88((const char *)v58, 0);
                    if ( !v152 )
                    {
                      v173 = v190;
                      goto LABEL_191;
                    }
                    v97 = v180 & 1;
                  }
                  v190 = v152;
                }
                else
                {
                  v97 = v180 & 1;
                }
                if ( !v185 )
                  v97 = 0;
                if ( v97 )
                {
LABEL_297:
                  v151 = ((int (__fastcall *)(int))loc_16C5C4)(v175);
                  v173 = v190;
                  if ( !v151 )
                    goto LABEL_190;
                  v180 = 0;
                  *(_DWORD *)(v185 + 16) = v190;
                  goto LABEL_191;
                }
                v173 = v190;
                if ( !v185 )
                  goto LABEL_191;
                if ( v180 )
                {
LABEL_190:
                  v180 = 0;
                  *(_DWORD *)(v185 + 16) = v173;
                  goto LABEL_191;
                }
LABEL_187:
                if ( *(_DWORD *)(v185 + 16) > v173 )
                {
                  v98 = *(_DWORD *)(a2 + 152);
                  if ( v98 == -1 )
                  {
                    sub_94700((int)"dbxread.c", 1725, "sect_index_text not initialized");
LABEL_338:
                    sub_94700((int)"dbxread.c", 1191, "sect_index_text not initialized");
LABEL_339:
                    sub_94700((int)"dbxread.c", 1751, "sect_index_text not initialized");
LABEL_334:
                    v160 = v191[0];
                    if ( v191[0] != v192 )
                      sub_339E64(v191[0]);
                    sub_338FFC(v160);
                  }
                  if ( *(_DWORD *)(*(_DWORD *)(a2 + 144) + 4 * v98) != v173 )
                    goto LABEL_190;
                }
LABEL_191:
                v29 = dword_47B28C;
                v30 = a2 + 120;
                goto LABEL_28;
              case 't':
                if ( v58 != v60 )
                  sub_1D2258(s1, v174, 1, 1, 8, a2 + 120, 0, dword_47B28C, a2);
                goto LABEL_205;
              default:
                if ( dword_47AC88 <= 0 )
                  goto LABEL_29;
                sub_F43B4(&off_46D334, "unknown symbol descriptor `%c'", *(unsigned __int8 *)(v60 + 1));
                v2 = dword_478988;
                goto LABEL_30;
            }
          }
          if ( !v2 )
          {
            v120 = v192;
            p_ptr = &ptr;
            goto LABEL_258;
          }
          v154 = v192;
          v155 = (char *)&ptr;
        }
        s1 = v155;
        memcpy(v154, (const void *)v58, v60 - v58);
        v119 = (char *)ptr;
        v120 = v191[0];
        p_ptr = s1;
        goto LABEL_258;
      case 98:
        if ( !v185 || !((int (__fastcall *)(int))loc_16C5C4)(v175) )
          goto LABEL_29;
        v163 = v181;
        v181 = 0;
        sub_1056A4(a2, (_DWORD *)v185, (int)v182, (_DWORD *)v184, dword_47B258 * dword_478988, 0, src, v163, v180);
        v184 = 0;
        dword_47B274 = 0;
        v185 = 0;
        v2 = dword_478988;
        goto LABEL_30;
      case 100:
        v79 = *(_DWORD *)(a2 + 152);
        if ( v79 == -1 )
          goto LABEL_332;
        if ( v190 )
          v11 = 0;
        s1 = (char *)(v190 + *(_DWORD *)(*(_DWORD *)(a2 + 144) + 4 * v79));
        if ( !v190 )
        {
          v87 = ((int (__fastcall *)(int))loc_16C5C4)(v175);
          v88 = s1;
          v11 = v87;
          if ( v87 )
          {
            v88 = 0;
            v11 = 1;
          }
          s1 = v88;
        }
        v80 = dword_478988;
        if ( dword_478988 - 1 != dword_46D434 )
        {
          dword_47B284 = dword_478988;
          if ( v185 )
          {
            v162 = v181;
            v81 = *(char **)(v185 + 20);
            v82 = (_DWORD *)v184;
            if ( s1 >= v81 )
              v81 = s1;
            v181 = 0;
            v184 = 0;
            sub_1056A4(a2, (_DWORD *)v185, (int)v182, v82, dword_47B258 * dword_478988, (size_t)v81, src, v162, v180);
            v80 = dword_478988;
            v185 = 0;
            dword_47B274 = 0;
          }
        }
        dword_46D434 = v80;
        v83 = sub_105530(a2, &v186);
        v84 = (int)v83;
        if ( !*v83 )
          goto LABEL_117;
        v85 = (_BYTE *)sub_3245A4(v83);
        if ( (_BYTE *)v84 != v85 && !*v85 )
        {
          v180 = v11;
          dword_47B288 = v84;
          v2 = dword_478988;
          v179 = 1;
          goto LABEL_30;
        }
        if ( v185 )
        {
LABEL_117:
          v180 = v11;
          goto LABEL_118;
        }
        v132 = dword_47B258 * dword_47B284;
        v133 = sub_1D070C(a2, v84, s1, a2 + 108, a2 + 120);
        v135 = *(_DWORD *)(a2 + 60);
        v185 = v133;
        v136 = *(_DWORD *)(a2 + 64);
        if ( (unsigned int)(v136 - v135) <= 0x1B )
        {
          obstack_newchunk((struct obstack *)(a2 + 48), 28);
          v135 = *(_DWORD *)(a2 + 60);
          v136 = *(_DWORD *)(a2 + 64);
        }
        v137 = *(int **)(a2 + 56);
        v138 = (int *)(v135 + 28);
        v139 = *(_DWORD *)(a2 + 72);
        *(_DWORD *)(a2 + 60) = v138;
        v140 = v138 == v137;
        v141 = dword_47B250;
        if ( v138 == v137 )
          v134 = *(_BYTE *)(a2 + 88);
        v142 = ((unsigned int)v138 + v139) & ~v139;
        v180 = v11;
        *(_DWORD *)(a2 + 60) = v142;
        if ( v140 )
          *(_BYTE *)(a2 + 88) = v134 | 2;
        v143 = dword_47B258;
        if ( v142 - *(_DWORD *)(a2 + 52) > (unsigned int)(v136 - *(_DWORD *)(a2 + 52)) )
        {
          *(_DWORD *)(a2 + 60) = v136;
          v142 = v136;
        }
        v144 = v84;
        v145 = (_DWORD *)v185;
        *(_DWORD *)(a2 + 56) = v142;
        v146 = dword_47B268;
        v145[16] = v137;
        *v137 = v132;
        v145[15] = sub_108F00;
        v137[5] = v146;
        v137[4] = 0;
        v137[2] = v143;
        v137[3] = v141;
        v179 = 1;
        v147 = sub_212DE8(v144);
        v148 = dword_47B288;
        v149 = v145[16];
        dword_47B28C = v147;
        dword_47B288 = 0;
        *(_DWORD *)(v149 + 24) = v147;
        v2 = dword_478988;
        v145[3] = v148;
        goto LABEL_30;
      case 130:
        v61 = sub_105530(a2, &v186);
        v62 = sub_212DE8(v61);
        if ( v62 && (v62 != 2 || dword_47B28C != 4) )
          dword_47B28C = v62;
        if ( v185 )
        {
          v63 = dword_47B23C;
          v64 = (const char **)dword_47B27C;
          v65 = (const char *)v190;
          if ( dword_47B27C >= (unsigned int)(dword_47B238 + 12 * dword_47B23C) )
          {
            v66 = dword_47B27C - dword_47B238;
            dword_47B23C *= 2;
            v67 = (char *)sub_93050((void *)dword_47B238, 24 * v63);
            v64 = (const char **)&v67[v66];
            dword_47B238 = (int)v67;
          }
          v68 = v185;
          *v64 = v61;
          v64[1] = v65;
          dword_47B27C = (int)(v64 + 3);
          v64[2] = (const char *)v68;
          goto LABEL_80;
        }
        v2 = dword_478988;
        if ( dword_47AC88 > 0 )
        {
          sub_F43B4(&off_46D334, "N_BINCL %s not in entries for any file, at symtab pos %d", v61, dword_478988);
          v2 = dword_478988;
        }
        goto LABEL_30;
      case 132:
        v61 = sub_105530(a2, &v186);
        v74 = sub_212DE8(v61);
        if ( v74 && (v74 != 2 || dword_47B28C != 4) )
          dword_47B28C = v74;
        if ( v185 && !j_strcmp(v61, *(const char **)(v185 + 4)) )
          goto LABEL_29;
        if ( !v184 )
          goto LABEL_80;
        v75 = 0;
        s1 = v7;
        v76 = (char *)v182 - 4;
        v77 = v184;
        do
        {
          v78 = (const char *)*((_DWORD *)v76 + 1);
          v76 += 4;
          if ( !j_strcmp(v61, v78) )
          {
            v7 = s1;
            v2 = dword_478988;
            goto LABEL_30;
          }
          ++v75;
        }
        while ( v77 != v75 );
        v7 = s1;
LABEL_80:
        v69 = v184;
        v2 = dword_478988;
        v70 = v184 + 1;
        *((_DWORD *)v182 + v184) = v61;
        v71 = 4 * v69;
        v184 = v70;
        if ( v176 <= v70 )
        {
          v176 *= 2;
          v72 = v182;
          v182 = dest;
          memcpy(dest, v72, v71 + 4);
        }
        goto LABEL_30;
      case 194:
        v38 = (char *)sub_105530(a2, &v186);
        v39 = dword_47B238;
        s1 = v38;
        if ( dword_47B238 >= (unsigned int)dword_47B27C )
          goto LABEL_119;
        v40 = v190;
        v41 = dword_47B27C;
        while ( 1 )
        {
          if ( v40 == *(_DWORD *)(v39 + 4) )
          {
            v42 = strcmp(s1, *(const char **)v39);
            if ( !v42 )
              break;
          }
          v39 += 12;
          if ( v39 >= v41 )
          {
LABEL_119:
            v2 = dword_478988;
            if ( dword_47AC88 <= 0 )
              goto LABEL_30;
            sub_F43B4(
              &off_46D334,
              "\"repeated\" header file %s not previously seen, at symtab pos %d",
              s1,
              dword_478988);
            goto LABEL_29;
          }
        }
        v43 = *(_DWORD *)(v39 + 8);
        v44 = v43 == 0;
        if ( v43 )
          v44 = v185 == v43;
        if ( v44 )
          goto LABEL_29;
        if ( v181 )
        {
          if ( v43 == *(_DWORD *)src )
            goto LABEL_29;
          v45 = src;
          while ( v181 != ++v42 )
          {
            v46 = v45[1];
            ++v45;
            if ( v46 == v43 )
              goto LABEL_29;
          }
        }
        v47 = v181;
        v48 = v181 + 1;
        *((_DWORD *)src + v181) = v43;
        v49 = 4 * v47;
        if ( v172 > v48 )
        {
          v181 = v48;
          goto LABEL_29;
        }
        v181 = v48;
        v172 *= 2;
        v50 = src;
        src = dest;
        memcpy(dest, v50, v49 + 4);
        v2 = dword_478988;
        goto LABEL_30;
      default:
        v86 = sub_98B08(v19, 0);
        if ( dword_47AC88 > 0 )
          sub_F43B4(&off_46D334, "unknown symbol type %s", v86);
        goto LABEL_29;
    }
  }
}
