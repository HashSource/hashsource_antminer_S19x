int __fastcall sub_2175C(int a1, int a2)
{
  _DWORD *ptr; // [sp+10h] [bp-Ch]
  unsigned __int8 v6; // [sp+17h] [bp-5h]

  v6 = 1;
  ptr = sub_202D4(1u, 0xCu, "util.c", "tq_push", 1127);
  *ptr = a2;
  ptr[1] = ptr + 1;
  ptr[2] = ptr + 1;
  sub_1FD4C((pthread_mutex_t *)(a1 + 12), "util.c", "tq_push", 1131);
  if ( *(_BYTE *)(a1 + 8) != 1 )
  {
    sub_1FA00(ptr + 1, a1);
  }
  else
  {
    free(ptr);
    v6 = 0;
  }
  pthread_cond_signal((pthread_cond_t *)(a1 + 40));
  sub_1FE7C((pthread_mutex_t *)(a1 + 12), "util.c", "tq_push", 1144);
  return v6;
}
