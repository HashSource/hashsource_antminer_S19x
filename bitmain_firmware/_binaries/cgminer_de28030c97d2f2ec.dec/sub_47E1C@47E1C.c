_DWORD *__fastcall sub_47E1C(pthread_rwlock_t *a1, const void *a2, size_t a3, const void *a4, int a5, size_t a6)
{
  int v11; // [sp+18h] [bp-Ch]
  _DWORD *v12; // [sp+1Ch] [bp-8h]

  v12 = 0;
  sub_2E59C(a1 + 10, "cgminer.c", "clone_queued_work_bymidstate", 9583);
  v11 = sub_47C98(a1[11].__lock, a2, a3, a4, a5, a6);
  if ( v11 )
    v12 = sub_358F8(v11, 0);
  sub_2E704(a1 + 10, "cgminer.c", "clone_queued_work_bymidstate", 9587);
  return v12;
}
