int sub_55C64()
{
  int v0; // r4

  if ( pthread_mutex_lock(&stru_2440BC) )
    sub_550B8("total_work_inc", 2260);
  if ( pthread_rwlock_wrlock(&rwlock) )
    sub_5505C("total_work_inc", 2260);
  v0 = dword_1AF0E8++;
  if ( pthread_rwlock_unlock(&rwlock) )
    sub_55C08("total_work_inc", 2262);
  if ( pthread_mutex_unlock(&stru_2440BC) )
    sub_55114("total_work_inc", 2262);
  off_9E444();
  return v0;
}
