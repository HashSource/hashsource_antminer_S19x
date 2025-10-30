void __fastcall sub_2FF04(pthread_rwlock_t *a1, void **a2)
{
  pthread_rwlock_t *v2; // r4
  void **v4; // [sp+4h] [bp-8h] BYREF

  v2 = a1 + 10;
  v4 = a2;
  if ( pthread_rwlock_wrlock(a1 + 10) )
    sub_2EF84("work_completed", 9601);
  sub_2E528((int)a1, v4);
  if ( pthread_rwlock_unlock(v2) )
    sub_2FB24("work_completed", 9603);
  off_67ED8();
  sub_2CBA8(&v4, "cgminer.c", "work_completed", 9605);
}
