int __fastcall sub_3003C(pthread_rwlock_t *a1)
{
  int i; // r4
  int lock; // [sp+4h] [bp-10h]
  struct timeval v5; // [sp+8h] [bp-Ch] BYREF

  sub_239A4(&v5);
  if ( pthread_rwlock_wrlock(a1 + 10) )
    sub_2EF84("age_queued_work", 9580);
  lock = a1[11].__lock;
  if ( lock )
  {
    for ( i = *(_DWORD *)(lock + 352); ; i = *(_DWORD *)(i + 352) )
    {
      sub_23C94();
      if ( !i )
        break;
    }
  }
  if ( pthread_rwlock_unlock(a1 + 10) )
    sub_2FB24("age_queued_work", 9591);
  off_67ED8();
  return 0;
}
