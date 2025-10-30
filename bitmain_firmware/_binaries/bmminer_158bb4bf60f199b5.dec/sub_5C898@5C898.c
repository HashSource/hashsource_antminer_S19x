int __fastcall sub_5C898(_DWORD *a1)
{
  pthread_t v2; // r0
  char *v3; // r0
  const struct timespec *v4; // r1
  int v5; // r6
  __int64 v6; // r4
  int v7; // r0
  int v8; // r1
  __int64 v9; // r2
  bool v10; // zf
  char v11; // r7
  int v12; // r7
  void ***v13; // r6
  void **v14; // r4
  time_t v15; // r0
  void **v16; // r3
  int v17; // r2
  void **v18; // r8
  size_t v19; // r0
  int v20; // r3
  int v21; // r12
  int v22; // r1
  void ***v23; // r5
  int v24; // r3
  unsigned int v25; // r3
  unsigned int v26; // r2
  unsigned int v27; // r1
  int v28; // r3
  unsigned int v29; // r2
  unsigned int v30; // r1
  int v31; // r3
  unsigned int v32; // r4
  void **v33; // r3
  int v34; // r2
  void **v35; // r3
  char *v36; // r3
  int v37; // r1
  void ****v38; // r3
  __int64 v39; // r2
  time_t v40; // r0
  void **v41; // r2
  int v42; // r3
  int v43; // r0
  _DWORD *v45; // r7
  void **v46; // r3
  unsigned int v47; // r4
  int v48; // r11
  _DWORD *v49; // r5
  _DWORD *v50; // r8
  int v51; // r4
  char *v52; // r9
  unsigned int v53; // r3
  void **v54; // r2
  int v55; // r3
  void **v56; // r3
  void *v57; // r2
  unsigned int v58; // r1
  bool v59; // cc
  char *v60; // r2
  char *v61; // lr
  char *v62; // r12
  int v63; // r0
  int v64; // r1
  int v65; // r2
  int v66; // r3
  _DWORD *v67; // lr
  char *v68; // r12
  int v69; // r1
  int v70; // r2
  int v71; // r3
  void **v72; // r0
  void **v73; // r7
  void *v74; // r0
  int *v75; // r0
  int v76; // r3
  const char *v77; // r1
  int v78; // r3
  int v79; // r3
  int v80; // r3
  int v81; // r2
  int v82; // r1
  int v83; // r3
  int v84; // r3
  int v85; // r3
  int v86; // r3
  unsigned int v87; // [sp+20h] [bp-C7Ch]
  int v88; // [sp+24h] [bp-C78h]
  __int64 v89; // [sp+28h] [bp-C74h]
  _DWORD *v90; // [sp+4Ch] [bp-C50h]
  int v91; // [sp+54h] [bp-C48h] BYREF
  void **v92; // [sp+58h] [bp-C44h] BYREF
  int v93; // [sp+5Ch] [bp-C40h] BYREF
  __int64 v94; // [sp+60h] [bp-C3Ch] BYREF
  char v95[12]; // [sp+68h] [bp-C34h] BYREF
  char s[16]; // [sp+74h] [bp-C28h] BYREF
  char v97[20]; // [sp+84h] [bp-C18h] BYREF
  char v98[1024]; // [sp+98h] [bp-C04h] BYREF
  char v99[2052]; // [sp+498h] [bp-804h] BYREF

  v2 = pthread_self();
  pthread_detach(v2);
  snprintf(s, 0x10u, "%d/SStratum", *a1);
  sub_4BD10(s);
  v3 = sub_49F68();
  a1[182] = v3;
  if ( !v3 )
  {
    v61 = " stratum_q in stratum_sthread";
    qmemcpy(v99, "Failed to create", 16);
    v62 = &v99[16];
    goto LABEL_84;
  }
  if ( byte_244080 || byte_1AECC4 || dword_9E320 > 4 )
  {
    snprintf(v99, 0x800u, "in %s ", "stratum_sthread");
    sub_47AB4(5, v99, 0);
    v3 = (char *)a1[182];
  }
  v4 = (const struct timespec *)*((unsigned __int8 *)a1 + 105);
  v5 = 0;
  v6 = 0;
  if ( *((_BYTE *)a1 + 105) )
    goto LABEL_48;
  do
  {
    v7 = sub_4A110((int)v3, v4);
    v92 = (void **)v7;
    if ( !v7 )
    {
      v61 = "Stratum q returned empty work";
      v62 = v99;
LABEL_84:
      v63 = *(_DWORD *)v61;
      v64 = *((_DWORD *)v61 + 1);
      v65 = *((_DWORD *)v61 + 2);
      v66 = *((_DWORD *)v61 + 3);
      v67 = v61 + 16;
      *(_DWORD *)v62 = v63;
      *((_DWORD *)v62 + 1) = v64;
      *((_DWORD *)v62 + 2) = v65;
      *((_DWORD *)v62 + 3) = v66;
      v68 = v62 + 16;
      v69 = v67[1];
      v70 = v67[2];
      v71 = v67[3];
      *(_DWORD *)v68 = *v67;
      *((_DWORD *)v68 + 1) = v69;
      *((_DWORD *)v68 + 2) = v70;
      *((_WORD *)v68 + 6) = v71;
      sub_47AB4(3, v99, 1);
      sub_54CCC(1, 1);
    }
    if ( *(_DWORD *)(v7 + 304) > 8u )
    {
      if ( (byte_244080 || byte_1AECC4 || dword_9E320 > 2)
        && ((snprintf(
               v99,
               0x800u,
               "Pool %d asking for inappropriately long nonce2 length %d",
               *a1,
               *(_DWORD *)(v7 + 304)),
             sub_47AB4(3, v99, 0),
             byte_244080)
         || byte_1AECC4)
        || dword_9E320 > 2 )
      {
        strcpy(v99, "Not attempting to submit shares");
        sub_47AB4(3, v99, 0);
      }
      sub_53084(&v92, "cgminer.c", "stratum_sthread", 7650);
      goto LABEL_47;
    }
    v8 = *(_DWORD *)(v7 + 76);
    v9 = *(_QWORD *)(v7 + 296);
    v88 = v8;
    v10 = HIDWORD(v9) == HIDWORD(v6);
    v89 = v9;
    if ( HIDWORD(v9) == HIDWORD(v6) )
      v10 = (_DWORD)v9 == (_DWORD)v6;
    v91 = *(_DWORD *)(v7 + 76);
    v11 = v10;
    if ( v8 == v5 )
      v12 = v11 & 1;
    else
      v12 = 0;
    v94 = v9;
    if ( v12 )
    {
      if ( byte_244080 || byte_1AECC4 || dword_9E320 > 5 )
      {
        snprintf(v99, 0x800u, "Filtering duplicate share to pool %d", *a1);
        sub_47AB4(6, v99, 0);
      }
      sub_53084(&v92, "cgminer.c", "stratum_sthread", 7662);
      goto LABEL_47;
    }
    sub_4981C(v95, (int)&v91, 4);
    sub_4981C(v97, (int)&v94, (int)v92[76]);
    v13 = (void ***)sub_496AC(0x34u, 1u, "cgminer.c", "stratum_sthread", 7671);
    v14 = v92;
    v15 = time(0);
    v16 = v92;
    v13[11] = (void **)v15;
    v13[9] = v16;
    memset(v98, 0, sizeof(v98));
    if ( pthread_mutex_lock(&stru_1AF200) )
    {
      v75 = _errno_location();
      snprintf(
        v99,
        0x800u,
        "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",
        *v75,
        "cgminer.c",
        "stratum_sthread",
        7680);
      goto LABEL_99;
    }
    v17 = dword_24400C;
    v13[10] = (void **)dword_24400C;
    dword_24400C = v17 + 1;
    if ( pthread_mutex_unlock(&stru_1AF200) )
    {
      v76 = *_errno_location();
      snprintf(
        v99,
        0x800u,
        "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
        v76,
        "cgminer.c",
        "stratum_sthread",
        7683);
      goto LABEL_99;
    }
    off_9E444();
    v93 = 0;
    sub_49940(&v93, (unsigned __int8 *)a1 + 1780, 4);
    if ( *((_BYTE *)a1 + 644) )
      snprintf(
        v98,
        0x400u,
        "{\"params\": [\"%s\", \"%s\", \"%s\", \"%s\", \"%s\", \"%08x\"], \"id\": %d, \"method\": \"mining.submit\"}",
        (const char *)a1[43],
        (const char *)v92[72],
        v97,
        (const char *)v92[77],
        v95,
        bswap32((unsigned int)v92[111] & ~v93),
        v13[10]);
    else
      snprintf(
        v98,
        0x400u,
        "{\"params\": [\"%s\", \"%s\", \"%s\", \"%s\", \"%s\"], \"id\": %d, \"method\": \"mining.submit\"}",
        (const char *)a1[43],
        (const char *)v92[72],
        v97,
        (const char *)v92[77],
        v95,
        v13[10]);
    if ( byte_244080 || byte_1AECC4 || dword_9E320 > 5 )
    {
      snprintf(v99, 0x800u, "Submitting share %08lx to pool %d", v14[54], *a1);
      sub_47AB4(6, v99, 0);
    }
    while ( 1 )
    {
      v18 = v13[11];
      if ( (int)v18 + 119 < time(0) )
        goto LABEL_119;
      v19 = strlen(v98);
      if ( sub_4B10C((int)a1, v98, v19) )
      {
        if ( pthread_mutex_lock(&stru_1AF200) )
        {
          v79 = *_errno_location();
          snprintf(
            v99,
            0x800u,
            "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",
            v79,
            "cgminer.c",
            "stratum_sthread",
            7727);
          goto LABEL_99;
        }
        v20 = *((unsigned __int8 *)v13 + 40);
        v21 = *((unsigned __int8 *)v13 + 43);
        v22 = *((unsigned __int8 *)v13 + 42);
        v13[5] = (void **)(v13 + 10);
        v23 = (void ***)dword_1AF218;
        v24 = v20 + 17973517 + (v21 << 24) + (v22 << 16) + (*((unsigned __int8 *)v13 + 41) << 8);
        v13[6] = (void **)4;
        v25 = v24 ^ (unsigned int)&unk_7F76D;
        v26 = (-1622558010 - v25) ^ (v25 << 8);
        v27 = (-17973517 - v25 - v26) ^ (v26 >> 13);
        v28 = (v25 - v26 - v27) ^ (v27 >> 12);
        v29 = (v26 - v27 - v28) ^ (v28 << 16);
        v30 = (v27 - v28 - v29) ^ (v29 >> 5);
        v31 = (v28 - v29 - v30) ^ (v30 >> 3);
        v32 = (v30 - v31 - ((v29 - v30 - v31) ^ (v31 << 10))) ^ (((v29 - v30 - v31) ^ (v31 << 10)) >> 15);
        v13[7] = (void **)v32;
        if ( v23 )
        {
          v33 = *v23;
          v13[2] = 0;
          *v13 = v33;
          v13[1] = (void **)((_BYTE *)(*v23)[4] - (_BYTE *)(*v23)[5]);
          *((_DWORD *)(*v23)[4] + 2) = v13;
          (*v23)[4] = v13;
        }
        else
        {
          v13[2] = 0;
          v13[1] = 0;
          dword_1AF218 = (int)v13;
          v72 = (void **)malloc(0x2Cu);
          *v13 = v72;
          if ( !v72 )
            goto LABEL_145;
          memset(v72, 0, 0x2Cu);
          (*v13)[4] = v13;
          (*v13)[1] = (void *)32;
          (*v13)[2] = (void *)5;
          (*v13)[5] = 0;
          v73 = *v13;
          *v73 = malloc(0x180u);
          v74 = **v13;
          if ( !v74 )
            goto LABEL_145;
          memset(v74, 0, 0x180u);
          v23 = v13;
          (*v13)[10] = (void *)-1609490463;
        }
        (*v23)[3] = (char *)(*v23)[3] + 1;
        v34 = 12 * (v32 & ((unsigned int)(*v23)[1] - 1));
        ++*(_DWORD *)((char *)**v23 + v34 + 4);
        v35 = *(void ***)((char *)**v23 + v34);
        v13[3] = 0;
        v13[4] = v35;
        v36 = (char *)**v23;
        v37 = *(_DWORD *)&v36[v34];
        v38 = (void ****)&v36[v34];
        if ( v37 )
        {
          *(_DWORD *)(v37 + 12) = v13;
          v38 = (void ****)((char *)**v23 + v34);
        }
        *v38 = v13;
        v39 = *(_QWORD *)((char *)**v23 + v34 + 4);
        if ( (unsigned int)v39 < 10 * (HIDWORD(v39) + 1) || (*v13)[9] == (void *)1 )
          goto LABEL_33;
        v45 = calloc(24 * (_DWORD)(*v13)[1], 1u);
        if ( v45 )
        {
          (*v13)[6] = (void *)((((2 * (_DWORD)(*v13)[1] - 1) & (unsigned int)(*v13)[3]) != 0)
                             + ((unsigned int)(*v13)[3] >> (*((_BYTE *)*v13 + 8) + 1)));
          (*v13)[7] = 0;
          v46 = *v13;
          v47 = (unsigned int)(*v13)[1];
          if ( v47 )
          {
            v48 = 0;
            v87 = 0;
            v90 = a1;
            do
            {
              v49 = *(_DWORD **)((char *)*v46 + v48);
              if ( v49 )
              {
                while ( 1 )
                {
                  v50 = (_DWORD *)v49[4];
                  v51 = 3 * ((2 * v47 - 1) & v49[7]);
                  v52 = (char *)&v45[v51];
                  v53 = *((_DWORD *)v52 + 1) + 1;
                  *((_DWORD *)v52 + 1) = v53;
                  v54 = *v13;
                  if ( v53 > (unsigned int)(*v13)[6] )
                  {
                    v54[7] = (char *)v54[7] + 1;
                    *((_DWORD *)v52 + 2) = sub_77070(*((_DWORD *)v52 + 1), (*v13)[6], v54);
                  }
                  v49[3] = 0;
                  v49[4] = v45[v51];
                  v55 = v45[v51];
                  if ( v55 )
                    *(_DWORD *)(v55 + 12) = v49;
                  v45[v51] = v49;
                  v46 = *v13;
                  if ( !v50 )
                    break;
                  v47 = (unsigned int)v46[1];
                  v49 = v50;
                }
                v47 = (unsigned int)v46[1];
              }
              v48 += 12;
              ++v87;
            }
            while ( v87 < v47 );
            a1 = v90;
          }
          free(*v46);
          (*v13)[1] = (void *)(2 * (_DWORD)(*v13)[1]);
          (*v13)[2] = (char *)(*v13)[2] + 1;
          **v13 = v45;
          v56 = *v13;
          v57 = (*v13)[7];
          v58 = (unsigned int)(*v13)[3];
          v59 = (unsigned int)v57 > v58 >> 1;
          if ( (unsigned int)v57 <= v58 >> 1 )
            v60 = 0;
          else
            v60 = (char *)v56[8];
          if ( v59 )
            ++v60;
          v56[8] = v60;
          if ( (unsigned int)(*v13)[8] > 1 )
            (*v13)[9] = (void *)1;
LABEL_33:
          ++a1[183];
          if ( !pthread_mutex_unlock(&stru_1AF200) )
          {
            off_9E444();
            if ( sub_551DC((int)a1, (_BYTE *)a1 + 96) )
            {
              if ( !byte_244080 && !byte_1AECC4 && dword_9E320 <= 3 )
              {
                if ( !byte_1AECC5 )
                {
LABEL_39:
                  v40 = time(0);
                  v41 = v13[11];
                  v42 = (unsigned __int8)byte_1AECC5;
                  v13[12] = (void **)v40;
                  v43 = v40 - (_DWORD)v41;
                  if ( v43 > 0 )
                    v42 |= 1u;
                  if ( v42 && (byte_244080 || byte_1AECC4 || dword_9E320 > 5) )
                  {
                    snprintf(v99, 0x800u, "Pool %d stratum share submission lag time %d seconds", *a1, v43);
                    sub_47AB4(6, v99, 0);
                  }
                  goto LABEL_46;
                }
                goto LABEL_81;
              }
              snprintf(v99, 0x800u, "Pool %d communication resumed, submitting work", *a1);
              sub_47AB4(4, v99, 0);
            }
            if ( !byte_1AECC5 )
              goto LABEL_39;
            if ( byte_244080 || byte_1AECC4 )
            {
LABEL_53:
              strcpy(v99, "Successfully submitted, adding to stratum_shares db");
              sub_47AB4(7, v99, 0);
              goto LABEL_39;
            }
LABEL_81:
            if ( dword_9E320 <= 6 )
              goto LABEL_39;
            goto LABEL_53;
          }
          v80 = *_errno_location();
          snprintf(
            v99,
            0x800u,
            "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
            v80,
            "cgminer.c",
            "stratum_sthread",
            7730);
LABEL_99:
          sub_47AB4(3, v99, 1);
          sub_54CCC(1, 1);
        }
LABEL_145:
        exit(-1);
      }
      if ( !sub_55170((int)a1, (_BYTE *)a1 + 96) && sub_584B4((int)a1) )
      {
        if ( byte_244080 || byte_1AECC4 || dword_9E320 > 3 )
        {
          snprintf(v99, 0x800u, "Pool %d stratum share submission failure", *a1);
          sub_47AB4(4, v99, 0);
        }
        v83 = a1[33] + 1;
        ++dword_244014;
        a1[33] = v83;
      }
      if ( byte_245204 )
        break;
      if ( pthread_mutex_lock((pthread_mutex_t *)(a1 + 53)) )
      {
        v84 = *_errno_location();
        snprintf(
          v99,
          0x800u,
          "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",
          v84,
          "cgminer.c",
          "stratum_sthread",
          7752);
        goto LABEL_99;
      }
      if ( pthread_rwlock_rdlock((pthread_rwlock_t *)(a1 + 59)) )
      {
        v85 = *_errno_location();
        snprintf(
          v99,
          0x800u,
          "WTF RDLOCK ERROR ON LOCK! errno=%d in %s %s():%d",
          v85,
          "cgminer.c",
          "stratum_sthread",
          7752);
        goto LABEL_99;
      }
      if ( pthread_mutex_unlock((pthread_mutex_t *)(a1 + 53)) )
      {
        v86 = *_errno_location();
        snprintf(
          v99,
          0x800u,
          "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
          v86,
          "cgminer.c",
          "stratum_sthread",
          7752);
        goto LABEL_99;
      }
      v77 = (const char *)a1[153];
      if ( !v77 || strcmp((const char *)v92[80], v77) )
      {
        if ( !pthread_rwlock_unlock((pthread_rwlock_t *)(a1 + 59)) )
        {
          off_9E444();
          if ( !byte_1AECC5 )
            goto LABEL_124;
          if ( byte_244080 || byte_1AECC4 || dword_9E320 > 6 )
          {
            strcpy(v99, "No matching session id for resubmitting stratum share");
            sub_47AB4(7, v99, 0);
            goto LABEL_119;
          }
LABEL_121:
          if ( byte_1AECC4 || dword_9E320 > 6 )
            goto LABEL_123;
          goto LABEL_124;
        }
LABEL_111:
        v78 = *_errno_location();
        snprintf(
          v99,
          0x800u,
          "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",
          v78,
          "cgminer.c",
          "stratum_sthread",
          7754);
        goto LABEL_99;
      }
      if ( pthread_rwlock_unlock((pthread_rwlock_t *)(a1 + 59)) )
        goto LABEL_111;
      off_9E444();
      sleep(2u);
    }
    if ( !byte_1AECC5 )
      goto LABEL_124;
    if ( !byte_244080 && !byte_1AECC4 && dword_9E320 <= 6 )
      goto LABEL_121;
    strcpy(v99, "Lowmem option prevents resubmitting stratum share");
    sub_47AB4(7, v99, 0);
LABEL_119:
    if ( byte_1AECC5 )
    {
      if ( !byte_244080 )
        goto LABEL_121;
LABEL_123:
      strcpy(v99, "Failed to submit stratum share, discarding");
      sub_47AB4(7, v99, 0);
    }
LABEL_124:
    sub_53084(&v92, "cgminer.c", "stratum_sthread", 7769);
    free(v13);
    v81 = dword_242E98;
    v82 = dword_242E9C;
    ++a1[30];
    *(_QWORD *)&dword_242E98 = __PAIR64__(v82, v81) + 1;
LABEL_46:
    v5 = v88;
    v6 = v89;
LABEL_47:
    v4 = (const struct timespec *)*((unsigned __int8 *)a1 + 105);
    v3 = (char *)a1[182];
  }
  while ( !*((_BYTE *)a1 + 105) );
LABEL_48:
  sub_4A02C((int)v3);
  return 0;
}
