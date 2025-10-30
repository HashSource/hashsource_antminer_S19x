int __fastcall sub_3DF0(int a1, int *a2)
{
  int v2; // r9
  int *v3; // r3
  int v4; // r0
  int v5; // r3
  int v6; // r3
  struct _IO_FILE *v7; // r6
  const char *v8; // r0
  const char *v9; // r0
  const char *v10; // r4
  int v11; // r0
  int v12; // r5
  struct addrinfo *tv_sec; // r6
  int v14; // r0
  int v15; // r7
  socklen_t v16; // r2
  int v17; // r7
  int *v18; // r2
  int v19; // r0
  int v20; // r4
  struct addrinfo *ai_next; // r3
  unsigned int v22; // r3
  bool v23; // cc
  int v24; // r0
  struct addrinfo *v25; // r1
  int v26; // r4
  int ai_family; // r2
  socklen_t v28; // r2
  int v29; // r0
  Elf32_Dyn **v30; // r9
  int v31; // r0
  int v32; // r3
  int v33; // r0
  int v34; // r4
  int *v35; // r0
  int v36; // r3
  int v37; // r0
  int v38; // r4
  int v39; // r0
  int v40; // r5
  int v41; // r9
  unsigned int v42; // r8
  int v43; // r7
  const char *v44; // r0
  int v45; // r6
  int v46; // r10
  int v47; // r8
  _BOOL4 v48; // r2
  _DWORD *v49; // r6
  int v50; // r1
  int v51; // r2
  int v52; // r3
  int v53; // r3
  _DWORD *v54; // r12
  int v55; // r1
  int v56; // r2
  int v57; // r0
  int v58; // r3
  unsigned int v59; // r7
  unsigned int v60; // r8
  unsigned int v61; // r10
  struct addrinfo *v62; // r11
  _DWORD *v63; // r12
  int v64; // r7
  int v65; // r9
  int v66; // r3
  int v67; // r11
  struct sockaddr *i; // r5
  struct sockaddr *v69; // r1
  int v70; // r2
  int v71; // t1
  int v72; // r3
  int v73; // r0
  int v74; // lr
  _BOOL4 v75; // r3
  int v76; // r3
  _DWORD *v77; // r2
  int v78; // r1
  int *v79; // r3
  int v80; // r1
  int v81; // r3
  unsigned int v82; // r3
  unsigned int v83; // r1
  bool v84; // cc
  int v85; // r0
  int j; // r1
  _DWORD *v87; // r3
  int v88; // r3
  int v89; // r6
  int v90; // r1
  unsigned int v91; // r5
  unsigned int v92; // r2
  unsigned int v93; // r3
  unsigned int v94; // r0
  unsigned int v95; // r3
  int v96; // r12
  unsigned int v97; // r0
  unsigned int v98; // r0
  char *v99; // r3
  int *v100; // r1
  int v101; // r2
  int v102; // r0
  int v103; // r3
  struct addrinfo **v104; // r8
  struct addrinfo **v105; // r0
  int v106; // r6
  unsigned int v107; // r4
  struct addrinfo *v108; // r3
  struct addrinfo *v109; // r2
  struct addrinfo **v110; // r1
  struct addrinfo *v111; // t1
  int v112; // r11
  _DWORD *v113; // r12
  _DWORD *v114; // r6
  int v115; // lr
  int v116; // r1
  int v117; // r2
  int v118; // r3
  int m; // r2
  int v120; // r1
  unsigned int v121; // r3
  int v122; // r0
  unsigned int v123; // r2
  int v124; // r12
  struct addrinfo **v125; // r3
  int v126; // r9
  int *v127; // r7
  const char *v128; // r5
  int v129; // r6
  const char *v130; // r8
  const char *v131; // r0
  int v132; // r0
  FILE *v133; // r4
  int v134; // r0
  int v135; // r0
  int v136; // r0
  int *v137; // r3
  int v138; // r6
  FILE *v139; // r7
  int v140; // r4
  int *v141; // r8
  __int16 v142; // r5
  int v143; // t1
  const char *v144; // r5
  const char *v145; // r6
  const char *v146; // r0
  int v147; // r3
  const char *v148; // r0
  const char *v149; // r0
  const char *v150; // r0
  int v151; // r6
  const char *v152; // r3
  unsigned int v153; // r8
  int v154; // r2
  unsigned int v155; // r3
  unsigned int v156; // r5
  unsigned int v157; // r8
  unsigned int v158; // lr
  unsigned int v159; // r12
  __int64 v160; // r0
  int v161; // r8
  unsigned int v162; // r12
  unsigned int v163; // r3
  unsigned int v164; // r5
  int v165; // r12
  int v166; // r8
  unsigned int v167; // lr
  bool v168; // cf
  int v169; // r8
  int v170; // r12
  int v171; // r3
  int v172; // r7
  unsigned int v173; // r5
  int v174; // r9
  unsigned int v175; // r10
  unsigned int v176; // r5
  int v177; // r1
  unsigned int v178; // r2
  int v179; // r5
  int v180; // r1
  int *v181; // r0
  unsigned __int16 v182; // r3
  unsigned int v183; // r2
  const char *v184; // r0
  const char *v185; // r0
  const char *v186; // r0
  int ai_protocol; // r3
  int v188; // r12
  double v189; // r0
  int v190; // r2
  double v191; // r0
  const char *v192; // r4
  const char *v193; // r0
  const char *v194; // r0
  int v195; // r0
  int v196; // r0
  int v197; // r0
  int **v198; // r2
  int **v199; // kr00_4
  int v200; // r0
  const char *v201; // r0
  const char *v202; // r5
  const char *v203; // r0
  const char *v204; // r0
  int v205; // lr
  int v206; // r2
  unsigned int ai_socktype; // r3
  unsigned int v208; // r12
  bool v209; // zf
  __int64 v210; // r0
  _BOOL4 v211; // r3
  __time_t v212; // r2
  const char *v213; // r4
  const char *v214; // r0
  int v216; // r8
  int v217; // r6
  const char *v218; // r3
  const char *v219; // r0
  const char *v220; // r0
  _BOOL4 v221; // r0
  _DWORD *v222; // lr
  unsigned int k; // r0
  int v224; // t1
  unsigned int v225; // r0
  unsigned int v226; // r2
  int v227; // lr
  int v228; // r0
  int v229; // r3
  int v230; // r3
  int v231; // r3
  unsigned int v232; // r5
  int v233; // r8
  int v234; // r0
  const char *v235; // r0
  const char *v236; // r0
  char *v237; // r3
  _DWORD *v238; // r1
  const char *v239; // r0
  const char *v240; // r0
  int v241; // [sp+4h] [bp-E0h]
  int v243; // [sp+14h] [bp-D0h]
  struct addrinfo *v244; // [sp+14h] [bp-D0h]
  struct addrinfo *v246; // [sp+18h] [bp-CCh]
  struct addrinfo *v247; // [sp+18h] [bp-CCh]
  struct addrinfo *v248; // [sp+18h] [bp-CCh]
  struct addrinfo *v249; // [sp+18h] [bp-CCh]
  struct addrinfo *v250; // [sp+1Ch] [bp-C8h]
  const char *s1; // [sp+2Ch] [bp-B8h]
  unsigned int v252; // [sp+3Ch] [bp-A8h]
  int v253; // [sp+40h] [bp-A4h]
  struct addrinfo *v254; // [sp+50h] [bp-94h] BYREF
  int v255; // [sp+54h] [bp-90h] BYREF
  int v256; // [sp+58h] [bp-8Ch]
  struct timeval ai; // [sp+5Ch] [bp-88h] BYREF
  struct addrinfo v258; // [sp+64h] [bp-80h] BYREF
  _DWORD v259[9]; // [sp+84h] [bp-60h] BYREF
  _BYTE v260[4]; // [sp+A8h] [bp-3Ch] BYREF
  struct sockaddr domain; // [sp+ACh] [bp-38h] BYREF
  int v262; // [sp+BCh] [bp-28h]
  int v263; // [sp+C0h] [bp-24h]
  int v264; // [sp+C4h] [bp-20h]
  char v265[16]; // [sp+D4h] [bp-10h] BYREF

  sub_9D2C();
  if ( !ipv6_works )
    ai_fam_templ = 2;
  v2 = 0;
  progname = *a2;
  syslogit = 0;
  v3 = (int *)"%s: timeout %s is undecodeable\n";
  while ( 1 )
  {
    v4 = sub_98E4(a1, a2, "46a:bBde:k:o:p:qst:uv", v3);
    if ( v4 == -1 )
      break;
    switch ( v4 )
    {
      case '4':
        v3 = &ai_fam_templ;
        ai_fam_templ = 2;
        break;
      case '6':
        v3 = &ai_fam_templ;
        ai_fam_templ = 10;
        break;
      case '?':
        ++v2;
        break;
      case 'B':
        v198 = &never_step_ptr;
        v199 = always_step_ptr;
        goto LABEL_360;
      case 'a':
        v200 = strtol((const char *)ntp_optarg, 0, 10);
        sys_authenticate = 1;
        v3 = &sys_authkey;
        sys_authkey = v200;
        break;
      case 'b':
        v198 = always_step_ptr;
        v199 = &never_step_ptr;
LABEL_360:
        ++**v198;
        v3 = *v199;
        **v199 = 0;
        break;
      case 'd':
        v3 = (int *)++debug;
        break;
      case 'e':
        if ( sub_7198(ntp_optarg, &v255) && !v255 )
        {
          v3 = &sys_authdelay;
          sys_authdelay = v256;
        }
        else
        {
          ++v2;
          _fprintf_chk(
            stderr,
            1,
            "%s: encryption delay %s is unlikely\n",
            (const char *)progname,
            (const char *)ntp_optarg);
        }
        break;
      case 'k':
        v3 = (int *)key_file;
        key_file[0] = (char *)ntp_optarg;
        break;
      case 'o':
        v197 = strtol((const char *)ntp_optarg, 0, 10);
        v3 = &sys_version;
        sys_version = v197;
        break;
      case 'p':
        v196 = strtol((const char *)ntp_optarg, 0, 10);
        if ( (unsigned int)(v196 - 1) > 7 )
        {
          ++v2;
          _fprintf_chk(stderr, 1, "%s: number of samples (%d) is invalid\n", (const char *)progname, v196);
        }
        else
        {
          v3 = &sys_samples;
          sys_samples = v196;
        }
        break;
      case 'q':
        v3 = &simple_query;
        simple_query = 1;
        break;
      case 's':
        v3 = &dword_0 + 1;
        syslogit = 1;
        break;
      case 't':
        if ( sub_7198(ntp_optarg, &v255) )
        {
          if ( (unsigned int)(v255 + 0xFFFF) <= 0x1FFFE )
          {
            v3 = (int *)((5 * (HIWORD(v256) | (unsigned int)(v255 << 16)) + 0x8000) >> 16);
            if ( (unsigned int)v3 < 5 )
              v3 = (_DWORD *)&byte_5;
          }
          else
          {
            v3 = (_DWORD *)&loc_8000;
          }
          sys_timeout = (int)v3;
        }
        else
        {
          ++v2;
          _fprintf_chk(stderr, 1, "%s: timeout %s is undecodeable\n", (const char *)progname, (const char *)ntp_optarg);
        }
        break;
      case 'u':
        v3 = &unpriv_port;
        unpriv_port = 1;
        break;
      case 'v':
        v3 = &verbose;
        verbose = 1;
        break;
      default:
        continue;
    }
  }
  if ( v2 )
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
      v5 = 1;
    else
      v5 = 4;
    sys_samples = v5;
  }
  if ( !debug && !simple_query )
  {
    if ( !syslogit )
      goto LABEL_16;
    goto LABEL_337;
  }
  setvbuf(stdout, byte_3127C, 1, 0x2000u);
  if ( syslogit )
  {
LABEL_337:
    openlog("ntpdate", 9, 24);
    if ( debug )
      v195 = 255;
    else
      v195 = 127;
    setlogmask(v195);
    if ( debug )
      goto LABEL_41;
    goto LABEL_16;
  }
  if ( debug )
  {
LABEL_41:
    sub_A828(5, "%s", Version);
    goto LABEL_17;
  }
