int __fastcall sub_35650(int a1, const char *a2, int a3)
{
  if ( pthread_mutex_init((pthread_mutex_t *)a1, 0) )
    sub_35598(a2, a3);
  return sub_35454((pthread_rwlock_t *)(a1 + 24), a2, a3);
}
