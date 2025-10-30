_DWORD *__fastcall sub_5630C(pthread_rwlock_t *a1, void *a2, size_t a3, const void *a4, int a5, size_t a6)
{
  pthread_rwlock_t *v6; // r4
  int v11; // r5
  _DWORD *v12; // r6

  v6 = a1 + 10;
  if ( pthread_rwlock_rdlock(a1 + 10) )
    sub_561E4("clone_queued_work_bymidstate", 9501);
  v11 = sub_5494C(a1[11].__lock, a2, a3, a4, a5, a6);
  if ( v11 )
  {
    v12 = sub_55E38();
    sub_52F6C((int)v12, v11, 0);
  }
  else
  {
    v12 = 0;
  }
  if ( pthread_rwlock_unlock(v6) )
    sub_55C08("clone_queued_work_bymidstate", 9505);
  off_9E444();
  return v12;
}
