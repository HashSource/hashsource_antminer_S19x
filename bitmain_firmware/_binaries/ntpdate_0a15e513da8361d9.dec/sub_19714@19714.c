int __fastcall sub_19714(_DWORD *a1, int *a2)
{
  int tv_usec; // r3
  int v5; // r2
  __time_t v6; // r0
  int result; // r0
  int v8; // r0
  int v9; // r2
  __suseconds_t v10; // r1
  int v11; // r3
  unsigned int v12; // r2
  int *v13; // r0
  int v14; // r2
  __time_t v15; // r1
  struct timeval tv; // [sp+4h] [bp-8Ch] BYREF
  char v17[128]; // [sp+Ch] [bp-84h] BYREF

  if ( !a1 )
    sub_10C38();
  if ( !a2 )
    sub_10C38();
  if ( (unsigned int)a2[1] > 0x3B9AC9FF )
    sub_10C38();
  if ( gettimeofday(&tv, 0) == -1 )
  {
    v13 = _errno_location();
    sub_12EAC(*v13, (int)v17, 0x80u);
    sub_1557C("./../lib/isc/unix/time.c", 198, "%s", v17);
    return 34;
  }
  tv_usec = tv.tv_usec;
  if ( tv.tv_usec < 0 )
  {
    v14 = tv.tv_sec - 1;
    do
    {
      v15 = v14;
      tv_usec += 1000000;
      --v14;
    }
    while ( tv_usec < 0 );
    tv.tv_sec = v15;
    tv.tv_usec = tv_usec;
  }
  else
  {
    if ( tv.tv_usec <= 999999 )
      goto LABEL_11;
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
  }
  _syslog_chk(3, 1, "gettimeofday returned bad tv_usec: corrected");
LABEL_11:
  if ( tv.tv_sec < 0 )
    return 34;
  v8 = *a2;
  if ( *a2 < 0 && (int)(((unsigned __int64)(unsigned int)v8 + tv.tv_sec) >> 32) >= 1 )
    return 41;
  v9 = a2[1];
  v10 = tv.tv_usec;
  v11 = tv.tv_sec + v8;
  *a1 = tv.tv_sec + v8;
  v12 = v9 + 1000 * v10;
  if ( v12 > 0x3B9AC9FF )
  {
    *a1 = v11 + 1;
    v10 = 13824;
  }
  result = 0;
  if ( v12 > 0x3B9AC9FF )
    HIWORD(v10) = -15259;
  a1[1] = v12;
  if ( v12 > 0x3B9AC9FF )
    a1[1] = v12 + v10;
  return result;
}
