int __fastcall sub_18698(unsigned int a1)
{
  pthread_mutex_t *lock; // r3
  int v3; // r4

  sub_185F8();
  if ( pthread_mutex_lock(&stru_33388) )
    sub_150D0("./../lib/isc/result.c", 179, "((pthread_mutex_lock(((&lock))) == 0) ? 0 : 34) == 0");
  lock = &stru_33388;
  while ( 1 )
  {
    lock = (pthread_mutex_t *)lock[1].__lock;
    if ( !lock )
      break;
    if ( lock->__lock <= a1 && lock->__count >= a1 )
    {
      v3 = sub_1103C(
             (_DWORD *)lock->__kind,
             lock->__nusers,
             a1 - lock->__lock + 1,
             *(_DWORD *)(lock->__owner + 4 * (a1 - lock->__lock)));
      if ( v3 )
        goto LABEL_8;
      break;
    }
  }
  v3 = sub_1103C((_DWORD *)isc_msgcat, 3, 1, (int)"(result code text not available)");
LABEL_8:
  if ( pthread_mutex_unlock(&stru_33388) )
    sub_150D0("./../lib/isc/result.c", 202, "((pthread_mutex_unlock(((&lock))) == 0) ? 0 : 34) == 0");
  return v3;
}
