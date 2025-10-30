bool __fastcall sub_10C564(pthread_rwlock_t *a1)
{
  return pthread_rwlock_unlock(a1) == 0;
}
