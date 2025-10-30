int __fastcall sub_63218(pthread_rwlock_t *a1)
{
  int v2; // r1
  int v3; // r3
  int v4; // r1
  int v5; // r2
  int nr_writers_queued; // r3
  int result; // r0

  a1[1].__lock = 0;
  if ( pthread_rwlock_wrlock(&stru_24638C) )
    sub_5505C("enable_device", 11228);
  v2 = dword_242FEC;
  v3 = dword_1B07D0;
  a1->__lock = dword_1B07D0;
  *(_DWORD *)(v2 + 4 * v3) = a1;
  dword_1B07D0 = v3 + 1;
  if ( pthread_rwlock_unlock(&stru_24638C) )
    sub_55C08("enable_device", 11230);
  off_9E444();
  if ( byte_242FFC )
    nr_writers_queued = a1[4].__nr_writers_queued;
  else
    nr_writers_queued = 20744;
  if ( byte_242FFC )
    v5 = dword_1B07D4;
  else
    HIWORD(nr_writers_queued) = 36;
  if ( byte_242FFC )
  {
    nr_writers_queued += v5;
    dword_1B07D4 = nr_writers_queued;
  }
  else
  {
    v4 = *(_DWORD *)nr_writers_queued;
    v5 = a1[4].__nr_writers_queued;
  }
  if ( !byte_242FFC )
    *(_DWORD *)nr_writers_queued = v5 + v4;
  result = pthread_rwlock_init(a1 + 10, 0);
  if ( result )
    sub_55000("enable_device", 11241);
  a1[11].__lock = 0;
  return result;
}
