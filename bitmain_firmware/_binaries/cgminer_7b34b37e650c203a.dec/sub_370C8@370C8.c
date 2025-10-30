void **__fastcall sub_370C8(pthread_rwlock_t *a1)
{
  pthread_rwlock_t *v1; // r4
  void **v3; // r5

  v1 = a1 + 10;
  if ( pthread_rwlock_wrlock(a1 + 10) )
    sub_2EF84("get_queued", 9440);
  v3 = sub_37048((int)a1);
  if ( pthread_rwlock_unlock(v1) )
    sub_2FB24("get_queued", 9442);
  off_67ED8();
  return v3;
}
