_DWORD *__fastcall sub_47770(pthread_rwlock_t *a1, const void *a2, size_t a3, const void *a4, int a5, size_t a6)
{
  _DWORD *v11; // [sp+1Ch] [bp-8h]

  sub_2D480(a1 + 10, "cgminer.c", "take_queued_work_bymidstate", 9690);
  v11 = (_DWORD *)sub_46ED8(a1[11].__lock, a2, a3, a4, a5, a6);
  if ( v11 )
    sub_472E4((int)a1, v11);
  sub_2D714(a1 + 10, "cgminer.c", "take_queued_work_bymidstate", 9694);
  return v11;
}
