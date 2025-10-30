int __fastcall sub_25BC4(int a1, int a2)
{
  if ( pthread_mutex_init((pthread_mutex_t *)a1, 0) )
    sub_25B64(a2);
  return sub_25AEC((pthread_rwlock_t *)(a1 + 24), a2);
}
