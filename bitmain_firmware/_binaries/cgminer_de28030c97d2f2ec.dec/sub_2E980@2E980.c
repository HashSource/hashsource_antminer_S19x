int __fastcall sub_2E980(int a1, const char *a2, const char *a3, int a4)
{
  sub_2E354((pthread_mutex_t *)a1, a2, a3, a4);
  return sub_2E4CC((pthread_rwlock_t *)(a1 + 24), a2, a3, a4);
}
