int *sub_423F0()
{
  timer_overflows = 0;
  timer_xmtcalls = 0;
  timer_timereset = current_time;
  return &timer_xmtcalls;
}
