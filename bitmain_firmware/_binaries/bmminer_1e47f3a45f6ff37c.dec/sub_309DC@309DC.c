int sub_309DC()
{
  int v0; // s15
  time_t v1; // r0
  double v2; // r8
  int v3; // r4
  int v4; // r4
  double v5; // r0
  double v6; // d16
  double v7; // d17
  int result; // r0
  unsigned int v10; // r6
  FILE *v11; // r4
  int v12; // r3
  int v13; // r3
  int v14; // r3
  int v15; // [sp+2Ch] [bp-818h]
  time_t tv_sec; // [sp+34h] [bp-810h] BYREF
  struct timeval tv; // [sp+38h] [bp-80Ch] BYREF
  struct tm tp; // [sp+40h] [bp-804h] BYREF

  v1 = sub_309B4();
  v2 = dbl_9CD900;
  v3 = dword_B413C;
  dword_B413C = v1;
  v4 = v1 - v3;
  LODWORD(v5) = sub_8FDB4(
                  LODWORD(dbl_9CD900) - LODWORD(dbl_5BFE30),
                  (*(_QWORD *)&dbl_9CD900 - *(_QWORD *)&dbl_5BFE30) >> 32);
  dbl_5BFE30 = v2;
  if ( v4 )
    v0 = v4;
  v6 = v5 * 4294967300.0 / 1000000000.0;
  if ( v4 )
    v7 = (double)v0;
  else
    v7 = 1.0;
  dbl_9CD8F8 = v6 / v7;
  if ( (double)sub_22F0C() * 0.75 > v6 / v7 )
  {
    if ( (unsigned int)dword_B308C <= 3 )
      goto LABEL_8;
    snprintf((char *)&tp, 0x800u, "avg rate is lower than ideal rate, %0.2f in %ld mins\n", dbl_9CD8F8, v4 / 60);
    sub_3B6AC(3, &tp, 0, v12);
  }
  if ( (unsigned int)dword_B308C > 3 )
  {
    snprintf((char *)&tp, 0x800u, "30m avg rate is %0.2f in %ld mins\n", dbl_9CD8F8, v4 / 60);
    sub_3B6AC(3, &tp, 0, v13);
  }
LABEL_8:
  result = sub_22F0C();
  v15 = result;
  if ( v4 > 1739 && (double)result * 1.2 < dbl_9CD8F8 )
  {
    if ( (unsigned int)dword_B308C > 3 )
    {
      snprintf((char *)&tp, 0x800u, "avg rate is abnormal, %0.2f in %ld mins\n", dbl_9CD8F8, v4 / 60);
      sub_3B6AC(3, &tp, 0, v14);
    }
    v10 = sub_28830((unsigned __int8)byte_534B58);
    v11 = fopen("/tmp/miner/hashrate.log", "a");
    if ( v11 )
    {
      tv.tv_sec = 0;
      tv.tv_usec = 0;
      gettimeofday(&tv, 0);
      tv_sec = tv.tv_sec;
      localtime_r(&tv_sec, &tp);
      fprintf(
        v11,
        "[%d-%02d-%02d %02d:%02d:%02d] %d %0.2f %d\n",
        tp.tm_year + 1900,
        tp.tm_mon + 1,
        tp.tm_mday,
        tp.tm_hour,
        tp.tm_min,
        tp.tm_sec,
        v15,
        dbl_9CD8F8,
        v10);
      fclose(v11);
    }
    sub_481F0(14, 255);
    return sub_458A0(21, "hash rate abnormal");
  }
  return result;
}
