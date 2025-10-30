int sub_2F40C()
{
  double v0; // r0
  int v2; // [sp+4h] [bp-8h]

  HIDWORD(v0) = (unsigned __int8)ntp_minpoll;
  sys_poll = ntp_minpoll;
  LODWORD(v0) = sys_precision;
  ldexp(v0, (int)&sys_poll);
  clock_jitter = 1.0;
  LODWORD(freq_cnt) = (int)clock_minstep;
  return v2;
}
