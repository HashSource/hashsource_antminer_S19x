int __fastcall main(int a1, pthread_mutex_t **a2, char **a3)
{
  FILE *v4; // r6
  int v5; // r3
  size_t v6; // r0
  int v7; // r3
  size_t v8; // r8
  int v9; // r9
  char *v10; // r5
  size_t i; // r4
  const unsigned __int16 **v12; // r0
  int v13; // t1
  int v14; // r3
  int v15; // r3
  int v16; // r3
  int v17; // r3
  void *v18; // r5
  _DWORD *v19; // r4
  _DWORD *v20; // r0
  int v21; // r0
  int v22; // r0
  int v23; // r0
  int v24; // r0
  int v25; // r3
  int v26; // r4
  int v27; // r0
  int v28; // r0
  int v29; // r4
  int v30; // r3
  int v31; // r9
  int v32; // r5
  int v33; // r7
  int v34; // r3
  int *p_count; // r4
  int v36; // r2
  __int64 v37; // r0
  unsigned __int64 v38; // r2
  __int64 j; // r0
  double v40; // r0
  int v41; // r3
  __int64 k; // r0
  unsigned __int64 v43; // r2
  __int64 v44; // r0
  int v45; // r3
  int v46; // r1
  int v47; // r2
  int v48; // r3
  int v49; // r1
  int v50; // r2
  int v51; // r3
  int v52; // r1
  int v53; // r2
  int *v54; // r2
  int *v55; // r1
  unsigned int v56; // t1
  unsigned __int64 v57; // r0
  int *v58; // r3
  __int64 v60; // d16
  int v61; // r3
  int v62; // r3
  int v63; // r3
  int v64; // r3
  __int64 v65; // r4
  int v66; // r3
  int v67; // r0
  int v68; // r4
  int v69; // r0
  int v70; // r3
  char v71; // r2
  unsigned int v72; // r12
  int v73; // r0
  int v74; // r0
  int v76; // r3
  int *v77; // r0
  int v78; // r3
  int *v79; // r0
  int v80; // r3
  int *v81; // r0
  int v82; // r3
  int *v83; // r0
  int v84; // r3
  __int64 v85; // [sp+0h] [bp-170h]
  pthread_mutex_t *mutex; // [sp+18h] [bp-158h]
  pthread_mutex_t *mutexa; // [sp+18h] [bp-158h]
  char *v88; // [sp+1Ch] [bp-154h]
  __int64 v90; // [sp+20h] [bp-150h]
  int v92; // [sp+28h] [bp-148h]
  int v93; // [sp+28h] [bp-148h]
  int v94; // [sp+30h] [bp-140h]
  __int64 v95; // [sp+30h] [bp-140h]
  double v96; // [sp+30h] [bp-140h]
  int v97; // [sp+38h] [bp-138h]
  double v98; // [sp+38h] [bp-138h]
  __int64 v99; // [sp+38h] [bp-138h]
  int v100; // [sp+40h] [bp-130h]
  int v101; // [sp+50h] [bp-120h]
  int v102; // [sp+60h] [bp-110h] BYREF
  _DWORD v103[6]; // [sp+64h] [bp-10Ch] BYREF
  unsigned int v104; // [sp+7Ch] [bp-F4h]
  int v105; // [sp+80h] [bp-F0h] BYREF
  char dest[4]; // [sp+84h] [bp-ECh] BYREF
  int v107; // [sp+88h] [bp-E8h]
  int v108; // [sp+8Ch] [bp-E4h]
  int v109; // [sp+90h] [bp-E0h]
  int v110; // [sp+94h] [bp-DCh]
  int v111; // [sp+98h] [bp-D8h]
  int v112; // [sp+9Ch] [bp-D4h]
  int v113; // [sp+A0h] [bp-D0h] BYREF
  _BYTE s[64]; // [sp+A4h] [bp-CCh] BYREF
  struct sigaction act; // [sp+E4h] [bp-8Ch] BYREF
  _DWORD v116[64]; // [sp+170h] [bp+0h] BYREF
  char v117[2048]; // [sp+270h] [bp+100h] BYREF

  act.sa_handler = (__sighandler_t)sub_354E0;
  act.sa_flags = 0;
  sigemptyset(&act.sa_mask);
  sigaction(15, &act, &stru_5C1F5C);
  sigaction(2, &act, &stru_5C301C);
  sigaction(6, &act, &stru_5BFE54);
  sem_init(&sem, 0, 0);
  sub_35BE0(&unk_5C0F00, "main", 2841);
  mutex = *a2;
  memset(v116, 0, sizeof(v116));
  memset(s, 0, sizeof(s));
  snprintf(s, 0x40u, "pidof %s", (const char *)mutex);
  v4 = popen(s, "r");
  if ( !v4 )
  {
    if ( byte_4B9A22 && (byte_5C0EFC || byte_4B9A21 || dword_B3094 > 6) )
    {
      snprintf(v117, 0x800u, " app-service:%s Not Found!!!", (const char *)mutex);
      sub_3B6AC(7, v117, 0, v76);
    }
    goto LABEL_30;
  }
  while ( fgets((char *)v116, 256, v4) )
  {
    if ( byte_4B9A22 )
    {
      if ( byte_5C0EFC || byte_4B9A21 || dword_B3094 > 6 )
      {
        snprintf(v117, 0x800u, "pidof %s command result is: %s\n", (const char *)mutex, (const char *)v116);
        sub_3B6AC(7, v117, 0, v5);
        if ( byte_4B9A22 )
        {
          if ( byte_5C0EFC )
            goto LABEL_11;
          goto LABEL_9;
        }
      }
      else
      {
LABEL_9:
        if ( byte_4B9A21 || dword_B3094 > 6 )
        {
LABEL_11:
          v6 = strlen((const char *)v116);
          snprintf(v117, 0x800u, "strlen is: %d\n", v6);
          sub_3B6AC(7, v117, 0, v7);
        }
      }
    }
  }
  v8 = 0;
  v9 = 0;
  pclose(v4);
  v10 = (char *)&act.sa_restorer + 3;
  for ( i = 1; i <= strlen((const char *)v116); ++i )
  {
    v111 = 0;
    *(_DWORD *)dest = 0;
    v113 = 0;
    v107 = 0;
    v108 = 0;
    v109 = 0;
    v110 = 0;
    v112 = 0;
    v12 = _ctype_b_loc();
    v13 = (unsigned __int8)*++v10;
    if ( ((*v12)[v13] & 0x2000) != 0 )
    {
      strncpy(dest, (const char *)v116 + v8, i - v8 - 1);
      v14 = strtol(dest, 0, 10);
      if ( v14 > 0 && (++v9, byte_4B9A22) && (byte_5C0EFC || byte_4B9A21 || dword_B3094 > 6) )
      {
        v8 = i;
        snprintf(v117, 0x800u, "Parsed proc id is: %d\n", v14);
        sub_3B6AC(7, v117, 0, v15);
      }
      else
      {
        v8 = i;
      }
    }
  }
  if ( v9 )
  {
    if ( byte_5C0EFC || byte_4B9A21 || dword_B3094 > 2 )
    {
      snprintf(v117, 0x800u, " %d instance of %s is  already Running on this machine", v9, (const char *)mutex);
      sub_3B6AC(3, v117, 0, v16);
    }
    if ( v9 != 1 )
    {
      snprintf(v117, 0x800u, "%s is forbidden to start twice, will exit immediately!", (const char *)*a2);
      sub_3B6AC(3, v117, 1, v17);
    }
  }
LABEL_30:
  sub_7BE8C("/etc/bitmain_category.conf");
  v18 = calloc(1u, 0x1DE0u);
  dword_5C1F58 = (int)v18;
  v19 = calloc(1u, 0x188u);
  dword_5BFE4C = (int)v19;
  v20 = calloc(1u, 0x40u);
  v19[5] = v18;
  v20[9] = v19;
  dword_5BFE44 = (int)v20;
  v21 = sub_38918(a1, a2);
  v22 = sub_37B20(v21);
  v23 = sub_34F20(v22);
  if ( v23 )
    v23 = sub_458A0(5, "socket init failed!");
  v24 = sub_42B9C(v23);
  if ( v24 )
  {
    sub_458A0(5, "basic init failed!");
    while ( 1 )
      sleep(0xAu);
  }
  if ( dword_B6EB4 == 1 )
  {
    if ( (unsigned int)dword_B308C > 3 )
    {
      strcpy(v117, "enter sleep mode.\n");
      v24 = sub_3B6AC(3, v117, 0, *(_DWORD *)"mode.\n");
    }
    sub_2212C(v24);
    sub_1718C(0);
    while ( 1 )
      sleep(0xAu);
  }
  dword_5C0EF8 = (int)calloc(1u, 0x40u);
  pthread_attr_init((pthread_attr_t *)s);
  pthread_attr_setstacksize((pthread_attr_t *)s, 0x200000u);
  if ( sub_3E744(dword_5C0EF8, s, sub_350E4) && (byte_5C0EFC || byte_4B9A21 || dword_B3094 > 2) )
  {
    snprintf(v117, 0x800u, "%s: create thread for get api status failed\n", "main");
    sub_3B6AC(3, v117, 0, v25);
  }
  pthread_detach(*(_DWORD *)(dword_5C0EF8 + 12));
  v26 = *(_DWORD *)(*(_DWORD *)(dword_5BFE44 + 36) + 20);
  if ( pthread_mutex_init((pthread_mutex_t *)(v26 + 112), 0) )
    sub_35B10("bitmain_soc_prepare", 1955);
  sub_35BE0(v26, "bitmain_soc_prepare", 1956);
  sub_35BE0(v26 + 384, "bitmain_soc_prepare", 1957);
  sub_35BE0(v26 + 2248, "bitmain_soc_prepare", 1958);
  sub_35BE0(v26 + 4112, "bitmain_soc_prepare", 1959);
  sub_35BE0(v26 + 5976, "bitmain_soc_prepare", 1960);
  memset(v117, 0, 0x20u);
  *(_WORD *)&v117[2] = 26;
  v117[4] = ~(~((v117[4] & 0xFD | (2 * (byte_B6EB8 & 1u))) << 30) >> 30);
  v117[5] |= 7u;
  *(_WORD *)&v117[12] = dword_B303C;
  *(_WORD *)&v117[14] = dword_B3040;
  v117[10] = dword_B6EBC;
  v117[0] = 81;
  qmemcpy(&v117[8], "\t6", 2);
  v117[11] = 80;
  *(_WORD *)&v117[16] = 2570;
  v117[24] = 4;
  *(_WORD *)&v117[26] = 400;
  *(_WORD *)&v117[28] = 600;
  *(_WORD *)&v117[30] = sub_3F180(v117, 30);
  if ( !sub_46A00(
          *(_DWORD *)v117,
          *(_DWORD *)&v117[4],
          *(_DWORD *)&v117[8],
          *(_DWORD *)&v117[12],
          *(_DWORD *)&v117[16],
          *(_DWORD *)&v117[20],
          *(_DWORD *)&v117[24],
          *(_DWORD *)&v117[28]) )
  {
    sub_458A0(5, "soc init failed!");
    while ( 1 )
      sleep(0xAu);
  }
  v27 = sub_458A0(3, 0);
  if ( !byte_B6EC0 )
    sub_43FE0(v27);
  pthread_mutex_lock(&::mutex);
  if ( dword_B6E88 )
  {
    if ( (unsigned int)dword_B308C > 3 )
    {
      strcpy(v117, "start the cached job");
      sub_3B6AC(3, v117, 0, *(_DWORD *)"ched job");
    }
    sub_37FD4(dword_B6E8C, dword_B6E88);
  }
  v28 = pthread_mutex_unlock(&::mutex);
  sub_41D40(v28);
LABEL_57:
  if ( !*(_BYTE *)(dword_5BFE4C + 364) )
  {
    v100 = dword_5BFE44;
    v29 = *(_DWORD *)(*(_DWORD *)(dword_5BFE44 + 36) + 20);
    mutexa = (pthread_mutex_t *)v29;
    pthread_mutex_lock(&stru_535D28);
    if ( pthread_mutex_lock((pthread_mutex_t *)v29) )
    {
      v83 = _errno_location();
      snprintf(
        v117,
        0x800u,
        "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",
        *v83,
        "bmminer.c",
        "bitmain_c5_scanhash",
        2087);
      sub_3B6AC(3, v117, 1, v84);
    }
    if ( pthread_rwlock_rdlock((pthread_rwlock_t *)(v29 + 24)) )
    {
      v81 = _errno_location();
      snprintf(
        v117,
        0x800u,
        "WTF RDLOCK ERROR ON LOCK! errno=%d in %s %s():%d",
        *v81,
        "bmminer.c",
        "bitmain_c5_scanhash",
        2087);
      sub_3B6AC(3, v117, 1, v82);
    }
    if ( pthread_mutex_unlock((pthread_mutex_t *)v29) )
    {
      v79 = _errno_location();
      snprintf(
        v117,
        0x800u,
        "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
        *v79,
        "bmminer.c",
        "bitmain_c5_scanhash",
        2087);
      sub_3B6AC(3, v117, 1, v80);
    }
    v90 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        do
        {
          if ( !dword_5C40C8 )
          {
            *(_QWORD *)&dbl_9CD900 += v90;
            if ( pthread_rwlock_unlock((pthread_rwlock_t *)&mutexa[1]) )
            {
              v77 = _errno_location();
              snprintf(
                v117,
                0x800u,
                "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",
                *v77,
                "bmminer.c",
                "bitmain_c5_scanhash",
                2190);
              sub_3B6AC(3, v117, 1, v78);
            }
            off_B31B8();
            pthread_mutex_unlock(&stru_535D28);
            sub_3E0F0(1);
            if ( v90 )
            {
              if ( byte_4B9A22 && (byte_5C0EFC || byte_4B9A21 || dword_B3094 > 6) )
              {
                LODWORD(v65) = -(int)v90;
                HIDWORD(v65) = v90 - (HIDWORD(v90) + ((_DWORD)v90 != 0));
                LODWORD(v85) = -(int)v90;
                HIDWORD(v85) = HIDWORD(v65);
                snprintf(v117, 0x800u, "%s: hashes %llu ...\n", "bitmain_c5_scanhash", v85);
                sub_3B6AC(7, v117, 0, v66);
              }
              else
              {
                v65 = 0xFFFFFFFFLL * (unsigned int)v90;
                HIDWORD(v65) -= HIDWORD(v90);
              }
            }
            else
            {
              v65 = 0;
            }
            if ( v65 )
              dbl_B6EA0 = sub_8FDC4(v65) / 1000000000.0 + dbl_B6EA0;
            goto LABEL_57;
          }
          v30 = 0;
          v31 = dword_5C40C0[15 * dword_5C40C4 + 8];
          v32 = dword_5C40C0[15 * dword_5C40C4 + 3];
          v94 = dword_5C40C0[15 * dword_5C40C4 + 6];
          v97 = dword_5C40C0[15 * dword_5C40C4 + 7];
          v33 = dword_5C40C0[15 * dword_5C40C4 + 9];
          v92 = dword_5C40C0[15 * dword_5C40C4 + 4];
          v88 = (char *)(HIBYTE(dword_5C40C0[15 * dword_5C40C4 + 5])
                       | (dword_5C40C0[15 * dword_5C40C4 + 5] << 24)
                       | ((dword_5C40C0[15 * dword_5C40C4 + 5] & 0xFF0000u) >> 8)
                       | ((dword_5C40C0[15 * dword_5C40C4 + 5] & 0xFF00) << 8));
          do
            ++v30;
          while ( v30 != 32 );
          if ( byte_4B9A22 && (byte_5C0EFC || byte_4B9A21 || dword_B3094 > 6) )
          {
            snprintf(
              v117,
              0x800u,
              "%s: job_id:0x%x   work_id:0x%x   nonce2:0x%llx nonce3:0x%x   version:0x%x\n",
              "bitmain_c5_scanhash",
              v32,
              v92,
              __PAIR64__(v97, v94),
              v31,
              v88);
            sub_3B6AC(7, v117, 0, v34);
          }
          p_count = (int *)&mutexa[7].__count;
          if ( (unsigned int)dword_5C40C4 > 0x1FD )
            v36 = 0;
          else
            v36 = dword_5C40C4;
          if ( (unsigned int)dword_5C40C4 <= 0x1FD )
            ++v36;
          dword_5C40C4 = v36;
          --dword_5C40C8;
        }
        while ( !v32 );
        if ( v31 != dword_B6EC4 || v92 != dword_B6EC8 || v88 != (char *)dword_B6ECC )
          break;
LABEL_134:
        if ( sub_26C0C(v33) == 1 )
        {
          sub_36F98(v100);
          sub_27090(v33);
        }
      }
      dword_B6EC4 = v31;
      dword_B6EC8 = v92;
      dword_B6ECC = (int)v88;
      if ( byte_4B9A22 )
      {
        if ( !byte_5C0EFC && !byte_4B9A21 && dword_B3094 <= 6 )
          goto LABEL_85;
        snprintf(v117, 0x800u, "%s: Chain ID J%d ...\n", "bitmain_c5_scanhash", v33 + 1);
        sub_3B6AC(7, v117, 0, v62);
        if ( !byte_4B9A22 )
          goto LABEL_123;
        if ( !byte_5C0EFC )
        {
LABEL_85:
          if ( !byte_4B9A21 && dword_B3094 <= 6 )
          {
            switch ( dword_B2FA8 - v32 )
            {
              case 0:
                goto LABEL_88;
              case 1:
                goto LABEL_121;
              case 2:
                goto LABEL_87;
              case 3:
                goto LABEL_120;
              default:
                goto LABEL_131;
            }
          }
        }
        snprintf(
          v117,
          0x800u,
          "%s: given_id:%d job_id:%d switch:%d  ...\n",
          "bitmain_c5_scanhash",
          dword_B2FA8,
          v32,
          dword_B2FA8 - v32);
        sub_3B6AC(7, v117, 0, v61);
      }
LABEL_123:
      switch ( dword_B2FA8 - v32 )
      {
        case 0:
          goto LABEL_88;
        case 1:
LABEL_121:
          p_count = &mutexa[84].__spins;
          goto LABEL_88;
        case 2:
LABEL_87:
          p_count = &mutexa[162].__kind;
          goto LABEL_88;
        case 3:
LABEL_120:
          p_count = (int *)&mutexa[240].__count;
LABEL_88:
          sub_36E38(v100, (int)&v102, (int)p_count, (int)p_count, COERCE_DOUBLE(__PAIR64__(v97, v94)), (int)v88);
          v93 = v102;
          v101 = *p_count;
          v98 = *(double *)(v102 + 312);
          v37 = sub_8FE80(*(_DWORD *)(v102 + 312), *(_DWORD *)(v102 + 316));
          v95 = v37;
          if ( v37 != qword_B6ED0 )
          {
            v38 = v37;
            qword_B6ED0 = v37;
            dbl_B6ED8 = 0.0;
            if ( v37 )
            {
              for ( j = 1; ; ++j )
              {
                v38 >>= 1;
                if ( !v38 )
                  break;
              }
            }
            else
            {
              j = 0;
            }
            *(_QWORD *)&v40 = j - 1;
            dbl_B6ED8 = v40;
            if ( byte_4B9A22 )
            {
              if ( byte_5C0EFC || byte_4B9A21 || dword_B3094 > 6 )
              {
                snprintf(
                  v117,
                  0x800u,
                  "%s: pool_diff:%llu work_diff:%f pool_diff_bit:%llu ...\n",
                  "hashtest_submit",
                  v95,
                  v98,
                  v40);
                sub_3B6AC(7, v117, 0, v41);
              }
            }
          }
          v96 = dbl_B2FA0;
          k = sub_8FE80(LODWORD(dbl_B2FA0), HIDWORD(dbl_B2FA0));
          v99 = k;
          if ( k != *(_QWORD *)&dword_B6EE0 )
          {
            *(_QWORD *)&dword_B6EE0 = k;
            if ( k )
            {
              v43 = k;
              for ( k = 1; ; ++k )
              {
                v43 >>= 1;
                if ( !v43 )
                  break;
              }
            }
            v44 = k - 1;
            *(_QWORD *)&dword_B6EE8 = v44;
            if ( byte_4B9A22 && (byte_5C0EFC || byte_4B9A21 || dword_B3094 > 6) )
            {
              snprintf(
                v117,
                0x800u,
                "%s:net_diff:%llu current_diff:%f net_diff_bit %llu ...\n",
                "hashtest_submit",
                v99,
                v96,
                v44);
              sub_3B6AC(7, v117, 0, v45);
            }
          }
          v46 = *(_DWORD *)(v93 + 132);
          v47 = *(_DWORD *)(v93 + 136);
          v48 = *(_DWORD *)(v93 + 140);
          v116[2] = *(_DWORD *)(v93 + 128);
          v116[3] = v46;
          v116[4] = v47;
          v116[5] = v48;
          v49 = *(_DWORD *)(v93 + 148);
          v50 = *(_DWORD *)(v93 + 152);
          v51 = *(_DWORD *)(v93 + 156);
          v116[6] = *(_DWORD *)(v93 + 144);
          v116[7] = v49;
          v116[8] = v50;
          v116[9] = v51;
          v116[1] = 0;
          v116[0] = 80;
          v52 = *(_DWORD *)(v93 + 68);
          v53 = *(_DWORD *)(v93 + 72);
          v103[0] = *(_DWORD *)(v93 + 64);
          v103[1] = v52;
          v103[2] = v53;
          sub_3F2A8(&v116[10], v103, 12);
          v103[0] = v31;
          sub_3F2A8(&v116[13], v103, 4);
          sub_2CCA8((int)v116);
          memset(v116, 0, 0xE8u);
          sub_2CE5C(v103);
          v54 = &v105;
          v55 = &v102;
          do
          {
            v56 = v54[1];
            ++v54;
            v55[1] = bswap32(v56);
            ++v55;
          }
          while ( v54 != &v113 );
          LODWORD(v57) = v105;
          if ( v105 )
          {
            if ( sub_26C0C(v33) == 1 )
            {
              if ( byte_5C0EFC || byte_4B9A21 || dword_B3094 > 2 )
              {
                strcpy(v117, "hash2_32 error");
                sub_3B6AC(3, v117, 0, *(_DWORD *)"or");
              }
              sub_36F98(v100);
              sub_27090(v33);
            }
            if ( byte_4B9A22 && (byte_5C0EFC || byte_4B9A21 || dword_B3094 > 6) )
            {
              snprintf(v117, 0x800u, "%s: HASH2_32[7] != 0", "hashtest_submit");
              sub_3B6AC(7, v117, 0, v64);
            }
LABEL_118:
            v60 = 0;
            goto LABEL_119;
          }
          v58 = &v105;
          while ( !*--v58 )
          {
            LODWORD(v57) = v57 + 1;
            if ( (_DWORD)v57 == 7 )
            {
              v57 = 7;
              goto LABEL_116;
            }
          }
          v57 = (int)v57;
LABEL_116:
          if ( *(_QWORD *)&dbl_B6ED8 >> 5 > v57 )
            goto LABEL_118;
          v67 = sub_26AB4(v57);
          v68 = sub_7A704(v31, v67);
          v69 = sub_7A6FC(v31);
          if ( byte_4B9A22 && (byte_5C0EFC || byte_4B9A21 || dword_B3094 > 6) )
          {
            snprintf(
              v117,
              0x800u,
              "%s: chain %d which_asic_nonce %d which_core_nonce %d",
              "hashtest_submit",
              v33,
              v68,
              v69);
            sub_3B6AC(7, v117, 0, v70);
          }
          v71 = LOBYTE(dbl_B6ED8);
          v72 = *(&v104 - (*(__int64 *)&dbl_B6ED8 >> 5));
          ++qword_9CB890[256 * v33 + v68];
          if ( bswap32(v72) < 0xFFFFFFFF >> (v71 & 0x1F)
            && !strcmp(*(const char **)(dword_5C1F58 + 860), *(const char **)(v93 + 288)) )
          {
            *(_QWORD *)&dbl_9CD890[v33] += 256LL;
            sub_378F0(v100, v93, v31, (unsigned __int8)v101);
            v60 = 256;
          }
          else
          {
            if ( bswap32(v104) > 0xFFFFFE )
              goto LABEL_118;
            v60 = 256;
            *(_QWORD *)&dbl_9CD890[v33] += 256LL;
          }
LABEL_119:
          v90 += v60;
          sub_36DB4(&v102, "bmminer.c", "bitmain_c5_scanhash", 2187);
          break;
        default:
          if ( byte_5C0EFC )
            goto LABEL_133;
LABEL_131:
          if ( byte_4B9A21 || dword_B3094 > 2 )
          {
LABEL_133:
            snprintf(v117, 0x800u, "%s: job_id non't found ...\n", "bitmain_c5_scanhash");
            sub_3B6AC(3, v117, 0, v63);
          }
          goto LABEL_134;
      }
    }
  }
  v73 = sem_destroy(&sem);
  v74 = sub_2212C(v73);
  sub_7C7F0(v74);
  return 0;
}
