void __fastcall sub_83F54(pthread_mutex_t *a1)
{
  int *v1; // r0
  int *v2; // r0

  if ( a1 )
  {
    if ( a1[1].__count && close(a1[1].__count) )
    {
      v1 = _errno_location();
      sub_8CD10(2, "src/rotater.c", 68, "close fail, errno[%d]", *v1);
    }
    if ( pthread_mutex_destroy(a1) )
    {
      v2 = _errno_location();
      sub_8CD10(2, "src/rotater.c", 73, "pthread_mutex_destroy fail, errno[%d]", *v2);
    }
    sub_8CD10(0, "src/rotater.c", 76, "zlog_rotater_del[%p]", a1);
    free(a1);
  }
  else
  {
    sub_8CD10(2, "src/rotater.c", 64, "a_rotater is null or 0");
  }
}
