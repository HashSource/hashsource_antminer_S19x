int __fastcall sub_47D84(pthread_rwlock_t *a1, const void *a2, size_t a3, const void *a4, int a5, size_t a6)
{
  int v11; // [sp+1Ch] [bp-8h]

  sub_2E59C(a1 + 10, "cgminer.c", "find_queued_work_bymidstate", 9571);
  v11 = sub_47C98(a1[11].__lock, a2, a3, a4, a5, a6);
  sub_2E704(a1 + 10, "cgminer.c", "find_queued_work_bymidstate", 9573);
  return v11;
}
