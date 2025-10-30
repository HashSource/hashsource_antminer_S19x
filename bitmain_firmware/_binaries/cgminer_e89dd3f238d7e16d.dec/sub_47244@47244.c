_DWORD *__fastcall sub_47244(pthread_rwlock_t *a1, int a2)
{
  int v5; // [sp+8h] [bp-Ch]
  _DWORD *v6; // [sp+Ch] [bp-8h]

  v6 = 0;
  sub_2D554(a1 + 10, "cgminer.c", "clone_queued_work_byid", 9630);
  v5 = sub_47118(a1[11].__lock, a2);
  if ( v5 )
    v6 = sub_34898(v5, 0);
  sub_2D6C8(a1 + 10, "cgminer.c", "clone_queued_work_byid", 9634);
  return v6;
}
