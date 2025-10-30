int __fastcall main(int a1, const char **a2, char **a3)
{
  const char *v4; // r7
  FILE *v5; // r10
  size_t v6; // r0
  int v7; // r3
  int v8; // r3
  size_t v9; // r4
  int v10; // r6
  unsigned __int8 *v11; // r10
  size_t i; // r5
  const unsigned __int16 **v13; // r0
  int v14; // t1
  int v15; // r3
  int v16; // r3
  int v17; // r3
  int v18; // r3
  void *v19; // r5
  _DWORD *v20; // r4
  _DWORD *v21; // r0
  int v22; // r0
  int v23; // r0
  int v24; // r0
  int v25; // r0
  int v26; // r3
  int v27; // r4
  int v28; // r0
  int v29; // r0
  char *v30; // r10
  char *v31; // r9
  char *v32; // r11
  int v33; // r4
  int v34; // r2
  int v35; // r8
  int v36; // r9
  int v37; // r4
  int v38; // r3
  int v39; // r3
  unsigned int *p_count; // r10
  int v41; // r1
  int v42; // r3
  __int64 v43; // r0
  unsigned __int64 v44; // r2
  bool v45; // zf
  int v46; // r1
  int v47; // r0
  int v48; // r3
  unsigned __int64 v49; // r0
  int v50; // r3
  int v51; // r12
  int v52; // r3
  int v53; // r1
  int v54; // r2
  int v55; // r3
  int v56; // r1
  int v57; // r2
  int v58; // r3
  int v59; // r1
  int v60; // r2
  char *v61; // r2
  int *v62; // r1
  unsigned int v63; // t1
  unsigned __int64 v64; // r2
  int *v65; // r3
  __int64 v67; // r4
  int v68; // r3
  int v69; // r3
  int v70; // r3
  int v71; // r3
  int v72; // r0
  int v73; // r10
  int v74; // r0
  int v75; // r3
  int v76; // r3
  unsigned int v77; // r12
  unsigned int v78; // kr04_4
  _BYTE *v79; // r1
  char v80; // r0
  unsigned int v81; // r1
  int v82; // r3
  int *v83; // r0
  int v84; // r3
  int *v85; // r0
  int v86; // r3
  int *v87; // r0
  int v88; // r3
  int *v89; // r0
  int v90; // r3
  int v91; // r0
  int v92; // r0
  int v94; // r3
  __int64 act; // [sp+18h] [bp-A6Ch]
  pthread_mutex_t *v97; // [sp+28h] [bp-A5Ch]
  int v98; // [sp+2Ch] [bp-A58h]
  unsigned int v99; // [sp+30h] [bp-A54h]
  double v100; // [sp+30h] [bp-A54h]
  double v101; // [sp+30h] [bp-A54h]
  int v102; // [sp+40h] [bp-A44h]
  int v103; // [sp+40h] [bp-A44h]
  __int64 v104; // [sp+44h] [bp-A40h]
  unsigned int v105; // [sp+44h] [bp-A40h]
  __int64 v106; // [sp+48h] [bp-A3Ch]
  unsigned __int64 v107; // [sp+48h] [bp-A3Ch]
  int v108; // [sp+70h] [bp-A14h] BYREF
  _DWORD v109[7]; // [sp+74h] [bp-A10h] BYREF
  int v110; // [sp+90h] [bp-9F4h] BYREF
  char dest[32]; // [sp+94h] [bp-9F0h] BYREF
  _BYTE command[64]; // [sp+B4h] [bp-9D0h] BYREF
  struct sigaction v113; // [sp+F4h] [bp-990h] BYREF
  _DWORD s[64]; // [sp+180h] [bp-904h] BYREF
  _DWORD v115[512]; // [sp+280h] [bp-804h] BYREF
  _BYTE v116[4]; // [sp+A80h] [bp-4h] BYREF

  v113.sa_handler = (__sighandler_t)sub_34E58;
  v113.sa_flags = 0;
  sigemptyset(&v113.sa_mask);
  sigaction(15, &v113, &stru_5BD0A4);
  sigaction(2, &v113, &stru_5BE164);
  sigaction(6, &v113, &stru_5BAF9C);
  sem_init(&sem, 0, 0);
  sub_35650(&unk_5BC048, "main", 2841);
  v4 = *a2;
  memset(s, 0, sizeof(s));
  memset(command, 0, sizeof(command));
  snprintf(command, 0x40u, "pidof %s", v4);
  v5 = popen(command, "r");
  if ( v5 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        do
        {
          if ( !fgets((char *)s, 256, v5) )
          {
            v9 = 0;
            v10 = 0;
            pclose(v5);
            v11 = (unsigned __int8 *)s;
            for ( i = 1; strlen((const char *)s) >= i; ++i )
            {
              memset(dest, 0, sizeof(dest));
              v13 = _ctype_b_loc();
              v14 = *v11++;
              if ( ((*v13)[v14] & 0x2000) != 0 )
              {
                strncpy(dest, (const char *)s + v9, i - v9 - 1);
                v15 = strtol(dest, 0, 10);
                if ( v15 > 0 && (++v10, byte_4B6CA6) && (byte_5BC044 || byte_4B6CA5 || dword_AFC2C > 6) )
                {
                  snprintf((char *)v115, 0x800u, "Parsed proc id is: %d\n", v15);
                  v9 = i;
                  sub_3AF5C(7, v115, 0, v16);
                }
                else
                {
                  v9 = i;
                }
              }
            }
            if ( v10 )
            {
              if ( byte_5BC044 || byte_4B6CA5 || dword_AFC2C > 2 )
              {
                snprintf((char *)v115, 0x800u, " %d instance of %s is  already Running on this machine", v10, v4);
                sub_3AF5C(3, v115, 0, v17);
              }
              if ( v10 != 1 )
              {
                snprintf((char *)v115, 0x800u, "%s is forbidden to start twice, will exit immediately!", *a2);
                sub_3AF5C(3, v115, 1, v18);
              }
            }
            goto LABEL_30;
          }
        }
        while ( !byte_4B6CA6 );
        if ( byte_5BC044 || byte_4B6CA5 || dword_AFC2C > 6 )
          break;
LABEL_7:
        if ( byte_4B6CA5 || dword_AFC2C > 6 )
        {
LABEL_9:
          v6 = strlen((const char *)s);
          snprintf((char *)v115, 0x800u, "strlen is: %d\n", v6);
          sub_3AF5C(7, v115, 0, v7);
        }
      }
      snprintf((char *)v115, 0x800u, "pidof %s command result is: %s\n", v4, (const char *)s);
      sub_3AF5C(7, v115, 0, v8);
      if ( byte_4B6CA6 )
      {
        if ( byte_5BC044 )
          goto LABEL_9;
        goto LABEL_7;
      }
    }
  }
  if ( byte_4B6CA6 && (byte_5BC044 || byte_4B6CA5 || dword_AFC2C > 6) )
  {
    snprintf((char *)v115, 0x800u, " app-service:%s Not Found!!!", v4);
    sub_3AF5C(7, v115, 0, v94);
  }
