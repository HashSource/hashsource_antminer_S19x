int sub_3D9D4()
{
  struct timespec v1; // [sp+0h] [bp-8h] BYREF

  clock_gettime(1, &v1);
  return sub_3D85C(&v1.tv_sec);
}
