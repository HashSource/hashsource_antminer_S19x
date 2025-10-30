int __fastcall sub_57944(int a1)
{
  int v2; // r5
  char *v3; // r0
  int result; // r0
  struct sysinfo info; // [sp+8h] [bp-844h] BYREF
  char s[2052]; // [sp+48h] [bp-804h] BYREF

  if ( !sysinfo(&info) )
  {
    dword_244004 = info.uptime;
    result = sub_4A60C((struct timeval *)&dword_1AF0EC);
    if ( a1 )
      return result;
    goto LABEL_8;
  }
  if ( byte_244080 || byte_1AECC4 || dword_9E320 > 5 )
  {
    v2 = *_errno_location();
    v3 = strerror(v2);
    snprintf(s, 0x800u, "Failed to get sysinfo, errno:%u, reason:%s\n", v2, v3);
    sub_47AB4(6, s, 0);
  }
  dword_244004 = time(0);
  result = sub_4A60C((struct timeval *)&dword_1AF0EC);
  if ( !a1 )
  {
LABEL_8:
    if ( !byte_24511C )
    {
      if ( byte_1AECC6 )
        return sub_5658C();
    }
  }
  return result;
}