LABEL_30:
  sub_78A8C("/etc/bitmain_category.conf");
  v19 = calloc(1u, 0x1DA0u);
  dword_5BD0A0 = (int)v19;
  v20 = calloc(1u, 0x188u);
  dword_5BAF94 = (int)v20;
  v21 = calloc(1u, 0x40u);
  v21[9] = v20;
  v20[5] = v19;
  dword_5BAF8C = (int)v21;
  v22 = sub_382E8(a1, a2);
  v23 = sub_374D4(v22);
  v24 = sub_34870(v23);
  if ( v24 )
    v24 = sub_43B4C(5, "socket init failed!");
  v25 = sub_40FB0(v24);
  if ( v25 )
  {
    sub_43B4C(5, "basic init failed!");
    while ( 1 )
      sleep(0xAu);
  }
  if ( dword_B413C == 1 )
  {
    if ( (unsigned int)off_AFC24 > 3 )
    {
      strcpy((char *)v115, "enter sleep mode.\n");
      v25 = sub_3AF5C(3, v115, 0, *(unsigned __int16 *)"");
    }
    sub_21C14(v25);
    sub_16E7C(0);
    while ( 1 )
      sleep(0xAu);
  }
  dword_5BC040 = (int)calloc(1u, 0x40u);
  pthread_attr_init((pthread_attr_t *)command);
  pthread_attr_setstacksize((pthread_attr_t *)command, 0x200000u);
  if ( sub_3E010(dword_5BC040, command, sub_34A3C) && (byte_5BC044 || byte_4B6CA5 || dword_AFC2C > 2) )
  {
    snprintf((char *)v115, 0x800u, "%s: create thread for get api status failed\n", "main");
    sub_3AF5C(3, v115, 0, v26);
  }
  pthread_detach(*(_DWORD *)(dword_5BC040 + 12));
  v27 = *(_DWORD *)(*(_DWORD *)(dword_5BAF8C + 36) + 20);
  if ( pthread_mutex_init((pthread_mutex_t *)(v27 + 112), 0) )
    sub_35598("bitmain_soc_prepare", 1955);
  sub_35650(v27, "bitmain_soc_prepare", 1956);
  sub_35650(v27 + 384, "bitmain_soc_prepare", 1957);
  sub_35650(v27 + 2232, "bitmain_soc_prepare", 1958);
  sub_35650(v27 + 4080, "bitmain_soc_prepare", 1959);
  sub_35650(v27 + 5928, "bitmain_soc_prepare", 1960);
  memset(v115, 0, 0x20u);
  HIWORD(v115[0]) = 26;
  LOBYTE(v115[0]) = 81;
  BYTE1(v115[1]) |= 7u;
  HIWORD(v115[3]) = dword_AFBD8;
  LOBYTE(v115[1]) = ~(~((v115[1] & 0xFD | (2 * (byte_B4140 & 1u))) << 30) >> 30);
  LOWORD(v115[2]) = 13833;
  HIBYTE(v115[2]) = 80;
  BYTE2(v115[2]) = dword_B4144;
  LOWORD(v115[3]) = dword_AFBD4;
  LOWORD(v115[4]) = 2570;
  HIWORD(v115[6]) = 400;
  LOWORD(v115[7]) = 600;
  LOBYTE(v115[6]) = 4;
  HIWORD(v115[7]) = sub_3EA90(v115, 30);
  if ( !sub_44BEC(v115[0], v115[1], v115[2], v115[3], v115[4], v115[5], v115[6], v115[7]) )
  {
    sub_43B4C(5, "soc init failed!");
    while ( 1 )
      sleep(0xAu);
  }
  v28 = sub_43B4C(3, 0);
  if ( !byte_B4148 )
    sub_423A8(v28);
  pthread_mutex_lock(&mutex);
  if ( dword_B4110 )
  {
    if ( (unsigned int)off_AFC24 > 3 )
    {
      strcpy((char *)v115, "start the cached job");
      sub_3AF5C(3, v115, 0, *(_DWORD *)"ched job");
    }
    sub_37998(dword_B4114, dword_B4110);
  }
  v29 = pthread_mutex_unlock(&mutex);
  sub_401A0(v29);
  v30 = (char *)v115;
