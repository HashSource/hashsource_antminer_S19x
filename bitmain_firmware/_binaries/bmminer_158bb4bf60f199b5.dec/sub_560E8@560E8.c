int __fastcall sub_560E8(pthread_rwlock_t *a1)
{
  int i; // r4
  int lock; // [sp+4h] [bp-10h]
  struct timeval v5; // [sp+8h] [bp-Ch] BYREF

  sub_4A60C(&v5);
  if ( pthread_rwlock_wrlock(a1 + 10) )
    sub_5505C("age_queued_work", 9574);
  lock = a1[11].__lock;
  if ( lock )
  {
    for ( i = *(_DWORD *)(lock + 352); ; i = *(_DWORD *)(i + 352) )
    {
      sub_4A8FC();
      if ( !i )
        break;
    }
  }
  if ( pthread_rwlock_unlock(a1 + 10) )
    sub_55C08("age_queued_work", 9585);
  off_9E444();
  return 0;
}
