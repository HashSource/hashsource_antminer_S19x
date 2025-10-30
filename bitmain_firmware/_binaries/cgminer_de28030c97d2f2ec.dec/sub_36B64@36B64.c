int sub_36B64()
{
  sub_2E354((pthread_mutex_t *)dword_87FE4, "cgminer.c", "wake_gws", 5431);
  pthread_cond_signal(&stru_92030);
  return sub_2E484((pthread_mutex_t *)dword_87FE4, "cgminer.c", "wake_gws", 5433);
}
