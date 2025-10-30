void __fastcall sub_10C574(pthread_rwlock_t *a1)
{
  if ( a1 )
  {
    pthread_rwlock_destroy(a1);
    CRYPTO_free(a1);
  }
}
