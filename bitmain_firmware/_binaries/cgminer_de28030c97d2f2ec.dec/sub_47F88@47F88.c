int __fastcall sub_47F88(pthread_rwlock_t *a1, int a2)
{
  int v5; // [sp+Ch] [bp-8h]

  sub_2E59C(a1 + 10, "cgminer.c", "find_queued_work_byid", 9618);
  v5 = sub_47ED8(a1[11].__lock, a2);
  sub_2E704(a1 + 10, "cgminer.c", "find_queued_work_byid", 9620);
  return v5;
}
