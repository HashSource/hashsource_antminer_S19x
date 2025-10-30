int sub_73190()
{
  if ( !dword_1B14AC || !dword_1B14B0 )
  {
    pthread_mutex_lock(&stru_1B1494);
    sub_73804(dword_1B14AC);
    dword_1B14B0 = 0;
    pthread_mutex_unlock(&stru_1B1494);
  }
  return 0;
}
