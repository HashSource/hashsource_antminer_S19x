int ntpd_time_stepped()
{
  int v0; // r5
  int result; // r0

  v0 = mon_enabled;
  if ( mon_enabled )
  {
    sub_312E8(0);
    return sub_311C4(v0);
  }
  return result;
}
