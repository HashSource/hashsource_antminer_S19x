int __fastcall sub_1353C(int a1, _DWORD *a2)
{
  _DWORD *v3; // r0
  _DWORD *v5; // r0
  _DWORD *v6; // r4
  const char *v7; // r12
  int v8; // r0
  int v9; // r3
  _DWORD *v10; // r0
  _DWORD *v11; // r4
  int v12; // r0
  int v13; // r1
  int v14; // r2
  int v15; // r3
  _DWORD *v16; // r12
  int v17; // r1
  int v18; // r0
  int v19; // r3
  _DWORD *v20; // r0
  _DWORD *v21; // r4
  int v22; // r0
  int v23; // r3
  _DWORD *v24; // r0
  _DWORD *v25; // r4
  int v26; // r0
  int v27; // r3
  _DWORD *v28; // r0
  _DWORD *v29; // r4
  const char *v30; // lr
  int v31; // r0
  int v32; // r3
  _DWORD *v33; // r0
  _DWORD *v34; // r4
  int v35; // r0
  int v36; // r3
  int v37; // r0
  void *v38; // r3
  int v39; // r8
  signed int v40; // r7
  signed int v41; // r4
  size_t v42; // r9
  int v43; // r3
  void *v44; // r10
  signed int v45; // r11
  int v46; // r8
  int v47; // r3
  int v48; // r10
  void *v49; // r0
  int v50; // r10
  int v51; // r3
  void *v52; // r0
  int v53; // r0
  signed int i; // r3
  int v55; // r2
  int v56; // r2
  _DWORD *v57; // r0
  _DWORD *v58; // r7
  _DWORD *v59; // r0
  const char *v60; // r0
  int v61; // r3
  _DWORD *v62; // r0
  int v63; // r0
  int v64; // r3
  _DWORD *v65; // r0
  _DWORD *v66; // r9
  size_t v67; // r0
  void *v68; // r7
  int v69; // r0
  int v70; // r3
  unsigned int j; // r8
  _DWORD *v72; // r0
  _DWORD *v73; // r10
  int v74; // r3
  _DWORD *v75; // r0
  _DWORD *v76; // r11
  int v77; // r0
  int v78; // r3
  int v79; // r7
  int v80; // r7
  _DWORD *v81; // r0
  const char *v82; // r0
  int v83; // r3
  _DWORD *v84; // r0
  _DWORD *v85; // r11
  int v86; // r0
  int v87; // r3
  _DWORD *v88; // r0
  _DWORD *v89; // r11
  const char *v90; // r0
  int v91; // r3
  const char *v92; // r0
  int v93; // r0
  char v94; // r3
  _DWORD *v95; // r0
  _DWORD *v96; // r6
  _DWORD *v97; // r0
  const char *v98; // r0
  int v99; // r3
  _DWORD *v100; // r0
  int v101; // r0
  int v102; // r3
  _DWORD *v103; // r0
  _DWORD *v104; // r7
  size_t v105; // r0
  void *v106; // r6
  int v107; // r0
  int v108; // r3
  unsigned int k; // r6
  _DWORD *v110; // r0
  _DWORD *v111; // r10
  int v112; // r3
  _DWORD *v113; // r0
  _DWORD *v114; // r11
  int v115; // r0
  int v116; // r3
  int v117; // r9
  int v118; // r9
  _DWORD *v119; // r0
  const char *v120; // r0
  int v121; // r3
  _DWORD *v122; // r0
  _DWORD *v123; // r10
  int v124; // r0
  int v125; // r3
  _DWORD *v126; // r0
  _DWORD *v127; // r9
  int v128; // r0
  int v129; // r1
  int v130; // r2
  int v131; // r3
  _DWORD *v132; // lr
  int v133; // r1
  unsigned int v134; // r2
  size_t v135; // r0
  void *v136; // r6
  int v137; // r0
  int v138; // r3
  unsigned int m; // r7
  _DWORD *v140; // r0
  _DWORD *v141; // r10
  int v142; // r3
  _DWORD *v143; // r0
  _DWORD *v144; // r11
  int v145; // r0
  int v146; // r3
  int v147; // r6
  int v148; // r6
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
  _DWORD *v160; // r10
  const char *v161; // r0
  int v162; // r3
  const char *v163; // r0
  int v164; // r0
  char v165; // r3
  _DWORD *v166; // r0
  _DWORD *v167; // r10
  _DWORD *v168; // r0
  int v169; // r7
  _DWORD *v170; // r6
  int v171; // r6
  int v172; // r3
  int n; // r6
  int v174; // r0
  int v175; // r8
  int v176; // r6
  const void *v177; // r7
  int v178; // r3
  int ii; // r8
  int v180; // r6
  int v181; // r3
  int v182; // r11
  int v183; // r3
  int v184; // r3
  char v185; // r2
  int v186; // r2
  _DWORD *v187; // [sp+14h] [bp-818h]
  int v188; // [sp+14h] [bp-818h]
  int v189; // [sp+14h] [bp-818h]
  char *v190; // [sp+18h] [bp-814h]
  int v191; // [sp+24h] [bp-808h]
  int v192; // [sp+24h] [bp-808h]
  char s[2052]; // [sp+28h] [bp-804h] BYREF

  v3 = (_DWORD *)sub_72B10(a1, "chain");
  v187 = v3;
  if ( !v3 || *v3 )
  {
    if ( (unsigned int)off_AFC24 > 3 )
    {
      strcpy(s, "get chain failed\n");
      sub_3AF5C(3, s, 0, *(_DWORD *)"iled\n");
      return -1;
    }
    return -1;
  }
  if ( (unsigned int)off_AFC24 > 4 )
  {
    strcpy(s, "chain:\n");
    sub_3AF5C(4, s, 0, "chain:\n");
  }
  v5 = (_DWORD *)sub_72B10(v187, "chain_num");
  v6 = v5;
  if ( !v5 || *v5 != 3 )
  {
    if ( (unsigned int)off_AFC24 <= 3 )
      return -1;
    v7 = "get chain_num failed\n";
    goto LABEL_18;
  }
  if ( (unsigned int)off_AFC24 > 4 )
  {
    v8 = sub_747D0(v5);
    snprintf(s, 0x800u, "chain_num : %d\n", v8);
    sub_3AF5C(4, s, 0, v9);
  }
  a2[1] = sub_747D0(v6);
  v10 = (_DWORD *)sub_72B10(v187, "chain_row");
  v11 = v10;
  if ( !v10 || *v10 != 3 )
  {
    if ( (unsigned int)off_AFC24 <= 3 )
      return -1;
    v7 = "get chain_row failed\n";
LABEL_18:
    v12 = *(_DWORD *)v7;
    v13 = *((_DWORD *)v7 + 1);
    v14 = *((_DWORD *)v7 + 2);
    v15 = *((_DWORD *)v7 + 3);
    v16 = v7 + 16;
    *(_DWORD *)s = v12;
    *(_DWORD *)&s[4] = v13;
    *(_DWORD *)&s[8] = v14;
    *(_DWORD *)&s[12] = v15;
    v17 = v16[1];
    *(_DWORD *)&s[16] = *v16;
    *(_WORD *)&s[20] = v17;
    sub_3AF5C(3, s, 0, v15);
    return -1;
  }
  if ( (unsigned int)off_AFC24 > 4 )
  {
    v18 = sub_747D0(v10);
    snprintf(s, 0x800u, "chain_row: %d\n", v18);
    sub_3AF5C(4, s, 0, v19);
  }
  a2[2] = sub_747D0(v11);
  v20 = (_DWORD *)sub_72B10(v187, "chain_column");
  v21 = v20;
  if ( !v20 || *v20 != 3 )
  {
    if ( (unsigned int)off_AFC24 > 3 )
    {
      strcpy(s, "get chain_column failed\n");
      sub_3AF5C(3, s, 0, *(_DWORD *)"lumn failed\n");
      return -1;
    }
    return -1;
  }
  if ( (unsigned int)off_AFC24 > 4 )
  {
    v22 = sub_747D0(v20);
    snprintf(s, 0x800u, "chain_column: %d\n", v22);
    sub_3AF5C(4, s, 0, v23);
  }
  a2[3] = sub_747D0(v21);
  v24 = (_DWORD *)sub_72B10(v187, "chain_domain_num");
  v25 = v24;
  if ( !v24 || *v24 != 3 )
  {
    if ( (unsigned int)off_AFC24 > 3 )
    {
      strcpy(s, "get chain_domain_num failed\n");
      sub_3AF5C(3, s, 0, *(_DWORD *)"");
      return -1;
    }
    return -1;
  }
  if ( (unsigned int)off_AFC24 > 4 )
  {
    v26 = sub_747D0(v24);
    snprintf(s, 0x800u, "chain_domain_num : %d\n", v26);
    sub_3AF5C(4, s, 0, v27);
  }
  a2[4] = sub_747D0(v25);
  v28 = (_DWORD *)sub_72B10(v187, "chain_asic_num");
  v29 = v28;
  if ( !v28 || *v28 != 3 )
  {
    if ( (unsigned int)off_AFC24 <= 3 )
      return -1;
    v30 = "get chain_asic_num failed\n";
    goto LABEL_195;
  }
  if ( (unsigned int)off_AFC24 > 4 )
  {
    v31 = sub_747D0(v28);
    snprintf(s, 0x800u, "chain_asic_num : %d\n", v31);
    sub_3AF5C(4, s, 0, v32);
  }
  a2[5] = sub_747D0(v29);
  v33 = (_DWORD *)sub_72B10(v187, "domain_asic_num");
  v34 = v33;
  if ( !v33 || *v33 != 3 )
  {
    if ( (unsigned int)off_AFC24 > 3 )
    {
      strcpy(s, "get domain_asic_num failed\n");
      sub_3AF5C(3, s, 0, *(_DWORD *)"sic_num failed\n");
      return -1;
    }
    return -1;
  }
  if ( (unsigned int)off_AFC24 > 4 )
  {
    v35 = sub_747D0(v33);
    snprintf(s, 0x800u, "domain_asic_num : %d\n", v35);
    sub_3AF5C(4, s, 0, v36);
  }
  v37 = sub_747D0(v34);
  v38 = off_AFC24;
  v39 = v37;
  a2[6] = v37;
  v40 = a2[1];
  v41 = a2[4];
  v42 = a2[5];
  if ( (unsigned int)v38 > 4 )
  {
    snprintf(
      s,
      0x800u,
      "chain_num %d, chain_domain_num %d, chain_asic_num %d, domain_asic_num %d\n",
      v40,
      v41,
      v42,
      v37);
    sub_3AF5C(4, s, 0, v43);
  }
  v44 = calloc(v40, 0x20u);
  a2[14] = v44;
  if ( !v44 )
  {
    if ( (unsigned int)off_AFC24 <= 3 )
      return -1;
    snprintf(s, 0x800u, "malloc %d chain_t failed\n", v40);
    sub_3AF5C(3, s, 0, v47);
    goto LABEL_66;
  }
  v45 = 0;
  v190 = (char *)(28 * v39);
  v46 = -28 * v39;
  while ( v40 > v45 )
  {
    v48 = a2[14];
    *(_DWORD *)(v48 + 32 * v45) = v45;
    v49 = calloc(v41, 8u);
    v50 = v48 + 32 * v45;
    *(_DWORD *)(v50 + 12) = v49;
    if ( !v49 )
    {
      if ( (unsigned int)off_AFC24 <= 3 )
        return -1;
      snprintf(s, 0x800u, "malloc %d domain_t failed\n", v41);
LABEL_60:
      sub_3AF5C(3, s, 0, v51);
LABEL_66:
      if ( (unsigned int)off_AFC24 > 3 )
      {
        strcpy(s, "alloc topol failed\n");
        sub_3AF5C(3, s, 0, *(_DWORD *)"failed\n");
        return -1;
      }
      return -1;
    }
    v52 = calloc(v42, 0x1Cu);
    *(_DWORD *)(v50 + 8) = v52;
    if ( !v52 )
    {
      if ( (unsigned int)off_AFC24 <= 3 )
        return -1;
      snprintf(s, 0x800u, "malloc %d asic_t failed\n", v42);
      goto LABEL_60;
    }
    v53 = 0;
    for ( i = 0; ; ++i )
    {
      v53 += (int)v190;
      if ( v41 <= i )
        break;
      v55 = *(_DWORD *)(v50 + 12);
      *(_DWORD *)(v55 + 8 * i) = i;
      v56 = v55 + 8 * i;
      *(_DWORD *)(v56 + 4) = *(_DWORD *)(v50 + 8) + v53 + v46;
    }
    ++v45;
  }
  v57 = (_DWORD *)sub_72B10(v187, "pic");
  v58 = v57;
  if ( !v57 || *v57 )
  {
    if ( (unsigned int)off_AFC24 <= 3 )
      return -1;
    strcpy(s, "get pic failed\n");
    sub_3AF5C(3, s, 0, *(_DWORD *)"ed\n");
    goto LABEL_133;
  }
  if ( (unsigned int)off_AFC24 > 4 )
  {
    strcpy(s, "pic:\n");
    sub_3AF5C(4, s, 0, "pic:\n");
  }
  v59 = (_DWORD *)sub_72B10(v58, "type");
  if ( !v59 || *v59 != 2 )
  {
    if ( (unsigned int)off_AFC24 <= 3 )
      return -1;
    strcpy(s, "get type failed\n");
    sub_3AF5C(3, s, 0, *(_DWORD *)"led\n");
    goto LABEL_133;
  }
  if ( (unsigned int)off_AFC24 > 4 )
  {
    v60 = (const char *)((int (*)(void))sub_74300)();
    snprintf(s, 0x800u, "type: %s\n", v60);
    sub_3AF5C(4, s, 0, v61);
  }
  v62 = (_DWORD *)sub_72B10(v58, "i2c_addr");
  if ( !v62 || *v62 != 3 )
  {
    if ( (unsigned int)off_AFC24 <= 3 )
      return -1;
    strcpy(s, "get i2c_addr failed\n");
    sub_3AF5C(3, s, 0, *(_DWORD *)" failed\n");
    goto LABEL_133;
  }
  if ( (unsigned int)off_AFC24 > 4 )
  {
    v63 = sub_747D0(v62);
    snprintf(s, 0x800u, "i2c_addr: %d\n", v63);
    sub_3AF5C(4, s, 0, v64);
  }
  v65 = (_DWORD *)sub_72B10(v58, "sensor");
  v66 = v65;
  if ( v65 && *v65 == 1 )
  {
    if ( (unsigned int)off_AFC24 > 4 )
    {
      strcpy(s, "pic sensor:\n");
      sub_3AF5C(4, s, 0, *(_DWORD *)"");
    }
    a2[16] = sub_7365C(v66);
    v67 = sub_7365C(v66);
    v68 = calloc(v67, 0xCu);
    a2[17] = v68;
    if ( v68 )
    {
      for ( j = 0; ; ++j )
      {
        if ( j >= sub_7365C(v66) )
          goto LABEL_135;
        v72 = (_DWORD *)sub_736A8(v66, j);
        v73 = v72;
        if ( !v72 || *v72 )
          break;
        v75 = (_DWORD *)sub_72B10(v72, "index");
        v76 = v75;
        if ( !v75 || *v75 != 3 )
        {
          if ( (unsigned int)off_AFC24 <= 3 )
            return -1;
          snprintf(s, 0x800u, "get array %d index failed\n", j);
          goto LABEL_117;
        }
        if ( (unsigned int)off_AFC24 > 4 )
        {
          v77 = sub_747D0(v75);
          snprintf(s, 0x800u, "index: %d\n", v77);
          sub_3AF5C(4, s, 0, v78);
        }
        v191 = a2[17];
        v79 = 12 * sub_747D0(v76);
        *(_DWORD *)(v191 + v79) = sub_747D0(v76);
        v80 = v191 + v79;
        v81 = (_DWORD *)sub_72B10(v73, "type");
        if ( !v81 || *v81 != 2 )
        {
          if ( (unsigned int)off_AFC24 <= 3 )
            return -1;
          snprintf(s, 0x800u, "get array %d type failed\n", j);
          goto LABEL_117;
        }
        if ( (unsigned int)off_AFC24 > 4 )
        {
          v82 = (const char *)((int (*)(void))sub_74300)();
          snprintf(s, 0x800u, "type: %s\n", v82);
          sub_3AF5C(4, s, 0, v83);
        }
        v84 = (_DWORD *)sub_72B10(v73, "iic");
        v85 = v84;
        if ( !v84 || *v84 != 3 )
        {
          if ( (unsigned int)off_AFC24 <= 3 )
            return -1;
          snprintf(s, 0x800u, "get array %d bind_asic failed\n", j);
          goto LABEL_117;
        }
        if ( (unsigned int)off_AFC24 > 4 )
        {
          v86 = sub_747D0(v84);
          snprintf(s, 0x800u, "iic: %d\n", v86);
          sub_3AF5C(4, s, 0, v87);
        }
        *(_DWORD *)(v80 + 4) = sub_747D0(v85);
        v88 = (_DWORD *)sub_72B10(v73, "x");
        v89 = v88;
        if ( !v88 || *v88 != 2 )
        {
          if ( (unsigned int)off_AFC24 <= 3 )
            return -1;
          snprintf(s, 0x800u, "get array %d x failed\n", j);
          goto LABEL_117;
        }
        if ( (unsigned int)off_AFC24 > 4 )
        {
          v90 = (const char *)((int (*)(void))sub_74300)();
          snprintf(s, 0x800u, "x: %s\n", v90);
          sub_3AF5C(4, s, 0, v91);
        }
        if ( !a2[20] )
        {
          v92 = (const char *)sub_74300(v89);
          v93 = strncasecmp(v92, "right", 5u);
          if ( v93 )
            *(_BYTE *)(v80 + 8) = 0;
          else
            v94 = 1;
          if ( !v93 )
            *(_BYTE *)(v80 + 8) = v94;
        }
      }
      if ( (unsigned int)off_AFC24 <= 3 )
        return -1;
      snprintf(s, 0x800u, "get array %d failed\n", j);
LABEL_117:
      sub_3AF5C(3, s, 0, v74);
    }
    else
    {
      if ( (unsigned int)off_AFC24 <= 3 )
        return -1;
      v69 = sub_7365C(v66);
      snprintf(s, 0x800u, "malloc %d sensor_t failed\n", v69);
      sub_3AF5C(3, s, 0, v70);
    }
LABEL_133:
    if ( (unsigned int)off_AFC24 > 3 )
    {
      strcpy(s, "parse chain pic failed\n");
      sub_3AF5C(3, s, 0, *(_DWORD *)"pic failed\n");
      return -1;
    }
    return -1;
  }
  if ( strcmp((const char *)dword_5BA920, "BHB28601") )
  {
    if ( (unsigned int)off_AFC24 <= 3 )
      return -1;
    strcpy(s, "get pic sensor failed\n");
    sub_3AF5C(3, s, 0, *(unsigned __int16 *)"");
    goto LABEL_133;
  }
LABEL_135:
  v95 = (_DWORD *)sub_72B10(v187, "eeprom");
  v96 = v95;
  if ( !v95 || *v95 )
  {
    if ( (unsigned int)off_AFC24 <= 3 )
      return -1;
    strcpy(s, "get eeprom failed\n");
    sub_3AF5C(3, s, 0, *(unsigned __int16 *)"");
    goto LABEL_153;
  }
  if ( (unsigned int)off_AFC24 > 4 )
  {
    strcpy(s, "eeprom:\n");
    sub_3AF5C(4, s, 0, &s[8]);
  }
  v97 = (_DWORD *)sub_72B10(v96, "type");
  if ( !v97 || *v97 != 2 )
  {
    if ( (unsigned int)off_AFC24 <= 3 )
      return -1;
    strcpy(s, "get type failed\n");
    sub_3AF5C(3, s, 0, *(_DWORD *)"led\n");
    goto LABEL_153;
  }
  if ( (unsigned int)off_AFC24 > 4 )
  {
    v98 = (const char *)sub_74300(v97);
    snprintf(s, 0x800u, "type: %s\n", v98);
    sub_3AF5C(4, s, 0, v99);
  }
  v100 = (_DWORD *)sub_72B10(v96, "i2c_addr");
  if ( !v100 || *v100 != 3 )
  {
    if ( (unsigned int)off_AFC24 <= 3 )
      return -1;
    strcpy(s, "get i2c_addr failed\n");
    sub_3AF5C(3, s, 0, *(_DWORD *)" failed\n");
LABEL_153:
    if ( (unsigned int)off_AFC24 <= 3 )
      return -1;
    v30 = "parse chain eeprom failed\n";
    goto LABEL_195;
  }
  if ( (unsigned int)off_AFC24 > 4 )
  {
    v101 = sub_747D0(v100);
    snprintf(s, 0x800u, "i2c_addr: %d\n", v101);
    sub_3AF5C(4, s, 0, v102);
  }
  v103 = (_DWORD *)sub_72B10(v187, "sensor");
  v104 = v103;
  if ( !v103 || *v103 != 1 )
  {
    if ( (unsigned int)off_AFC24 <= 3 )
      return -1;
    strcpy(s, "get sensor failed\n");
    sub_3AF5C(3, s, 0, *(unsigned __int16 *)"");
    goto LABEL_193;
  }
  if ( (unsigned int)off_AFC24 > 4 )
  {
    strcpy(s, "sensor:\n");
    sub_3AF5C(4, s, 0, &s[8]);
  }
  a2[7] = sub_7365C(v104);
  v105 = sub_7365C(v104);
  v106 = calloc(v105, 0xCu);
  a2[15] = v106;
  if ( !v106 )
  {
    if ( (unsigned int)off_AFC24 <= 3 )
      return -1;
    v107 = sub_7365C(v104);
    snprintf(s, 0x800u, "malloc %d sensor_t failed\n", v107);
    sub_3AF5C(3, s, 0, v108);
LABEL_193:
    if ( (unsigned int)off_AFC24 <= 3 )
      return -1;
    v30 = "parse chain sensor failed\n";
LABEL_195:
    v128 = *(_DWORD *)v30;
    v129 = *((_DWORD *)v30 + 1);
    v130 = *((_DWORD *)v30 + 2);
    v131 = *((_DWORD *)v30 + 3);
    v132 = v30 + 16;
    *(_DWORD *)s = v128;
    *(_DWORD *)&s[4] = v129;
    *(_DWORD *)&s[8] = v130;
    *(_DWORD *)&s[12] = v131;
    v133 = v132[1];
    v134 = v132[2];
    *(_DWORD *)&s[16] = *v132;
    *(_DWORD *)&s[20] = v133;
    *(_WORD *)&s[24] = v134;
    s[26] = BYTE2(v134);
    sub_3AF5C(3, s, 0, HIWORD(v134));
    return -1;
  }
  for ( k = 0; k < sub_7365C(v104); ++k )
  {
    v110 = (_DWORD *)sub_736A8(v104, k);
    v111 = v110;
    if ( !v110 || *v110 )
    {
      if ( (unsigned int)off_AFC24 > 3 )
      {
        snprintf(s, 0x800u, "get array %d failed\n", k);
        goto LABEL_187;
      }
      return -1;
    }
    v113 = (_DWORD *)sub_72B10(v110, "index");
    v114 = v113;
    if ( !v113 || *v113 != 3 )
    {
      if ( (unsigned int)off_AFC24 > 3 )
      {
        snprintf(s, 0x800u, "get array %d index failed\n", k);
        goto LABEL_187;
      }
      return -1;
    }
    if ( (unsigned int)off_AFC24 > 4 )
    {
      v115 = sub_747D0(v113);
      snprintf(s, 0x800u, "index: %d\n", v115);
      sub_3AF5C(4, s, 0, v116);
    }
    v117 = a2[15];
    v118 = v117 + 12 * sub_747D0(v114);
    v119 = (_DWORD *)sub_72B10(v111, "type");
    if ( !v119 || *v119 != 2 )
    {
      if ( (unsigned int)off_AFC24 > 3 )
      {
        snprintf(s, 0x800u, "get array %d type failed\n", k);
        goto LABEL_187;
      }
      return -1;
    }
    if ( (unsigned int)off_AFC24 > 4 )
    {
      v120 = (const char *)sub_74300(v119);
      snprintf(s, 0x800u, "type: %s\n", v120);
      sub_3AF5C(4, s, 0, v121);
    }
    v122 = (_DWORD *)sub_72B10(v111, "bind_asic");
    v123 = v122;
    if ( !v122 || *v122 != 3 )
    {
      if ( (unsigned int)off_AFC24 <= 3 )
        return -1;
      snprintf(s, 0x800u, "get array %d bind_asic failed\n", k);
LABEL_187:
      sub_3AF5C(3, s, 0, v112);
      goto LABEL_193;
    }
    if ( (unsigned int)off_AFC24 > 4 )
    {
      v124 = sub_747D0(v122);
      snprintf(s, 0x800u, "bind_asic: %d\n", v124);
      sub_3AF5C(4, s, 0, v125);
    }
    *(_DWORD *)(v118 + 4) = sub_747D0(v123);
  }
  v126 = (_DWORD *)sub_72B10(v187, "ctrlboardsensor");
  v127 = v126;
  if ( !v126 || *v126 != 1 )
  {
    if ( !strcmp((const char *)dword_5BA920, "BHB28601") || (unsigned int)off_AFC24 <= 3 )
      goto LABEL_252;
    strcpy(s, "get ctrlboard sensor failed\n");
    sub_3AF5C(3, s, 0, *(_DWORD *)"");
    goto LABEL_250;
  }
  if ( (unsigned int)off_AFC24 > 4 )
  {
    strcpy(s, "ctrlboard sensor:\n");
    sub_3AF5C(4, s, 0, *(unsigned __int16 *)"");
  }
  a2[18] = sub_7365C(v127);
  v135 = sub_7365C(v127);
  v136 = calloc(v135, 0xCu);
  a2[19] = v136;
  if ( !v136 )
  {
    if ( (unsigned int)off_AFC24 <= 3 )
      goto LABEL_252;
    v137 = sub_7365C(v127);
    snprintf(s, 0x800u, "malloc %d sensor_t failed\n", v137);
    sub_3AF5C(3, s, 0, v138);
LABEL_250:
    if ( (unsigned int)off_AFC24 > 3 )
    {
      strcpy(s, "parse chain ctrlboard sensor failed\n");
      sub_3AF5C(3, s, 0, *(_DWORD *)" failed\n");
    }
    goto LABEL_252;
  }
  for ( m = 0; ; ++m )
  {
    if ( m >= sub_7365C(v127) )
      goto LABEL_252;
    v140 = (_DWORD *)sub_736A8(v127, m);
    v141 = v140;
    if ( !v140 || *v140 )
    {
      if ( (unsigned int)off_AFC24 <= 3 )
        goto LABEL_252;
      snprintf(s, 0x800u, "get array %d failed\n", m);
      goto LABEL_234;
    }
    v143 = (_DWORD *)sub_72B10(v140, "index");
    v144 = v143;
    if ( !v143 || *v143 != 3 )
    {
      if ( (unsigned int)off_AFC24 <= 3 )
        goto LABEL_252;
      snprintf(s, 0x800u, "get array %d index failed\n", m);
      goto LABEL_234;
    }
    if ( (unsigned int)off_AFC24 > 4 )
    {
      v145 = sub_747D0(v143);
      snprintf(s, 0x800u, "index: %d\n", v145);
      sub_3AF5C(4, s, 0, v146);
    }
    v192 = a2[19];
    v147 = 12 * sub_747D0(v144);
    *(_DWORD *)(v192 + v147) = sub_747D0(v144);
    v148 = v192 + v147;
    v149 = (_DWORD *)sub_72B10(v141, "type");
    if ( !v149 || *v149 != 2 )
    {
      if ( (unsigned int)off_AFC24 <= 3 )
        goto LABEL_252;
      snprintf(s, 0x800u, "get array %d type failed\n", m);
      goto LABEL_234;
    }
    if ( (unsigned int)off_AFC24 > 4 )
    {
      v150 = (const char *)sub_74300(v149);
      snprintf(s, 0x800u, "type: %s\n", v150);
      sub_3AF5C(4, s, 0, v151);
    }
    v152 = (_DWORD *)sub_72B10(v141, "iic");
    v153 = v152;
    if ( !v152 || *v152 != 3 )
    {
      if ( (unsigned int)off_AFC24 <= 3 )
        goto LABEL_252;
      snprintf(s, 0x800u, "get array %d bind_asic failed\n", m);
      goto LABEL_234;
    }
    if ( (unsigned int)off_AFC24 > 4 )
    {
      v154 = sub_747D0(v152);
      snprintf(s, 0x800u, "iic: %d\n", v154);
      sub_3AF5C(4, s, 0, v155);
    }
    *(_DWORD *)(v148 + 4) = sub_747D0(v153);
    v156 = (_DWORD *)sub_72B10(v141, "x");
    if ( !v156 || *v156 != 2 )
    {
      if ( (unsigned int)off_AFC24 <= 3 )
        goto LABEL_252;
      snprintf(s, 0x800u, "get array %d x failed\n", m);
      goto LABEL_234;
    }
    if ( (unsigned int)off_AFC24 > 4 )
    {
      v157 = (const char *)sub_74300(v156);
      snprintf(s, 0x800u, "x: %s\n", v157);
      sub_3AF5C(4, s, 0, v158);
    }
    v159 = (_DWORD *)sub_72B10(v141, "y");
    v160 = v159;
    if ( !v159 || *v159 != 2 )
      break;
    if ( (unsigned int)off_AFC24 > 4 )
    {
      v161 = (const char *)sub_74300(v159);
      snprintf(s, 0x800u, "y: %s\n", v161);
      sub_3AF5C(4, s, 0, v162);
    }
    if ( !a2[20] )
    {
      v163 = (const char *)sub_74300(v160);
      v164 = strncasecmp(v163, "right", 5u);
      if ( v164 )
        *(_BYTE *)(v148 + 8) = 0;
      else
        v165 = 1;
      if ( !v164 )
        *(_BYTE *)(v148 + 8) = v165;
    }
  }
  if ( (unsigned int)off_AFC24 > 3 )
  {
    snprintf(s, 0x800u, "get array %d y failed\n", m);
LABEL_234:
    sub_3AF5C(3, s, 0, v142);
    goto LABEL_250;
  }
LABEL_252:
  v166 = (_DWORD *)sub_72B10(v187, "tpl");
  v167 = v166;
  if ( v166 )
  {
    if ( *v166 == 1 )
    {
      *(_DWORD *)(a2[14] + 16) = sub_7365C(v166);
      v168 = (_DWORD *)sub_736A8(v167, 0);
      if ( v168 )
      {
        if ( *v168 == 1 )
        {
          v169 = 0;
          *(_DWORD *)(a2[14] + 20) = sub_7365C(v168);
          v170 = (_DWORD *)a2[14];
          v170[6] = calloc(v170[5] * v170[4], 4u);
          while ( 1 )
          {
            if ( v169 >= *(_DWORD *)(a2[14] + 16) )
              goto LABEL_278;
            v188 = sub_736A8(v167, v169);
            v171 = *(_DWORD *)(a2[14] + 20);
            if ( v171 != sub_7365C(v188) )
            {
              if ( (unsigned int)off_AFC24 <= 3 )
                goto LABEL_278;
              snprintf(s, 0x800u, "tpl row:%d column size is different!!!\n", v169);
              sub_3AF5C(3, s, 0, v172);
              goto LABEL_276;
            }
            for ( n = 0; n < *(_DWORD *)(a2[14] + 20); ++n )
            {
              v174 = sub_736A8(v188, n);
              *(_DWORD *)(*(_DWORD *)(a2[14] + 24) + 4 * (n + *(_DWORD *)(a2[14] + 20) * v169)) = sub_747D0(v174);
              v175 = a2[14];
              if ( n )
              {
                if ( n == *(_DWORD *)(v175 + 20) - 1 )
                {
                  if ( (unsigned int)off_AFC24 <= 4 )
                    continue;
                  memset(s, 0, 0x800u);
                  snprintf(
                    s,
                    0x800u,
                    "%3d],\n",
                    *(_DWORD *)(*(_DWORD *)(v175 + 24) + 4 * (n + *(_DWORD *)(v175 + 20) * v169)));
                }
                else
                {
                  if ( (unsigned int)off_AFC24 <= 4 )
                    continue;
                  memset(s, 0, 0x800u);
                  snprintf(
                    s,
                    0x800u,
                    "%3d,",
                    *(_DWORD *)(*(_DWORD *)(v175 + 24) + 4 * (n + *(_DWORD *)(v175 + 20) * v169)));
                }
                sub_3BE28(4, s, 0);
              }
              else if ( (unsigned int)off_AFC24 > 4 )
              {
                memset(s, 0, 0x800u);
                snprintf(
                  s,
                  0x800u,
                  "data[%2d]=[%d,",
                  v169,
                  *(_DWORD *)(*(_DWORD *)(v175 + 24) + 4 * *(_DWORD *)(v175 + 20) * v169));
                sub_3BE28(4, s, 0);
              }
            }
            ++v169;
          }
        }
      }
    }
  }
  if ( (unsigned int)off_AFC24 > 3 )
  {
    strcpy(s, "get tpl.data array failed\n");
    sub_3AF5C(3, s, 0, *(unsigned __int16 *)"");
LABEL_276:
    if ( (unsigned int)off_AFC24 > 3 )
    {
      strcpy(s, "parse chain tpl failed\n");
      sub_3AF5C(3, s, 0, *(_DWORD *)"tpl failed\n");
    }
  }
LABEL_278:
  v176 = 1;
  v177 = *(const void **)(a2[14] + 8);
  while ( v176 < a2[1] )
  {
    v178 = a2[14] + 32 * v176++;
    memcpy(*(void **)(v178 + 8), v177, 28 * a2[5]);
  }
  for ( ii = 0; ii < a2[7]; ++ii )
  {
    v180 = a2[15] + 12 * ii;
    v181 = *(_DWORD *)(v180 + 4);
    v182 = *(_DWORD *)(a2[14] + 8) + 28 * v181;
    if ( (unsigned int)off_AFC24 > 3 )
    {
      snprintf(s, 0x800u, "asic %d, wind %d, y %d\n", v181, a2[20], *(_DWORD *)(v182 + 8));
      sub_3AF5C(3, s, 0, v183);
    }
    v184 = a2[20];
    if ( v184 == 1 )
    {
      if ( *(_DWORD *)(v182 + 8) <= a2[3] / 3 )
      {
        if ( (unsigned int)off_AFC24 > 3 )
        {
          v189 = a2[20];
          strcpy(s, "air in\n");
          sub_3AF5C(3, s, 0, 1);
          v185 = v189;
          goto LABEL_297;
        }
LABEL_296:
        v185 = 1;
        goto LABEL_297;
      }
    }
    else if ( !v184 && *(_DWORD *)(v182 + 8) >= 2 * a2[3] / 3 )
    {
      if ( (unsigned int)off_AFC24 > 3 )
      {
        v186 = a2[20];
        strcpy(s, "air in\n");
        sub_3AF5C(3, s, v186, 0);
        v185 = 1;
        goto LABEL_297;
      }
      goto LABEL_296;
    }
    if ( (unsigned int)off_AFC24 > 3 )
    {
      strcpy(s, "air out\n");
      sub_3AF5C(3, s, 0, &s[8]);
    }
    v185 = 0;
LABEL_297:
    *(_BYTE *)(v180 + 8) = v185;
  }
  return 0;
}
