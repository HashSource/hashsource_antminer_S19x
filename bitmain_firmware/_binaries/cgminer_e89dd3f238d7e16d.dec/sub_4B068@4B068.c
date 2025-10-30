int __fastcall sub_4B068(char a1)
{
  int v1; // r4
  int *v2; // r0
  char *v3; // r0
  int result; // r0
  char v6[12]; // [sp+10h] [bp-84Ch] BYREF
  struct sysinfo info; // [sp+810h] [bp-4Ch] BYREF

  if ( sysinfo(&info) )
  {
    if ( byte_90DC0 || byte_865D1 || dword_857E4 > 5 )
    {
      v1 = *_errno_location();
      v2 = _errno_location();
      v3 = strerror(*v2);
      snprintf(v6, 0x800u, "Failed to get sysinfo, errno:%u, reason:%s\n", v1, v3);
      sub_1DB6C(6, v6, 0);
    }
    dword_94204 = time(0);
  }
  else
  {
    dword_94204 = info.uptime;
  }
  result = sub_21AC0(&dword_86ED8);
  if ( a1 != 1 && byte_94200 != 1 )
  {
    if ( byte_866FC )
      return sub_49874();
  }
  return result;
}
