int sub_23B9C()
{
  struct timespec v1; // [sp+0h] [bp-8h] BYREF

  clock_gettime(1, &v1);
  return sub_23A24(&v1.tv_sec);
}
