int __fastcall sub_303D0(pthread_rwlock_t *a1, void *a2, size_t a3, const void *a4, int a5, size_t a6)
{
  pthread_rwlock_t *v6; // r4
  int v11; // r5

  v6 = a1 + 10;
  if ( pthread_rwlock_rdlock(a1 + 10) )
    sub_30138("find_queued_work_bymidstate", 9495);
  v11 = sub_2E46C(a1[11].__lock, a2, a3, a4, a5, a6);
  if ( pthread_rwlock_unlock(v6) )
    sub_2FB24("find_queued_work_bymidstate", 9497);
  off_67ED8();
  return v11;
}
