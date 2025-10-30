int __fastcall sub_2EF14(pthread_rwlock_t *a1, const char *a2, int a3)
{
  int result; // r0

  result = pthread_rwlock_init(a1, 0);
  if ( result )
    sub_2EEB8(a2, a3);
  return result;
}
