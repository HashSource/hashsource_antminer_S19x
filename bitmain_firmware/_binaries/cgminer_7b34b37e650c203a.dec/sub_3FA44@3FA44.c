void sub_3FA44()
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
    dword_73320 = time(0);
    dword_74484 = dword_73320 + 1;
  }
  else
  {
    dword_73320 = v2.uptime;
    dword_74484 = v2.uptime + 1;
    sprintf(s, "set_start_time_point total_tv_start_sys=%ld total_tv_end_sys=%ld\n", v2.uptime, v2.uptime + 1);
    if ( byte_74500 || byte_68BD4 || dword_67DB4 > 4 )
    {
      snprintf(v4, 0x800u, "%s", s);
      sub_20F58(5, v4, 0);
    }
  }
}
