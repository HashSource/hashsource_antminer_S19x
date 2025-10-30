int sub_3E0F0()
{
  struct timespec v1; // [sp+0h] [bp-8h] BYREF

  clock_gettime(1, &v1);
  return sub_3E088(&v1);
}
