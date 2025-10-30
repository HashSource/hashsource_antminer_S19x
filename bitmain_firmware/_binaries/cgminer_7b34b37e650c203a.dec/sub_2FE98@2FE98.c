int __fastcall sub_2FE98(pthread_rwlock_t *a1, int a2)
{
  pthread_rwlock_t *v2; // r4

  v2 = a1 + 10;
  if ( pthread_rwlock_wrlock(a1 + 10) )
    sub_2EF84("add_queued", 9449);
  sub_2E034((int)a1, a2);
  if ( pthread_rwlock_unlock(v2) )
    sub_2FB24("add_queued", 9451);
  return off_67ED8();
}
