int __fastcall sub_4355C(int a1, int a2)
{
  int v3; // r9
  int v4; // r0
  int *v5; // r4
  _DWORD *v6; // r6
  int v7; // r8
  struct tm *v8; // r0
  int tm_min; // r1
  int tm_hour; // r2
  int tm_mday; // r3
  int tm_year; // r1
  int tm_wday; // r2
  int tm_yday; // r3
  int tm_gmtoff; // r1
  const char *tm_zone; // r2
  time_t timer; // [sp+4h] [bp-20h] BYREF
  char v19[20]; // [sp+8h] [bp-1Ch] BYREF

  sub_6C054(v19, 20, "/dev/dumbclock%d", a1);
  v3 = sub_3A298(v19, 0xDu, 0);
  if ( v3 <= 0 )
    return 0;
  v4 = sub_63BA4(0, 60, 0, 1);
  v5 = *(int **)(a2 + 84);
  v6 = (_DWORD *)v4;
  *v5 = v4;
  v5[5] = a2;
  v5[7] = v3;
  v5[3] = (int)sub_436C0;
  v5[6] = 0;
  v7 = sub_18DF0(v5 + 2);
  if ( !v7 )
  {
    close(v3);
    v5[7] = -1;
    free(v6);
    *v5 = 0;
    return v7;
  }
  time(&timer);
  v8 = localtime(&timer);
  if ( !v8 )
    return 0;
  tm_min = v8->tm_min;
  tm_hour = v8->tm_hour;
  tm_mday = v8->tm_mday;
  v7 = 1;
  v6[4] = v8->tm_sec;
  v6[5] = tm_min;
  v6[6] = tm_hour;
  v6[7] = tm_mday;
  tm_year = v8->tm_year;
  tm_wday = v8->tm_wday;
  tm_yday = v8->tm_yday;
  v6[8] = v8->tm_mon;
  v6[9] = tm_year;
  v6[10] = tm_wday;
  v6[11] = tm_yday;
  tm_gmtoff = v8->tm_gmtoff;
  tm_zone = v8->tm_zone;
  v6[12] = v8->tm_isdst;
  v6[13] = tm_gmtoff;
  v6[14] = tm_zone;
  *(_BYTE *)(a2 + 95) = -13;
  v5[191] = *(_DWORD *)"dumbclock";
  v5[11] = (int)"Dumb clock";
  return v7;
}
