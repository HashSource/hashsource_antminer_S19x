int sub_16A8C()
{
  int v0; // r4

  if ( pthread_mutex_lock(&mutex) )
    sub_14B08("get_chip_temp_min", 817);
  sub_149C4(&stru_9FEE4, "get_chip_temp_min", 817);
  if ( pthread_mutex_unlock(&mutex) )
    sub_14A40("get_chip_temp_min", 817);
  v0 = SHIWORD(dword_9FF08);
  if ( pthread_rwlock_unlock(&stru_9FEE4) )
    sub_14AA4("get_chip_temp_min", 817);
  off_9E444();
  return v0;
}
