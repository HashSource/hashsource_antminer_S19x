int __fastcall sub_19110(int *a1, int *a2)
{
  __time_t tv_sec; // r2
  int tv_usec; // r3
  int v6; // r2
  __time_t v7; // r0
  int v8; // r2
  __time_t v9; // r1
  int result; // r0
  int v11; // r1
  int v12; // r0
  __suseconds_t v13; // r3
  int v14; // r2
  int v15; // r1
  unsigned int v16; // r3
  int *v17; // r0
  struct timeval tv; // [sp+4h] [bp-8Ch] BYREF
  char v19[128]; // [sp+Ch] [bp-84h] BYREF

  if ( !a1 )
    sub_1073C();
  if ( !a2 )
    sub_1073C();
  if ( (unsigned int)a2[1] > 0x3B9AC9FF )
    sub_1073C();
  if ( gettimeofday(&tv, 0) == -1 )
  {
    v17 = _errno_location();
    sub_129C0(*v17, (int)v19, 0x80u);
    sub_15008("./../lib/isc/unix/time.c", 198, "%s", v19);
    return 34;
  }
  tv_sec = tv.tv_sec;
  tv_usec = tv.tv_usec;
  if ( tv.tv_usec < 0 )
  {
    v8 = tv.tv_sec - 1;
    do
    {
      v9 = v8;
      tv_usec += 1000000;
      --v8;
    }
    while ( tv_usec < 0 );
    tv.tv_sec = v9;
    tv.tv_usec = tv_usec;
  }
  else
  {
    if ( tv.tv_usec <= 999999 )
      goto LABEL_14;
    v6 = tv.tv_sec + 1;
    do
    {
      v7 = v6;
      tv_usec -= 1000000;
      ++v6;
    }
    while ( tv_usec > 999999 );
    tv.tv_sec = v7;
    tv.tv_usec = tv_usec;
  }
  _syslog_chk(3, 1, "gettimeofday returned bad tv_usec: corrected");
  tv_sec = tv.tv_sec;
LABEL_14:
  if ( tv_sec < 0 )
    return 34;
  v11 = *a2;
  if ( *a2 < 0 && (int)(((unsigned __int64)(unsigned int)v11 + tv_sec) >> 32) >= 1 )
    return 41;
  v12 = a2[1];
  v13 = tv.tv_usec;
  v14 = tv_sec + v11;
  v15 = 999999999;
  *a1 = v14;
  v16 = v12 + 1000 * v13;
  a1[1] = v16;
  if ( v16 > 0x3B9AC9FF )
    v15 = -1000000000;
  result = 0;
  if ( v16 > 0x3B9AC9FF )
  {
    *a1 = v14 + 1;
    a1[1] = v16 + v15;
  }
  return result;
}
