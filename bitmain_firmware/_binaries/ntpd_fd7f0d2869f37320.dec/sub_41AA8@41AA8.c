int sub_41AA8()
{
  alarm_flag = 0;
  dword_BDBD8 = 1;
  dword_BDBE0 = 86400;
  dword_BDBE4 = 0;
  dword_BDBE8 = 0;
  dword_BDBDC = 3600;
  alarm_overflow = 0;
  current_time = 0;
  timer_overflows = 0;
  timer_xmtcalls = 0;
  timer_timereset = 0;
  sub_6E6C4(14, sub_41890);
  dword_109CBC = 1;
  itimer = 1;
  dword_109CC0 = 0;
  dword_109CB8 = 0;
  return sub_4192C();
}
