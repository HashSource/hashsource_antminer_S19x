int __fastcall sub_17028(int a1, int a2)
{
  int v4; // r1
  int v5; // r4

  if ( pthread_mutex_lock(&mutex) )
    sub_14B08("get_chip_temp", 870);
  sub_149C4(&stru_9FEE4, "get_chip_temp", 870);
  if ( pthread_mutex_unlock(&mutex) )
    sub_14A40("get_chip_temp", 870);
  v4 = 108 * a1 + 24 * a2;
  if ( *((_BYTE *)&dword_9F80C[455] + v4 + 3) )
  {
    if ( pthread_rwlock_unlock(&stru_9FEE4) )
      sub_14AA4("get_chip_temp", 879);
    off_9E444();
    if ( pthread_mutex_lock(&mutex) )
      sub_14B08("get_chip_temp_max", 822);
    sub_149C4(&stru_9FEE4, "get_chip_temp_max", 822);
    if ( pthread_mutex_unlock(&mutex) )
      sub_14A40("get_chip_temp_max", 822);
    v5 = SHIWORD(dword_9FF04);
    if ( pthread_rwlock_unlock(&stru_9FEE4) )
      sub_14AA4("get_chip_temp_max", 822);
  }
  else
  {
    v5 = *(__int16 *)((char *)&word_9FF10[14] + v4);
    if ( pthread_rwlock_unlock(&stru_9FEE4) )
      sub_14AA4("get_chip_temp", 876);
  }
  off_9E444();
  return v5;
}
