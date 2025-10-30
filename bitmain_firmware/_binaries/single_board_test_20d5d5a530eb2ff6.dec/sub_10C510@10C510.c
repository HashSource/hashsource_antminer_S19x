pthread_rwlock_t *sub_10C510()
{
  pthread_rwlock_t *v0; // r0
  pthread_rwlock_t *v1; // r4

  v0 = (pthread_rwlock_t *)sub_E0740((void *)0x20);
  v1 = v0;
  if ( v0 )
  {
    if ( !pthread_rwlock_init(v0, 0) )
      return v1;
    CRYPTO_free(v1);
  }
  return 0;
}
