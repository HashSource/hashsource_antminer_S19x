int sub_3747C()
{
  pthread_t v0; // r0
  int v1; // r8
  int v2; // r5
  int v3; // r3
  pthread_rwlock_t *v4; // r4

  v0 = pthread_self();
  pthread_detach(v0);
  sub_37134();
  if ( pthread_rwlock_rdlock(&stru_744A8) )
    sub_30138("restart_thread", 5445);
  v1 = dword_75588;
  v2 = pthread_rwlock_unlock(&stru_744A8);
  if ( v2 )
    sub_2FB24("restart_thread", 5447);
  off_67ED8();
  if ( v1 > 0 )
  {
    do
    {
      v3 = *(_DWORD *)(dword_744A4 + 4 * v2);
      v4 = *(pthread_rwlock_t **)(v3 + 36);
      if ( v4 && !v4[1].__lock )
      {
        *(_BYTE *)(v3 + 62) = 1;
        sub_32C30(v4);
        if ( pthread_mutex_lock(&stru_767C8) )
          sub_2EFE0("restart_thread", 5466);
        (*(void (__fastcall **)(pthread_rwlock_t *))(v4->__nr_readers + 76))(v4);
        if ( pthread_mutex_unlock(&stru_767C8) )
          sub_2F03C("restart_thread", 5468);
        off_67ED8();
      }
      ++v2;
    }
    while ( v1 != v2 );
  }
  if ( pthread_mutex_lock(&stru_767F4) )
    sub_2EFE0("restart_thread", 5472);
  pthread_cond_broadcast(&stru_76700);
  if ( pthread_mutex_unlock(&stru_767F4) )
    sub_2F03C("restart_thread", 5474);
  off_67ED8();
  return 0;
}
