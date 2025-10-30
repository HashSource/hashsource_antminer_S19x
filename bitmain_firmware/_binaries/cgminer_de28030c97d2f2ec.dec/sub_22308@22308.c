int __fastcall sub_22308(__time_t *a1)
{
  int result; // r0
  struct timespec tp; // [sp+8h] [bp-Ch] BYREF

  result = clock_gettime(1, &tp);
  *a1 = tp.tv_sec;
  a1[1] = tp.tv_nsec / 1000;
  return result;
}
