char *__fastcall sub_46F8C(_DWORD *a1)
{
  double v1; // d0
  unsigned __int8 *v3; // r5
  unsigned __int8 *v4; // r2
  int v5; // r3
  int *v6; // r0
  int v7; // r6
  unsigned __int8 *v8; // r10
  int v9; // r3
  int v10; // r2
  _BYTE *v11; // r3
  _BYTE *v12; // r2
  _BYTE *v13; // r9
  _BYTE *v14; // r11
  unsigned int v15; // r2
  unsigned int v16; // t1
  _BYTE *v17; // r2
  _BYTE *v18; // r2
  unsigned int v19; // r1
  int v20; // r4
  _DWORD *v21; // r3
  int v22; // r6
  int v23; // r0
  int v24; // r3
  char *result; // r0
  int v26; // r3
  int v27; // r2
  int v28; // r1
  int v29; // r0
  int v30; // r7
  int v31; // r2
  int v32; // r4
  int v33; // r2
  int *v34; // r8
  int v35; // r4
  char v36; // r1
  int v37; // r1
  _DWORD *v38; // r0
  int v39; // r4
  char v40; // r3
  int v41; // r7
  int v42; // r2
  int v43; // r0
  int v44; // r2
  int v45; // r2
  int v46; // r2
  int v47; // r4
  int v48; // r0
  const char *v49; // r0
  char v50; // r3
  unsigned int v51; // lr
  int v52; // r2
  int v53; // r3
  unsigned int v54; // r0
  int v55; // r2
  int v56; // r3
  int v57; // r1
  char v58; // r3
  const char *v59; // r0
  int *v60; // r4
  int v61; // r7
  int v62; // r0
  const char *v63; // r3
  char v65; // r1
  double v66; // r0
  int *v67; // r2
  const char *v68; // r4
  __int16 v69; // r3
  int v70; // r12
  int v71; // r2
  int v72; // r3
  int v73; // r3
  int v74; // r3
  int v75; // r3
  int v76; // r2
  char v77; // r3
  _DWORD *v78; // r4
  int v79; // r0
  int v80; // r8
  int v81; // r0
  int *v82; // r0
  int *v83; // r4
  unsigned __int16 v84; // r7
  unsigned __int16 v85; // r0
  int v86; // r4
  unsigned int v87; // r4
  char v88; // r2
  char v89; // r3
  char v90; // r2
  char v91; // r4
  const char *v92; // r2
  size_t v93; // r7
  int v94; // r3
  bool v95; // zf
  const char *v96; // r2
  int v97; // r1
  int v98; // r0
  __int16 v99; // r3
  int *v100; // r7
  unsigned int v101; // lr
  int v102; // r12
  int v103; // r0
  unsigned int v104; // r12
  int v105; // r2
  int v106; // r0
  unsigned int v107; // r1
  int v108; // r3
  unsigned int v109; // r2
  int v110; // r3
  int v111; // r2
  int v112; // r3
  int v113; // r0
  int v114; // r1
  int v115; // r3
  int v116; // r12
  int v117; // r0
  int v118; // r1
  unsigned int v119; // r1
  int v120; // r3
  int v121; // r7
  const char *v122; // r0
  const char *v123; // r2
  unsigned __int8 *v124; // r0
  unsigned __int8 *v125; // r2
  int v126; // r0
  int v127; // r4
  char v128; // r2
  int v129; // r0
  const char *v130; // r1
  int v131; // r2
  int v132; // r3
  int v133; // r3
  bool v134; // zf
  int v135; // r2
  signed int v136; // r3
  __int64 v137; // r0
  int v138; // r0
  int v139; // r2
  char v140; // r4
  int v141; // r1
  int v142; // r0
  int v143; // r1
  unsigned int v144; // r3
  unsigned int v145; // r2
  int v146; // r3
  const unsigned __int16 **v147; // r0
  unsigned int v148; // r1
  const unsigned __int16 *v149; // lr
  int v150; // [sp+0h] [bp-8Ch]
  int v151; // [sp+4h] [bp-88h]
  unsigned int v152; // [sp+14h] [bp-78h]
  _DWORD *v153; // [sp+14h] [bp-78h]
  int v154; // [sp+18h] [bp-74h]
  int v155; // [sp+1Ch] [bp-70h]
  _DWORD *v156; // [sp+20h] [bp-6Ch]
  int v157; // [sp+24h] [bp-68h]
  int v158; // [sp+28h] [bp-64h]
  int v160; // [sp+4Ch] [bp-40h]
  int v161; // [sp+4Ch] [bp-40h]
  _DWORD *v162; // [sp+4Ch] [bp-40h]
  int v163; // [sp+4Ch] [bp-40h]
  const char *v164; // [sp+4Ch] [bp-40h]
  int v165; // [sp+4Ch] [bp-40h]
  int v166; // [sp+4Ch] [bp-40h]
  unsigned __int8 *v167; // [sp+4Ch] [bp-40h]
  const char *v168; // [sp+50h] [bp-3Ch]
  const char *v169; // [sp+54h] [bp-38h]
  char *v170[13]; // [sp+58h] [bp-34h] BYREF

  v3 = (unsigned __int8 *)(a1 + 22);
  v4 = (unsigned __int8 *)(a1 + 22);
  v5 = a1[21];
  v154 = a1[1];
  v6 = *(int **)(v154 + 84);
  v7 = *v6;
  v157 = *v6;
  v155 = *v6 + 4096;
  sub_453FC(v6, "recv", v4, v5);
  v8 = &v3[a1[21]];
  v9 = v7 + *(_DWORD *)(v7 + 7192) + 7192;
  v10 = v9 + 1600;
  v11 = (_BYTE *)(v9 + 4);
  v12 = (_BYTE *)(v10 + 3);
  if ( v3 != v8 )
  {
    v13 = v12;
    v14 = (_BYTE *)(v157 + 7196);
    v158 = v157 + 7196;
    while ( 1 )
    {
      while ( 1 )
      {
        v16 = *v3++;
        v15 = v16;
        if ( v16 == 10 )
          break;
        if ( v11 != v13 && (v15 > 0x20 || v14 != v11) )
          *v11++ = v15;
        if ( v8 == v3 )
          goto LABEL_21;
      }
      if ( v14 == v11 )
      {
        v17 = 0;
        v11 = (_BYTE *)(v157 + 7196);
      }
      else if ( (unsigned __int8)*(v11 - 1) > 0x20u )
      {
LABEL_22:
        v17 = (_BYTE *)(v11 - v14);
      }
      else
      {
        v18 = v11 - 1;
        while ( 1 )
        {
          v11 = v18;
          if ( v18 == v14 )
            break;
          v19 = (unsigned __int8)*--v18;
          if ( v19 > 0x20 )
            goto LABEL_22;
        }
        v11 = (_BYTE *)(v157 + 7196);
        v17 = 0;
      }
      v20 = 0;
      *v11 = 0;
      v21 = *(_DWORD **)(v154 + 84);
      *(_DWORD *)(v155 + 3096) = v17;
      v22 = *v21;
      v156 = v21;
      v152 = *(_DWORD *)(*v21 + 7192);
      sub_46F38(v170);
      v23 = sub_46890((unsigned int *)v170, v22 + 7196, v152, v22 + 192, 0x15Eu);
      if ( v23 <= 0 )
        goto LABEL_19;
      v24 = *(_DWORD *)(v22 + 192);
      *(_DWORD *)(v22 + 184) = v22 + 7196;
      *(_DWORD *)(v22 + 188) = v23;
      if ( v24 != 1 )
        goto LABEL_19;
      v26 = v22;
      do
      {
        v27 = *(_DWORD *)(v26 + 200);
        ++v20;
        v28 = *(_DWORD *)(v26 + 196);
        v26 += 20;
        if ( v27 > v28 )
          *(_BYTE *)(*(_DWORD *)(v22 + 184) + v27) = 0;
      }
      while ( v20 < *(_DWORD *)(v22 + 188) );
      v153 = (_DWORD *)(v22 + 184);
      v29 = sub_463FC((_DWORD *)(v22 + 184), "class", 3);
      if ( v29 == -1 || (v30 = *(_DWORD *)(v22 + 184), v31 = *(_DWORD *)(v22 + 20 * v29 + 196), (v32 = v30 + v31) == 0) )
      {
LABEL_19:
        ++*(_DWORD *)(v22 + 156);
        goto LABEL_20;
      }
      v33 = *(unsigned __int8 *)(v30 + v31);
      if ( v33 == 84 )
      {
        if ( *(_BYTE *)(v32 + 1) == 80 && *(_BYTE *)(v32 + 2) == 86 && !*(_BYTE *)(v32 + 3) )
        {
          v60 = *(int **)(v154 + 84);
          v61 = *v60;
          v161 = sub_467E4(v153, "mode", 0);
          v62 = sub_463FC(v153, "time", 3);
          if ( v62 != -1 )
          {
            v63 = (const char *)(*(_DWORD *)(v22 + 184) + *(_DWORD *)(v22 + 20 * v62 + 196));
            if ( v161 > 1 && v63 != 0 )
            {
              v65 = *(_BYTE *)(v61 + 133);
              *(_BYTE *)(v61 + 132) &= ~1u;
              if ( (v65 & 1) == 0 )
              {
                v164 = v63;
                ++*(_DWORD *)(v61 + 164);
                sub_452A0((int)v60, v63);
                v124 = (unsigned __int8 *)strptime(v164, "%Y-%m-%dT%H:%M:%S", v170);
                v125 = v124;
                if ( !v124 )
                  goto LABEL_167;
                v126 = *v124;
                if ( v126 == 46 )
                {
                  v167 = v125;
                  v147 = _ctype_b_loc();
                  v148 = 100000000;
                  v127 = 0;
                  v149 = *v147;
                  while ( 1 )
                  {
                    v126 = *++v167;
                    if ( (v149[v126] & 0x800) == 0 )
                      break;
                    v127 += (v126 - 48) * v148;
                    v148 /= 0xAu;
                  }
                  v125 = v167;
                }
                else
                {
                  v127 = 0;
                }
                if ( v126 == 90 && !v125[1] )
                {
                  v165 = sub_673C8(v170);
                  v135 = sub_6760C(v170) + 86400 * (v165 - 693596);
                  if ( v127 < 0 )
                  {
                    v136 = v127;
                    do
                    {
                      --v135;
                      v136 += 1000000000;
                    }
                    while ( v136 < 0 );
                  }
                  else if ( v127 > 999999999 )
                  {
                    v136 = v127 - 1000000000;
                    if ( v127 - 1000000000 <= 999999999 )
                    {
                      ++v135;
                    }
                    else
                    {
                      v135 += 2;
                      v136 = 27648;
                    }
                    if ( v127 - 1000000000 > 999999999 )
                    {
                      HIWORD(v136) = -30518;
                      v136 += v127;
                    }
                  }
                  else
                  {
                    v136 = v127;
                  }
                  *(_DWORD *)(v61 + 88) = v135;
                  v137 = vshld_n_s64(vshrd_n_s64(vdup_n_s32(v136).n64_i64[0], 0x20u), 0x20u) + 500000000;
                  v138 = sub_8D518(v137, HIDWORD(v137), 1000000000, 0);
                  v139 = *(_DWORD *)(v61 + 128);
                  v166 = *(_DWORD *)(v61 + 124);
                  v140 = *(_BYTE *)(v61 + 132) | 2;
                  *(_DWORD *)(v61 + 92) = v138;
                  v141 = a1[19];
                  *(_DWORD *)(v61 + 80) = a1[18];
                  *(_DWORD *)(v61 + 84) = v141;
                  v142 = a1[18];
                  v143 = a1[19];
                  *(_DWORD *)(v61 + 96) = v142;
                  *(_DWORD *)(v61 + 100) = v143;
                  v144 = *(_DWORD *)(v61 + 100);
                  v145 = v144 - v139;
                  *(_BYTE *)(v61 + 132) = v140;
                  *(_DWORD *)(v61 + 100) = v145;
                  if ( v144 < v145 )
                    v146 = v142 - v166 - 1;
                  else
                    v146 = v142 - v166;
                  *(_DWORD *)(v61 + 96) = v146;
                }
                else
                {
LABEL_167:
                  v128 = *(_BYTE *)(v61 + 132);
                  ++*(_DWORD *)(v61 + 156);
                  *(_BYTE *)(v61 + 132) = v128 & 0xFD;
                }
              }
              LODWORD(v66) = sub_463FC(v153, "ept", 0);
              if ( LODWORD(v66) == -1
                || (v67 = (int *)(v22 + 20 * LODWORD(v66)), (v68 = (const char *)(*(_DWORD *)(v22 + 184) + v67[49])) == 0)
                || (v66 = strtod(v68, v170), v68 == v170[0])
                || *v170[0] )
              {
                v1 = 0.00141421356;
              }
              else
              {
                v1 = fabs(v1) * 0.70710678;
              }
              LODWORD(v66) = v170;
              frexp(v66, v67);
              if ( v1 >= 0.25 )
              {
                if ( v1 > 2.0 || (int)v170[0] > 0 )
                {
LABEL_83:
                  v69 = 0;
                }
                else
                {
                  if ( (int)v170[0] < -32 )
                    goto LABEL_89;
                  v69 = (__int16)v170[0];
                }
              }
              else
              {
                v170[0] = (char *)0x80000000;
                if ( v1 > 2.0 )
                  goto LABEL_83;
LABEL_89:
                v69 = -32;
              }
              *(_WORD *)(v61 + 104) = v69;
              goto LABEL_38;
            }
          }
          v77 = *(_BYTE *)(v61 + 133);
          ++*(_DWORD *)(v61 + 160);
          if ( (v77 & 1) == 0 )
            ++*(_DWORD *)(v61 + 164);
          *(_BYTE *)(v61 + 132) = *(_BYTE *)(v61 + 132) & 0xF8 | 1;
          goto LABEL_38;
        }
      }
      else if ( v33 == 80 && *(_BYTE *)(v32 + 1) == 80 && *(_BYTE *)(v32 + 2) == 83 && !*(_BYTE *)(v32 + 3) )
      {
        v34 = *(int **)(v154 + 84);
        v35 = *v34;
        v36 = *(_BYTE *)(*v34 + 132);
        ++*(_DWORD *)(*v34 + 172);
        if ( (v36 & 1) == 0 )
        {
          v95 = (v36 & 0x80) == 0;
          v37 = a1[19];
          *(_DWORD *)(v35 + 32) = a1[18];
          *(_DWORD *)(v35 + 36) = v37;
          v38 = (_DWORD *)(v35 + 64);
          if ( v95 )
          {
            if ( !sub_46608(v38, v153, "clock_sec", "clock_musec", 1000) )
              goto LABEL_37;
            v163 = v35 + 56;
            if ( !sub_46608((_DWORD *)(v35 + 56), v153, "real_sec", "real_musec", 1000) )
              goto LABEL_37;
          }
          else
          {
            if ( !sub_46608(v38, v153, "clock_sec", "clock_nsec", 1) )
              goto LABEL_37;
            v163 = v35 + 56;
            if ( !sub_46608((_DWORD *)(v35 + 56), v153, "real_sec", "real_nsec", 1) )
              goto LABEL_37;
          }
          v98 = sub_467E4(v153, "precision", *(__int16 *)(v35 + 104));
          if ( v98 <= 0 )
          {
            if ( v98 < -32 )
              v99 = -32;
            else
              v99 = v98;
          }
          else
          {
            v99 = 0;
          }
          v100 = (int *)(v35 + 48);
          v101 = *(_DWORD *)(v35 + 68);
          v102 = *(_DWORD *)(v35 + 120);
          v103 = *(_DWORD *)(v35 + 64);
          *(_WORD *)(v35 + 106) = v99;
          v104 = v101 - v102;
          v105 = *(_DWORD *)(v35 + 112);
          *(_DWORD *)(v35 + 48) = v103;
          *(_DWORD *)(v35 + 52) = v101;
          v106 = *(_DWORD *)(v35 + 108);
          v107 = *(_DWORD *)(v35 + 52);
          v108 = *(_DWORD *)(v35 + 48);
          v109 = v107 - v105;
          *(_DWORD *)(v35 + 52) = v109;
          v110 = v108 - v106;
          if ( v107 < v109 )
            v111 = v110 - 1;
          else
            v111 = v110;
          v112 = *(_DWORD *)(v35 + 116);
          *(_DWORD *)(v35 + 48) = v111;
          v113 = *v100;
          v114 = *(_DWORD *)(v35 + 52);
          v115 = *(_DWORD *)(v35 + 64) - v112;
          *(_DWORD *)(v35 + 68) = v104;
          if ( v101 < v104 )
            --v115;
          *(_DWORD *)(v35 + 64) = v115;
          v116 = *(_DWORD *)(v35 + 8);
          v34[58] = v113;
          v34[59] = v114;
          v117 = *v100;
          v118 = *(_DWORD *)(v35 + 52);
          *(_DWORD *)(v35 + 40) = *v100;
          *(_DWORD *)(v35 + 44) = v118;
          v119 = *(_DWORD *)(v35 + 44);
          *(_DWORD *)(v35 + 44) = 0;
          if ( v119 >= 0x80000000 )
            v120 = v117 + 1;
          else
            v120 = v117;
          *(_DWORD *)(v35 + 40) = v120;
          if ( v116 )
          {
            v121 = *(_DWORD *)(v116 + 84);
            v122 = (const char *)sub_6AC20(v163);
            sub_452A0(v121, v122);
          }
          *(_BYTE *)(v35 + 132) = *(_BYTE *)(v35 + 132) & 0xFB
                                | (4 * (((*((unsigned __int8 *)v34 + 768) ^ 2) << 30 >> 31) & 1))
                                | 8;
        }
        goto LABEL_38;
      }
      if ( !strcmp("TOFF", (const char *)v32) )
      {
        v35 = **(_DWORD **)(v154 + 84);
        v160 = *(_DWORD *)(v154 + 84);
        v95 = (*(_BYTE *)(v35 + 132) & 1) == 0;
        v50 = *(_BYTE *)(v35 + 133);
        ++*(_DWORD *)(v35 + 164);
        *(_BYTE *)(v35 + 133) = v50 | 1;
        if ( !v95 )
          goto LABEL_38;
        if ( !sub_46608((_DWORD *)(v35 + 96), v153, "clock_sec", "clock_nsec", 1)
          || !sub_46608((_DWORD *)(v35 + 88), v153, "real_sec", "real_nsec", 1) )
        {
LABEL_37:
          ++*(_DWORD *)(v35 + 156);
          goto LABEL_38;
        }
        v51 = *(_DWORD *)(v35 + 100);
        v52 = *(_DWORD *)(v35 + 96);
        v53 = *(_DWORD *)(v35 + 124);
        v54 = v51 - *(_DWORD *)(v35 + 128);
        *(_DWORD *)(v35 + 100) = v54;
        v55 = v52 - v53;
        if ( v51 < v54 )
          v56 = v55 - 1;
        else
          v56 = v55;
        *(_DWORD *)(v35 + 96) = v56;
        v57 = a1[19];
        v58 = *(_BYTE *)(v35 + 132);
        *(_DWORD *)(v35 + 80) = a1[18];
        *(_DWORD *)(v35 + 84) = v57;
        *(_BYTE *)(v35 + 132) = v58 | 2;
        v59 = (const char *)sub_6AC20(v35 + 88);
        sub_452A0(v160, v59);
      }
      else if ( !strcmp("VERSION", (const char *)v32) )
      {
        v78 = *(_DWORD **)(v154 + 84);
        v162 = v78;
        v79 = sub_463FC(v153, "rev", 3);
        v80 = *v78;
        if ( v79 == -1 )
          v168 = "(unknown)";
        else
          v168 = (const char *)(v30 + *(_DWORD *)(v22 + 20 * v79 + 196));
        v81 = sub_463FC(v153, "release", 3);
        if ( v81 == -1 )
          v169 = "(unknown)";
        else
          v169 = (const char *)(v30 + *(_DWORD *)(v22 + 20 * v81 + 196));
        v82 = _errno_location();
        *v82 = 0;
        v83 = v82;
        v84 = sub_46544(v153, "proto_major");
        v85 = sub_46544(v153, "proto_minor");
        if ( *v83 )
        {
          if ( (v162[192] & 4) != 0 )
            goto LABEL_161;
          v133 = *(_DWORD *)(v80 + 180);
          v134 = v133 == 3600;
          if ( v133 != 3600 )
            v134 = v133 == 0;
          if ( v134 )
          {
LABEL_161:
            v123 = *(const char **)(v80 + 20);
            *(_DWORD *)(v80 + 180) = 3600;
            sub_65D40(6, "%s: could not evaluate version data", v123);
          }
        }
        else
        {
          v86 = v85;
          if ( (*(_BYTE *)(v80 + 132) & 0x20) == 0 )
            sub_65D40(
              6,
              "%s: GPSD revision=%s release=%s protocol=%u.%u",
              *(const char **)(v80 + 20),
              v168,
              v169,
              v84,
              v85);
          v87 = v86 | (v84 << 16);
          if ( v87 > 0x30008 )
            v88 = -1;
          else
            v88 = 0;
          v89 = *(_BYTE *)(v80 + 132) & 0x5F | 0x20 | ((v88 & 1) << 7);
          *(_DWORD *)(v80 + 28) = v87;
          v90 = *(_BYTE *)(v80 + 133);
          if ( v87 > (unsigned int)&loc_30008 )
            v91 = -1;
          else
            v91 = 0;
          *(_BYTE *)(v80 + 132) = v89;
          *(_BYTE *)(v80 + 133) = v90 & 0xFE | v91 & 1;
          if ( (v89 & 0x40) == 0 )
          {
            v92 = (*(_BYTE *)(v80 + 133) & 1) != 0 ? ",\"pps\":true" : byte_99528;
            sub_6D00C(
              v80 + 7196,
              1600,
              "?WATCH={\"device\":\"%s\",\"enable\":true,\"json\":true%s};\r\n",
              *(const char **)(v80 + 24),
              v92);
            v93 = strlen((const char *)(v80 + 7196));
            sub_453FC(*(int **)(v154 + 84), "send", (unsigned __int8 *)(v80 + 7196), v93);
            if ( v93 != write(v162[7], (const void *)(v80 + 7196), v93) )
            {
              if ( (v162[192] & 4) != 0 )
                goto LABEL_133;
              v94 = *(_DWORD *)(v80 + 180);
              v95 = v94 == 3600;
              if ( v94 != 3600 )
                v95 = v94 == 0;
              if ( v95 )
              {
LABEL_133:
                v96 = *(const char **)(v80 + 20);
                *(_DWORD *)(v80 + 180) = 3600;
                sub_65D40(3, "%s: failed to write watch request (%m)", v96);
              }
            }
          }
        }
      }
      else
      {
        if ( strcmp("WATCH", (const char *)v32) )
          goto LABEL_20;
        v47 = **(_DWORD **)(v154 + 84);
        v48 = sub_463FC(v153, "device", 3);
        if ( v48 != -1 )
        {
          v49 = (const char *)(v30 + *(_DWORD *)(v22 + 20 * v48 + 196));
          if ( v49 )
          {
            if ( !strcmp(v49, *(const char **)(v47 + 24)) )
            {
              if ( sub_46750(v153, "enable") <= 0 || sub_46750(v153, "json") <= 0 )
                *(_BYTE *)(v47 + 132) &= ~0x40u;
              else
                *(_BYTE *)(v47 + 132) |= 0x40u;
            }
          }
        }
      }
LABEL_38:
      v39 = *(_DWORD *)(v22 + 8);
      ++*(_DWORD *)(v22 + 152);
      v40 = *(_BYTE *)(v22 + 132);
      if ( v39 )
      {
        v41 = *(_DWORD *)(v39 + 84);
        if ( (*(_BYTE *)(v22 + 132) & 8) != 0 )
        {
          v150 = *(_DWORD *)(v22 + 64);
          v151 = *(_DWORD *)(v22 + 68);
          sub_45200(v39, (_DWORD *)v41, *(_DWORD *)(v22 + 56), *(_DWORD *)(v22 + 60));
          *(_BYTE *)(v39 + 95) = *(_WORD *)(v22 + 106);
          v74 = *(_DWORD *)(v22 + 76);
          if ( v74 > 8 )
          {
            *(_DWORD *)(v22 + 76) = 10;
          }
          else
          {
            v75 = v74 + 2;
            *(_DWORD *)(v22 + 76) = v75;
            if ( v75 != 10 )
            {
LABEL_103:
              v76 = *(_DWORD *)(v22 + 176);
              v40 = *(_BYTE *)(v22 + 132) & 0xF7;
              *(_BYTE *)(v22 + 132) = v40;
              *(_DWORD *)(v22 + 176) = v76 + 1;
              goto LABEL_40;
            }
          }
          if ( (*(_BYTE *)(v41 + 768) & 1) != 0 )
            *(_DWORD *)(v39 + 68) |= 0x80u;
          goto LABEL_103;
        }
      }
LABEL_40:
      if ( (v40 & 6) != 6 )
      {
        v42 = *(_DWORD *)(v22 + 16);
        if ( v42 == 1 )
          goto LABEL_20;
LABEL_42:
        if ( v42 != 2 )
          goto LABEL_97;
        goto LABEL_43;
      }
      v70 = *(_DWORD *)(v22 + 32);
      if ( *(_DWORD *)(v22 + 84) < (unsigned int)(*(_DWORD *)(v22 + 84) - *(_DWORD *)(v22 + 36)) )
        v71 = *(_DWORD *)(v22 + 80) - v70 - 1;
      else
        v71 = *(_DWORD *)(v22 + 80) - v70;
      if ( v71 <= 0 )
      {
        if ( !v71 )
        {
          v42 = *(_DWORD *)(v22 + 16);
          if ( v42 == 1 )
            goto LABEL_49;
          goto LABEL_42;
        }
        *(_BYTE *)(v22 + 132) &= ~2u;
      }
      else
      {
        *(_BYTE *)(v22 + 132) &= ~4u;
      }
      v72 = *(_DWORD *)(v22 + 16);
      if ( v72 == 1 )
      {
        if ( (*(_BYTE *)(v22 + 132) & 6) != 6 )
          goto LABEL_20;
LABEL_49:
        v151 = *(_DWORD *)(v22 + 52);
        sub_45200(v154, v156, *(_DWORD *)(v22 + 88), *(_DWORD *)(v22 + 92));
        *(_BYTE *)(v154 + 95) = *(_WORD *)(v22 + 106);
        v46 = *(_DWORD *)(v22 + 168) + 1;
        *(_BYTE *)(v22 + 132) &= 0xF9u;
        *(_DWORD *)(v22 + 168) = v46;
        goto LABEL_20;
      }
      v95 = v72 == 2;
      v40 = *(_BYTE *)(v22 + 132);
      if ( !v95 )
      {
LABEL_97:
        if ( (v40 & 2) != 0 )
          goto LABEL_98;
        goto LABEL_20;
      }
LABEL_43:
      v43 = v40 & 2;
      if ( (v40 & 2) == 0 )
        goto LABEL_20;
      if ( (v40 & 4) != 0 )
      {
        v44 = *(_DWORD *)(v22 + 72);
        if ( v44 > 57 )
        {
          *(_DWORD *)(v22 + 72) = 60;
        }
        else
        {
          v45 = v44 + 3;
          *(_DWORD *)(v22 + 72) = v45;
          if ( v45 != 60 )
            goto LABEL_47;
        }
        if ( (v40 & 0x10) == 0 )
          goto LABEL_48;
        v129 = 6;
        v130 = "%s: expect valid PPS from now";
        v131 = *(_DWORD *)(v22 + 20);
        v132 = *(_BYTE *)(v22 + 132) & 0xEF;
      }
      else
      {
        v97 = *(_DWORD *)(v22 + 72);
        if ( v97 <= 0 )
        {
          *(_DWORD *)(v22 + 72) = v40 & 4;
        }
        else
        {
          *(_DWORD *)(v22 + 72) = v97 - 1;
          if ( v97 != 1 )
          {
LABEL_47:
            if ( (v40 & 0x10) != 0 )
              goto LABEL_98;
            goto LABEL_48;
          }
        }
        if ( (v40 & 0x10) != 0 )
          goto LABEL_138;
        v129 = 4;
        v130 = "%s: use TPV alone from now";
        v131 = *(_DWORD *)(v22 + 20);
        v132 = *(unsigned __int8 *)(v22 + 132) | 0x10;
      }
      *(_BYTE *)(v22 + 132) = v132;
      sub_65D40(v129, v130, v131, v132, v150, v151);
      v40 = *(_BYTE *)(v22 + 132);
      if ( (v40 & 0x10) != 0 )
      {
        v43 = v40 & 2;
LABEL_138:
        if ( !v43 )
          goto LABEL_20;
LABEL_98:
        v151 = *(_DWORD *)(v22 + 100);
        sub_45200(v154, v156, *(_DWORD *)(v22 + 88), *(_DWORD *)(v22 + 92));
        *(_BYTE *)(v154 + 95) = *(_WORD *)(v22 + 104);
        v73 = *(_DWORD *)(v22 + 168);
        *(_BYTE *)(v22 + 132) &= ~2u;
        *(_DWORD *)(v22 + 168) = v73 + 1;
        goto LABEL_20;
      }
LABEL_48:
      if ( (v40 & 6) == 6 )
        goto LABEL_49;
LABEL_20:
      v11 = (_BYTE *)(v157 + 7196);
      if ( v8 == v3 )
        goto LABEL_21;
    }
  }
  v158 = v157 + 7196;
LABEL_21:
  result = v170[11];
  *(_DWORD *)(v155 + 3096) = &v11[-v158];
  *(_DWORD *)(v157 + 144) = 10;
  return result;
}
