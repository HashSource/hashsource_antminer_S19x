int __fastcall sub_35454(pthread_rwlock_t *a1, const char *a2, int a3)
{
  int result; // r0
  int *v6; // r0
  int v7; // r3
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  result = pthread_rwlock_init(a1, 0);
  if ( result )
  {
    v6 = _errno_location();
    snprintf(s, 0x800u, "Failed to pthread_rwlock_init errno=%d in %s %s():%d", *v6, "bmminer.c", a2, a3);
    return sub_3AF5C(3, s, 1, v7);
  }
  return result;
}
