int sub_5C728()
{
  pthread_t v0; // r0
  int v1; // r8
  int v2; // r5
  int v3; // r3
  pthread_rwlock_t *v4; // r4

  v0 = pthread_self();
  pthread_detach(v0);
  sub_5C3E0();
  if ( pthread_rwlock_rdlock(&stru_244028) )
    sub_561E4("restart_thread", 5439);
  v1 = dword_245108;
  v2 = pthread_rwlock_unlock(&stru_244028);
  if ( v2 )
    sub_55C08("restart_thread", 5441);
  off_9E444();
  if ( v1 > 0 )
  {
    do
    {
      v3 = *(_DWORD *)(dword_244024 + 4 * v2);
      v4 = *(pthread_rwlock_t **)(v3 + 36);
      if ( v4 && !v4[1].__lock )
      {
        *(_BYTE *)(v3 + 62) = 1;
        sub_58CC0(v4);
        if ( pthread_mutex_lock(&stru_246348) )
          sub_550B8("restart_thread", 5460);
        (*(void (__fastcall **)(pthread_rwlock_t *))(v4->__nr_readers + 76))(v4);
        if ( pthread_mutex_unlock(&stru_246348) )
          sub_55114("restart_thread", 5462);
        off_9E444();
      }
      ++v2;
    }
    while ( v1 != v2 );
  }
  if ( pthread_mutex_lock(&stru_246374) )
    sub_550B8("restart_thread", 5466);
  pthread_cond_broadcast(stru_246280);
  if ( pthread_mutex_unlock(&stru_246374) )
    sub_55114("restart_thread", 5468);
  off_9E444();
  return 0;
}
