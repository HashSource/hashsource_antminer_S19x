int sub_2FBB8()
{
  int v0; // r4

  if ( pthread_mutex_lock(&stru_7453C) )
    sub_2EFE0("total_work_inc", 2265);
  if ( pthread_rwlock_wrlock(&rwlock) )
    sub_2EF84("total_work_inc", 2265);
  v0 = dword_69014++;
  if ( pthread_rwlock_unlock(&rwlock) )
    sub_2FB24("total_work_inc", 2267);
  if ( pthread_mutex_unlock(&stru_7453C) )
    sub_2F03C("total_work_inc", 2267);
  off_67ED8();
  return v0;
}
