int __fastcall sub_149C4(pthread_rwlock_t *a1, const char *a2, int a3)
{
  int result; // r0
  int *v6; // r0
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  result = pthread_rwlock_rdlock(a1);
  if ( result )
  {
    v6 = _errno_location();
    snprintf(s, 0x800u, "WTF RDLOCK ERROR ON LOCK! errno=%d in %s %s():%d", *v6, "temperature/temperature.c", a2, a3);
    sub_47AB4(3, s, 1);
    sub_62EC0(1);
  }
  return result;
}
