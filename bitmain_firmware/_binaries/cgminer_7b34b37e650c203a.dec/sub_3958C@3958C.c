int __fastcall sub_3958C(_DWORD *a1)
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
  unsigned int v25; // r2
  unsigned int v26; // r1
  int v27; // r3
  unsigned int v28; // r2
  unsigned int v29; // r1
  int v30; // r3
  unsigned int v31; // r4
  void **v32; // r3
  int v33; // r2
  void **v34; // r3
  char *v35; // r3
  int v36; // r1
  void ****v37; // r3
  __int64 v38; // r2
  time_t v39; // r0
  void **v40; // r2
  int v41; // r3
  int v42; // r0
  _DWORD *v44; // r7
  void **v45; // r3
  unsigned int v46; // r4
  int v47; // r11
  _DWORD *v48; // r5
  _DWORD *v49; // r8
  int v50; // r4
  char *v51; // r9
  unsigned int v52; // r3
  int v53; // r3
  void **v54; // r3
  void *v55; // r2
  unsigned int v56; // r1
  bool v57; // cc
  char *v58; // r2
  char *v59; // lr
  char *v60; // r12
  int v61; // r0
  int v62; // r1
  int v63; // r2
  int v64; // r3
  _DWORD *v65; // lr
  char *v66; // r12
  int v67; // r1
  int v68; // r2
  int v69; // r3
  void **v70; // r0
  void **v71; // r7
  void *v72; // r0
  int *v73; // r0
  int v74; // r3
  const char *v75; // r1
  int v76; // r3
  int v77; // r3
  int v78; // r3
  int v79; // r2
  int v80; // r1
  int v81; // r3
  int v82; // r3
  int v83; // r3
  int v84; // r3
  unsigned int v85; // [sp+20h] [bp-C7Ch]
  int v86; // [sp+24h] [bp-C78h]
  __int64 v87; // [sp+28h] [bp-C74h]
  _DWORD *v88; // [sp+4Ch] [bp-C50h]
  int v89; // [sp+54h] [bp-C48h] BYREF
  void **v90; // [sp+58h] [bp-C44h] BYREF
  int v91; // [sp+5Ch] [bp-C40h] BYREF
  __int64 v92; // [sp+60h] [bp-C3Ch] BYREF
  char v93[12]; // [sp+68h] [bp-C34h] BYREF
  char s[16]; // [sp+74h] [bp-C28h] BYREF
  char v95[20]; // [sp+84h] [bp-C18h] BYREF
  char v96[1024]; // [sp+98h] [bp-C04h] BYREF
  char v97[2052]; // [sp+498h] [bp-804h] BYREF

  v2 = pthread_self();
  pthread_detach(v2);
  snprintf(s, 0x10u, "%d/SStratum", *a1);
  sub_250A8(s);
  v3 = sub_23300();
  a1[182] = v3;
  if ( !v3 )
  {
    v59 = " stratum_q in stratum_sthread";
    qmemcpy(v97, "Failed to create", 16);
    v60 = &v97[16];
    goto LABEL_84;
  }
  if ( byte_74500 || byte_68BD4 || dword_67DB4 > 4 )
  {
    snprintf(v97, 0x800u, "in %s , pool: %d, pool_url: %s", "stratum_sthread", *a1, (const char *)a1[41]);
    sub_20F58(5, v97, 0);
    v3 = (char *)a1[182];
  }
  v4 = (const struct timespec *)*((unsigned __int8 *)a1 + 105);
  v5 = 0;
  v6 = 0;
  if ( *((_BYTE *)a1 + 105) )
    goto LABEL_48;
  do
  {
    v7 = sub_234A8((int)v3, v4);
    v90 = (void **)v7;
    if ( !v7 )
    {
      v59 = "Stratum q returned empty work";
      v60 = v97;
LABEL_84:
      v61 = *(_DWORD *)v59;
      v62 = *((_DWORD *)v59 + 1);
      v63 = *((_DWORD *)v59 + 2);
      v64 = *((_DWORD *)v59 + 3);
      v65 = v59 + 16;
      *(_DWORD *)v60 = v61;
      *((_DWORD *)v60 + 1) = v62;
      *((_DWORD *)v60 + 2) = v63;
      *((_DWORD *)v60 + 3) = v64;
      v66 = v60 + 16;
      v67 = v65[1];
      v68 = v65[2];
      v69 = v65[3];
      *(_DWORD *)v66 = *v65;
      *((_DWORD *)v66 + 1) = v67;
      *((_DWORD *)v66 + 2) = v68;
      *((_WORD *)v66 + 6) = v69;
      sub_20F58(3, v97, 1);
      sub_2E6B0(1, 1);
    }
    if ( *(_DWORD *)(v7 + 304) > 8u )
    {
      if ( (byte_74500 || byte_68BD4 || dword_67DB4 > 2)
        && ((snprintf(
               v97,
               0x800u,
               "Pool %d asking for inappropriately long nonce2 length %d",
               *a1,
               *(_DWORD *)(v7 + 304)),
             sub_20F58(3, v97, 0),
             byte_74500)
         || byte_68BD4)
        || dword_67DB4 > 2 )
      {
        strcpy(v97, "Not attempting to submit shares");
        sub_20F58(3, v97, 0);
      }
      sub_2CBA8(&v90, "cgminer.c", "stratum_sthread", 7656);
      goto LABEL_47;
    }
    v8 = *(_DWORD *)(v7 + 76);
    v9 = *(_QWORD *)(v7 + 296);
    v86 = v8;
    v10 = HIDWORD(v9) == HIDWORD(v6);
    v87 = v9;
    if ( HIDWORD(v9) == HIDWORD(v6) )
      v10 = (_DWORD)v9 == (_DWORD)v6;
    v89 = *(_DWORD *)(v7 + 76);
    v11 = v10;
    if ( v8 == v5 )
      v12 = v11 & 1;
    else
      v12 = 0;
    v92 = v9;
    if ( v12 )
    {
      if ( byte_74500 || byte_68BD4 || dword_67DB4 > 5 )
      {
        snprintf(v97, 0x800u, "Filtering duplicate share to pool %d", *a1);
        sub_20F58(6, v97, 0);
      }
      sub_2CBA8(&v90, "cgminer.c", "stratum_sthread", 7668);
      goto LABEL_47;
    }
    sub_22BB4(v93, (int)&v89, 4);
    sub_22BB4(v95, (int)&v92, (int)v90[76]);
    v13 = (void ***)sub_22A44(0x34u, 1u, "cgminer.c", "stratum_sthread", 7677);
    v14 = v90;
    v15 = time(0);
    v16 = v90;
    v13[11] = (void **)v15;
    v13[9] = v16;
    memset(v96, 0, sizeof(v96));
    if ( pthread_mutex_lock(&stru_690F0) )
    {
      v73 = _errno_location();
      snprintf(
        v97,
        0x800u,
        "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",
        *v73,
        "cgminer.c",
        "stratum_sthread",
        7686);
      goto LABEL_99;
    }
    v17 = dword_7448C;
    v13[10] = (void **)dword_7448C;
    dword_7448C = v17 + 1;
    if ( pthread_mutex_unlock(&stru_690F0) )
    {
      v74 = *_errno_location();
      snprintf(
        v97,
        0x800u,
        "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
        v74,
        "cgminer.c",
        "stratum_sthread",
        7689);
      goto LABEL_99;
    }
    off_67ED8();
    v91 = 0;
    sub_22CD8(&v91, (unsigned __int8 *)a1 + 1780, 4);
    if ( *((_BYTE *)a1 + 644) )
      snprintf(
        v96,
        0x400u,
        "{\"params\": [\"%s\", \"%s\", \"%s\", \"%s\", \"%s\", \"%08x\"], \"id\": %d, \"method\": \"mining.submit\"}",
        (const char *)a1[43],
        (const char *)v90[72],
        v95,
        (const char *)v90[77],
        v93,
        bswap32((unsigned int)v90[111] & ~v91),
        v13[10]);
    else
      snprintf(
        v96,
        0x400u,
        "{\"params\": [\"%s\", \"%s\", \"%s\", \"%s\", \"%s\"], \"id\": %d, \"method\": \"mining.submit\"}",
        (const char *)a1[43],
        (const char *)v90[72],
        v95,
        (const char *)v90[77],
        v93,
        v13[10]);
    if ( byte_74500 || byte_68BD4 || dword_67DB4 > 5 )
    {
      snprintf(v97, 0x800u, "Submitting share %08lx to pool %d", v14[54], *a1);
      sub_20F58(6, v97, 0);
    }
    while ( 1 )
    {
      v18 = v13[11];
      if ( (int)v18 + 119 < time(0) )
        goto LABEL_119;
      v19 = strlen(v96);
      if ( sub_244A4((int)a1, v96, v19) )
      {
        if ( pthread_mutex_lock(&stru_690F0) )
        {
          v77 = *_errno_location();
          snprintf(
            v97,
            0x800u,
            "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",
            v77,
            "cgminer.c",
            "stratum_sthread",
            7733);
          goto LABEL_99;
        }
        v20 = *((unsigned __int8 *)v13 + 40);
        v21 = *((unsigned __int8 *)v13 + 43);
        v22 = *((unsigned __int8 *)v13 + 42);
        v13[5] = (void **)(v13 + 10);
        v23 = (void ***)dword_69108;
        v24 = v20 + 17973517 + (v21 << 24) + (v22 << 16) + (*((unsigned __int8 *)v13 + 41) << 8);
        v13[6] = (void **)4;
        v24 ^= 0x7F76Du;
        v25 = (-1622558010 - v24) ^ (v24 << 8);
        v26 = (-17973517 - v24 - v25) ^ (v25 >> 13);
        v27 = (v24 - v25 - v26) ^ (v26 >> 12);
        v28 = (v25 - v26 - v27) ^ (v27 << 16);
        v29 = (v26 - v27 - v28) ^ (v28 >> 5);
        v30 = (v27 - v28 - v29) ^ (v29 >> 3);
        v31 = (v29 - v30 - ((v28 - v29 - v30) ^ (v30 << 10))) ^ (((v28 - v29 - v30) ^ (v30 << 10)) >> 15);
        v13[7] = (void **)v31;
        if ( v23 )
        {
          v32 = *v23;
          v13[2] = 0;
          *v13 = v32;
          v13[1] = (void **)((_BYTE *)(*v23)[4] - (_BYTE *)(*v23)[5]);
          *((_DWORD *)(*v23)[4] + 2) = v13;
          (*v23)[4] = v13;
        }
        else
        {
          v13[2] = 0;
          v13[1] = 0;
          dword_69108 = (int)v13;
          v70 = (void **)malloc(0x2Cu);
          *v13 = v70;
          if ( !v70 )
            goto LABEL_145;
          memset(v70, 0, 0x2Cu);
          (*v13)[4] = v13;
          (*v13)[1] = (void *)32;
          (*v13)[2] = (void *)5;
          (*v13)[5] = 0;
          v71 = *v13;
          *v71 = malloc(0x180u);
          v72 = **v13;
          if ( !v72 )
            goto LABEL_145;
          memset(v72, 0, 0x180u);
          v23 = v13;
          (*v13)[10] = (void *)-1609490463;
        }
        (*v23)[3] = (char *)(*v23)[3] + 1;
        v33 = 12 * (v31 & ((unsigned int)(*v23)[1] - 1));
        ++*(_DWORD *)((char *)**v23 + v33 + 4);
        v34 = *(void ***)((char *)**v23 + v33);
        v13[3] = 0;
        v13[4] = v34;
        v35 = (char *)**v23;
        v36 = *(_DWORD *)&v35[v33];
        v37 = (void ****)&v35[v33];
        if ( v36 )
        {
          *(_DWORD *)(v36 + 12) = v13;
          v37 = (void ****)((char *)**v23 + v33);
        }
        *v37 = v13;
        v38 = *(_QWORD *)((char *)**v23 + v33 + 4);
        if ( (unsigned int)v38 < 10 * (HIDWORD(v38) + 1) || (*v13)[9] == (void *)1 )
          goto LABEL_33;
        v44 = calloc(24 * (_DWORD)(*v13)[1], 1u);
        if ( v44 )
        {
          (*v13)[6] = (void *)((((2 * (_DWORD)(*v13)[1] - 1) & (unsigned int)(*v13)[3]) != 0)
                             + ((unsigned int)(*v13)[3] >> (*((_BYTE *)*v13 + 8) + 1)));
          (*v13)[7] = 0;
          v45 = *v13;
          v46 = (unsigned int)(*v13)[1];
          if ( v46 )
          {
            v47 = 0;
            v85 = 0;
            v88 = a1;
            do
            {
              v48 = *(_DWORD **)((char *)*v45 + v47);
              if ( v48 )
              {
                while ( 1 )
                {
                  v49 = (_DWORD *)v48[4];
                  v50 = 3 * ((2 * v46 - 1) & v48[7]);
                  v51 = (char *)&v44[v50];
                  v52 = *((_DWORD *)v51 + 1) + 1;
                  *((_DWORD *)v51 + 1) = v52;
                  if ( v52 > (unsigned int)(*v13)[6] )
                  {
                    (*v13)[7] = (char *)(*v13)[7] + 1;
                    *((_DWORD *)v51 + 2) = sub_498D8(*((_DWORD *)v51 + 1), (*v13)[6]);
                  }
                  v48[3] = 0;
                  v48[4] = v44[v50];
                  v53 = v44[v50];
                  if ( v53 )
                    *(_DWORD *)(v53 + 12) = v48;
                  v44[v50] = v48;
                  v45 = *v13;
                  if ( !v49 )
                    break;
                  v46 = (unsigned int)v45[1];
                  v48 = v49;
                }
                v46 = (unsigned int)v45[1];
              }
              v47 += 12;
              ++v85;
            }
            while ( v85 < v46 );
            a1 = v88;
          }
          free(*v45);
          (*v13)[1] = (void *)(2 * (_DWORD)(*v13)[1]);
          (*v13)[2] = (char *)(*v13)[2] + 1;
          **v13 = v44;
          v54 = *v13;
          v55 = (*v13)[7];
          v56 = (unsigned int)(*v13)[3];
          v57 = (unsigned int)v55 > v56 >> 1;
          if ( (unsigned int)v55 <= v56 >> 1 )
            v58 = 0;
          else
            v58 = (char *)v54[8];
          if ( v57 )
            ++v58;
          v54[8] = v58;
          if ( (unsigned int)(*v13)[8] > 1 )
            (*v13)[9] = (void *)1;
LABEL_33:
          ++a1[183];
          if ( !pthread_mutex_unlock(&stru_690F0) )
          {
            off_67ED8();
            if ( sub_2F180((int)a1, (_BYTE *)a1 + 96) )
            {
              if ( !byte_74500 && !byte_68BD4 && dword_67DB4 <= 3 )
              {
                if ( !byte_68BD5 )
                {
LABEL_39:
                  v39 = time(0);
                  v40 = v13[11];
                  v41 = (unsigned __int8)byte_68BD5;
                  v13[12] = (void **)v39;
                  v42 = v39 - (_DWORD)v40;
                  if ( v42 > 0 )
                    v41 |= 1u;
                  if ( v41 && (byte_74500 || byte_68BD4 || dword_67DB4 > 5) )
                  {
                    snprintf(v97, 0x800u, "Pool %d stratum share submission lag time %d seconds", *a1, v42);
                    sub_20F58(6, v97, 0);
                  }
                  goto LABEL_46;
                }
                goto LABEL_81;
              }
              snprintf(v97, 0x800u, "Pool %d communication resumed, submitting work", *a1);
              sub_20F58(4, v97, 0);
            }
            if ( !byte_68BD5 )
              goto LABEL_39;
            if ( byte_74500 || byte_68BD4 )
            {
LABEL_53:
              strcpy(v97, "Successfully submitted, adding to stratum_shares db");
              sub_20F58(7, v97, 0);
              goto LABEL_39;
            }
LABEL_81:
            if ( dword_67DB4 <= 6 )
              goto LABEL_39;
            goto LABEL_53;
          }
          v78 = *_errno_location();
          snprintf(
            v97,
            0x800u,
            "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
            v78,
            "cgminer.c",
            "stratum_sthread",
            7736);
LABEL_99:
          sub_20F58(3, v97, 1);
          sub_2E6B0(1, 1);
        }
LABEL_145:
        exit(-1);
      }
      if ( !sub_2F098((int)a1, (_BYTE *)a1 + 96) && sub_32424((int)a1) )
      {
        if ( byte_74500 || byte_68BD4 || dword_67DB4 > 3 )
        {
          snprintf(v97, 0x800u, "Pool %d stratum share submission failure", *a1);
          sub_20F58(4, v97, 0);
        }
        v81 = a1[33] + 1;
        ++dword_74494;
        a1[33] = v81;
      }
      if ( byte_75684 )
        break;
      if ( pthread_mutex_lock((pthread_mutex_t *)(a1 + 53)) )
      {
        v82 = *_errno_location();
        snprintf(
          v97,
          0x800u,
          "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",
          v82,
          "cgminer.c",
          "stratum_sthread",
          7758);
        goto LABEL_99;
      }
      if ( pthread_rwlock_rdlock((pthread_rwlock_t *)(a1 + 59)) )
      {
        v83 = *_errno_location();
        snprintf(
          v97,
          0x800u,
          "WTF RDLOCK ERROR ON LOCK! errno=%d in %s %s():%d",
          v83,
          "cgminer.c",
          "stratum_sthread",
          7758);
        goto LABEL_99;
      }
      if ( pthread_mutex_unlock((pthread_mutex_t *)(a1 + 53)) )
      {
        v84 = *_errno_location();
        snprintf(
          v97,
          0x800u,
          "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
          v84,
          "cgminer.c",
          "stratum_sthread",
          7758);
        goto LABEL_99;
      }
      v75 = (const char *)a1[153];
      if ( !v75 || strcmp((const char *)v90[80], v75) )
      {
        if ( !pthread_rwlock_unlock((pthread_rwlock_t *)(a1 + 59)) )
        {
          off_67ED8();
          if ( !byte_68BD5 )
            goto LABEL_124;
          if ( byte_74500 || byte_68BD4 || dword_67DB4 > 6 )
          {
            strcpy(v97, "No matching session id for resubmitting stratum share");
            sub_20F58(7, v97, 0);
            goto LABEL_119;
          }
LABEL_121:
          if ( byte_68BD4 || dword_67DB4 > 6 )
            goto LABEL_123;
          goto LABEL_124;
        }
LABEL_111:
        v76 = *_errno_location();
        snprintf(
          v97,
          0x800u,
          "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",
          v76,
          "cgminer.c",
          "stratum_sthread",
          7760);
        goto LABEL_99;
      }
      if ( pthread_rwlock_unlock((pthread_rwlock_t *)(a1 + 59)) )
        goto LABEL_111;
      off_67ED8();
      sleep(2u);
    }
    if ( !byte_68BD5 )
      goto LABEL_124;
    if ( !byte_74500 && !byte_68BD4 && dword_67DB4 <= 6 )
      goto LABEL_121;
    strcpy(v97, "Lowmem option prevents resubmitting stratum share");
    sub_20F58(7, v97, 0);
LABEL_119:
    if ( byte_68BD5 )
    {
      if ( !byte_74500 )
        goto LABEL_121;
LABEL_123:
      strcpy(v97, "Failed to submit stratum share, discarding");
      sub_20F58(7, v97, 0);
    }
LABEL_124:
    sub_2CBA8(&v90, "cgminer.c", "stratum_sthread", 7775);
    free(v13);
    v79 = dword_73318;
    v80 = dword_7331C;
    ++a1[30];
    *(_QWORD *)&dword_73318 = __PAIR64__(v80, v79) + 1;
LABEL_46:
    v5 = v86;
    v6 = v87;
LABEL_47:
    v4 = (const struct timespec *)*((unsigned __int8 *)a1 + 105);
    v3 = (char *)a1[182];
  }
  while ( !*((_BYTE *)a1 + 105) );
LABEL_48:
  sub_233C4((int)v3);
  return 0;
}
