_DWORD *__fastcall sub_48004(pthread_rwlock_t *a1, int a2)
{
  int v5; // [sp+8h] [bp-Ch]
  _DWORD *v6; // [sp+Ch] [bp-8h]

  v6 = 0;
  sub_2E59C(a1 + 10, "cgminer.c", "clone_queued_work_byid", 9630);
  v5 = sub_47ED8(a1[11].__lock, a2);
  if ( v5 )
    v6 = sub_358F8(v5, 0);
  sub_2E704(a1 + 10, "cgminer.c", "clone_queued_work_byid", 9634);
  return v6;
}
