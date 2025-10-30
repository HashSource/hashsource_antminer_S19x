int __fastcall sub_16BD4(int a1)
{
  int v2; // r4

  if ( pthread_mutex_lock(&mutex) )
    sub_14B08("get_pcb_temp_min_one_chain", 827);
  sub_149C4(&stru_9FEE4, "get_pcb_temp_min_one_chain", 827);
  if ( pthread_mutex_unlock(&mutex) )
    sub_14A40("get_pcb_temp_min_one_chain", 827);
  v2 = word_9FF10[54 * a1 + 2];
  if ( pthread_rwlock_unlock(&stru_9FEE4) )
    sub_14AA4("get_pcb_temp_min_one_chain", 827);
  off_9E444();
  return v2;
}
