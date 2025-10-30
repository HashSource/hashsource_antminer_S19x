int sub_56AF0()
{
  int result; // r0

  if ( dword_5313C4 )
  {
    dword_5313C4 = 0;
    pthread_join(dword_5313C8, 0);
    sub_586A8(dword_5313BC);
    return pthread_mutex_destroy(&stru_5313A4);
  }
  return result;
}
