time_t sub_20998()
{
  int v0; // r4
  char *v1; // r0
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  if ( (unsigned int)dword_9E31C > 3 )
  {
    v0 = *_errno_location();
    v1 = strerror(v0);
    snprintf(s, 0x800u, "Failed to get sysinfo, errno = %u, reason = %s.\n", v0, v1);
    sub_47AB4(3, s, 0);
  }
  return time(0);
}
