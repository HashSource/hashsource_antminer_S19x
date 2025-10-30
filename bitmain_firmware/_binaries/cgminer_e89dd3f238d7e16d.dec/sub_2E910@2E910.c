int __fastcall sub_2E910(int a1, unsigned __int8 *a2)
{
  unsigned __int8 v5; // [sp+Fh] [bp-5h]

  sub_2D2FC((pthread_mutex_t *)(a1 + 188), "cgminer.c", "pool_tclear", 830);
  v5 = *a2;
  *a2 = 0;
  sub_2D434((pthread_mutex_t *)(a1 + 188), "cgminer.c", "pool_tclear", 835);
  return v5;
}
