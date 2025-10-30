_DWORD *__fastcall sub_2FF90(pthread_rwlock_t *a1, void *a2, size_t a3, const void *a4, int a5, size_t a6)
{
  pthread_rwlock_t *v6; // r5
  _DWORD *v11; // r6

  v6 = a1 + 10;
  if ( pthread_rwlock_wrlock(a1 + 10) )
    sub_2EF84("take_queued_work_bymidstate", 9614);
  v11 = (_DWORD *)sub_2E46C(a1[11].__lock, a2, a3, a4, a5, a6);
  if ( v11 )
    sub_2E528((int)a1, v11);
  if ( pthread_rwlock_unlock(v6) )
    sub_2FB24("take_queued_work_bymidstate", 9618);
  off_67ED8();
  return v11;
}
