int sub_4A804()
{
  struct timespec v1; // [sp+0h] [bp-8h] BYREF

  clock_gettime(1, &v1);
  return sub_4A68C(&v1.tv_sec);
}
