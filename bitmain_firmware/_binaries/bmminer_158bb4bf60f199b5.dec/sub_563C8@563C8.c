int __fastcall sub_563C8(pthread_rwlock_t *a1, int a2)
{
  pthread_rwlock_t *v2; // r6
  int lock; // r4
  int v6; // r3

  v2 = a1 + 10;
  if ( pthread_rwlock_rdlock(a1 + 10) )
    sub_561E4("find_queued_work_byid", 9536);
  lock = a1[11].__lock;
  if ( lock )
  {
    v6 = *(_DWORD *)(lock + 352);
    if ( a2 != *(_DWORD *)(lock + 340) )
    {
      if ( v6 )
      {
        lock = *(_DWORD *)(v6 + 352);
        while ( a2 != *(_DWORD *)(v6 + 340) )
        {
          if ( !lock )
            goto LABEL_10;
          v6 = lock;
          lock = *(_DWORD *)(lock + 352);
        }
      }
      lock = v6;
    }
  }
LABEL_10:
  if ( pthread_rwlock_unlock(v2) )
    sub_55C08("find_queued_work_byid", 9538);
  off_9E444();
  return lock;
}
