int __fastcall sub_55F44(pthread_rwlock_t *a1, int a2)
{
  pthread_rwlock_t *v2; // r4

  v2 = a1 + 10;
  if ( pthread_rwlock_wrlock(a1 + 10) )
    sub_5505C("add_queued", 9443);
  sub_54514((int)a1, a2);
  if ( pthread_rwlock_unlock(v2) )
    sub_55C08("add_queued", 9445);
  return off_9E444();
}
