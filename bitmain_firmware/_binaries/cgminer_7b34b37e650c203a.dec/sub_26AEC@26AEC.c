int __fastcall sub_26AEC(_DWORD *a1)
{
  int v2; // r0
  int v3; // r3
  int v4; // r0
  int v5; // r5
  const char *v7; // r1
  size_t v8; // r3
  void *v9; // r0
  _BYTE *v10; // r0
  int v11; // r2
  unsigned __int8 *v12; // r1
  int *v13; // r0
  int *v14; // r0
  int v15; // r3
  int v16; // r2
  unsigned int *v17; // r3
  unsigned int v18; // r2
  unsigned int v19; // r2
  struct addrinfo *v20; // r5
  int v21; // r0
  int *v22; // r9
  int v23; // r0
  int v24; // r6
  char *v25; // r12
  int v26; // r0
  int v27; // r1
  int v28; // r2
  __int16 v29; // r3
  int v30; // r7
  int v31; // r3
  int v32; // r8
  char *v33; // r7
  fd_set *v34; // r3
  int v35; // r0
  const char *v36; // r0
  int v37; // r3
  int v38; // r4
  int v39; // r2
  int v40; // r0
  const char *v41; // r3
  int v42; // r2
  size_t v43; // r0
  int v44; // r2
  int *v45; // r0
  int *v46; // r0
  int v47; // r2
  const char *v48; // r0
  size_t v49; // r0
  size_t v50; // r5
  __int16 v51; // r0
  char *v52; // r12
  int v53; // r12
  int v54; // r3
  char *v55; // r0
  char *v56; // r4
  _DWORD *v57; // r4
  _DWORD *v58; // r0
  char *v59; // r4
  unsigned int *v60; // r3
  unsigned int v61; // r2
  unsigned int v62; // r2
  int *v63; // r0
  int *v64; // r0
  int *v65; // r0
  int *v66; // r0
  _DWORD *v67; // r0
  _DWORD *v68; // r9
  int v69; // r7
  _DWORD *v70; // r0
  _DWORD *v71; // r8
  char *v72; // r6
  char *v73; // r8
  const char *v74; // r0
  int v76; // r0
  int v77; // r0
  int *v78; // r0
  int v79; // r5
  int v80; // r5
  int v81; // r4
  int v83; // r4
  char *service; // [sp+18h] [bp-2B64h]
  char *servicea; // [sp+18h] [bp-2B64h]
  char *serviceb; // [sp+18h] [bp-2B64h]
  char *name; // [sp+1Ch] [bp-2B60h]
  pthread_mutex_t *mutex; // [sp+20h] [bp-2B5Ch]
  int v89; // [sp+2Ch] [bp-2B50h]
  int v90; // [sp+30h] [bp-2B4Ch]
  int v91; // [sp+34h] [bp-2B48h]
  struct addrinfo *pai; // [sp+44h] [bp-2B38h] BYREF
  socklen_t optlen; // [sp+48h] [bp-2B34h] BYREF
  int optval; // [sp+4Ch] [bp-2B30h] BYREF
  struct timeval timeout; // [sp+50h] [bp-2B2Ch] BYREF
  struct addrinfo s; // [sp+58h] [bp-2B24h] BYREF
  _DWORD v97[23]; // [sp+78h] [bp-2B04h] BYREF
  char v98[156]; // [sp+D4h] [bp-2AA8h] BYREF
  char v99; // [sp+170h] [bp-2A0Ch] BYREF
  fd_set writefds; // [sp+174h] [bp-2A08h] BYREF
  char v101[2040]; // [sp+378h] [bp-2804h] BYREF
  char v102[8196]; // [sp+B78h] [bp-2004h] BYREF

  v89 = 0;
  mutex = (pthread_mutex_t *)(a1 + 176);
  v90 = 0;
  while ( 2 )
  {
    if ( pthread_mutex_lock(mutex) )
    {
      v46 = _errno_location();
      snprintf(
        v101,
        0x800u,
        "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",
        *v46,
        "util.c",
        "setup_stratum_socket",
        2945);
      sub_20F58(3, v101, 1);
      sub_3EBA0(1);
    }
    v2 = a1[147];
    *((_BYTE *)a1 + 641) = 0;
    if ( v2 )
      close(v2);
    a1[147] = 0;
    if ( pthread_mutex_unlock(mutex) )
    {
      v45 = _errno_location();
      snprintf(
        v101,
        0x800u,
        "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
        *v45,
        "util.c",
        "setup_stratum_socket",
        2950);
      sub_20F58(3, v101, 1);
      sub_3EBA0(1);
    }
    off_67ED8();
    memset(&s, 0, sizeof(s));
    v3 = a1[46];
    s.ai_socktype = 1;
    if ( v3 )
      goto LABEL_7;
    v36 = (const char *)dword_6AB9C;
    if ( !dword_6AB9C )
    {
      name = (char *)a1[150];
      goto LABEL_104;
    }
    a1[46] = dword_6AB9C;
    sub_23CD8(v36, a1 + 151, (char **)a1 + 152);
    v37 = a1[46];
    a1[45] = 3;
    name = (char *)a1[150];
    if ( !v37 )
    {
LABEL_104:
      service = (char *)a1[146];
      v4 = getaddrinfo(name, service, &s, &pai);
      goto LABEL_8;
    }
LABEL_7:
    name = (char *)a1[151];
    service = (char *)a1[152];
    v4 = getaddrinfo(name, service, &s, &pai);
LABEL_8:
    v91 = v4;
    if ( v4 )
    {
      if ( !*((_BYTE *)a1 + 99) )
      {
        if ( byte_74500 || byte_68BD4 || dword_67DB4 > 3 )
        {
          snprintf(v101, 0x800u, "Failed to resolve (?wrong URL) %s:%s", name, service);
          sub_20F58(4, v101, 0);
        }
        *((_BYTE *)a1 + 99) = 1;
        goto LABEL_15;
      }
      if ( byte_74500 || byte_68BD4 || dword_67DB4 > 5 )
      {
        snprintf(v101, 0x800u, "Failed to getaddrinfo for %s:%s", name, service);
        sub_20F58(6, v101, 0);
        goto LABEL_15;
      }
      goto LABEL_108;
    }
    v20 = pai;
    if ( !pai )
    {
LABEL_71:
      if ( byte_74500 || byte_68BD4 || dword_67DB4 > 5 )
      {
        snprintf(v101, 0x800u, "Failed to connect to stratum on %s:%s", name, service);
        sub_20F58(6, v101, 0);
      }
      freeaddrinfo(pai);
      goto LABEL_15;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        v23 = socket(v20->ai_family, v20->ai_socktype, v20->ai_protocol);
        v24 = v23;
        if ( v23 != -1 )
          break;
        if ( !byte_68BD5 || !byte_74500 && !byte_68BD4 && dword_67DB4 <= 6 )
          goto LABEL_63;
        v25 = v101;
        v26 = *(_DWORD *)"Failed socket";
        v27 = *(_DWORD *)"ed socket";
        v28 = *(_DWORD *)"ocket";
        v29 = *(_WORD *)"t";
LABEL_70:
        *(_DWORD *)v25 = v26;
        *((_DWORD *)v25 + 1) = v27;
        *((_DWORD *)v25 + 2) = v28;
        *((_WORD *)v25 + 6) = v29;
        sub_20F58(7, v101, 0);
        v20 = v20->ai_next;
        if ( !v20 )
          goto LABEL_71;
      }
      v21 = fcntl(v23, 3, 0);
      fcntl(v24, 4, v21 | 0x800);
      if ( connect(v24, v20->ai_addr, v20->ai_addrlen) != -1 )
        break;
      timeout.tv_usec = 0;
      timeout.tv_sec = 1;
      v22 = _errno_location();
      if ( *v22 == 115 )
      {
        v30 = v24 + 31;
        if ( v24 >= 0 )
          v30 = v24;
        LOBYTE(v31) = v24 & 0x1F;
        if ( v24 <= 0 )
          v31 = -(-v24 & 0x1F);
        v32 = 1 << v31;
        v33 = &v102[4 * (v30 >> 5)];
        while ( 1 )
        {
          v34 = (fd_set *)&v99;
          do
          {
            v34->__fds_bits[1] = 0;
            v34 = (fd_set *)((char *)v34 + 4);
          }
          while ( &writefds.__fds_bits[31] != (__fd_mask *)v34 );
          *((_DWORD *)v33 - 641) |= v32;
          v35 = select(v24 + 1, 0, &writefds, 0, &timeout);
          if ( v35 > 0 )
            break;
          if ( !v35 || *v22 != 4 )
            goto LABEL_85;
        }
        if ( (v32 & *((_DWORD *)v33 - 641)) != 0 )
        {
          optlen = 4;
          if ( !getsockopt(v24, 1, 4, &optval, &optlen) && !optval )
          {
            if ( byte_68BD5 && (byte_74500 || byte_68BD4 || dword_67DB4 > 6) )
            {
              strcpy(v101, "Succeeded delayed connect");
              sub_20F58(7, v101, 0);
            }
            goto LABEL_100;
          }
        }
LABEL_85:
        close(v24);
        if ( byte_68BD5 && (byte_74500 || byte_68BD4 || dword_67DB4 > 6) )
        {
          qmemcpy(v101, "Select timeout/f", 16);
          v25 = &v101[16];
          v26 = *(_DWORD *)"ailed connect";
          v27 = *(_DWORD *)"d connect";
          v28 = *(_DWORD *)"nnect";
          v29 = *(_WORD *)"t";
          goto LABEL_70;
        }
      }
      else
      {
        close(v24);
        if ( byte_68BD5 && (byte_74500 || byte_68BD4 || dword_67DB4 > 6) )
        {
          strcpy(v101, "Failed sock connect");
          sub_20F58(7, v101, 0);
        }
      }
LABEL_63:
      v20 = v20->ai_next;
      if ( !v20 )
        goto LABEL_71;
    }
    if ( byte_74500 || byte_68BD4 || dword_67DB4 > 3 )
    {
      strcpy(v101, "Succeeded immediate connect");
      sub_20F58(4, v101, 0);
    }
LABEL_100:
    sub_22400(v24);
    freeaddrinfo(pai);
    if ( !a1[46] )
    {
LABEL_117:
      if ( !a1[148] )
      {
        a1[148] = sub_22A44(0x2000u, 1u, "util.c", "setup_stratum_socket", 3087);
        a1[149] = 0x2000;
      }
      a1[147] = v24;
      writefds.__fds_bits[0] = 45;
      *(_DWORD *)v101 = 30;
      timeout.tv_sec = 1;
      v40 = fcntl(v24, 3, 0);
      fcntl(v24, 4, v40 | 0x800);
      setsockopt(v24, 1, 9, &timeout, 4u);
      if ( !byte_74501 )
        fcntl(v24, 2, 1);
      setsockopt(v24, 6, 1, &timeout, 4u);
      setsockopt(v24, 6, 6, &timeout, 4u);
      setsockopt(v24, 6, 4, &writefds, 4u);
      setsockopt(v24, 6, 5, v101, 4u);
      if ( v90 )
      {
        sub_228C8((int)a1);
        v44 = dword_7448C++;
        sprintf(v102, "{\"id\": %d, \"method\": \"mining.subscribe\", \"params\": []}", v44);
      }
      else
      {
        v41 = (const char *)a1[159];
        v42 = dword_7448C++;
        if ( v41 )
          sprintf(
            v102,
            "{\"id\": %d, \"method\": \"mining.subscribe\", \"params\": [\"cgminer/1.0.0\", \"%s\"]}",
            v42,
            v41);
        else
          sprintf(v102, "{\"id\": %d, \"method\": \"mining.subscribe\", \"params\": [\"cgminer/1.0.0\"]}", v42);
      }
      v43 = strlen(v102);
      if ( sub_21CA0((int)a1, v102, v43) )
      {
        if ( !byte_68BD5 )
          goto LABEL_126;
        if ( !byte_74500 && !byte_68BD4 && dword_67DB4 <= 6 )
          goto LABEL_130;
        strcpy(v101, "Failed to send s in initiate_stratum");
        sub_20F58(7, v101, 0);
LABEL_137:
        v38 = (unsigned __int8)byte_68BD5;
        if ( !byte_68BD5 )
          goto LABEL_126;
LABEL_131:
        if ( byte_74500 )
          goto LABEL_133;
        goto LABEL_132;
      }
      if ( !sub_22428(a1[147], 60) )
      {
        if ( !byte_68BD5 )
          goto LABEL_126;
        if ( !byte_74500 && !byte_68BD4 && dword_67DB4 <= 6 )
        {
LABEL_130:
          v38 = 1;
          goto LABEL_131;
        }
        strcpy(v101, "Timed out waiting for response in initiate_stratum");
        sub_20F58(7, v101, 0);
        goto LABEL_137;
      }
      v55 = sub_24858((int)a1);
      v56 = v55;
      if ( !v55 )
        goto LABEL_137;
      v89 = sub_47258(v55, 0, v97);
      free(v56);
      if ( !v89 )
      {
        v90 ^= 1u;
        if ( byte_74500 || byte_68BD4 || dword_67DB4 > 5 )
        {
          snprintf(v101, 0x800u, "JSON decode failed(%d): %s", v97[0], v98);
          sub_20F58(6, v101, 0);
        }
        goto LABEL_189;
      }
      v57 = (_DWORD *)sub_480FC(v89, "result");
      v58 = (_DWORD *)sub_480FC(v89, "error");
      if ( !v57 || *v57 == 7 )
      {
        if ( !v58 )
        {
          v59 = (char *)malloc(0x11u);
          if ( v59 )
            strcpy(v59, "(unknown reason)");
          goto LABEL_184;
        }
      }
      else if ( !v58 || *v58 == 7 )
      {
        v67 = (_DWORD *)sub_48484(v57, 0);
        v68 = v67;
        if ( v67 )
        {
          if ( *v67 == 1 )
          {
            v69 = sub_48468();
            if ( v69 > 0 )
            {
              do
              {
                v70 = (_DWORD *)sub_48484(v68, v91);
                v71 = v70;
                if ( !v70 || *v70 != 1 )
                  break;
                v74 = (const char *)sub_224BC(v70, 0);
                if ( v74 && !strncasecmp(v74, "mining.notify", 0xDu) )
                {
                  v72 = sub_22520(v71, 1u);
                  if ( v72 )
                    goto LABEL_233;
                  break;
                }
              }
              while ( v69 != ++v91 );
            }
          }
        }
        v72 = (char *)(unsigned __int8)byte_68BD5;
        if ( byte_68BD5 )
        {
          if ( byte_74500 || (v72 = (char *)(unsigned __int8)byte_68BD4, byte_68BD4) || dword_67DB4 > 6 )
          {
            v72 = 0;
            strcpy(v101, "Failed to get sessionid in initiate_stratum");
            sub_20F58(7, v101, 0);
          }
        }
LABEL_233:
        v73 = sub_22520(v57, 1u);
        v5 = sub_225A0(v73, "initiate_stratum", 3216);
        if ( v5 )
        {
          v76 = sub_48484(v57, 2);
          v77 = sub_4888C(v76);
          if ( (unsigned int)(v77 - 2) <= 0xE )
          {
            servicea = (char *)v77;
            if ( v72 )
            {
              v7 = (const char *)a1[159];
              if ( v7 )
              {
                if ( !strcmp(v72, v7) && (byte_74500 || byte_68BD4 || dword_67DB4 > 4) )
                {
                  snprintf(v101, 0x800u, "Pool %d successfully negotiated resume with the same session ID", *a1);
                  sub_20F58(5, v101, 0);
                }
              }
            }
            if ( pthread_mutex_lock((pthread_mutex_t *)(a1 + 53)) )
              sub_22864("initiate_stratum", 3236);
            if ( pthread_rwlock_wrlock((pthread_rwlock_t *)(a1 + 59)) )
            {
              v78 = _errno_location();
              snprintf(
                v101,
                0x800u,
                "WTF WRLOCK ERROR ON LOCK! errno=%d in %s %s():%d",
                *v78,
                "util.c",
                "initiate_stratum",
                3236);
              sub_20F58(3, v101, 1);
              sub_3EBA0(1);
            }
            free((void *)a1[153]);
            free((void *)a1[159]);
            a1[159] = v72;
            a1[153] = v73;
            v8 = strlen(v73) >> 1;
            v9 = (void *)a1[154];
            a1[391] = v8;
            free(v9);
            v10 = sub_22A44(a1[391], 1u, "util.c", "initiate_stratum", 3243);
            v11 = a1[391];
            v12 = (unsigned __int8 *)a1[153];
            a1[154] = v10;
            sub_22CD8(v10, v12, v11);
            a1[158] = servicea;
            if ( pthread_rwlock_unlock((pthread_rwlock_t *)(a1 + 59)) )
            {
              v13 = _errno_location();
              snprintf(
                v101,
                0x800u,
                "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",
                *v13,
                "util.c",
                "initiate_stratum",
                3246);
              sub_20F58(3, v101, 1);
              sub_3EBA0(1);
            }
            if ( pthread_mutex_unlock((pthread_mutex_t *)(a1 + 53)) )
            {
              v14 = _errno_location();
              snprintf(
                v101,
                0x800u,
                "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
                *v14,
                "util.c",
                "initiate_stratum",
                3246);
              sub_20F58(3, v101, 1);
              sub_3EBA0(1);
            }
            off_67ED8();
            if ( v72 && byte_68BD5 && (byte_74500 || byte_68BD4 || dword_67DB4 > 6) )
            {
              snprintf(v101, 0x800u, "Pool %d stratum session id: %s", *a1, (const char *)a1[159]);
              sub_20F58(7, v101, 0);
            }
            v15 = a1[144];
            *((_BYTE *)a1 + 641) = 1;
            if ( !v15 )
              a1[144] = a1[150];
            v16 = (unsigned __int8)byte_73398;
            *((_QWORD *)a1 + 227) = 0;
            *((_QWORD *)a1 + 228) = 0x3FF0000000000000LL;
            if ( v16 )
            {
              v5 = (unsigned __int8)byte_68BD5;
              if ( byte_68BD5 )
              {
                if ( byte_74500 || byte_68BD4 || dword_67DB4 > 6 )
                {
                  snprintf(
                    v101,
                    0x800u,
                    "Pool %d confirmed mining.subscribe with extranonce1 %s extran2size %d",
                    *a1,
                    (const char *)a1[153],
                    a1[158]);
                  sub_20F58(7, v101, 0);
                }
              }
              else
              {
                v5 = v16;
              }
            }
LABEL_49:
            if ( *(_DWORD *)(v89 + 4) == -1 )
              return v5;
            v17 = (unsigned int *)(v89 + 4);
            __dmb(0xBu);
            do
            {
              v18 = __ldrex(v17);
              v19 = v18 - 1;
            }
            while ( __strex(v19, v17) );
            if ( v19 )
              return v5;
            sub_48A34(v89);
            return v5;
          }
          if ( byte_74500 || byte_68BD4 || dword_67DB4 > 5 )
          {
            strcpy(v101, "Failed to get valid n2size in initiate_stratum");
            sub_20F58(6, v101, 0);
          }
          v90 ^= 1u;
          free(v72);
          free(v73);
        }
        else
        {
          if ( byte_74500 || byte_68BD4 || dword_67DB4 > 5 )
          {
            strcpy(v101, "Failed to get valid nonce1 in initiate_stratum");
            sub_20F58(6, v101, 0);
          }
          v90 ^= 1u;
          free(v72);
        }
        goto LABEL_189;
      }
      v59 = (char *)sub_45074();
LABEL_184:
      if ( byte_74500 || byte_68BD4 || dword_67DB4 > 5 )
      {
        snprintf(v101, 0x800u, "JSON-RPC decode failed: %s", v59);
        sub_20F58(6, v101, 0);
      }
      v90 ^= 1u;
      free(v59);
LABEL_189:
      if ( !v90 )
        goto LABEL_137;
      if ( pthread_mutex_lock((pthread_mutex_t *)(a1 + 53)) )
      {
        v66 = _errno_location();
        snprintf(
          v101,
          0x800u,
          "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",
          *v66,
          "util.c",
          "initiate_stratum",
          3274);
        sub_20F58(3, v101, 1);
        sub_3EBA0(1);
      }
      if ( pthread_rwlock_wrlock((pthread_rwlock_t *)(a1 + 59)) )
      {
        v65 = _errno_location();
        snprintf(
          v101,
          0x800u,
          "WTF WRLOCK ERROR ON LOCK! errno=%d in %s %s():%d",
          *v65,
          "util.c",
          "initiate_stratum",
          3274);
        sub_20F58(3, v101, 1);
        sub_3EBA0(1);
      }
      free((void *)a1[159]);
      free((void *)a1[153]);
      a1[153] = 0;
      a1[159] = 0;
      if ( pthread_rwlock_unlock((pthread_rwlock_t *)(a1 + 59)) )
      {
        v64 = _errno_location();
        snprintf(
          v101,
          0x800u,
          "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",
          *v64,
          "util.c",
          "initiate_stratum",
          3278);
        sub_20F58(3, v101, 1);
        sub_3EBA0(1);
      }
      if ( pthread_mutex_unlock((pthread_mutex_t *)(a1 + 53)) )
      {
        v63 = _errno_location();
        snprintf(
          v101,
          0x800u,
          "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
          *v63,
          "util.c",
          "initiate_stratum",
          3278);
        sub_20F58(3, v101, 1);
        sub_3EBA0(1);
      }
      off_67ED8();
      if ( byte_68BD5 && (byte_74500 || byte_68BD4 || dword_67DB4 > 6) )
      {
        strcpy(v101, "Failed to resume stratum, trying afresh");
        sub_20F58(7, v101, 0);
      }
      if ( v89 )
      {
        if ( *(_DWORD *)(v89 + 4) != -1 )
        {
          v60 = (unsigned int *)(v89 + 4);
          __dmb(0xBu);
          do
          {
            v61 = __ldrex(v60);
            v62 = v61 - 1;
          }
          while ( __strex(v62, v60) );
          if ( !v62 )
            sub_48A34(v89);
        }
      }
      continue;
    }
    break;
  }
  switch ( a1[45] )
  {
    case 0:
      v47 = 0;
      goto LABEL_150;
    case 1:
      v47 = 1;
LABEL_150:
      if ( !sub_21F0C((const char **)a1, v24, v47) )
        goto LABEL_15;
      goto LABEL_117;
    case 2:
      v39 = 0;
      goto LABEL_116;
    case 3:
    case 5:
      BYTE2(writefds.__fds_bits[0]) = 0;
      LOWORD(writefds.__fds_bits[0]) = 261;
      if ( byte_68BD5 && (byte_74500 || byte_68BD4 || dword_67DB4 > 6) )
      {
        snprintf(
          v101,
          0x800u,
          "Attempting to negotiate with %s:%s SOCKS5 proxy",
          (const char *)a1[151],
          (const char *)a1[152]);
        sub_20F58(7, v101, 0);
      }
      send(v24, &writefds, 3u, 0);
      if ( recv(v24, v101, 1u, 0) != -1
        && v101[0] == 5
        && recv(v24, v101, 1u, 0) != -1
        && BYTE2(writefds.__fds_bits[0]) == (unsigned __int8)v101[0] )
      {
        v48 = (const char *)a1[150];
        serviceb = (char *)v48;
        writefds.__fds_bits[0] = 50331909;
        v49 = strlen(v48);
        if ( v49 >= 0xFF )
          v50 = 255;
        else
          v50 = v49;
        LOBYTE(writefds.__fds_bits[1]) = v50;
        sub_254E8((char *)&writefds.__fds_bits[1] + 1, serviceb, v50, (int)"util.c", (int)"socks5_negotiate", 2796);
        v51 = strtol((const char *)a1[146], 0, 10);
        v52 = &v102[v50];
        *(v52 - 2558) = v51;
        *(v52 - 2559) = HIBYTE(v51);
        send(v24, &writefds, v50 + 7, 0);
        if ( recv(v24, v101, 1u, 0) == -1
          || v101[0] != 5
          || recv(v24, v101, 1u, 0) == -1
          || (v79 = (unsigned __int8)v101[0], v101[0])
          || (recv(v24, v101, 1u, 0), recv(v24, v101, 1u, v79) == -1) )
        {
LABEL_168:
          if ( byte_74500 || byte_68BD4 || dword_67DB4 > 3 )
          {
            v53 = a1[152];
            v54 = a1[151];
            goto LABEL_176;
          }
          goto LABEL_15;
        }
        if ( v101[0] == 1 )
        {
          v83 = 4;
          do
          {
            recv(v24, v101, 1u, 0);
            --v83;
          }
          while ( v83 );
        }
        else
        {
          if ( v101[0] != 3 )
            goto LABEL_168;
          v80 = 0;
          if ( recv(v24, v101, 1u, 0) == -1 )
            v81 = -1;
          else
            v81 = (unsigned __int8)v101[0];
          while ( v80++ < v81 )
            recv(v24, v101, 1u, 0);
        }
        recv(v24, v101, 1u, 0);
        recv(v24, v101, 1u, 0);
        if ( byte_68BD5 && (byte_74500 || byte_68BD4 || dword_67DB4 > 6) )
        {
          snprintf(
            v101,
            0x800u,
            "Success negotiating with %s:%s SOCKS5 proxy",
            (const char *)a1[151],
            (const char *)a1[152]);
          sub_20F58(7, v101, 0);
        }
        goto LABEL_117;
      }
      if ( !byte_74500 && !byte_68BD4 && dword_67DB4 <= 3 )
      {
LABEL_108:
        if ( !byte_68BD5 )
          goto LABEL_16;
        v38 = 0;
LABEL_132:
        if ( !byte_68BD4 && dword_67DB4 <= 6 )
        {
LABEL_134:
          if ( !v38 )
            goto LABEL_16;
LABEL_126:
          sub_24340((int)a1);
          goto LABEL_16;
        }
LABEL_133:
        strcpy(v101, "Initiate stratum failed");
        sub_20F58(7, v101, 0);
        goto LABEL_134;
      }
      v54 = a1[151];
      v53 = a1[152];
LABEL_176:
      snprintf(v101, 0x800u, "Bad response from %s:%s SOCKS5 server", v54, v53);
      sub_20F58(4, v101, 0);
LABEL_15:
      if ( byte_68BD5 )
      {
        v38 = 0;
        goto LABEL_131;
      }
LABEL_16:
      if ( v89 )
      {
        v5 = 0;
        goto LABEL_49;
      }
      return 0;
    case 4:
      v39 = 1;
LABEL_116:
      if ( sub_26830((const char **)a1, v24, v39) )
        goto LABEL_117;
      goto LABEL_15;
    default:
      if ( !byte_74500 && !byte_68BD4 && dword_67DB4 <= 3 )
        goto LABEL_108;
      snprintf(v101, 0x800u, "Unsupported proxy type for %s:%s", (const char *)a1[151], (const char *)a1[152]);
      sub_20F58(4, v101, 0);
      goto LABEL_15;
  }
}
