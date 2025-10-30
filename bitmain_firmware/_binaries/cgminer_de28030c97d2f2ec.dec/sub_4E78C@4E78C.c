void sub_4E78C()
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
    dword_9535C = time(0);
    dword_9539C = dword_9535C + 1;
  }
  else
  {
    dword_9535C = info.uptime;
    dword_9539C = info.uptime + 1;
    sprintf(s, "set_start_time_point total_tv_start_sys=%ld total_tv_end_sys=%ld\n", info.uptime, info.uptime + 1);
    if ( byte_91F58 || byte_87769 || dword_8697C > 4 )
    {
      snprintf(v3, 0x800u, "%s", s);
      sub_1E4EC(5, v3, 0);
    }
  }
}
