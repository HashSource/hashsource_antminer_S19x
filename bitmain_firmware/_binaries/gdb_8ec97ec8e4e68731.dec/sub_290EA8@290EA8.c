int sub_290EA8()
{
  int result; // r0

  if ( !dword_48B5A4 )
  {
    sigemptyset(&stru_48B5A8);
    sigemptyset(&stru_48B628);
    sigaddset(&stru_48B5A8, 28);
    result = sigprocmask(0, &stru_48B5A8, &stru_48B628);
    dword_48B5A4 = 1;
  }
  return result;
}
