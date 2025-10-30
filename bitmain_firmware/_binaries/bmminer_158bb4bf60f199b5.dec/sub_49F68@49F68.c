char *sub_49F68()
{
  char *v0; // r4

  v0 = (char *)sub_496AC(1u, 0x58u, "util.c", "tq_new", 1077);
  *(_DWORD *)v0 = v0;
  *((_DWORD *)v0 + 1) = v0;
  pthread_mutex_init((pthread_mutex_t *)(v0 + 12), 0);
  pthread_cond_init((pthread_cond_t *)(v0 + 40), 0);
  return v0;
}
