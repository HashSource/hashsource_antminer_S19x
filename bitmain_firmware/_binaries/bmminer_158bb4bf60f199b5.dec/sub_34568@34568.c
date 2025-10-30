int __fastcall sub_34568(int a1)
{
  float v1; // s0
  int v3; // r6
  _DWORD *v5; // r3
  int v6; // r9
  unsigned int v7; // r8
  _DWORD **v8; // r6
  int v9; // r0
  int v10; // r0
  int v11; // r5
  int v12; // r5
  char *v13; // r8
  char *v14; // r1
  const char *v15; // r1
  int v16; // r5
  _DWORD *v17; // r3
  unsigned int v18; // r1
  char *v19; // r8
  char *v20; // r9
  int v21; // r5
  void *v22; // r0
  int v23; // r5
  int v24; // r0
  int v25; // r12
  int v26; // r5
  int v27; // r1
  int v28; // r1
  int v29; // r5
  unsigned int v30; // r0
  _DWORD *v31; // r2
  int v32; // r12
  int v33; // t1
  unsigned int v34; // r1
  int v35; // r6
  int i; // r3
  int v37; // r8
  unsigned int v38; // r9
  int k; // r5
  int v40; // r0
  unsigned int v41; // r8
  int v42; // r3
  int v43; // r2
  int v44; // t1
  _DWORD *v45; // r5
  __int64 v46; // r2
  unsigned int v47; // r0
  bool v48; // cc
  int v49; // r6
  _DWORD *v50; // r5
  int v51; // r7
  int v52; // r1
  int v53; // r3
  int v54; // r3
  float v55; // s14
  int v56; // r6
  unsigned int v57; // lr
  int v58; // r0
  int v59; // r12
  _DWORD *v60; // r3
  int v61; // t1
  _DWORD *v62; // r1
  int v63; // t1
  int v64; // r0
  unsigned int v65; // r1
  int v66; // lr
  int v67; // t1
  int v68; // r5
  int v69; // t1
  signed int v70; // r1
  signed int v71; // s17
  unsigned int v72; // s15
  int v73; // r2
  unsigned int v74; // r7
  int v75; // r5
  int v76; // r0
  int v77; // r6
  int v78; // r0
  int v79; // r2
  int v80; // r6
  int v81; // lr
  int v82; // r3
  _DWORD *v83; // r2
  _DWORD *v84; // lr
  int v85; // r12
  int v86; // t1
  _DWORD *v87; // r1
  int v88; // t1
  int v89; // r12
  int v90; // lr
  unsigned int v91; // r6
  int v92; // r5
  int v93; // r1
  int v94; // t1
  int v95; // r0
  int v96; // t1
  int v97; // lr
  unsigned int v98; // r0
  char *v99; // r1
  int v100; // t1
  char *v101; // r12
  int v102; // t1
  __int64 v103; // r0
  unsigned int v104; // r6
  int v105; // r2
  int v106; // r3
  int v107; // r0
  int v108; // r3
  unsigned int v109; // r2
  int v110; // r7
  int v111; // r1
  int v112; // r7
  int j; // r6
  int v114; // r5
  int v115; // r3
  int v116; // r2
  int v117; // r5
  int v118; // r12
  int v119; // r2
  unsigned int v120; // r0
  int m; // r3
  int v122; // r1
  int v123; // t1
  bool v124; // zf
  unsigned int v125; // r0
  int v126; // r2
  unsigned int v127; // r3
  const char *v128; // r12
  int v129; // r0
  int v130; // r1
  int v131; // r2
  int v132; // r3
  int *v133; // r12
  int v134; // r0
  int v135; // r1
  int v136; // r2
  int v137; // r3
  int v138; // r1
  int v139; // r2
  int v140; // r7
  int v141; // r6
  int v142; // lr
  int v143; // r1
  int v144; // r5
  int v145; // t1
  int v146; // r12
  int v147; // r0
  unsigned int v148; // t1
  unsigned int v149; // r0
  int v150; // lr
  int *v151; // r5
  int v152; // t1
  int v153; // r2
  int v154; // t1
  unsigned int v155; // r6
  unsigned int *v156; // r1
  int v157; // r5
  __int64 v158; // r2
  int v159; // r0
  int v160; // r2
  int v161; // r6
  int v162; // r0
  char *v163; // r3
  int v164; // t1
  int v165; // r8
  int v166; // r3
  int v167; // r1
  int v168; // r2
  unsigned int v169; // r0
  int v170; // r12
  char *v171; // r2
  int v172; // t1
  int v173; // [sp+18h] [bp-1044h]
  int v174; // [sp+1Ch] [bp-1040h]
  unsigned int v175; // [sp+2Ch] [bp-1030h]
  char *v176; // [sp+2Ch] [bp-1030h]
  int v177; // [sp+2Ch] [bp-1030h]
  unsigned int v178; // [sp+30h] [bp-102Ch]
  char *v179; // [sp+30h] [bp-102Ch]
  unsigned int v180; // [sp+30h] [bp-102Ch]
  char *v181; // [sp+30h] [bp-102Ch]
  char *v182; // [sp+30h] [bp-102Ch]
  char *v183; // [sp+30h] [bp-102Ch]
  int v184; // [sp+34h] [bp-1028h]
  int v185; // [sp+34h] [bp-1028h]
  pthread_t newthread; // [sp+3Ch] [bp-1020h] BYREF
  _DWORD v187[2]; // [sp+40h] [bp-101Ch] BYREF
  _DWORD v188[2]; // [sp+48h] [bp-1014h] BYREF
  int (__fastcall *v189)(unsigned int); // [sp+50h] [bp-100Ch]
  _BYTE s[64]; // [sp+54h] [bp-1008h] BYREF
  _DWORD v191[497]; // [sp+94h] [bp-FC8h] BYREF
  _DWORD v192[513]; // [sp+858h] [bp-804h] BYREF

  if ( sub_344E0() )
  {
    v3 = 0;
    if ( (unsigned int)dword_9E31C > 3 )
    {
      strcpy((char *)v192, "Sweep already done, exit.\n");
      sub_47AB4(3, v192, 0);
    }
    return v3;
  }
  sub_4A60C(v187);
  dword_1AEA74 = 2;
  v3 = sub_33E28(a1);
  if ( v3 )
  {
    dword_1AEA74 = 1;
    return v3;
  }
  if ( (unsigned int)dword_9E31C <= 3 )
    goto LABEL_8;
  strcpy((char *)v192, "Sweep start...\n");
  sub_47AB4(3, v192, 0);
  v12 = *(_DWORD *)(dword_1AEA6C + 8);
  if ( (unsigned int)dword_9E31C > 3 )
  {
    snprintf((char *)v192, 0x800u, "%-40s : %s\n", "proj_type", *(const char **)v12);
    sub_47EC8(3, v192, 0);
    if ( (unsigned int)dword_9E31C <= 3 )
      goto LABEL_8;
    snprintf((char *)v192, 0x800u, "%-40s : %d\n", "work_mode_count", *(_DWORD *)(v12 + 4));
    sub_47EC8(3, v192, 0);
    if ( (unsigned int)dword_9E31C <= 3 )
      goto LABEL_68;
    v13 = "false";
    if ( *(_BYTE *)(v12 + 8) )
      v14 = "true";
    else
      v14 = "false";
    snprintf((char *)v192, 0x800u, "%-40s : %s\n", "is_inc_freq_with_high_vol", v14);
    sub_47EC8(3, v192, 0);
    if ( (unsigned int)dword_9E31C <= 3 )
      goto LABEL_8;
    if ( *(_BYTE *)(v12 + 9) )
      v13 = "true";
    snprintf((char *)v192, 0x800u, "%-40s : %s\n", "is_inc_freq_with_high_vol_runtime", v13);
    sub_47EC8(3, v192, 0);
  }
  if ( (unsigned int)dword_9E31C <= 3 )
    goto LABEL_71;
  v15 = "true";
  if ( !*(_DWORD *)(v12 + 12) )
    v15 = "false";
  snprintf((char *)v192, 0x800u, "%-40s : %s\n", "is_board_init_with_power_off", v15);
  sub_47EC8(3, v192, 0);
  if ( (unsigned int)dword_9E31C <= 3 )
    goto LABEL_8;
  snprintf((char *)v192, 0x800u, "%-40s : %.4f\n", "hw_threshold", *(float *)(v12 + 16));
  sub_47EC8(3, v192, 0);
LABEL_68:
  if ( (unsigned int)dword_9E31C <= 3 )
    goto LABEL_74;
  snprintf((char *)v192, 0x800u, "%-40s : %.2f\n", "nonce_rate_threshold", *(float *)(v12 + 20));
  sub_47EC8(3, v192, 0);
  if ( (unsigned int)dword_9E31C <= 3 )
    goto LABEL_8;
  snprintf((char *)v192, 0x800u, "%-40s : %.2f\n", "nonce_rate_ideal_threshold", *(float *)(v12 + 24));
  sub_47EC8(3, v192, 0);
LABEL_71:
  if ( (unsigned int)dword_9E31C <= 3 )
  {
LABEL_77:
    if ( (unsigned int)dword_9E31C > 3 )
    {
      snprintf((char *)v192, 0x800u, "%-40s : %d\n", "pm_read_freq", *(_DWORD *)(v12 + 44));
      sub_47EC8(3, v192, 0);
      if ( (unsigned int)dword_9E31C > 3 )
      {
        snprintf((char *)v192, 0x800u, "%-40s : %d\n", "pm_grade_step", *(_DWORD *)(v12 + 48));
        sub_47EC8(3, v192, 0);
        goto LABEL_80;
      }
    }
    goto LABEL_8;
  }
  snprintf((char *)v192, 0x800u, "%-40s : %.2f\n", "nonce_rate_ideal_threshold", *(float *)(v12 + 24));
  sub_47EC8(3, v192, 0);
  if ( (unsigned int)dword_9E31C <= 3 )
    goto LABEL_8;
  snprintf((char *)v192, 0x800u, "%-40s : %s\n", "pattern_path", *(const char **)(v12 + 32));
  sub_47EC8(3, v192, 0);
LABEL_74:
  if ( (unsigned int)dword_9E31C <= 3 )
  {
LABEL_80:
    if ( (unsigned int)dword_9E31C > 3 )
    {
      snprintf((char *)v192, 0x800u, "%-40s : %d\n", "r2_back_step", *(_DWORD *)(v12 + 52));
      sub_47EC8(3, v192, 0);
      if ( (unsigned int)dword_9E31C > 3 )
      {
        strcpy((char *)v192, "\n");
        sub_47EC8(3, v192, 0);
      }
    }
    goto LABEL_8;
  }
  snprintf((char *)v192, 0x800u, "%-40s : %d\n", "fan_pwm", *(_DWORD *)(v12 + 36));
  sub_47EC8(3, v192, 0);
  if ( (unsigned int)dword_9E31C > 3 )
  {
    snprintf((char *)v192, 0x800u, "%-40s : %d\n", "pm_read_voltage", *(_DWORD *)(v12 + 40));
    sub_47EC8(3, v192, 0);
    goto LABEL_77;
  }
LABEL_8:
  v5 = *(_DWORD **)(dword_1AEA6C + 8);
  if ( v5[1] )
  {
    v6 = 0;
    v7 = 0;
    do
    {
      v8 = (_DWORD **)(v5[14] + v6);
      if ( (unsigned int)dword_9E31C <= 3 )
        goto LABEL_10;
      snprintf((char *)v192, 0x800u, "[work mode %d]\n", v7);
      sub_47EC8(3, v192, 0);
      if ( (unsigned int)dword_9E31C > 3 )
      {
        snprintf((char *)v192, 0x800u, "%-40s : %d\n", "voltage_base", **v8);
        sub_47EC8(3, v192, 0);
        if ( (unsigned int)dword_9E31C <= 3 )
          goto LABEL_10;
        snprintf((char *)v192, 0x800u, "%-40s : %d\n", "voltage_step", (*v8)[1]);
        sub_47EC8(3, v192, 0);
        if ( (unsigned int)dword_9E31C <= 3 )
          goto LABEL_20;
        snprintf((char *)v192, 0x800u, "%-40s : %d\n", "voltage_threshold", (*v8)[2]);
        sub_47EC8(3, v192, 0);
        if ( (unsigned int)dword_9E31C <= 3 )
          goto LABEL_10;
        snprintf((char *)v192, 0x800u, "%-40s : %d\n", "voltage_apply_inc", (*v8)[3]);
        sub_47EC8(3, v192, 0);
      }
      if ( (unsigned int)dword_9E31C <= 3 )
        goto LABEL_23;
      snprintf((char *)v192, 0x800u, "%-40s : %d\n", "voltage_apply_max", (*v8)[4]);
      sub_47EC8(3, v192, 0);
      if ( (unsigned int)dword_9E31C <= 3 )
        goto LABEL_10;
      snprintf((char *)v192, 0x800u, "%-40s : %d\n", "voltage_unbalance_inc", (*v8)[5]);
      sub_47EC8(3, v192, 0);
LABEL_20:
      if ( (unsigned int)dword_9E31C <= 3 )
        goto LABEL_26;
      snprintf((char *)v192, 0x800u, "%-40s : %d\n", "voltage_r2_inc", (*v8)[6]);
      sub_47EC8(3, v192, 0);
      if ( (unsigned int)dword_9E31C <= 3 )
        goto LABEL_10;
      snprintf((char *)v192, 0x800u, "%-40s : %d\n", "freq_base", *v8[1]);
      sub_47EC8(3, v192, 0);
LABEL_23:
      if ( (unsigned int)dword_9E31C <= 3 )
        goto LABEL_29;
      snprintf((char *)v192, 0x800u, "%-40s : %d\n", "freq_threshold", v8[1][1]);
      sub_47EC8(3, v192, 0);
      if ( (unsigned int)dword_9E31C <= 3 )
        goto LABEL_10;
      snprintf((char *)v192, 0x800u, "%-40s : %d\n", "freq_serial_threshold", v8[1][2]);
      sub_47EC8(3, v192, 0);
LABEL_26:
      if ( (unsigned int)dword_9E31C <= 3 )
        goto LABEL_32;
      snprintf((char *)v192, 0x800u, "%-40s : %d\n", "freq_diff_threshold", v8[1][3]);
      sub_47EC8(3, v192, 0);
      if ( (unsigned int)dword_9E31C <= 3 )
        goto LABEL_10;
      snprintf((char *)v192, 0x800u, "%-40s : %d\n", "freq_high_vol_threshold_dec", v8[1][4]);
      sub_47EC8(3, v192, 0);
LABEL_29:
      if ( (unsigned int)dword_9E31C <= 3 )
        goto LABEL_35;
      snprintf((char *)v192, 0x800u, "%-40s : %d\n", "freq_basic_step", v8[1][5]);
      sub_47EC8(3, v192, 0);
      if ( (unsigned int)dword_9E31C <= 3 )
        goto LABEL_10;
      snprintf((char *)v192, 0x800u, "%-40s : %d\n", "freq_pm_grade_step", v8[1][6]);
      sub_47EC8(3, v192, 0);
LABEL_32:
      if ( (unsigned int)dword_9E31C <= 3 )
        goto LABEL_38;
      snprintf((char *)v192, 0x800u, "%-40s : %d\n", "freq_pm_grade_bad_asic_dec", v8[1][7]);
      sub_47EC8(3, v192, 0);
      if ( (unsigned int)dword_9E31C <= 3 )
        goto LABEL_10;
      snprintf((char *)v192, 0x800u, "%-40s : %d\n", "freq_tempeture_dec", v8[1][8]);
      sub_47EC8(3, v192, 0);
LABEL_35:
      if ( (unsigned int)dword_9E31C > 3 )
      {
        snprintf((char *)v192, 0x800u, "%-40s : %d\n", "freq_basic_retry", v8[1][9]);
        sub_47EC8(3, v192, 0);
        if ( (unsigned int)dword_9E31C > 3 )
        {
          snprintf((char *)v192, 0x800u, "%-40s : %d\n", "hash_rate_target", *v8[2]);
          sub_47EC8(3, v192, 0);
LABEL_38:
          if ( (unsigned int)dword_9E31C > 3 )
          {
            snprintf((char *)v192, 0x800u, "%-40s : %d\n", "hash_rate_for_vol_inc", v8[2][1]);
            sub_47EC8(3, v192, 0);
            if ( (unsigned int)dword_9E31C > 3 )
            {
              snprintf((char *)v192, 0x800u, "%-40s : %d\n", "hash_rate_rank_step", v8[2][2]);
              sub_47EC8(3, v192, 0);
            }
          }
        }
      }
LABEL_10:
      ++v7;
      v6 += 12;
      v5 = *(_DWORD **)(dword_1AEA6C + 8);
    }
    while ( v7 < v5[1] );
  }
  v3 = sub_371E8(a1, v5[8]);
  if ( v3 )
  {
    dword_1AEA74 = 1;
    sub_33B7C();
    return v3;
  }
  pthread_create(&newthread, 0, (void *(*)(void *))sub_33988, 0);
  pthread_detach(newthread);
  v3 = sub_24B88();
  if ( v3 )
  {
    if ( (unsigned int)dword_9E31C > 3 )
    {
      strcpy((char *)v192, "Board init failed.\n");
      sub_47AB4(3, v192, 0);
    }
    goto LABEL_45;
  }
  *(float *)(dword_1AEA6C + 4) = (float)sub_17308();
  sub_21F2C();
  usleep(0x2710u);
  sub_13EE8(*(unsigned __int8 *)(*(_DWORD *)(dword_1AEA6C + 8) + 36));
  sub_1A0F0(*(_DWORD *)(*(_DWORD *)(dword_1AEA6C + 8) + 40));
  sub_30770(
    255,
    (unsigned __int8)byte_A0D79,
    *(_DWORD *)(*(_DWORD *)(dword_1AEA6C + 8) + 44),
    *(unsigned __int8 *)(*(_DWORD *)(dword_1AEA6C + 8) + 8));
  v16 = sub_1A1C0();
  if ( v16 != sub_1A1B0() )
  {
    v3 = sub_1A3B8();
    if ( v3 )
    {
LABEL_45:
      dword_1AEA74 = 1;
      goto LABEL_46;
    }
  }
  sub_38EEC(dword_1AEA6C + 5272, dword_1AEA6C + 5896, *(_DWORD *)(*(_DWORD *)(dword_1AEA6C + 8) + 48));
  v17 = *(_DWORD **)(dword_1AEA6C + 8);
  if ( !v17[1] )
  {
    v18 = dword_9E31C;
LABEL_154:
    if ( v18 > 3 )
    {
      strcpy((char *)v192, "Flush result.\n");
      sub_47AB4(3, v192, 0);
    }
    goto LABEL_93;
  }
  v18 = dword_9E31C;
  v19 = 0;
  v20 = 0;
  while ( 1 )
  {
    v173 = v17[14];
    if ( v18 > 3 )
    {
      snprintf((char *)v192, 0x800u, "Do single work mode pattern test, work_mode = %d.\n", v20);
      sub_47AB4(3, v192, 0);
    }
    memset(v191, 0, sizeof(v191));
    v21 = dword_1AEA6C;
    memset((void *)(dword_1AEA6C + 5072), 0, 0x40u);
    memset((void *)(v21 + 5136), 0, 0x40u);
    v22 = memset((void *)(v21 + 5200), 0, 0x40u);
    v23 = v21 + 4 * (_DWORD)v20 + 4096;
    *(_DWORD *)(v23 + 1168) = 0;
    *(_DWORD *)(v23 + 1172) = 0;
    if ( sub_3997C(v22) )
    {
      if ( (unsigned int)dword_9E31C > 3 )
      {
        strcpy((char *)v192, "Freq tuning basic init failed.\n");
        sub_47AB4(3, v192, 0);
      }
      goto LABEL_92;
    }
    v174 = v173 + 12 * (_DWORD)v20;
    memset(s, 0, sizeof(s));
    v28 = sub_33C2C(v174, (int)s);
    if ( v28 )
      goto LABEL_92;
    v29 = dword_A0D68;
    v30 = 0;
    v31 = s;
    v32 = dword_A0D68;
    do
    {
      v33 = *(_DWORD *)(v32 + 4);
      v32 += 4;
      ++v31;
      if ( v33 == 1 )
      {
        ++v28;
        v30 += *(v31 - 1);
      }
    }
    while ( v31 != v191 );
    if ( v28 )
      v30 = sub_77070(v30, v28, v31);
    v34 = *(_DWORD *)(*(_DWORD *)(v174 + 4) + 36);
    if ( v34 > v30 )
    {
      if ( (unsigned int)dword_9E31C > 3 )
      {
        snprintf((char *)v192, 0x800u, "freq_avg = %d, freq_basic_retry = %d, is_need_retry = %d\n", v30, v34, 1);
        sub_47AB4(3, v192, 0);
        v29 = dword_A0D68;
      }
      v46 = 1177758991LL
          * ((unsigned int)(*(_DWORD *)(*(_DWORD *)(v174 + 8) + 8)
                          * 1000
                          * *(_DWORD *)(*(_DWORD *)(dword_1AEA6C + 8) + 52)) >> 1);
      v47 = sub_77070(HIDWORD(v46) >> 12, *(unsigned __int8 *)(v29 + 12935), v46);
      **(_DWORD **)(v173 + 12 * (_DWORD)v20) += *(_DWORD *)(*(_DWORD *)(v173 + 12 * (_DWORD)v20) + 24);
      v48 = (unsigned int)dword_9E31C > 3;
      *(_DWORD *)(*(_DWORD *)(v174 + 4) + 4) -= 5 * (v47 / 5);
      if ( v48 )
      {
        snprintf((char *)v192, 0x800u, "voltage_base = %d\n", **(_DWORD **)(v173 + 12 * (_DWORD)v20));
        sub_47AB4(3, v192, 0);
        if ( (unsigned int)dword_9E31C > 3 )
        {
          snprintf((char *)v192, 0x800u, "freq_threshold = %d\n", *(_DWORD *)(*(_DWORD *)(v174 + 4) + 4));
          sub_47AB4(3, v192, 0);
        }
      }
      memset(s, 0, sizeof(s));
      if ( sub_33C2C(v174, (int)s) )
        goto LABEL_92;
      v29 = dword_A0D68;
    }
    else if ( (unsigned int)dword_9E31C > 3 )
    {
      snprintf((char *)v192, 0x800u, "freq_avg = %d, freq_basic_retry = %d, is_need_retry = %d\n", v30, v34, 0);
      sub_47AB4(3, v192, 0);
      v29 = dword_A0D68;
    }
    v35 = 0;
    for ( i = v29; ; i = dword_A0D68 )
    {
      if ( *(_DWORD *)(i + 4 * v35 + 4) == 1 )
      {
        sub_39BEC(v35);
        if ( v1 > *(float *)(dword_1AEA6C + 4 * v35 + 5072) )
          *(float *)(dword_1AEA6C + 4 * v35 + 5072) = v1;
      }
      if ( ++v35 == 16 )
        break;
    }
    if ( (unsigned int)dword_9E31C > 3 )
    {
      strcpy((char *)v192, "Build tuning PM grade config.\n");
      sub_47AB4(3, v192, 0);
    }
    v42 = 1;
    v43 = dword_A0D68;
    v191[0] = **(_DWORD **)(v173 + 12 * (_DWORD)v20);
    do
    {
      v44 = *(_DWORD *)(v43 + 4);
      v43 += 4;
      if ( v44 == 1 )
        v191[v42] = *(_DWORD *)&s[v42 * 4 - 4];
      ++v42;
    }
    while ( v42 != 17 );
    v45 = (_DWORD *)dword_1AEA6C;
    v191[17] = *(_DWORD *)(*(_DWORD *)(v174 + 4) + 4);
    v191[18] = *(_DWORD *)(*(_DWORD *)(v174 + 4) + 8);
    v191[19] = *(_DWORD *)(*(_DWORD *)(v174 + 4) + 12);
    v191[20] = *(_DWORD *)(*(_DWORD *)(v174 + 4) + 24);
    v191[21] = *(_DWORD *)(*(_DWORD *)(v174 + 4) + 28);
    LOWORD(v191[22]) = *(_WORD *)(*(_DWORD *)(dword_1AEA6C + 8) + 8);
    v191[23] = *(_DWORD *)(*(_DWORD *)(dword_1AEA6C + 8) + 12);
    v191[24] = *(_DWORD *)(*(_DWORD *)(dword_1AEA6C + 8) + 16);
    v191[25] = *(_DWORD *)(*(_DWORD *)(dword_1AEA6C + 8) + 20);
    v191[26] = *(_DWORD *)(*(_DWORD *)(dword_1AEA6C + 8) + 28);
    v191[27] = *(_DWORD *)(*(_DWORD *)(dword_1AEA6C + 8) + 48);
    v191[28] = sub_77070(*(_DWORD *)(v45[2] + 48) + 5, *(_DWORD *)(v45[2] + 48), v174);
    memcpy(&v191[29], v45 + 1318, 0x270u);
    memcpy(&v191[185], v45 + 1474, 0x4E0u);
    if ( sub_3BBE8(v191) )
    {
      if ( (unsigned int)dword_9E31C > 3 )
      {
        strcpy((char *)v192, "PM grade init failed.\n");
        sub_47AB4(3, v192, 0);
      }
      goto LABEL_92;
    }
    v49 = sub_3BD34();
    if ( v49 )
      break;
    v50 = &v191[1];
    do
    {
      v51 = 4 * v49;
      if ( *(_DWORD *)(dword_A0D68 + 4 * v49 + 4) == 1 )
      {
        if ( sub_3B5A8(v49) )
        {
          sub_3B5C4(v49, dword_1AEA6C + 312 * v49 + 12);
        }
        else
        {
          v52 = dword_1AEA6C + 320 + 312 * v49;
          v53 = dword_1AEA6C + 312 * v49 + 8;
          do
          {
            *(_DWORD *)(v53 + 4) = *v50;
            v53 += 4;
          }
          while ( v53 != v52 );
          if ( (unsigned int)dword_9E31C > 3 )
          {
            snprintf((char *)v192, 0x800u, "Chain %d freq result is invalid, using freq_base as default.\n", v49);
            sub_47AB4(3, v192, 0);
          }
        }
        sub_3B658(v49);
        if ( v1 > *(float *)(dword_1AEA6C + v51 + 5072) )
          *(float *)(dword_1AEA6C + v51 + 5072) = v1;
      }
      ++v49;
      ++v50;
    }
    while ( v49 != 16 );
    v54 = dword_1AEA6C;
    v55 = *(float *)(dword_1AEA6C + 4);
    if ( v55 < 35.0 )
    {
      if ( v55 < 25.0 || v55 >= 35.0 )
      {
        if ( v55 >= 15.0 )
        {
          if ( v55 >= 25.0 )
            v56 = 10;
          else
            v56 = 20;
        }
        else
        {
          v56 = 10;
        }
      }
      else
      {
        v56 = 30;
      }
    }
    else
    {
      v56 = 40;
    }
    v57 = dword_9E31C;
    if ( (unsigned int)dword_9E31C > 4 )
    {
      snprintf((char *)v192, 0x800u, "env_temp = %.2f, freq_sub = %d.\n", v55, v56);
      sub_47AB4(4, v192, 0);
      v54 = dword_1AEA6C;
      v57 = dword_9E31C;
    }
    v58 = dword_A0D68;
    v59 = v54 + 5000;
    v60 = (_DWORD *)(v54 + 8);
    do
    {
      v61 = *(_DWORD *)(v58 + 4);
      v58 += 4;
      v62 = v60 + 78;
      if ( v61 == 1 )
      {
        do
        {
          v63 = v60[1];
          *++v60 = v63 - v56;
        }
        while ( v60 != v62 );
      }
      v60 = v62;
    }
    while ( v62 != (_DWORD *)v59 );
    if ( v57 > 3 )
    {
      snprintf((char *)v192, 0x800u, "Sub runtime freq directly, freq_sub = %d.\n", v56);
      sub_47AB4(3, v192, 0);
    }
    sub_3143C(v188);
    v64 = dword_A0D68;
    v65 = 0;
    v66 = dword_1AEA6C + 8;
    v178 = 149370 * (unsigned int)*(unsigned __int8 *)(dword_A0D68 + 12935) / 0x3E8;
    do
    {
      v67 = *(_DWORD *)(v64 + 4);
      v64 += 4;
      v68 = v66 + 312;
      if ( v67 == 1 )
      {
        do
        {
          v69 = *(_DWORD *)(v66 + 4);
          v66 += 4;
          v65 += 383 * v69;
        }
        while ( v66 != v68 );
      }
      v66 = v68;
    }
    while ( v64 != dword_A0D68 + 64 );
    v70 = v65 / 0x3E8;
    v71 = v70;
    v72 = (unsigned int)((double)v70 * 0.97);
    if ( v72 < v188[1] )
    {
      v73 = 1000;
      v175 = 1000 * (v72 / 0x3E8);
    }
    else
    {
      v175 = v189((unsigned int)((double)v70 * 0.97));
    }
    v74 = dword_9E31C;
    if ( (unsigned int)dword_9E31C > 3 )
    {
      snprintf((char *)v192, 0x800u, "hash_rate_unit_GH    = %d\n", v178);
      sub_47AB4(3, v192, 0);
      v74 = dword_9E31C;
      if ( (unsigned int)dword_9E31C > 3 )
      {
        snprintf((char *)v192, 0x800u, "hash_rate_curr_GH     = %d\n", v71);
        sub_47AB4(3, v192, 0);
        v74 = dword_9E31C;
        if ( (unsigned int)dword_9E31C > 3 )
        {
          snprintf((char *)v192, 0x800u, "hash_rate_for_sale_GH = %d\n", v72);
          sub_47AB4(3, v192, 0);
          v74 = dword_9E31C;
          if ( (unsigned int)dword_9E31C > 3 )
          {
            snprintf((char *)v192, 0x800u, "hash_rate_sale_GH     = %d\n", v175);
            sub_47AB4(3, v192, 0);
            v74 = dword_9E31C;
          }
        }
      }
    }
    v75 = dword_A0D68;
    v76 = v72 - v175;
    v77 = dword_1AEA6C;
    v176 = (char *)dword_1AEA6C;
    if ( v76 <= 0 )
    {
      v82 = 0;
      v80 = dword_1AEA6C + 8;
    }
    else
    {
      v78 = sub_77070(v76, v178, v73);
      v79 = v77;
      v80 = v77 + 8;
      v81 = v79 + 4992;
      v82 = 5 * v78;
      v83 = (_DWORD *)v80;
      v84 = (_DWORD *)(v81 + 8);
      v85 = v75;
      do
      {
        v86 = *(_DWORD *)(v85 + 4);
        v85 += 4;
        v87 = v83 + 78;
        if ( v86 == 1 )
        {
          do
          {
            v88 = v83[1];
            *++v83 = v88 - v82;
          }
          while ( v87 != v83 );
        }
        v83 = v87;
      }
      while ( v87 != v84 );
    }
    v89 = v80;
    v90 = v75;
    v91 = 0;
    v92 = v75 + 64;
    v93 = v89;
    v179 = v176 + 12;
    do
    {
      v94 = *(_DWORD *)(v90 + 4);
      v90 += 4;
      v95 = v93 + 312;
      if ( v94 == 1 )
      {
        do
        {
          v96 = *(_DWORD *)(v93 + 4);
          v93 += 4;
          v91 += 383 * v96;
        }
        while ( v93 != v95 );
      }
      v93 = v95;
    }
    while ( v92 != v90 );
    if ( v74 > 3 )
    {
      snprintf(
        (char *)v192,
        0x800u,
        "Sub runtime freq by hash rate, freq_sub = %d, hash_rate_now = %d.\n",
        v82,
        v91 / 0x3E8);
      sub_47AB4(3, v192, 0);
      v176 = (char *)dword_1AEA6C;
      v179 = (char *)(dword_1AEA6C + 12);
    }
    sub_3143C(v188);
    v97 = dword_A0D68;
    v98 = 0;
    v99 = v179 - 4;
    do
    {
      v100 = *(_DWORD *)(v97 + 4);
      v97 += 4;
      v101 = v99 + 312;
      if ( v100 == 1 )
      {
        do
        {
          v102 = *((_DWORD *)v99 + 1);
          v99 += 4;
          v98 += 383 * v102;
        }
        while ( v101 != v99 );
      }
      v99 = v101;
    }
    while ( v97 != dword_A0D68 + 64 );
    v103 = 274877907LL * v98;
    v104 = HIDWORD(v103) >> 6;
    if ( (unsigned int)dword_9E31C <= 3
      || (snprintf(
            (char *)v192,
            0x800u,
            "hash_rate_curr = %d, hash_rate_for_vol_inc = %d\n",
            HIDWORD(v103) >> 6,
            *(_DWORD *)(*(_DWORD *)(v174 + 8) + 4)),
          sub_47AB4(3, v192, 0),
          (unsigned int)dword_9E31C <= 3) )
    {
      if ( *(_DWORD *)(*(_DWORD *)(v173 + 12 * (_DWORD)v20) + 8) <= **(_DWORD **)(v173 + 12 * (_DWORD)v20) )
        goto LABEL_272;
    }
    else
    {
      snprintf(
        (char *)v192,
        0x800u,
        "voltage_base = %d, voltage_threshold = %d\n",
        **(_DWORD **)(v173 + 12 * (_DWORD)v20),
        *(_DWORD *)(*(_DWORD *)(v173 + 12 * (_DWORD)v20) + 8));
      sub_47AB4(3, v192, 0);
      if ( **(_DWORD **)(v173 + 12 * (_DWORD)v20) >= *(_DWORD *)(*(_DWORD *)(v173 + 12 * (_DWORD)v20) + 8) )
      {
        if ( (unsigned int)dword_9E31C > 3 )
        {
          strcpy((char *)v192, "Pass: voltage is reach threshold.\n");
          sub_47AB4(3, v192, 0);
          v105 = 1;
          goto LABEL_220;
        }
        goto LABEL_272;
      }
    }
    if ( (unsigned int)v189(v104) >= *(_DWORD *)(*(_DWORD *)(v174 + 8) + 4) && !sub_33A7C() )
    {
      if ( (unsigned int)dword_9E31C > 3 )
      {
        strcpy((char *)v192, "Pass: hash rate is enough.\n");
        sub_47AB4(3, v192, 0);
      }
LABEL_272:
      v105 = 1;
      goto LABEL_220;
    }
    if ( (unsigned int)dword_9E31C > 3 )
    {
      strcpy((char *)v192, "Not pass: hash rate is not enough.\n");
      sub_47AB4(3, v192, 0);
    }
    v105 = 0;
LABEL_220:
    v106 = dword_1AEA6C + 4096;
    *((_DWORD *)v176 + 1267) = v105;
    if ( *(_DWORD *)(v106 + 972) )
    {
      v110 = sub_33A7C();
      if ( v110 )
      {
        v111 = dword_1AEA6C;
        v112 = 12;
        for ( j = 0; j != 16; ++j )
        {
          if ( *(_DWORD *)(dword_A0D68 + 4 * j + 4) == 1 )
          {
            if ( *(_DWORD *)(v111 + 4 * (j + 1300)) )
              v114 = 250;
            else
              v114 = 300;
            if ( (unsigned int)dword_9E31C > 3 )
            {
              snprintf((char *)v192, 0x800u, "Mark unqualified, chain = %d, freq = %d\n", j, v114);
              sub_47AB4(3, v192, 0);
            }
            v111 = dword_1AEA6C;
            v115 = dword_1AEA6C + v112 - 4;
            v116 = dword_1AEA6C + v112 + 308;
            do
            {
              *(_DWORD *)(v115 + 4) = v114;
              v115 += 4;
            }
            while ( v116 != v115 );
            *(_DWORD *)(v111 + 4 * (j + 1250) + 4) = 29874 * v114 / 0x3E8u;
          }
          v112 += 312;
        }
        *(_DWORD *)(v111 + 4 * (_DWORD)(v20 + 1316) + 4) = 1;
      }
      else
      {
        if ( sub_3405C((int **)v174, *(_DWORD *)(*(_DWORD *)(dword_1AEA6C + 8) + 12), 0) )
        {
          if ( (unsigned int)dword_9E31C <= 3 )
            goto LABEL_92;
          v128 = "Get ideal hash rate failed, round 0, exit.\n";
          goto LABEL_276;
        }
        if ( sub_378DC() )
        {
          if ( sub_3405C((int **)v174, 1, 1) )
          {
            if ( (unsigned int)dword_9E31C <= 3 )
              goto LABEL_92;
            v128 = "Get ideal hash rate failed, round 1, exit.\n";
            goto LABEL_276;
          }
          v177 = 1;
        }
        else
        {
          v177 = 0;
        }
        if ( sub_378DC() )
        {
          sub_3143C(v188);
          v149 = 0;
          v150 = 0;
          v151 = (int *)(dword_A0D68 + 4);
          do
          {
            v152 = *v151++;
            if ( v152 == 1 )
            {
              v153 = dword_1AEA6C + 8 + v150;
              do
              {
                v154 = *(_DWORD *)(v153 + 4);
                v153 += 4;
                v149 += 383 * v154;
              }
              while ( dword_1AEA6C + 320 + v150 != v153 );
            }
            v150 += 312;
          }
          while ( v150 != 4992 );
          v180 = v149 / 0x3E8;
          v155 = v189(v149 / 0x3E8);
          if ( (unsigned int)dword_9E31C > 3 )
          {
            snprintf((char *)v192, 0x800u, "hash_rate_curr_GH = %d\n", v180);
            sub_47AB4(3, v192, 0);
            if ( (unsigned int)dword_9E31C > 3 )
            {
              snprintf((char *)v192, 0x800u, "hash_rate_sale_GH = %d\n", v155);
              sub_47AB4(3, v192, 0);
            }
          }
          v156 = *(unsigned int **)(v174 + 8);
          if ( v155 > *v156 )
          {
            v157 = dword_A0D68;
            v158 = 274877907LL * ((unsigned int)&loc_24778 + 2) * *(unsigned __int8 *)(dword_A0D68 + 12935);
            v159 = sub_77070(v156[2], HIDWORD(v158) >> 6, v158);
            v160 = dword_1AEA6C;
            v161 = 5 * v159;
            v162 = 1;
            v181 = (char *)(dword_1AEA6C - 304);
            v184 = dword_1AEA6C + 8;
            do
            {
              if ( *(_DWORD *)(v157 + 4 * v162) == 1 )
              {
                v163 = &v181[312 * v162];
                do
                {
                  v164 = *((_DWORD *)v163 + 1);
                  v163 += 4;
                  *(_DWORD *)v163 = v164 - v161;
                }
                while ( v163 != (char *)(v184 + 312 * v162) );
              }
              ++v162;
            }
            while ( v162 != 17 );
            v169 = 0;
            v183 = (char *)(v160 - 304);
            v170 = 1;
            v185 = v160 + 8;
            do
            {
              if ( *(_DWORD *)(v157 + 4 * v170) == 1 )
              {
                v171 = &v183[312 * v170];
                do
                {
                  v172 = *((_DWORD *)v171 + 1);
                  v171 += 4;
                  v169 += 383 * v172;
                }
                while ( (char *)(v185 + 312 * v170) != v171 );
              }
              ++v170;
            }
            while ( v170 != 17 );
            if ( (unsigned int)dword_9E31C > 3 )
            {
              snprintf(
                (char *)v192,
                0x800u,
                "Sub runtime freq to low rank, freq_sub = %d, hash_rate_now = %d.\n",
                v161,
                v169 / 0x3E8);
              sub_47AB4(3, v192, 0);
            }
          }
          else
          {
            **(_DWORD **)(v173 + 12 * (_DWORD)v20) += *(_DWORD *)(*(_DWORD *)(v173 + 12 * (_DWORD)v20) + 20);
            if ( (unsigned int)dword_9E31C > 3 )
            {
              snprintf((char *)v192, 0x800u, "Inc voltage, voltage_base = %d\n", **(_DWORD **)(v173 + 12 * (_DWORD)v20));
              sub_47AB4(3, v192, 0);
            }
          }
          if ( sub_3405C((int **)v174, 1, v177 + 1) )
          {
            if ( (unsigned int)dword_9E31C <= 3 )
              goto LABEL_92;
            v128 = "Get ideal hash rate failed, round 2, exit.\n";
LABEL_276:
            v129 = *(_DWORD *)v128;
            v130 = *((_DWORD *)v128 + 1);
            v131 = *((_DWORD *)v128 + 2);
            v132 = *((_DWORD *)v128 + 3);
            v133 = (int *)(v128 + 16);
            v192[0] = v129;
            v192[1] = v130;
            v192[2] = v131;
            v192[3] = v132;
            v134 = *v133;
            v135 = v133[1];
            v136 = v133[2];
            v137 = v133[3];
            v133 += 4;
            v192[4] = v134;
            v192[5] = v135;
            v192[6] = v136;
            v192[7] = v137;
            v138 = v133[1];
            v139 = v133[2];
            v192[8] = *v133;
            v192[9] = v138;
            v192[10] = v139;
            sub_47AB4(3, v192, 0);
            goto LABEL_92;
          }
          if ( sub_378DC() )
          {
            *(_DWORD *)(dword_1AEA6C + 4 * (_DWORD)(v20 + 1316)) = 1;
            v182 = v19;
            do
            {
              if ( *(_DWORD *)(dword_A0D68 + 4 * v110 + 4) == 1 )
              {
                if ( sub_37834(v110) )
                  v165 = 250;
                else
                  v165 = 300;
                if ( (unsigned int)dword_9E31C > 3 )
                {
                  snprintf((char *)v192, 0x800u, "Mark unbalance, chain = %d, freq = %d\n", v110, v165);
                  sub_47AB4(3, v192, 0);
                }
                v166 = dword_1AEA6C;
                v167 = dword_1AEA6C + 320 + 312 * v110;
                v168 = dword_1AEA6C + 312 * v110 + 8;
                do
                {
                  *(_DWORD *)(v168 + 4) = v165;
                  v168 += 4;
                }
                while ( v167 != v168 );
                *(_DWORD *)(v166 + 4 * (v110 + 1250) + 4) = 29874 * v165 / 0x3E8u;
              }
              ++v110;
            }
            while ( v110 != 16 );
            v19 = v182;
          }
        }
      }
      v140 = dword_1AEA6C;
      v141 = dword_A0D68;
      v142 = 0;
      v143 = dword_1AEA6C + 8;
      v144 = dword_1AEA6C + 1376 * (_DWORD)v20 + 7143;
      do
      {
        v145 = *(_DWORD *)(v141 + 4);
        v141 += 4;
        v146 = v143 + 312;
        if ( v145 == 1 )
        {
          v147 = v144;
          do
          {
            v148 = *(_DWORD *)(v143 + 4);
            v143 += 4;
            *(_BYTE *)++v147 = v148 / 5;
          }
          while ( v146 != v143 );
          *(_WORD *)(v144 + 79) = **(_DWORD **)v174;
          *(_DWORD *)(v140 + 1376 * (_DWORD)v20 + 86 * v142 + 7224) = *(_DWORD *)(v140 + 4 * v142 + 5004);
        }
        ++v142;
        v143 = v146;
        v144 += 86;
      }
      while ( v142 != 16 );
    }
    v107 = sub_39AB4();
    sub_3B4EC(v107);
    v108 = dword_1AEA6C;
    if ( *(_DWORD *)(dword_1AEA6C + 5068) )
    {
      v17 = *(_DWORD **)(dword_1AEA6C + 8);
      v109 = v17[1];
      if ( (char *)(v109 - 1) == v20 )
      {
        v18 = dword_9E31C;
      }
      else
      {
        sub_385EC(v17[3]);
        v18 = dword_9E31C;
        v17 = *(_DWORD **)(dword_1AEA6C + 8);
        v109 = v17[1];
      }
    }
    else
    {
      **(_DWORD **)(v173 + 12 * (_DWORD)v20) += *(_DWORD *)(*(_DWORD *)(v173 + 12 * (_DWORD)v20) + 4);
      v18 = dword_9E31C;
      v48 = (unsigned int)dword_9E31C > 3;
      *(_DWORD *)(*(_DWORD *)(v174 + 4) + 4) -= *(_DWORD *)(*(_DWORD *)(v174 + 4) + 16);
      if ( v48 )
      {
        snprintf(
          (char *)v192,
          0x800u,
          "Not pass, try again, voltage = %d, freq_threshold = %d\n",
          **(_DWORD **)(v173 + 12 * (_DWORD)v20),
          *(_DWORD *)(*(_DWORD *)(v174 + 4) + 4));
        sub_47AB4(3, v192, 0);
        v108 = dword_1AEA6C;
        v18 = dword_9E31C;
      }
      v17 = *(_DWORD **)(v108 + 8);
      --v19;
      v109 = v17[1];
    }
    v20 = ++v19;
    if ( (unsigned int)v19 >= v109 )
      goto LABEL_154;
  }
  if ( (unsigned int)dword_9E31C > 3 )
  {
    strcpy((char *)v192, "Do freq tuning PM grade failed.\n");
    sub_47AB4(3, v192, 0);
  }
LABEL_92:
  v24 = sub_39AB4();
  sub_3B4EC(v24);
  if ( (unsigned int)dword_9E31C > 3 )
  {
    strcpy((char *)v192, "Do single work mode pattern test failed, exit.\n");
    sub_47AB4(3, v192, 0);
    v18 = dword_9E31C;
    goto LABEL_154;
  }
LABEL_93:
  v25 = dword_1AEA6C;
  v26 = 0;
  v27 = *(_DWORD *)(*(_DWORD *)(dword_1AEA6C + 8) + 4);
  do
  {
    if ( *(_DWORD *)(dword_A0D68 + 4 * v26 + 4) == 1 )
    {
      sub_19190(v26, v27);
      v25 = dword_1AEA6C;
      v27 = *(_DWORD *)(*(_DWORD *)(dword_1AEA6C + 8) + 4);
    }
    ++v26;
  }
  while ( v26 != 16 );
  if ( v27 )
  {
    v37 = 0;
    v38 = 0;
    while ( 2 )
    {
      for ( k = 0; k != 16; ++k )
      {
        if ( *(_DWORD *)(dword_A0D68 + 4 * k + 4) == 1 )
        {
          v40 = sub_19098(k, (unsigned __int8)v38, (void *)(v25 + v37 + 7144 + 86 * k));
          if ( v40 )
          {
            v3 = v40;
            if ( (unsigned int)dword_9E31C > 3 )
            {
              snprintf((char *)v192, 0x800u, "Flush result to eeprom failed, work_mode = %d, chain = %d.\n", v38, k);
              sub_47AB4(3, v192, 0);
            }
            goto LABEL_123;
          }
          v25 = dword_1AEA6C;
        }
      }
      ++v38;
      v37 += 1376;
      if ( v38 < *(_DWORD *)(*(_DWORD *)(v25 + 8) + 4) )
        continue;
      break;
    }
  }
  v3 = sub_18650();
LABEL_123:
  if ( *(_DWORD *)(*(_DWORD *)(dword_1AEA6C + 8) + 4) )
  {
    if ( *(_DWORD *)(dword_1AEA6C + 5268) )
    {
      sub_31794(14, 255);
    }
    else
    {
      v41 = *(_DWORD *)(dword_1AEA6C + 5264);
      if ( v41 )
      {
        sub_31794(21, 255);
      }
      else
      {
        v117 = 0;
        while ( 1 )
        {
          sub_3143C(v192);
          v118 = dword_1AEA6C;
          v119 = dword_A0D68;
          v120 = 0;
          for ( m = 0; m != 16; ++m )
          {
            v123 = *(_DWORD *)(v119 + 4);
            v119 += 4;
            v122 = v123;
            v124 = v123 == 1;
            if ( v123 == 1 )
              v122 = 1376 * v41 + 86 * m;
            if ( v124 )
              v120 += *(_DWORD *)(dword_1AEA6C + v122 + 7224);
          }
          if ( v192[1] > v120 )
          {
            v125 = 1000 * (v120 / 0x3E8);
          }
          else
          {
            v125 = ((int (*)(void))v192[2])();
            v118 = dword_1AEA6C;
          }
          v126 = *(_DWORD *)(v118 + 8);
          v127 = **(_DWORD **)(*(_DWORD *)(v126 + 56) + v117 + 8);
          if ( v127 > v125 )
            break;
          ++v41;
          v117 += 12;
          if ( v41 >= *(_DWORD *)(v126 + 4) )
            goto LABEL_127;
        }
        if ( (unsigned int)dword_9E31C > 3 )
        {
          snprintf(
            (char *)v192,
            0x800u,
            "Under target hash rate: work_mode = %d, hash_rate_sale = %d, hash_rate_target = %d.\n",
            v41,
            v125,
            v127);
          sub_47AB4(3, v192, 0);
        }
        sub_31794(6, 255);
      }
    }
  }
LABEL_127:
  if ( (unsigned int)dword_9E31C > 3 )
  {
    strcpy((char *)v192, "Mark sweep done.\n");
    sub_47AB4(3, v192, 0);
  }
  system("touch /config/scanfreqdone");
  if ( v3 || dword_1AEA74 != 2 )
    goto LABEL_45;
  dword_1AEA74 = 0;
LABEL_46:
  v9 = pthread_cancel(newthread);
  v10 = sub_374D4(v9);
  sub_373BC(v10);
  sub_33B7C();
  sub_4A60C(v191);
  v11 = v191[0] - v187[0];
  if ( v191[1] - v187[1] < 0 )
    --v11;
  if ( (unsigned int)dword_9E31C > 3 )
  {
    strcpy((char *)v192, "\n");
    sub_47AB4(3, v192, 0);
    if ( (unsigned int)dword_9E31C > 3 )
    {
      snprintf((char *)v192, 0x800u, "*** Sweep done, time cost %ld minutes. ***\n", v11 / 60);
      sub_47AB4(3, v192, 0);
      if ( (unsigned int)dword_9E31C > 3 )
      {
        strcpy((char *)v192, "\n");
        sub_47AB4(3, v192, 0);
      }
    }
  }
  return v3;
}
