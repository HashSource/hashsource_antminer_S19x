bool __fastcall sub_10C544(pthread_rwlock_t *a1)
{
  return pthread_rwlock_rdlock(a1) == 0;
}
