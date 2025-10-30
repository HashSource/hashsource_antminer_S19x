int __fastcall sub_2D8F4(int a1, const char *a2, const char *a3, int a4)
{
  sub_2D2FC((pthread_mutex_t *)a1, a2, a3, a4);
  sub_2D554((pthread_rwlock_t *)(a1 + 24), a2, a3, a4);
  return sub_2D398((pthread_mutex_t *)a1, a2, a3, a4);
}
