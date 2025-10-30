void sub_4DB08()
{
  int v0; // r4
  int *v1; // r0
  char *v2; // r0
  char v3[12]; // [sp+0h] [bp-94Ch] BYREF
  struct sysinfo info; // [sp+800h] [bp-14Ch] BYREF
  char s[260]; // [sp+840h] [bp-10Ch] BYREF

  if ( sysinfo(&info) )
  {
    v0 = *_errno_location();
    v1 = _errno_location();
    v2 = strerror(*v1);
    sprintf(s, "Failed to get sysinfo, errno:%u, reason:%s\n", v0, v2);
    dword_941C4 = time(0);
    dword_94204 = dword_941C4 + 1;
  }
  else
  {
    dword_941C4 = info.uptime;
    dword_94204 = info.uptime + 1;
    sprintf(s, "set_start_time_point total_tv_start_sys=%ld total_tv_end_sys=%ld\n", info.uptime, info.uptime + 1);
    if ( byte_90DC0 || byte_865D1 || dword_857E4 > 4 )
    {
      snprintf(v3, 0x800u, "%s", s);
      sub_1DB6C(5, v3, 0);
    }
  }
}
