int *sub_3B0B0()
{
  authkeylookups = 0;
  authkeynotfound = 0;
  authencryptions = 0;
  authdecryptions = 0;
  authkeyuncached = 0;
  auth_timereset = current_time;
  return &current_time;
}
