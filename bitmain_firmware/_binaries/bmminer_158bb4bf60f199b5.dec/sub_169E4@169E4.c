int sub_169E4()
{
  int v0; // r4

  if ( pthread_mutex_lock(&mutex) )
    sub_14B08("get_pcb_temp_max", 812);
  sub_149C4(&stru_9FEE4, "get_pcb_temp_max", 812);
  if ( pthread_mutex_unlock(&mutex) )
    sub_14A40("get_pcb_temp_max", 812);
  v0 = (__int16)dword_9FF04;
  if ( pthread_rwlock_unlock(&stru_9FEE4) )
    sub_14AA4("get_pcb_temp_max", 812);
  off_9E444();
  return v0;
}
