int sub_58084()
{
  int v0; // r4

  if ( pthread_mutex_lock(&stru_2440BC) )
    sub_550B8("current_pool", 833);
  if ( pthread_rwlock_rdlock(&rwlock) )
    sub_561E4("current_pool", 833);
  if ( pthread_mutex_unlock(&stru_2440BC) )
    sub_55114("current_pool", 833);
  v0 = dword_1AF12C;
  if ( pthread_rwlock_unlock(&rwlock) )
    sub_55C08("current_pool", 837);
  off_9E444();
  return v0;
}
