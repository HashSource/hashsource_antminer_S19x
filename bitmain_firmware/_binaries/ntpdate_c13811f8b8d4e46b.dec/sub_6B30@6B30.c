int sub_6B30()
{
  double v0; // d0
  int result; // r0
  double v2; // d0
  int v3; // lr
  double v4; // d5
  __time_t v5; // r2
  double v6; // d0
  __suseconds_t v7; // r3
  double v8; // d0
  struct timeval delta; // [sp+4h] [bp-18h] BYREF
  struct timeval olddelta; // [sp+Ch] [bp-10h] BYREF

  if ( v0 == 0.0 )
  {
    if ( enable_panic_check && allow_panic )
    {
      sub_A828(3, "adj_systime: allow_panic is TRUE!");
      if ( allow_panic )
        sub_1073C("systime.c", 310, 2, "!allow_panic");
    }
    return 1;
  }
  v2 = v0 + sys_residual;
  if ( v2 >= 0.0 )
  {
    v3 = 0;
  }
  else
  {
    v2 = -v2;
    v3 = 1;
  }
  delta.tv_sec = (int)v2;
  v4 = sys_tick;
  v5 = (int)v2;
  v6 = v2 - (double)(int)v2;
  if ( sys_tick <= sys_fuzz )
    v4 = 0.000001;
  v7 = (int)((double)(int)(v6 / v4 + 0.5) * v4 * 1000000.0 + 0.5);
  delta.tv_usec = v7;
  if ( v7 > 999999 )
  {
    v6 = v6 - 1.0;
    v7 -= 1000000;
    delta.tv_sec = ++v5;
    delta.tv_usec = v7;
  }
  v8 = v6 - (double)v7 * 0.000001;
  sys_residual = v8;
  if ( v3 )
  {
    v5 = -v5;
    delta.tv_sec = v5;
    sys_residual = -v8;
    delta.tv_usec = -v7;
  }
  if ( !v5 && !delta.tv_usec || adjtime(&delta, &olddelta) >= 0 )
  {
    if ( enable_panic_check && allow_panic )
      sub_A828(3, "adj_systime: allow_panic is TRUE!");
    return 1;
  }
  sub_A828(3, "adj_systime: %m");
  result = enable_panic_check;
  if ( enable_panic_check )
  {
    result = allow_panic;
    if ( allow_panic )
    {
      sub_A828(3, "adj_systime: allow_panic is TRUE!");
      return 0;
    }
  }
  return result;
}
