int __fastcall sub_3031C(pthread_rwlock_t *a1, int a2)
{
  pthread_rwlock_t *v2; // r6
  int lock; // r4
  int v6; // r3

  v2 = a1 + 10;
  if ( pthread_rwlock_rdlock(a1 + 10) )
    sub_30138("find_queued_work_byid", 9542);
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
    sub_2FB24("find_queued_work_byid", 9544);
  off_67ED8();
  return lock;
}
