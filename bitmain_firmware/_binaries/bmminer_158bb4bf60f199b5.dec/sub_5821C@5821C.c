int sub_5821C()
{
  int v0; // r4

  if ( pthread_mutex_lock(&stru_2440BC) )
    sub_550B8("cp_prio", 7412);
  if ( pthread_rwlock_rdlock(&rwlock) )
    sub_561E4("cp_prio", 7412);
  if ( pthread_mutex_unlock(&stru_2440BC) )
    sub_55114("cp_prio", 7412);
  v0 = *(_DWORD *)(dword_1AF12C + 4);
  if ( pthread_rwlock_unlock(&rwlock) )
    sub_55C08("cp_prio", 7414);
  off_9E444();
  return v0;
}