LABEL_16:
  if ( verbose )
    goto LABEL_41;
LABEL_17:
  v6 = ntp_optind;
  if ( a1 > ntp_optind )
  {
    do
    {
      v10 = (const char *)a2[v6];
      sub_103C4(v265, "ntp", 5);
      memset(&v258, 0, sizeof(v258));
      v258.ai_socktype = 2;
      v258.ai_family = ai_fam_templ;
      v11 = getaddrinfo(v10, v265, &v258, (struct addrinfo **)&ai);
      v12 = v11;
      if ( v11 )
      {
        v7 = stderr;
        if ( (unsigned int)(v11 + 4) <= 1 )
        {
          v239 = gai_strerror(v11);
          _fprintf_chk(v7, 1, "Exiting, name server cannot be used: %s (%d)", v239, v12);
          v240 = gai_strerror(v12);
          sub_A828(3, "name server cannot be used: %s (%d)", v240, v12);
          exit(1);
        }
        v8 = gai_strerror(v11);
        _fprintf_chk(v7, 1, "Error resolving %s: %s (%d)\n", v10, v8, v12);
        v9 = gai_strerror(v12);
        sub_A828(3, "Can't find host %s: %s (%d)", v10, v9, v12);
      }
      else
      {
        tv_sec = (struct addrinfo *)ai.tv_sec;
        if ( ai.tv_sec )
        {
          do
          {
            memset(&domain, 0, sizeof(domain));
            v262 = 0;
            v263 = 0;
            v264 = 0;
            if ( tv_sec->ai_addrlen > 0x1C )
              sub_1073C("ntpdate.c", 1400, 2, "ptr->ai_addrlen <= sizeof(addr)");
            _memcpy_chk(&domain, tv_sec->ai_addr);
            v14 = socket(domain.sa_family, 2, 0);
            v15 = v14;
            if ( v14 != -1 )
            {
              if ( domain.sa_family == 2 )
                v16 = 16;
              else
                v16 = 28;
              if ( connect(v14, &domain, v16) )
              {
                close(v15);
              }
              else
              {
                close(v15);
                v17 = sub_967C(0, 272, 0, 1);
                memcpy((void *)(v17 + 4), tv_sec->ai_addr, tv_sec->ai_addrlen);
                *(_DWORD *)(v17 + 60) = ++sys_numservers;
                v18 = (int *)sys_servers;
                if ( sys_servers )
                {
                  while ( *v18 )
                    v18 = (int *)*v18;
                  *v18 = v17;
                }
                else
                {
                  sys_servers = v17;
                }
              }
            }
            tv_sec = tv_sec->ai_next;
          }
          while ( tv_sec );
          tv_sec = (struct addrinfo *)ai.tv_sec;
        }
        freeaddrinfo(tv_sec);
      }
      v6 = ntp_optind + 1;
      ntp_optind = v6;
    }
    while ( v6 < a1 );
    v2 = 0;
  }
  v19 = sys_numservers;
  if ( !sys_numservers )
  {
    sub_A828(3, "no servers can be used, exiting");
    exit(1);
  }
  if ( sys_authenticate )
  {
    sub_7990();
    if ( !sub_89A4(key_file[0]) )
    {
      sub_A828(3, "no key file <%s>, exiting", key_file[0]);
      exit(1);
    }
    sub_8038(sys_authkey, 1);
    if ( !sub_815C(sys_authkey) )
    {
      sub_A828(3, "authentication key %lu unknown", sys_authkey);
      exit(1);
    }
    v19 = sys_numservers;
  }
  ai.tv_sec = 1;
  if ( !debug )
  {
    if ( simple_query )
      v2 = 0;
    else
      v2 = unpriv_port == 0;
  }
  sub_D56C(v19 + 2);
  sub_103C4(v265, "ntp", 5);
  memset(&v258.ai_protocol, 0, 20);
  v258.ai_socktype = 2;
  v258.ai_flags = 1;
  v258.ai_family = ai_fam_templ;
  v253 = getaddrinfo(0, v265, &v258, &v254);
  if ( v253 )
  {
    sub_A828(3, "getaddrinfo() failed: %m");
    exit(1);
  }
  v20 = 0;
  v246 = v254;
  ai_next = v254;
  nbsock = 0;
  if ( v254 )
  {
    do
    {
      fd[v20] = socket(ai_next->ai_family, ai_next->ai_socktype, ai_next->ai_protocol);
      v20 = nbsock;
      v24 = fd[nbsock];
      if ( v24 == -1 )
      {
        v22 = *_errno_location();
        v23 = v22 > 0x5D;
        if ( v22 != 93 )
          v23 = v22 - 96 > 1;
        if ( v23 )
        {
          sub_A828(3, "socket() failed: %m");
          exit(1);
        }
      }
      else
      {
        if ( setsockopt(v24, 1, 2, &ai, 4u) < 0 )
        {
          sub_A828(3, "setsockopt() SO_REUSEADDR failed: %m");
          exit(1);
        }
        v25 = v254;
        v26 = nbsock;
        ai_family = v254->ai_family;
        if ( ai_family == 10 )
        {
          if ( setsockopt(fd[nbsock], 41, 26, &ai, 4u) < 0 )
          {
            sub_A828(3, "setsockopt() IPV6_V6ONLY failed: %m");
            exit(1);
          }
          v25 = v254;
          v26 = nbsock;
          ai_family = v254->ai_family;
        }
        fd_family[v26] = ai_family;
        if ( v2 )
        {
          memset(&domain, 0, sizeof(domain));
          v262 = 0;
          v263 = 0;
          v264 = 0;
          if ( v25->ai_addrlen > 0x1C )
            sub_1073C("ntpdate.c", 1766, 2, "res->ai_addrlen <= sizeof(addr)");
          _memcpy_chk(&domain, v25->ai_addr);
          if ( domain.sa_family == 2 )
            v28 = 16;
          else
            v28 = 28;
          if ( bind(fd[v26], &domain, v28) < 0 )
          {
            if ( *_errno_location() == 98 )
              sub_A828(3, "the NTP socket is in use, exiting");
            else
              sub_A828(3, "bind() fails: %m");
            exit(1);
          }
          v26 = nbsock;
        }
        v29 = fd[v26];
        *((_DWORD *)&fdmask + 2 * v26) = v29;
        *((_WORD *)&fdmask + 4 * v26 + 2) = 1;
        if ( fcntl(v29, 4, 2048) < 0 )
        {
          sub_A828(3, "fcntl(FNDELAY|FASYNC) fails: %m");
          exit(1);
        }
        v20 = ++nbsock;
      }
      ai_next = v254->ai_next;
      v254 = ai_next;
    }
    while ( v20 <= 1 && ai_next );
  }
  freeaddrinfo(v246);
  v30 = &GLOBAL_OFFSET_TABLE_;
  alarm_flag = 0;
  sub_105D8(14, sub_36D4);
  v258.ai_family = (int)&EVP_DigestFinal_ptr;
  v258.ai_protocol = (int)&loc_186A0;
  v258.ai_flags = 0;
  v258.ai_socktype = 0;
  setitimer(0, (const struct itimerval *)&v258, 0);
  v31 = setpriority(0, 0, -12);
  initializing = 0;
  while ( complete_servers < sys_numservers )
  {
    v32 = alarm_flag;
    if ( alarm_flag )
    {
      alarm_flag = 0;
      v32 = 1;
    }
    v243 = v32;
    v33 = sub_D470(v31);
    if ( v33 | v243 )
    {
      v31 = sub_D868(v33);
      v38 = v31;
      if ( v31 )
      {
        v247 = (struct addrinfo *)v30;
        goto LABEL_90;
      }
LABEL_101:
      if ( v243 )
LABEL_102:
        v31 = sub_3B8C();
    }
    else
    {
      v34 = _poll_chk(v30[207], nbsock, 1000 * v30[235]->d_tag, 16);
      if ( v34 > 0 )
      {
        v35 = sub_3C3C();
      }
      else
      {
        v35 = _errno_location();
        v36 = *v35;
        if ( v34 == -1 )
        {
          if ( v36 != 4 )
            v35 = (int *)sub_A828(3, "poll() error: %m");
        }
        else if ( v36 )
        {
          v35 = (int *)sub_A828(7, "poll(): nfound = %d, error: %m", v34);
        }
      }
      if ( alarm_flag )
      {
        alarm_flag = 0;
        v37 = sub_D470(v35);
        v38 = sub_D868(v37);
        if ( v38 )
        {
          v247 = (struct addrinfo *)v30;
          v243 = 1;
          goto LABEL_90;
        }
        goto LABEL_102;
      }
      v57 = sub_D470(v35);
      v31 = sub_D868(v57);
      v38 = v31;
      if ( v31 )
      {
        v243 = 0;
        v247 = (struct addrinfo *)v30;
        while ( 1 )
        {
LABEL_90:
          if ( debug )
          {
            v44 = (const char *)sub_F658(v38 + 4);
            _printf_chk(1, "receive(%s)\n", v44);
          }
          v40 = *(_DWORD *)(v38 + 84);
          if ( v40 == 48 )
          {
            v41 = 0;
          }
          else
          {
            if ( v40 <= 47 )
            {
              if ( debug )
                _printf_chk(1, "receive: packet length %d\n", *(_DWORD *)(v38 + 84));
              goto LABEL_89;
            }
            v41 = 1;
          }
          v42 = *(unsigned __int8 *)(v38 + 88);
          if ( ((v42 >> 3) & 7) - 1 > 3 )
            goto LABEL_89;
          v43 = ((v42 & 7) - 2) & 0xFD;
          if ( (((v42 & 7) - 2) & 0xFD) != 0 || *(unsigned __int8 *)(v38 + 89) > 0xFu )
          {
            if ( debug )
              _printf_chk(1, "receive: mode %d stratum %d\n", v42 & 7, *(unsigned __int8 *)(v38 + 89));
            goto LABEL_89;
          }
          if ( *(_WORD *)(v38 + 6) != 31488 )
            goto LABEL_125;
          v45 = sys_servers;
          if ( !sys_servers )
            goto LABEL_125;
          v252 = *(unsigned __int8 *)(v38 + 88);
          v46 = *(unsigned __int16 *)(v38 + 4);
          v47 = *(unsigned __int8 *)(v38 + 89);
          do
          {
            while ( *(unsigned __int16 *)(v45 + 4) != v46 )
            {
              v45 = *(_DWORD *)v45;
              if ( !v45 )
                goto LABEL_118;
            }
            if ( v46 == 2 )
            {
              if ( *(_DWORD *)(v38 + 8) == *(_DWORD *)(v45 + 8) )
                goto LABEL_133;
              v48 = (*(_DWORD *)(v45 + 8) & 0xF0) == 224;
            }
            else
            {
              if ( !memcmp((const void *)(v38 + 12), (const void *)(v45 + 12), 0x10u)
                && *(_DWORD *)(v38 + 28) == *(_DWORD *)(v45 + 28) )
              {
LABEL_133:
                v58 = v47;
                v59 = bswap32(*(_DWORD *)(v38 + 112));
                v60 = v252;
                v61 = bswap32(*(_DWORD *)(v38 + 116));
                if ( v59 != *(_DWORD *)(v45 + 244) || v61 != *(_DWORD *)(v45 + 248) )
                {
                  if ( debug )
                    puts("receive: pkt.org and peer.xmt differ");
                  goto LABEL_89;
                }
                if ( !sys_authenticate )
                {
                  *(_BYTE *)(v45 + 36) *= 2;
                  goto LABEL_270;
                }
                if ( debug <= 3 )
                {
                  if ( v41 )
                    goto LABEL_422;
LABEL_427:
                  v229 = debug;
                  goto LABEL_428;
                }
                v231 = v40 - 48;
                v232 = bswap32(*(_DWORD *)(v38 + 136));
                v233 = *(_DWORD *)v247[19].ai_addrlen;
                v234 = sub_86D0(v233, v38 + 88, 48, v231);
                _printf_chk(1, "receive: rpkt keyid=%ld sys_authkey=%ld decrypt=%ld\n", v232, v233, v234);
                if ( !v41 )
                  goto LABEL_427;
LABEL_422:
                if ( bswap32(*(_DWORD *)(v38 + 136)) != *(_DWORD *)v247[19].ai_addrlen )
                  goto LABEL_427;
                v228 = ((int (*)(void))sub_86D0)();
                v229 = debug;
                if ( v228 )
                {
                  if ( debug )
                    _printf_chk(1, "receive: authentication %s\n", "passed");
                  *(_BYTE *)(v45 + 36) *= 2;
                  v60 = *(unsigned __int8 *)(v38 + 88);
                  v58 = *(unsigned __int8 *)(v38 + 89);
LABEL_270:
                  v153 = v60 >> 6;
                  if ( v153 != 3 )
                  {
LABEL_271:
                    *(_BYTE *)(v45 + 33) = v153;
                    if ( !v58 )
                      LOBYTE(v58) = 16;
LABEL_273:
                    *(_BYTE *)(v45 + 34) = v58;
                    v154 = *(char *)(v38 + 91);
                    *(_BYTE *)(v45 + 35) = v154;
                    v155 = bswap32(*(_DWORD *)(v38 + 120));
                    v156 = bswap32(*(_DWORD *)(v38 + 124));
                    LODWORD(v160) = *(_DWORD *)(v38 + 108);
                    v157 = bswap32(*(_DWORD *)(v38 + 96));
                    HIDWORD(v160) = *(_DWORD *)(v38 + 128);
                    v158 = bswap32(*(_DWORD *)(v38 + 104));
                    *(_DWORD *)(v45 + 40) = bswap32(*(_DWORD *)(v38 + 92));
                    v159 = *(_DWORD *)(v38 + 132);
                    *(_DWORD *)(v45 + 44) = v157;
                    HIDWORD(v160) = bswap32(HIDWORD(v160));
                    v161 = *(_DWORD *)(v38 + 100);
                    v162 = bswap32(v159);
                    *(_DWORD *)(v45 + 52) = v158;
                    *(_DWORD *)(v45 + 56) = bswap32(v160);
                    *(_DWORD *)(v45 + 48) = v161;
                    *(_DWORD *)(v45 + 236) = HIDWORD(v160);
                    *(_DWORD *)(v45 + 240) = v162;
                    if ( !(v155 | v156) )
                      goto LABEL_402;
                    if ( v155 >= HIDWORD(v160) )
                    {
                      v221 = v155 != HIDWORD(v160);
                      if ( v156 > v162 )
                        v221 = 1;
                      if ( v221 )
                      {
LABEL_402:
                        *(_DWORD *)(v45 + 60) = *(_DWORD *)v247[18].ai_addr + *(_DWORD *)v247[24].ai_socktype;
                        goto LABEL_89;
                      }
                    }
                    v163 = v155 - v59;
                    LODWORD(v160) = *(_DWORD *)(v38 + 76);
                    if ( v156 < v61 )
                      --v163;
                    v164 = v156 - v61;
                    HIDWORD(v160) -= *(_DWORD *)(v38 + 72);
                    if ( v162 < (unsigned int)v160 )
                      --HIDWORD(v160);
                    LODWORD(v160) = v162 - v160;
                    v165 = (v163 << 31) | (v164 >> 1);
                    v166 = v160 >> 1;
                    v167 = v163 & 0x80000000 | (v163 >> 1);
                    v168 = __CFADD__(v166, v165);
                    v169 = v166 + v165;
                    v170 = v168;
                    if ( v164 < (unsigned int)v160 )
                      --v163;
                    v171 = v163 - HIDWORD(v160);
                    v172 = (HIDWORD(v160) & 0x80000000 | (HIDWORD(v160) >> 1)) + v167 + v170;
                    v173 = v164 - v160;
                    v174 = v172;
                    v175 = v169;
                    if ( v171 < 0x10000 )
                    {
                      if ( v171 <= -65536 )
                        v176 = 0x80000000;
                      else
                        v176 = HIWORD(v173);
                      if ( v171 > -65536 )
                        v176 |= v171 << 16;
                    }
                    else
                    {
                      v176 = 0x7FFFFFFF;
                    }
                    if ( debug > 3 )
                    {
                      s1 = (const char *)sub_959C(v172, v169, 6);
                      v236 = (const char *)sub_921C(v176, 5);
                      _printf_chk(1, "offset: %s, delay %s\n", s1, v236);
                      v154 = *(char *)(v45 + 35);
                    }
                    v177 = -v154;
                    v178 = *(unsigned __int16 *)(v45 + 74);
                    v179 = (0x10000 >> v177) + 1679 + v176;
                    v180 = v178;
                    if ( v179 <= 0 )
                    {
                      if ( v178 > 7 )
                        goto LABEL_301;
                      v174 = 0;
                      *(_DWORD *)(v45 + 4 * (v178 + 18) + 4) = 0;
                      v238 = (_DWORD *)(v45 + 8 * v178 + 108);
                      *v238 = 0;
                      v175 = 0;
                      v238[1] = 0;
                    }
                    else
                    {
                      if ( v179 < 1311 )
                        v179 = 1311;
                      if ( v178 > 7 )
                        goto LABEL_301;
                      if ( v172 >= 0x10000 )
                        v174 = 0x7FFFFFFF;
                      v181 = (int *)(v45 + 8 * v178 + 108);
                      *(_DWORD *)(v45 + 4 * v178 + 76) = v179;
                      *v181 = v172;
                      v181[1] = v169;
                      if ( v172 >= 0x10000 )
                      {
LABEL_300:
                        v182 = v178 + 1;
                        v183 = v45 + 4 * v178;
                        *(_DWORD *)(v183 + 172) = v174;
                        v180 = v182;
                        *(_DWORD *)(v183 + 204) = 0;
                        *(_WORD *)(v45 + 74) = v182;
LABEL_301:
                        if ( sys_samples > v180 )
                          goto LABEL_402;
LABEL_302:
                        *(_DWORD *)(v45 + 60) = 0;
                        ++complete_servers;
                        goto LABEL_89;
                      }
                      if ( v172 <= -65536 )
                      {
                        v174 = 0x80000000;
                        goto LABEL_300;
                      }
                    }
                    v174 = HIWORD(v175) | (v174 << 16);
                    goto LABEL_300;
                  }
                }
                else
                {
LABEL_428:
                  if ( v229 )
                  {
                    _printf_chk(1, "receive: authentication %s\n", "failed");
                    LOBYTE(v230) = 2 * *(_BYTE *)(v45 + 36);
                  }
                  else
                  {
                    v230 = (unsigned __int8)(2 * *(_BYTE *)(v45 + 36));
                  }
                  *(_BYTE *)(v45 + 36) = v230 | 1;
                  v58 = *(unsigned __int8 *)(v38 + 89);
                  v153 = *(unsigned __int8 *)(v38 + 88) >> 6;
                  if ( v153 != 3 )
                    goto LABEL_271;
                }
                if ( v58 )
                {
                  *(_BYTE *)(v45 + 33) = v153;
                  goto LABEL_273;
                }
                if ( *(_BYTE *)(v38 + 100) != 82
                  || *(_BYTE *)(v38 + 101) != 65
                  || *(_BYTE *)(v38 + 102) != 84
                  || *(_BYTE *)(v38 + 103) != 69 )
                {
                  LOBYTE(v58) = 16;
                  *(_BYTE *)(v45 + 33) = 3;
                  goto LABEL_273;
                }
                v235 = (const char *)sub_F658(v38 + 4);
                sub_A828(v153, "%s rate limit response from server.", v235);
                goto LABEL_302;
              }
              v48 = *(unsigned __int8 *)(v45 + 12) == 255;
            }
            if ( v48 )
              v43 = v45;
            v45 = *(_DWORD *)v45;
          }
          while ( v45 );
LABEL_118:
          if ( v43 )
          {
            if ( *(_DWORD *)(v43 + 60) )
            {
              *(_DWORD *)(v43 + 60) = v45;
              ++complete_servers;
            }
            v49 = (_DWORD *)sub_967C(0, 272, 0, 1);
            v50 = *(_DWORD *)(v38 + 8);
            v51 = *(_DWORD *)(v38 + 12);
            v52 = *(_DWORD *)(v38 + 16);
            v49[1] = *(_DWORD *)(v38 + 4);
            v49[2] = v50;
            v49[3] = v51;
            v49[4] = v52;
            v53 = ++sys_numservers;
            v54 = (_DWORD *)sys_servers;
            v55 = *(_DWORD *)(v38 + 24);
            v56 = *(_DWORD *)(v38 + 28);
            v49[5] = *(_DWORD *)(v38 + 20);
            v49[6] = v55;
            v49[7] = v56;
            v49[15] = v53;
            while ( *v54 )
              v54 = (_DWORD *)*v54;
            *v54 = v49;
            sub_3A94((int)v49);
          }
LABEL_125:
          if ( debug )
            puts("receive: server not found");
LABEL_89:
          v39 = sub_D66C(v38);
          v31 = sub_D868(v39);
          v38 = v31;
          if ( !v31 )
          {
            v30 = (Elf32_Dyn **)v247;
            goto LABEL_101;
          }
        }
      }
    }
  }
  v62 = (struct addrinfo *)v30;
  v63 = (_DWORD *)sys_servers;
  if ( !sys_servers )
    goto LABEL_403;
  v64 = sys_samples;
  v65 = sys_samples - 1;
  if ( (unsigned int)(sys_samples - 1) > 7 )
