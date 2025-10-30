int sub_478A8()
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
    if ( byte_5C0EFC || byte_4B9A21 || dword_B3094 > 5 )
    {
      v0 = *_errno_location();
      v1 = strerror(v0);
      snprintf(s, 0x800u, "Failed to get sysinfo, errno:%u, reason:%s\n", v0, v1);
      sub_3B6AC(6, s, 0, v2);
    }
    uptime = time(0);
    LODWORD(flt_5C0EF0) = uptime;
  }
  else
  {
    uptime = info.uptime;
    flt_5C0EF0 = *(float *)&info.uptime;
  }
  dword_5BFE3C = (int)((double)uptime - 3.0);
  result = sub_22D44();
  dbl_B6EA0 = (double)result * ((double)SLODWORD(flt_5C0EF0) - (double)dword_5BFE3C);
  return result;
}
