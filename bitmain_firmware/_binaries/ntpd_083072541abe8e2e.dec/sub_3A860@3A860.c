int *sub_3A860()
{
  authkeylookups = 0;
  authkeynotfound = 0;
  authencryptions = 0;
  authdecryptions = 0;
  authkeyuncached = 0;
  auth_timereset = current_time;
  return &current_time;
}
