int sub_4A830()
{
  struct timespec v1; // [sp+0h] [bp-Ch] BYREF

  clock_gettime(1, &v1);
  return sub_4A74C(&v1.tv_sec);
}
