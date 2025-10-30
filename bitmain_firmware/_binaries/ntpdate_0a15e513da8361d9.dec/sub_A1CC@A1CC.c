int __fastcall sub_A1CC(const struct timeval *a1, const struct timezone *a2)
{
  int v4; // r4
  int v5; // r9
  int v6; // r6
  bool v7; // zf
  int *v9; // r0
  int v10; // r0
  __time_t tv_sec; // r3
  int v12; // r0
  __suseconds_t tv_usec; // r0
  int *v14; // r11
  int v15; // r0
  struct timespec tp; // [sp+Ch] [bp-10h] BYREF

  if ( debug > 0 )
    sub_AB20("In ntp_set_tod\n");
  v4 = dword_33308;
  if ( (unsigned int)dword_33308 <= 1 )
  {
    tv_usec = a1->tv_usec;
    tp.tv_sec = a1->tv_sec;
    tp.tv_nsec = 1000 * tv_usec;
    v14 = _errno_location();
    *v14 = 0;
    v15 = clock_settime(0, &tp);
    v5 = *v14;
    v6 = v15;
    if ( debug > 0 )
    {
      sub_AB20("ntp_set_tod: clock_settime: %d %m\n", v15);
      v4 = dword_33308;
    }
    if ( !(v4 | v6) )
    {
      dword_33308 = 1;
      goto LABEL_23;
    }
    if ( !v6 )
      goto LABEL_23;
    v4 = dword_33308;
  }
  else
  {
    v5 = 0;
    v6 = -1;
  }
  if ( (v4 & 0xFFFFFFFD) != 0 )
  {
    v14 = _errno_location();
    goto LABEL_8;
  }
  tp.tv_nsec = 0;
  tp.tv_sec = 0;
  adjtime((const struct timeval *)&tp, 0);
  v9 = _errno_location();
  *v9 = 0;
  v14 = v9;
  v10 = settimeofday(a1, a2);
  v5 = *v14;
  v6 = v10;
  if ( debug > 0 )
  {
    sub_AB20("ntp_set_tod: settimeofday: %d %m\n", v10);
    v4 = dword_33308;
  }
  if ( !(v4 | v6) )
  {
    dword_33308 = 2;
LABEL_23:
    *v14 = v5;
    if ( debug <= 0 )
      goto LABEL_16;
    v6 = 0;
    v4 = dword_33308;
    goto LABEL_12;
  }
  if ( !v6 )
    goto LABEL_23;
  v4 = dword_33308;
LABEL_8:
  v7 = v4 == 3;
  if ( v4 != 3 )
    v7 = v4 == 0;
  if ( !v7 )
  {
    *v14 = v5;
    if ( debug <= 0 )
    {
LABEL_14:
      *v14 = v5;
      return v6;
    }
    goto LABEL_12;
  }
  tv_sec = a1->tv_sec;
  *v14 = 0;
  tp.tv_sec = tv_sec;
  v12 = stime(&tp.tv_sec);
  v5 = *v14;
  v6 = v12;
  if ( debug > 0 )
  {
    sub_AB20("ntp_set_tod: stime: %d %m\n", v12);
    v4 = dword_33308;
  }
  if ( !(v4 | v6) )
    dword_33308 = 3;
  *v14 = v5;
  if ( debug > 0 )
  {
    v4 = dword_33308;
LABEL_12:
    sub_AB20("ntp_set_tod: Final result: %s: %d %m\n", set_tod_used[v4], v6);
  }
  if ( v6 )
    goto LABEL_14;
LABEL_16:
  if ( set_tod_using )
  {
    ((void (__fastcall *)(char *))set_tod_using)(set_tod_used[dword_33308]);
    set_tod_using = 0;
  }
  return 0;
}
