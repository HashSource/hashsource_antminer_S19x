void sub_3102C()
{
  double v0; // d0
  FILE *v1; // r0
  FILE *v2; // r4
  int v3; // r5
  int v4; // r5
  char *v5; // r6
  int v6; // r8
  int tm_hour; // r7
  int tm_min; // r9
  int tm_sec; // r10
  int v10; // r5
  int v11; // r11
  int v12; // r0
  int v13; // r0
  size_t v14; // r0
  int v15; // r4
  int v16; // r0
  int v17; // r0
  int tm_mday; // [sp+28h] [bp-81Ch]
  int v19; // [sp+2Ch] [bp-818h]
  time_t tv_sec; // [sp+34h] [bp-810h] BYREF
  struct timeval tv; // [sp+38h] [bp-80Ch] BYREF
  struct tm tp; // [sp+40h] [bp-804h] BYREF

  v1 = fopen("/tmp/miner/droa.log", "r+");
  v2 = v1;
  if ( v1 )
  {
    fseek(v1, -2, 2);
    v3 = 0;
    while ( fgetc(v2) != 10 )
    {
      ++v3;
      fseek(v2, -2, 1);
    }
    v4 = ~v3;
    fseek(v2, v4, 2);
    v5 = (char *)calloc(0x200u, 1u);
    fgets(v5, 512, v2);
    if ( strstr(v5, "RTime:") )
    {
      tv.tv_sec = 0;
      tv.tv_usec = 0;
      gettimeofday(&tv, 0);
      tv_sec = tv.tv_sec;
      localtime_r(&tv_sec, &tp);
      fseek(v2, v4, 2);
      v6 = ftell(v2);
      memset(v5, 0, 0x200u);
      tm_hour = tp.tm_hour;
      tm_min = tp.tm_min;
      tm_sec = tp.tm_sec;
      tm_mday = tp.tm_mday;
      v19 = tp.tm_mon + 1;
      v10 = tp.tm_year + 1888;
      v11 = sub_283D0();
      sub_2671C();
      v13 = sub_3F36C(v12);
      sprintf(
        v5,
        "%d-%02d-%02d %02d:%02d:%02d RTime:%ld,AR:%1f,RStat:%d\n",
        v10 + 12,
        v19,
        tm_mday,
        tm_hour,
        tm_min,
        tm_sec,
        v11,
        v0,
        v13);
      fprintf(v2, v5);
      fflush(v2);
      fclose(v2);
      v14 = strlen(v5);
      truncate("/tmp/miner/droa.log", v6 + v14);
    }
    else if ( (unsigned int)off_AFC24 > 3 )
    {
      v15 = sub_283D0();
      sub_2671C();
      v17 = sub_3F36C(v16);
      snprintf((char *)&tp, 0x800u, "RTime:%ld,AR:%f,RStat:%d", v15, v0, v17);
      sub_3BAF0(3, &tp, 0);
    }
    free(v5);
  }
  else if ( (unsigned int)off_AFC24 > 3 )
  {
    strcpy((char *)&tp, "droalog open failed in 15 minute");
    sub_3AF5C(3, &tp, 0, *(_DWORD *)"nute");
  }
}
