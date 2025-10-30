int sub_CE0E4()
{
  int result; // r0

  if ( dword_6DF3F4 )
  {
    sub_10BFDC(dword_6DF3F4, sub_CDE88);
    dword_6DF3F4 = 0;
  }
  result = sub_10C574(global_engine_lock);
  global_engine_lock = 0;
  return result;
}
