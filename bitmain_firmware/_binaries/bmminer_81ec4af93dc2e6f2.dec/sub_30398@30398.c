int sub_30398()
{
  time_t v0; // r0
  __int64 v1; // kr00_8
  int v2; // r2
  int v3; // r4
  double v4; // r0
  double v5; // d6
  int result; // r0
  int v8; // r3
  int v9; // r3
  unsigned int v10; // r5
  FILE *v11; // r4
  int v12; // r3
  int v13; // [sp+2Ch] [bp-818h]
  time_t tv_sec; // [sp+34h] [bp-810h] BYREF
  struct timeval tv; // [sp+38h] [bp-80Ch] BYREF
  struct tm s[46]; // [sp+40h] [bp-804h] BYREF

  v0 = sub_30368();
  v1 = qword_9C8A48;
  v2 = dword_B13CC;
  dword_B13CC = v0;
  v3 = v0 - v2;
  v4 = sub_8CA4C((int)qword_9C8A48 - (int)qword_5BAF78, (unsigned __int64)(qword_9C8A48 - qword_5BAF78) >> 32);
  qword_5BAF78 = v1;
  v5 = v4 * 4294967300.0 / 1000000000.0;
  if ( v3 )
    v5 = v5 / (double)v3;
  dbl_9C8A40 = v5;
  if ( (double)sub_229C0() * 0.75 > v5 )
  {
    if ( (unsigned int)off_AFC24 <= 3 )
      goto LABEL_5;
    snprintf((char *)s, 0x800u, "avg rate is lower than ideal rate, %0.2f in %ld mins\n", dbl_9C8A40, v3 / 60);
    sub_3AF5C(3, s, 0, v8);
  }
  if ( (unsigned int)off_AFC24 > 3 )
  {
    snprintf((char *)s, 0x800u, "30m avg rate is %0.2f in %ld mins\n", dbl_9C8A40, v3 / 60);
    sub_3AF5C(3, s, 0, v9);
  }
LABEL_5:
  result = sub_229C0();
  v13 = result;
  if ( v3 > 1739 && (double)result * 1.2 < dbl_9C8A40 )
  {
    if ( (unsigned int)off_AFC24 > 3 )
    {
      snprintf((char *)s, 0x800u, "avg rate is abnormal, %0.2f in %ld mins\n", dbl_9C8A40, v3 / 60);
      sub_3AF5C(3, s, 0, v12);
    }
    v10 = sub_282BC((unsigned __int8)byte_4B6CCC);
    v11 = fopen("/tmp/miner/hashrate.log", "a");
    if ( v11 )
    {
      tv.tv_sec = 0;
      tv.tv_usec = 0;
      gettimeofday(&tv, 0);
      tv_sec = tv.tv_sec;
      localtime_r(&tv_sec, s);
      fprintf(
        v11,
        "[%d-%02d-%02d %02d:%02d:%02d] %d %0.2f %d\n",
        s[0].tm_year + 1900,
        s[0].tm_mon + 1,
        s[0].tm_mday,
        s[0].tm_hour,
        s[0].tm_min,
        s[0].tm_sec,
        v13,
        dbl_9C8A40,
        v10);
      fclose(v11);
    }
    sub_46318(14, 255);
    return sub_43B4C(21, "hash rate abnormal");
  }
  return result;
}
