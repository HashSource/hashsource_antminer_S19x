int sub_35B2C()
{
  sub_2D2FC((pthread_mutex_t *)dword_86E4C, "cgminer.c", "wake_gws", 5431);
  pthread_cond_signal(&stru_90E98);
  return sub_2D434((pthread_mutex_t *)dword_86E4C, "cgminer.c", "wake_gws", 5433);
}
