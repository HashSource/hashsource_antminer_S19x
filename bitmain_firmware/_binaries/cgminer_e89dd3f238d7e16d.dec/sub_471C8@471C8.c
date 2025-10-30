int __fastcall sub_471C8(pthread_rwlock_t *a1, int a2)
{
  int v5; // [sp+Ch] [bp-8h]

  sub_2D554(a1 + 10, "cgminer.c", "find_queued_work_byid", 9618);
  v5 = sub_47118(a1[11].__lock, a2);
  sub_2D6C8(a1 + 10, "cgminer.c", "find_queued_work_byid", 9620);
  return v5;
}
