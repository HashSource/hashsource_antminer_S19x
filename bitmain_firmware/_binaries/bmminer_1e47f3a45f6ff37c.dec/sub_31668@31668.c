void sub_31668()
{
  double v0; // d0
  FILE *v1; // r0
  FILE *v2; // r4
  int v3; // r5
  int v4; // r5
  void *v5; // r6
  int v6; // r8
  int tm_hour; // r7
  int v8; // r5
  int tm_min; // r9
  int tm_sec; // r10
  int v11; // r11
  int v12; // r0
  int v13; // r0
  size_t v14; // r0
  int v15; // r4
  int v16; // r0
  int v17; // r0
  int v18; // [sp+28h] [bp-81Ch]
  int tm_mday; // [sp+2Ch] [bp-818h]
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
      fseek(v2, -2, 1);
      ++v3;
    }
    v4 = ~v3;
    fseek(v2, v4, 2);
    v5 = malloc(0x200u);
    memset(v5, 0, 0x200u);
    fgets((char *)v5, 512, v2);
    if ( strstr((const char *)v5, "RTime:") )
    {
      tv.tv_sec = 0;
      tv.tv_usec = 0;
      gettimeofday(&tv, 0);
      tv_sec = tv.tv_sec;
      localtime_r(&tv_sec, &tp);
      fseek(v2, v4, 2);
      v6 = ftell(v2);
      memset(v5, 0, 0x200u);
      tm_mday = tp.tm_mday;
      v18 = tp.tm_mon + 1;
      tm_hour = tp.tm_hour;
      v8 = tp.tm_year + 1900;
      tm_min = tp.tm_min;
      tm_sec = tp.tm_sec;
      v11 = sub_2894C();
      sub_26C3C();
      v13 = sub_40F54(v12);
      sprintf(
        (char *)v5,
        "%d-%02d-%02d %02d:%02d:%02d RTime:%ld,AR:%1f,RStat:%d\n",
        v8,
        v18,
        tm_mday,
        tm_hour,
        tm_min,
        tm_sec,
        v11,
        v0,
        v13);
      fprintf(v2, (const char *)v5);
      fflush(v2);
      fclose(v2);
      v14 = strlen((const char *)v5);
      truncate("/tmp/miner/droa.log", v6 + v14);
    }
    else if ( (unsigned int)dword_B308C > 3 )
    {
      v15 = sub_2894C();
      sub_26C3C();
      v17 = sub_40F54(v16);
      snprintf((char *)&tp, 0x800u, "RTime:%ld,AR:%f,RStat:%d", v15, v0, v17);
      sub_3C288(3, &tp, 0);
    }
    free(v5);
  }
  else if ( (unsigned int)dword_B308C > 3 )
  {
    strcpy((char *)&tp, "droalog open failed in 15 minute");
    sub_3B6AC(3, &tp, 0, *(_DWORD *)"nute");
  }
}
