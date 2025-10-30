int __fastcall sub_2F88C(int a1, unsigned __int8 *a2)
{
  unsigned __int8 v5; // [sp+Fh] [bp-5h]

  sub_2E354((pthread_mutex_t *)(a1 + 188), "cgminer.c", "pool_tset", 815);
  v5 = *a2;
  *a2 = 1;
  sub_2E484((pthread_mutex_t *)(a1 + 188), "cgminer.c", "pool_tset", 820);
  return v5;
}
