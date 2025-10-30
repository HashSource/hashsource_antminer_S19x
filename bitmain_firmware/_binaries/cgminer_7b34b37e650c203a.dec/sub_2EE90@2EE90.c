int __fastcall sub_2EE90(pthread_mutex_t *a1, const char *a2, int a3)
{
  int result; // r0

  result = pthread_mutex_init(a1, 0);
  if ( result )
    sub_2EE34(a2, a3);
  return result;
}
