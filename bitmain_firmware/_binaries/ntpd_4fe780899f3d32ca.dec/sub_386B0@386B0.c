__int64 sub_386B0()
{
  double v0; // d0
  char i; // r3
  __int64 result; // r0

  if ( v0 > 1.0 )
    return sub_64E00(3, "unsupported tick %.3f > 1s ignored", v0);
  if ( measured_tick > v0 )
    return sub_64E00(3, "proto: tick %.3f less than measured tick %.3f, ignored", v0, measured_tick);
  if ( measured_tick < v0 )
  {
    trunc_os_clock = 1;
    result = sub_64E00(5, "proto: truncating system clock to multiples of %.9f", v0);
  }
  sys_tick = v0;
  for ( i = 0; v0 <= 1.0; --i )
    v0 = v0 + v0;
  if ( v0 - 1.0 > 1.0 - v0 * 0.5 )
    ++i;
  sys_precision = i;
  return result;
}
