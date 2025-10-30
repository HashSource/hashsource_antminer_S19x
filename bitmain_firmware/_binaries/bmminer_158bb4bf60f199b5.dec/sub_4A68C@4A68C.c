int __fastcall sub_4A68C(int *a1)
{
  int v2; // r1
  int tv_nsec; // r3
  __time_t v4; // r2
  __time_t v5; // r12
  int v6; // r1
  int result; // r0
  struct timespec v8; // [sp+0h] [bp-8h] BYREF

  sub_4A3D0(&v8);
  v2 = *a1;
  v8.tv_nsec += a1[1];
  tv_nsec = v8.tv_nsec;
  v4 = v8.tv_sec + v2;
  v8.tv_sec += v2;
  if ( v8.tv_nsec <= 999999999 )
  {
    if ( v8.tv_nsec < 0 )
    {
      do
      {
        tv_nsec += 1000000000;
        --v4;
      }
      while ( tv_nsec < 0 );
      v8.tv_sec = v4;
      v8.tv_nsec = tv_nsec;
    }
  }
  else
  {
    v5 = v4 + 1;
    v6 = v8.tv_nsec - 1000000000;
    if ( v8.tv_nsec - 1000000000 > 999999999 )
    {
      v6 = -2000000000;
      v5 = v4 + 2;
    }
    v8.tv_sec = v5;
    if ( v8.tv_nsec - 1000000000 > 999999999 )
      v6 += v8.tv_nsec;
    v8.tv_nsec = v6;
  }
  do
    result = clock_nanosleep(1, 1, &v8, 0);
  while ( result == 4 );
  return result;
}
