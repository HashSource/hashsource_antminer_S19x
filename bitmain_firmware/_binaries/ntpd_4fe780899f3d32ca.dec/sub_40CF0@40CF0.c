int sub_40CF0()
{
  alarm_flag = 0;
  alarm_overflow = 0;
  dword_BCBC8 = 3600;
  dword_BCBC4 = 1;
  dword_BCBCC = (int)&off_15180;
  dword_BCBD0 = 0;
  dword_BCBD4 = 0;
  current_time = 0;
  timer_overflows = 0;
  timer_xmtcalls = 0;
  timer_timereset = 0;
  sub_6D6F0(14, sub_40AEC);
  dword_108C9C = 1;
  itimer = 1;
  dword_108CA0 = 0;
  dword_108C98 = 0;
  return sub_40B88();
}
