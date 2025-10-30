int __fastcall sub_3BECC(_DWORD *a1)
{
  int v2; // r9
  pthread_t v3; // r0
  int v4; // r10
  int v5; // r0
  fd_set *v6; // r3
  int v7; // r3
  int v8; // r2
  bool v9; // nf
  int v10; // r1
  void ***v11; // r2
  int v12; // r0
  char *v13; // r4
  int v15; // r3
  int v16; // r2
  int v17; // r4
  int v18; // r0
  _DWORD *v19; // r0
  _DWORD *v20; // r5
  int v21; // r3
  unsigned int *v22; // r3
  unsigned int v23; // r2
  unsigned int v24; // r2
  void **v25; // r0
  void **v26; // r0
  char *v27; // r5
  int *v28; // r0
  const char *v29; // lr
  int v30; // r3
  int v31; // r12
  int *v32; // r0
  int *v33; // r0
  const char *v34; // lr
  int v35; // r3
  int v36; // r12
  int *v37; // r0
  int *v38; // r0
  int *v39; // r0
  int v40; // r5
  void **v41; // r11
  unsigned int v42; // r3
  unsigned int v43; // r2
  unsigned int v44; // r1
  int v45; // r3
  unsigned int v46; // r2
  unsigned int v47; // r1
  int v48; // r3
  unsigned int v49; // r3
  int v50; // r2
  int v51; // r1
  int v52; // r6
  int v53; // r7
  int v54; // r10
  _DWORD *v55; // r9
  char *v56; // r5
  unsigned int v57; // r4
  int v58; // r7
  int v59; // r3
  _DWORD *v60; // r5
  int v61; // r3
  int **v62; // r2
  int *v63; // r1
  int v64; // r3
  int v65; // r1
  int v66; // r1
  int v67; // r3
  int v68; // r6
  int v69; // r5
  time_t v70; // r0
  int v71; // r3
  int v72; // r0
  void ***v73; // r2
  int v74; // t1
  __int64 v75; // d0
  unsigned int v76; // r6
  char *v77; // r12
  _DWORD *v78; // r6
  unsigned int v79; // r3
  unsigned int v80; // r12
  double v81; // d5
  unsigned int v82; // kr00_4
  int v83; // r3
  int v84; // r2
  double v85; // d7
  double v86; // d5
  double v87; // d7
  int v88; // r2
  size_t v89; // r0
  size_t v90; // lr
  int v91; // r3
  unsigned int *v92; // r3
  unsigned int v93; // r2
  unsigned int v94; // r2
  double v95; // d8
  unsigned int v96; // r0
  __int64 v97; // kr18_8
  double v98; // d6
  double v99; // d7
  unsigned int v100; // kr08_4
  double v101; // d6
  int v102; // r3
  int v103; // r2
  double v104; // d7
  int v105; // r2
  int v106; // r3
  time_t *v107; // r0
  const char *v108; // r0
  int *v109; // r0
  int v110; // r1
  int *v111; // r0
  unsigned int v112; // kr0C_4
  int v113; // r0
  unsigned __int64 v114; // kr20_8
  double v115; // d5
  double v116; // d7
  double v117; // d5
  double v118; // d7
  int v119; // r2
  time_t v120; // r0
  int v121; // r3
  int *v122; // r0
  int v123; // [sp+4h] [bp-A78h]
  int v124; // [sp+20h] [bp-A5Ch]
  _DWORD *v125; // [sp+30h] [bp-A4Ch]
  char *v126; // [sp+30h] [bp-A4Ch]
  int v127; // [sp+30h] [bp-A4Ch]
  time_t *timer; // [sp+34h] [bp-A48h]
  time_t *timera; // [sp+34h] [bp-A48h]
  int v130; // [sp+38h] [bp-A44h]
  __int64 v131; // [sp+38h] [bp-A44h]
  int v132; // [sp+38h] [bp-A44h]
  _DWORD *ptr; // [sp+40h] [bp-A3Ch]
  void *ptra; // [sp+40h] [bp-A3Ch]
  int v135; // [sp+44h] [bp-A38h]
  int s2; // [sp+48h] [bp-A34h] BYREF
  struct timeval timeout; // [sp+4Ch] [bp-A30h] BYREF
  char s[16]; // [sp+54h] [bp-A28h] BYREF
  char v139[20]; // [sp+64h] [bp-A18h] BYREF
  __int16 v140; // [sp+78h] [bp-A04h] BYREF
  __int16 v141; // [sp+7Ah] [bp-A02h] BYREF
  char v142[36]; // [sp+98h] [bp-9E4h] BYREF
  char v143[60]; // [sp+BCh] [bp-9C0h] BYREF
  char v144; // [sp+F8h] [bp-984h] BYREF
  fd_set readfds; // [sp+FCh] [bp-980h] BYREF
  int v146[23]; // [sp+17Ch] [bp-900h] BYREF
  char v147[160]; // [sp+1D8h] [bp-8A4h] BYREF
  void **v148[513]; // [sp+278h] [bp-804h] BYREF

  v2 = -1622558010;
  v3 = pthread_self();
  pthread_detach(v3);
  v4 = -17973517;
  snprintf(s, 0x10u, "%d/RStratum", *a1);
  sub_250A8(s);
  do
  {
LABEL_2:
    v5 = (int)a1;
    if ( *((_BYTE *)a1 + 105) )
    {
LABEL_17:
      sub_24340(v5);
      return 0;
    }
    while ( 1 )
    {
      if ( !sub_23F28(v5) && !sub_32424((int)a1) )
      {
        sub_24340((int)a1);
        sub_33DDC((int)a1);
        sub_33AB4(a1);
        if ( sub_32424((int)a1) )
          goto LABEL_65;
        while ( !a1[25] || a1 != (_DWORD *)sub_31FF4() && (unsigned int)(dword_68FD0 - 3) > 1 )
        {
          if ( pthread_mutex_lock(&stru_6910C) )
          {
            v38 = _errno_location();
            v29 = "wait_lpcurrent";
            v30 = *v38;
            v31 = 9913;
            goto LABEL_86;
          }
          pthread_cond_wait(&cond, &stru_6910C);
          if ( pthread_mutex_unlock(&stru_6910C) )
          {
            v39 = _errno_location();
            v34 = "wait_lpcurrent";
            v35 = *v39;
            v36 = 9915;
LABEL_90:
            snprintf(
              (char *)v148,
              0x800u,
              "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
              v35,
              "cgminer.c",
              v34,
              v36);
LABEL_87:
            sub_20F58(3, (const char *)v148, 1);
            sub_2E6B0(1, 1);
          }
          off_67ED8();
          if ( sub_32424((int)a1) )
            break;
        }
LABEL_65:
        while ( !sub_28690((int)a1) )
        {
          sub_3466C((int)a1);
          if ( *((_BYTE *)a1 + 105) )
            return 0;
          sub_23B9C();
        }
      }
      v6 = (fd_set *)&v144;
      do
      {
        v6->__fds_bits[1] = 0;
        v6 = (fd_set *)((char *)v6 + 4);
      }
      while ( &readfds.__fds_bits[31] != (__fd_mask *)v6 );
      v7 = a1[147];
      timeout.tv_usec = 0;
      timeout.tv_sec = 90;
      v8 = v7 + 31;
      if ( v7 >= 0 )
        v8 = v7;
      v9 = -v7 < 0;
      v10 = -v7 & 0x1F;
      LOBYTE(v7) = v7 & 0x1F;
      v11 = &v148[(v8 >> 5) + 512];
      if ( !v9 )
        v7 = -v10;
      *(v11 - 607) = (void **)((unsigned int)*(v11 - 607) | (1 << v7));
      if ( !sub_23F28((int)a1) )
      {
        v12 = select(a1[147] + 1, &readfds, 0, 0, &timeout);
        if ( v12 <= 0 )
        {
          v15 = (unsigned __int8)byte_74500;
          if ( !byte_68BD5 )
            goto LABEL_29;
          if ( byte_74500 || byte_68BD4 || dword_67DB4 > 6 )
          {
            snprintf((char *)v148, 0x800u, "Stratum select failed on pool %d with value %d", *a1, v12);
            sub_20F58(7, (const char *)v148, 0);
            v15 = (unsigned __int8)byte_74500;
            goto LABEL_29;
          }
          goto LABEL_54;
        }
      }
      v13 = sub_24858((int)a1);
      if ( !v13 )
        break;
      sub_32400((int)a1);
      if ( sub_296BC(a1, (int)v13) )
        goto LABEL_14;
      v18 = sub_47258(v13, 0, v146);
      v124 = v18;
      if ( v18 )
      {
        v125 = (_DWORD *)sub_480FC(v18, "result");
        timer = (time_t *)sub_480FC(v124, "error");
        v19 = (_DWORD *)sub_480FC(v124, "id");
        v20 = v19;
        if ( !v19 || *v19 == 7 )
        {
          if ( timer )
          {
            v27 = (char *)sub_45074(timer, 3);
          }
          else
          {
            v27 = (char *)malloc(0x11u);
            if ( v27 )
              strcpy(v27, "(unknown reason)");
          }
          if ( byte_74500 || byte_68BD4 || dword_67DB4 > 5 )
          {
            snprintf((char *)v148, 0x800u, "JSON-RPC non method decode failed: %s", v27);
            sub_20F58(6, (const char *)v148, 0);
          }
          free(v27);
          if ( *(_DWORD *)(v124 + 4) != -1 )
            goto LABEL_50;
        }
        else
        {
          if ( sub_480FC(v125, "version-rolling.mask")
            || strstr(v13, "mining.configure")
            || strstr(v13, "mining.set_version_mask") )
          {
            goto LABEL_49;
          }
          v40 = sub_4888C(v20);
          s2 = v40;
          if ( pthread_mutex_lock(&stru_690F0) )
            sub_2EFE0("parse_stratum_response", 7292);
          v41 = (void **)dword_69108;
          v42 = ((v40 & 0xFF0000FF) + 17973517 + (v40 & 0xFF0000) + (v40 & 0xFF00)) ^ 0x7F76D;
          v43 = (v2 - v42) ^ (v42 << 8);
          v44 = (v4 - v42 - v43) ^ (v43 >> 13);
          v45 = (v42 - v43 - v44) ^ (v44 >> 12);
          v46 = (v43 - v44 - v45) ^ (v45 << 16);
          v47 = (v44 - v45 - v46) ^ (v46 >> 5);
          v48 = (v45 - v46 - v47) ^ (v47 >> 3);
          v49 = (v47 - v48 - ((v46 - v47 - v48) ^ (v48 << 10))) ^ (((v46 - v47 - v48) ^ (v48 << 10)) >> 15);
          if ( dword_69108 )
          {
            ptr = **(_DWORD ***)dword_69108;
            v50 = ptr[3 * ((*(_DWORD *)(*(_DWORD *)dword_69108 + 4) - 1) & v49)];
            if ( v50 )
            {
              v51 = *(_DWORD *)(*(_DWORD *)dword_69108 + 20);
              v52 = -v51;
              v135 = v51;
              v53 = v50 - v51;
              if ( v50 != v51 )
              {
                v130 = v4;
                v54 = v2;
                v55 = *(_DWORD **)dword_69108;
                v56 = v13;
                v57 = v49;
                while ( v57 != *(_DWORD *)(v53 + 28)
                     || *(_DWORD *)(v53 + 24) != 4
                     || memcmp(*(const void **)(v53 + 20), &s2, 4u) )
                {
                  v58 = *(_DWORD *)(v53 + 16);
                  if ( v58 )
                  {
                    v53 = v58 + v52;
                    if ( v53 )
                      continue;
                  }
                  v2 = v54;
                  v4 = v130;
                  v13 = v56;
                  goto LABEL_181;
                }
                v59 = *(_DWORD *)(v53 + 4);
                v13 = v56;
                v60 = v55;
                v2 = v54;
                v4 = v130;
                if ( v59 )
                {
                  if ( v53 != v60[4] + v52 )
                    goto LABEL_108;
LABEL_214:
                  v60[4] = v59 + v135;
                  v59 = *(_DWORD *)(v53 + 4);
                  if ( !v59 )
                  {
                    v105 = *(_DWORD *)(v53 + 8);
                    goto LABEL_211;
                  }
                  v60 = *v41;
LABEL_108:
                  *(_DWORD *)(v59 + v60[5] + 8) = *(_DWORD *)(v53 + 8);
LABEL_109:
                  v61 = *(_DWORD *)(v53 + 8);
                  v62 = (int **)dword_69108;
                  v63 = *(int **)dword_69108;
                  if ( v61 )
                  {
                    *(_DWORD *)(v61 + v63[5] + 4) = *(_DWORD *)(v53 + 4);
                    v63 = *v62;
                  }
                  v64 = 12 * ((v63[1] - 1) & *(_DWORD *)(v53 + 28));
                  --*(_DWORD *)(*v63 + v64 + 4);
                  v65 = **v62;
                  if ( *(_DWORD *)(v65 + v64) == v53 )
                    *(_DWORD *)(v65 + v64) = *(_DWORD *)(v53 + 16);
                  v66 = *(_DWORD *)(v53 + 12);
                  v67 = *(_DWORD *)(v53 + 16);
                  if ( v66 )
                  {
                    *(_DWORD *)(v66 + 16) = v67;
                    v67 = *(_DWORD *)(v53 + 16);
                  }
                  if ( v67 )
                    *(_DWORD *)(v67 + 12) = *(_DWORD *)(v53 + 12);
                  --(*v62)[3];
                }
                else
                {
                  v105 = *(_DWORD *)(v53 + 8);
                  if ( v105 )
                  {
                    if ( v53 == v60[4] + v52 )
                      goto LABEL_214;
LABEL_211:
                    dword_69108 = v105;
                    goto LABEL_109;
                  }
                  free(ptr);
                  free(*v41);
                  dword_69108 = 0;
                }
                --a1[183];
                v68 = pthread_mutex_unlock(&stru_690F0);
                if ( v68 )
                  goto LABEL_212;
                off_67ED8();
                v69 = *(_DWORD *)(v53 + 36);
                v70 = time(0);
                v71 = (unsigned __int8)byte_68BD5;
                v72 = v70 - *(_DWORD *)(v53 + 48);
                if ( v72 > 0 )
                  v71 = (unsigned __int8)byte_68BD5 | 1;
                if ( v71 && (byte_74500 || byte_68BD4 || dword_67DB4 > 5) )
                {
                  snprintf(
                    (char *)v148,
                    0x800u,
                    "Pool %d stratum share result lag time %d seconds",
                    **(_DWORD **)(v69 + 260),
                    v72);
                  sub_20F58(6, (const char *)v148, 0);
                }
                v73 = v148;
                v148[0] = (void **)bswap32(*(_DWORD *)(v69 + 220));
                v148[1] = (void **)bswap32(*(_DWORD *)(v69 + 216));
                v148[2] = (void **)bswap32(*(_DWORD *)(v69 + 212));
                v148[3] = (void **)bswap32(*(_DWORD *)(v69 + 208));
                v148[4] = (void **)bswap32(*(_DWORD *)(v69 + 204));
                v148[5] = (void **)bswap32(*(_DWORD *)(v69 + 200));
                v148[6] = (void **)bswap32(*(_DWORD *)(v69 + 196));
                v148[7] = (void **)bswap32(*(_DWORD *)(v69 + 192));
                do
                {
                  v74 = *(unsigned __int8 *)v73;
                  v73 = (void ***)((char *)v73 + 1);
                  if ( v74 )
                    break;
                  ++v68;
                }
                while ( v68 != 29 );
                v75 = *(_QWORD *)(v69 + 376);
                v76 = bswap32(*(unsigned int *)((char *)v148 + v68));
                round();
                v131 = sub_4A1D8(v75, HIDWORD(v75));
                sub_2AEF8(*(_QWORD *)(v69 + 232), v142, 0x10u, 0);
                if ( *(_BYTE *)(v69 + 283) )
                  v77 = " BLOCK!";
                else
                  v77 = "";
                snprintf(v143, 0x40u, "%08lx Diff %s/%llu%s", v76, v142, v123, v131, v77);
                v78 = *(_DWORD **)(v69 + 260);
                v132 = *(_DWORD *)(sub_31B04(*(_DWORD *)(v69 + 256)) + 36);
                if ( v125 && (*v125 == 5 || *(_BYTE *)(v69 + 324) && *v125 == 7) )
                {
                  if ( pthread_mutex_lock(&stru_766C4) )
                  {
                    v122 = _errno_location();
                    snprintf(
                      (char *)v148,
                      0x800u,
                      "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",
                      *v122,
                      "cgminer.c",
                      "share_result",
                      3528);
                    goto LABEL_87;
                  }
                  v112 = qword_755D8;
                  v113 = *(_DWORD *)(v132 + 36) + 1;
                  LODWORD(qword_755D8) = qword_755D8 + 1;
                  v114 = __PAIR64__(HIDWORD(qword_755D8), v112) + 1;
                  *(_DWORD *)(v132 + 36) = v113;
                  HIDWORD(qword_755D8) = HIDWORD(v114);
                  v115 = dbl_73370;
                  ++*((_QWORD *)v78 + 1);
                  *(double *)(v132 + 200) = *(double *)(v132 + 200) + *(double *)(v69 + 376);
                  v116 = *(double *)(v69 + 376);
                  v117 = v115 + v116;
                  v118 = *((double *)v78 + 9) + v116;
                  dbl_73370 = v117;
                  *((double *)v78 + 9) = v118;
                  if ( pthread_mutex_unlock(&stru_766C4) )
                  {
                    v109 = _errno_location();
                    v110 = 3538;
                    goto LABEL_226;
                  }
                  off_67ED8();
                  v119 = *v78;
                  v78[6] = 0;
                  *(_DWORD *)(v132 + 216) = v119;
                  v120 = time(0);
                  v121 = (unsigned __int8)byte_68BD5;
                  *(_DWORD *)(v132 + 220) = v120;
                  *(_QWORD *)(v132 + 224) = *(_QWORD *)(v69 + 376);
                  v78[88] = v120;
                  *((_QWORD *)v78 + 45) = *(_QWORD *)(v69 + 376);
                  if ( v121 && (byte_74500 || byte_68BD4 || dword_67DB4 > 6) )
                  {
                    strcpy((char *)v148, "PROOF OF WORK RESULT: true (yay!!!)");
                    sub_20F58(7, (const char *)v148, 0);
                  }
                  if ( !byte_73378 && !byte_7559C )
                  {
                    if ( dword_733CC <= 1 )
                    {
                      if ( byte_74500 || byte_68BD4 || dword_67DB4 > 4 )
                      {
                        snprintf(
                          (char *)v148,
                          0x800u,
                          "Accepted %s %s %d %s%s",
                          v143,
                          *(const char **)(*(_DWORD *)(v132 + 4) + 8),
                          *(_DWORD *)(v132 + 8),
                          "",
                          "");
                        sub_20F58(5, (const char *)v148, 0);
                      }
                    }
                    else if ( byte_74500 || byte_68BD4 || dword_67DB4 > 4 )
                    {
                      snprintf(
                        (char *)v148,
                        0x800u,
                        "Accepted %s %s %d pool %d %s%s",
                        v143,
                        *(const char **)(*(_DWORD *)(v132 + 4) + 8),
                        *(_DWORD *)(v132 + 8),
                        **(_DWORD **)(v69 + 260),
                        "",
                        "");
                      sub_20F58(5, (const char *)v148, 0);
                    }
                  }
                  sub_35A94("accept", (_DWORD *)v69);
                  if ( dword_69050 && (double)dword_69050 <= dbl_73370 )
                  {
                    if ( byte_74500 || byte_68BD4 || dword_67DB4 > 3 )
                    {
                      snprintf(
                        (char *)v148,
                        0x800u,
                        "Successfully mined %d accepted shares as requested and exiting.",
                        dword_69050);
                      sub_20F58(4, (const char *)v148, 0);
                    }
                    sub_2E730();
                  }
                  if ( v78[25] == 2 )
                  {
                    if ( byte_74500 || byte_68BD4 || dword_67DB4 > 3 )
                    {
                      snprintf((char *)v148, 0x800u, "Rejecting pool %d now accepting shares, re-enabling!", *v78);
                      sub_20F58(4, (const char *)v148, 0);
                    }
                    if ( v78[25] != 1 )
                      sub_2B664(v78 + 25);
                    sub_34178(0);
                  }
                  if ( *(_BYTE *)(v69 + 283) )
                    sub_2E9E8();
                }
                else
                {
                  if ( pthread_mutex_lock(&stru_766C4) )
                  {
                    v111 = _errno_location();
                    snprintf(
                      (char *)v148,
                      0x800u,
                      "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",
                      *v111,
                      "cgminer.c",
                      "share_result",
                      3591);
                    goto LABEL_87;
                  }
                  v80 = HIDWORD(qword_767E8);
                  v79 = qword_767E8;
                  v81 = dbl_73390;
                  ++*(_DWORD *)(v132 + 40);
                  v82 = v79;
                  v83 = v78[4];
                  qword_767E8 = __PAIR64__(v80, v82) + 1;
                  v84 = v78[5];
                  v78[4] = v83 + 1;
                  v78[5] = __CFADD__(v83, 1) + v84;
                  *(double *)(v132 + 208) = *(double *)(v132 + 208) + *(double *)(v69 + 376);
                  v85 = *(double *)(v69 + 376);
                  v86 = v81 + v85;
                  v87 = *((double *)v78 + 10) + v85;
                  ++v78[6];
                  dbl_73390 = v86;
                  *((double *)v78 + 10) = v87;
                  if ( pthread_mutex_unlock(&stru_766C4) )
                  {
                    v109 = _errno_location();
                    v110 = 3599;
LABEL_226:
                    snprintf(
                      (char *)v148,
                      0x800u,
                      "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
                      *v109,
                      "cgminer.c",
                      "share_result",
                      v110);
                    goto LABEL_87;
                  }
                  off_67ED8();
                  if ( byte_68BD5 && (byte_74500 || byte_68BD4 || dword_67DB4 > 6) )
                  {
                    strcpy((char *)v148, "PROOF OF WORK RESULT: false (booooo)");
                    sub_20F58(7, (const char *)v148, 0);
                  }
                  if ( !byte_73378 && !byte_7559C )
                  {
                    strcpy(v142, "reject");
                    memset(&v142[7], (unsigned __int8)byte_7559C, 0x1Du);
                    LOBYTE(v140) = byte_7559C;
                    if ( dword_733CC > 1 )
                      snprintf(v139, 0x14u, "pool %d", **(_DWORD **)(v69 + 260));
                    else
                      v139[0] = byte_7559C;
                    if ( !*(_BYTE *)(v69 + 324) )
                      v125 = (_DWORD *)sub_480FC(v124, "reject-reason");
                    if ( v125 )
                    {
                      timera = (time_t *)sub_48630(v125);
                      v89 = strlen((const char *)timera);
                      if ( v89 >= 0x1C )
                        v90 = 28;
                      else
                        v90 = v89;
                      v140 = 10272;
                      ptra = (void *)v90;
                      v126 = (char *)&v148[512] + v90;
                      sub_254E8(&v141, timera, v90, (int)"cgminer.c", (int)"share_result", 3639);
                      *(v126 - 2558) = 41;
                      *(v126 - 2557) = 0;
                      sub_254E8(&v142[7], timera, (size_t)ptra, (int)"cgminer.c", (int)"share_result", 3644);
                      v142[6] = 58;
                      *(v126 - 2521) = 0;
                    }
                    else
                    {
                      if ( timer )
                        v106 = *(_BYTE *)(v69 + 284) & 1;
                      else
                        v106 = 0;
                      if ( v106 )
                      {
                        if ( *timer == 1 )
                        {
                          v107 = (time_t *)sub_48484(timer, 1);
                          if ( !v107 || *v107 != 2 )
                            goto LABEL_155;
                        }
                        else
                        {
                          if ( *timer != 2 )
                            goto LABEL_155;
                          v107 = timer;
                        }
                        v108 = (const char *)sub_48630(v107);
                        snprintf((char *)&v140, 0x1Fu, " (%s)", v108);
                      }
                    }
LABEL_155:
                    if ( byte_74500 || byte_68BD4 || dword_67DB4 > 4 )
                    {
                      snprintf(
                        (char *)v148,
                        0x800u,
                        "Rejected %s %s %d %s%s %s%s version 0x%x",
                        v143,
                        *(const char **)(*(_DWORD *)(v132 + 4) + 8),
                        *(_DWORD *)(v132 + 8),
                        v139,
                        (const char *)&v140,
                        "",
                        "",
                        *(_DWORD *)(v69 + 444));
                      sub_20F58(5, (const char *)v148, 0);
                    }
                    sub_35A94(v142, (_DWORD *)v69);
                  }
                  v127 = v78[6];
                  if ( v127 > 10
                    && !*(_BYTE *)(v69 + 281)
                    && byte_766E0
                    && dword_74578 > 1
                    && (double)v127 > sub_4A11C(qword_755D8, HIDWORD(qword_755D8), v88, &qword_755D8)
                                    / dbl_68720
                                    * 60.0
                                    * 3.0 )
                  {
                    if ( byte_74500 || byte_68BD4 || dword_67DB4 > 3 )
                    {
                      snprintf((char *)v148, 0x800u, "Pool %d rejected %d sequential shares, disabling!", *v78, v127);
                      sub_20F58(4, (const char *)v148, 0);
                    }
                    if ( v78[25] == 1 )
                      --dword_74578;
                    v78[25] = 2;
                    if ( v78 == (_DWORD *)sub_31FF4() )
                      sub_34178(0);
                    v78[6] = 0;
                  }
                }
                sub_2CBA8((void ***)(v53 + 36), "cgminer.c", "parse_stratum_response", 7345);
                free((void *)v53);
                if ( *(_DWORD *)(v124 + 4) != -1 )
                {
                  v91 = v124;
                  __dmb(0xBu);
                  v92 = (unsigned int *)(v91 + 4);
                  do
                  {
                    v93 = __ldrex(v92);
                    v94 = v93 - 1;
                  }
                  while ( __strex(v94, v92) );
                  if ( !v94 )
                    sub_48A34(v124);
                }
                goto LABEL_14;
              }
            }
          }
LABEL_181:
          if ( pthread_mutex_unlock(&stru_690F0) )
LABEL_212:
            sub_2F03C("parse_stratum_response", 7300);
          off_67ED8();
          if ( !v125 )
          {
LABEL_49:
            if ( *(_DWORD *)(v124 + 4) == -1 )
              goto LABEL_59;
LABEL_50:
            v21 = v124;
            __dmb(0xBu);
            v22 = (unsigned int *)(v21 + 4);
            do
            {
              v23 = __ldrex(v22);
              v24 = v23 - 1;
            }
            while ( __strex(v24, v22) );
            if ( !v24 )
              sub_48A34(v124);
            goto LABEL_59;
          }
          if ( pthread_mutex_lock((pthread_mutex_t *)(a1 + 53)) )
            sub_2EFE0("parse_stratum_response", 7312);
          if ( pthread_rwlock_rdlock((pthread_rwlock_t *)(a1 + 59)) )
            sub_30138("parse_stratum_response", 7312);
          if ( pthread_mutex_unlock((pthread_mutex_t *)(a1 + 53)) )
            sub_2F03C("parse_stratum_response", 7312);
          v95 = *((double *)a1 + 228);
          sub_2FB80((pthread_rwlock_t *)(a1 + 59), "parse_stratum_response", 7314);
          if ( *v125 == 5 )
          {
            if ( byte_74500 || byte_68BD4 || dword_67DB4 > 4 )
            {
              snprintf((char *)v148, 0x800u, "Accepted untracked stratum share from pool %d", *a1);
              sub_20F58(5, (const char *)v148, 0);
            }
            if ( pthread_mutex_lock(&stru_766C4) )
              sub_2EFE0("parse_stratum_response", 7322);
            v101 = *((double *)a1 + 9) + v95;
            ++qword_755D8;
            v102 = a1[2];
            v103 = a1[3];
            v104 = dbl_73370 + v95;
            *((double *)a1 + 9) = v101;
            a1[2] = v102 + 1;
            a1[3] = __CFADD__(v102, 1) + v103;
            dbl_73370 = v104;
            if ( pthread_mutex_unlock(&stru_766C4) )
              sub_2F03C("parse_stratum_response", 7327);
          }
          else
          {
            if ( byte_74500 || byte_68BD4 || dword_67DB4 > 4 )
            {
              snprintf((char *)v148, 0x800u, "Rejected untracked stratum share from pool %d", *a1);
              sub_20F58(5, (const char *)v148, 0);
            }
            if ( pthread_mutex_lock(&stru_766C4) )
              sub_2EFE0("parse_stratum_response", 7333);
            v96 = a1[5];
            v97 = qword_767E8 + 1;
            v98 = *((double *)a1 + 10) + v95;
            v99 = dbl_73390 + v95;
            v100 = a1[4];
            LODWORD(qword_767E8) = qword_767E8 + 1;
            a1[4] = v100 + 1;
            *((double *)a1 + 10) = v98;
            a1[5] = (__PAIR64__(v96, v100) + 1) >> 32;
            HIDWORD(qword_767E8) = HIDWORD(v97);
            dbl_73390 = v99;
            if ( pthread_mutex_unlock(&stru_766C4) )
              sub_2F03C("parse_stratum_response", 7338);
          }
          off_67ED8();
          if ( *(_DWORD *)(v124 + 4) != -1 )
            goto LABEL_50;
        }
      }
      else if ( byte_74500 || byte_68BD4 || dword_67DB4 > 5 )
      {
        snprintf((char *)v148, 0x800u, "JSON decode failed(%d): %s", v146[0], v147);
        sub_20F58(6, (const char *)v148, 0);
      }
LABEL_59:
      if ( !sub_23FF8(a1, (int)v13) )
      {
        if ( byte_74500 || byte_68BD4 || dword_67DB4 > 5 )
        {
          snprintf((char *)v148, 0x800u, "Unknown stratum msg: %s", v13);
          sub_20F58(6, (const char *)v148, 0);
        }
        goto LABEL_16;
      }
LABEL_14:
      if ( *((_BYTE *)a1 + 680) )
      {
        v25 = (void **)sub_2FD8C();
        *((_BYTE *)a1 + 680) = 0;
        v148[0] = v25;
        sub_360B0((int)a1, (int)v25);
        v26 = v148[0];
        *((_BYTE *)v148[0] + 280) = 1;
        sub_3A5D0((int)v26);
        sub_2CBA8(v148, "cgminer.c", "stratum_rthread", 7601);
      }
LABEL_16:
      free(v13);
      v5 = (int)a1;
      if ( *((_BYTE *)a1 + 105) )
        goto LABEL_17;
    }
    v15 = (unsigned __int8)byte_74500;
LABEL_29:
    if ( v15 || byte_68BD4 )
    {
LABEL_31:
      snprintf((char *)v148, 0x800u, "Stratum connection to pool %d interrupted", *a1);
      sub_20F58(5, (const char *)v148, 0);
      goto LABEL_32;
    }
LABEL_54:
    if ( dword_67DB4 > 4 )
      goto LABEL_31;
LABEL_32:
    v16 = dword_755D0;
    ++a1[32];
    dword_755D0 = v16 + 1;
    if ( pthread_mutex_lock((pthread_mutex_t *)(a1 + 53)) )
    {
      v28 = _errno_location();
      v29 = "supports_resume";
      v30 = *v28;
      v31 = 7483;
LABEL_86:
      snprintf((char *)v148, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", v30, "cgminer.c", v29, v31);
      goto LABEL_87;
    }
    if ( pthread_rwlock_rdlock((pthread_rwlock_t *)(a1 + 59)) )
    {
      v32 = _errno_location();
      snprintf(
        (char *)v148,
        0x800u,
        "WTF RDLOCK ERROR ON LOCK! errno=%d in %s %s():%d",
        *v32,
        "cgminer.c",
        "supports_resume",
        7483);
      goto LABEL_87;
    }
    if ( pthread_mutex_unlock((pthread_mutex_t *)(a1 + 53)) )
    {
      v33 = _errno_location();
      v34 = "supports_resume";
      v35 = *v33;
      v36 = 7483;
      goto LABEL_90;
    }
    v17 = a1[159];
    if ( pthread_rwlock_unlock((pthread_rwlock_t *)(a1 + 59)) )
    {
      v37 = _errno_location();
      snprintf(
        (char *)v148,
        0x800u,
        "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",
        *v37,
        "cgminer.c",
        "supports_resume",
        7485);
      goto LABEL_87;
    }
    off_67ED8();
    if ( !v17 || byte_75684 )
      sub_33DDC((int)a1);
    sub_33AB4(a1);
    if ( a1 == (_DWORD *)sub_31FF4() )
      sub_2E9E8();
  }
  while ( sub_28690((int)a1) );
  while ( 1 )
  {
    sub_3466C((int)a1);
    if ( *((_BYTE *)a1 + 105) )
      return 0;
    sub_23B9C();
    if ( sub_28690((int)a1) )
      goto LABEL_2;
  }
}