LABEL_63:
  v31 = v30;
LABEL_64:
  v32 = v31;
  while ( !*(_BYTE *)(dword_5BAF94 + 364) )
  {
    v98 = dword_5BAF8C;
    v33 = *(_DWORD *)(*(_DWORD *)(dword_5BAF8C + 36) + 20);
    v97 = (pthread_mutex_t *)v33;
    pthread_mutex_lock(&stru_530E9C);
    if ( pthread_mutex_lock((pthread_mutex_t *)v33) )
    {
      v89 = _errno_location();
      snprintf(
        v32,
        0x800u,
        "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",
        *v89,
        "bmminer.c",
        "bitmain_c5_scanhash",
        2087);
      sub_3AF5C(3, v32, 1, v90);
    }
    if ( pthread_rwlock_rdlock((pthread_rwlock_t *)(v33 + 24)) )
    {
      v85 = _errno_location();
      snprintf(
        v32,
        0x800u,
        "WTF RDLOCK ERROR ON LOCK! errno=%d in %s %s():%d",
        *v85,
        "bmminer.c",
        "bitmain_c5_scanhash",
        2087);
      sub_3AF5C(3, v32, 1, v86);
    }
    if ( pthread_mutex_unlock((pthread_mutex_t *)v33) )
    {
      v83 = _errno_location();
      snprintf(
        v32,
        0x800u,
        "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
        *v83,
        "bmminer.c",
        "bitmain_c5_scanhash",
        2087);
      sub_3AF5C(3, v32, 1, v84);
    }
    act = 0;
    while ( dword_5BF210 )
    {
      while ( 2 )
      {
        v34 = 0;
        v35 = dword_5BF208[15 * dword_5BF20C + 8];
        v36 = dword_5BF208[15 * dword_5BF20C + 3];
        v104 = *(_QWORD *)&dword_5BF208[15 * dword_5BF20C + 6];
        v37 = dword_5BF208[15 * dword_5BF20C + 9];
        v102 = dword_5BF208[15 * dword_5BF20C + 4];
        v99 = (dword_5BF208[15 * dword_5BF20C + 5] << 24)
            | HIBYTE(dword_5BF208[15 * dword_5BF20C + 5])
            | ((unsigned int)dword_5BF208[15 * dword_5BF20C + 5] >> 8) & 0xFF00
            | (dword_5BF208[15 * dword_5BF20C + 5] << 8) & 0xFF0000;
        do
          ++v34;
        while ( v34 != 32 );
        if ( byte_4B6CA6 && (byte_5BC044 || byte_4B6CA5 || dword_AFC2C > 6) )
        {
          snprintf(
            v32,
            0x800u,
            "%s: job_id:0x%x   work_id:0x%x   nonce2:0x%llx nonce3:0x%x   version:0x%x\n",
            "bitmain_c5_scanhash",
            v36,
            v102,
            v104,
            v35,
            v99);
          sub_3AF5C(7, v32, 0, v38);
        }
        if ( (unsigned int)dword_5BF20C > 0x1FD )
          v39 = 0;
        else
          v39 = dword_5BF20C;
        p_count = &v97[7].__count;
        if ( (unsigned int)dword_5BF20C <= 0x1FD )
          ++v39;
        dword_5BF20C = v39;
        --dword_5BF210;
        if ( v36 )
        {
          if ( v35 != dword_B414C || v102 != dword_B4150 )
          {
            dword_B414C = v35;
            dword_B4150 = v102;
            if ( byte_4B6CA6 )
            {
              if ( !byte_5BC044 && !byte_4B6CA5 && dword_AFC2C <= 6 )
              {
                v41 = dword_AFB40;
                v42 = dword_AFB40 - v36;
                goto LABEL_93;
              }
              snprintf(v32, 0x800u, "%s: Chain ID J%d ...\n", "bitmain_c5_scanhash", v37 + 1);
              sub_3AF5C(7, v32, 0, v70);
              if ( byte_4B6CA6 )
              {
                v41 = dword_AFB40;
                v42 = dword_AFB40 - v36;
                if ( !byte_5BC044 )
                {
LABEL_93:
                  if ( !byte_4B6CA5 && dword_AFC2C <= 6 )
                  {
                    switch ( v42 )
                    {
                      case 0:
                        goto LABEL_97;
                      case 1:
                        goto LABEL_96;
                      case 2:
                        goto LABEL_138;
                      case 3:
                        goto LABEL_137;
                      default:
                        goto LABEL_163;
                    }
                  }
                }
                snprintf(
                  v32,
                  0x800u,
                  "%s: given_id:%d job_id:%d switch:%d  ...\n",
                  "bitmain_c5_scanhash",
                  v41,
                  v36,
                  v42);
                sub_3AF5C(7, v32, 0, v69);
              }
            }
            switch ( dword_AFB40 - v36 )
            {
              case 0:
                goto LABEL_97;
              case 1:
LABEL_96:
                p_count = &v97[84].__count;
                goto LABEL_97;
              case 2:
LABEL_138:
                p_count = &v97[161].__count;
                goto LABEL_97;
              case 3:
LABEL_137:
                p_count = &v97[238].__count;
LABEL_97:
                sub_36844(v98, &v108, p_count, p_count, v104, HIDWORD(v104), v99);
                v103 = v108;
                v105 = *p_count;
                v100 = *(double *)(v108 + 312);
                v43 = sub_8CB18(*(_DWORD *)(v108 + 312), *(_DWORD *)(v108 + 316));
                v106 = v43;
                if ( v43 != qword_B4158 )
                {
                  v44 = v43;
                  v45 = v43 == 0;
                  v46 = 0;
                  qword_B4158 = v44;
                  v47 = 0;
                  if ( v45 )
                  {
                    v46 = -1;
                    v47 = -1;
                  }
                  else
                  {
                    while ( 1 )
                    {
                      v44 >>= 1;
                      if ( !v44 )
                        break;
                      v47 = (__PAIR64__(v47, v46++) + 1) >> 32;
                    }
                  }
                  dword_B4160 = v46;
                  dword_B4164 = v47;
                  if ( byte_4B6CA6 )
                  {
                    if ( byte_5BC044 || byte_4B6CA5 || dword_AFC2C > 6 )
                    {
                      snprintf(
                        v32,
                        0x800u,
                        "%s: pool_diff:%llu work_diff:%f pool_diff_bit:%llu ...\n",
                        "hashtest_submit",
                        v106,
                        v100,
                        __PAIR64__(v47, v46));
                      sub_3AF5C(7, v32, 0, v48);
                    }
                  }
                }
                v101 = dbl_AFB38;
                v49 = sub_8CB18(LODWORD(dbl_AFB38), HIDWORD(dbl_AFB38));
                v107 = v49;
                if ( v49 != qword_B4168 )
                {
                  v50 = 0;
                  qword_B4168 = v49;
                  v51 = 0;
                  if ( v49 )
                  {
                    while ( 1 )
                    {
                      v49 >>= 1;
                      if ( !v49 )
                        break;
                      v51 = (__PAIR64__(v51, v50++) + 1) >> 32;
                    }
                  }
                  else
                  {
                    v50 = -1;
                    v51 = -1;
                  }
                  unk_B4170 = v50;
                  unk_B4174 = v51;
                  if ( byte_4B6CA6 )
                  {
                    if ( byte_5BC044 || byte_4B6CA5 || dword_AFC2C > 6 )
                    {
                      snprintf(
                        v32,
                        0x800u,
                        "%s:net_diff:%llu current_diff:%f net_diff_bit %llu ...\n",
                        "hashtest_submit",
                        v107,
                        v101,
                        __PAIR64__(v51, v50));
                      sub_3AF5C(7, v32, 0, v52);
                    }
                  }
                }
                v53 = *(_DWORD *)(v103 + 132);
                v54 = *(_DWORD *)(v103 + 136);
                v55 = *(_DWORD *)(v103 + 140);
                s[2] = *(_DWORD *)(v103 + 128);
                s[3] = v53;
                s[4] = v54;
                s[5] = v55;
                v56 = *(_DWORD *)(v103 + 148);
                v57 = *(_DWORD *)(v103 + 152);
                v58 = *(_DWORD *)(v103 + 156);
                s[6] = *(_DWORD *)(v103 + 144);
                s[7] = v56;
                s[8] = v57;
                s[9] = v58;
                s[0] = 80;
                s[1] = 0;
                v59 = *(_DWORD *)(v103 + 68);
                v60 = *(_DWORD *)(v103 + 72);
                v109[0] = *(_DWORD *)(v103 + 64);
                v109[1] = v59;
                v109[2] = v60;
                sub_3EBB0(&s[10], v109, 12);
                v109[0] = v35;
                sub_3EBB0(&s[13], v109, 4);
                sub_2C634(s, v109);
                memset(s, 0, 0xE8u);
                sub_2C7E8(v109, 32, dest);
                v61 = (char *)&v110;
                v62 = &v108;
                do
                {
                  v63 = *((_DWORD *)v61 + 1);
                  v61 += 4;
                  v62[1] = bswap32(v63);
                  ++v62;
                }
                while ( &dest[28] != v61 );
                LODWORD(v64) = v110;
                if ( !v110 )
                {
                  v65 = &v110;
                  while ( !*--v65 )
                  {
                    LODWORD(v64) = v64 + 1;
                    if ( (_DWORD)v64 == 7 )
                    {
                      v64 = 7;
                      goto LABEL_124;
                    }
                  }
                  v64 = (int)v64;
LABEL_124:
                  if ( *(_QWORD *)&dword_B4160 >> 5 <= v64 )
                  {
                    v72 = sub_265B0();
                    v73 = sub_772B8(v35, v72);
                    v74 = sub_772B0(v35);
                    if ( byte_4B6CA6 && (byte_5BC044 || byte_4B6CA5 || dword_AFC2C > 6) )
                    {
                      snprintf(
                        v32,
                        0x800u,
                        "%s: chain %d which_asic_nonce %d which_core_nonce %d",
                        "hashtest_submit",
                        v37,
                        v73,
                        v74);
                      sub_3AF5C(7, v32, 0, v75);
                    }
                    v76 = 8 * (v73 + (v37 << 8));
                    v77 = *(_DWORD *)((char *)&unk_9C69D8 + v76 + 4);
                    v78 = *(_DWORD *)((char *)&unk_9C69D8 + v76);
                    v79 = &v116[-4 * (*(__int64 *)&dword_B4160 >> 5)];
                    v80 = dword_B4160 & 0x1F;
                    *(_DWORD *)((char *)&unk_9C69D8 + v76) = v78 + 1;
                    v81 = *((_DWORD *)v79 - 637);
                    *(_DWORD *)((char *)&unk_9C69D8 + v76 + 4) = (__PAIR64__(v77, v78) + 1) >> 32;
                    if ( bswap32(v81) < 0xFFFFFFFF >> v80
                      && !strcmp(*(const char **)(dword_5BD0A0 + 844), *(const char **)(v103 + 288)) )
                    {
                      *(_QWORD *)&dword_9C89D8[2 * v37] += 256LL;
                      sub_372CC(v98, v103, v35, (unsigned __int8)v105);
                      act += 256;
                    }
                    else if ( bswap32(v109[6]) <= 0xFFFFFE )
                    {
                      *(_QWORD *)&dword_9C89D8[2 * v37] += 256LL;
                      act += 256;
                    }
                  }
                  goto LABEL_126;
                }
                if ( sub_266F0(v37) == 1 )
                {
                  if ( byte_5BC044 || byte_4B6CA5 || dword_AFC2C > 2 )
                  {
                    strcpy(v32, "hash2_32 error");
                    sub_3AF5C(3, v32, 0, *(_DWORD *)"or");
                  }
                  sub_369A4(v98);
                  sub_26B54(v37);
                }
                if ( byte_4B6CA6 && (byte_5BC044 || byte_4B6CA5 || dword_AFC2C > 6) )
                {
                  snprintf(v32, 0x800u, "%s: HASH2_32[7] != 0", "hashtest_submit");
                  sub_3AF5C(7, v32, 0, v71);
                }
LABEL_126:
                sub_367C0(&v108, "bmminer.c", "bitmain_c5_scanhash", 2187);
                if ( !dword_5BF210 )
                  goto LABEL_127;
                continue;
              default:
                if ( byte_5BC044 )
                  goto LABEL_165;
LABEL_163:
                if ( byte_4B6CA5 || dword_AFC2C > 2 )
                {
LABEL_165:
                  snprintf(v32, 0x800u, "%s: job_id non't found ...\n", "bitmain_c5_scanhash");
                  sub_3AF5C(3, v32, 0, v82);
                }
                break;
            }
          }
          if ( sub_266F0(v37) == 1 )
          {
            sub_369A4(v98);
            sub_26B54(v37);
          }
        }
        break;
      }
    }
LABEL_127:
    qword_9C8A48 += act;
    if ( pthread_rwlock_unlock((pthread_rwlock_t *)&v97[1]) )
    {
      v87 = _errno_location();
      snprintf(
        v32,
        0x800u,
        "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",
        *v87,
        "bmminer.c",
        "bitmain_c5_scanhash",
        2190);
      sub_3AF5C(3, v32, 1, v88);
    }
    off_AFD50();
    pthread_mutex_unlock(&stru_530E9C);
    sub_3D9D4(1);
    if ( act )
    {
      v31 = v32;
      if ( byte_4B6CA6 && (byte_5BC044 || byte_4B6CA5 || dword_AFC2C > 6) )
      {
        v67 = 0xFFFFFFFFLL * (unsigned int)act;
        HIDWORD(v67) -= HIDWORD(act);
        snprintf(v32, 0x800u, "%s: hashes %llu ...\n", "bitmain_c5_scanhash", v67);
        sub_3AF5C(7, v32, 0, v68);
      }
      if ( 0xFFFFFFFFLL * act )
      {
        v30 = v32;
        dbl_B4128 = sub_8CA5C(-(int)act) / 1000000000.0 + dbl_B4128;
        goto LABEL_63;
      }
      goto LABEL_64;
    }
  }
  v91 = sem_destroy(&sem);
  v92 = sub_21C14(v91);
  sub_793EC(v92);
  return 0;
}
