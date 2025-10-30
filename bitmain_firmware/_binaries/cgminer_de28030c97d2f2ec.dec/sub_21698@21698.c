int __fastcall sub_21698(int a1, char a2)
{
  sub_1FD4C((pthread_mutex_t *)(a1 + 12), "util.c", "tq_freezethaw", 1106);
  *(_BYTE *)(a1 + 8) = a2;
  pthread_cond_signal((pthread_cond_t *)(a1 + 40));
  return sub_1FE7C((pthread_mutex_t *)(a1 + 12), "util.c", "tq_freezethaw", 1109);
}
