int sub_3616C()
{
  pthread_t v0; // r0
  int v2; // [sp+Ch] [bp-10h]
  int v3; // [sp+10h] [bp-Ch]
  int i; // [sp+14h] [bp-8h]

  v0 = pthread_self();
  pthread_detach(v0);
  sub_35B90();
  sub_2D554(&stru_92FC0, "cgminer.c", "restart_thread", 5507);
  v3 = dword_94258;
  sub_2D6C8(&stru_92FC0, "cgminer.c", "restart_thread", 5509);
  for ( i = 0; i < v3; ++i )
  {
    v2 = *(_DWORD *)(*(_DWORD *)(dword_91F50 + 4 * i) + 36);
    if ( v2 && !*(_DWORD *)(v2 + 32) )
    {
      *(_BYTE *)(*(_DWORD *)(dword_91F50 + 4 * i) + 62) = 1;
      sub_47820(v2);
      sub_2D2FC(&stru_94048, "cgminer.c", "restart_thread", 5528);
      (*(void (__fastcall **)(int))(*(_DWORD *)(v2 + 4) + 76))(v2);
      sub_2D434(&stru_94048, "cgminer.c", "restart_thread", 5530);
    }
  }
  sub_2D2FC(&stru_92F9C, "cgminer.c", "restart_thread", 5534);
  pthread_cond_broadcast(&stru_941C8);
  sub_2D434(&stru_92F9C, "cgminer.c", "restart_thread", 5536);
  return 0;
}
