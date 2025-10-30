_DWORD *__fastcall sub_5603C(pthread_rwlock_t *a1, void *a2, size_t a3, const void *a4, int a5, size_t a6)
{
  pthread_rwlock_t *v6; // r5
  _DWORD *v11; // r6

  v6 = a1 + 10;
  if ( pthread_rwlock_wrlock(a1 + 10) )
    sub_5505C("take_queued_work_bymidstate", 9608);
  v11 = (_DWORD *)sub_5494C(a1[11].__lock, a2, a3, a4, a5, a6);
  if ( v11 )
    sub_54A08((int)a1, v11);
  if ( pthread_rwlock_unlock(v6) )
    sub_55C08("take_queued_work_bymidstate", 9612);
  off_9E444();
  return v11;
}
