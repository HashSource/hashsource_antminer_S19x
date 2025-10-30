int __fastcall sub_2FB80(pthread_rwlock_t *a1, const char *a2, int a3)
{
  if ( pthread_rwlock_unlock(a1) )
    sub_2FB24(a2, a3);
  return off_67ED8();
}
