int sub_16940()
{
  int v0; // r4

  if ( pthread_mutex_lock(&mutex) )
    sub_14B08("get_pcb_temp_min", 807);
  sub_149C4(&stru_9FEE4, "get_pcb_temp_min", 807);
  if ( pthread_mutex_unlock(&mutex) )
    sub_14A40("get_pcb_temp_min", 807);
  v0 = (__int16)dword_9FF08;
  if ( pthread_rwlock_unlock(&stru_9FEE4) )
    sub_14AA4("get_pcb_temp_min", 807);
  off_9E444();
  return v0;
}
