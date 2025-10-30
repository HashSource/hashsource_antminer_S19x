int __fastcall sub_298EB4(const char *a1, char **a2)
{
  int v4; // r4
  int v5; // r6
  _BYTE *v6; // r10
  size_t v7; // r0
  int v8; // r2
  int v9; // r4
  const char *v10; // r3
  int v11; // r2
  int v12; // r5
  char v13; // r1
  int v14; // r0
  int v15; // r1
  bool v16; // zf
  char *v17; // r8
  signed int v18; // r7
  int v19; // r3
  char *v20; // r9
  signed int v21; // r11
  int v22; // r6
  int v23; // r5
  int v24; // r4
  int v25; // r2
  int v26; // r3
  char *v27; // r5
  char *v28; // r11
  char *v29; // r8
  int v30; // r3
  int v31; // r0
  int v32; // r2
  int v33; // r1
  char *v34; // r4
  size_t v36; // r0
  char *v37; // r0
  int v38; // r0
  int v39; // r0
  char *v40; // r0
  const char *v41; // r3
  int v42; // r1
  int v43; // t1
  size_t v44; // r0
  char *v45; // r0
  int v46; // r2
  int v47; // r5
  int v48; // r4
  char *v49; // r8
  int v50; // r4
  int v51; // r5
  char *v52; // r4
  int v53; // r5
  char *v54; // r0
  int v55; // r3
  char v56; // r3
  char *v57; // r8
  size_t v58; // r0
  size_t v59; // r5
  char *v60; // r0
  char v61; // r3
  int v62; // r4
  bool v63; // cc
  size_t v64; // r5
  char *v65; // r0
  size_t v66; // r2
  char *v67; // r4
  char *v68; // r5
  size_t v69; // r0
  size_t v70; // r5
  char *v71; // r0
  int v72; // r8
  unsigned __int8 *v73; // r0
  int v74; // r4
  unsigned __int8 *v75; // r8
  int v76; // r1
  int v77; // r3
  char v78; // r0
  int v79; // r2
  int v80; // r0
  char *v81; // r12
  int v82; // r0
  int v83; // r1
  int v84; // t1
  bool v85; // zf
  int v86; // r1
  char *v87; // r5
  size_t v88; // r0
  char *v89; // r0
  char *v90; // r8
  signed int v91; // r4
  char *v92; // r2
  int v93; // r3
  bool v94; // zf
  _BYTE *v95; // r0
  int v96; // r1
  int v97; // r2
  bool v98; // zf
  unsigned __int8 *v99; // r0
  char *v100; // r0
  const char *v101; // r4
  char *v102; // r0
  size_t v103; // r0
  char *v104; // r0
  char *v105; // r5
  char *v106; // r0
  int v107; // r1
  int v108; // r4
  int v109; // r3
  void *v110; // r2
  _BYTE *v111; // r5
  int v112; // r4
  int v113; // r1
  signed int v114; // r7
  int v115; // r3
  int v116; // r6
  void *v117; // r0
  int v118; // r0
  void *v119; // r0
  int v120; // r3
  size_t v121; // r5
  signed int v122; // r0
  signed int v123; // r4
  int v124; // r6
  int v125; // r9
  signed int v126; // r10
  int v127; // r2
  int v128; // r2
  bool v129; // zf
  char *v130; // r1
  bool v131; // zf
  int v132; // r3
  int v133; // t1
  size_t v134; // r11
  char *v135; // r5
  size_t v136; // r0
  char *v137; // r0
  char *v138; // r0
  size_t v139; // r0
  char *v140; // r0
  char *v141; // r4
  char *v142; // r2
  size_t v143; // r0
  char *v144; // r0
  size_t v145; // r0
  size_t v146; // r0
  size_t v147; // r4
  bool v148; // cc
  unsigned int v149; // r3
  unsigned int v150; // t1
  unsigned int v151; // r1
  char *v152; // r1
  _BYTE *v153; // r3
  bool v154; // cc
  unsigned int v155; // r2
  unsigned int v156; // t1
  unsigned int v157; // r12
  int v158; // lr
  int v159; // r2
  int v160; // r12
  char *v161; // r5
  int v162; // t1
  bool v163; // cc
  _BOOL4 v164; // r3
  int v165; // r2
  int v166; // r1
  int v167; // r3
  char *v168; // r0
  int v169; // r3
  bool v170; // cc
  int v171; // r0
  bool v172; // zf
  int v173; // r0
  size_t v174; // r0
  char *v175; // r0
  int s; // [sp+Ch] [bp-88h]
  size_t v177; // [sp+14h] [bp-80h]
  int v179; // [sp+1Ch] [bp-78h]
  char *v180; // [sp+20h] [bp-74h]
  int v181; // [sp+20h] [bp-74h]
  _BOOL4 v182; // [sp+24h] [bp-70h]
  const char *v183; // [sp+24h] [bp-70h]
  int v184; // [sp+24h] [bp-70h]
  int v185; // [sp+28h] [bp-6Ch]
  char *dest; // [sp+30h] [bp-64h]
  int v187; // [sp+34h] [bp-60h]
  int v188; // [sp+38h] [bp-5Ch]
  int v189; // [sp+3Ch] [bp-58h]
  int v190; // [sp+40h] [bp-54h]
  int v191; // [sp+40h] [bp-54h]
  int v192; // [sp+40h] [bp-54h]
  void *v193; // [sp+40h] [bp-54h]
  int v194; // [sp+40h] [bp-54h]
  int v195; // [sp+44h] [bp-50h]
  int v196; // [sp+48h] [bp-4Ch]
  signed int v197; // [sp+4Ch] [bp-48h]
  signed int v198; // [sp+4Ch] [bp-48h]
  int v199; // [sp+50h] [bp-44h]
  int v200; // [sp+54h] [bp-40h]
  char *v201; // [sp+58h] [bp-3Ch]
  _BYTE *v202; // [sp+5Ch] [bp-38h]
  char v203[4]; // [sp+60h] [bp-34h] BYREF
  int v204; // [sp+64h] [bp-30h] BYREF
  int v205; // [sp+68h] [bp-2Ch] BYREF
  int v206; // [sp+6Ch] [bp-28h] BYREF
  int v207; // [sp+70h] [bp-24h] BYREF
  int v208; // [sp+74h] [bp-20h]
  _DWORD v209[2]; // [sp+78h] [bp-1Ch] BYREF
  char src[4]; // [sp+80h] [bp-14h] BYREF
  int v211; // [sp+84h] [bp-10h]
  int v212; // [sp+88h] [bp-Ch]
  int v213; // [sp+8Ch] [bp-8h]
  char v214; // [sp+90h] [bp-4h] BYREF

  if ( !a2 )
    return 0;
  v4 = (unsigned __int8)byte_4707B4;
  if ( !byte_4707B4 )
  {
    v36 = strlen(a1);
    v37 = (char *)sub_93028(v36 + 1);
    *a2 = strcpy(v37, a1);
    return v4;
  }
  v5 = 0;
  v6 = sub_93028(0x100u);
  *v6 = 0;
  v7 = strlen(a1);
  v8 = *(unsigned __int8 *)a1;
  s = v7;
  v177 = v7;
  if ( (unsigned __int8)byte_4707B5 == v8 )
  {
    s = v7 + 4;
    v60 = (char *)sub_93028(v7 + 5);
    v61 = byte_4707B4;
    v17 = v60;
    v60[2] = 58;
    v60 += 4;
    *(v60 - 1) = 115;
    v17[1] = v61;
    *v17 = v61;
    strcpy(v60, a1);
    v204 = 0;
  }
  else
  {
    v207 = 0;
    v204 = 0;
    v208 = 0;
    if ( v8 )
    {
      while ( 1 )
      {
        if ( _ctype_get_mb_cur_max() <= 1 )
          goto LABEL_55;
        v9 = v204;
        v10 = &a1[v204];
        if ( dword_48BB60 )
          goto LABEL_8;
        v38 = sub_29B1F4(&a1[v204], &v207);
        if ( v38 <= 1 )
        {
LABEL_55:
          v9 = v204;
          v10 = &a1[v204];
LABEL_8:
          v11 = *((unsigned __int8 *)v10 + 1);
          v12 = *(unsigned __int8 *)v10;
          if ( byte_48BB34 )
          {
            if ( (unsigned __int8)byte_48BB34 == v12 )
            {
              if ( !v9
                || *(v10 - 1)
                && (v181 = *((unsigned __int8 *)v10 + 1),
                    v183 = v10,
                    v40 = strchr(off_4707B0, *((unsigned __int8 *)v10 - 1)),
                    v11 = v181,
                    v10 = v183,
                    v40) )
              {
                v41 = &a1[v9 + 1];
                do
                {
                  v42 = v41 - a1;
                  v43 = *(unsigned __int8 *)v41++;
                  v8 = v43;
                }
                while ( v43 );
                v204 = v42;
                break;
              }
            }
          }
          if ( (unsigned __int8)byte_4707B4 == v12 )
          {
            if ( v11 && !strchr((const char *)off_4707B8, v11) )
            {
              if ( !off_490168 )
                goto LABEL_31;
              if ( !((int (__fastcall *)(const char *, int))off_490168)(a1, v9) )
              {
                if ( byte_4707B4 != a1[v204] )
                  goto LABEL_72;
                goto LABEL_31;
              }
              goto LABEL_79;
            }
            v8 = (unsigned __int8)a1[v9 + 1];
            v204 = v9 + 1;
            if ( !v8 )
              break;
          }
          else
          {
            if ( v12 == 92 )
              v13 = v5 & 1;
            else
              v13 = 0;
            v14 = v9 + 1;
            if ( v11 == 34 )
              v15 = v13 & 1;
            else
              v15 = 0;
            if ( v15 )
            {
              v14 = v9 + 2;
              v5 = 1;
LABEL_29:
              v8 = (unsigned __int8)a1[v14];
              v204 = v14;
              if ( !v8 )
                break;
            }
            else
            {
              if ( !dword_48BB40 )
                goto LABEL_29;
              if ( v12 == 34 )
              {
                v5 = 1 - v5;
                goto LABEL_29;
              }
              if ( v5 || v12 != 39 )
              {
                if ( v12 == 92 )
                {
                  v16 = v11 == (unsigned __int8)byte_4707B4;
                  if ( v11 != (unsigned __int8)byte_4707B4 )
                    v16 = v11 == 39;
                  if ( v16 )
                    v14 = v9 + 2;
                }
                goto LABEL_29;
              }
              if ( v9 <= 0 )
                v46 = 0;
              else
                v46 = *((unsigned __int8 *)v10 - 1);
              v204 = v9 + 1;
              if ( v9 > 0 )
                LOBYTE(v46) = v46 == 36;
              sub_298058((int)a1, &v204, v46);
LABEL_79:
              v8 = (unsigned __int8)a1[++v204];
              if ( !v8 )
                break;
            }
          }
        }
        else
        {
          v39 = v38 + v204;
          v8 = (unsigned __int8)a1[v39];
          v204 = v39;
          if ( !v8 )
            break;
        }
      }
    }
    if ( (unsigned __int8)byte_4707B4 != v8 )
    {
LABEL_72:
      sub_297758(v6);
      v44 = strlen(a1);
      v45 = (char *)sub_93028(v44 + 1);
      *a2 = strcpy(v45, a1);
      return 0;
    }
LABEL_31:
    v204 = 0;
    if ( !v177 )
    {
      *a2 = v6;
      return s;
    }
    v17 = (char *)a1;
  }
  v18 = 0;
  v19 = 0;
  v180 = (char *)a1;
  v20 = v17;
  v21 = 256;
  v179 = 0;
  v182 = 0;
  v22 = 0;
  v185 = 0;
  do
  {
    v24 = (unsigned __int8)v20[v19];
    if ( v22 )
    {
      if ( v21 - 1 <= v18 )
      {
        v21 += 64;
        v6 = sub_93050(v6, v21);
      }
      v6[v18] = v24;
      v22 = 0;
      v6[++v18] = 0;
      v23 = v204;
      goto LABEL_38;
    }
    if ( _ctype_get_mb_cur_max() > 1 && !dword_48BB60 )
    {
      v56 = v24;
      v57 = src;
      *(_DWORD *)src = 0;
      v211 = 0;
      v212 = 0;
      v213 = 0;
      do
      {
        *v57++ = v56;
        v207 = 0;
        v208 = 0;
        if ( sub_29B1F4(src, &v207) != -2 )
          break;
        v56 = v20[++v204];
      }
      while ( &v214 != v57 );
      v58 = strlen(src);
      v59 = v58;
      if ( v58 > 1 )
      {
        v18 += v58;
        if ( v21 <= v18 )
        {
          v21 += ((v18 - v21) & 0xFFFFFF80) + 128;
          v6 = sub_93050(v6, v21);
        }
        v22 = 0;
        strcpy(&v6[v18 - v59], src);
        v23 = v204;
        goto LABEL_38;
      }
    }
    if ( (unsigned __int8)byte_4707B4 == v24 )
    {
      v47 = v204;
      v48 = v204 + 1;
      v49 = &v20[v204 + 1];
      if ( !*v49 || strchr((const char *)off_4707B8, (unsigned __int8)v20[v204 + 1]) )
      {
LABEL_83:
        if ( v21 - 1 <= v18 )
        {
LABEL_84:
          v21 += 64;
          v6 = sub_93050(v6, v21);
        }
LABEL_48:
        v6[v18++] = v20[v204];
        v6[v18] = 0;
        v23 = v204;
        goto LABEL_38;
      }
      if ( off_490168 )
      {
        if ( ((int (__fastcall *)(char *, int))off_490168)(v20, v47) )
          goto LABEL_83;
        v47 = v204;
        v48 = v204 + 1;
        v49 = &v20[v204 + 1];
      }
      v209[1] = 0;
      v209[0] = 0;
      v71 = (char *)sub_93028(0x80u);
      v205 = v47;
      v72 = (unsigned __int8)*v49;
      dest = v71;
      if ( v72 )
      {
        if ( strchr(":$*%^", v72) )
        {
          v205 = v48;
          v206 = 0;
          strcpy(v203, "!!");
          v73 = sub_2987BC((int)v203, &v206, 0);
          v74 = v205;
          v75 = v73;
          goto LABEL_133;
        }
        if ( v72 == 35 )
        {
          v74 = v47 + 2;
          v75 = v6;
          v205 = v47 + 2;
LABEL_133:
          if ( !v75 )
          {
            v167 = 0;
            v28 = v180;
            v29 = v20;
            v165 = v74;
            v166 = v47;
            goto LABEL_297;
          }
          v76 = (unsigned __int8)v20[v74];
          if ( v76 == 58 )
          {
            v77 = v74 + 1;
            v78 = 1;
            v76 = (unsigned __int8)v20[v74 + 1];
          }
          else
          {
            v78 = 0;
            v77 = v74;
          }
          if ( v76 == 37 )
          {
            v205 = v77 + 1;
            LOBYTE(v87) = dword_48BB3C;
            if ( dword_48BB3C )
            {
              v136 = strlen((const char *)dword_48BB3C);
              v137 = (char *)sub_93028(v136 + 1);
              v87 = strcpy(v137, (const char *)dword_48BB3C);
              goto LABEL_155;
            }
          }
          else
          {
            if ( v76 != 42 )
            {
              switch ( v76 )
              {
                case '$':
                  v205 = v77 + 1;
                  v138 = sub_298D24(36, 36, v75);
                  v87 = v138;
                  if ( v138 == (char *)&unk_48BB44 )
                  {
LABEL_314:
                    v29 = v20;
                    v28 = v180;
                    v165 = v205;
LABEL_296:
                    v166 = v74;
                    v167 = 1;
LABEL_297:
                    v34 = sub_29850C((int)v29, v166, v165, v167);
                    sub_297758(dest);
LABEL_51:
                    *a2 = v34;
                    sub_297758(v6);
                    s = -1;
                    if ( v28 != v29 )
                      sub_297758(v29);
                    return s;
                  }
                  if ( v138 )
                    goto LABEL_156;
                  break;
                case '-':
                  v82 = 0;
                  goto LABEL_286;
                case '^':
                  ++v77;
                  v82 = 1;
                  v83 = (unsigned __int8)v20[v77];
LABEL_148:
                  v85 = v83 == 42;
                  if ( v83 != 42 )
                    v85 = v83 == 94;
                  if ( v85 )
                  {
                    if ( v83 != 94 )
                    {
                      v86 = 36;
                      v205 = v77 + 1;
                      goto LABEL_154;
                    }
                    v158 = v77 + 1;
                    v86 = 1;
                    v164 = v82 <= 1;
                    goto LABEL_294;
                  }
                  if ( v83 != 45 )
                  {
                    v205 = v77;
                    v86 = v82;
                    goto LABEL_154;
                  }
LABEL_286:
                  v158 = v77 + 1;
                  v159 = (unsigned __int8)v20[v77 + 1];
                  v160 = v159 - 48;
                  v86 = (unsigned __int8)(v159 - 48);
                  if ( (unsigned int)v86 > 9 )
                  {
                    if ( v159 == 36 )
                    {
                      v77 += 2;
                    }
                    else
                    {
                      v205 = v77 + 1;
                      v86 = -1;
                    }
                    if ( v159 == 36 )
                    {
                      v86 = 36;
                      v205 = v77;
                    }
LABEL_154:
                    v87 = sub_298D24(v82, v86, v75);
                    if ( !v87 )
                      goto LABEL_314;
LABEL_155:
                    if ( v87 == (char *)&unk_48BB44 )
                      goto LABEL_314;
LABEL_156:
                    v88 = strlen(v87);
                    v89 = (char *)sub_93028(v88 + 1);
                    v90 = strcpy(v89, v87);
                    free(v87);
                    goto LABEL_157;
                  }
                  v161 = &v20[v158];
                  v86 = 0;
                  do
                  {
                    v162 = (unsigned __int8)*++v161;
                    ++v158;
                    v86 = v160 + 10 * v86;
                    v160 = v162 - 48;
                  }
                  while ( (unsigned __int8)(v162 - 48) <= 9u );
                  v163 = v86 < 36;
                  if ( v86 != 36 )
                    v163 = v86 < v82;
                  v164 = !v163;
LABEL_294:
                  v205 = v158;
                  if ( !v164 )
                  {
                    v28 = v180;
                    v29 = v20;
                    v165 = v158;
                    goto LABEL_296;
                  }
                  goto LABEL_154;
                default:
                  v79 = v76 - 48;
                  if ( (unsigned __int8)(v76 - 48) <= 9u )
                    v80 = v78 & 1;
                  else
                    v80 = 0;
                  if ( v80 )
                  {
                    v81 = &v20[v77];
                    v82 = 0;
                    do
                    {
                      v84 = (unsigned __int8)*++v81;
                      v83 = v84;
                      ++v77;
                      v82 = v79 + 10 * v82;
                      v79 = v84 - 48;
                    }
                    while ( (unsigned __int8)(v84 - 48) <= 9u );
                    goto LABEL_148;
                  }
                  break;
              }
              v139 = strlen((const char *)v75);
              v140 = (char *)sub_93028(v139 + 1);
              v90 = strcpy(v140, (const char *)v75);
LABEL_157:
              v91 = v205;
              v187 = 0;
              v189 = 0;
              v195 = v205;
              v188 = 0;
              v184 = 0;
LABEL_158:
              while ( v20[v91] == 58 )
              {
                v92 = &v20[v91];
                v93 = (unsigned __int8)v20[v91 + 1];
                v94 = v93 == 97;
                if ( v93 != 97 )
                  v94 = v93 == 103;
                if ( v94 )
                {
                  v184 = 1;
                  v205 = v91 + 1;
                  v93 = (unsigned __int8)v92[2];
                }
                else if ( v93 == 71 )
                {
                  v188 = 1;
                  v205 = v91 + 1;
                  v93 = (unsigned __int8)v92[2];
                }
                switch ( v93 )
                {
                  case '&':
                  case 's':
                    v91 = v205 + 2;
                    if ( v93 != 115 )
                    {
                      v205 += 2;
                      goto LABEL_218;
                    }
                    if ( (int)strlen(v20) <= v91 )
                      goto LABEL_175;
                    if ( _ctype_get_mb_cur_max() <= 1 )
                    {
                      v107 = v205;
LABEL_192:
                      v108 = (unsigned __int8)v20[v107 + 2];
                      goto LABEL_193;
                    }
                    v107 = v205;
                    v108 = dword_48BB60;
                    if ( dword_48BB60 )
                      goto LABEL_192;
                    sub_29B320(v20, v205 + 2, v209);
                    v173 = sub_29B1F4(&v20[v205 + 2], v209);
                    v107 = v205;
                    if ( v173 <= 1 )
                      goto LABEL_192;
LABEL_193:
                    v205 = v107 + 3;
                    v109 = sub_298304((int)v20, &v205, v108, 0, &dword_48BB48);
                    if ( v109 )
                    {
                      if ( dword_48BB4C )
                      {
                        v190 = v109;
                        free((void *)dword_48BB4C);
                        v109 = v190;
                      }
                      dword_48BB4C = v109;
                    }
                    else if ( !dword_48BB4C )
                    {
                      if ( dword_48BB38 && *(_BYTE *)dword_48BB38 )
                      {
                        v174 = strlen((const char *)dword_48BB38);
                        v175 = (char *)sub_93028(v174 + 1);
                        dword_48BB4C = (int)strcpy(v175, (const char *)dword_48BB38);
                        dword_48BB48 = strlen((const char *)dword_48BB4C);
                      }
                      else
                      {
                        dword_48BB48 = 0;
                      }
                    }
                    if ( dword_48BB50 )
                      free((void *)dword_48BB50);
                    dword_48BB50 = sub_298304((int)v20, &v205, v108, 1, &dword_48BB54);
                    if ( strchr((const char *)dword_48BB50, 38) )
                    {
                      v191 = dword_48BB54 + dword_48BB48;
                      v110 = sub_93028(dword_48BB54 + dword_48BB48);
                      if ( dword_48BB54 <= 0 )
                      {
                        v112 = 0;
                        v111 = (_BYTE *)dword_48BB50;
                        v120 = 0;
                      }
                      else
                      {
                        v111 = (_BYTE *)dword_48BB50;
                        v112 = 0;
                        v197 = v18;
                        v113 = 0;
                        v199 = v22;
                        v114 = v191;
                        do
                        {
                          v118 = (unsigned __int8)v111[v113];
                          v115 = v113;
                          v116 = v113 + 1;
                          if ( v118 == 38 )
                          {
                            if ( v114 <= dword_48BB48 + v112 )
                            {
                              v114 = dword_48BB48 + 2 * v114;
                              v119 = sub_93050(v110, v114);
                              v111 = (_BYTE *)dword_48BB50;
                              v110 = v119;
                            }
                            v193 = v110;
                            strcpy((char *)v110 + v112, (const char *)dword_48BB4C);
                            v113 = v116;
                            v110 = v193;
                            v112 += dword_48BB48;
                          }
                          else
                          {
                            if ( v118 == 92 && v111[v113 + 1] == 38 )
                            {
                              v115 = v113 + 1;
                              v116 = v113 + 2;
                            }
                            if ( v114 <= v112 )
                            {
                              v114 *= 2;
                              v192 = v115;
                              v117 = sub_93050(v110, v114);
                              v111 = (_BYTE *)dword_48BB50;
                              v110 = v117;
                              v115 = v192;
                            }
                            v113 = v116;
                            *((_BYTE *)v110 + v112++) = v111[v115];
                          }
                        }
                        while ( dword_48BB54 > v116 );
                        v120 = v112;
                        v18 = v197;
                        v22 = v199;
                      }
                      *((_BYTE *)v110 + v120) = 0;
                      v194 = (int)v110;
                      sub_297758(v111);
                      dword_48BB54 = v112;
                      dword_48BB50 = v194;
                    }
LABEL_218:
                    v121 = dword_48BB48;
                    if ( !dword_48BB48 )
                    {
                      v27 = v90;
                      v28 = v180;
                      v29 = v20;
                      v33 = v195;
                      v30 = 4;
                      v32 = v205;
                      goto LABEL_307;
                    }
                    v122 = strlen(v90);
                    if ( dword_48BB48 > v122 )
                    {
                      v27 = v90;
                      v28 = v180;
                      v29 = v20;
                      v33 = v195;
                      v30 = 2;
                      v32 = v205;
                      goto LABEL_307;
                    }
                    v196 = 1;
                    v123 = 0;
                    v200 = v22;
                    v124 = v184;
                    v201 = v20;
                    v125 = 0;
                    v202 = v6;
                    v126 = v122;
                    v198 = v21;
                    while ( 1 )
                    {
                      if ( !v121
                        || v90[v123] == *(_BYTE *)dword_48BB4C && !strncmp(&v90[v123], (const char *)dword_48BB4C, v121) )
                      {
                        v134 = dword_48BB54 - v121 + v126;
                        v135 = (char *)sub_93028(v134 + 1);
                        strncpy(v135, v90, v123);
                        strncpy(&v135[v123], (const char *)dword_48BB50, dword_48BB54);
                        strncpy(&v135[v123 + dword_48BB54], &v90[v123 + dword_48BB48], v126 - (v123 + dword_48BB48));
                        v135[v134] = 0;
                        sub_297758(v90);
                        if ( v124 )
                        {
                          v196 = 0;
                          ++v124;
                          v90 = v135;
                          v123 += dword_48BB54 - 1;
                          v126 = strlen(v135);
                        }
                        else
                        {
                          if ( !v188 )
                          {
                            v21 = v198;
                            v90 = v135;
                            v22 = v200;
                            v20 = v201;
                            v6 = v202;
                            v91 = v205;
                            v184 = 0;
                            goto LABEL_158;
                          }
                          v90 = v135;
                          v123 = v125;
                          v126 = strlen(v135);
                          v196 = 0;
                        }
                      }
                      v121 = dword_48BB48;
                      ++v123;
                      if ( dword_48BB48 + v123 > v126 )
                        break;
                      if ( v123 > v125 )
                        v127 = v188 & 1;
                      else
                        v127 = 0;
                      if ( v127 )
                      {
                        v128 = (unsigned __int8)v90[v123];
                        if ( v90[v123] )
                        {
                          v129 = v128 == 9;
                          if ( v128 != 9 )
                            v129 = v128 == 32;
                          if ( v129 )
                          {
                            v130 = &v90[v123];
                            do
                            {
                              v133 = (unsigned __int8)*++v130;
                              v132 = v133;
                              ++v123;
                              if ( !v133 )
                                break;
                              v131 = v132 == 9;
                              if ( v132 != 9 )
                                v131 = v132 == 32;
                            }
                            while ( v131 );
                          }
                        }
                        v125 = sub_2980CC((int)v90, v123);
                      }
                    }
                    v169 = v124;
                    v184 = v124;
                    v170 = v124 <= 1;
                    v21 = v198;
                    if ( v124 > 1 )
                      v169 = 0;
                    v20 = v201;
                    v6 = v202;
                    v22 = v200;
                    v91 = v205;
                    if ( !v170 )
                    {
                      v184 = v169;
                      continue;
                    }
                    if ( v196 )
                    {
                      v28 = v180;
                      v27 = v90;
                      v33 = v195;
                      v29 = v201;
                      v32 = v205;
                      v30 = 2;
LABEL_307:
                      v31 = (int)v29;
                      goto LABEL_50;
                    }
                    break;
                  case 'e':
                    v102 = strrchr(v90, 46);
                    v101 = v102;
                    if ( !v102 )
                      goto LABEL_185;
                    goto LABEL_179;
                  case 'h':
                    v106 = strrchr(v90, 47);
                    if ( !v106 )
                      goto LABEL_185;
                    goto LABEL_181;
                  case 'p':
                    ++v187;
                    v91 = v205 + 2;
                    goto LABEL_175;
                  case 'q':
                    v189 = 113;
                    v91 = v205 + 2;
                    goto LABEL_175;
                  case 'r':
                    v106 = strrchr(v90, 46);
                    if ( !v106 )
                      goto LABEL_185;
LABEL_181:
                    *v106 = 0;
                    v91 = v205 + 2;
                    goto LABEL_175;
                  case 't':
                    v100 = strrchr(v90, 47);
                    if ( v100 )
                    {
                      v101 = v100 + 1;
                      v102 = v100 + 1;
LABEL_179:
                      v103 = strlen(v102);
                      v104 = (char *)sub_93028(v103 + 1);
                      v105 = strcpy(v104, v101);
                      sub_297758(v90);
                      v90 = v105;
                      v91 = v205 + 2;
                    }
                    else
                    {
LABEL_185:
                      v91 = v205 + 2;
                    }
                    goto LABEL_175;
                  case 'x':
                    v189 = 120;
                    v91 = v205 + 2;
LABEL_175:
                    v205 = v91;
                    continue;
                  default:
                    v27 = v90;
                    v28 = v180;
                    v29 = v20;
                    v30 = 3;
                    v31 = (int)v20;
                    v32 = v205 + 2;
                    v33 = v205 + 1;
LABEL_50:
                    v34 = sub_29850C(v31, v33, v32, v30);
                    sub_297758(dest);
                    sub_297758(v27);
                    goto LABEL_51;
                }
              }
              v205 = v91 - 1;
              if ( v189 )
              {
                if ( v189 == 113 )
                {
                  v152 = (char *)sub_29B0A8(v90);
                }
                else
                {
                  v141 = v90;
                  v142 = v90;
                  v143 = 3;
                  do
                  {
                    v150 = (unsigned __int8)*v142++;
                    v149 = v150;
                    v151 = v150 - 9;
                    if ( !v150 )
                      break;
                    if ( v149 == 39 )
                    {
                      v143 += 3;
                    }
                    else
                    {
                      v148 = v149 > 0x20;
                      if ( v149 != 32 )
                        v148 = v151 > 1;
                      if ( !v148 )
                        v143 += 2;
                    }
                    ++v143;
                  }
                  while ( v142 );
                  v152 = (char *)sub_93028(v143);
                  v153 = v152 + 1;
                  *v152 = 39;
                  do
                  {
                    v156 = (unsigned __int8)*v141++;
                    v155 = v156;
                    v157 = v156 - 9;
                    if ( !v156 )
                      break;
                    if ( v155 == 39 )
                    {
                      *v153 = 39;
                      v153 += 4;
                      *(v153 - 3) = 92;
                      *(v153 - 2) = 39;
                      *(v153 - 1) = 39;
                    }
                    else
                    {
                      v154 = v155 > 0x20;
                      if ( v155 != 32 )
                        v154 = v157 > 1;
                      if ( v154 )
                      {
                        *v153++ = v155;
                      }
                      else
                      {
                        *v153 = 39;
                        LOBYTE(v155) = *(v141 - 1);
                      }
                      if ( !v154 )
                      {
                        v153[2] = 39;
                        v153[1] = v155;
                        v153 += 3;
                      }
                    }
                  }
                  while ( v141 );
                  *v153 = 39;
                  v153[1] = 0;
                }
                v144 = v90;
                v90 = v152;
                sub_297758(v144);
              }
              v145 = strlen(v90);
              if ( v145 > 0x7F )
                dest = (char *)sub_93050(dest, v145 + 2);
              strcpy(dest, v90);
              sub_297758(v90);
              v23 = v205;
              ++v185;
              if ( *dest )
              {
                v146 = strlen(dest);
                v18 += v146;
                v147 = v146;
                if ( v21 <= v18 )
                {
                  v21 += ((v18 - v21) & 0xFFFFFF80) + 128;
                  v6 = sub_93050(v6, v21);
                }
                strcpy(&v6[v18 - v147], dest);
              }
              v182 = v187 == 1;
              sub_297758(dest);
              goto LABEL_38;
            }
            v205 = v77 + 1;
            v87 = sub_298D24(1, 36, v75);
            if ( v87 )
              goto LABEL_155;
          }
          v168 = (char *)sub_93028(1u);
          *v168 = (char)v87;
          v87 = v168;
          goto LABEL_155;
        }
      }
      if ( _ctype_get_mb_cur_max() <= 1 )
      {
        v96 = v205;
      }
      else
      {
        v96 = v205;
        if ( !dword_48BB60 )
        {
          v171 = sub_29B610(v20, v205, 0);
          if ( v205 )
          {
            v97 = (unsigned __int8)v20[v171];
            v172 = v97 == 34;
            if ( v97 != 34 )
              v172 = v97 == 39;
            if ( v172 )
              goto LABEL_173;
          }
LABEL_172:
          v97 = 0;
LABEL_173:
          v99 = sub_2987BC((int)v20, &v205, v97);
          v74 = v205;
          v75 = v99;
          goto LABEL_133;
        }
      }
      if ( v96 )
      {
        v97 = (unsigned __int8)v20[v96 - 1];
        v98 = v97 == 34;
        if ( v97 != 34 )
          v98 = v97 == 39;
        if ( v98 )
          goto LABEL_173;
      }
      goto LABEL_172;
    }
    if ( (unsigned __int8)byte_48BB34 == v24 )
    {
      v50 = v204;
      if ( !v204 || (v51 = v204, v20[v204 - 1]) && strchr(off_4707B0, (unsigned __int8)v20[v204 - 1]) )
      {
        v52 = (char *)sub_93028(s - v50 + 1);
        v53 = stpcpy(v52, &v20[v204]) - (_DWORD)v52;
        v18 += v53;
        if ( v21 <= v18 )
        {
          v21 += ((v18 - v21) & 0xFFFFFF80) + 128;
          v6 = sub_93050(v6, v21);
        }
        v54 = &v6[v18 - v53];
        v23 = s;
        strcpy(v54, v52);
        sub_297758(v52);
      }
      else
      {
        if ( v21 - 1 <= v18 )
        {
          v21 += 64;
          v95 = sub_93050(v6, v21);
          v51 = v204;
          v6 = v95;
        }
        v6[v18++] = v20[v51];
        v6[v18] = 0;
        v23 = v204;
      }
    }
    else if ( v24 == 39 )
    {
      if ( v179 || !dword_48BB40 )
        goto LABEL_83;
      v62 = v204;
      v63 = v204 <= 0;
      if ( v204 <= 0 )
        v25 = 0;
      else
        v22 = (int)&v20[v204];
      if ( v204 <= 0 )
        v22 = (int)&v20[v204];
      else
        v25 = *(unsigned __int8 *)(v22 - 1);
      ++v204;
      if ( !v63 )
        LOBYTE(v25) = v25 == 36;
      sub_298058((int)v20, &v204, v25);
      v64 = v204 - v62 + 2;
      v65 = (char *)sub_93028(v64);
      v66 = v64;
      v67 = v65;
      v68 = &v65[v64];
      strncpy(v65, (const char *)v22, v66);
      *(v68 - 1) = 0;
      v69 = strlen(v67);
      v18 += v69;
      v70 = v69;
      if ( v21 <= v18 )
      {
        v21 += ((v18 - v21) & 0xFFFFFF80) + 128;
        v6 = sub_93050(v6, v21);
      }
      v22 = 0;
      strcpy(&v6[v18 - v70], v67);
      sub_297758(v67);
      v23 = v204;
    }
    else
    {
      v26 = v21 - 1;
      if ( v24 == 92 )
      {
        if ( v26 <= v18 )
        {
          v21 += 64;
          v6 = sub_93050(v6, v21);
        }
        v6[v18] = 92;
        v6[++v18] = 0;
        v23 = v204;
        v22 = 1;
      }
      else
      {
        if ( v24 != 34 )
        {
          if ( v26 <= v18 )
            goto LABEL_84;
          goto LABEL_48;
        }
        v179 = 1 - v179;
        if ( v26 <= v18 )
        {
          v21 += 64;
          v6 = sub_93050(v6, v21);
        }
        v6[v18] = 34;
        v6[++v18] = 0;
        v23 = v204;
      }
    }
LABEL_38:
    v19 = v23 + 1;
    v204 = v23 + 1;
  }
  while ( v23 + 1 < s );
  *a2 = v6;
  if ( v180 != v20 )
    sub_297758(v20);
  if ( v182 )
    return 2;
  v55 = v185;
  if ( v185 )
    return 1;
  return v55;
}
