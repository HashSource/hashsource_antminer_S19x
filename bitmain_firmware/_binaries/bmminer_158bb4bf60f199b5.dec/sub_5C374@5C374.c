void **__fastcall sub_5C374(pthread_rwlock_t *a1)
{
  pthread_rwlock_t *v1; // r4
  void **v3; // r5

  v1 = a1 + 10;
  if ( pthread_rwlock_wrlock(a1 + 10) )
    sub_5505C("get_queued", 9434);
  v3 = sub_5C2F4((int)a1);
  if ( pthread_rwlock_unlock(v1) )
    sub_55C08("get_queued", 9436);
  off_9E444();
  return v3;
}
