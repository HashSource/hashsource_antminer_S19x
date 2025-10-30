int __fastcall sub_4BD7C(char a1)
{
  int v1; // r4
  int *v2; // r0
  char *v3; // r0
  int result; // r0
  char v6[12]; // [sp+10h] [bp-84Ch] BYREF
  struct sysinfo info; // [sp+810h] [bp-4Ch] BYREF

  if ( sysinfo(&info) )
  {
    if ( byte_91F58 || byte_87769 || dword_8697C > 5 )
    {
      v1 = *_errno_location();
      v2 = _errno_location();
      v3 = strerror(*v2);
      snprintf(v6, 0x800u, "Failed to get sysinfo, errno:%u, reason:%s\n", v1, v3);
      sub_1E4EC(6, v6, 0);
    }
    dword_9539C = time(0);
  }
  else
  {
    dword_9539C = info.uptime;
  }
  result = sub_22308(&dword_88070);
  if ( a1 != 1 && byte_95398 != 1 )
  {
    if ( byte_87894 )
      return sub_4A5C8();
  }
  return result;
}
