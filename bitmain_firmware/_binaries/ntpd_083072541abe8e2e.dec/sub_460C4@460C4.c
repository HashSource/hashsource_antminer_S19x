int __fastcall sub_460C4(int a1)
{
  double v1; // d0
  unsigned __int8 *v3; // r8
  unsigned __int8 *v4; // r2
  int *v5; // r0
  int v6; // r4
  int v7; // r5
  int v8; // r2
  unsigned __int8 *v9; // r11
  _BYTE *v10; // r3
  _BYTE *v11; // r9
  bool v12; // zf
  unsigned int v13; // r2
  unsigned int v14; // t1
  _BYTE *v15; // r2
  unsigned int v16; // t1
  int v17; // r7
  _BYTE *v18; // r2
  _DWORD *v19; // r3
  int v20; // r4
  int v21; // r10
  int v22; // r0
  int v23; // r3
  int v25; // r3
  int v26; // r2
  int v27; // r1
  int v28; // r0
  int v29; // r3
  int v30; // r2
  int v31; // r10
  int v32; // r2
  int v33; // r10
  int v34; // r0
  const char *v35; // r3
  int v36; // r2
  double v38; // r0
  int *v39; // r2
  const char *v40; // r7
  __int16 v41; // r3
  int v42; // r3
  int *v43; // r10
  int v44; // r6
  char v45; // r2
  int v46; // r1
  int v47; // r6
  char v48; // r3
  int v49; // r1
  int v50; // r2
  int v51; // r2
  int v52; // r1
  _DWORD *v53; // r6
  int v54; // r0
  int v55; // r10
  int v56; // r3
  int v57; // r0
  int *v58; // r6
  unsigned __int16 v59; // r0
  int v60; // r6
  unsigned int v61; // r6
  char v62; // r3
  char v63; // r1
  char v64; // r3
  char v65; // r2
  char v66; // r3
  char v67; // r6
  const char *v68; // r2
  size_t v69; // r6
  int v70; // r3
  bool v71; // zf
  const char *v72; // r2
  int v73; // r2
  const char *v74; // r2
  int v75; // r2
  int v76; // r2
  int v77; // r7
  int v78; // r3
  int v79; // r3
  int v80; // r2
  int v81; // r10
  int v82; // r2
  unsigned int v83; // r2
  unsigned int v84; // lr
  int v85; // r12
  int v86; // r3
  int v87; // r0
  int v88; // r1
  const char *v89; // r0
  int v90; // r0
  const char *v91; // r0
  int *v92; // r3
  int v93; // r6
  unsigned __int8 *v94; // r0
  unsigned __int8 *v95; // r2
  int v96; // r0
  int v97; // r1
  char v98; // r2
  int v99; // r3
  bool v100; // zf
  const char *v101; // r2
  int v102; // r0
  int v103; // r2
  int v104; // lr
  int v105; // r0
  int v106; // r1
  unsigned int v107; // r12
  int v108; // r7
  unsigned int v109; // r1
  int v110; // r0
  int v111; // lr
  unsigned int v112; // r1
  int v113; // r7
  int v114; // lr
  unsigned int v115; // r2
  int v116; // r0
  int v117; // r1
  int v118; // r12
  int v119; // r3
  int v120; // r2
  int v121; // lr
  int v122; // r7
  const char *v123; // r0
  const char *v124; // r2
  int v125; // r0
  int v126; // r1
  int v127; // r3
  int v128; // r0
  unsigned int v129; // r12
  int v130; // r1
  int v131; // r1
  int v132; // lr
  unsigned int v133; // r0
  bool v134; // cf
  unsigned int v135; // r0
  int v136; // r1
  int v137; // r3
  char v138; // r2
  const unsigned __int16 **v139; // r0
  unsigned int v140; // r12
  const unsigned __int16 *v141; // lr
  int v142; // t1
  int v143; // [sp+10h] [bp-64h]
  int v144; // [sp+14h] [bp-60h]
  unsigned int v145; // [sp+18h] [bp-5Ch]
  int v146; // [sp+18h] [bp-5Ch]
  int v147; // [sp+18h] [bp-5Ch]
  _DWORD *v148; // [sp+18h] [bp-5Ch]
  int v149; // [sp+18h] [bp-5Ch]
  const char *v150; // [sp+18h] [bp-5Ch]
  int v151; // [sp+18h] [bp-5Ch]
  int v152; // [sp+18h] [bp-5Ch]
  int v153; // [sp+1Ch] [bp-58h]
  _DWORD *v154; // [sp+24h] [bp-50h]
  int v155; // [sp+28h] [bp-4Ch]
  int *v156; // [sp+34h] [bp-40h]
  int v157; // [sp+34h] [bp-40h]
  const char *v158; // [sp+34h] [bp-40h]
  int v159; // [sp+34h] [bp-40h]
  unsigned __int8 *v160; // [sp+34h] [bp-40h]
  int v161; // [sp+38h] [bp-3Ch]
  const char *v162; // [sp+38h] [bp-3Ch]
  unsigned __int16 v163; // [sp+3Ch] [bp-38h]
  char *v164[11]; // [sp+40h] [bp-34h] BYREF

  v3 = (unsigned __int8 *)(a1 + 88);
  v4 = (unsigned __int8 *)(a1 + 88);
  v144 = *(_DWORD *)(a1 + 4);
  v5 = *(int **)(v144 + 84);
  v6 = *v5 + 4096;
  v153 = *v5;
  v143 = v6;
  v7 = *v5 + 7196;
  sub_445B0(v5, "recv", v4, *(_DWORD *)(a1 + 84));
  v8 = *(_DWORD *)(a1 + 84);
  v9 = &v3[v8];
  v10 = (_BYTE *)(v7 + *(_DWORD *)(v6 + 3096));
  if ( v3 != &v3[v8] )
  {
    v11 = v10 + 1599;
    v155 = a1;
    do
    {
      while ( 1 )
      {
        v14 = *v3++;
        v13 = v14;
        if ( v14 != 10 )
        {
          if ( v11 != v10 )
          {
            v12 = v13 == 32;
            if ( v13 <= 0x20 )
              v12 = v7 == (_DWORD)v10;
            if ( !v12 )
              *v10++ = v13;
          }
          goto LABEL_8;
        }
        if ( (_BYTE *)v7 != v10 && (unsigned __int8)*(v10 - 1) <= 0x20u )
        {
          v15 = v10 - 1;
          do
          {
            v10 = v15;
            if ( v15 == (_BYTE *)v7 )
              break;
            v16 = (unsigned __int8)*--v15;
          }
          while ( v16 <= 0x20 );
        }
        v17 = 0;
        v18 = &v10[-v7];
        *v10 = 0;
        v19 = *(_DWORD **)(v144 + 84);
        *(_DWORD *)(v143 + 3096) = v18;
        v20 = *v19;
        v154 = v19;
        v21 = *v19 + 7196;
        v145 = *(_DWORD *)(*v19 + 7192);
        sub_46070(v164);
        v22 = sub_459F4((int *)v164, v20 + 7196, v145, v20 + 192, 0x15Eu);
        if ( v22 > 0 )
        {
          v23 = *(_DWORD *)(v20 + 192);
          *(_DWORD *)(v20 + 184) = v21;
          *(_DWORD *)(v20 + 188) = v22;
          if ( v23 == 1 )
          {
            v25 = v20;
            do
            {
              v26 = *(_DWORD *)(v25 + 200);
              ++v17;
              v27 = *(_DWORD *)(v25 + 196);
              v25 += 20;
              if ( v26 > v27 )
                *(_BYTE *)(*(_DWORD *)(v20 + 184) + v26) = 0;
            }
            while ( v17 < *(_DWORD *)(v20 + 188) );
            v28 = sub_45590((_DWORD *)(v20 + 184), "class", 3);
            if ( v28 != -1 )
            {
              v29 = *(_DWORD *)(v20 + 184);
              v30 = *(_DWORD *)(v20 + 20 * v28 + 196);
              v31 = v29 + v30;
              if ( v29 + v30 )
                break;
            }
          }
        }
        v10 = (_BYTE *)v7;
        ++*(_DWORD *)(v20 + 156);
        if ( v9 == v3 )
          goto LABEL_18;
      }
      v32 = *(unsigned __int8 *)(v29 + v30);
      if ( v32 == 84 )
      {
        if ( *(_BYTE *)(v31 + 1) != 80 || *(_BYTE *)(v31 + 2) != 86 || *(_BYTE *)(v31 + 3) )
          goto LABEL_69;
        v156 = *(int **)(v144 + 84);
        v33 = *v156;
        v146 = sub_4594C((_DWORD *)(v20 + 184), "mode", 0);
        v34 = sub_45590((_DWORD *)(v20 + 184), "time", 3);
        if ( v34 == -1 )
        {
          v36 = *(_BYTE *)(v33 + 133) & 1;
        }
        else
        {
          v36 = *(_BYTE *)(v33 + 133) & 1;
          v35 = (const char *)(*(_DWORD *)(v20 + 184) + *(_DWORD *)(v20 + 20 * v34 + 196));
          if ( v146 > 1 && v35 != 0 )
          {
            *(_BYTE *)(v33 + 132) &= ~1u;
            if ( !v36 )
            {
              v150 = v35;
              ++*(_DWORD *)(v33 + 164);
              sub_44468((int)v156, v35);
              v94 = (unsigned __int8 *)strptime(v150, "%Y-%m-%dT%H:%M:%S", v164);
              v95 = v94;
              if ( !v94 )
                goto LABEL_143;
              v96 = *v94;
              if ( v96 == 46 )
              {
                v160 = v95;
                v139 = _ctype_b_loc();
                v140 = 100000000;
                v141 = *v139;
                v97 = 0;
                v95 = v160;
                while ( 1 )
                {
                  v142 = *++v95;
                  v96 = v142;
                  if ( (v141[v142] & 0x800) == 0 )
                    break;
                  v97 += v140 * (v96 - 48);
                  v140 /= 0xAu;
                }
              }
              else
              {
                v97 = 0;
              }
              if ( v96 == 90 && !v95[1] )
              {
                v159 = v97;
                v152 = sub_663C0(v164);
                v125 = sub_66604(v164);
                v126 = v159;
                v127 = v125 + (_DWORD)&off_15180 * (v152 - 693596);
                if ( v159 < 0 )
                {
                  do
                  {
                    v126 += 1000000000;
                    --v127;
                  }
                  while ( v126 < 0 );
                }
                else if ( v159 > 999999999 )
                {
                  v128 = v127 + 1;
                  if ( v159 - 1000000000 <= 999999999 )
                  {
                    v126 = v159 - 1000000000;
                  }
                  else
                  {
                    v127 += 2;
                    v126 = v159 - 2000027648;
                  }
                  if ( v159 - 1000000000 <= 999999999 )
                    v127 = v128;
                  else
                    v126 += 27648;
                }
                *(_DWORD *)(v33 + 88) = v127;
                *(_DWORD *)(v33 + 92) = sub_8BFD0(500000000, v126, 1000000000, 0);
                v129 = *(_DWORD *)(v33 + 128);
                v130 = *(_DWORD *)(v155 + 76);
                *(_DWORD *)(v33 + 80) = *(_DWORD *)(v155 + 72);
                *(_DWORD *)(v33 + 84) = v130;
                v131 = *(_DWORD *)(v155 + 76);
                v132 = *(_DWORD *)(v33 + 124);
                *(_DWORD *)(v33 + 96) = *(_DWORD *)(v155 + 72);
                *(_DWORD *)(v33 + 100) = v131;
                v133 = *(_DWORD *)(v33 + 100);
                v134 = v133 >= v129;
                v135 = v133 - v129;
                v136 = !v134;
                v137 = *(_DWORD *)(v33 + 96) - v132;
                v138 = *(_BYTE *)(v33 + 132) | 2;
                if ( v136 )
                  --v137;
                *(_DWORD *)(v33 + 100) = v135;
                *(_DWORD *)(v33 + 96) = v137;
                *(_BYTE *)(v33 + 132) = v138;
              }
              else
              {
LABEL_143:
                v98 = *(_BYTE *)(v33 + 132) & 0xFD;
                ++*(_DWORD *)(v33 + 156);
                *(_BYTE *)(v33 + 132) = v98;
              }
            }
            LODWORD(v38) = sub_45590((_DWORD *)(v20 + 184), "ept", 0);
            if ( LODWORD(v38) == -1
              || (v39 = *(int **)(v20 + 184), (v40 = (char *)v39 + *(_DWORD *)(v20 + 20 * LODWORD(v38) + 196)) == 0)
              || (v38 = strtod(v40, v164), v40 == v164[0])
              || *v164[0] )
            {
              v1 = 0.00141421356;
            }
            else
            {
              v1 = fabs(v1) * 0.70710678;
            }
            LODWORD(v38) = v164;
            frexp(v38, v39);
            if ( v1 < 0.25 )
              v164[0] = (char *)0x80000000;
            if ( v1 <= 2.0 )
            {
              v42 = (int)v164[0];
              if ( (int)v164[0] < -32 )
                v42 = -32;
              v41 = v42 & (v42 >> 31);
            }
            else
            {
              v41 = 0;
            }
            *(_WORD *)(v33 + 104) = v41;
            goto LABEL_56;
          }
        }
        if ( !v36 )
          v35 = (const char *)(*(_DWORD *)(v33 + 164) + 1);
        ++*(_DWORD *)(v33 + 160);
        if ( !v36 )
          *(_DWORD *)(v33 + 164) = v35;
        *(_BYTE *)(v33 + 132) = *(_BYTE *)(v33 + 132) & 0xF8 | 1;
      }
      else
      {
        if ( v32 != 80 || *(_BYTE *)(v31 + 1) != 80 || *(_BYTE *)(v31 + 2) != 83 || *(_BYTE *)(v31 + 3) )
        {
LABEL_69:
          v147 = *(_DWORD *)(v20 + 184);
          if ( !strcmp("TOFF", (const char *)v31) )
          {
            v81 = *(_DWORD *)(v144 + 84);
            v44 = *(_DWORD *)v81;
            v82 = *(_DWORD *)(*(_DWORD *)v81 + 164);
            v12 = (*(_BYTE *)(*(_DWORD *)v81 + 132) & 1) == 0;
            v149 = *(_BYTE *)(*(_DWORD *)v81 + 132) & 1;
            *(_BYTE *)(v44 + 133) = *(_BYTE *)(*(_DWORD *)v81 + 133) | 1;
            *(_DWORD *)(v44 + 164) = v82 + 1;
            if ( !v12 )
              goto LABEL_56;
            if ( !sub_45784((_DWORD *)(v44 + 96), (_DWORD *)(v20 + 184), "clock_sec", "clock_nsec", 1)
              || !sub_45784((_DWORD *)(v44 + 88), (_DWORD *)(v20 + 184), "real_sec", "real_nsec", 1) )
            {
LABEL_55:
              ++*(_DWORD *)(v44 + 156);
              goto LABEL_56;
            }
            v83 = *(_DWORD *)(v44 + 100);
            v84 = *(_DWORD *)(v44 + 128);
            v85 = *(_DWORD *)(v44 + 124);
            v86 = *(_DWORD *)(v44 + 96);
            v87 = v149;
            if ( v83 < v84 )
              v87 = 1;
            *(_DWORD *)(v44 + 100) = v83 - v84;
            *(_DWORD *)(v44 + 96) = v86 - v85 - v87;
            v88 = *(_DWORD *)(v155 + 76);
            *(_DWORD *)(v44 + 80) = *(_DWORD *)(v155 + 72);
            *(_DWORD *)(v44 + 84) = v88;
            *(_BYTE *)(v44 + 132) |= 2u;
            v89 = (const char *)sub_69CA0(v44 + 88);
            sub_44468(v81, v89);
          }
          else if ( !strcmp("VERSION", (const char *)v31) )
          {
            v157 = v147;
            v53 = *(_DWORD **)(v144 + 84);
            v148 = v53;
            v54 = sub_45590((_DWORD *)(v20 + 184), "rev", 3);
            v55 = *v53;
            v56 = v157;
            if ( v54 == -1 )
              v158 = "(unknown)";
            else
              v158 = (const char *)(v157 + *(_DWORD *)(v20 + 20 * v54 + 196));
            v161 = v56;
            v57 = sub_45590((_DWORD *)(v20 + 184), "release", 3);
            if ( v57 == -1 )
              v162 = "(unknown)";
            else
              v162 = (const char *)(v161 + *(_DWORD *)(v20 + 20 * v57 + 196));
            v58 = _errno_location();
            *v58 = 0;
            v163 = sub_456C0((_DWORD *)(v20 + 184), "proto_major");
            v59 = sub_456C0((_DWORD *)(v20 + 184), "proto_minor");
            if ( *v58 )
            {
              if ( (v148[192] & 4) != 0 )
                goto LABEL_149;
              v99 = *(_DWORD *)(v55 + 180);
              v100 = v99 == 0;
              if ( v99 )
                v100 = v99 == 3600;
              if ( v100 )
              {
LABEL_149:
                v101 = *(const char **)(v55 + 20);
                *(_DWORD *)(v55 + 180) = 3600;
                sub_64E00(6, "%s: could not evaluate version data", v101);
              }
            }
            else
            {
              v60 = v59;
              if ( (*(_BYTE *)(v55 + 132) & 0x20) == 0 )
                sub_64E00(
                  6,
                  "%s: GPSD revision=%s release=%s protocol=%u.%u",
                  *(const char **)(v55 + 20),
                  v158,
                  v162,
                  v163,
                  v59);
              v61 = v60 | (v163 << 16);
              v62 = *(_BYTE *)(v55 + 132);
              v63 = *(_BYTE *)(v55 + 133);
              *(_DWORD *)(v55 + 28) = v61;
              v64 = v62 | 0x20;
              if ( v61 > (unsigned int)&loc_30008 )
                v65 = -1;
              else
                v65 = 0;
              v66 = v64 & 0x7F | ((v65 & 1) << 7);
              *(_BYTE *)(v55 + 132) = v66;
              if ( v61 > 0x30009 )
                v67 = -1;
              else
                v67 = 0;
              *(_BYTE *)(v55 + 133) = v63 & 0xFE | v67 & 1;
              if ( (v66 & 0x40) == 0 )
              {
                v68 = (*(_BYTE *)(v55 + 133) & 1) != 0 ? ",\"pps\":true" : byte_97F7C;
                sub_6C054(
                  v55 + 7196,
                  1600,
                  "?WATCH={\"device\":\"%s\",\"enable\":true,\"json\":true%s};\r\n",
                  *(const char **)(v55 + 24),
                  v68);
                v69 = strlen((const char *)(v55 + 7196));
                sub_445B0(*(int **)(v144 + 84), "send", (unsigned __int8 *)(v55 + 7196), v69);
                if ( v69 != write(v148[7], (const void *)(v55 + 7196), v69) )
                {
                  if ( (v148[192] & 4) != 0 )
                    goto LABEL_95;
                  v70 = *(_DWORD *)(v55 + 180);
                  v71 = v70 == 0;
                  if ( v70 )
                    v71 = v70 == 3600;
                  if ( v71 )
                  {
LABEL_95:
                    v72 = *(const char **)(v55 + 20);
                    *(_DWORD *)(v55 + 180) = 3600;
                    sub_64E00(3, "%s: failed to write watch request (%m)", v72);
                  }
                }
              }
            }
          }
          else
          {
            if ( strcmp("WATCH", (const char *)v31) )
              goto LABEL_72;
            v90 = sub_45590((_DWORD *)(v20 + 184), "device", 3);
            if ( v90 != -1 )
            {
              v91 = (const char *)(v147 + *(_DWORD *)(v20 + 20 * v90 + 196));
              if ( v91 )
              {
                v92 = *(int **)(v144 + 84);
                v93 = *v92;
                if ( !strcmp(v91, *(const char **)(*v92 + 24)) )
                {
                  if ( sub_458B8((_DWORD *)(v20 + 184), "enable") <= 0 || sub_458B8((_DWORD *)(v20 + 184), "json") <= 0 )
                    *(_BYTE *)(v93 + 132) &= ~0x40u;
                  else
                    *(_BYTE *)(v93 + 132) |= 0x40u;
                }
              }
            }
          }
          goto LABEL_56;
        }
        v43 = *(int **)(v144 + 84);
        v44 = *v43;
        v45 = *(_BYTE *)(*v43 + 132);
        ++*(_DWORD *)(*v43 + 172);
        if ( (v45 & 1) == 0 )
        {
          v46 = *(_DWORD *)(v155 + 76);
          *(_DWORD *)(v44 + 32) = *(_DWORD *)(v155 + 72);
          *(_DWORD *)(v44 + 36) = v46;
          if ( v45 < 0 )
          {
            if ( !sub_45784((_DWORD *)(v44 + 64), (_DWORD *)(v20 + 184), "clock_sec", "clock_nsec", 1) )
              goto LABEL_55;
            v151 = v44 + 56;
            if ( !sub_45784((_DWORD *)(v44 + 56), (_DWORD *)(v20 + 184), "real_sec", "real_nsec", 1) )
              goto LABEL_55;
          }
          else
          {
            if ( !sub_45784((_DWORD *)(v44 + 64), (_DWORD *)(v20 + 184), "clock_sec", "clock_musec", 1000) )
              goto LABEL_55;
            v151 = v44 + 56;
            if ( !sub_45784((_DWORD *)(v44 + 56), (_DWORD *)(v20 + 184), "real_sec", "real_musec", 1000) )
              goto LABEL_55;
          }
          v102 = sub_4594C((_DWORD *)(v20 + 184), "precision", *(__int16 *)(v44 + 104));
          v103 = -32;
          v104 = *(_DWORD *)(v44 + 108);
          if ( v102 >= -32 )
            v103 = v102;
          v105 = *(_DWORD *)(v44 + 64);
          v106 = *(_DWORD *)(v44 + 68);
          v107 = *(_DWORD *)(v44 + 112);
          *(_WORD *)(v44 + 106) = v103 & (v103 >> 31);
          v108 = v105 - v104;
          *(_DWORD *)(v44 + 48) = v105;
          *(_DWORD *)(v44 + 52) = v106;
          v109 = *(_DWORD *)(v44 + 52);
          v110 = *(_DWORD *)(v44 + 64);
          v111 = *(_DWORD *)(v44 + 116);
          if ( v109 < v107 )
            --v108;
          v112 = v109 - v107;
          *(_DWORD *)(v44 + 48) = v108;
          v113 = v108 + (v112 >> 31);
          v114 = v110 - v111;
          v115 = *(_DWORD *)(v44 + 120);
          *(_DWORD *)(v44 + 52) = v112;
          v116 = *(_DWORD *)(v44 + 48);
          v117 = *(_DWORD *)(v44 + 52);
          v118 = *(_DWORD *)(v44 + 8);
          if ( *(_DWORD *)(v44 + 68) < v115 )
            v119 = v114 - 1;
          else
            v119 = v114;
          v120 = *(_DWORD *)(v44 + 68);
          v121 = *(_DWORD *)(v44 + 120);
          *(_DWORD *)(v44 + 64) = v119;
          *(_DWORD *)(v44 + 68) = v120 - v121;
          v43[58] = v116;
          v43[59] = v117;
          *(_DWORD *)(v44 + 40) = v113;
          *(_DWORD *)(v44 + 44) = 0;
          if ( v118 )
          {
            v122 = *(_DWORD *)(v118 + 84);
            v123 = (const char *)sub_69CA0(v151);
            sub_44468(v122, v123);
          }
          *(_BYTE *)(v44 + 132) = *(_BYTE *)(v44 + 132) & 0xFB
                                | (4 * (((*((unsigned __int8 *)v43 + 768) ^ 2) << 30 >> 31) & 1))
                                | 8;
        }
      }
LABEL_56:
      v47 = *(_DWORD *)(v20 + 8);
      v48 = *(_BYTE *)(v20 + 132);
      ++*(_DWORD *)(v20 + 152);
      if ( v47 && (v48 & 8) != 0 )
      {
        v77 = *(_DWORD *)(v47 + 84);
        sub_443C4((__int16 *)v47, (_DWORD *)v77, *(_DWORD *)(v20 + 56), *(_DWORD *)(v20 + 60));
        *(_BYTE *)(v47 + 95) = *(_WORD *)(v20 + 106);
        v78 = *(_DWORD *)(v20 + 76);
        if ( v78 >= 8 )
          v78 = 8;
        v79 = v78 + 2;
        *(_DWORD *)(v20 + 76) = v79;
        if ( v79 == 10 && (*(_BYTE *)(v77 + 768) & 1) != 0 )
          *(_DWORD *)(v47 + 68) |= 0x80u;
        v80 = *(_DWORD *)(v20 + 176) + 1;
        v48 = *(_BYTE *)(v20 + 132) & 0xF7;
        *(_BYTE *)(v20 + 132) = v48;
        *(_DWORD *)(v20 + 176) = v80;
      }
      v49 = *(_DWORD *)(v20 + 16);
      if ( (v48 & 6) != 6 )
      {
        if ( v49 == 1 )
          goto LABEL_72;
        goto LABEL_60;
      }
      v76 = *(_DWORD *)(v20 + 80) - *(_DWORD *)(v20 + 32);
      if ( *(_DWORD *)(v20 + 84) < *(_DWORD *)(v20 + 36) )
        --v76;
      if ( v76 <= 0 )
      {
        if ( !v76 )
        {
          if ( v49 == 1 )
            goto LABEL_68;
          goto LABEL_60;
        }
        *(_BYTE *)(v20 + 132) &= ~2u;
      }
      else
      {
        *(_BYTE *)(v20 + 132) &= ~4u;
      }
      v48 = *(_BYTE *)(v20 + 132);
      if ( v49 == 1 )
        goto LABEL_67;
LABEL_60:
      if ( v49 != 2 )
        goto LABEL_102;
      if ( (v48 & 2) == 0 )
        goto LABEL_72;
      v50 = *(_DWORD *)(v20 + 72);
      if ( (v48 & 4) == 0 )
      {
        if ( v50 < 1 )
          v50 = 1;
        v73 = v50 - 1;
        *(_DWORD *)(v20 + 72) = v73;
        if ( !v73 )
        {
          if ( (v48 & 0x10) != 0 )
            goto LABEL_103;
          v74 = *(const char **)(v20 + 20);
          *(_BYTE *)(v20 + 132) |= 0x10u;
          sub_64E00(4, "%s: use TPV alone from now", v74);
LABEL_101:
          v48 = *(_BYTE *)(v20 + 132);
          if ( (v48 & 0x10) != 0 )
          {
LABEL_102:
            if ( (v48 & 2) != 0 )
            {
LABEL_103:
              sub_443C4((__int16 *)v144, v154, *(_DWORD *)(v20 + 88), *(_DWORD *)(v20 + 92));
              v10 = (_BYTE *)v7;
              *(_BYTE *)(v144 + 95) = *(_WORD *)(v20 + 104);
              v75 = *(_DWORD *)(v20 + 168) + 1;
              *(_BYTE *)(v20 + 132) &= ~2u;
              *(_DWORD *)(v20 + 168) = v75;
              continue;
            }
LABEL_72:
            v10 = (_BYTE *)v7;
            continue;
          }
          goto LABEL_67;
        }
LABEL_66:
        if ( (v48 & 0x10) != 0 )
          goto LABEL_103;
        goto LABEL_67;
      }
      if ( v50 >= 57 )
        v50 = 57;
      v51 = v50 + 3;
      *(_DWORD *)(v20 + 72) = v51;
      if ( v51 != 60 )
        goto LABEL_66;
      if ( (v48 & 0x10) != 0 )
      {
        v124 = *(const char **)(v20 + 20);
        *(_BYTE *)(v20 + 132) &= ~0x10u;
        sub_64E00(6, "%s: expect valid PPS from now", v124);
        goto LABEL_101;
      }
LABEL_67:
      if ( (v48 & 6) != 6 )
        goto LABEL_72;
LABEL_68:
      sub_443C4((__int16 *)v144, v154, *(_DWORD *)(v20 + 88), *(_DWORD *)(v20 + 92));
      v10 = (_BYTE *)v7;
      *(_BYTE *)(v144 + 95) = *(_WORD *)(v20 + 106);
      v52 = *(_DWORD *)(v20 + 168) + 1;
      *(_BYTE *)(v20 + 132) &= 0xF9u;
      *(_DWORD *)(v20 + 168) = v52;
LABEL_8:
      ;
    }
    while ( v9 != v3 );
  }
LABEL_18:
  *(_DWORD *)(v143 + 3096) = &v10[-v7];
  *(_DWORD *)(v153 + 144) = 10;
  return 10;
}
