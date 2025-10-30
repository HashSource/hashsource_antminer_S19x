__int64 sub_38E94()
{
  double v0; // d0
  double v1; // d8
  char v2; // r3
  __int64 result; // r0

  v1 = v0;
  if ( v0 > 1.0 )
    return sub_65D40(3, "unsupported tick %.3f > 1s ignored", v0);
  if ( v0 < measured_tick )
    return sub_65D40(3, "proto: tick %.3f less than measured tick %.3f, ignored", v0, measured_tick);
  if ( v0 > measured_tick )
  {
    trunc_os_clock = 1;
    result = sub_65D40(5, "proto: truncating system clock to multiples of %.9f", v0);
  }
  sys_tick = v0;
  v2 = 0;
  if ( v0 <= 1.0 )
  {
    do
    {
      v1 = v1 + v1;
      --v2;
    }
    while ( v1 <= 1.0 );
  }
  if ( v1 - 1.0 > 1.0 - v1 * 0.5 )
    ++v2;
  sys_precision = v2;
  return result;
}
