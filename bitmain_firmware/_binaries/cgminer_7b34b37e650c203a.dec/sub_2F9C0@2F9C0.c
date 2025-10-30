int sub_2F9C0()
{
  if ( pthread_mutex_lock((pthread_mutex_t *)dword_69010) )
    sub_2EFE0("wake_gws", 5369);
  pthread_cond_signal(&stru_744D0);
  if ( pthread_mutex_unlock((pthread_mutex_t *)dword_69010) )
    sub_2F03C("wake_gws", 5371);
  return off_67ED8();
}
