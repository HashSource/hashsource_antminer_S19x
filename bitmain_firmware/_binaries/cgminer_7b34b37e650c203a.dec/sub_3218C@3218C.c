int sub_3218C()
{
  int v0; // r4

  if ( pthread_mutex_lock(&stru_7453C) )
    sub_2EFE0("cp_prio", 7418);
  if ( pthread_rwlock_rdlock(&rwlock) )
    sub_30138("cp_prio", 7418);
  if ( pthread_mutex_unlock(&stru_7453C) )
    sub_2F03C("cp_prio", 7418);
  v0 = *(_DWORD *)(dword_69060 + 4);
  if ( pthread_rwlock_unlock(&rwlock) )
    sub_2FB24("cp_prio", 7420);
  off_67ED8();
  return v0;
}
