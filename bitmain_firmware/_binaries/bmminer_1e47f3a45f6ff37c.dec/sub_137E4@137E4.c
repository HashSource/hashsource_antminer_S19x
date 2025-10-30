int __fastcall sub_137E4(int a1, _DWORD *a2)
{
  _DWORD *v3; // r0
  _DWORD *v4; // r4
  _DWORD *v6; // r0
  _DWORD *v7; // r6
  const char *v8; // r12
  int v9; // r0
  int v10; // r3
  _DWORD *v11; // r0
  _DWORD *v12; // r6
  int v13; // r0
  int v14; // r1
  int v15; // r2
  int v16; // r3
  _DWORD *v17; // r12
  int v18; // r1
  int v19; // r0
  int v20; // r3
  _DWORD *v21; // r0
  _DWORD *v22; // r6
  int v23; // r0
  int v24; // r3
  _DWORD *v25; // r0
  _DWORD *v26; // r6
  int v27; // r0
  int v28; // r3
  _DWORD *v29; // r0
  _DWORD *v30; // r6
  const char *v31; // lr
  int v32; // r0
  int v33; // r3
  _DWORD *v34; // r0
  _DWORD *v35; // r6
  int v36; // r0
  int v37; // r3
  int v38; // r0
  signed int v39; // r8
  bool v40; // cc
  size_t v41; // r3
  int v42; // r6
  int v43; // r3
  void *v44; // r9
  _DWORD *v45; // r11
  int v46; // r10
  signed int v47; // r5
  int v48; // r9
  int v49; // r3
  signed int *v50; // r6
  void *v51; // r0
  int v52; // r3
  void *v53; // r0
  int v54; // r0
  signed int i; // r2
  signed int *v56; // r12
  _DWORD *v57; // r5
  _DWORD *v58; // r0
  _DWORD *v59; // r8
  _DWORD *v60; // r0
  const char *v61; // r0
  int v62; // r3
  _DWORD *v63; // r0
  int v64; // r0
  int v65; // r3
  _DWORD *v66; // r0
  _DWORD *v67; // r0
  _DWORD *v68; // r7
  int v69; // r0
  int v70; // r1
  int v71; // r2
  int v72; // r3
  _DWORD *v73; // lr
  int v74; // r1
  unsigned int v75; // r2
  size_t v76; // r0
  void *v77; // r8
  unsigned int j; // r8
  int v79; // r0
  int v80; // r3
  _DWORD *v81; // r0
  _DWORD *v82; // r9
  _DWORD *v83; // r0
  _DWORD *v84; // r10
  int v85; // r0
  int v86; // r3
  int v87; // r11
  int v88; // r0
  size_t v89; // r10
  _DWORD *v90; // r0
  const char *v91; // r0
  int v92; // r3
  _DWORD *v93; // r0
  _DWORD *v94; // r11
  int v95; // r0
  int v96; // r3
  _DWORD *v97; // r0
  _DWORD *v98; // r9
  const char *v99; // r0
  int v100; // r3
  const char *v101; // r0
  int v102; // r3
  _DWORD *v103; // r0
  const char *v104; // r0
  int v105; // r3
  _DWORD *v106; // r0
  int v107; // r0
  int v108; // r3
  _DWORD *v109; // r0
  _DWORD *v110; // r8
  size_t v111; // r0
  void *v112; // r7
  unsigned int k; // r7
  int v114; // r0
  int v115; // r3
  _DWORD *v116; // r0
  _DWORD *v117; // r10
  _DWORD *v118; // r0
  _DWORD *v119; // r9
  int v120; // r0
  int v121; // r3
  _DWORD *v122; // r0
  int v123; // r9
  int v124; // r9
  _DWORD *v125; // r0
  const char *v126; // r0
  int v127; // r3
  _DWORD *v128; // r0
  _DWORD *v129; // r10
  int v130; // r0
  int v131; // r3
  int v132; // r3
  _DWORD *v133; // r0
  _DWORD *v134; // r9
  size_t v135; // r0
  void *v136; // r7
  unsigned int v137; // r7
  int v138; // r0
  int v139; // r3
  _DWORD *v140; // r0
  _DWORD *v141; // r4
  _DWORD *v142; // r0
  _DWORD *v143; // r10
  int v144; // r0
  int v145; // r3
  int v146; // r11
  int v147; // r0
  size_t v148; // r10
  _DWORD *v149; // r0
  const char *v150; // r0
  int v151; // r3
  _DWORD *v152; // r0
  _DWORD *v153; // r11
  int v154; // r0
  int v155; // r3
  _DWORD *v156; // r0
  const char *v157; // r0
  int v158; // r3
  _DWORD *v159; // r0
  _DWORD *v160; // r4
  const char *v161; // r0
  int v162; // r3
  const char *v163; // r0
  int v164; // r3
  _DWORD *v165; // r0
  _DWORD *v166; // r10
  int v167; // r4
  _DWORD *v168; // r0
  int v169; // r4
  int v170; // r7
  _DWORD *v171; // r4
  int v172; // r0
  int v173; // r4
  int v174; // r11
  int v175; // r3
  int m; // r4
  int v177; // r2
  int v178; // r3
  int v179; // r8
  int v180; // r0
  int v181; // r8
  int v182; // r4
  const void *v183; // r7
  int v184; // r3
  int n; // r9
  int v186; // r7
  int v187; // r3
  int v188; // r11
  int v189; // r3
  int v190; // r4
  int v191; // r2
  char v192; // r3
  signed int nmemb; // [sp+10h] [bp-80Ch]
  size_t nmemba; // [sp+10h] [bp-80Ch]
  size_t nmembb; // [sp+10h] [bp-80Ch]
  size_t nmembc; // [sp+10h] [bp-80Ch]
  size_t v197; // [sp+14h] [bp-808h]
  size_t v198; // [sp+14h] [bp-808h]
  size_t v199; // [sp+14h] [bp-808h]
  char s[2052]; // [sp+18h] [bp-804h] BYREF

  v3 = (_DWORD *)sub_75FEC(a1, "chain");
  v4 = v3;
  if ( !v3 || *v3 )
  {
    if ( (unsigned int)dword_B308C > 3 )
    {
      strcpy(s, "get chain failed\n");
      sub_3B6AC(3, s, 0, *(_DWORD *)"iled\n");
      return -1;
    }
    return -1;
  }
  if ( (unsigned int)dword_B308C > 4 )
  {
    strcpy(s, "chain:\n");
    sub_3B6AC(4, s, 0, "chain:\n");
  }
  v6 = (_DWORD *)sub_75FEC(v4, "chain_num");
  v7 = v6;
  if ( !v6 || *v6 != 3 )
  {
    if ( (unsigned int)dword_B308C <= 3 )
      return -1;
    v8 = "get chain_num failed\n";
    goto LABEL_18;
  }
  if ( (unsigned int)dword_B308C > 4 )
  {
    v9 = sub_77C98(v6);
    snprintf(s, 0x800u, "chain_num : %d\n", v9);
    sub_3B6AC(4, s, 0, v10);
  }
  a2[1] = sub_77C98(v7);
  v11 = (_DWORD *)sub_75FEC(v4, "chain_row");
  v12 = v11;
  if ( !v11 || *v11 != 3 )
  {
    if ( (unsigned int)dword_B308C <= 3 )
      return -1;
    v8 = "get chain_row failed\n";
LABEL_18:
    v13 = *(_DWORD *)v8;
    v14 = *((_DWORD *)v8 + 1);
    v15 = *((_DWORD *)v8 + 2);
    v16 = *((_DWORD *)v8 + 3);
    v17 = v8 + 16;
    *(_DWORD *)s = v13;
    *(_DWORD *)&s[4] = v14;
    *(_DWORD *)&s[8] = v15;
    *(_DWORD *)&s[12] = v16;
    v18 = v17[1];
    *(_DWORD *)&s[16] = *v17;
    *(_WORD *)&s[20] = v18;
    sub_3B6AC(3, s, 0, v16);
    return -1;
  }
  if ( (unsigned int)dword_B308C > 4 )
  {
    v19 = sub_77C98(v11);
    snprintf(s, 0x800u, "chain_row: %d\n", v19);
    sub_3B6AC(4, s, 0, v20);
  }
  a2[2] = sub_77C98(v12);
  v21 = (_DWORD *)sub_75FEC(v4, "chain_column");
  v22 = v21;
  if ( !v21 || *v21 != 3 )
  {
    if ( (unsigned int)dword_B308C > 3 )
    {
      strcpy(s, "get chain_column failed\n");
      sub_3B6AC(3, s, 0, *(_DWORD *)"lumn failed\n");
      return -1;
    }
    return -1;
  }
  if ( (unsigned int)dword_B308C > 4 )
  {
    v23 = sub_77C98(v21);
    snprintf(s, 0x800u, "chain_column: %d\n", v23);
    sub_3B6AC(4, s, 0, v24);
  }
  a2[3] = sub_77C98(v22);
  v25 = (_DWORD *)sub_75FEC(v4, "chain_domain_num");
  v26 = v25;
  if ( !v25 || *v25 != 3 )
  {
    if ( (unsigned int)dword_B308C > 3 )
    {
      strcpy(s, "get chain_domain_num failed\n");
      sub_3B6AC(3, s, 0, *(_DWORD *)"");
      return -1;
    }
    return -1;
  }
  if ( (unsigned int)dword_B308C > 4 )
  {
    v27 = sub_77C98(v25);
    snprintf(s, 0x800u, "chain_domain_num : %d\n", v27);
    sub_3B6AC(4, s, 0, v28);
  }
  a2[4] = sub_77C98(v26);
  v29 = (_DWORD *)sub_75FEC(v4, "chain_asic_num");
  v30 = v29;
  if ( !v29 || *v29 != 3 )
  {
    if ( (unsigned int)dword_B308C > 3 )
    {
      v31 = "get chain_asic_num failed\n";
      goto LABEL_86;
    }
    return -1;
  }
  if ( (unsigned int)dword_B308C > 4 )
  {
    v32 = sub_77C98(v29);
    snprintf(s, 0x800u, "chain_asic_num : %d\n", v32);
    sub_3B6AC(4, s, 0, v33);
  }
  a2[5] = sub_77C98(v30);
  v34 = (_DWORD *)sub_75FEC(v4, "domain_asic_num");
  v35 = v34;
  if ( !v34 || *v34 != 3 )
  {
    if ( (unsigned int)dword_B308C > 3 )
    {
      strcpy(s, "get domain_asic_num failed\n");
      sub_3B6AC(3, s, 0, *(_DWORD *)"sic_num failed\n");
      return -1;
    }
    return -1;
  }
  if ( (unsigned int)dword_B308C > 4 )
  {
    v36 = sub_77C98(v34);
    snprintf(s, 0x800u, "domain_asic_num : %d\n", v36);
    sub_3B6AC(4, s, 0, v37);
  }
  v38 = sub_77C98(v35);
  v39 = a2[4];
  v40 = (unsigned int)dword_B308C > 4;
  nmemb = a2[1];
  v41 = a2[5];
  v197 = v41;
  v42 = v38;
  a2[6] = v38;
  if ( v40 )
  {
    snprintf(
      s,
      0x800u,
      "chain_num %d, chain_domain_num %d, chain_asic_num %d, domain_asic_num %d\n",
      nmemb,
      v39,
      v41,
      v38);
    sub_3B6AC(4, s, 0, v43);
  }
  v44 = calloc(nmemb, 0x20u);
  a2[14] = v44;
  if ( !v44 )
  {
    if ( (unsigned int)dword_B308C > 3 )
    {
      snprintf(s, 0x800u, "malloc %d chain_t failed\n", nmemb);
      sub_3B6AC(3, s, 0, v49);
    }
    goto LABEL_140;
  }
  v45 = a2;
  v46 = 28 * v42;
  v47 = 0;
  v48 = -28 * v42;
  while ( v47 < nmemb )
  {
    v50 = (signed int *)(v45[14] + 32 * v47);
    *v50 = v47;
    v51 = calloc(v39, 8u);
    v50[3] = (signed int)v51;
    if ( !v51 )
    {
      if ( (unsigned int)dword_B308C > 3 )
      {
        snprintf(s, 0x800u, "malloc %d domain_t failed\n", v39);
        goto LABEL_62;
      }
      goto LABEL_140;
    }
    v53 = calloc(v197, 0x1Cu);
    v50[2] = (signed int)v53;
    if ( !v53 )
    {
      if ( (unsigned int)dword_B308C > 3 )
      {
        snprintf(s, 0x800u, "malloc %d asic_t failed\n", v197);
LABEL_62:
        sub_3B6AC(3, s, 0, v52);
      }
LABEL_140:
      if ( (unsigned int)dword_B308C > 3 )
      {
        strcpy(s, "alloc topol failed\n");
        sub_3B6AC(3, s, 0, *(_DWORD *)"failed\n");
        return -1;
      }
      return -1;
    }
    v54 = 0;
    for ( i = 0; ; ++i )
    {
      v54 += v46;
      if ( i >= v39 )
        break;
      v56 = (signed int *)(v50[3] + 8 * i);
      *v56 = i;
      v56[1] = v50[2] + v54 + v48;
    }
    ++v47;
  }
  v57 = v45;
  v58 = (_DWORD *)sub_75FEC(v4, "pic");
  v59 = v58;
  if ( !v58 || *v58 )
  {
    if ( (unsigned int)dword_B308C > 3 )
    {
      strcpy(s, "get pic failed\n");
      sub_3B6AC(3, s, 0, *(_DWORD *)"ed\n");
    }
    goto LABEL_142;
  }
  if ( (unsigned int)dword_B308C > 4 )
  {
    strcpy(s, "pic:\n");
    sub_3B6AC(4, s, 0, "pic:\n");
  }
  v60 = (_DWORD *)sub_75FEC(v59, "type");
  if ( !v60 || *v60 != 2 )
  {
    if ( (unsigned int)dword_B308C > 3 )
    {
      strcpy(s, "get type failed\n");
      sub_3B6AC(3, s, 0, *(_DWORD *)"led\n");
    }
    goto LABEL_142;
  }
  if ( (unsigned int)dword_B308C > 4 )
  {
    v61 = (const char *)((int (*)(void))sub_777D0)();
    snprintf(s, 0x800u, "type: %s\n", v61);
    sub_3B6AC(4, s, 0, v62);
  }
  v63 = (_DWORD *)sub_75FEC(v59, "i2c_addr");
  if ( !v63 || *v63 != 3 )
  {
    if ( (unsigned int)dword_B308C > 3 )
    {
      strcpy(s, "get i2c_addr failed\n");
      sub_3B6AC(3, s, 0, *(_DWORD *)" failed\n");
    }
    goto LABEL_142;
  }
  if ( (unsigned int)dword_B308C > 4 )
  {
    v64 = sub_77C98(v63);
    snprintf(s, 0x800u, "i2c_addr: %d\n", v64);
    sub_3B6AC(4, s, 0, v65);
  }
  v66 = (_DWORD *)sub_75FEC(v59, "sensor");
  nmemba = (size_t)v66;
  if ( v66 && *v66 == 1 )
  {
    if ( (unsigned int)dword_B308C > 4 )
    {
      strcpy(s, "pic sensor:\n");
      sub_3B6AC(4, s, 0, *(_DWORD *)"");
    }
    v45[16] = sub_76B34(nmemba);
    v76 = sub_76B34(nmemba);
    v77 = calloc(v76, 0xCu);
    v45[17] = v77;
    if ( !v77 )
    {
      if ( (unsigned int)dword_B308C > 3 )
      {
        v79 = sub_76B34(nmemba);
        snprintf(s, 0x800u, "malloc %d sensor_t failed\n", v79);
        sub_3B6AC(3, s, 0, v80);
      }
      goto LABEL_142;
    }
    for ( j = 0; ; ++j )
    {
      if ( j >= sub_76B34(nmemba) )
        goto LABEL_80;
      v81 = (_DWORD *)sub_76B80(nmemba, j);
      v82 = v81;
      if ( !v81 || *v81 )
      {
        if ( (unsigned int)dword_B308C > 3 )
        {
          snprintf(s, 0x800u, "get array %d failed\n", j);
          goto LABEL_135;
        }
        goto LABEL_142;
      }
      v83 = (_DWORD *)sub_75FEC(v81, "index");
      v84 = v83;
      if ( !v83 || *v83 != 3 )
      {
        if ( (unsigned int)dword_B308C > 3 )
        {
          snprintf(s, 0x800u, "get array %d index failed\n", j);
          goto LABEL_135;
        }
        goto LABEL_142;
      }
      if ( (unsigned int)dword_B308C > 4 )
      {
        v85 = sub_77C98(v83);
        snprintf(s, 0x800u, "index: %d\n", v85);
        sub_3B6AC(4, s, 0, v86);
      }
      v198 = v57[17];
      v87 = 12 * sub_77C98(v84);
      v88 = sub_77C98(v84);
      v89 = v198 + v87;
      *(_DWORD *)(v198 + v87) = v88;
      v90 = (_DWORD *)sub_75FEC(v82, "type");
      if ( !v90 || *v90 != 2 )
      {
        if ( (unsigned int)dword_B308C > 3 )
        {
          snprintf(s, 0x800u, "get array %d type failed\n", j);
          goto LABEL_135;
        }
LABEL_142:
        if ( (unsigned int)dword_B308C > 3 )
        {
          strcpy(s, "parse chain pic failed\n");
          sub_3B6AC(3, s, 0, *(_DWORD *)"pic failed\n");
          return -1;
        }
        return -1;
      }
      if ( (unsigned int)dword_B308C > 4 )
      {
        v91 = (const char *)((int (*)(void))sub_777D0)();
        snprintf(s, 0x800u, "type: %s\n", v91);
        sub_3B6AC(4, s, 0, v92);
      }
      v93 = (_DWORD *)sub_75FEC(v82, "iic");
      v94 = v93;
      if ( !v93 || *v93 != 3 )
        break;
      if ( (unsigned int)dword_B308C > 4 )
      {
        v95 = sub_77C98(v93);
        snprintf(s, 0x800u, "iic: %d\n", v95);
        sub_3B6AC(4, s, 0, v96);
      }
      *(_DWORD *)(v89 + 4) = sub_77C98(v94);
      v97 = (_DWORD *)sub_75FEC(v82, "x");
      v98 = v97;
      if ( !v97 || *v97 != 2 )
      {
        if ( (unsigned int)dword_B308C <= 3 )
          goto LABEL_142;
        snprintf(s, 0x800u, "get array %d x failed\n", j);
LABEL_135:
        sub_3B6AC(3, s, 0, v102);
        goto LABEL_142;
      }
      if ( (unsigned int)dword_B308C > 4 )
      {
        v99 = (const char *)((int (*)(void))sub_777D0)();
        snprintf(s, 0x800u, "x: %s\n", v99);
        sub_3B6AC(4, s, 0, v100);
      }
      if ( !v57[20] )
      {
        v101 = (const char *)sub_777D0(v98);
        *(_BYTE *)(v89 + 8) = !strncasecmp(v101, "right", 5u);
      }
    }
    if ( (unsigned int)dword_B308C <= 3 )
      goto LABEL_142;
    snprintf(s, 0x800u, "get array %d bind_asic failed\n", j);
    goto LABEL_135;
  }
  if ( strcmp((const char *)dword_5BF7D8, "BHB28601") )
  {
    if ( (unsigned int)dword_B308C > 3 )
    {
      strcpy(s, "get pic sensor failed\n");
      sub_3B6AC(3, s, 0, *(unsigned __int16 *)"");
    }
    goto LABEL_142;
  }
LABEL_80:
  v67 = (_DWORD *)sub_75FEC(v4, "eeprom");
  v68 = v67;
  if ( !v67 || *v67 )
  {
    if ( (unsigned int)dword_B308C > 3 )
    {
      strcpy(s, "get eeprom failed\n");
      sub_3B6AC(3, s, 0, *(_DWORD *)"ailed\n");
    }
    goto LABEL_84;
  }
  if ( (unsigned int)dword_B308C > 4 )
  {
    strcpy(s, "eeprom:\n");
    sub_3B6AC(4, s, 0, &s[8]);
  }
  v103 = (_DWORD *)sub_75FEC(v68, "type");
  if ( !v103 || *v103 != 2 )
  {
    if ( (unsigned int)dword_B308C > 3 )
    {
      strcpy(s, "get type failed\n");
      sub_3B6AC(3, s, 0, *(_DWORD *)"led\n");
    }
    goto LABEL_84;
  }
  if ( (unsigned int)dword_B308C > 4 )
  {
    v104 = (const char *)sub_777D0(v103);
    snprintf(s, 0x800u, "type: %s\n", v104);
    sub_3B6AC(4, s, 0, v105);
  }
  v106 = (_DWORD *)sub_75FEC(v68, "i2c_addr");
  if ( !v106 || *v106 != 3 )
  {
    if ( (unsigned int)dword_B308C > 3 )
    {
      strcpy(s, "get i2c_addr failed\n");
      sub_3B6AC(3, s, 0, *(_DWORD *)" failed\n");
    }
LABEL_84:
    if ( (unsigned int)dword_B308C > 3 )
    {
      v31 = "parse chain eeprom failed\n";
      goto LABEL_86;
    }
    return -1;
  }
  if ( (unsigned int)dword_B308C > 4 )
  {
    v107 = sub_77C98(v106);
    snprintf(s, 0x800u, "i2c_addr: %d\n", v107);
    sub_3B6AC(4, s, 0, v108);
  }
  v109 = (_DWORD *)sub_75FEC(v4, "sensor");
  v110 = v109;
  if ( !v109 || *v109 != 1 )
  {
    if ( (unsigned int)dword_B308C > 3 )
    {
      strcpy(s, "get sensor failed\n");
      sub_3B6AC(3, s, 0, *(_DWORD *)"ailed\n");
    }
    goto LABEL_297;
  }
  if ( (unsigned int)dword_B308C > 4 )
  {
    strcpy(s, "sensor:\n");
    sub_3B6AC(4, s, 0, &s[8]);
  }
  v57[7] = sub_76B34(v110);
  v111 = sub_76B34(v110);
  v112 = calloc(v111, 0xCu);
  v57[15] = v112;
  if ( !v112 )
  {
    if ( (unsigned int)dword_B308C > 3 )
    {
      v114 = sub_76B34(v110);
      snprintf(s, 0x800u, "malloc %d sensor_t failed\n", v114);
      sub_3B6AC(3, s, 0, v115);
    }
    goto LABEL_297;
  }
  for ( k = 0; k < sub_76B34(v110); ++k )
  {
    v116 = (_DWORD *)sub_76B80(v110, k);
    v117 = v116;
    if ( !v116 || *v116 )
    {
      if ( (unsigned int)dword_B308C > 3 )
      {
        snprintf(s, 0x800u, "get array %d failed\n", k);
        goto LABEL_193;
      }
      goto LABEL_297;
    }
    v118 = (_DWORD *)sub_75FEC(v116, "index");
    v119 = v118;
    if ( !v118 || *v118 != 3 )
    {
      if ( (unsigned int)dword_B308C > 3 )
      {
        snprintf(s, 0x800u, "get array %d index failed\n", k);
        goto LABEL_193;
      }
      goto LABEL_297;
    }
    if ( (unsigned int)dword_B308C > 4 )
    {
      v120 = sub_77C98(v118);
      snprintf(s, 0x800u, "index: %d\n", v120);
      sub_3B6AC(4, s, 0, v121);
    }
    v122 = v119;
    v123 = v57[15];
    v124 = v123 + 12 * sub_77C98(v122);
    v125 = (_DWORD *)sub_75FEC(v117, "type");
    if ( !v125 || *v125 != 2 )
    {
      if ( (unsigned int)dword_B308C > 3 )
      {
        snprintf(s, 0x800u, "get array %d type failed\n", k);
        goto LABEL_193;
      }
LABEL_297:
      if ( (unsigned int)dword_B308C > 3 )
      {
        v31 = "parse chain sensor failed\n";
LABEL_86:
        v69 = *(_DWORD *)v31;
        v70 = *((_DWORD *)v31 + 1);
        v71 = *((_DWORD *)v31 + 2);
        v72 = *((_DWORD *)v31 + 3);
        v73 = v31 + 16;
        *(_DWORD *)s = v69;
        *(_DWORD *)&s[4] = v70;
        *(_DWORD *)&s[8] = v71;
        *(_DWORD *)&s[12] = v72;
        v74 = v73[1];
        v75 = v73[2];
        *(_DWORD *)&s[16] = *v73;
        *(_DWORD *)&s[20] = v74;
        *(_WORD *)&s[24] = v75;
        s[26] = BYTE2(v75);
        sub_3B6AC(3, s, 0, HIWORD(v75));
      }
      return -1;
    }
    if ( (unsigned int)dword_B308C > 4 )
    {
      v126 = (const char *)sub_777D0(v125);
      snprintf(s, 0x800u, "type: %s\n", v126);
      sub_3B6AC(4, s, 0, v127);
    }
    v128 = (_DWORD *)sub_75FEC(v117, "bind_asic");
    v129 = v128;
    if ( !v128 || *v128 != 3 )
    {
      if ( (unsigned int)dword_B308C > 3 )
      {
        snprintf(s, 0x800u, "get array %d bind_asic failed\n", k);
LABEL_193:
        sub_3B6AC(3, s, 0, v132);
      }
      goto LABEL_297;
    }
    if ( (unsigned int)dword_B308C > 4 )
    {
      v130 = sub_77C98(v128);
      snprintf(s, 0x800u, "bind_asic: %d\n", v130);
      sub_3B6AC(4, s, 0, v131);
    }
    *(_DWORD *)(v124 + 4) = sub_77C98(v129);
  }
  v133 = (_DWORD *)sub_75FEC(v4, "ctrlboardsensor");
  v134 = v133;
  if ( v133 && *v133 == 1 )
  {
    if ( (unsigned int)dword_B308C > 4 )
    {
      strcpy(s, "ctrlboard sensor:\n");
      sub_3B6AC(4, s, 0, *(_DWORD *)"nsor:\n");
    }
    v57[18] = sub_76B34(v134);
    v135 = sub_76B34(v134);
    v136 = calloc(v135, 0xCu);
    v57[19] = v136;
    if ( v136 )
    {
      v137 = 0;
      nmembb = (size_t)v4;
      while ( 1 )
      {
        if ( v137 >= sub_76B34(v134) )
        {
          v4 = (_DWORD *)nmembb;
          goto LABEL_249;
        }
        v140 = (_DWORD *)sub_76B80(v134, v137);
        v141 = v140;
        if ( !v140 || *v140 )
        {
          v4 = (_DWORD *)nmembb;
          if ( (unsigned int)dword_B308C <= 3 )
            goto LABEL_247;
          snprintf(s, 0x800u, "get array %d failed\n", v137);
          goto LABEL_246;
        }
        v142 = (_DWORD *)sub_75FEC(v140, "index");
        v143 = v142;
        if ( !v142 || *v142 != 3 )
        {
          v4 = (_DWORD *)nmembb;
          if ( (unsigned int)dword_B308C <= 3 )
            goto LABEL_247;
          snprintf(s, 0x800u, "get array %d index failed\n", v137);
          goto LABEL_246;
        }
        if ( (unsigned int)dword_B308C > 4 )
        {
          v144 = sub_77C98(v142);
          snprintf(s, 0x800u, "index: %d\n", v144);
          sub_3B6AC(4, s, 0, v145);
        }
        v199 = v57[19];
        v146 = 12 * sub_77C98(v143);
        v147 = sub_77C98(v143);
        v148 = v199 + v146;
        *(_DWORD *)(v199 + v146) = v147;
        v149 = (_DWORD *)sub_75FEC(v141, "type");
        if ( !v149 || *v149 != 2 )
        {
          v4 = (_DWORD *)nmembb;
          if ( (unsigned int)dword_B308C <= 3 )
            goto LABEL_247;
          snprintf(s, 0x800u, "get array %d type failed\n", v137);
          goto LABEL_246;
        }
        if ( (unsigned int)dword_B308C > 4 )
        {
          v150 = (const char *)sub_777D0(v149);
          snprintf(s, 0x800u, "type: %s\n", v150);
          sub_3B6AC(4, s, 0, v151);
        }
        v152 = (_DWORD *)sub_75FEC(v141, "iic");
        v153 = v152;
        if ( !v152 || *v152 != 3 )
        {
          v4 = (_DWORD *)nmembb;
          if ( (unsigned int)dword_B308C <= 3 )
            goto LABEL_247;
          snprintf(s, 0x800u, "get array %d bind_asic failed\n", v137);
          goto LABEL_246;
        }
        if ( (unsigned int)dword_B308C > 4 )
        {
          v154 = sub_77C98(v152);
          snprintf(s, 0x800u, "iic: %d\n", v154);
          sub_3B6AC(4, s, 0, v155);
        }
        *(_DWORD *)(v148 + 4) = sub_77C98(v153);
        v156 = (_DWORD *)sub_75FEC(v141, "x");
        if ( !v156 || *v156 != 2 )
        {
          v4 = (_DWORD *)nmembb;
          if ( (unsigned int)dword_B308C <= 3 )
            goto LABEL_247;
          snprintf(s, 0x800u, "get array %d x failed\n", v137);
          goto LABEL_246;
        }
        if ( (unsigned int)dword_B308C > 4 )
        {
          v157 = (const char *)sub_777D0(v156);
          snprintf(s, 0x800u, "x: %s\n", v157);
          sub_3B6AC(4, s, 0, v158);
        }
        v159 = (_DWORD *)sub_75FEC(v141, "y");
        v160 = v159;
        if ( !v159 || *v159 != 2 )
          break;
        if ( (unsigned int)dword_B308C > 4 )
        {
          v161 = (const char *)sub_777D0(v159);
          snprintf(s, 0x800u, "y: %s\n", v161);
          sub_3B6AC(4, s, 0, v162);
        }
        if ( !v57[20] )
        {
          v163 = (const char *)sub_777D0(v160);
          *(_BYTE *)(v148 + 8) = !strncasecmp(v163, "right", 5u);
        }
        ++v137;
      }
      v4 = (_DWORD *)nmembb;
      if ( (unsigned int)dword_B308C <= 3 )
        goto LABEL_247;
      snprintf(s, 0x800u, "get array %d y failed\n", v137);
LABEL_246:
      sub_3B6AC(3, s, 0, v164);
    }
    else if ( (unsigned int)dword_B308C > 3 )
    {
      v138 = sub_76B34(v134);
      snprintf(s, 0x800u, "malloc %d sensor_t failed\n", v138);
      sub_3B6AC(3, s, 0, v139);
    }
  }
  else
  {
    if ( !strcmp((const char *)dword_5BF7D8, "BHB28601") )
      goto LABEL_249;
    if ( (unsigned int)dword_B308C > 3 )
    {
      strcpy(s, "get ctrlboard sensor failed\n");
      sub_3B6AC(3, s, 0, *(_DWORD *)"");
    }
  }
LABEL_247:
  if ( (unsigned int)dword_B308C > 3 )
  {
    strcpy(s, "parse chain ctrlboard sensor failed\n");
    sub_3B6AC(3, s, 0, *(_DWORD *)" failed\n");
  }
LABEL_249:
  v165 = (_DWORD *)sub_75FEC(v4, "tpl");
  v166 = v165;
  if ( v165 )
  {
    if ( *v165 == 1 )
    {
      v167 = v57[14];
      *(_DWORD *)(v167 + 16) = sub_76B34(v165);
      v168 = (_DWORD *)sub_76B80(v166, 0);
      if ( v168 )
      {
        if ( *v168 == 1 )
        {
          v169 = v57[14];
          v170 = 0;
          *(_DWORD *)(v169 + 20) = sub_76B34(v168);
          v171 = (_DWORD *)v57[14];
          v171[6] = calloc(v171[5] * v171[4], 4u);
          while ( 1 )
          {
            if ( v170 >= *(_DWORD *)(v57[14] + 16) )
              goto LABEL_275;
            v172 = sub_76B80(v166, v170);
            v173 = *(_DWORD *)(v57[14] + 20);
            v174 = v172;
            if ( v173 != sub_76B34(v172) )
            {
              if ( (unsigned int)dword_B308C > 3 )
              {
                snprintf(s, 0x800u, "tpl row:%d column size is different!!!\n", v170);
                sub_3B6AC(3, s, 0, v175);
              }
              goto LABEL_273;
            }
            for ( m = 0; ; ++m )
            {
              v177 = v57[14];
              v178 = *(_DWORD *)(v177 + 20);
              v179 = m + v178 * v170;
              if ( v178 <= m )
                break;
              nmembc = *(_DWORD *)(v177 + 24);
              v180 = sub_76B80(v174, m);
              *(_DWORD *)(nmembc + 4 * v179) = sub_77C98(v180);
              if ( m )
              {
                v181 = v57[14];
                if ( m == *(_DWORD *)(v181 + 20) - 1 )
                {
                  if ( (unsigned int)dword_B308C <= 4 )
                    continue;
                  memset(s, 0, 0x800u);
                  snprintf(
                    s,
                    0x800u,
                    "%3d],\n",
                    *(_DWORD *)(*(_DWORD *)(v181 + 24) + 4 * (m + *(_DWORD *)(v181 + 20) * v170)));
                }
                else
                {
                  if ( (unsigned int)dword_B308C <= 4 )
                    continue;
                  memset(s, 0, 0x800u);
                  snprintf(
                    s,
                    0x800u,
                    "%3d,",
                    *(_DWORD *)(*(_DWORD *)(v181 + 24) + 4 * (m + *(_DWORD *)(v181 + 20) * v170)));
                }
                sub_3C5B8(4, s, 0);
              }
              else if ( (unsigned int)dword_B308C > 4 )
              {
                memset(s, 0, 0x800u);
                snprintf(
                  s,
                  0x800u,
                  "data[%2d]=[%d,",
                  v170,
                  *(_DWORD *)(*(_DWORD *)(v57[14] + 24) + 4 * *(_DWORD *)(v57[14] + 20) * v170));
                sub_3C5B8(4, s, 0);
              }
            }
            ++v170;
          }
        }
      }
    }
  }
  if ( (unsigned int)dword_B308C > 3 )
  {
    strcpy(s, "get tpl.data array failed\n");
    sub_3B6AC(3, s, 0, *(unsigned __int16 *)"");
  }
LABEL_273:
  if ( (unsigned int)dword_B308C > 3 )
  {
    strcpy(s, "parse chain tpl failed\n");
    sub_3B6AC(3, s, 0, *(_DWORD *)"tpl failed\n");
  }
LABEL_275:
  v182 = 1;
  v183 = *(const void **)(v57[14] + 8);
  while ( v57[1] > v182 )
  {
    v184 = v57[14] + 32 * v182++;
    memcpy(*(void **)(v184 + 8), v183, 28 * v57[5]);
  }
  for ( n = 0; v57[7] > n; ++n )
  {
    v186 = v57[15] + 12 * n;
    v187 = *(_DWORD *)(v186 + 4);
    v188 = *(_DWORD *)(v57[14] + 8) + 28 * v187;
    if ( (unsigned int)dword_B308C > 3 )
    {
      snprintf(s, 0x800u, "asic %d, wind %d, y %d\n", v187, v57[20], *(_DWORD *)(v188 + 8));
      sub_3B6AC(3, s, 0, v189);
    }
    v190 = v57[20];
    if ( v190 == 1 )
    {
      if ( *(_DWORD *)(v188 + 8) <= v57[3] / 3 )
      {
        if ( (unsigned int)dword_B308C > 3 )
        {
          v191 = 0;
          goto LABEL_290;
        }
        goto LABEL_291;
      }
    }
    else if ( !v190 && *(_DWORD *)(v188 + 8) >= 2 * v57[3] / 3 )
    {
      if ( (unsigned int)dword_B308C > 3 )
      {
        v191 = v57[20];
LABEL_290:
        strcpy(s, "air in\n");
        sub_3B6AC(3, s, v191, "air in\n");
      }
LABEL_291:
      v192 = 1;
      goto LABEL_295;
    }
    if ( (unsigned int)dword_B308C > 3 )
    {
      strcpy(s, "air out\n");
      sub_3B6AC(3, s, 0, &s[8]);
    }
    v192 = 0;
LABEL_295:
    *(_BYTE *)(v186 + 8) = v192;
  }
  return 0;
}
