void sub_6FBF4()
{
  if ( pthread_mutex_lock(&stru_65E2CC) )
  {
    nullsub_8();
  }
  else
  {
    if ( dword_21C730 > 0 )
      sub_6FDD8();
    pthread_mutex_unlock(&stru_65E2CC);
  }
}
