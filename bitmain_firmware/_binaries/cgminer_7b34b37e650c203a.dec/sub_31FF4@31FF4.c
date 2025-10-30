int sub_31FF4()
{
  int v0; // r4

  if ( pthread_mutex_lock(&stru_7453C) )
    sub_2EFE0("current_pool", 838);
  if ( pthread_rwlock_rdlock(&rwlock) )
    sub_30138("current_pool", 838);
  if ( pthread_mutex_unlock(&stru_7453C) )
    sub_2F03C("current_pool", 838);
  v0 = dword_69060;
  if ( pthread_rwlock_unlock(&rwlock) )
    sub_2FB24("current_pool", 842);
  off_67ED8();
  return v0;
}
