int sub_55AA4()
{
  if ( pthread_mutex_lock((pthread_mutex_t *)dword_1AF0E4) )
    sub_550B8("wake_gws", 5363);
  pthread_cond_signal(&stru_244050);
  if ( pthread_mutex_unlock((pthread_mutex_t *)dword_1AF0E4) )
    sub_55114("wake_gws", 5365);
  return off_9E444();
}
