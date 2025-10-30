_DWORD *__fastcall sub_30194(pthread_rwlock_t *a1, int a2)
{
  pthread_rwlock_t *v2; // r7
  _DWORD *lock; // r4
  int v6; // r5

  v2 = a1 + 10;
  if ( pthread_rwlock_rdlock(a1 + 10) )
    sub_30138("clone_queued_work_byid", 9554);
  lock = (_DWORD *)a1[11].__lock;
  if ( lock )
  {
    v6 = lock[88];
    if ( a2 == lock[85] )
    {
      v6 = (int)lock;
    }
    else
    {
      if ( !v6 )
      {
        lock = 0;
        goto LABEL_10;
      }
      lock = *(_DWORD **)(v6 + 352);
      while ( a2 != *(_DWORD *)(v6 + 340) )
      {
        if ( !lock )
          goto LABEL_10;
        v6 = (int)lock;
        lock = (_DWORD *)lock[88];
      }
    }
    lock = sub_2FD8C();
    sub_2CA90((int)lock, v6, 0);
  }
LABEL_10:
  if ( pthread_rwlock_unlock(v2) )
    sub_2FB24("clone_queued_work_byid", 9558);
  off_67ED8();
  return lock;
}
