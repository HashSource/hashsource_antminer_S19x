char *sub_20CB4()
{
  char *v1; // [sp+Ch] [bp-8h]

  v1 = (char *)sub_1F9F8(1u, 0x58u, "util.c", "tq_new", 1075);
  *(_DWORD *)v1 = v1;
  *((_DWORD *)v1 + 1) = v1;
  pthread_mutex_init((pthread_mutex_t *)(v1 + 12), 0);
  pthread_cond_init((pthread_cond_t *)(v1 + 40), 0);
  return v1;
}
