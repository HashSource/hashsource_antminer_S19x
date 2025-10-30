int *sub_32A70()
{
  findpeer_calls = 0;
  assocpeer_calls = 0;
  peer_allocations = 0;
  peer_demobilizations = 0;
  peer_timereset = current_time;
  return &current_time;
}
