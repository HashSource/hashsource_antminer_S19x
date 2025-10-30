int sub_7C7F0()
{
  int result; // r0
  int v1; // [sp+Ch] [bp-8h]

  sub_8CD10(0, "src/zlog.c", 304, "------zlog_fini start------");
  v1 = pthread_rwlock_wrlock(&stru_5BF628);
  if ( v1 )
    return sub_8CD10(2, "src/zlog.c", 307, "pthread_rwlock_wrlock fail, rc[%d]", v1);
  if ( dword_5BF65C )
  {
    sub_7BBA4();
    dword_5BF65C = 0;
  }
  else
  {
    sub_8CD10(2, "src/zlog.c", 312, "before finish, must zlog_init() or dzlog_init() fisrt");
  }
  sub_8CD10(0, "src/zlog.c", 320, "------zlog_fini end------");
  result = pthread_rwlock_unlock(&stru_5BF628);
  if ( result )
    return sub_8CD10(2, "src/zlog.c", 323, "pthread_rwlock_unlock fail, rc=[%d]", result);
  return result;
}
