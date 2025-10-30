int __fastcall sub_57BAC(int a1)
{
  int v2; // r4

  if ( pthread_rwlock_rdlock(&stru_244028) )
    sub_561E4("get_thread", 604);
  v2 = *(_DWORD *)(dword_244024 + 4 * a1);
  if ( pthread_rwlock_unlock(&stru_244028) )
    sub_55C08("get_thread", 606);
  off_9E444();
  return v2;
}
