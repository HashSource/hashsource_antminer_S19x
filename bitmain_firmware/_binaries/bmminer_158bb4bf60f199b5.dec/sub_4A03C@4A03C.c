int __fastcall sub_4A03C(int a1, int a2)
{
  _DWORD *v4; // r6
  _DWORD *v5; // r4
  _DWORD *v6; // r3
  int v7; // r8

  v4 = sub_496AC(1u, 0xCu, "util.c", "tq_push", 1129);
  *v4 = a2;
  v5 = v4 + 1;
  v4[1] = v4 + 1;
  v4[2] = v4 + 1;
  if ( pthread_mutex_lock((pthread_mutex_t *)(a1 + 12)) )
    sub_494CC("tq_push", 1133);
  if ( *(_BYTE *)(a1 + 8) )
  {
    v7 = 0;
    free(v4);
  }
  else
  {
    v6 = *(_DWORD **)(a1 + 4);
    v7 = 1;
    *(_DWORD *)(a1 + 4) = v5;
    v4[1] = a1;
    v4[2] = v6;
    *v6 = v5;
  }
  pthread_cond_signal((pthread_cond_t *)(a1 + 40));
  sub_49450((pthread_mutex_t *)(a1 + 12), "tq_push", 1146);
  off_9E444();
  return v7;
}
