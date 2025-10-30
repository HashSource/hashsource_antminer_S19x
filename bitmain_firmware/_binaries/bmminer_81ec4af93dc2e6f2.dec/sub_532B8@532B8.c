int sub_532B8()
{
  int result; // r0

  if ( dword_531054 )
  {
    dword_531058 = 0;
    pthread_join(dword_53105C, 0);
    pthread_mutex_destroy(&stru_531078);
    sub_586A8(dword_531090);
    dword_531054 = 0;
    return pthread_mutex_destroy(&stru_531060);
  }
  return result;
}
