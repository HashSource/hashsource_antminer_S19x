void __fastcall __noreturn sub_1D53C(int a1, int *a2)
{
  pthread_attr_t *v2; // r11
  int v3; // r0
  int v4; // r4
  __mode_t v5; // r0
  int *v6; // r8
  const char *v7; // r4
  int v8; // r5
  const char *v9; // r3
  __uid_t v10; // r2
  void *v11; // r3
  int *v12; // r5
  int *v13; // r5
  int v14; // t1
  int v15; // r4
  int v16; // r0
  int v17; // r1
  int v18; // t1
  int v19; // r0
  int v20; // r4
  int v21; // r4
  int *v22; // r0
  const char *v23; // r1
  int v24; // r4
  int v25; // r5
  int v26; // r0
  int v27; // r1
  int v28; // r0
  int v29; // r0
  int v30; // r0
  int v31; // r0
  int v32; // r0
  int v33; // r0
  int v34; // r0
  int v35; // r0
  __int64 v36; // r0
  int v37; // r0
  int v38; // r0
  int *v39; // r1
  int v40; // r5
  void (__fastcall *v41)(int); // r3
  int v42; // r1
  int v43; // r0
  int v44; // r1
  char *v45; // r0
  char *v46; // r0
  int tv_sec; // r5
  int v48; // r3
  __pid_t v49; // r0
  __time_t priority_min; // r0
  int v51; // r4
  const char *v52; // r0
  __int64 v53; // r0
  int v54; // r7
  int v55; // r10
  time_t v56; // r0
  int v57; // r1
  int *v58; // r3
  int *v59; // r9
  int v60; // r0
  int v61; // r1
  int v62; // r9
  int v63; // r0
  int v64; // [sp+Ch] [bp-40h]
  int v65; // [sp+18h] [bp-34h]
  char *v66; // [sp+1Ch] [bp-30h]
  int v67; // [sp+24h] [bp-28h]
  int *v68; // [sp+28h] [bp-24h] BYREF
  int v69; // [sp+2Ch] [bp-20h] BYREF
  _DWORD v70[2]; // [sp+34h] [bp-18h] BYREF
  struct timeval th; // [sp+3Ch] [bp-10h] BYREF
  int v72; // [sp+44h] [bp-8h] BYREF
  int v73; // [sp+48h] [bp-4h]
  int v74; // [sp+4Ch] [bp+0h]
  int v75; // [sp+C8h] [bp+7Ch] BYREF
  char v76[1032]; // [sp+CCh] [bp+80h] BYREF

  v69 = a1;
  v68 = a2;
  pthread_attr_init(v2);
  v3 = pthread_attr_setstacksize(v2, 0x8000u);
  if ( v3 )
  {
    v46 = strerror(v3);
    sub_65D40(3, "my_pthread_warmup: pthread_attr_setstacksize() -> %s", v46);
  }
  v4 = pthread_create((pthread_t *)&th, v2, (void *(*)(void *))sub_1D458, 0);
  pthread_attr_destroy(v2);
  if ( v4 )
  {
    v45 = strerror(v4);
    sub_65D40(3, "my_pthread_warmup: pthread_create() -> %s", v45);
  }
  else
  {
    pthread_cancel(th.tv_sec);
    pthread_join(th.tv_sec, 0);
  }
  v5 = umask(0);
  if ( !v5 )
    v5 = 18;
  umask(v5);
  v6 = &saved_argc;
  saved_argc = v69;
  saved_argv = (int)v68;
  progname = *v68;
  initializing = 1;
  sub_1D48C(&v69, (int *)&v68);
  if ( (*(int *)((_BYTE *)&elf_hash_bucket[165] + (_DWORD)off_B711C) & 0xF) != 0
    || (*(int *)((_BYTE *)&elf_hash_bucket[229] + (_DWORD)off_B711C) & 0xF) != 0
    || (*(int *)((_BYTE *)&elf_hash_bucket[261] + (_DWORD)off_B711C) & 0xF) != 0 )
  {
    nofork = 1;
  }
  sub_65E3C((char *)progname);
  if ( (*(int *)((_BYTE *)&elf_hash_bucket[117] + (_DWORD)off_B711C) & 0xF) != 0 )
  {
    v67 = *(int *)((char *)&elf_hash_bucket[119] + (_DWORD)off_B711C);
    syslogit = 0;
    sub_65F28(v67, 0);
  }
  else
  {
    if ( nofork )
      msyslog_term = 1;
    v67 = 0;
    if ( (*(int *)((_BYTE *)&elf_hash_bucket[261] + (_DWORD)off_B711C) & 0xF) != 0 )
      syslogit = 0;
  }
  sub_65D40(5, "%s: Starting", Version);
  sub_6D00C(v76, 1024, "Command line:");
  v7 = &v76[strlen(v76)];
  if ( saved_argc > 0 )
  {
    v8 = 0;
    do
    {
      v9 = *(const char **)(saved_argv + 4 * v8++);
      sub_6D00C(v7, v76 - v7 + 1024, " %s", v9);
      v7 += strlen(v7);
    }
    while ( saved_argc > v8 );
  }
  sub_65D40(6, "%s", v76);
  sub_6FC94(sub_1D3D4);
  sub_70468(sub_1D32C);
  sub_703EC(sub_1D24C);
  v10 = getuid();
  if ( v10 )
  {
    v11 = off_B711C;
    if ( (*(int *)((_BYTE *)&elf_hash_bucket[261] + (_DWORD)off_B711C) & 0xF) == 0 )
    {
      msyslog_term = 1;
      sub_65D40(3, "must be run as root, not uid %ld", v10);
      exit(1);
    }
    if ( (*(int *)((_BYTE *)&elf_hash_bucket[133] + (_DWORD)off_B711C) & 0xF) == 0 )
      goto LABEL_22;
  }
  else
  {
    v11 = off_B711C;
    if ( (*(int *)((_BYTE *)&elf_hash_bucket[133] + (_DWORD)off_B711C) & 0xF) == 0 )
    {
LABEL_22:
      if ( (*(int *)((_BYTE *)&elf_hash_bucket[85] + (_DWORD)v11) & 0xF) != 0 )
      {
        v12 = *(int **)((char *)&elf_hash_bucket[88] + (_DWORD)v11);
        v14 = *v12;
        v13 = (int *)&byte_8[(_DWORD)v12];
        v15 = v14 - 1;
        if ( v14 > 0 )
        {
          do
          {
            --v15;
            v16 = sub_64FD8(*v13, 0, v2);
            v18 = *v13++;
            v17 = v18;
            if ( v16 )
              v19 = 5;
            else
              v19 = 4;
            sub_16060(v19, v17, -1, 0);
          }
          while ( v15 != -1 );
          v11 = off_B711C;
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
      v20 = *(int *)((char *)&elf_hash_bucket[373] + (_DWORD)v11);
      v72 = -1;
      v21 = v20 & 0xF;
      v73 = -1;
      if ( v21 )
      {
        v21 = *(int *)((char *)&elf_hash_bucket[375] + (_DWORD)v11);
        if ( v21 <= 0 )
        {
          v21 = 0;
        }
        else
        {
          nofork = 0;
          if ( pipe(&v72) )
          {
            v22 = _errno_location();
            v23 = "Pipe creation failed for --wait-sync: %m";
            goto LABEL_37;
          }
          waitsync_fd_to_close = v73;
        }
      }
      sub_651B4();
      sub_6055C(v70);
      sub_69AD4(v70[1] * v70[0]);
      v25 = nofork;
      if ( !nofork )
      {
        v49 = fork();
        if ( v49 == -1 )
        {
          v22 = _errno_location();
          v23 = "fork: %m";
LABEL_37:
          v24 = *v22;
          if ( !*v22 )
            v24 = -1;
          sub_65D40(3, v23);
          exit(v24);
        }
        if ( v49 > 0 )
        {
          v54 = v72;
          if ( !v21 )
            goto LABEL_105;
          v55 = v72 + 1;
          close(waitsync_fd_to_close);
          v64 = 1 << (v54 % 32);
          v65 = v21 + time(0);
          while ( 1 )
          {
            v56 = time(0);
            th.tv_usec = 0;
            if ( v65 > v56 )
              v6 = (int *)(v65 - v56);
            v58 = &v2[-1].__align + 8;
            if ( v65 <= v56 )
              v6 = 0;
            th.tv_sec = (__time_t)v6;
            v59 = &v2[-1].__align + 8;
            do
            {
              v58[1] = 0;
              ++v58;
            }
            while ( v58 != &v75 );
            v66 = &v76[4 * _fdelt_chk(v54, v57) + 1028];
            *((_DWORD *)v66 - 289) |= v64;
            v60 = select(v54 + 1, (fd_set *)v2, 0, 0, &th);
            if ( v60 != -1 )
              break;
            v62 = *_errno_location();
            if ( v62 != 4 )
            {
              if ( !v62 )
                v62 = -1;
              sub_65D40(3, "--wait-sync select failed: %m");
              v25 = v62;
              goto LABEL_105;
            }
            if ( (int)v6 <= 0 )
              goto LABEL_124;
          }
          if ( !v60 )
          {
            do
            {
              v59[1] = 0;
              ++v59;
            }
            while ( v59 != &v75 );
            v63 = _fdelt_chk(v54, v61);
            th.tv_sec = 0;
            th.tv_usec = 0;
            *(&v74 + v63) |= v64;
            if ( !select(v55, (fd_set *)v2, 0, 0, &th) )
            {
LABEL_124:
              v25 = 110;
              _fprintf_chk(stderr, 1, "%s: -w/--wait-sync %ld timed out.\n", (const char *)progname, v21);
            }
          }
LABEL_105:
          exit(v25);
        }
        closelog();
        if ( syslog_file )
        {
          fclose((FILE *)syslog_file);
          syslog_file = 0;
          syslogit = 1;
        }
        sub_69F80(waitsync_fd_to_close);
        if ( open64("/dev/null", 0) || dup2(0, 1) != 1 || dup2(0, 2) != 2 )
          sub_6FC54("ntpd.c", 580, 2, "0 == open(\"/dev/null\", 0) && 1 == dup2(0, 1) && 2 == dup2(0, 2)");
        sub_65E3C((char *)progname);
        sub_662C8(v67);
        if ( setsid() == -1 )
          sub_65D40(3, "setsid(): %m");
      }
      sub_FCE4(3, 0x32000u);
      sub_FCE4(8, 0xFFFFFFFFFFF00000LL);
      sub_6E6C4(1, sub_1D180);
      sub_6E6C4(2, sub_1D180);
      sub_6E6C4(3, sub_1D180);
      sub_6E6C4(15, sub_1D180);
      sub_6E6C4(7, sub_1D180);
      sub_6E6C4(10, sub_1D1DC);
      sub_6E6C4(12, sub_1D1DC);
      v26 = sub_6E6C4(13, 1);
      if ( !ssl_init_done )
        v26 = sub_6D690(v26);
      v28 = sub_62A24(v26, v27);
      v29 = sub_42660(v28);
      v30 = sub_40D88(v29);
      v31 = sub_31158(v30);
      v32 = sub_41AA8(v31);
      v33 = sub_40080(v32);
      v34 = sub_24628(v33);
      v35 = sub_31E60(v34);
      LODWORD(v36) = sub_39D94(v35);
      if ( !priority_done )
      {
        th.tv_sec = sched_get_priority_max(1);
        tv_sec = th.tv_sec;
        if ( config_priority_override )
        {
          priority_min = sched_get_priority_min(1);
          if ( tv_sec >= config_priority )
          {
            if ( priority_min < config_priority )
              priority_min = config_priority;
            th.tv_sec = priority_min;
          }
          else
          {
            th.tv_sec = tv_sec;
          }
        }
        LODWORD(v36) = sched_setscheduler(0, 1, (const struct sched_param *)&th);
        if ( (_DWORD)v36 == -1 )
        {
          LODWORD(v36) = sub_65D40(3, "sched_setscheduler(): %m");
          HIDWORD(v36) = priority_done;
        }
        else
        {
          HIDWORD(v36) = ++priority_done;
        }
        if ( !HIDWORD(v36) )
        {
          LODWORD(v36) = setpriority(0, 0, -12);
          if ( (_DWORD)v36 == -1 )
          {
            v36 = sub_65D40(3, "setpriority() error: %m");
            v48 = priority_done;
          }
          else
          {
            v48 = ++priority_done;
          }
          if ( !v48 )
            v36 = sub_65D40(3, "set_process_priority: No way found to improve our priority");
        }
      }
      sub_39588(v36, HIDWORD(v36));
      v37 = sub_15F4C();
      sub_2F8B0(v37);
      sub_311C4(1);
      sub_135F8(v69, (int)v68);
      sub_30B38(1);
      v38 = sub_26294(6, 0);
      v39 = &initializing;
      initializing = 0;
      was_alarmed = 0;
      while ( 1 )
      {
LABEL_48:
        if ( dword_BA3E0 )
        {
          v51 = dword_BA3E4;
          v52 = (const char *)strsignal(dword_BA3E4);
          if ( !v52 )
            v52 = byte_99528;
          v53 = sub_65D40(5, "%s exiting on signal %d (%s)", (const char *)progname, v51, v52);
          sub_333B0(v53, HIDWORD(v53));
          exit(0);
        }
        if ( alarm_flag )
        {
          alarm_flag = 0;
          was_alarmed = 1;
        }
        else if ( !was_alarmed )
        {
          v38 = sub_6A438(v38);
          if ( was_alarmed )
          {
            if ( alarm_flag )
            {
LABEL_68:
              alarm_flag = 0;
              was_alarmed = 1;
            }
LABEL_69:
            v38 = sub_41C8C(v38, v39);
            was_alarmed = 0;
            goto LABEL_56;
          }
          v38 = sub_6B310(v38);
          if ( !v38 )
            v38 = sub_16F70();
        }
        if ( alarm_flag )
          goto LABEL_68;
        if ( was_alarmed )
          goto LABEL_69;
LABEL_56:
        v38 = sub_6B124(v38, v39);
        v40 = v38;
        if ( v38 )
        {
          while ( !alarm_flag )
          {
            if ( was_alarmed )
              goto LABEL_63;
            v41 = *(void (__fastcall **)(int))(v40 + 80);
            if ( !v41 )
              goto LABEL_64;
LABEL_60:
            v41(v40);
            v43 = sub_6AF28(v40, v42);
            v38 = sub_6B124(v43, v44);
            v40 = v38;
            if ( !v38 )
              goto LABEL_48;
          }
          was_alarmed = 1;
          alarm_flag = 0;
LABEL_63:
          sub_41C8C(v38, v39);
          v41 = *(void (__fastcall **)(int))(v40 + 80);
          was_alarmed = 0;
          if ( !v41 )
          {
LABEL_64:
            sub_65D40(3, "fatal: receive buffer callback NULL");
            abort();
          }
          goto LABEL_60;
        }
      }
    }
  }
  listen_to_virtual_ips = 0;
  goto LABEL_22;
}
