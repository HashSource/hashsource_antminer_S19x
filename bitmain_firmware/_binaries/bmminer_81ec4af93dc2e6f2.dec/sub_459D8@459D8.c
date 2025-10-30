int sub_459D8()
{
  int v0; // r4
  char *v1; // r0
  int v2; // r3
  time_t uptime; // r0
  int result; // r0
  struct sysinfo info; // [sp+8h] [bp-844h] BYREF
  char s[2052]; // [sp+48h] [bp-804h] BYREF

  if ( sysinfo(&info) )
  {
    if ( byte_5BC044 || byte_4B6CA5 || dword_AFC2C > 5 )
    {
      v0 = *_errno_location();
      v1 = strerror(v0);
      snprintf(s, 0x800u, "Failed to get sysinfo, errno:%u, reason:%s\n", v0, v1);
      sub_3AF5C(6, s, 0, v2);
    }
    uptime = time(0);
    dword_5BC038 = uptime;
  }
  else
  {
    uptime = info.uptime;
    dword_5BC038 = info.uptime;
  }
  dword_5BAF84 = (int)((double)uptime - 3.0);
  result = sub_227EC();
  dbl_B4128 = ((double)dword_5BC038 - (double)dword_5BAF84) * (double)result;
  return result;
}
