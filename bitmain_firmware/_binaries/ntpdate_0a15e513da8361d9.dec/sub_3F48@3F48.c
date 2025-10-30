int __fastcall sub_3F48(int a1, int *a2)
{
  Elf32_Dyn **v2; // r10
  int v3; // r4
  int v4; // r0
  unsigned int v5; // r3
  int v6; // r0
  int v7; // r0
  int **v8; // r2
  int **v9; // r3
  int v10; // r3
  int i; // r3
  struct _IO_FILE *v12; // r6
  const char *v13; // r0
  const char *v14; // r0
  const char *v15; // r5
  int v16; // r0
  int v17; // r4
  __time_t tv_sec; // r5
  int v19; // r0
  int v20; // r8
  socklen_t v21; // r2
  int v22; // r7
  int *v23; // r1
  struct addrinfo *v24; // r0
  int v25; // r0
  int v26; // r7
  int v27; // r4
  struct addrinfo *ai_next; // r3
  unsigned int v29; // r3
  bool v30; // cc
  int v31; // r0
  struct addrinfo *v32; // r3
  int ai_family; // r1
  int v34; // r4
  socklen_t v35; // r2
  int v36; // r0
  int *v37; // r0
  int *v38; // r9
  Elf32_Dyn **v39; // r11
  int *v40; // r6
  int v41; // r0
  int v42; // r0
  int v43; // r4
  int v44; // r0
  int v45; // r4
  int v46; // r0
  int v47; // r0
  int v48; // r8
  int v49; // r7
  unsigned int v50; // r2
  int v51; // r9
  int v52; // r0
  int v53; // r5
  int v54; // r10
  _BOOL4 v55; // r3
  _DWORD *v56; // r0
  int v57; // r8
  _DWORD *v58; // r12
  int v59; // r1
  int v60; // r2
  int v61; // r3
  int v62; // r1
  int v63; // r2
  int v64; // r7
  char v65; // r3
  char v66; // r0
  unsigned int v67; // r3
  unsigned int v68; // r2
  unsigned int v69; // r3
  unsigned int v70; // r3
  unsigned int v71; // r7
  unsigned int v72; // r12
  unsigned int v73; // r1
  unsigned int v74; // r2
  _BOOL4 v75; // r1
  unsigned int v76; // r7
  unsigned int v77; // r1
  unsigned int v78; // lr
  unsigned int v79; // r3
  unsigned int v80; // r2
  __int64 v81; // r8
  unsigned int v82; // r1
  __int64 v83; // r8
  int v84; // r2
  int v85; // r7
  int v86; // r10
  int v87; // r0
  int v88; // r7
  unsigned int v89; // r3
  bool v90; // cc
  unsigned int v91; // r2
  unsigned int v92; // r2
  Elf32_Dyn **v93; // r10
  int *v94; // r11
  _DWORD *v95; // r12
  int v96; // r6
  int v97; // r9
  struct sockaddr *p_domain; // r2
  int v99; // r3
  struct sockaddr *v100; // r7
  int v101; // r8
  struct sockaddr *j; // r4
  struct sockaddr *v103; // r1
  int v104; // r2
  int v105; // t1
  int v106; // r3
  int v107; // r0
  int v108; // lr
  int v109; // r3
  _DWORD *v110; // lr
  int v111; // r2
  int *v112; // r3
  int v113; // r0
  int v114; // r1
  unsigned int v115; // r3
  int v116; // r0
  int k; // r1
  int v118; // t1
  _DWORD *v119; // r3
  unsigned int v120; // r3
  int v121; // r2
  int v122; // r4
  unsigned int v123; // r5
  int v124; // r7
  unsigned int v125; // r12
  int v126; // r0
  _DWORD *v127; // r3
  unsigned int m; // r2
  int v129; // t1
  unsigned int v130; // r8
  _DWORD *v131; // r4
  int v132; // r1
  int v133; // r0
  unsigned int v134; // r12
  _DWORD *v135; // lr
  int v136; // t1
  _DWORD *v137; // r6
  char *v138; // r4
  unsigned int v139; // lr
  unsigned int v140; // r12
  unsigned int v141; // r5
  int v142; // r0
  int v143; // r1
  _DWORD *v144; // r4
  struct sockaddr *v145; // r5
  unsigned int v146; // r12
  unsigned int v147; // r8
  int v148; // r0
  unsigned int v149; // r1
  unsigned int v150; // lr
  unsigned int v151; // t1
  bool v152; // cf
  int v153; // lr
  int v154; // t1
  int v155; // lr
  _DWORD *v156; // r1
  int v157; // t1
  _DWORD *v158; // r8
  int v159; // r9
  int v160; // r0
  int v161; // r7
  const char *v162; // r6
  const char *v163; // r8
  const char *v164; // r0
  FILE *ai_flags; // r4
  int v166; // r0
  int v167; // r0
  int v168; // lr
  int v169; // r0
  int v170; // r8
  int n; // r6
  __int16 v172; // r7
  int v173; // t1
  char *v174; // r3
  const char *v175; // r6
  const char *v176; // r7
  const char *v177; // r0
  int v178; // r3
  const char *v179; // r0
  const char *v180; // r0
  const char *v181; // r0
  _DWORD *v182; // r8
  int v183; // r7
  int ii; // r6
  const char *v185; // r3
  int v186; // r0
  unsigned int v187; // r3
  unsigned int v188; // r2
  int v189; // r0
  const char *v190; // r6
  const char *v191; // r0
  const char *v192; // r0
  int v193; // r4
  unsigned __int64 v194; // r0
  double v195; // r0
  int v196; // r2
  double v197; // r0
  const char *v198; // r5
  const char *v199; // r0
  const char *v200; // r0
  int v201; // r7
  int v202; // r8
  int v203; // r6
  const char *v204; // r3
  const char *v205; // r2
  int v206; // r0
  const char *v207; // r0
  int v208; // r0
  const char *v209; // r0
  int v210; // r12
  int v211; // lr
  unsigned int v212; // r0
  unsigned int v213; // r1
  unsigned int v214; // r5
  _BOOL4 v215; // r3
  unsigned int v216; // r1
  unsigned __int64 v217; // r2
  int v218; // r5
  __time_t v219; // lr
  const char *v220; // r5
  const char *v221; // r0
  unsigned int v223; // r3
  const char *v224; // r0
  unsigned int v225; // r2
  int v226; // r0
  unsigned int v227; // r2
  _DWORD *v228; // r1
  int v229; // t1
  unsigned int v230; // lr
  char *v231; // r3
  struct _IO_FILE *v232; // r5
  const char *v233; // r0
  const char *v234; // r0
  int v235; // r3
  unsigned int v236; // r8
  __int32 d_tag; // r10
  int v238; // r0
  int v239; // r1
  char *v240; // lr
  char *v241; // r1
  int v242; // t1
  int v243; // t1
  int *v244; // r2
  unsigned int v245; // r12
  int *v246; // r1
  bool v247; // cc
  unsigned int v248; // lr
  struct addrinfo *v249; // [sp+10h] [bp-ECh]
  struct addrinfo *v250; // [sp+10h] [bp-ECh]
  int v251; // [sp+14h] [bp-E8h]
  unsigned int v252; // [sp+14h] [bp-E8h]
  int v253; // [sp+14h] [bp-E8h]
  _DWORD *v256; // [sp+3Ch] [bp-C0h]
  void *s1; // [sp+40h] [bp-BCh]
  unsigned int v258; // [sp+4Ch] [bp-B0h]
  struct addrinfo *v259; // [sp+68h] [bp-94h] BYREF
  int v260; // [sp+6Ch] [bp-90h] BYREF
  int v261; // [sp+70h] [bp-8Ch]
  struct timeval ai; // [sp+74h] [bp-88h] BYREF
  struct addrinfo v263; // [sp+7Ch] [bp-80h] BYREF
  _DWORD v264[9]; // [sp+9Ch] [bp-60h] BYREF
  char v265; // [sp+C0h] [bp-3Ch] BYREF
  struct sockaddr domain; // [sp+C4h] [bp-38h] BYREF
  int v267; // [sp+D4h] [bp-28h]
  int v268; // [sp+D8h] [bp-24h]
  int v269; // [sp+DCh] [bp-20h]
  char v270[16]; // [sp+ECh] [bp-10h] BYREF

  v2 = &GLOBAL_OFFSET_TABLE_;
  sub_A12C();
  if ( !ipv6_works )
    ai_fam_templ = 2;
  v3 = 0;
  progname = *a2;
  syslogit = 0;
  while ( 1 )
  {
    v4 = sub_9CF4(a1, a2, "46a:bBde:k:o:p:qst:uv");
    if ( v4 == -1 )
      break;
    switch ( v4 )
    {
      case '4':
        ai_fam_templ = 2;
        continue;
      case '6':
        ai_fam_templ = 10;
        continue;
      case '?':
        ++v3;
        continue;
      case 'B':
        v8 = &never_step_ptr;
        v9 = always_step_ptr;
        goto LABEL_29;
      case 'a':
        v7 = strtol((const char *)ntp_optarg, 0, 10);
        sys_authenticate = 1;
        sys_authkey = v7;
        continue;
      case 'b':
        v8 = always_step_ptr;
        v9 = &never_step_ptr;
LABEL_29:
        ++**v8;
        **v9 = 0;
        continue;
      case 'd':
        ++debug;
        continue;
      case 'e':
        if ( sub_74F8(ntp_optarg, &v260) && !v260 )
        {
          sys_authdelay = v261;
          continue;
        }
        v205 = "%s: encryption delay %s is unlikely\n";
        goto LABEL_354;
      case 'k':
        key_file[0] = (char *)ntp_optarg;
        continue;
      case 'o':
        sys_version = strtol((const char *)ntp_optarg, 0, 10);
        continue;
      case 'p':
        v6 = strtol((const char *)ntp_optarg, 0, 10);
        if ( (unsigned int)(v6 - 1) > 7 )
        {
          ++v3;
          _fprintf_chk(stderr, 1, "%s: number of samples (%d) is invalid\n", progname, v6);
        }
        else
        {
          sys_samples = v6;
        }
        continue;
      case 'q':
        simple_query = 1;
        continue;
      case 's':
        syslogit = 1;
        continue;
      case 't':
        if ( sub_74F8(ntp_optarg, &v260) )
        {
          if ( v260 + 0xFFFF <= (unsigned int)&unk_1FFFE )
          {
            v5 = (5 * (HIWORD(v261) | (unsigned int)(v260 << 16)) + 0x8000) >> 16;
            if ( v5 < 5 )
              v5 = 5;
          }
          else
          {
            v5 = 0x8000;
          }
          sys_timeout = v5;
        }
        else
        {
          v205 = "%s: timeout %s is undecodeable\n";
LABEL_354:
          ++v3;
          _fprintf_chk(stderr, 1, v205, progname, ntp_optarg);
        }
        break;
      case 'u':
        unpriv_port = 1;
        continue;
      case 'v':
        verbose = 1;
        continue;
      default:
        continue;
    }
  }
  if ( v3 )
  {
    _fprintf_chk(
      stderr,
      1,
      "usage: %s [-46bBdqsuv] [-a key#] [-e delay] [-k file] [-p samples] [-o version#] [-t timeo] server ...\n",
      (const char *)progname);
    exit(2);
  }
  if ( !sys_samples )
  {
    if ( simple_query )
      v10 = 1;
    else
      v10 = 4;
    sys_samples = v10;
  }
  if ( debug || simple_query )
  {
    setvbuf(stdout, byte_3127C, 1, 0x2000u);
    if ( !syslogit )
      goto LABEL_40;
  }
  else if ( !syslogit )
  {
LABEL_41:
    if ( !verbose )
      goto LABEL_42;
    goto LABEL_65;
  }
  openlog("ntpdate", 9, 24);
  if ( debug )
    v206 = 255;
  else
    v206 = 127;
  setlogmask(v206);
LABEL_40:
  if ( !debug )
    goto LABEL_41;
LABEL_65:
  sub_ABF8(5, "%s", Version);
LABEL_42:
  for ( i = ntp_optind; a1 > i; ntp_optind = i )
  {
    v15 = (const char *)a2[i];
    sub_108C4(v270, "ntp", 5);
    v263.ai_flags = 0;
    memset(&v263.ai_protocol, 0, 20);
    v263.ai_family = ai_fam_templ;
    v263.ai_socktype = 2;
    v16 = getaddrinfo(v15, v270, &v263, (struct addrinfo **)&ai);
    v17 = v16;
    if ( v16 )
    {
      if ( (unsigned int)(v16 + 4) <= 1 )
      {
        v232 = stderr;
        v233 = gai_strerror(v16);
        _fprintf_chk(v232, 1, "Exiting, name server cannot be used: %s (%d)", v233, v17);
        v234 = gai_strerror(v17);
        sub_ABF8(3, "name server cannot be used: %s (%d)", v234, v17);
        exit(1);
      }
      v12 = stderr;
      v13 = gai_strerror(v16);
      _fprintf_chk(v12, 1, "Error resolving %s: %s (%d)\n", v15, v13, v17);
      v14 = gai_strerror(v17);
      sub_ABF8(3, "Can't find host %s: %s (%d)", v15, v14, v17);
    }
    else
    {
      tv_sec = ai.tv_sec;
      if ( ai.tv_sec )
      {
        do
        {
          memset(&domain, 0, sizeof(domain));
          v267 = 0;
          v268 = 0;
          v269 = 0;
          if ( *(_DWORD *)(tv_sec + 16) > 0x1Cu )
            sub_10C38("ntpdate.c", 1400, 2, "ptr->ai_addrlen <= sizeof(addr)");
          _memcpy_chk(&domain, *(_DWORD *)(tv_sec + 20));
          v19 = socket(domain.sa_family, 2, 0);
          v20 = v19;
          if ( v19 != -1 )
          {
            if ( domain.sa_family == 2 )
              v21 = 16;
            else
              v21 = 28;
            if ( connect(v19, &domain, v21) )
            {
              close(v20);
            }
            else
            {
              close(v20);
              v22 = sub_9A68(0, 272, 0, 1);
              memcpy((void *)(v22 + 4), *(const void **)(tv_sec + 20), *(_DWORD *)(tv_sec + 16));
              *(_DWORD *)(v22 + 60) = ++sys_numservers;
              v23 = (int *)sys_servers;
              if ( sys_servers )
              {
                while ( *v23 )
                  v23 = (int *)*v23;
                *v23 = v22;
              }
              else
              {
                sys_servers = v22;
              }
            }
          }
          tv_sec = *(_DWORD *)(tv_sec + 28);
        }
        while ( tv_sec );
        v24 = (struct addrinfo *)ai.tv_sec;
      }
      else
      {
        v24 = 0;
      }
      freeaddrinfo(v24);
    }
    i = ntp_optind + 1;
  }
  v25 = sys_numservers;
  if ( !sys_numservers )
  {
    sub_ABF8(3, "no servers can be used, exiting");
    exit(1);
  }
  if ( sys_authenticate )
  {
    sub_7D44();
    if ( !sub_8D78(key_file[0]) )
    {
      sub_ABF8(3, "no key file <%s>, exiting", key_file[0]);
      exit(1);
    }
    sub_83E4(sys_authkey, 1);
    if ( !sub_8508(sys_authkey) )
    {
      sub_ABF8(3, "authentication key %lu unknown", sys_authkey);
      exit(1);
    }
    v25 = sys_numservers;
  }
  v26 = debug;
  ai.tv_sec = 1;
  if ( debug )
  {
    v26 = 0;
  }
  else if ( !simple_query )
  {
    v26 = unpriv_port == 0;
  }
  sub_D9BC(v25 + 2);
  sub_108C4(v270, "ntp", 5);
  memset(&v263.ai_protocol, 0, 20);
  v263.ai_flags = 1;
  v263.ai_socktype = 2;
  v263.ai_family = ai_fam_templ;
  if ( getaddrinfo(0, v270, &v263, &v259) )
  {
    sub_ABF8(3, "getaddrinfo() failed: %m");
    exit(1);
  }
  v249 = v259;
  nbsock = 0;
  if ( v259 )
  {
    v27 = 0;
    ai_next = v259;
    do
    {
      fd[v27] = socket(ai_next->ai_family, ai_next->ai_socktype, ai_next->ai_protocol);
      v27 = nbsock;
      v31 = fd[nbsock];
      if ( v31 == -1 )
      {
        v29 = *_errno_location();
        v30 = v29 > 0x5D;
        if ( v29 != 93 )
          v30 = v29 - 96 > 1;
        if ( v30 )
        {
          sub_ABF8(3, "socket() failed: %m");
          exit(1);
        }
      }
      else
      {
        if ( setsockopt(v31, 1, 2, &ai, 4u) < 0 )
        {
          sub_ABF8(3, "setsockopt() SO_REUSEADDR failed: %m");
          exit(1);
        }
        v32 = v259;
        ai_family = v259->ai_family;
        if ( ai_family == 10 )
        {
          if ( setsockopt(fd[nbsock], 41, 26, &ai, 4u) < 0 )
          {
            sub_ABF8(3, "setsockopt() IPV6_V6ONLY failed: %m");
            exit(1);
          }
          v32 = v259;
          ai_family = v259->ai_family;
        }
        v34 = nbsock;
        fd_family[nbsock] = ai_family;
        if ( v26 )
        {
          memset(&domain, 0, sizeof(domain));
          v267 = 0;
          v268 = 0;
          v269 = 0;
          if ( v32->ai_addrlen > 0x1C )
            sub_10C38("ntpdate.c", 1766, 2, "res->ai_addrlen <= sizeof(addr)");
          _memcpy_chk(&domain, v32->ai_addr);
          if ( domain.sa_family == 2 )
            v35 = 16;
          else
            v35 = 28;
          if ( bind(fd[v34], &domain, v35) < 0 )
          {
            if ( *_errno_location() == 98 )
              sub_ABF8(3, "the NTP socket is in use, exiting");
            else
              sub_ABF8(3, "bind() fails: %m");
            exit(1);
          }
          v34 = nbsock;
        }
        v36 = fd[v34];
        *((_DWORD *)&fdmask + 2 * v34) = v36;
        *((_WORD *)&fdmask + 4 * v34 + 2) = 1;
        if ( fcntl(v36, 4, 2048) < 0 )
        {
          sub_ABF8(3, "fcntl(FNDELAY|FASYNC) fails: %m");
          exit(1);
        }
        v27 = ++nbsock;
      }
      ai_next = v259->ai_next;
      v259 = ai_next;
    }
    while ( v27 <= 1 && ai_next );
  }
  freeaddrinfo(v249);
  alarm_flag = 0;
  sub_10AD4(14, sub_3830);
  v263.ai_family = (int)&EVP_CIPHER_CTX_block_size_ptr;
  v263.ai_flags = 0;
  v263.ai_protocol = (int)&off_186A0;
  v263.ai_socktype = 0;
  setitimer(0, (const struct itimerval *)&v263, 0);
  v37 = (int *)setpriority(0, 0, -12);
  initializing = 0;
  v38 = &debug;
LABEL_98:
  v39 = v2;
  v40 = v38;
LABEL_99:
  while ( 2 )
  {
    if ( complete_servers < sys_numservers )
    {
      if ( !alarm_flag )
      {
        v41 = sub_D8C0(v37);
        if ( v41 )
        {
          v37 = (int *)sub_DCB8(v41);
          v45 = (int)v37;
          if ( v37 )
          {
            v251 = 0;
            goto LABEL_113;
          }
          continue;
        }
        v42 = _poll_chk(v39[208], nbsock, 1000 * v39[236]->d_tag, 16);
        v43 = v42;
        if ( v42 <= 0 )
        {
          if ( v42 == -1 )
          {
            v37 = _errno_location();
            if ( *v37 != 4 )
              v37 = (int *)sub_ABF8(3, "poll() error: %m");
          }
          else
          {
            v37 = _errno_location();
            if ( *v37 )
              v37 = (int *)sub_ABF8(7, "poll(): nfound = %d, error: %m", v43);
          }
        }
        else
        {
          v37 = sub_3D94();
        }
        if ( !alarm_flag )
        {
          v251 = 0;
          v44 = sub_D8C0(v37);
          v37 = (int *)sub_DCB8(v44);
          v45 = (int)v37;
          if ( v37 )
            goto LABEL_113;
          continue;
        }
      }
      alarm_flag = 0;
      v46 = sub_D8C0(v37);
      v45 = sub_DCB8(v46);
      if ( !v45 )
        goto LABEL_125;
      v251 = 1;
LABEL_113:
      if ( *v40 )
      {
        v52 = sub_FAE0(v45 + 4);
        _printf_chk(1, "receive(%s)\n", v52);
        v48 = *(_DWORD *)(v45 + 84);
        if ( v48 != 48 )
          goto LABEL_115;
      }
      else
      {
        v48 = *(_DWORD *)(v45 + 84);
        if ( v48 != 48 )
        {
LABEL_115:
          if ( v48 <= 47 )
          {
            if ( *v40 )
              _printf_chk(1, "receive: packet length %d\n", v48);
            goto LABEL_112;
          }
          v49 = 1;
          goto LABEL_117;
        }
      }
      v49 = 0;
LABEL_117:
      v50 = *(unsigned __int8 *)(v45 + 88);
      if ( ((v50 >> 3) & 7) - 1 > 3 )
        goto LABEL_112;
      v51 = ((v50 & 7) - 2) & 0xFD;
      if ( v51 || *(unsigned __int8 *)(v45 + 89) > 0xFu )
      {
        if ( *v40 )
          _printf_chk(1, "receive: mode %d stratum %d\n");
        goto LABEL_112;
      }
      if ( (unsigned __int16)(HIBYTE(*(_WORD *)(v45 + 6)) | (*(_WORD *)(v45 + 6) << 8)) != 0x7B )
        goto LABEL_145;
      v53 = sys_servers;
      if ( !sys_servers )
        goto LABEL_145;
      v54 = *(unsigned __int16 *)(v45 + 4);
      while ( 1 )
      {
        while ( *(unsigned __int16 *)(v53 + 4) != v54 )
        {
          v53 = *(_DWORD *)v53;
          if ( !v53 )
            goto LABEL_138;
        }
        if ( v54 == 2 )
        {
          if ( *(_DWORD *)(v45 + 8) == *(_DWORD *)(v53 + 8) )
            goto LABEL_155;
          v55 = (*(_DWORD *)(v53 + 8) & 0xF0) == 224;
        }
        else
        {
          if ( !memcmp((const void *)(v45 + 12), (const void *)(v53 + 12), 0x10u)
            && *(_DWORD *)(v45 + 28) == *(_DWORD *)(v53 + 28) )
          {
LABEL_155:
            v258 = bswap32(*(_DWORD *)(v45 + 112));
            s1 = (void *)bswap32(*(_DWORD *)(v45 + 116));
            if ( v258 != *(_DWORD *)(v53 + 244) || s1 != *(void **)(v53 + 248) )
            {
              if ( *v40 )
                puts("receive: pkt.org and peer.xmt differ");
              goto LABEL_112;
            }
            if ( sys_authenticate )
            {
              if ( *v40 > 3 )
              {
                v235 = v48 - 48;
                v236 = bswap32(*(_DWORD *)(v45 + 136));
                d_tag = v39[157]->d_tag;
                v238 = sub_8A90(d_tag, v45 + 88, 48, v235);
                _printf_chk(1, "receive: rpkt keyid=%ld sys_authkey=%ld decrypt=%ld\n", v236, d_tag, v238);
              }
              if ( v49 && bswap32(*(_DWORD *)(v45 + 136)) == v39[157]->d_tag && ((int (*)(void))sub_8A90)() )
              {
                if ( *v40 )
                  _printf_chk(1, "receive: authentication %s\n", "passed");
                goto LABEL_370;
              }
              if ( *v40 )
                _printf_chk(1, "receive: authentication %s\n", "failed");
              *(_BYTE *)(v53 + 36) = (2 * *(_BYTE *)(v53 + 36)) | 1;
              v64 = *(unsigned __int8 *)(v45 + 88) >> 6;
              if ( v64 != 3 )
              {
LABEL_167:
                *(_BYTE *)(v53 + 33) = v64;
                v65 = *(_BYTE *)(v45 + 89);
                if ( !v65 )
                  v65 = 16;
                *(_BYTE *)(v53 + 34) = v65;
                v66 = *(_BYTE *)(v45 + 91);
                *(_BYTE *)(v53 + 35) = v66;
                v67 = *(_DWORD *)(v45 + 96);
                v68 = bswap32(*(_DWORD *)(v45 + 92));
                *(_DWORD *)(v53 + 48) = *(_DWORD *)(v45 + 100);
                *(_DWORD *)(v53 + 40) = v68;
                *(_DWORD *)(v53 + 44) = bswap32(v67);
                v69 = *(_DWORD *)(v45 + 124);
                *(_DWORD *)(v53 + 52) = bswap32(*(_DWORD *)(v45 + 104));
                v70 = bswap32(v69);
                v71 = bswap32(*(_DWORD *)(v45 + 120));
                v72 = bswap32(*(_DWORD *)(v45 + 128));
                v73 = bswap32(*(_DWORD *)(v45 + 108));
                v74 = bswap32(*(_DWORD *)(v45 + 132));
                *(_DWORD *)(v53 + 236) = v72;
                *(_DWORD *)(v53 + 56) = v73;
                *(_DWORD *)(v53 + 240) = v74;
                if ( v70 | v71 )
                {
                  if ( v71 < v72 )
                    goto LABEL_174;
                  v75 = v71 != v72;
                  if ( v70 > v74 )
                    v75 = 1;
                  if ( !v75 )
                  {
LABEL_174:
                    v76 = v71 - v258;
                    v77 = v74 - *(_DWORD *)(v45 + 76);
                    v78 = v70 - (_DWORD)s1;
                    if ( v70 < (unsigned int)s1 )
                      v79 = v76 - 1;
                    else
                      v79 = v76;
                    if ( v74 < v77 )
                      v80 = v72 - *(_DWORD *)(v45 + 72) - 1;
                    else
                      v80 = v72 - *(_DWORD *)(v45 + 72);
                    LODWORD(v81) = (v77 >> 1) | (v80 << 31);
                    HIDWORD(v81) = v79 & 0x80000000 | (v79 >> 1);
                    v82 = v78 - v77;
                    v83 = __PAIR64__(v80 & 0x80000000 | (v80 >> 1), (v78 >> 1) | (v79 << 31)) + v81;
                    if ( v78 < v82 )
                      --v79;
                    v84 = v79 - v80;
                    if ( v84 < 0x10000 )
                    {
                      if ( v84 <= -65536 )
                        v85 = 0x80000000;
                      else
                        v85 = HIWORD(v82) | (v84 << 16);
                    }
                    else
                    {
                      v85 = 0x7FFFFFFF;
                    }
                    if ( *v40 > 3 )
                    {
                      v86 = sub_9980(HIDWORD(v83), v83, 6);
                      v87 = sub_95F8(v85, 5);
                      _printf_chk(1, "offset: %s, delay %s\n", v86, v87);
                      v66 = *(_BYTE *)(v53 + 35);
                    }
                    v88 = v85 + (0x10000 >> -v66) + 1679;
                    if ( v88 <= 0 )
                    {
                      v89 = *(unsigned __int16 *)(v53 + 74);
                      if ( v89 <= 7 )
                      {
                        v225 = v53 + 8 * (v89 + 13);
                        HIDWORD(v83) = 0;
                        *(_DWORD *)(v53 + 4 * (v89 + 18) + 4) = 0;
                        *(_DWORD *)(v225 + 4) = 0;
                        *(_DWORD *)(v225 + 8) = 0;
                        goto LABEL_200;
                      }
                    }
                    else
                    {
                      v89 = *(unsigned __int16 *)(v53 + 74);
                      if ( v88 < 1311 )
                        v88 = 1311;
                      if ( v89 <= 7 )
                      {
                        v90 = SHIDWORD(v83) < 0x10000;
                        v91 = v53 + 8 * (v89 + 13);
                        *(_DWORD *)(v53 + 4 * v89 + 76) = v88;
                        *(_DWORD *)(v91 + 4) = HIDWORD(v83);
                        if ( SHIDWORD(v83) >= 0x10000 )
                          HIDWORD(v83) = 0x7FFFFFFF;
                        *(_DWORD *)(v91 + 8) = v83;
                        if ( v90 )
                        {
                          if ( SHIDWORD(v83) <= -65536 )
                            HIDWORD(v83) = 0x80000000;
                          else
                            HIDWORD(v83) = v83 >> 16;
                        }
LABEL_200:
                        v92 = v53 + 4 * v89;
                        *(_DWORD *)(v92 + 172) = HIDWORD(v83);
                        v89 = (unsigned __int16)(v89 + 1);
                        *(_DWORD *)(v92 + 204) = 0;
                        *(_WORD *)(v53 + 74) = v89;
                      }
                    }
                    if ( (int)v89 >= sys_samples )
                    {
                      *(_DWORD *)(v53 + 60) = 0;
                      ++complete_servers;
                      goto LABEL_112;
                    }
                  }
                }
                *(_DWORD *)(v53 + 60) = v39[195]->d_tag + v39[149]->d_tag;
                goto LABEL_112;
              }
            }
            else
            {
LABEL_370:
              *(_BYTE *)(v53 + 36) *= 2;
              v64 = *(unsigned __int8 *)(v45 + 88) >> 6;
              if ( v64 != 3 )
                goto LABEL_167;
            }
            if ( !*(_BYTE *)(v45 + 89) && !memcmp("RATE", (const void *)(v45 + 100), 4u) )
            {
              v209 = (const char *)sub_FAE0(v45 + 4);
              sub_ABF8(v64, "%s rate limit response from server.", v209);
              *(_DWORD *)(v53 + 60) = 0;
              ++complete_servers;
              goto LABEL_112;
            }
            goto LABEL_167;
          }
          v55 = *(unsigned __int8 *)(v53 + 12) == 255;
        }
        if ( v55 )
          v51 = v53;
        v53 = *(_DWORD *)v53;
        if ( !v53 )
        {
LABEL_138:
          if ( v51 )
          {
            if ( *(_DWORD *)(v51 + 60) )
            {
              *(_DWORD *)(v51 + 60) = v53;
              ++complete_servers;
            }
            v56 = (_DWORD *)sub_9A68(0, 272, 0, 1);
            v57 = ++sys_numservers;
            v58 = (_DWORD *)sys_servers;
            v59 = *(_DWORD *)(v45 + 8);
            v60 = *(_DWORD *)(v45 + 12);
            v61 = *(_DWORD *)(v45 + 16);
            v56[1] = *(_DWORD *)(v45 + 4);
            v56[2] = v59;
            v56[3] = v60;
            v56[4] = v61;
            v62 = *(_DWORD *)(v45 + 24);
            v63 = *(_DWORD *)(v45 + 28);
            v56[5] = *(_DWORD *)(v45 + 20);
            v56[6] = v62;
            v56[7] = v63;
            v56[15] = v57;
            while ( *v58 )
              v58 = (_DWORD *)*v58;
            *v58 = v56;
            sub_3BF8((int)v56);
          }
LABEL_145:
          if ( *v40 )
            puts("receive: server not found");
LABEL_112:
          v47 = sub_DABC(v45);
          v37 = (int *)sub_DCB8(v47);
          v45 = (int)v37;
          if ( v37 )
            goto LABEL_113;
          if ( v251 )
          {
LABEL_125:
            v2 = v39;
            v38 = v40;
            v37 = (int *)sub_3CE4();
            goto LABEL_98;
          }
          goto LABEL_99;
        }
      }
    }
    break;
  }
  v93 = v39;
  v94 = v40;
  v95 = (_DWORD *)sys_servers;
  if ( !sys_servers )
    goto LABEL_434;
  v96 = sys_samples;
  v97 = sys_samples - 1;
  if ( (unsigned int)(sys_samples - 1) > 7 )
LABEL_236:
    sub_10C38("ntpdate.c", 966, 2, "(0 < sys_samples) && (sys_samples <= 8)");
  while ( 1 )
  {
    p_domain = &domain;
    v99 = 0;
    v100 = &domain;
    do
    {
      *(_DWORD *)&p_domain->sa_family = v99;
      p_domain = (struct sockaddr *)((char *)p_domain + 4);
      ++v99;
    }
    while ( v96 > v99 );
    v101 = 0;
    for ( j = &domain; v101 < v97; j = (struct sockaddr *)((char *)j + 4) )
    {
      if ( v96 > ++v101 )
      {
        v103 = j;
        do
        {
          v105 = *(_DWORD *)&v103->sa_data[2];
          v103 = (struct sockaddr *)((char *)v103 + 4);
          v104 = v105;
          v106 = v95[v105 + 19];
          if ( v106 )
          {
            v107 = *(_DWORD *)&j->sa_family;
            v108 = v95[*(_DWORD *)&j->sa_family + 19];
            v109 = v106 < v108;
            if ( !v108 )
              v109 |= 1u;
            if ( v109 )
            {
              *(_DWORD *)&j->sa_family = v104;
              *(_DWORD *)&v103->sa_family = v107;
            }
          }
        }
        while ( v103 != (struct sockaddr *)((char *)&domain + 4 * v96 + -4) );
      }
    }
    v110 = &v95[*(_DWORD *)&domain.sa_family];
    v111 = v110[19];
    if ( v111 )
      break;
    v95[63] = 0;
    v95[66] = 0;
    v95[65] = 0;
    v95[67] = 0;
    v95[64] = 0x400000;
    v95 = (_DWORD *)*v95;
    if ( !v95 )
      goto LABEL_238;
LABEL_235:
    v96 = sys_samples;
    v97 = sys_samples - 1;
    if ( (unsigned int)(sys_samples - 1) > 7 )
      goto LABEL_236;
  }
  v112 = &v95[2 * *(_DWORD *)&domain.sa_family + 27];
  v95[63] = v111;
  v113 = *v112;
  v114 = v112[1];
  v95[65] = *v112;
  v95[66] = v114;
  if ( v113 < 0x10000 )
  {
    if ( v113 < -65535 )
      v115 = 0x80000000;
    else
      v115 = v95[66];
    if ( v113 >= -65535 )
      v115 = HIWORD(v115) | (v113 << 16);
  }
  else
  {
    v115 = 0x7FFFFFFF;
  }
  v95[67] = v115;
  v95[64] = 0;
  if ( v96 != 1 )
  {
    v116 = 0;
    for ( k = 1; k != v96; ++k )
    {
      v118 = *(_DWORD *)&v100->sa_data[2];
      v100 = (struct sockaddr *)((char *)v100 + 4);
      v119 = &v95[v118];
      if ( v119[19] )
      {
        v121 = abs32(v119[43] - v110[43]);
        if ( v121 >= 0x400000 )
          v120 = 0x400000;
        else
          v120 = v121;
      }
      else
      {
        v120 = 0x400000;
      }
      v116 += v120 >> k;
    }
    v95[64] = v116;
  }
  v95 = (_DWORD *)*v95;
  if ( v95 )
    goto LABEL_235;
LABEL_238:
  v122 = sys_servers;
  if ( !sys_servers )
  {
LABEL_434:
    v158 = v95;
    v124 = *v94;
    goto LABEL_290;
  }
  v123 = (unsigned int)v95;
  v124 = *v94;
  do
  {
    while ( 1 )
    {
      v125 = *(unsigned __int8 *)(v122 + 34);
      if ( !*(_BYTE *)(v122 + 34) )
      {
        if ( v124 )
        {
          v200 = (const char *)sub_FAE0(v122 + 4);
          _printf_chk(1, "%s: Server dropped: no data\n", v200);
          v124 = *v94;
        }
        goto LABEL_242;
      }
      if ( v125 > 0xF )
        break;
      if ( *(_DWORD *)(v122 + 252) > 0x80000u )
      {
        if ( v124 )
        {
          v186 = sub_FAE0(v122 + 4);
          _printf_chk(1, "%s: Server dropped: server too far away\n", v186);
          v124 = *v94;
        }
        goto LABEL_242;
      }
      if ( *(_BYTE *)(v122 + 33) == 3 )
      {
        if ( v124 )
        {
          v208 = sub_FAE0(v122 + 4);
          _printf_chk(1, "%s: Server dropped: leap not in sync\n", v208);
          v124 = *v94;
        }
        goto LABEL_242;
      }
      v187 = *(_DWORD *)(v122 + 236);
      v188 = *(_DWORD *)(v122 + 52);
      if ( v187 > v188 )
      {
        if ( v187 - v188 > 0x1517F )
        {
          if ( v124 )
          {
            v207 = (const char *)sub_FAE0(v122 + 4);
            _printf_chk(1, "%s: Server dropped: server has gone too long without sync\n", v207);
            v124 = *v94;
          }
          goto LABEL_242;
        }
      }
      else if ( v187 != v188 || *(_DWORD *)(v122 + 240) < *(_DWORD *)(v122 + 56) )
      {
        if ( v124 )
        {
          v189 = sub_FAE0(v122 + 4);
          _printf_chk(1, "%s: Server dropped: server is very broken\n", v189);
          v124 = *v94;
        }
        goto LABEL_242;
      }
      v223 = *(unsigned __int8 *)(v122 + 36);
      if ( *(_BYTE *)(v122 + 36) )
      {
        if ( v124 )
        {
          v224 = (const char *)sub_FAE0(v122 + 4);
          _printf_chk(1, "%s: Server dropped: Server is untrusted\n", v224);
          v124 = *v94;
        }
        goto LABEL_242;
      }
      v226 = 2 * *(_DWORD *)(v122 + 256);
      if ( !v123 )
      {
        v264[0] = v122;
        *(_DWORD *)&domain.sa_family = v226;
LABEL_407:
        ++v123;
        goto LABEL_242;
      }
      v227 = *(unsigned __int8 *)(v264[0] + 34);
      if ( v125 > v227 )
      {
        v228 = v264;
        while ( ++v223 != v123 )
        {
          v229 = v228[1];
          ++v228;
          v230 = *(unsigned __int8 *)(v229 + 34);
          if ( v125 <= v230 )
          {
            if ( v125 >= v230 )
            {
              v239 = 4 * v223;
              if ( v226 >= *((_DWORD *)&domain.sa_family + v223) )
                goto LABEL_441;
            }
LABEL_446:
            if ( v223 > 4 )
              goto LABEL_242;
            goto LABEL_447;
          }
        }
LABEL_405:
        if ( v223 > 4 )
          goto LABEL_242;
        goto LABEL_406;
      }
      if ( v125 >= v227 && v226 >= *(int *)&domain.sa_family )
      {
        v239 = *(unsigned __int8 *)(v122 + 36);
LABEL_441:
        v240 = (char *)&domain + v239;
        v241 = (char *)v264 + v239;
        while ( ++v223 < v123 )
        {
          v242 = *((_DWORD *)v241 + 1);
          v241 += 4;
          v96 = *(unsigned __int8 *)(v242 + 34);
          if ( v96 <= v125 )
          {
            v243 = *((_DWORD *)v240 + 1);
            v240 += 4;
            v96 = v243;
            if ( v226 >= v243 )
              continue;
          }
          goto LABEL_446;
        }
        goto LABEL_405;
      }
LABEL_447:
      v244 = &v264[v123];
      v245 = v123 - 1;
      v246 = (int *)&domain + v123;
      do
      {
        --v244;
        v247 = v245 + 1 > 4;
        --v246;
        if ( v245 + 1 <= 4 )
          v96 = *v244;
        v248 = v245--;
        if ( !v247 )
        {
          v244[1] = v96;
          v96 = *v246;
          v246[1] = *v246;
        }
      }
      while ( v223 < v248 );
LABEL_406:
      v231 = &v270[4 * v223 + 12];
      *((_DWORD *)v231 - 23) = v122;
      *((_DWORD *)v231 - 13) = v226;
      if ( v123 <= 4 )
        goto LABEL_407;
LABEL_242:
      v122 = *(_DWORD *)v122;
      if ( !v122 )
        goto LABEL_247;
    }
    if ( !v124 )
      goto LABEL_242;
    v126 = sub_FAE0(v122 + 4);
    _printf_chk(1, "%s: Server dropped: strata too high\n", v126);
    v122 = *(_DWORD *)v122;
    v124 = *v94;
  }
  while ( v122 );
LABEL_247:
  if ( v123 <= 1 )
  {
    m = v123;
    if ( v123 )
      goto LABEL_253;
    v158 = 0;
  }
  else
  {
    v127 = v264;
    for ( m = 1; m != v123; ++m )
    {
      v129 = v127[1];
      if ( *(unsigned __int8 *)(v129 + 34) > (unsigned int)*(unsigned __int8 *)(*v127++ + 34) )
      {
        if ( v122 == 1 )
          break;
        v122 = 1;
      }
    }
LABEL_253:
    if ( m == 1 )
    {
      v158 = (_DWORD *)v264[0];
    }
    else
    {
      v130 = 0;
      v252 = m - 1;
      v131 = v264;
      do
      {
        while ( 1 )
        {
          if ( ++v130 < m )
          {
            v132 = *v131;
            v133 = v131[1];
            if ( *(unsigned __int8 *)(*v131 + 34) >= (unsigned int)*(unsigned __int8 *)(v133 + 34) )
              break;
          }
          ++v131;
          if ( v130 == v252 )
            goto LABEL_264;
        }
        v134 = v130;
        v135 = v131 + 1;
        do
        {
          ++v134;
          if ( *(_DWORD *)(v132 + 252) >= *(_DWORD *)(v133 + 252) )
          {
            *v131 = v133;
            *v135 = v132;
          }
          if ( v134 >= m )
            break;
          v132 = *v131;
          v136 = v135[1];
          ++v135;
          v133 = v136;
        }
        while ( *(unsigned __int8 *)(*v131 + 34) >= (unsigned int)*(unsigned __int8 *)(v136 + 34) );
        ++v131;
      }
      while ( v130 != v252 );
LABEL_264:
      v137 = &v264[m - 1];
      v253 = v264[0];
      do
      {
        v138 = &v265;
        v139 = 0;
        do
        {
          v140 = 0;
          *((_DWORD *)v138 + 1) = 0;
          v138 += 4;
          do
          {
            if ( v139 != v140 )
            {
              v141 = abs32(*(_DWORD *)(v264[v140] + 268) - *(_DWORD *)(v264[v139] + 268));
              if ( v140 )
              {
                v142 = 0;
                v143 = v141;
                do
                {
                  ++v142;
                  v143 = (v143 >> 2) + (v143 >> 1);
                }
                while ( v142 != v140 );
                v141 = v143;
              }
              *(_DWORD *)v138 += v141;
            }
            ++v140;
          }
          while ( v140 < m );
          ++v139;
        }
        while ( v139 < m );
        v144 = v264;
        v145 = &domain;
        v146 = 1;
        v147 = *(_DWORD *)&domain.sa_family;
        v148 = *(char *)(v253 + 35);
        v149 = 0;
        do
        {
          v151 = *(_DWORD *)&v145->sa_data[2];
          v145 = (struct sockaddr *)((char *)v145 + 4);
          v150 = v151;
          v152 = v151 >= v147;
          if ( v151 >= v147 )
            v147 = v150;
          v154 = v144[1];
          ++v144;
          v153 = v154;
          if ( v152 )
            v149 = v146;
          ++v146;
          v155 = *(char *)(v153 + 35);
          if ( v148 >= v155 )
            v148 = v155;
        }
        while ( v146 < m );
        if ( (int)v147 < (0x10000 >> -(char)v148) + 1679 )
          break;
        if ( v149 + 1 < m )
        {
          v156 = &v264[v149];
          do
          {
            v157 = v156[1];
            *v156++ = v157;
          }
          while ( v156 != v137 );
          v253 = v264[0];
        }
        --m;
        --v137;
      }
      while ( m != 1 );
      v158 = (_DWORD *)v253;
    }
  }
LABEL_290:
  if ( v124 )
  {
    putchar(10);
    goto LABEL_292;
  }
  if ( v93[173]->d_tag )
  {
LABEL_292:
    v159 = sys_servers;
    if ( !sys_servers )
      goto LABEL_332;
    v256 = v158;
    v250 = (struct addrinfo *)v93[219];
    while ( 1 )
    {
      ai_flags = (FILE *)v250->ai_flags;
      if ( !*(_BYTE *)(v159 + 34) )
        goto LABEL_295;
      v166 = v159 + 4;
      if ( *v94 )
      {
        v167 = sub_FAE0(v166);
        _fprintf_chk(
          ai_flags,
          1,
          "server %s, port %d\n",
          v167,
          HIBYTE(*(_WORD *)(v159 + 6)) | (unsigned __int16)(*(_WORD *)(v159 + 6) << 8));
        if ( (*(_BYTE *)(v159 + 33) & 2) != 0 )
          v168 = 49;
        else
          v168 = 48;
        if ( (*(_BYTE *)(v159 + 33) & 1) != 0 )
          v169 = 49;
        else
          v169 = 48;
        _fprintf_chk(
          ai_flags,
          1,
          "stratum %d, precision %d, leap %c%c, trust %03o\n",
          *(unsigned __int8 *)(v159 + 34),
          *(char *)(v159 + 35),
          v168,
          v169,
          *(unsigned __int8 *)(v159 + 36));
        if ( (unsigned int)*(unsigned __int8 *)(v159 + 34) - 2 <= 0xD )
        {
          v175 = (const char *)sub_D200(*(_DWORD *)(v159 + 48));
        }
        else
        {
          v170 = v159 + 47;
          for ( n = 0; n != 4; ++n )
          {
            v173 = *(unsigned __int8 *)++v170;
            v172 = v173;
            if ( !v173 )
              break;
            if ( ((*_ctype_b_loc())[v172] & 0x4000) == 0 )
              LOBYTE(v172) = 46;
            v270[n] = v172;
          }
          v174 = &v270[n + 12];
          v175 = v270;
          *(v174 - 12) = 0;
        }
        v176 = (const char *)sub_95F8(*(_DWORD *)(v159 + 40), 6);
        v177 = (const char *)sub_939C(*(_DWORD *)(v159 + 44), 0, 6);
        _fprintf_chk(ai_flags, 1, "refid [%s], root delay %s, root dispersion %s\n", v175, v176, v177);
        v178 = *(unsigned __int16 *)(v159 + 68);
        if ( v178 != *(unsigned __int16 *)(v159 + 74) )
          _fprintf_chk(ai_flags, 1, "transmitted %d, in filter %d\n", v178, *(unsigned __int16 *)(v159 + 74));
        v179 = (const char *)sub_D768(v159 + 52);
        _fprintf_chk(ai_flags, 1, "reference time:      %s\n", v179);
        v180 = (const char *)sub_D768(v159 + 236);
        _fprintf_chk(ai_flags, 1, "originate timestamp: %s\n", v180);
        v181 = (const char *)sub_D768(v159 + 244);
        _fprintf_chk(ai_flags, 1, "transmit timestamp:  %s\n", v181);
        if ( sys_samples > 1 )
        {
          v182 = (_DWORD *)(v159 + 76);
          fwrite("filter delay: ", 1u, 0xEu, ai_flags);
          v183 = 1;
          for ( ii = 0; ii == 4; ++ii )
          {
            fwrite("\n              ", 1u, 0xFu, ai_flags);
            if ( sys_samples > 4 )
              goto LABEL_320;
            _fprintf_chk(ai_flags, 1, " %-10.10s", "----");
LABEL_317:
            ++v183;
            ++v182;
          }
          if ( sys_samples <= ii )
            v185 = "----";
          else
LABEL_320:
            v185 = (const char *)sub_95F8(*v182, 5);
          _fprintf_chk(ai_flags, 1, " %-10.10s", v185);
          if ( v183 != 8 )
            goto LABEL_317;
          fputc(10, ai_flags);
          fwrite("filter offset:", 1u, 0xEu, ai_flags);
          v201 = v159;
          v202 = 1;
          v203 = 0;
          while ( 2 )
          {
            if ( v203 == 4 )
            {
              fwrite("\n              ", 1u, 0xFu, ai_flags);
              if ( sys_samples > 4 )
              {
LABEL_348:
                v204 = (const char *)sub_9980(*(_DWORD *)(v201 + 108), *(_DWORD *)(v201 + 112), 6);
                goto LABEL_344;
              }
              _fprintf_chk(ai_flags, 1, " %-10.10s", "----");
            }
            else
            {
              if ( sys_samples > v203 )
                goto LABEL_348;
              v204 = "----";
LABEL_344:
              _fprintf_chk(ai_flags, 1, " %-10.10s", v204);
              if ( v202 == 8 )
              {
                fputc(10, ai_flags);
                break;
              }
            }
            ++v203;
            ++v202;
            v201 += 8;
            continue;
          }
        }
        v190 = (const char *)sub_95F8(*(_DWORD *)(v159 + 252), 5);
        v191 = (const char *)sub_939C(*(_DWORD *)(v159 + 256), 0, 5);
        _fprintf_chk(ai_flags, 1, "delay %s, dispersion %s, ", v190, v191);
        v192 = (const char *)sub_9980(*(_DWORD *)(v159 + 260), *(_DWORD *)(v159 + 264), 6);
        _fprintf_chk(ai_flags, 1, "offset %s\n\n", v192);
        v159 = *(_DWORD *)v159;
        if ( !v159 )
        {
LABEL_331:
          v158 = v256;
LABEL_332:
          if ( !v158 )
            goto LABEL_351;
          goto LABEL_333;
        }
      }
      else
      {
        v160 = sub_FAE0(v166);
        v161 = *(unsigned __int8 *)(v159 + 34);
        v162 = (const char *)v160;
        v163 = (const char *)sub_9980(*(_DWORD *)(v159 + 260), *(_DWORD *)(v159 + 264), 6);
        v164 = (const char *)sub_95F8(*(_DWORD *)(v159 + 252), 5);
        _fprintf_chk(ai_flags, 1, "server %s, stratum %d, offset %s, delay %s\n", v162, v161, v163, v164);
LABEL_295:
        v159 = *(_DWORD *)v159;
        if ( !v159 )
          goto LABEL_331;
      }
    }
  }
  if ( !v158 )
  {
LABEL_351:
    v193 = 1;
    sub_ABF8(3, "no server suitable for synchronization found");
    return v193;
  }
LABEL_333:
  v193 = v93[204]->d_tag;
  if ( !v193 && (v93[192]->d_tag || abs32(v158[67]) < 0x8000) )
  {
    v210 = v93[173]->d_tag;
    if ( !v210 )
    {
      v211 = v158[65];
      v212 = v158[66];
      if ( v211 < 0 )
      {
        v212 = -v212;
        v211 = ~v211;
        v210 = 1;
        if ( !v212 )
          ++v211;
      }
      v213 = (v212 >> 1) | (v211 << 31);
      LOWORD(v214) = 16960;
      v215 = (unsigned int)v211 >> 1 != 0;
      if ( v213 > 0x10000000 )
        v215 = 1;
      HIWORD(v214) = 15;
      if ( v215 )
        v213 = 0x10000000;
      v152 = __CFADD__(v213, v212);
      v216 = v213 + v212;
      LOWORD(v212) = 16960;
      v217 = v214 * (unsigned __int64)v216 + 0x80000000;
      v218 = v152;
      HIWORD(v212) = 15;
      v219 = v218 + v211;
      ai.tv_sec = v219;
      ai.tv_usec = HIDWORD(v217);
      if ( HIDWORD(v217) == v212 )
      {
        ai.tv_sec = v219 + 1;
        ai.tv_usec = 0;
      }
      if ( v210 )
      {
        ai.tv_sec = -ai.tv_sec;
        ai.tv_usec = -ai.tv_usec;
      }
      if ( !*v94 && ai.tv_usec && adjtime(&ai, (struct timeval *)&v263) < 0 )
      {
        sub_ABF8(3, "Can't adjust the time of day: %m");
        exit(1);
      }
    }
    v220 = (const char *)sub_FAE0(v158 + 1);
    v221 = (const char *)sub_9980(v158[65], v158[66], 6);
    sub_ABF8(5, "adjust time server %s offset %s sec", v220, v221);
  }
  else if ( v93[173]->d_tag
         || *v94
         || (v194 = (-(__int64)(v158[65] >> 31) ^ (__PAIR64__(v158[65], 0) + (unsigned int)v158[66])) + (v158[65] >> 31),
             v195 = COERCE_DOUBLE(sub_1C914(v194, HIDWORD(v194))),
             LODWORD(v195) = -32,
             v197 = ldexp(v195, v196),
             (v193 = sub_7094(LODWORD(v197), HIDWORD(v197))) != 0) )
  {
    v193 = 0;
    v198 = (const char *)sub_FAE0(v158 + 1);
    v199 = (const char *)sub_9980(v158[65], v158[66], 6);
    sub_ABF8(5, "step time server %s offset %s sec", v198, v199);
  }
  return v193;
}
