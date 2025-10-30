void sub_63D74()
{
  int v0; // r4
  char *v1; // r0
  struct sysinfo v2; // [sp+0h] [bp-940h] BYREF
  char s[256]; // [sp+40h] [bp-900h] BYREF
  char v4[2048]; // [sp+140h] [bp-800h] BYREF

  if ( sysinfo(&v2) )
  {
    v0 = *_errno_location();
    v1 = strerror(v0);
    sprintf(s, "Failed to get sysinfo, errno:%u, reason:%s\n", v0, v1);
    dword_242EA0 = time(0);
    dword_244004 = dword_242EA0 + 1;
  }
  else
  {
    dword_242EA0 = v2.uptime;
    dword_244004 = v2.uptime + 1;
    sprintf(s, "set_start_time_point total_tv_start_sys=%ld total_tv_end_sys=%ld\n", v2.uptime, v2.uptime + 1);
    if ( byte_244080 || byte_1AECC4 || dword_9E320 > 4 )
    {
      snprintf(v4, 0x800u, "%s", s);
      sub_47AB4(5, v4, 0);
    }
  }
}
