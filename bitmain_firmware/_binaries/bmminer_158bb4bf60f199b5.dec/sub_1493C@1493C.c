int __fastcall sub_1493C(pthread_mutex_t *a1)
{
  int result; // r0
  int *v2; // r0
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  result = pthread_mutex_init(a1, 0);
  if ( result )
  {
    v2 = _errno_location();
    snprintf(
      s,
      0x800u,
      "Failed to pthread_mutex_init errno=%d in %s %s():%d",
      *v2,
      "temperature/temperature.c",
      "init_temp_info",
      658);
    sub_47AB4(3, s, 1);
    sub_62EC0(1);
  }
  return result;
}
