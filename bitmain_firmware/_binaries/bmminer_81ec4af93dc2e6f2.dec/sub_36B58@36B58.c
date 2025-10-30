time_t sub_36B58()
{
  time_t result; // r0
  int v1; // r3
  int v2; // r4
  char *v3; // r0
  struct sysinfo v4; // [sp+0h] [bp-940h] BYREF
  char s[256]; // [sp+40h] [bp-900h] BYREF
  char v6[2048]; // [sp+140h] [bp-800h] BYREF

  if ( sysinfo(&v4) )
  {
    v2 = *_errno_location();
    v3 = strerror(v2);
    sprintf(s, "Failed to get sysinfo, errno:%u, reason:%s\n", v2, v3);
    result = time(0);
    dword_5BAF84 = result;
    dword_5BC038 = result + 1;
  }
  else
  {
    dword_5BAF84 = v4.uptime;
    dword_5BC038 = v4.uptime + 1;
    result = sprintf(s, "set_start_time_point total_tv_start_sys=%ld total_tv_end_sys=%ld\n", v4.uptime, v4.uptime + 1);
    if ( byte_5BC044 || byte_4B6CA5 || dword_AFC2C > 4 )
    {
      snprintf(v6, 0x800u, "%s", s);
      return sub_3AF5C(5, v6, 0, v1);
    }
  }
  return result;
}
