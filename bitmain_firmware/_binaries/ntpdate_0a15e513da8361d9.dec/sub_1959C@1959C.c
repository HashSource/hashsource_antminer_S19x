int __fastcall sub_1959C(__time_t *a1)
{
  int v2; // r2
  int tv_usec; // r3
  __suseconds_t v4; // r1
  int v5; // r2
  __time_t v6; // r0
  bool v7; // nf
  int result; // r0
  int *v9; // r0
  int v10; // r2
  __time_t v11; // r1
  struct timeval tv; // [sp+Ch] [bp-90h] BYREF
  char v13[128]; // [sp+14h] [bp-88h] BYREF

  if ( !a1 )
    sub_10C38();
  if ( gettimeofday(&tv, 0) == -1 )
  {
    v9 = _errno_location();
    sub_12EAC(*v9, (int)v13, 0x80u);
    sub_1557C("./../lib/isc/unix/time.c", 154, "%s", v13);
    return 34;
  }
  tv_usec = tv.tv_usec;
  if ( tv.tv_usec < 0 )
  {
    v10 = tv.tv_sec - 1;
    do
    {
      v11 = v10;
      tv_usec += 1000000;
      --v10;
    }
    while ( tv_usec < 0 );
    tv.tv_sec = v11;
    tv.tv_usec = tv_usec;
    goto LABEL_8;
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
LABEL_8:
    _syslog_chk(3, 1, "gettimeofday returned bad tv_usec: corrected");
  }
  v7 = tv.tv_sec < 0;
  if ( tv.tv_sec < 0 )
  {
    result = 34;
  }
  else
  {
    *a1 = tv.tv_sec;
    v4 = tv.tv_usec;
    v2 = 1000;
    result = 0;
  }
  if ( !v7 )
    a1[1] = v2 * v4;
  return result;
}
