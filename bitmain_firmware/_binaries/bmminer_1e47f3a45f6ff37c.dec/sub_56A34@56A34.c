int sub_56A34()
{
  int result; // r0

  if ( dword_535F54 )
  {
    dword_535F58 = 0;
    pthread_join(dword_535F5C, 0);
    pthread_mutex_destroy(&stru_535F78);
    sub_5969C(dword_535F90);
    dword_535F54 = 0;
    return pthread_mutex_destroy(&stru_535F60);
  }
  return result;
}
