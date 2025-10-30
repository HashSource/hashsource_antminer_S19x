int __fastcall sub_5647C(pthread_rwlock_t *a1, void *a2, size_t a3, const void *a4, int a5, size_t a6)
{
  pthread_rwlock_t *v6; // r4
  int v11; // r5

  v6 = a1 + 10;
  if ( pthread_rwlock_rdlock(a1 + 10) )
    sub_561E4("find_queued_work_bymidstate", 9489);
  v11 = sub_5494C(a1[11].__lock, a2, a3, a4, a5, a6);
  if ( pthread_rwlock_unlock(v6) )
    sub_55C08("find_queued_work_bymidstate", 9491);
  off_9E444();
  return v11;
}
