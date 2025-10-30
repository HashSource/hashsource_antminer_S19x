int __fastcall sub_642E4(const struct timeval *a1, const struct timezone *a2)
{
  int *v4; // r6
  int v5; // r8
  int v6; // r3
  int v7; // r4
  bool v8; // zf
  int v10; // r0
  __suseconds_t tv_usec; // r12
  __time_t tv_sec; // r1
  int v13; // r0
  __time_t v14; // r3
  int v15; // r0
  int v16; // [sp+4h] [bp-18h]
  int v17; // [sp+4h] [bp-18h]
  int v18; // [sp+4h] [bp-18h]
  int v19; // [sp+4h] [bp-18h]
  struct timespec tp; // [sp+Ch] [bp-10h] BYREF

  if ( debug > 0 )
    sub_64D28("In ntp_set_tod\n");
  v4 = _errno_location();
  v5 = dword_107100;
  if ( (unsigned int)dword_107100 > 1 )
  {
    v6 = 0;
    v7 = -1;
    goto LABEL_6;
  }
  tv_usec = a1->tv_usec;
  tv_sec = a1->tv_sec;
  *v4 = 0;
  tp.tv_sec = tv_sec;
  tp.tv_nsec = 1000 * tv_usec;
  v13 = clock_settime(0, &tp);
  v7 = v13;
  v6 = *v4;
  if ( debug > 0 )
  {
    v18 = *v4;
    sub_64D28("ntp_set_tod: clock_settime: %d %m\n", v13);
    v5 = dword_107100;
    v6 = v18;
    if ( !(v7 | dword_107100) )
      goto LABEL_20;
  }
  else if ( !(v13 | v5) )
  {
LABEL_20:
    dword_107100 = 1;
    goto LABEL_16;
  }
  if ( !v7 )
  {
LABEL_16:
    *v4 = v6;
    if ( debug > 0 )
      sub_64D28("ntp_set_tod: Final result: %s: %d %m\n", set_tod_used[dword_107100], 0);
    goto LABEL_26;
  }
LABEL_6:
  if ( (v5 & 0xFFFFFFFD) != 0 )
    goto LABEL_7;
  tp.tv_sec = 0;
  tp.tv_nsec = 0;
  adjtime((const struct timeval *)&tp, 0);
  *v4 = v5 & 0xFFFFFFFD;
  v10 = settimeofday(a1, a2);
  v7 = v10;
  v6 = *v4;
  if ( debug <= 0 )
  {
    if ( v10 | v5 )
      goto LABEL_15;
    goto LABEL_28;
  }
  v17 = *v4;
  sub_64D28("ntp_set_tod: settimeofday: %d %m\n", v10);
  v6 = v17;
  v5 = dword_107100;
  if ( !(v7 | dword_107100) )
  {
LABEL_28:
    dword_107100 = 2;
    goto LABEL_16;
  }
LABEL_15:
  if ( !v7 )
    goto LABEL_16;
LABEL_7:
  v8 = v5 == 0;
  if ( v5 )
    v8 = v5 == 3;
  if ( !v8 )
  {
    *v4 = v6;
    if ( debug <= 0 )
    {
LABEL_11:
      *v4 = v6;
      return v7;
    }
LABEL_36:
    v19 = v6;
    sub_64D28("ntp_set_tod: Final result: %s: %d %m\n", set_tod_used[v5], v7);
    v6 = v19;
    goto LABEL_37;
  }
  v14 = a1->tv_sec;
  *v4 = 0;
  tp.tv_sec = v14;
  v15 = stime(&tp.tv_sec);
  v7 = v15;
  v6 = *v4;
  if ( debug > 0 )
  {
    v16 = *v4;
    sub_64D28("ntp_set_tod: stime: %d %m\n", v15);
    v6 = v16;
    v5 = dword_107100;
  }
  *v4 = v6;
  if ( !(v5 | v7) )
  {
    dword_107100 = 3;
    if ( debug > 0 )
      sub_64D28("ntp_set_tod: Final result: %s: %d %m\n", "stime", v5 | v7);
    goto LABEL_26;
  }
  if ( debug > 0 )
    goto LABEL_36;
LABEL_37:
  if ( v7 )
    goto LABEL_11;
LABEL_26:
  v7 = (int)set_tod_using;
  if ( set_tod_using )
  {
    set_tod_using(set_tod_used[dword_107100]);
    v7 = 0;
    set_tod_using = 0;
  }
  return v7;
}
