int __fastcall sub_325C64(int a1, __pid_t pid, int *stat_loc, __time_t *options, int a5, _DWORD *a6, int *a7)
{
  __pid_t v10; // r0
  __time_t tv_sec; // r2
  __suseconds_t tv_usec; // r3
  __time_t v13; // r12
  int v15; // r2
  struct rusage v16; // [sp+0h] [bp-48h] BYREF

  if ( a5 )
  {
    kill(pid, 15);
    if ( options )
      goto LABEL_3;
  }
  else if ( options )
  {
LABEL_3:
    v10 = wait4(pid, stat_loc, 0, &v16);
    tv_sec = v16.ru_stime.tv_sec;
    tv_usec = v16.ru_stime.tv_usec;
    v13 = v16.ru_utime.tv_sec;
    options[1] = v16.ru_utime.tv_usec;
    options[2] = tv_sec;
    options[3] = tv_usec;
    *options = v13;
    goto LABEL_4;
  }
  v10 = waitpid(pid, stat_loc, (int)options);
LABEL_4:
  if ( v10 >= 0 )
    return 0;
  v15 = *_errno_location();
  *a7 = v15;
  *a6 = "wait";
  return -1;
}
