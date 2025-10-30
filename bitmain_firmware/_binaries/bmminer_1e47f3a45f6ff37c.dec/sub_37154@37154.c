int sub_37154()
{
  int result; // r0
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
    dword_5BFE3C = time(0);
    LODWORD(flt_5C0EF0) = dword_5BFE3C + 1;
    return dword_5BFE3C + 1;
  }
  else
  {
    dword_5BFE3C = v4.uptime;
    LODWORD(flt_5C0EF0) = v4.uptime + 1;
    result = sprintf(s, "set_start_time_point total_tv_start_sys=%ld total_tv_end_sys=%ld\n", v4.uptime, v4.uptime + 1);
    if ( byte_5C0EFC || byte_4B9A21 || dword_B3094 > 4 )
    {
      snprintf(v6, 0x800u, "%s", s);
      return sub_3B6AC(5, v6, 0, v1);
    }
  }
  return result;
}
