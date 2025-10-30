int __fastcall sub_5B718(int a1, const char *a2, const char *a3, int a4)
{
  sub_5B410((pthread_mutex_t *)a1, a2, a3, a4);
  sub_5B594((pthread_rwlock_t *)(a1 + 24), a2, a3, a4);
  return sub_5B4AC((pthread_mutex_t *)a1, a2, a3, a4);
}
