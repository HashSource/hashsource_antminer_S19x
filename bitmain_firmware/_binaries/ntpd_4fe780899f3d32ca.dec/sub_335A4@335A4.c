int __fastcall sub_335A4(int result)
{
  sys_leap = result;
  xmt_leap = result;
  if ( result != 3 )
  {
    if ( leap_sec_in_progress )
      xmt_leap = 3;
  }
  return result;
}
