int __fastcall sub_2D800(pthread_rwlock_t *a1, const char *a2, const char *a3, int a4)
{
  int result; // r0
  int *v5; // r0
  char v9[4]; // [sp+20h] [bp-804h] BYREF

  result = pthread_rwlock_init(a1, 0);
  if ( result )
  {
    v5 = _errno_location();
    snprintf(v9, 0x800u, "Failed to pthread_rwlock_init errno=%d in %s %s():%d", *v5, a2, a3, a4);
    sub_1DB6C(3, v9, 1);
    sub_4B2A0(1);
  }
  return result;
}
