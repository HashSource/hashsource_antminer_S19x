int sub_18D18()
{
  packets_dropped = 0;
  packets_ignored = 0;
  packets_received = 0;
  packets_sent = 0;
  packets_notsent = 0;
  handler_calls = 0;
  handler_pkts = 0;
  io_timereset = current_time;
  return current_time;
}
