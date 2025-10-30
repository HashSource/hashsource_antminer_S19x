int sub_290E74()
{
  int result; // r0

  if ( dword_48B4A0 )
  {
    result = sigprocmask(2, &stru_48B524, 0);
    dword_48B4A0 = 0;
  }
  return result;
}
