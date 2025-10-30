time_t sub_302F8()
{
  int v0; // r4
  char *v1; // r0
  int v2; // r3
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  if ( (unsigned int)off_AFC24 > 3 )
  {
    v0 = *_errno_location();
    v1 = strerror(v0);
    snprintf(s, 0x800u, "Failed to get sysinfo, errno = %u, reason = %s.\n", v0, v1);
    sub_3AF5C(3, s, 0, v2);
  }
  return time(0);
}