LABEL_173:
    sub_1073C("ntpdate.c", 966, 2, "(0 < sys_samples) && (sys_samples <= 8)");
  v248 = v62;
  while ( 2 )
  {
    v66 = 0;
    do
    {
      *((_DWORD *)&domain.sa_family + v66) = v66;
      ++v66;
    }
    while ( v64 > v66 );
    v67 = 0;
    for ( i = &domain; v67 < v65; i = (struct sockaddr *)((char *)i + 4) )
    {
      if ( v64 > ++v67 )
      {
        v69 = i;
        do
        {
          v71 = *(_DWORD *)&v69->sa_data[2];
          v69 = (struct sockaddr *)((char *)v69 + 4);
          v70 = v71;
          v72 = v63[v71 + 19];
          if ( v72 )
          {
            v73 = *(_DWORD *)&i->sa_family;
            v74 = v63[*(_DWORD *)&i->sa_family + 19];
            v75 = v72 < v74;
            if ( !v74 )
              v75 = 1;
            if ( v75 )
            {
              *(_DWORD *)&i->sa_family = v70;
              *(_DWORD *)&v69->sa_family = v73;
            }
          }
        }
        while ( &v260[4 * v64] != (_BYTE *)v69 );
      }
    }
    v76 = *(_DWORD *)&domain.sa_family;
    v77 = &v63[*(_DWORD *)&domain.sa_family];
    v78 = v77[19];
    if ( !v78 )
    {
      v63[63] = 0;
      v63[66] = 0;
      v63[65] = 0;
      v63[67] = 0;
      v63[64] = 0x400000;
      v63 = (_DWORD *)*v63;
      if ( !v63 )
        break;
      goto LABEL_172;
    }
    v63[63] = v78;
    v79 = &v63[2 * v76 + 27];
    v80 = v79[1];
    v23 = *v79 < 0x10000;
    v81 = *v79;
    v63[65] = v81;
    v63[66] = v80;
    if ( v23 )
    {
      v83 = -65535;
      v84 = v81 < -65535;
      if ( v81 < -65535 )
      {
        v82 = 0x80000000;
      }
      else
      {
        v83 = v63[66];
        v82 = v81 << 16;
      }
      if ( !v84 )
        v82 |= HIWORD(v83);
    }
    else
    {
      v82 = 0x7FFFFFFF;
    }
    v63[67] = v82;
    v63[64] = 0;
    if ( v64 != 1 )
    {
      v85 = 0;
      for ( j = 1; j != v64; ++j )
      {
        v87 = &v63[*((_DWORD *)&domain.sa_family + j)];
        if ( v87[19] )
        {
          v88 = v87[43] - v77[43];
          if ( v88 < 0 )
            v88 = -v88;
          if ( v88 >= 0x400000 )
            v88 = 0x400000;
        }
        else
        {
          v88 = 0x400000;
        }
        v85 += (unsigned int)v88 >> j;
      }
      v63[64] = v85;
    }
    v63 = (_DWORD *)*v63;
    if ( v63 )
    {
LABEL_172:
      v64 = sys_samples;
      v65 = sys_samples - 1;
      if ( (unsigned int)(sys_samples - 1) > 7 )
        goto LABEL_173;
      continue;
    }
    break;
  }
  v62 = v248;
  v89 = sys_servers;
  v90 = debug;
  if ( !sys_servers )
  {
LABEL_403:
    v249 = (struct addrinfo *)debug;
    if ( !debug )
      goto LABEL_309;
    goto LABEL_404;
  }
  v91 = (unsigned int)v63;
  while ( 2 )
  {
    while ( 2 )
    {
      v92 = *(unsigned __int8 *)(v89 + 34);
      if ( !*(_BYTE *)(v89 + 34) )
      {
        if ( v90 )
        {
          v184 = (const char *)sub_F658(v89 + 4);
          _printf_chk(1, "%s: Server dropped: no data\n", v184);
          v90 = debug;
        }
        goto LABEL_305;
      }
      if ( v92 > 0xF )
      {
        if ( v90 )
        {
          v185 = (const char *)sub_F658(v89 + 4);
          _printf_chk(1, "%s: Server dropped: strata too high\n", v185);
          v90 = debug;
        }
        goto LABEL_305;
      }
      if ( *(_DWORD *)(v89 + 252) > 0x80000u )
      {
        if ( v90 )
        {
          v186 = (const char *)sub_F658(v89 + 4);
          _printf_chk(1, "%s: Server dropped: server too far away\n", v186);
          v90 = debug;
        }
        goto LABEL_305;
      }
      if ( *(_BYTE *)(v89 + 33) == 3 )
      {
        if ( v90 )
        {
          v219 = (const char *)sub_F658(v89 + 4);
          _printf_chk(1, "%s: Server dropped: leap not in sync\n", v219);
          v90 = debug;
        }
        goto LABEL_305;
      }
      v93 = *(_DWORD *)(v89 + 236);
      v94 = *(_DWORD *)(v89 + 52);
      if ( v93 <= v94 && (v93 != v94 || *(_DWORD *)(v89 + 240) < *(_DWORD *)(v89 + 56)) )
      {
        if ( v90 )
        {
          v194 = (const char *)sub_F658(v89 + 4);
          _printf_chk(1, "%s: Server dropped: server is very broken\n", v194);
          v90 = debug;
        }
        goto LABEL_305;
      }
      if ( v93 - v94 > (unsigned int)&loc_1517C + 3 )
      {
        if ( v90 )
        {
          v220 = (const char *)sub_F658(v89 + 4);
          _printf_chk(1, "%s: Server dropped: server has gone too long without sync\n", v220);
          v90 = debug;
        }
        goto LABEL_305;
      }
      v95 = *(unsigned __int8 *)(v89 + 36);
      if ( *(_BYTE *)(v89 + 36) )
      {
        if ( v90 )
        {
          v201 = (const char *)sub_F658(v89 + 4);
          _printf_chk(1, "%s: Server dropped: Server is untrusted\n", v201);
          v90 = debug;
        }
        goto LABEL_305;
      }
      v96 = 2 * *(_DWORD *)(v89 + 256);
      if ( v91 )
      {
        v97 = *(unsigned __int8 *)(v259[0] + 34);
        if ( v92 > v97 )
        {
          do
          {
            if ( ++v95 == v91 )
            {
LABEL_191:
              if ( v95 > 4 )
                goto LABEL_305;
              goto LABEL_192;
            }
            v98 = *(unsigned __int8 *)(v259[v95] + 34);
          }
          while ( v92 > v98 );
          if ( v92 >= v98 && v96 >= *((_DWORD *)&domain.sa_family + v95) )
            goto LABEL_409;
          if ( v95 > 4 )
            goto LABEL_305;
          if ( v95 >= v91 )
          {
            v237 = &v265[4 * v95 + 12];
            *((_DWORD *)v237 - 23) = v89;
            *((_DWORD *)v237 - 13) = v96;
            goto LABEL_193;
          }
        }
        else if ( v92 >= v97 && *(int *)&domain.sa_family <= v96 )
        {
LABEL_409:
          v222 = &v259[v95];
          for ( k = v95 + 1; ; ++k )
          {
            v95 = k;
            if ( k >= v91 )
              goto LABEL_191;
            v224 = v222[1];
            ++v222;
            if ( *(unsigned __int8 *)(v224 + 34) > v92 || *((_DWORD *)&domain.sa_family + k) > v96 )
              break;
          }
          if ( k <= 4 )
            goto LABEL_415;
LABEL_305:
          v89 = *(_DWORD *)v89;
          if ( v89 )
            continue;
          v249 = (struct addrinfo *)v90;
          if ( v91 <= 1 )
            goto LABEL_307;
LABEL_195:
          v100 = v259;
          v101 = 1;
          while ( 2 )
          {
            v102 = v100[1];
            v103 = *v100++;
            if ( *(unsigned __int8 *)(v102 + 34) <= (unsigned int)*(unsigned __int8 *)(v103 + 34) )
            {
LABEL_199:
              if ( ++v101 == v91 )
                goto LABEL_200;
              continue;
            }
            break;
          }
          if ( v89 != 1 )
          {
            v89 = 1;
            goto LABEL_199;
          }
          v91 = v101;
          if ( v101 == 1 )
          {
LABEL_398:
            v244 = (struct addrinfo *)v259[0];
            goto LABEL_236;
          }
LABEL_201:
          v104 = &v258.ai_next + v91;
          v105 = (struct addrinfo **)v259;
          v106 = 0;
          v107 = v91 - 1;
          do
          {
            while ( 1 )
            {
              if ( ++v106 < v91 )
              {
                v108 = *v105;
                v109 = v105[1];
                if ( BYTE2(v109[1].ai_flags) <= (unsigned int)BYTE2((*v105)[1].ai_flags) )
                  break;
              }
              ++v105;
              if ( v106 == v107 )
                goto LABEL_211;
            }
            v110 = v105 + 1;
            do
            {
              if ( v108[7].ai_next >= v109[7].ai_next )
              {
                *v105 = v109;
                *v110 = v108;
              }
              if ( v104 == v110 )
                break;
              v108 = *v105;
              v111 = v110[1];
              ++v110;
              v109 = v111;
            }
            while ( BYTE2((*v105)[1].ai_flags) >= (unsigned int)BYTE2(v111[1].ai_flags) );
            ++v105;
          }
          while ( v106 != v107 );
LABEL_211:
          v250 = v62;
          v112 = v259[0];
          do
          {
            v113 = v260;
            v114 = v259;
            v115 = 0;
            do
            {
              v116 = 0;
              v113[1] = 0;
              ++v113;
              do
              {
                if ( v115 != v116 )
                {
                  v117 = *(_DWORD *)(*v114 + 268);
                  v118 = *(_DWORD *)(v259[v116] + 268) - v117;
                  if ( v118 < 0 )
                    v118 = v117 - *(_DWORD *)(v259[v116] + 268);
                  if ( v116 )
                  {
                    for ( m = 0; m != v116; ++m )
                      v118 = (v118 >> 2) + (v118 >> 1);
                  }
                  *v113 += v118;
                }
                ++v116;
              }
              while ( v116 != v91 );
              ++v115;
              ++v114;
            }
            while ( v115 != v91 );
            v120 = *(char *)(v112 + 35);
            v121 = 0;
            v122 = *(_DWORD *)&domain.sa_family;
            v123 = 1;
            do
            {
              v124 = *(char *)(v259[v123] + 35);
              if ( *((_DWORD *)&domain.sa_family + v123) >= (unsigned int)v122 )
              {
                v121 = v123;
                v122 = *((_DWORD *)&domain.sa_family + v123);
              }
              ++v123;
              if ( v120 >= v124 )
                v120 = v124;
            }
            while ( v123 < v91 );
            if ( v122 < (0x10000 >> -(char)v120) + 1679 )
              break;
            if ( v121 + 1 < v91 )
            {
              v125 = (struct addrinfo **)&v259[v121];
              do
              {
                *v125 = v125[1];
                ++v125;
              }
              while ( v104 != v125 );
              v112 = v259[0];
            }
            --v91;
            --v104;
          }
          while ( v91 != 1 );
          v244 = (struct addrinfo *)v112;
          v62 = v250;
LABEL_236:
          if ( v249 )
          {
            putchar(10);
            v126 = sys_servers;
            if ( sys_servers )
              goto LABEL_239;
          }
          else if ( *(_DWORD *)v62[21].ai_addrlen )
          {
            v126 = sys_servers;
            if ( sys_servers )
            {
LABEL_239:
              v127 = &sys_samples;
              do
              {
                if ( *(_BYTE *)(v126 + 34) )
                {
                  v132 = v126 + 4;
                  v133 = *(FILE **)v62[27].ai_socktype;
                  if ( debug )
                  {
                    v134 = sub_F658(v132);
                    _fprintf_chk(
                      v133,
                      1,
                      "server %s, port %d\n",
                      v134,
                      (unsigned __int16)__rev16(*(unsigned __int16 *)(v126 + 6)));
                    if ( (*(_BYTE *)(v126 + 33) & 2) != 0 )
                      v135 = 49;
                    else
                      v135 = 48;
                    v241 = v135;
                    if ( (*(_BYTE *)(v126 + 33) & 1) != 0 )
                      v136 = 49;
                    else
                      v136 = 48;
                    _fprintf_chk(
                      v133,
                      1,
                      "stratum %d, precision %d, leap %c%c, trust %03o\n",
                      *(unsigned __int8 *)(v126 + 34),
                      *(char *)(v126 + 35),
                      v241,
                      v136,
                      *(unsigned __int8 *)(v126 + 36));
                    if ( (unsigned int)*(unsigned __int8 *)(v126 + 34) - 2 <= 0xD )
                    {
                      v144 = (const char *)sub_CDB0(*(_DWORD *)(v126 + 48));
                    }
                    else
                    {
                      v137 = v127;
                      v138 = 0;
                      v139 = v133;
                      v140 = v126 + 47;
                      v141 = v137;
                      do
                      {
                        v143 = *(unsigned __int8 *)++v140;
                        v142 = v143;
                        if ( !v143 )
                          break;
                        if ( ((*_ctype_b_loc())[v142] & 0x4000) == 0 )
                          LOBYTE(v142) = 46;
                        v265[v138++] = v142;
                      }
                      while ( v138 != 4 );
                      v144 = v265;
                      v133 = v139;
                      v127 = v141;
                      v265[v138] = 0;
                    }
                    v145 = (const char *)sub_921C(*(_DWORD *)(v126 + 40), 6);
                    v146 = (const char *)sub_8FB4(*(_DWORD *)(v126 + 44), 0, 6);
                    _fprintf_chk(v133, 1, "refid [%s], root delay %s, root dispersion %s\n", v144, v145, v146);
                    v147 = *(unsigned __int16 *)(v126 + 68);
                    if ( v147 != *(unsigned __int16 *)(v126 + 74) )
                      _fprintf_chk(v133, 1, "transmitted %d, in filter %d\n", v147, *(unsigned __int16 *)(v126 + 74));
                    v148 = (const char *)sub_D318(v126 + 52);
                    _fprintf_chk(v133, 1, "reference time:      %s\n", v148);
                    v149 = (const char *)sub_D318(v126 + 236);
                    _fprintf_chk(v133, 1, "originate timestamp: %s\n", v149);
                    v150 = (const char *)sub_D318(v126 + 244);
                    _fprintf_chk(v133, 1, "transmit timestamp:  %s\n", v150);
                    if ( *v127 > 1 )
                    {
                      v151 = 0;
                      fwrite("filter delay: ", 1u, 0xEu, v133);
                      while ( v151 == 4 )
                      {
                        fwrite("\n              ", 1u, 0xFu, v133);
                        if ( *v127 > 4 )
                          goto LABEL_266;
                        _fprintf_chk(v133, 1, " %-10.10s", "----");
LABEL_263:
                        ++v151;
                      }
                      if ( *v127 <= v151 )
                        v152 = "----";
                      else
LABEL_266:
                        v152 = (const char *)sub_921C(*(_DWORD *)(v126 + 4 * (v151 + 1) + 72), 5);
                      _fprintf_chk(v133, 1, " %-10.10s", v152);
                      if ( v151 != 7 )
                        goto LABEL_263;
                      v216 = v126;
                      fputc(10, v133);
                      v217 = 0;
                      fwrite("filter offset:", 1u, 0xEu, v133);
                      while ( 2 )
                      {
                        if ( v217 == 4 )
                        {
                          fwrite("\n              ", 1u, 0xFu, v133);
                          if ( *v127 > 4 )
                          {
LABEL_391:
                            v218 = (const char *)sub_959C(*(_DWORD *)(v216 + 108), *(_DWORD *)(v216 + 112), 6);
                            goto LABEL_387;
                          }
                          _fprintf_chk(v133, 1, " %-10.10s", "----");
                        }
                        else
                        {
                          if ( *v127 > v217 )
                            goto LABEL_391;
                          v218 = "----";
LABEL_387:
                          _fprintf_chk(v133, 1, " %-10.10s", v218);
                          if ( v217 == 7 )
                          {
                            fputc(10, v133);
                            break;
                          }
                        }
                        v216 += 8;
                        ++v217;
                        continue;
                      }
                    }
                    v202 = (const char *)sub_921C(*(_DWORD *)(v126 + 252), 5);
                    v203 = (const char *)sub_8FB4(*(_DWORD *)(v126 + 256), 0, 5);
                    _fprintf_chk(v133, 1, "delay %s, dispersion %s, ", v202, v203);
                    v204 = (const char *)sub_959C(*(_DWORD *)(v126 + 260), *(_DWORD *)(v126 + 264), 6);
                    _fprintf_chk(v133, 1, "offset %s\n\n", v204);
                  }
                  else
                  {
                    v128 = (const char *)sub_F658(v132);
                    v129 = *(unsigned __int8 *)(v126 + 34);
                    v130 = (const char *)sub_959C(*(_DWORD *)(v126 + 260), *(_DWORD *)(v126 + 264), 6);
                    v131 = (const char *)sub_921C(*(_DWORD *)(v126 + 252), 5);
                    _fprintf_chk(v133, 1, "server %s, stratum %d, offset %s, delay %s\n", v128, v129, v130, v131);
                  }
                }
                v126 = *(_DWORD *)v126;
              }
              while ( v126 );
            }
          }
          if ( !v244 )
            goto LABEL_406;
          if ( *(_DWORD *)v62[25].ai_protocol )
            goto LABEL_489;
          if ( !v62[23].ai_next->ai_flags )
          {
            ai_protocol = v244[8].ai_protocol;
            if ( ai_protocol < 0 )
              ai_protocol = -ai_protocol;
            if ( (unsigned int)ai_protocol >= 0x8000 )
            {
LABEL_489:
              if ( !*(_DWORD *)v62[21].ai_addrlen && !debug )
              {
                v188 = v244[8].ai_family;
                v189 = v188 < 0
                     ? COERCE_DOUBLE(
                         ((__int64 (__fastcall *)(int, _DWORD))sub_1C2DC)(
                           -v244[8].ai_socktype,
                           (unsigned __int64)-(__int64)(__PAIR64__(v188, 0) + (unsigned int)v244[8].ai_socktype) >> 32))
                     : sub_1C2DC(v244[8].ai_socktype, (__PAIR64__(v188, 0) + (unsigned int)v244[8].ai_socktype) >> 32);
                LODWORD(v189) = -32;
                v191 = ldexp(v189, v190);
                if ( !sub_6DBC(LODWORD(v191), HIDWORD(v191)) )
                  return 0;
              }
              v192 = (const char *)sub_F658(&v244->ai_family);
              v193 = (const char *)sub_959C(v244[8].ai_family, v244[8].ai_socktype, 6);
              sub_A828(5, "step time server %s offset %s sec", v192, v193);
              return v253;
            }
          }
          v205 = *(_DWORD *)v62[21].ai_addrlen;
          if ( v205 )
          {
LABEL_383:
            v253 = 0;
            v213 = (const char *)sub_F658(&v244->ai_family);
            v214 = (const char *)sub_959C(v244[8].ai_family, v244[8].ai_socktype, 6);
            sub_A828(5, "adjust time server %s offset %s sec", v213, v214);
            return v253;
          }
          v206 = v244[8].ai_family;
          ai_socktype = v244[8].ai_socktype;
          if ( v206 < 0 )
          {
            ai_socktype = -ai_socktype;
            v206 = ~v206;
            if ( !ai_socktype )
              ++v206;
            v205 = 1;
          }
          v208 = (v206 << 31) | (ai_socktype >> 1);
          v209 = v208 == 0x10000000;
          if ( v208 <= 0x10000000 )
            v209 = (unsigned int)v206 >> 1 == 0;
          if ( !v209 )
            v208 = 0x10000000;
          v210 = 1000000LL * (ai_socktype + v208) + 0x80000000LL;
          v211 = __CFADD__(ai_socktype, v208);
          v212 = v211 + v206;
          ai.tv_sec = v212;
          ai.tv_usec = HIDWORD(v210);
          if ( HIDWORD(v210) == 1000000 )
          {
            ai.tv_sec = v212 + 1;
            ai.tv_usec = 0;
            if ( !v205 )
              goto LABEL_380;
          }
          else if ( !v205 )
          {
LABEL_380:
            if ( !debug && ai.tv_usec && adjtime(&ai, (struct timeval *)&v258) < 0 )
            {
              sub_A828(3, "Can't adjust the time of day: %m");
              exit(1);
            }
            goto LABEL_383;
          }
          ai.tv_sec = -ai.tv_sec;
          ai.tv_usec = -ai.tv_usec;
          goto LABEL_380;
        }
LABEL_415:
        v225 = v91;
        v226 = v91;
        do
        {
          --v226;
          if ( v225 <= 4 )
          {
            v227 = *((_DWORD *)&domain.sa_family + v226);
            v259[v225] = v259[v226];
            *((_DWORD *)&domain.sa_family + v225) = v227;
          }
          --v225;
        }
        while ( v226 > v95 );
LABEL_192:
        v99 = &v265[4 * v95 + 12];
        *((_DWORD *)v99 - 23) = v89;
        *((_DWORD *)v99 - 13) = v96;
        if ( v91 <= 4 )
          goto LABEL_193;
        goto LABEL_305;
      }
      break;
    }
    v259[0] = v89;
    *(_DWORD *)&domain.sa_family = v96;
LABEL_193:
    v89 = *(_DWORD *)v89;
    ++v91;
    if ( v89 )
      continue;
    break;
  }
  v249 = (struct addrinfo *)v90;
  if ( v91 > 1 )
    goto LABEL_195;
LABEL_307:
  if ( v91 )
  {
LABEL_200:
    if ( v91 == 1 )
      goto LABEL_398;
    goto LABEL_201;
  }
  if ( !v249 )
  {
LABEL_309:
    if ( *(_DWORD *)v62[21].ai_addrlen )
    {
      v126 = sys_servers;
      if ( sys_servers )
      {
        v244 = v249;
        goto LABEL_239;
      }
    }
    goto LABEL_406;
  }
LABEL_404:
  putchar(10);
  v126 = sys_servers;
  if ( sys_servers )
  {
    v244 = 0;
    goto LABEL_239;
  }
LABEL_406:
  sub_A828(3, "no server suitable for synchronization found");
  return 1;
}
