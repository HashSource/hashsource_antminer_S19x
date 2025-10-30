int __fastcall sub_5C25C(int a1, const char *a2, const char *a3, int a4)
{
  sub_5BF6C((pthread_mutex_t *)a1, a2, a3, a4);
  sub_5C0E4((pthread_rwlock_t *)(a1 + 24), a2, a3, a4);
  return sub_5C004((pthread_mutex_t *)a1, a2, a3, a4);
}
