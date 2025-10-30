int __fastcall sub_75FE8(__time_t *a1)
{
  __time_t tv_sec; // r2
  int tv_usec; // r3
  __suseconds_t v4; // r1
  int v5; // r2
  __time_t v6; // r0
  int v7; // r2
  __time_t v8; // r1
  int result; // r0
  int *v10; // r0
  struct timeval tv; // [sp+4h] [bp-90h] BYREF
  char v12[128]; // [sp+Ch] [bp-88h] BYREF

  if ( !a1 )
    sub_6ECC0((int)"./../lib/isc/unix/time.c", 150, 0, "t != ((void *)0)");
  if ( gettimeofday(&tv, 0) == -1 )
  {
    v10 = _errno_location();
    sub_75B10(*v10, (int)v12, 0x80u);
    sub_6F554("./../lib/isc/unix/time.c", 154, (int)"%s", v12);
    return 34;
  }
  tv_sec = tv.tv_sec;
  tv_usec = tv.tv_usec;
  if ( tv.tv_usec < 0 )
  {
    v7 = tv.tv_sec - 1;
    do
    {
      v8 = v7;
      tv_usec += 1000000;
      --v7;
    }
    while ( tv_usec < 0 );
    tv.tv_sec = v8;
    tv.tv_usec = tv_usec;
    goto LABEL_11;
  }
  v4 = 999999;
  if ( tv.tv_usec > 999999 )
  {
    v5 = tv.tv_sec + 1;
    do
    {
      v6 = v5;
      tv_usec -= 1000000;
      ++v5;
    }
    while ( tv_usec > 999999 );
    tv.tv_sec = v6;
    tv.tv_usec = tv_usec;
LABEL_11:
    _syslog_chk(3, 1, "gettimeofday returned bad tv_usec: corrected");
    tv_sec = tv.tv_sec;
  }
  if ( tv_sec < 0 )
  {
    result = 34;
  }
  else
  {
    v4 = tv.tv_usec;
    tv_usec = 1000;
    result = 0;
  }
  if ( tv_sec >= 0 )
  {
    *a1 = tv_sec;
    a1[1] = tv_usec * v4;
  }
  return result;
}
