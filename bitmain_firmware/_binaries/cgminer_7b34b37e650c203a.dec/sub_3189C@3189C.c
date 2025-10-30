int __fastcall sub_3189C(int a1)
{
  int v2; // r5
  char *v3; // r0
  int result; // r0
  struct sysinfo info; // [sp+8h] [bp-844h] BYREF
  char s[2052]; // [sp+48h] [bp-804h] BYREF

  if ( !sysinfo(&info) )
  {
    dword_74484 = info.uptime;
    result = sub_239A4((struct timeval *)&dword_69018);
    if ( a1 )
      return result;
    goto LABEL_8;
  }
  if ( byte_74500 || byte_68BD4 || dword_67DB4 > 5 )
  {
    v2 = *_errno_location();
    v3 = strerror(v2);
    snprintf(s, 0x800u, "Failed to get sysinfo, errno:%u, reason:%s\n", v2, v3);
    sub_20F58(6, s, 0);
  }
  dword_74484 = time(0);
  result = sub_239A4((struct timeval *)&dword_69018);
  if ( !a1 )
  {
LABEL_8:
    if ( !byte_7559C )
    {
      if ( byte_68BD6 )
        return sub_304E0();
    }
  }
  return result;
}
