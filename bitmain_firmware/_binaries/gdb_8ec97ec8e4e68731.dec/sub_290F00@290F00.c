int sub_290F00()
{
  int result; // r0

  if ( dword_48B5A4 )
  {
    result = sigprocmask(2, &stru_48B628, 0);
    dword_48B5A4 = 0;
  }
  return result;
}
