void __fastcall sub_55FB0(pthread_rwlock_t *a1, void **a2)
{
  pthread_rwlock_t *v2; // r4
  void **v4; // [sp+4h] [bp-8h] BYREF

  v2 = a1 + 10;
  v4 = a2;
  if ( pthread_rwlock_wrlock(a1 + 10) )
    sub_5505C("work_completed", 9595);
  sub_54A08((int)a1, v4);
  if ( pthread_rwlock_unlock(v2) )
    sub_55C08("work_completed", 9597);
  off_9E444();
  sub_53084(&v4, "cgminer.c", "work_completed", 9599);
}
