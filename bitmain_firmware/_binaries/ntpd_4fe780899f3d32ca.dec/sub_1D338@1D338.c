void __fastcall __noreturn sub_1D338(int a1, int *a2)
{
  int v2; // r0
  int v3; // r4
  __mode_t v4; // r0
  int *v5; // r8
  int v6; // r12
  const char *v7; // r4
  int v8; // r5
  const char *v9; // r3
  __uid_t v10; // r2
  void *v11; // r3
  int *v12; // r5
  int v13; // r4
  int *v14; // r5
  int v15; // t1
  int v16; // r0
  int v17; // r4
  int v18; // r4
  int v19; // r5
  int v20; // r0
  int v21; // r1
  int v22; // r0
  int v23; // r0
  int v24; // r0
  int v25; // r0
  int v26; // r0
  int v27; // r0
  int v28; // r0
  int v29; // r0
  __int64 v30; // r0
  int v31; // r0
  int v32; // r0
  int *v33; // r1
  int v34; // r4
  void (__fastcall *v35)(int); // r3
  int v36; // r1
  int v37; // r0
  int v38; // r4
  const char *v39; // r1
  char *v40; // r0
  char *v41; // r0
  int v42; // r0
  __time_t priority_max; // r5
  int v44; // r3
  __pid_t v45; // r0
  __time_t priority_min; // r0
  int v47; // r4
  const char *v48; // r0
  __int64 v49; // r0
  int v50; // r7
  time_t v51; // r0
  int v52; // r3
  int v53; // r11
  time_t v54; // r0
  int v55; // r1
  fd_set *v56; // r3
  int v57; // r0
  int v58; // r0
  int v59; // r1
  int v60; // r2
  int v61; // r3
  int i; // r3
  char *v63; // lr
  int v64; // r12
  int v65; // [sp+Ch] [bp-4C8h]
  int v66; // [sp+24h] [bp-4B0h]
  int *v67; // [sp+28h] [bp-4ACh] BYREF
  int v68; // [sp+2Ch] [bp-4A8h] BYREF
  _DWORD v69[2]; // [sp+34h] [bp-4A0h] BYREF
  struct timeval th; // [sp+3Ch] [bp-498h] BYREF
  int v71; // [sp+44h] [bp-490h] BYREF
  int v72; // [sp+48h] [bp-48Ch] BYREF
  fd_set v73; // [sp+4Ch] [bp-488h] BYREF
  char v74[1032]; // [sp+CCh] [bp-408h] BYREF

  v68 = a1;
  v67 = a2;
  pthread_attr_init((pthread_attr_t *)&v73);
  v2 = pthread_attr_setstacksize((pthread_attr_t *)&v73, 0x8000u);
  if ( v2 )
  {
    v41 = strerror(v2);
    sub_64E00(3, "my_pthread_warmup: pthread_attr_setstacksize() -> %s", v41);
  }
  v3 = pthread_create((pthread_t *)&th, (const pthread_attr_t *)&v73, (void *(*)(void *))sub_1D250, 0);
  pthread_attr_destroy((pthread_attr_t *)&v73);
  if ( v3 )
  {
    v40 = strerror(v3);
    sub_64E00(3, "my_pthread_warmup: pthread_create() -> %s", v40);
  }
  else
  {
    pthread_cancel(th.tv_sec);
    pthread_join(th.tv_sec, 0);
  }
  v4 = umask(0);
  if ( !v4 )
    v4 = 18;
  umask(v4);
  v5 = &saved_argc;
  saved_argc = v68;
  v6 = *v67;
  saved_argv = (int)v67;
  progname = v6;
  initializing = 1;
  sub_1D284(&v68, (int *)&v67);
  if ( (*(int *)((_BYTE *)&elf_hash_bucket[165] + (_DWORD)off_B611C) & 0xF) != 0
    || (*(int *)((_BYTE *)&elf_hash_bucket[229] + (_DWORD)off_B611C) & 0xF) != 0
    || (*(int *)((_BYTE *)&elf_hash_bucket[261] + (_DWORD)off_B611C) & 0xF) != 0 )
  {
    nofork = 1;
  }
  sub_64EFC((char *)progname);
  if ( (*(int *)((_BYTE *)&elf_hash_bucket[117] + (_DWORD)off_B611C) & 0xF) != 0 )
  {
    v42 = *(int *)((char *)&elf_hash_bucket[119] + (_DWORD)off_B611C);
    v66 = v42;
    syslogit = 0;
    sub_64FEC(v42, 0);
  }
  else
  {
    if ( nofork )
      msyslog_term = 1;
    v66 = 0;
    if ( (*(int *)((_BYTE *)&elf_hash_bucket[261] + (_DWORD)off_B611C) & 0xF) != 0 )
      syslogit = 0;
  }
  sub_64E00(5, "%s: Starting", Version);
  sub_6C054(v74, 1024, "Command line:");
  v7 = &v74[strlen(v74)];
  if ( saved_argc > 0 )
  {
    v8 = 0;
    do
    {
      v9 = *(const char **)(saved_argv + 4 * v8++);
      sub_6C054(v7, 1024 - (v7 - v74), " %s", v9);
      v7 += strlen(v7);
    }
    while ( saved_argc > v8 );
  }
  sub_64E00(6, "%s", v74);
  sub_6ED00(sub_1D1CC);
  sub_6F4D8(sub_1D124);
  sub_6F45C(sub_1D044);
  v10 = getuid();
  v11 = off_B611C;
  if ( v10 && (*(int *)((_BYTE *)&elf_hash_bucket[261] + (_DWORD)off_B611C) & 0xF) == 0 )
  {
    msyslog_term = 1;
    sub_64E00(3, "must be run as root, not uid %ld", v10);
    exit(1);
  }
  if ( (*(int *)((_BYTE *)&elf_hash_bucket[133] + (_DWORD)off_B611C) & 0xF) != 0 )
    listen_to_virtual_ips = 0;
  if ( (*(int *)((_BYTE *)&elf_hash_bucket[85] + (_DWORD)off_B611C) & 0xF) != 0 )
  {
    v12 = *(int **)((char *)&elf_hash_bucket[88] + (_DWORD)off_B611C);
    v13 = *v12 - 1;
    if ( *v12 > 0 )
    {
      v14 = v12 + 1;
      do
      {
        v15 = v14[1];
        ++v14;
        --v13;
        if ( sub_64054(v15, 0, &v73, v11) )
          v16 = 5;
        else
          v16 = 4;
        sub_15E04(v16, *v14, -1, 0);
      }
      while ( v13 != -1 );
      v11 = off_B611C;
    }
  }
  if ( (*(int *)((_BYTE *)&elf_hash_bucket[181] + (_DWORD)v11) & 0xF) != 0 )
    priority_done = 0;
  if ( (*(int *)((_BYTE *)&elf_hash_bucket[213] + (_DWORD)v11) & 0xF) != 0 )
  {
    config_priority = *(int *)((char *)&elf_hash_bucket[215] + (_DWORD)v11);
    config_priority_override = 1;
    priority_done = 0;
  }
  v17 = *(int *)((char *)&elf_hash_bucket[373] + (_DWORD)v11);
  v71 = -1;
  v72 = -1;
  v18 = v17 & 0xF;
  if ( v18 )
  {
    v18 = *(int *)((char *)&elf_hash_bucket[375] + (_DWORD)v11);
    if ( v18 > 0 )
    {
      nofork = 0;
      if ( pipe(&v71) )
      {
        v38 = *_errno_location();
        v39 = "Pipe creation failed for --wait-sync: %m";
        goto LABEL_58;
      }
      waitsync_fd_to_close = v72;
    }
    else
    {
      v18 = 0;
    }
  }
  sub_64244();
  sub_5F724(v69);
  sub_68B80(v69[1] * v69[0]);
  v19 = nofork;
  if ( nofork )
  {
LABEL_38:
    sub_FB7C(3, 0x32000u);
    sub_FB7C(8, 0xFFFFFFFFFFF00000LL);
    sub_6D6F0(1, sub_1CF78);
    sub_6D6F0(2, sub_1CF78);
    sub_6D6F0(3, sub_1CF78);
    sub_6D6F0(15, sub_1CF78);
    sub_6D6F0(7, sub_1CF78);
    sub_6D6F0(10, sub_1CFD4);
    sub_6D6F0(12, sub_1CFD4);
    v20 = sub_6D6F0(13, 1);
    if ( !ssl_init_done )
      v20 = sub_6C6B8(v20);
    v22 = sub_61B14(v20, v21);
    v23 = sub_418A8(v22);
    v24 = sub_3FFBC(v23);
    v25 = sub_30C68(v24);
    v26 = sub_40CF0(v25);
    v27 = sub_3F3E4(v26);
    v28 = sub_2430C(v27);
    v29 = sub_31958(v28);
    LODWORD(v30) = sub_395B0(v29);
    if ( !priority_done )
    {
      priority_max = sched_get_priority_max(1);
      th.tv_sec = priority_max;
      if ( config_priority_override )
      {
        priority_min = sched_get_priority_min(1);
        if ( priority_max >= config_priority )
        {
          if ( priority_min < config_priority )
            priority_min = config_priority;
          th.tv_sec = priority_min;
        }
        else
        {
          th.tv_sec = priority_max;
        }
      }
      LODWORD(v30) = sched_setscheduler(0, 1, (const struct sched_param *)&th);
      if ( (_DWORD)v30 == -1 )
      {
        LODWORD(v30) = sub_64E00(3, "sched_setscheduler(): %m");
        HIDWORD(v30) = priority_done;
      }
      else
      {
        HIDWORD(v30) = ++priority_done;
      }
      if ( !HIDWORD(v30) )
      {
        LODWORD(v30) = setpriority(0, 0, -12);
        if ( (_DWORD)v30 == -1 )
        {
          v30 = sub_64E00(3, "setpriority() error: %m");
          v44 = priority_done;
        }
        else
        {
          v44 = ++priority_done;
        }
        if ( !v44 )
          v30 = sub_64E00(3, "set_process_priority: No way found to improve our priority");
      }
    }
    sub_38D98(v30, HIDWORD(v30));
    v31 = sub_15CF0();
    sub_2F40C(v31);
    sub_30CD4(1);
    sub_13380(v68, (int)v67);
    sub_305F8(1);
    v32 = sub_25EE0(6, 0);
    v33 = &initializing;
    initializing = 0;
    was_alarmed = 0;
    while ( 1 )
    {
LABEL_42:
      if ( dword_B93E0 )
      {
        v47 = dword_B93E4;
        v48 = (const char *)strsignal(dword_B93E4);
        if ( !v48 )
          v48 = byte_97F7C;
        v49 = sub_64E00(5, "%s exiting on signal %d (%s)", (const char *)progname, v47, v48);
        sub_32E6C(v49, HIDWORD(v49));
        exit(0);
      }
      if ( alarm_flag )
      {
        alarm_flag = 0;
        was_alarmed = 1;
      }
      else
      {
        if ( was_alarmed )
          goto LABEL_67;
        v32 = sub_694B8(v32);
        if ( !was_alarmed )
        {
          v32 = sub_6A3A0(v32);
          if ( !v32 )
            v32 = sub_16D04();
LABEL_67:
          if ( !alarm_flag )
          {
            if ( !was_alarmed )
              goto LABEL_47;
            goto LABEL_46;
          }
LABEL_70:
          alarm_flag = 0;
          was_alarmed = 1;
          goto LABEL_46;
        }
      }
      if ( alarm_flag )
        goto LABEL_70;
LABEL_46:
      v32 = sub_40ED4(v32, v33);
      was_alarmed = 0;
LABEL_47:
      v32 = sub_6A1A4(v32);
      v34 = v32;
      if ( v32 )
      {
        while ( 1 )
        {
          if ( alarm_flag )
          {
            was_alarmed = 1;
            alarm_flag = 0;
          }
          else if ( !was_alarmed )
          {
            v35 = *(void (__fastcall **)(int))(v34 + 80);
            if ( !v35 )
            {
LABEL_55:
              sub_64E00(3, "fatal: receive buffer callback NULL");
              abort();
            }
            goto LABEL_50;
          }
          sub_40ED4(v32, v33);
          v35 = *(void (__fastcall **)(int))(v34 + 80);
          was_alarmed = 0;
          if ( !v35 )
            goto LABEL_55;
LABEL_50:
          v35(v34);
          v37 = sub_69FA8(v34, v36);
          v32 = sub_6A1A4(v37);
          v34 = v32;
          if ( !v32 )
            goto LABEL_42;
        }
      }
    }
  }
  v45 = fork();
  if ( v45 != -1 )
  {
    if ( v45 > 0 )
    {
      v50 = v71;
      if ( !v18 )
        goto LABEL_106;
      close(waitsync_fd_to_close);
      v51 = time(0);
      LOBYTE(v52) = v50 & 0x1F;
      if ( v50 <= 0 )
        v52 = -(-v50 & 0x1F);
      v65 = v18 + v51;
      v53 = 1 << v52;
      while ( 1 )
      {
        v54 = time(0);
        th.tv_usec = 0;
        if ( v65 > v54 )
          v5 = (int *)(v65 - v54);
        v56 = (fd_set *)&v72;
        if ( v65 <= v54 )
          v5 = 0;
        th.tv_sec = (__time_t)v5;
        do
        {
          v56->__fds_bits[1] = 0;
          v56 = (fd_set *)((char *)v56 + 4);
        }
        while ( &v73.__fds_bits[31] != (__fd_mask *)v56 );
        v57 = _fdelt_chk(v50, v55, &v73.__fds_bits[31]);
        v73.__fds_bits[v57] |= v53;
        v58 = select(v50 + 1, &v73, 0, 0, &th);
        if ( v58 != -1 )
          break;
        v61 = *_errno_location();
        if ( v61 != 4 )
        {
          if ( !v61 )
            v61 = -1;
          v19 = v61;
          sub_64E00(3, "--wait-sync select failed: %m");
          goto LABEL_106;
        }
        if ( !v5 )
          goto LABEL_127;
      }
      if ( !v58 )
      {
        for ( i = 0; i != 32; ++i )
          v73.__fds_bits[i] = 0;
        v63 = &v74[4 * _fdelt_chk(v50, v59, v60) + 1028];
        th.tv_sec = 0;
        v64 = *((_DWORD *)v63 - 289);
        th.tv_usec = 0;
        *((_DWORD *)v63 - 289) = v64 | v53;
        if ( !select(v50 + 1, &v73, 0, 0, &th) )
        {
LABEL_127:
          v19 = 110;
          _fprintf_chk(stderr, 1, "%s: -w/--wait-sync %ld timed out.\n", (const char *)progname, v18);
        }
      }
LABEL_106:
      exit(v19);
    }
    closelog();
    if ( syslog_file )
    {
      fclose((FILE *)syslog_file);
      syslog_file = 0;
      syslogit = 1;
    }
    sub_69020(waitsync_fd_to_close);
    if ( open64("/dev/null", 0) || dup2(0, 1) != 1 || dup2(0, 2) != 2 )
      sub_6ECC0("ntpd.c", 580, 2, "0 == open(\"/dev/null\", 0) && 1 == dup2(0, 1) && 2 == dup2(0, 2)");
    sub_64EFC((char *)progname);
    sub_65384(v66);
    if ( setsid() == -1 )
      sub_64E00(3, "setsid(): %m");
    goto LABEL_38;
  }
  v38 = *_errno_location();
  v39 = "fork: %m";
LABEL_58:
  if ( !v38 )
    v38 = -1;
  sub_64E00(3, v39);
  exit(v38);
}
