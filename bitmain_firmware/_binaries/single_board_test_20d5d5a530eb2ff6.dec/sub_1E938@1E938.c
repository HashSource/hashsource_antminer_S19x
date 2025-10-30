int __fastcall sub_1E938(char *a1, size_t a2)
{
  int v4; // r4
  time_t timer; // [sp+18h] [bp-3Ch] BYREF
  struct timeval tv; // [sp+1Ch] [bp-38h] BYREF
  struct tm tp; // [sp+24h] [bp-30h] BYREF

  tv.tv_sec = 0;
  tv.tv_usec = 0;
  gettimeofday(&tv, 0);
  timer = tv.tv_sec;
  v4 = tv.tv_usec / 1000;
  localtime_r(&timer, &tp);
  return snprintf(
           a1,
           a2,
           "[%d-%02d-%02d %02d:%02d:%02d.%03d]",
           tp.tm_year + 1900,
           tp.tm_mon + 1,
           tp.tm_mday,
           tp.tm_hour,
           tp.tm_min,
           tp.tm_sec,
           v4);
}
