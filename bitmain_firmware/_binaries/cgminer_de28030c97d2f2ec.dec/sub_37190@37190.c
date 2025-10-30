int sub_37190()
{
  pthread_t v0; // r0
  int v2; // [sp+Ch] [bp-10h]
  int v3; // [sp+10h] [bp-Ch]
  int i; // [sp+14h] [bp-8h]

  v0 = pthread_self();
  pthread_detach(v0);
  sub_36BC4();
  sub_2E59C(&stru_94158, "cgminer.c", "restart_thread", 5507);
  v3 = dword_953F0;
  sub_2E704(&stru_94158, "cgminer.c", "restart_thread", 5509);
  for ( i = 0; i < v3; ++i )
  {
    v2 = *(_DWORD *)(*(_DWORD *)(dword_930E8 + 4 * i) + 36);
    if ( v2 && !*(_DWORD *)(v2 + 32) )
    {
      *(_BYTE *)(*(_DWORD *)(dword_930E8 + 4 * i) + 62) = 1;
      sub_485CC(v2);
      sub_2E354(&stru_951E0, "cgminer.c", "restart_thread", 5528);
      (*(void (__fastcall **)(int))(*(_DWORD *)(v2 + 4) + 76))(v2);
      sub_2E484(&stru_951E0, "cgminer.c", "restart_thread", 5530);
    }
  }
  sub_2E354(&stru_94134, "cgminer.c", "restart_thread", 5534);
  pthread_cond_broadcast(&stru_95360);
  sub_2E484(&stru_94134, "cgminer.c", "restart_thread", 5536);
  return 0;
}
