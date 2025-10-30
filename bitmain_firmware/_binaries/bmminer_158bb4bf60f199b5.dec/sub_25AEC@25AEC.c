int __fastcall sub_25AEC(pthread_rwlock_t *a1, int a2)
{
  int result; // r0
  int *v4; // r0
  char s[2048]; // [sp+10h] [bp-800h] BYREF

  result = pthread_rwlock_init(a1, 0);
  if ( result )
  {
    v4 = _errno_location();
    snprintf(
      s,
      0x800u,
      "Failed to pthread_rwlock_init errno=%d in %s %s():%d",
      *v4,
      "bmminer.c",
      "bitmain_soc_prepare",
      a2);
    sub_47AB4(3, s, 1);
    sub_62EC0(1);
  }
  return result;
}
