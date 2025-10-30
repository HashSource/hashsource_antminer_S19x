int __fastcall sub_1F798(int a1, const char *a2, const char *a3, int a4)
{
  sub_1F708((pthread_rwlock_t *)(a1 + 24), a2, a3, a4);
  return sub_1F584((pthread_mutex_t *)a1, a2, a3, a4);
}
