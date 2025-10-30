int sub_290E24()
{
  int result; // r0

  if ( !dword_48B4A0 )
  {
    sigemptyset(&stru_48B4A4);
    sigemptyset(&stru_48B524);
    sigaddset(&stru_48B4A4, 2);
    result = sigprocmask(0, &stru_48B4A4, &stru_48B524);
    dword_48B4A0 = 1;
  }
  return result;
}
