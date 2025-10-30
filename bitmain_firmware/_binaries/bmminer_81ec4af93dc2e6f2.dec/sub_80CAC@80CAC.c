pthread_mutex_t *__fastcall sub_80CAC(const char *a1)
{
  int *v2; // r0
  int *v3; // r0
  int *v4; // r0
  pthread_mutex_t *mutex; // [sp+10h] [bp-Ch]
  int v8; // [sp+14h] [bp-8h]

  if ( a1 )
  {
    mutex = (pthread_mutex_t *)calloc(1u, 0x444u);
    if ( mutex )
    {
      if ( pthread_mutex_init(mutex, 0) )
      {
        v3 = _errno_location();
        sub_89984(2, "src/rotater.c", 95, "pthread_mutex_init fail, errno[%d]", *v3);
        free(mutex);
        return 0;
      }
      else
      {
        v8 = open(a1, 66, 438);
        if ( v8 >= 0 )
        {
          mutex[1].__count = v8;
          mutex[1].__lock = (int)a1;
          return mutex;
        }
        else
        {
          v4 = _errno_location();
          sub_89984(2, "src/rotater.c", 108, "open file[%s] fail, errno[%d]", a1, *v4);
          sub_80B9C(mutex);
          return 0;
        }
      }
    }
    else
    {
      v2 = _errno_location();
      sub_89984(2, "src/rotater.c", 90, "calloc fail, errno[%d]", *v2);
      return 0;
    }
  }
  else
  {
    sub_89984(2, "src/rotater.c", 86, "lock_file is null or 0");
    return 0;
  }
}
