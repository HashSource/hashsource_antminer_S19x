__int64 __fastcall sub_3DFCC(__time_t *a1)
{
  int tv_nsec; // kr00_4
  __int64 result; // r0
  struct timespec v4; // [sp+0h] [bp-8h] BYREF

  clock_gettime(1, &v4);
  tv_nsec = v4.tv_nsec;
  result = 274877907LL * v4.tv_nsec;
  *a1 = v4.tv_sec;
  a1[1] = tv_nsec / 1000;
  return result;
}
