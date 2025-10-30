_QWORD *__fastcall sub_33B230(_QWORD *a1)
{
  struct timespec v3; // [sp+0h] [bp-Ch] BYREF

  clock_gettime(0, &v3);
  *a1 = 1000000000LL * v3.tv_sec + v3.tv_nsec;
  return a1;
}
