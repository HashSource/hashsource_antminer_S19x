int sub_7194C()
{
  int v1; // [sp+4h] [bp-4h] BYREF

  pthread_mutex_lock(&stru_65E3FC);
  sub_6E060(27, &v1);
  return pthread_mutex_unlock(&stru_65E3FC);
}
