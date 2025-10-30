int __fastcall sub_78614(pthread_mutex_t *a1, const char *a2, int a3)
{
  int result; // r0
  int *v6; // r0
  char v7[128]; // [sp+4h] [bp-88h] BYREF

  result = pthread_mutex_init(a1, 0);
  if ( result == 12 )
    return 1;
  if ( result )
  {
    v6 = _errno_location();
    sub_75B10(*v6, (int)v7, 0x80u);
    sub_6F554(a2, a3, (int)"isc_mutex_init() failed: %s", v7);
    return 34;
  }
  return result;
}
