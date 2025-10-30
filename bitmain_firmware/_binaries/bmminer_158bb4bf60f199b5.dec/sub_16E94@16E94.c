int __fastcall sub_16E94(int a1, int a2)
{
  int v4; // r1
  int v5; // r4

  if ( pthread_mutex_lock(&mutex) )
    sub_14B08("get_pcb_temp", 850);
  sub_149C4(&stru_9FEE4, "get_pcb_temp", 850);
  if ( pthread_mutex_unlock(&mutex) )
    sub_14A40("get_pcb_temp", 850);
  v4 = 108 * a1 + 24 * a2;
  if ( *((_BYTE *)&dword_9F80C[452] + v4 + 3) )
  {
    if ( pthread_rwlock_unlock(&stru_9FEE4) )
      sub_14AA4("get_pcb_temp", 859);
    off_9E444();
    if ( pthread_mutex_lock(&mutex) )
      sub_14B08("get_pcb_temp_max", 812);
    sub_149C4(&stru_9FEE4, "get_pcb_temp_max", 812);
    if ( pthread_mutex_unlock(&mutex) )
      sub_14A40("get_pcb_temp_max", 812);
    v5 = (__int16)dword_9FF04;
    if ( pthread_rwlock_unlock(&stru_9FEE4) )
      sub_14AA4("get_pcb_temp_max", 812);
  }
  else
  {
    v5 = *(__int16 *)((char *)&word_9FF10[8] + v4);
    if ( pthread_rwlock_unlock(&stru_9FEE4) )
      sub_14AA4("get_pcb_temp", 856);
  }
  off_9E444();
  return v5;
}
