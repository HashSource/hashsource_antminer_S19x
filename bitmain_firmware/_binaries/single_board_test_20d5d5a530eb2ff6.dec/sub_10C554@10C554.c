bool __fastcall sub_10C554(pthread_rwlock_t *a1)
{
  return pthread_rwlock_wrlock(a1) == 0;
}
